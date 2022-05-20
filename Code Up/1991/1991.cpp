#include <iostream>
#include <string>
using namespace std;
int add(int x, int y)
{
    while (y != 0)
    {
        int carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }
    return x;
}
int subtract(int x, int y)
{
    while (y != 0)
    {
        int borrow = (~x) & y;
        x = x ^ y;
        y = borrow << 1;
    }
    return x;
}
int multiply(int a, int b){
    int p = 0;
    while(b!=0){
        p = add(p, a);
        b = subtract(b, 1);
    }
    return p;
}
int divide(int x, int y)
{
    int q = 0;
    while(x>=y){
        x = subtract(x, y);
        q = add(q, 1);
    }
    return q;
}
int remainder(int a, int b){
    return subtract(a, multiply(b, divide(a, b)));
}
int main()
{
    string s;
    cin >> s;
    int a = 0;
    int i = 0;
    for (; i < s.length();)
    {
        a = add(a, subtract(s[i],48));
        i = add(i, 1);
    }
    cout << (int)(remainder(a, 3)==0) << endl;
    return 0;
}
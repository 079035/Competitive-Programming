#include <iostream>
#include <vector>

using namespace std;

int k;
vector<int> vec;
char arr[16] = {'1', '2', '3', '4', '5', '6', '7', '8', '9',
                'A', 'B', 'C', 'D', 'E', 'F'};

void f(int n)
{
    if (n == 0)
        return;
    vec.push_back(n % k);
    n /= k;
    f(n);
}

void print_vec()
{
    if (vec.size() == 0)
        return;
    auto itr = vec.end() - 1;
    cout << arr[*itr-1];
    vec.erase(vec.begin() + vec.size() - 1);
    print_vec();
}

int main()
{
    int n;
    cin >> n >> k;
    f(n);
    print_vec();
    return 0;
}
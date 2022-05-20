#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ifstream fin("secret.dic");
    string str;
    vector<string> vec;
    if (fin.is_open())
    {
        while (getline(fin, str))
        {
            vec.push_back(str);
        }
        fin.close();
    }
    for (vector<string>::iterator itr = vec.begin(); itr != vec.end(); itr++)
    {
        cout<<*itr<<endl;
    }
    return 0;
}
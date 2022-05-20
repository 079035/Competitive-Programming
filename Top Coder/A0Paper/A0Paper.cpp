#include <bits/stdc++.h>
using namespace std;
class A0Paper
{
public:
    string canBuild(vector<int> A)
    {
        if (A[0] > 0)
            return "Possible";
        int n = A.size();
        for (int i = n - 1; i > 0; i--)
        {
            A[i - 1] += A[i] / 2;
        }
        if (A[0] > 0)
            return "Possible";
        else
            return "Impossible";
    }
};
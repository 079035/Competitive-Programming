/*
ID: jordidc1
TASK: milk2
LANG: C++
*/

#include <iostream>
#include <fstream>

#include <algorithm>

using namespace std;

struct t{
    int s, e;
};

int cmp(const t& a, const t& b){
    return a.s<b.s;
}

int main()
{
    ofstream fout("milk2.out");
    ifstream fin("milk2.in");
    
    int n, idle=0, start, end, m=-1;
    t a[5000];

    fin>>n;

    for(int i=0;i<n;i++){
        fin>>a[i].s>>a[i].e;
    }

    if(n==1){                                                           // no idle
        fout<<a[0].e-a[0].s<<" "<<0<<endl;
        return 0;
    }
    
    sort(a, a+n, cmp);

    start=a[0].s;
    end=a[0].e;
    for(int i=0;i<n-1;i++){
        if(end>=a[i+1].s){
            end=end>a[i+1].e?end:a[i+1].e;
            if(end-start>m)  
                m=end-start;
        }
        else{
            idle=max(idle, a[i+1].s-end);
            start=a[i+1].s;
            end=a[i+1].e;
        }
    }
    end=a[n-1].e;
    m=m<end-start?end-start:m;

    fout<<m<<" "<<idle<<endl;

    return 0;
}

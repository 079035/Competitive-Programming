#include <iostream>
#include <math.h>
#include <vector>
#include <string.h>

using namespace std;

int cnt_ones(int val){
    int binary[20]={0};
    int i=0, res=0;
    while(1){
        binary[i]=val%2;
        val/=2;
        i++;
        if(val==0) break;
    }
    for(int i=0;i<20;i++)if(binary[i]==1)res++;
    return res;
}

int main()
{
    int n,m,k;
	cin>>n>>m>>k;
	vector<int> v(m);
	int i,val,ans=0;
	for(i=0;i<m;i++) cin>>v[i]; 
	cin>>val;
	for(i=0;i<m;i++) if(cnt_ones(val^v[i])<=k) ans++;
	cout << ans << "\n";
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,value,rem,ans,sum=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>value;
        sum += value;
        ans = sum/m;
        if(i!=0) cout<<" ";
        cout<<ans;
        sum = sum%m;
    }
    return 0;
}


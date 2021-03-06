#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt[102]={0},Max=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        cnt[value]++;
    }
    for(int i=0;i<=100;i++){
        if(cnt[i]>Max)
            Max = cnt[i];
    }
    cout<<Max<<endl;
    return 0;
}


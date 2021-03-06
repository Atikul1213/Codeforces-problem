#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    ll x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        if(x-y==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}


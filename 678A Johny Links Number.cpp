#include<bits/stdc++.h>
#define ll int
using namespace std;
int main()
{
    ll n,k,temp;
    cin>>n>>k;
    temp = k;
    while(k<=n){
        k+=temp;
    }
    cout<<k<<endl;
    return 0;
}


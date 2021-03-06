#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool Ck(ll n){
    ll temp = n;
    int rem;
    while(temp>0){
        rem = temp%10;
        if(rem==0){
                temp/=10;
            continue;
        }
        if(n%rem!=0)
            return false;

        temp/=10;
    }
    return true;
}

int main()
{
    int t;
    ll n;
    cin>>t;
    while(t--){
        cin>>n;

        for(ll i=n;i<=n+2520;i++){
            if(Ck(i)==1){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}


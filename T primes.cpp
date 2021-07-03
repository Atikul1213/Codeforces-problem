#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool isPrime(ll n){
    if(n==2)
        return true;
    else if(n<2 || n%2==0)
        return false;
    else{
        for(ll i=3;i*i<=n;i+=2){
            if(n%i==0)
                return false;
        }
        return true;
    }
}
int main()
{
    ll n,temp;
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        temp = sqrt(n);
       if(temp*temp==n){
        if(isPrime(temp))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
       }
       else
        cout<<"NO"<<endl;
    }
    return 0;
}


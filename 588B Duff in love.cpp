#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<int>prime;
ll Factorize(ll n){
    ll ans = 1;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){

            ans *= i;
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n>1){

        ans *= n;
    }
    return ans;
}
int main()
{
    long long int n;
    cin>>n;
    cout<<Factorize(n)<<endl;
    return 0;
}


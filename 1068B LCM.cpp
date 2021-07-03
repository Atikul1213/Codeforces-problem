#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int Divisor(ll n){
   int cnt =0;
   for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            if(i*i==n)
                cnt+=1;
            else
                cnt+=2;
        }
   }
   return cnt;
}

int main()
{
    ll b;
    cin>>b;
    cout<<Divisor(b)<<endl;
    return 0;
}

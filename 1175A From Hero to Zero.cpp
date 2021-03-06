#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,k,mov,rem;
    cin>>t;
    while(t--){
        cin>>n>>k;
       mov = 0;
       while(n>0){
        if(n%k==0){
            n /= k;
            mov++;
        }
        else{
          rem = n % k;
          mov += rem;
          n -= rem;
        }
       }
       cout<<mov<<endl;
    }

    return 0;
}


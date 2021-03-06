#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,a,b,d,rem;
    cin>>t;
    while(t--){
        cin>>a>>b>>d;

        if(d<a){
           cout<<d<<endl;
        }
        else{
            rem = b % d;
            rem = d - rem;
            cout<<b+rem<<endl;
        }

    }
    return 0;
}




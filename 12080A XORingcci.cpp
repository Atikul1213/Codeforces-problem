#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,n,n1,n2;
    cin>>t;
    while(t--){
        cin>>a>>b>>n;
        n = n %3;
        if(n==0)
            cout<<a<<endl;
       else if(n==1)
            cout<<b<<endl;
        else if(n==2)
            cout<<(a^b)<<endl;
    }
    return 0;
}


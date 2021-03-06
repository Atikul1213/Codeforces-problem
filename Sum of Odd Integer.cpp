#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(k>sqrt(n))
            cout<<"NO"<<endl;
        else if(n%2==1 && k==1)
            cout<<"YES"<<endl;
        else if(n%2==0 && k%2==1)
            cout<<"NO"<<endl;
        else if(n%2==1 && k%2==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}


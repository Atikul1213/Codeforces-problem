#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a1,b1,a2,b2,sum,temp;
    cin>>t;
    while(t--){
        cin>>a1>>b1;
        cin>>a2>>b2;
        bool ck = 0;
        if(  (a1==a2) && (b1+b2)==a1 ) ck = 1;
        if( (a1==b2) && (b1+a2)==a1 ) ck = 1;
        if( (b1==a2) && (a1 + b2)==b1 ) ck = 1;
        if( (b1==b2) && (a1+a2)==b1 ) ck = 1;
        if(ck==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,s,n1,n2;
    cin>>t>>x>>s;
    if(s<t)
        cout<<"NO"<<endl;
    else if(t==s)
        cout<<"YES"<<endl;
    else if((t+x)>s)
        cout<<"NO"<<endl;
    else{
        n1 = s - t;
        n2 = n1 % x;
        if(n2==0 || n2 == 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}


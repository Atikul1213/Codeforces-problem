#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    if(t==10){
            if(n==1) cout<<-1;
    else{
        for(int i=1;i<n;i++)
            cout<<1;
        cout<<0;
    }
    }
    else{
        for(int i=1;i<=n;i++)
            cout<<t;
    }

    cout<<endl;
    return 0;
}


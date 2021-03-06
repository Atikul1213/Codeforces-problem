#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==1)
            cout<<-1<<endl;
        else{
        if(n&1){
                cout<<2;
            for(int i=1;i<n;i++)
            cout<<3;
            cout<<endl;
        }
        else{
            for(int i=1;i<n;i++)
                cout<<2;
            cout<<7<<endl;
        }
        }
    }
    return 0;
}


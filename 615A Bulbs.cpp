#include<bits/stdc++.h>
using namespace std;
bool flag[103];
int main()
{
    int t,n,m,n1,value;
    cin>>t>>m;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>value;
            flag[value] = true;
        }
    }
    for(int i=1;i<=m;i++){
        if(flag[i]==false){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}


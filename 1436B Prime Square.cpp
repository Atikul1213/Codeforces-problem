#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ck ;
    cin>>t;
    while(t--){
        cin>>n;
        ck = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==n-1 &&j==n-1){
                        cout<<1;
                    continue;
                }
                if(i==j){
                    cout<<"1 "<<"1 ";
                j++;
                }
            else if(i==n-1&&j==0)
              cout<<"1 ";
            else
                    cout<<"0 ";
            }
            cout<<endl;
        }
    }
    return 0;
}


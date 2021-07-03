#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int x = 1, y = 2;
        if(n==2){
                cout<<-1<<endl;
                continue;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(x<=n*n){
                    cout<<x<<" ";
                    x+=2;
                }
                else if(y<=n*n){
                    cout<<y<<" ";
                    y+=2;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}


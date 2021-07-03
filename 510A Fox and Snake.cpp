#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cnt = 0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        if(i%2==0){
          for(int j=0;j<m;j++)
                cout<<"#";
          cout<<endl;
        }
        else{
            if(cnt%2==0){
                for(int j=1;j<=m;j++){
                    if(j==m)
                       cout<<"#";
                    else
                    cout<<".";
                }
                cout<<endl;
                cnt++;
            }
            else{
                for(int j=1;j<=m;j++){
                    if(j==1)
                        cout<<"#";
                    else
                        cout<<".";
                }
                cout<<endl;
                cnt++;
            }
        }

    }
    return 0;
}


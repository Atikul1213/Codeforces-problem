#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,Min,n1,n2,cnt=0;
    cin>>n>>m;
    Min = min(n,m);
    for(int i=0;i<=Min;i++){
        for(int j=0;j<=Min;j++){
           n1 = i*i + j;
           n2 = i + j*j;
           if(n1==n && n2==m)
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}


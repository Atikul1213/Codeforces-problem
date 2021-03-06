#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,z,cnt=0,temp=1;
    cin>>n>>m>>z;
    for(int i=n;i<=z;i=temp*n){
        if(i%m==0)
            cnt++;
     temp++;
    }
    cout<<cnt<<endl;
    return 0;
}


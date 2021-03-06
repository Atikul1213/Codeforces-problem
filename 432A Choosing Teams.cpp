#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,value,cnt=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>value;
        if( (5-value)>=k )
            cnt++;
    }
    cout<<cnt/3<<endl;
    return 0;
}


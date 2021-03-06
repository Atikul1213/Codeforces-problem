#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,value,cnt = 0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>value;
        if(value&1)
            cnt++;
    }
    cout<<min(cnt,n-cnt)<<endl;
    return 0;
}


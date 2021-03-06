#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,rem,div,i;
    cin>>n>>m;
    rem=n%m;
    div = n/m;
    n = m-rem;
    for(i=1;i<=n;i++){
            if(i!=1) cout<<" ";
        cout<<div;
    }
    for(;i<=m;i++)
        cout<<" "<<div+1;
    cout<<endl;
    return 0;
}


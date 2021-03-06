#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,A[102],m,B[103];
    cin>>n;
    for(int i=0;i<n;i++) cin>>A[i];
    cin>>m;
    for(int i=0;i<m;i++) cin>>B[i];
    sort(A,A+n);
    sort(B,B+m);
    cout<<A[n-1]<<" "<<B[m-1]<<endl;
    return 0;
}


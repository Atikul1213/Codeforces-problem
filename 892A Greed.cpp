#include<bits/stdc++.h>
#define Size 100005
using namespace std;
int main()
{
    long long int n,A[Size]={0},B[Size]={0},sum1=0,total=0;
    cin>>n;
    for(int i=0;i<n;i++){
            cin>>A[i];
            total += A[i];
    }
    for(int i=0;i<n;i++) cin>>B[i];
    sort(B,B+n);
    sum1 = B[n-1] + B[n-2];
    if(total>sum1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,A[55],B[55],Min1,Min2,sum;
    cin>>t;
    while(t--){
        cin>>n;
        Min1 = INT_MAX, Min2 = INT_MAX,sum = 0;
        for(int i=0;i<n;i++){
            cin>>A[i];
            if(A[i]<Min1)
                Min1 = A[i];
        }
        for(int i=0;i<n;i++){
            cin>>B[i];
            if(B[i]<Min2)
                Min2 = B[i];
        }
        for(int i=0;i<n;i++){
            sum += max( (A[i]-Min1),(B[i]-Min2) );
        }
        cout<<sum<<endl;
    }
    return 0;
}


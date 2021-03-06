#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,value,sum;
    cin>>t;
    while(t--){
            sum = 0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>value;
            sum += value;
        }
        cout<<((sum+n-1)/n)<<endl;
    }
    return 0;
}


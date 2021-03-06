#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,arr[54],ck,diff;
    cin>>t;
    while(t--){
        cin>>n;
        ck = 0;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++){
                diff = arr[i+1] - arr[i];
            if( diff>1){
                ck = 1;
                break;
            }
        }
        if(ck==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}


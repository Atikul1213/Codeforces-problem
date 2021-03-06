#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,arr[55],diff,temp;
    cin>>t;
    while(t--){
        memset(arr,0,sizeof(arr));
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        diff = INT_MAX;
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++){
            temp = arr[i+1]-arr[i];
            if(temp<diff)
                diff = temp;
        }
        cout<<diff<<endl;
    }
    return 0;
}


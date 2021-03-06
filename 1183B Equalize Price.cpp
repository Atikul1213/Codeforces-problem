#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,arr[103],t,ans,mid;
    cin>>t;
    while(t--){
        cin>>n>>k;

        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        mid = arr[0]+k;
        ans = ((mid-arr[0])<=k && abs(mid-arr[n-1])<=k)? mid : -1;
        cout<<ans<<endl;
    }
    return 0;
}


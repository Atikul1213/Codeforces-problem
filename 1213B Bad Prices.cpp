#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,arr[150003],Min,cnt,n;
    cin>>t;
    while(t--){
        cin>>n;
        Min = INT_MAX, cnt = 0;
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=n-1;i>=0;i--){
            if(arr[i]>Min)
                cnt++;
            Min = min(Min,arr[i]);
        }
        cout<<cnt<<endl;
    }
    return 0;
}


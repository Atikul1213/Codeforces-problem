#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,arr[55],cnt,a,b;
    cin>>t;
    while(t--){
        cin>>n;
        cnt = 0;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n-1;i++){
            a = min(arr[i],arr[i+1]);
            b = max(arr[i],arr[i+1]);
            for(int i=a*2;i<b;i*=2)
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}


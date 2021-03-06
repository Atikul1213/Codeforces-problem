#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,arr[100005],diff,n,x,cnt;
    cin>>t;
    while(t--){
        cin>>n>>x;
        memset(arr,0,sizeof(arr));
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        cnt = 0,diff = 0;
        for(int i=n-1;i>=0;i--){

            if(arr[i]>=x){
                diff += (arr[i]-x);
                cnt++;
            }
            else{
                if(arr[i]+diff>=x){
                    cnt++;
                    diff -= (x-arr[i]);
                }
                else{
                    break;
                }
            }
        }
        cout <<cnt<<endl;
    }
    return 0;
}


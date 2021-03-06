#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[104],m,sum=0,cnt=1;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i=n-1;i>=0;i--){
        sum += arr[i];
        if(sum>=m)
        break;
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,diff,cnt=0,arr[104],sum=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum += arr[i];
        diff = m - sum;
        if(sum + arr[i+1]<=m)
            continue;
        else{
            cnt++;
            sum = 0;
        }
    }
    if(sum>0)
        cnt++;
    cout <<cnt<<endl;
    return 0;
}


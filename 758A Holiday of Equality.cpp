#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[104],Max=INT_MIN,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(Max<arr[i])
            Max = arr[i];
    }
    for(int i=0;i<n;i++){
        sum += (Max-arr[i]);
    }
    cout<<sum<<endl;
    return 0;
}


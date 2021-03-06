#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[100005],Min;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    Min = min(arr[n-2]-arr[0],arr[n-1]-arr[1]);
    cout<<Min<<endl;
    return 0;
}


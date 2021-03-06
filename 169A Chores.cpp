#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,arr[2004],mid,big = 0,small;
    cin>>n>>a>>b;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    mid = arr[n/2];
    for(int i=0;i<n;i++){
        if(arr[i]>mid)
            big++;
    }
    small = n - big;
    if(small == b && big == a)
        cout<<mid<<endl;
    else
        cout<<0<<endl;
    return 0;
}


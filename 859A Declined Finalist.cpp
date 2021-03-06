#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[26],Max = INT_MIN;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>Max)
            Max = arr[i];
    }
    if(Max<25)
        cout<<0<<endl;
    else
        cout<<Max-25<<endl;
    return 0;
}


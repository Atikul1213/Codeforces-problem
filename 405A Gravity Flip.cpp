#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[104];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(i!=0)
            cout<<" ";
        cout<<arr[i];
    }
    cout<<endl;
    return 0;
}


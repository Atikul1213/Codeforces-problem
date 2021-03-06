#include<bits/stdc++.h>
#define Size 100005
using namespace std;
int main()
{
    int n,arr[Size],i;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n-1;i++){
            if(i!=0)
            cout<<" ";
        cout<<arr[i]+arr[i+1];
    }
    cout<<" "<<arr[i]<<endl;
    return 0;
}


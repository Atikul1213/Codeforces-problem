#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,arr[103],n;
    cin>>t;
    while(t--){
        cin>>n;
        memset(arr,0,sizeof(arr));
        for(int i=0;i<n;i++)
            cin>>arr[i];
        n = n -1;
        for(int i = n;i>=0;i--){
            if(i!=n)
                cout<<" ";
            cout<<arr[i];
        }
        cout<<endl;
    }
    return 0;
}


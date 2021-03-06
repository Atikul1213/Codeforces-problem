#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[104],value;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>value;
        arr[value] = i+1;
    }
    for(int i=1;i<=n;i++){
            if(i!=1) cout<<" ";
        cout<<arr[i];
    }
    cout<<endl;
    return 0;
}


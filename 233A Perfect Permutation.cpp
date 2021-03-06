#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[102],temp;
    cin>>n;
    if(n%2==1)
        cout<<-1<<endl;
    else{
    for(int i=1;i<=n;i++)
        arr[i-1] = i;
    for(int i=0;i<n-1;i++){
        if(arr[i]==i+1){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    for(int i=0;i<n;i++){
        if(i!=0) cout<<" ";
        cout<<arr[i];
    }
    cout<<endl;
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long  arr[3],t;
    cin>>t;
    while(t--){
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        if(arr[0]+arr[1] < arr[2]-1)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4],total;
    for(int i=0;i<3;i++)
        cin>>arr[i];
    sort(arr,arr+3);
    total = arr[0]+arr[1];
    if(total>arr[2])
        cout<<0<<endl;
    else
    cout<<(arr[2]-total)+1<<endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[100005],cnt=0,total=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>0)
            total+=arr[i];
        if(arr[i]<0 && total>0){
            total--;
            continue;
        }

        if(arr[i]<0&&total==0){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}


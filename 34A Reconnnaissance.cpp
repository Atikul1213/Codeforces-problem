#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[103],index1,index2,temp=INT_MAX,diff;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<=n+1;i++){
        diff =  abs(arr[i%n]-arr[(i+1)%n]);
        if(diff<=temp){
            temp = diff;
            index1 = i%n;
            index2 = (i+1)%n;
        }
    }
    cout<<index1+1<<" "<<index2+1<<endl;
    return 0;
}


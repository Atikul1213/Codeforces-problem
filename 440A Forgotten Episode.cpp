#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[100005]={0},value;
    cin>>n;
    for(int i=0;i<n-1;i++){
        cin>>value;
        arr[value-1] = 1;
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}


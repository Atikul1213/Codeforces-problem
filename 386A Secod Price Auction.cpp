#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[1004],Max = INT_MIN,Index;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>Max){
            Max = arr[i];
            Index = i;
        }
    }
    sort(arr,arr+n);
    cout<<Index+1<<" "<<arr[n-2]<<endl;

    return 0;
}


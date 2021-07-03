#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt = 0,n;
    bool arr[104];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n-1;i++){
        if(arr[i]==0){
            if(arr[i-1]==1 && arr[i+1]==1){
                cnt++;
                arr[i-1] = 0, arr[i+1] = 0;
                i++;
            }
        }
    }
    cout <<cnt<<endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int arr[100005],n,sum = 0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    sort(arr,arr+n);
    if(sum%2==0)
        cout<<sum<<endl;
    else{
        for(int i=0;i<n;i++){
            if(arr[i]%2==1){
                sum -= arr[i];
                cout<<sum<<endl;
                break;
            }
        }
    }
    return 0;
}


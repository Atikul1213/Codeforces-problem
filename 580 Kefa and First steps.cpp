#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100005]={0},cnt = 1,Max = INT_MIN,n,ck = 0,ck1=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            cnt++;
            ck1 = 1;
        Max = max(cnt,Max);
        }
        else{
                ck = 1;
            cnt = 1;
        }
    }
    if(ck1==0)
        cout<<1<<endl;
    else if(ck==1)
    cout<<Max<<endl;
    else
        cout<<n<<endl;
    return 0;
}


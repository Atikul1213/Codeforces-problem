#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[8],ans=0;
    cin>>n;
    for(int i=0;i<7;i++)
        cin>>arr[i];

    for(int i=0;i<7;){
        n -= arr[i];
        if(n<=0){
            ans = i+1;
            break;
        }
        i = (i+1)%7;
    }
    cout<<ans<<endl;
    return 0;
}


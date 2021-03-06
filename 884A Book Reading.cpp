#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,arr[102],time=0,cnt=0;
    cin>>n>>t;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        time += (86400-arr[i]);
        if(time>=t){
                cnt++;
            break;
        }
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,cnt,sum;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=2;i<=n;i++){
            sum = pow(2,i)-1;
            if(n%sum==0){
                cout<<n/sum<<endl;
                break;
            }
        }
    }
    return 0;
}


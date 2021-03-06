#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,temp,sum,cnt,cnt1;
    cin>>t;
    while(t--){
        cin>>n;
        sum = 0;
        cnt=0;
        temp = n/2;
        if( temp%2==1 )
            cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(int i=2;i<=n;i+=2){
                cout<<i<<" ";
                sum += i;
            }
            cnt=1;
            cnt1 = 0;
            for(int i=1;cnt<temp;i+=2,cnt++){
                cout<<i<<" ";
                cnt1+=i;
            }
            cout<<sum-cnt1<<endl;
        }
    }
    return 0;
}


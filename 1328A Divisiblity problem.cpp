#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,sum;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a%b==0) cout<<0<<endl;
        else{
                sum = 0;
                sum = ((int)(a/b))*b;
            while(sum<a){
                sum+=b;
            }
            cout<<sum-a<<endl;
        }
    }
    return 0;
}


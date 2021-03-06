#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,l,r,sum,a,b;
    cin>>t;
    while(t--){
        cin>>l>>r;
        --l;
        if(l&1)
            a = -(l+1)/2;
        else
            a = l/2;
        if(r&1)
            b = -(r+1)/2;
        else
            b = r/2;
        cout<<b-a<<endl;

    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,total;
    cin>>t;
    while(t--){
        cin>>n>>k;
        total = n - (n%k);
        total += min(n%k,k/2);
        cout<<total<<endl;
    }
    return 0;
}


#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        if(arr[0]+arr[1] > arr[n-1])
            cout<<-1<<endl;
        else
            cout<<1<<" "<<2<<" "<<n<<endl;
    }
    return 0;
}


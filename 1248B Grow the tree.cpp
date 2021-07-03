#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,value,cnt1=0,cnt2=0;
    ll ans;
    vector<int>vec;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>value;
        vec.push_back(value);
    }
    sort(vec.begin(),vec.end());
    int i=0,j = n-1;
    while(i<j){
        cnt1+=vec[i];
        cnt2+=vec[j];
        i++,j--;
    }
    if(n&1)
        cnt2+=vec[n/2];

    ans = (cnt1*cnt1)+(cnt2*cnt2);
    cout<<ans<<endl;
    return 0;
}


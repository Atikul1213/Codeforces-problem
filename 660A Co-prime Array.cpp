#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,arr[1004]={0},n1,n2,cnt=0;
    vector<ll>vec;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n-1;i++){
        n1 = arr[i], n2 = arr[i+1];
        if(__gcd(n1,n2)==1){
                vec.push_back(n1);
        continue;
        }
        else{
            cnt++;
                vec.push_back(n1);


              vec.push_back( 1);

        }
    }
    vec.push_back(arr[n-1]);
    cout<<cnt<<endl;
    for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
    return 0;
}


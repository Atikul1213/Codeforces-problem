#include<bits/stdc++.h>
#define ll long long int
#define Size 200005
using namespace std;
ll arr[Size];

int main()
{
    ll n,m,value,temp;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i!=0)
            arr[i] += arr[i-1];
    }


    vector<ll>hostal(arr,arr+n);
    vector<ll>::iterator it;


    for(int i=0;i<m;i++){
    cin>>value;
    it = lower_bound(hostal.begin(),hostal.end(),value);
    cout<<distance(hostal.begin(),it)+1<<" ";
    if(it!=hostal.begin()){
        it--;

        temp = value - *it;
        cout<<temp<<endl;
    }
    else{
        cout<<value<<endl;
    }
    }

    return 0;
}


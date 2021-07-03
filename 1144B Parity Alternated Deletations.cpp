#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>even,odd,vec;
    int value,n,sum = 0,sz1,sz2;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>value;
        if(value&1)
            odd.push_back(value);
        else
            even.push_back(value);
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    sz1= even.size(), sz2 = odd.size();

    if(sz1 > (sz2+1)){
        for(int i=0;i<(sz1-sz2-1);i++)
            sum += even[i];
    }
    else{
        for(int i=0;i<(sz2-sz1-1);i++)
            sum += odd[i];
    }
    cout<<sum<<endl;
    return 0;
}


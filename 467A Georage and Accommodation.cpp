#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,diff,cnt=0;
    cin>>n;
    while(n--){
        cin>>p>>q;
        diff = q-p;
        if(diff>=2)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}


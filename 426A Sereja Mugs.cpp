#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,sum = 0,Max = 0,value;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        cin>>value;
        if(value>Max)
            Max = value;
        sum += value;
    }
    if ( (sum-Max)<=s )
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}


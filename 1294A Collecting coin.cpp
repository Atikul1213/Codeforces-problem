#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,n,Max,sum;
    cin>>t;
    while(t--){
            sum = 0;
        cin>>a>>b>>c>>n;
        Max = ((a>b)&& (a>c))? a:(b>c)? b : c;
        sum += (Max-a)+(Max-b)+(Max-c);
        n = n - sum;
        if(n%3!=0 || n <0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}


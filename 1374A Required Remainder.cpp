#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,n,rem;
    cin>>t;
    while(t--){
        cin>>x>>y>>n;
        n = n - y;
        rem = n / x;
        n = (rem*x)+y;
        cout<<n<<endl;
    }
    return 0;
}


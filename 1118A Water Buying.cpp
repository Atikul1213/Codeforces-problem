#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,b,total;
    int t;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        total = (n/2)*min(2*a,b)+(n%2)*a;
        cout<<total<<endl;
    }
    return 0;
}


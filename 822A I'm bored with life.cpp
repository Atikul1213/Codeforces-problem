#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,n,fact = 1;
    cin>>a>>b;
    n = min(a,b);
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    cout<<fact<<endl;
    return 0;
}


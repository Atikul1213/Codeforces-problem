#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,rem,put;
    cin>>a>>b;
    put = min(a,b);
    rem = max(a,b)-put;
    cout<<put<<" "<<rem/2<<endl;
    return 0;
}


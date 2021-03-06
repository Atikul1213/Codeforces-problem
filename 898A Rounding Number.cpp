#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    a = (n/10)*10;
    b = a + 10;
    if(n-a>b-n)
        cout<<b<<endl;
    else
        cout<<a<<endl;
    return 0;
}


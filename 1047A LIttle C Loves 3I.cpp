#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    cin>>n;
    c = n-2;
    if(c%3==0)
        cout<<1<<" "<<2<<" "<<c-1<<endl;
    else
        cout<<1<<" "<<1<<" "<<c<<endl;
    return 0;
}


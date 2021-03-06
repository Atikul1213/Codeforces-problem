#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n1,n2,n3,n4,n5;
    cin>>a>>b>>c;
    n1 = a+(b*c);
    n2 = a*(b+c);
    n3 = a*b*c;
    n4=(a+b)*c;
    n5 = (a+b+c);
    int Max = max(n1,max(n2,max(n3,max(n4,n5))));
    cout<<Max<<endl;
    return 0;
}


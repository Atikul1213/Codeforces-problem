#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,n1,n2,n3,Min;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    n1 = (k*l)/(n*nl);
    n2 = (c*d)/n;
    n3  = (p/np)/n;
    Min = ( (n1 < n2) &&(n1<n3)) ? n1 : (n2 < n3)? n2 : n3;
    cout<<Min<<endl;
    return 0;
}


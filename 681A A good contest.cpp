#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,ck=0;
    char str[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>str>>a>>b;
        if(a>=2400 && b>a)
        ck = 1;
    }
    if(ck==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}


#include<bits/stdc++.h>
#define ll  long long int
using namespace std;

void Fun(ll &a,ll &b){
    ll div;
    if(a<=0 || b<0) return;

    if(a>=2*b){
            if(b==0) return;
        div = a /(2*b);
        a -= (div*2*b);
        Fun(a,b);
    }
    else if(b>=2*a){
        if(a==0) return;
        div = b/(2*a);
        b-= (div*2*a);
        Fun(a,b);
    }
}

int main()
{
    ll a,b,div;
    cin>>a>>b;
    Fun(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}


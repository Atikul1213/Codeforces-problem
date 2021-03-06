#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,k,t,n1,n2;
    cin>>t;
    while(t--){
        cin>>a>>b>>k;
        if(k%2==1){
            n1 = (k/2)+1;
            n2 = k/2;
        }
        else{
            n1 = k/2;
            n2 = k/2;
        }
        cout<<(a*n1)-(b*n2)<<endl;
    }
    return 0;
}


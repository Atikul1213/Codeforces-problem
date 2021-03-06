#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,GCD,temp1=0,temp2=0;
    cin>>n;
    for(int i=n/2;i>=1;i--){
        a = i;
        b = n - a;
        GCD = __gcd(a,b);
        if(GCD==1){
            if(a>temp1 && b>temp2){
                temp1 = a;
                temp2 = b;
            }
        }
    }
    if(temp2<temp1)
        swap(temp1,temp2);
    cout<<temp1<<" "<<temp2<<endl;
    return 0;
}


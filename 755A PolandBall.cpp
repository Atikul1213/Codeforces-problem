#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<2)
        return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n,temp;
    cin>>n;
    temp = n;
    for(int i=1;i<1000;i++){
        n = temp*i + 1;
        int ck = isPrime(n);
        if(ck==0){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n,temp,temp1;
    cin>>n;
    for(int i=4;i<=n;i+=2){
        if(!isPrime(i) && !isPrime(n-i)){
        cout<<i<<" "<<(n-i)<<endl;
        break;
        }
    }
    return 0;
}


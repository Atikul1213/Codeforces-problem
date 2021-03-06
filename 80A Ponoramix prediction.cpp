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
    int n,m,cnt = 0,temp;
    cin>>n>>m;
    for(int i=n+1;i<=m;i++){
        if(isPrime(i)==1){
            temp = i;
            break;
        }
    }
    if(temp==m)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}


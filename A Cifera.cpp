#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k,cnt=0,temp,n1;
    cin>>k>>n;
    if(n%k!=0){
        cout<<"NO"<<endl;
    }
    else{
            n1 = n;
    while(n>=k){
        n/=k;
        cnt++;
    }
   temp = (int)pow(k,cnt);
    if(n1 == temp && n==1)
        cout<<"YES"<<endl<<cnt-1<<endl;
    else
        cout<<"NO"<<endl;
    }
    return 0;
}


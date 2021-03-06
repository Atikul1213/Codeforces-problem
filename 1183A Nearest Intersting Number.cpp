#include<bits/stdc++.h>
using namespace std;
int Divisible(int n){
    int res=0,rem;
    while(n!=0){
        rem = n % 10;
        res += rem;
        n/=10;
    }
    return res;
}
int main()
{
    int a,sum,temp;
    cin>>a;
    temp = Divisible(a);
    if(temp%4==0)
        cout<<a<<endl;
    else{
    for(int i=a;;i++){
        temp = Divisible(i);
        if(temp%4==0){
            cout<<i<<endl;
            break;
        }
    }
    }
    return 0;
}


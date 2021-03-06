#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,total = 0,rem;
    cin>>n;
    if(n>=100){
        rem = (n/100);
        total += rem;
        n -= (rem*100);
    }
    if(n>=20){
        rem = (n/20);
        total +=rem;
        n -= (rem*20);
    }
    if(n>=10){
        rem = (n/10);
        total += rem;
        n -= (rem*10);
    }
    if(n>=5){
        rem = (n/5);
        total += rem;
        n -= (rem*5);
    }
    if(n>=1){
        total += n;
    }
    cout<<total<<endl;
    return 0;
}


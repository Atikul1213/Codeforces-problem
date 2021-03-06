#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n,pos,total,rem,sum;
    cin>>t;
    while(t--){
        cin>>n;
        total = (n*(n+1))/2;
        pos = 1;
        sum = 0;
        while(pos<=n){
            sum += pos;
            pos *=2;
        }
        sum *=-1;
        rem = total + sum;
        cout<<rem+sum<<endl;
    }
    return 0;
}


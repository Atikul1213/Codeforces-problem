#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int k,n,mid;
    cin>>k>>n;
    if(k%2==0)
        mid = k/2;
    else
        mid = (k/2)+1;
    if(n>mid){
            mid = mid+1;
        cout<<(n%mid)*2+2<<endl;
    }
    else
        cout<<n*2-1<<endl;
    return 0;
}


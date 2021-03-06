#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k2,k3,k5,k6,total,N_32,N_256;
    cin>>k2>>k3>>k5>>k6;
    N_256 = min(k2,min(k5,k6));
    N_32 = min(k3,k2-N_256);
    total = (N_256*256)+(N_32*32);
    cout<<total<<endl;
    return 0;
}


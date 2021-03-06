#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,Max=0,sum;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        sum =  a + b;
        if(Max<sum)
            Max = sum;
    }
    cout<<Max<<endl;
    return 0;
}


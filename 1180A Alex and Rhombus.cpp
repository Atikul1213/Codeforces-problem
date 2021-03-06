#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum = 1,cnt=1;
    cin>>n;
    if(n<=1)
        sum = 1;
    else{
            sum = 2;
    for(int i=0;i<n-2;i++){
        cnt +=2;
        sum += 2*cnt;
    }
    sum += (cnt+2);
    }
    cout<<sum<<endl;
    return 0;
}


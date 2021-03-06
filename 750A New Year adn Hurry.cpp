#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i=1,cnt = 0,temp=5;
    cin>>n>>k;
    k = 240 -k;
    while(temp<=k){
        cnt++;
        if(cnt==n)
            break;
        i++;
        temp += (5*i);
    }
    cout<<cnt<<endl;
    return 0;
}


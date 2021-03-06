#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m,temp;
    cin>>n>>m;
    if(n>=32)
        cout<<m<<endl;
    else if(m>100000000){
     cout<<m<<endl;
    }
    else{
            temp = 1<<n;
         cout<<m%temp<<endl;
    }
    return 0;
}


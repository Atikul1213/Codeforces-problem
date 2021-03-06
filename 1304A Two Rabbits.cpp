#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,a,b,total,rem;
    cin>>t;
    while(t--){
        cin>>x>>y>>a>>b;
        total = y - x;
        rem = a + b;
        if(total%rem!=0)
            cout<<-1<<endl;
        else
            cout<<total/rem<<endl;
    }
    return 0;
}


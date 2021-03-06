#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,temp;
    cin>>x>>y>>z;
    temp = (x-y);
    if(temp==0 && z==0)
        cout<<"0"<<endl;
    else if(temp>0 && abs(temp)>z)
        cout<<"+"<<endl;
    else if(temp<0 && abs(temp)>z)
        cout<<"-"<<endl;
    else
     cout<<"?"<<endl;
    return 0;
}


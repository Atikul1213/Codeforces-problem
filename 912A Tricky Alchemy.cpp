#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll a,b,x,y,z,yellow=0,blue=0,total=0;
    cin>>a>>b;
    cin>>x>>y>>z;
    yellow = (x*2)+y;
    blue = y + (z*3);
    if(yellow > a)
        total += (yellow-a);
    if(blue > b)
        total += (blue-b);
    cout<<total<<endl;
    return 0;
}


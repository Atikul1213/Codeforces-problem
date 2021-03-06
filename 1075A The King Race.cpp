#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,y,white,black;
    cin>>n;
    cin>>x>>y;
    white = abs(x-1)+abs(y-1);
    black = abs(x-n)+abs(y-n);
    if(white<=black)
        cout<<"White"<<endl;
    else
        cout<<"Black"<<endl;
    return 0;
}


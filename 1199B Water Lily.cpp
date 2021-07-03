#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,l,x;
    cin>>h>>l;
    x = (h*h+l*l)/(2.0*h);
    x = x - h;
    printf("%.13lf\n",x);
    return 0;
}


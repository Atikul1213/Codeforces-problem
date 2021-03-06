#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,Min;
    cin>>a>>b>>c;
    b = b/2;
    c = c/4;
    Min = ( a < b && a<c)?a: (b<c)?b:c;
    cout<<(Min*1)+(Min*2)+(Min*4)<<endl;
    return 0;
}


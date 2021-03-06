#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    double x,y,ans,div,Min=INT_MAX;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        div = x/y;
        ans = div*m;
        if(Min>ans)
            Min = ans;
    }
    printf("%.8lf\n",Min);
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=1,sum,a,b,c,d,temp;
    cin>>n;
        cin>>a>>b>>c>>d;
        sum = (a+b+c+d);
    for(int i=1;i<n;i++){
        cin>>a>>b>>c>>d;
        temp = (a+b+c+d);
       if(temp>sum)
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}


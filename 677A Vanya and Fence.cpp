#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,value,sum=0;
    cin>>n>>h;
    for(int i=0;i<n;i++){
        cin>>value;
        if(value>h)
            sum+=2;
        else
            sum +=1;
    }
    cout<<sum<<endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f0 = 0, f1 = 1,n,total=0,temp;
    cin>>n;

    for(int i=0;i<=n-2;i++){
        temp= (f0+f1);
        total += temp;
        f0 = f1;
        f1 = temp;
    }
    cout<<total+1<<endl;


    return 0;
}


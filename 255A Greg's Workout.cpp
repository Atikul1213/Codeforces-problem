#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,value,a=0,b=0,c=0,rem;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>value;
        rem = i%3;
        if(rem==0)
            a+=value;
        else if(rem==1)
            b+=value;
        else
            c+=value;
    }

    (a>b && a>c)?cout<<"chest":(b>c)?cout<<"biceps":cout<<"back";
    cout<<endl;
    return 0;
}


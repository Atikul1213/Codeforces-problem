#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,value,temp,Max,Min;
    cin>>n;
    cin>>value;
    temp = value;
    Max = temp;
    Min = value;
    for(int i=1;i<n;i++){
        cin>>value;
        if(value>Max){
            cnt++;
            Max = value;
        }
        else if(value<Min){
            cnt++;
            Min = value;
        }
    }
    cout<<cnt<<endl;
    return 0;
}


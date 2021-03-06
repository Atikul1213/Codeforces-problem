#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,Max=INT_MIN,Min=INT_MAX,value;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>value;
        if(value>Max)
            Max = value;
        if(value<Min)
            Min = value;
    }
    int temp = Max-Min+1;
    cout<<temp-n<<endl;
    return 0;
}


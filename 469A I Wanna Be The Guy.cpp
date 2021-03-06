#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,value;
    set<int>s;
    cin>>n;
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>value;
        s.insert(value);
    }
    cin>>y;
    for(int i=0;i<y;i++){
        cin>>value;
        s.insert(value);
    }
    if(s.size()<n)
        cout<<"Oh, my keyboard!"<<endl;
    else
        cout<<"I become the guy."<<endl;
    return 0;
}


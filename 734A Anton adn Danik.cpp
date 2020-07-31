#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ant=0,dan=0;
    char ch;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ch;
        if(ch=='A') ant++;
        else dan++;
    }
    if(ant==dan)
        cout<<"Friendship"<<endl;
    else if(ant>dan)
        cout<<"Anton"<<endl;
    else
        cout<<"Danik"<<endl;
    return 0;
}


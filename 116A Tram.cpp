#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,Enter=0,Exit = 0,Min = INT_MIN;
    cin>>t;
    while(t--){
        cin>>a>>b;
        Exit += a;
        Enter += b;
        Enter = Enter - a;
        if(Enter>Min){
            Min = Enter;
        }
    }
    cout<<Min<<endl;
    return 0;
}


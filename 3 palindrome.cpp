#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="aabb";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<str[i%4];
    }
    cout<<endl;
    return 0;
}


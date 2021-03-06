#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int n,index=0,gap = 1;
    cin>>n;
    cin>>str;
    while(index<n){
        cout<<str[index];
        index += gap;
        gap++;
    }
    cout<<endl;
    return 0;
}


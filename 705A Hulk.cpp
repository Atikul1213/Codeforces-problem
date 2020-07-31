#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str1="I hate",str2="I love";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==1)
            cout<<str1;
        else
            cout<<str2;
        if(n>1 &&i!=n)
        cout<<" that ";
    }
    cout<<" it"<<endl;
    return 0;
}


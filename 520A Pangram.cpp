#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char ch;
    set<char>s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ch;
        s.insert(tolower(ch));
    }
    if(s.size()>=26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}


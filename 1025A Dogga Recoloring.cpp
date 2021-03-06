#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str;
    set<char>s;
    cin>>n;
    cin>>str;
    if(n==1)
        cout<<"Yes"<<endl;
    else{
    for(int i=0;i<n;i++){
        char ch = str[i];
        s.insert(ch);
    }
    int sz = s.size();
    if(sz<n)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string str;
    cin>>t;
    while(t--){
        cin>>str;
        sort(str.begin(),str.end());
        int sz = str.size();
        if(str[0]==str[sz-1])
            cout<<-1<<endl;
        else
            cout<<str<<endl;
    }
    return 0;
}


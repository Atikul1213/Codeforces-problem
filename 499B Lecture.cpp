#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,string>mp;
    int n,m,len;
    string str,str1,str2;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>str1>>str2;
        if(str1.size()<=str2.size())
            mp.insert(make_pair(str1,str1));
        else
            mp.insert(make_pair(str1,str2));
    }
    for(int i=0;i<n;i++){
            if(i!=0)
            cout<<" ";
        cin>>str;
        cout<<mp[str];
    }
    cout<<endl;
    return 0;
}


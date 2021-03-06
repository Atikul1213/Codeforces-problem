#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string str;
    set<char>s;
    set<char>::iterator it;
    char ch;
    cin>>t;
    while(t--){
        cin>>str;
        s.clear();
        for(int i=0;i<str.size();i++){
            if(str[i]==str[i+1]){
                    i++;
                continue;
            }
            else
                s.insert(str[i]);
        }
        if(s.size()==0)
            cout<<endl;
        else{
          for(it=s.begin();it!=s.end();it++)
            cout<<*it;
       cout<<endl;
        }
    }
    return 0;
}


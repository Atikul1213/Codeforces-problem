#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    char ch;
    int sz,cnt=0;
    cin>>str;
    sort(str.begin(),str.end());
    sz = str.size();
    ch = str[sz-1];
    for(int i=0;i<sz;i++){
        if(str[i]==ch)
            cnt++;
    }
    for(int i=0;i<cnt;i++)
        cout<<ch;
    cout<<endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int up=0,lo = 0,sz;
    char ch;
    cin>>str;
    sz = str.size();
    for(int i=0;i<str.size();i++){
        char ch = str[i];
        if(ch>='A' && ch<='Z')
            up++;
       else
            lo++;
    }
    if(up==sz){
         for(int i=0;i<sz;i++){
            ch = str[i];
            if(isupper(ch))
                cout<<(char)tolower(ch);
            else
                cout<<(char)toupper(ch);
         }
         cout<<endl;
    }
    else if(lo==1 && (str[0]>='a' && (str[0]<='z')) ){
         for(int i=0;i<sz;i++){
            ch = str[i];
            if(isupper(ch))
                cout<<(char)tolower(ch);
            else
                cout<<(char)toupper(ch);
         }
         cout<<endl;
    }
    else
        cout<<str<<endl;
    return 0;
}


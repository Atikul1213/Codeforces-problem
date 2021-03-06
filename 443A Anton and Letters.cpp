#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    set<char>s;
    while(scanf("%c",&ch)){
        if(ch=='}')
            break;
        if(ch>='a' && ch<='z')
        s.insert(ch);
    }
    cout<<s.size()<<endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    char ch;
    cin>>str;
    for(int i=0;i<str.size();i++){
        ch = tolower(str[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='y')
            continue;
        cout<<"."<<ch;
    }
    cout<<endl;
    return 0;
}


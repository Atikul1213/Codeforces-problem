#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[28],str2[29],str3[1003],ch1,ch2;
    cin>>str1;
    cin>>str2;
    cin>>str3;
    map<char,char>m;
    for(int i=0;i<26;i++){
        ch1 = str1[i];
        ch2 = str2[i];
        m[ch1] = ch2;
    }
    for(int i=0;str3[i]!='\0';i++){
        ch1 = str3[i];
        if(ch1>='0' && ch1<='9')
           cout<<ch1;
        else if(ch1>='A' && ch1<='Z'){
            ch1 = ch1 - 'A' + 'a';
            ch2 = m[ch1];
            cout<<(char)(ch2-'a'+'A');
        }
      else
        cout<<m[ch1];
    }
    cout<<endl;
    return 0;
}


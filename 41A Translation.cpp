#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[103],str2[103];
    int ck;
    gets(str1);
    gets(str2);
    strrev(str2);
    ck = strcmp(str1,str2);
    if(ck==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}


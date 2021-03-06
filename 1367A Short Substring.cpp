#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string str,str1;
    char ch1,ch2;
    cin>>t;
    while(t--){
            str1.clear();
        cin>>str;
        str1 +=str[0];
        str1 += str[1];
        for(int i=3;i<str.size();i+=2){
            str1+=str[i];
        }
        cout<<str1<<endl;
    }
    return 0;
}


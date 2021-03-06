#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    char str1[6]="heidi";
    int j = 0;
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(str[i]==str1[j])
            j++;
    }
    if(j==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}


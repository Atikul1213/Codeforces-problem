#include<bits/stdc++.h>
using namespace std;
bool Ck(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        return true;
    return false;
}
int main()
{
    string str1,str2;
    char ch1,ch2;
    cin>>str1>>str2;
    int sz = min(str1.size(),str2.size());
    bool ck = 0;
    for(int i=0;i<sz;i++){
        ch1 = str1[i], ch2 = str2[i];
        if(Ck(ch1)!=(Ck(ch2))){
            ck = 1;break;
        }
    }
    if(ck==0 && str1.size()==str2.size())
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}


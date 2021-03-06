#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int change = 0,cnt[27]={0},n;
    cin>>n>>str;
    for(int i=0;i<str.size();i++){
        char ch = str[i];
        cnt[ch-'a']++;
    }

    for(int i=0;i<26;i++){
        if(cnt[i]>1){
            change += (cnt[i]-1);
        }
    }
    if(n>26)
        cout<<-1<<endl;
    else
    cout<<change<<endl;
    return 0;
}

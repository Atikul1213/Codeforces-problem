#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cnt[30]={0},Min=INT_MAX;
    string str;
    cin>>n>>k;
    cin>>str;
    for(int i=0;i<str.size();i++){
            char ch = str[i];
        cnt[ch-'A']++;
    }
    for(int i=0;i<k;i++){
       if(cnt[i]<Min)
        Min = cnt[i];
    }
    cout<<Min*k<<endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt[250]={0},sum1=0,sum2=0;
    cnt['Q'] = 9, cnt['R'] = 5, cnt['B'] = 3, cnt['N'] = 3,cnt['P'] = 1, cnt['K'] = 0;
    cnt['q'] = 9, cnt['r'] = 5, cnt['b'] = 3, cnt['n'] = 3,cnt['p'] = 1, cnt['k'] = 0;
    char ch;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>ch;
            if(ch>='A' && ch<='Z') sum1+=cnt[ch];
            else
                sum2+=cnt[ch];
        }
    }
     if(sum1>sum2)
        cout<<"White"<<endl;
     else if(sum1==sum2)
        cout<<"Draw"<<endl;
     else
        cout<<"Black"<<endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,temp;
    int t,cnt[200],ans;
    cin>>t;
    while(t--){
        cin>>str;
        cnt['A'] = 0;
        cnt['B'] = 0;
        temp.clear();
        ans = 0;

        for(int i=0;i<str.size();i++){
            char ch = str[i];
            if(ch=='A' && cnt['B']>0){
                cnt['A']--;
                cnt['B']--;
            }
            else if(ch=='A' && cnt['B']==0){
                cnt['A']++;
            }

           else  if(ch=='B' && cnt['A']>0){
                cnt['A']--;
            }
            else{
                temp += ch;
            }
        }
       // cout<<"temp: "<<temp<<"    cnt_A: "<<cnt['A']<<endl;
        ans = cnt['A'] + (temp.size()%2);
        cout <<ans<<endl;

    }
    return 0;
}


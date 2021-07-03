#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,sum = 0,diff,temp,cnt=0;
    char ch;
    string str;
    cin>>k;
    cin>>str;

    sort(str.begin(),str.end());
    reverse(str.begin(),str.end());
    for(int i=0;i<str.size();i++){
        ch = str[i];
        sum += (int)(ch-'0');
    }
    if(sum>=k){
        cout<<0<<endl;
    }
    else{
        int sz = str.size()-1;
        diff = k - sum;
        for(int i=sz;i>=0;i--){
            temp = (str[i]-'0');
            diff = diff + temp;
            if(diff<=9){
                    cnt++;
                break;
            }
            else{
                cnt++;
                diff-=9;
            }

        }
         cout<<cnt<<endl;
    }
    return 0;
}


/**
70
3326631213

*/


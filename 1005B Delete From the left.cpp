#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    int sz1,sz2,i,j,cnt = 0;
    cin>>str1>>str2;
    sz1 = str1.size();
    sz2 = str2.size();
    j = sz2-1;
    for(i=sz1-1;i>=0;i--){
        if(str1[i]!=str2[j]){
            break;
        }
        else {
            cnt++;
            j--;
        }
    }
    if(cnt==0)
        cout<<sz1+sz2<<endl;
    else{
        cout<<(sz1-cnt) + (sz2-cnt)<<endl;
    }
    return 0;
}


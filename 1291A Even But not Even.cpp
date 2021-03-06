#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,temp,cnt,j;
    char str[30004],str2[4];
    cin>>t;
    while(t--){
        cin>>n;
        cin>>str;
        cnt = 0,j=0;
        if(strcmp(str,"0")==0)
            cout<<-1<<endl;
        else{
            for(int i=0;i<n;i++){
                temp = str[i]-'0';
                if(temp%2==1){
                    if(cnt==2)
                        break;
                    str2[j++] = str[i];
                    cnt++;
                }
            }
            str2[j]='\0';
            if(cnt==2)
                cout<<str2<<endl;
            else
                cout<<-1<<endl;
        }
    }
    return 0;
}


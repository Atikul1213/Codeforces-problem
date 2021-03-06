#include<bits/stdc++.h>
using namespace std;
    char str1[20]={ 'q','w','e','r','t','y','u','i','o','p','\0' };
    char str2[20]={ 'a','s','d','f','g','h','j','k','l',';','\0' };
    char str3[20]={'z','x','c','v','b','n','m', ',' , '.', '/','\0' };
int main()
{
    char ch,str[104],ch1;
    cin>>ch;
    cin>>str;
    if(ch=='R'){
        for(int i=0;str[i]!='\0';i++){
            ch1 = str[i];

            for(int j=0;str1[j]!='\0';j++){
                if(ch1==str1[j])
                    cout<<str1[j-1];
            }
            for(int j=0;str2[j]!='\0';j++){
                if(ch1==str2[j])
                    cout<<str2[j-1];
            }
            for(int j=0;str3[j]!='\0';j++){
                if(ch1==str3[j])
                    cout<<str3[j-1];
            }
        }
    }
    else{
         for(int i=0;str[i]!='\0';i++){
            ch1 = str[i];

            for(int j=0;str1[j]!='\0';j++){
                if(ch1==str1[j])
                    cout<<str1[j+1];
            }
            for(int j=0;str2[j]!='\0';j++){
                if(ch1==str2[j])
                    cout<<str2[j+1];
            }
            for(int j=0;str3[j]!='\0';j++){
                if(ch1==str3[j])
                    cout<<str3[j+1];
            }
        }
    }
    cout<<endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int Looking(string str2,string str1,int n,char ch){
    for(int i=n;i<str2.size();i++){
        if(str1[i]!=str2[i]){
        if(ch==str2[i])
            return i;
        }
    }
    return -1;
}
int main()
{
    int t,n,cnt;
    string str1,str2;
    char ch1,ch2;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>str1>>str2;
        for(int i=0;i<str2.size();i++){
            ch1 = str1[i], ch2 =str2[i];
            if(ch1!=ch2){
                int index = Looking(str2,str1,i+1,str2[i]);
              //  cout<<"Index: "<<index<<endl;
                if(index!=-1){
                   char temp = str1[i];
                   str1[i] = str2[index];
                   str2[index] = temp;
                }
                break;
            }
        }
       /// cout<<"str1: "<<str1<<endl<<"str2: "<<str2<<endl;
        if(str1==str2)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}


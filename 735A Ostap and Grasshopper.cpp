#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tar,get,n,k;
    string str;
    cin>>n>>k;
    cin>>str;
    for(int i=0;str[i]!='\0';i++){
            char ch = str[i];
        if(ch=='G')
            get = i;
        if(ch=='T')
            tar = i;
    }

    if(get>tar){
        swap(str[get],str[tar]);
        swap(get,tar);
    }

    for(int i=get;i<n;i+=k){
        if(str[i]=='#'){
            cout<<"NO"<<endl;
            return 0;
        }
        if(str[i]=='T'){
            cout<<"YES"<<endl;
            return 0;
        }

    }
    cout<<"NO"<<endl;
    return 0;
}


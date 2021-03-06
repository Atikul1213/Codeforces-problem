#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    char ch1,ch2;
    cin>>str;
    for(int i=0;i<str.size();){
        ch1 = str[i], ch2 = str[i+1];
        if(ch1=='.'){
            cout<<0;
            i++;
        }
        else if(ch1=='-' && ch2=='.'){
            cout<<1;
            i+=2;
        }
        else if(ch1=='-' && ch2=='-'){
            cout<<2;
            i+=2;
        }
    }
        cout<<endl;
    return 0;
}


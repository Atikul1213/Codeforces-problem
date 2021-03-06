#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char>s;
    char ch;
    string str;
    int t,n,cnt;
    cin>>t;
    while(t--){
        cin>>n>>str;
        while(!s.empty()){
            s.pop();
        }
        cnt = 0;
        for(int i=0;i<n;i++){
            ch = str[i];
            if(ch==')' && s.size()==0){

                cnt++;

            }
            else  if(ch=='(')
                s.push(ch);
            else if(ch==')' && s.top()=='(')
                s.pop();

        }
         cout<<cnt<<endl;
    }
    return 0;
}


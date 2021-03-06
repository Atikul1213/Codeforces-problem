#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str1;
    list<char>li;
    list<char>::iterator it;
    cin>>n;
    cin>>str1;
    if(n%2==0){
    for(int i=0;i<n;i++){
        char ch = str1[i];
        if(i%2==1)
            li.push_back(ch);
        else
            li.push_front(ch);
    }
    }
    else{
        for(int i=0;i<n;i++){
            char ch = str1[i];
            if(i%2==0)
                li.push_back(ch);
            else
                li.push_front(ch);
        }
    }

    for(it=li.begin();it!=li.end();it++)
        cout<<*it;
    cout<<endl;
    return 0;
}


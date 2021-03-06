#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str,temp;
    vector<string>vec;
    vector<string>::iterator it;
    cin>>n;
    cin>>str;
    vec.push_back(str);
    cout<<"NO"<<endl;
    for(int i=1;i<n;i++){
        cin>>str;
        temp = str;
        vec.push_back(str);
        it = find(vec.begin(),vec.end()-2,temp);
        if(*it==temp)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char>vec;
    string str1,str2;
    cin>>str1>>str2;
    for(int i=0;i<str1.size();i++){
        if(str1[i]==str2[i])
            vec.push_back(str1[i]);
        else if(str1[i]>str2[i])
            vec.push_back(min(str1[i],str2[i]));
        else{
            cout<<-1<<endl;
            return 0;
        }
    }
    for(int i=0;i<vec.size();i++)
        cout<<vec[i];
    cout<<endl;
    return 0;
}


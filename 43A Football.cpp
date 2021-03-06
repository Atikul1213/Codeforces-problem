#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str,str1,temp;
    vector<string>vec1,vec2;
    cin>>n;
    cin>>str;
    vec1.push_back(str);
    if(n==1)
        cout<<str<<endl;
    else{
        for(int i=0;i<n-1;i++){
            cin>>temp;
            if(temp==str)
                vec1.push_back(temp);
            else{
                    str1 = temp;
                vec2.push_back(temp);
            }
        }


    if(vec1.size()>vec2.size())
        cout<<str<<endl;
    else
        cout<<str1<<endl;
    }
    return 0;
}


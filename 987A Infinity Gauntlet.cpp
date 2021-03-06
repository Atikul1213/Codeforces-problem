#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,string>mp;
    map<string,string>::iterator it;
    mp["purple"]="Power";
    mp["green"] = "Time";
    mp["blue"] = "Space";
    mp["orange"] = "Soul";
    mp["red"] = "Reality";
    mp["yellow"] = "Mind";
    int n;
    string str;
    cin>>n;
    cout<<6-n<<endl;
    for(int i=0;i<n;i++){
        cin>>str;
        mp[str] = "Atikul";
    }
    for(it=mp.begin();it!=mp.end();it++){
        if(it->second!="Atikul"){
            cout<<it->second<<endl;
        }
    }
    return 0;
}


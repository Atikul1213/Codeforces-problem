#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,hour,minite,total;
    cin>>t;
    while(t--){
        cin>>hour>>minite;
        if(minite<60){
            total = (24-(hour+1))*60 + (60-minite);
            cout<<total<<endl;
        }
        else{
            total = (24 - hour)*60;
            cout<<total<<endl;
        }
    }
    return 0;
}

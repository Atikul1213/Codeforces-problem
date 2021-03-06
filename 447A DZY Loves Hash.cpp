#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,value,rem,ck=0,temp;
    vector<int>vec;
    vector<int>::iterator it;
    cin>>p>>n;
    for(int i=0;i<n;i++){
        cin>>value;
        rem = value%p;
        vec.push_back(rem);
        if(ck==0){
            it = find(vec.begin(),vec.end()-2,rem);
            if(*it==rem){
                temp = i;
                ck = 1;
            }
        }
    }
    if(ck==1)
    cout<<temp+1<<endl;
    else
        cout<<-1<<endl;
    return 0;
}


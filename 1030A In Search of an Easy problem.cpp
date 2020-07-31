#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,opinion,ck=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>opinion;
        if(opinion==1)
            ck = 1;
    }
    if(ck)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;
    return 0;
}


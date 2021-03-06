#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr1[1004],arr2[1004],ck = 0,ck1=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr1[i]>>arr2[i];

        if(arr1[i]!=arr2[i])
            ck = 1;


    }
    if(ck==1)
        cout<<"rated"<<endl;
    else{
        for(int i=0;i<n-1;i++){
            if( (arr1[i]+arr2[i]) < (arr1[i+1]+arr2[i+1])){
                ck1 = 1;
                break;
            }
        }
        if(ck1==0)
            cout<<"maybe"<<endl;
        else
            cout<<"unrated"<<endl;
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,value;
    long long int total1=0,temp1,total2=0,total3=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>value;
        total1 +=value;
    }
    for(int i=0;i<n-1;i++){
        cin>>value;
        total2+=value;
    }
    for(int i=0;i<n-2;i++){
        cin>>value;
        total3+=value;
    }
    cout<<total1-total2<<endl;
    cout<<total2-total3<<endl;
    return 0;
}


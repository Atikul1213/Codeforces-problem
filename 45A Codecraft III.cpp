#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int n,temp;
    string str1;
    cin>>str1;
    cin>>n;
    for(int i=0;i<12;i++){
        if(str1==str[i]){
            temp = i;
            break;
        }
    }
    n  = (n+temp)%12;
    cout<<str[n]<<endl;
    return 0;
}


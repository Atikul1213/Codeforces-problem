#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,cnt=0;
    char str[60];
    cin>>n>>t;
    cin>>str;
    while(cnt<t){
        for(int i=0;i<n-1;i++){
            if(str[i]=='B' && str[i+1]=='G'){
                swap(str[i],str[i+1]);
                i++;
            }
        }
        cnt++;
    }
    cout<<str<<endl;
    return 0;
}


#include<bits/stdc++.h>
#define Size 3000
using namespace std;
bool flag[Size+3];
int prime[Size+3];
int main()
{
    int n,cnt = 0;
    cin>>n;
    memset(flag,0,sizeof(flag));
    memset(prime,0,sizeof(prime));
    for(int i=2;i<=n;i++){
        if(flag[i]==false){
            for(int j=i+i;j<=n;j+=i){
                flag[j] = true;
                prime[j]++;
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(prime[i]==2)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}


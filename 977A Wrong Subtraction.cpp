#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i=1;
    cin>>n>>k;
    while(i<=k){
        if(n%10==0){
            n/=10;
            i++;
        }
        else{
        n--; i++;
        }
    }
    cout<<n<<endl;
    return 0;
}


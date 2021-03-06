#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,cnt,rem;
    cin>>t;
    while(t--){
        cin>>a>>b;
        cnt = 0;
        if(a==b)
            cout<<cnt<<endl;
        else{
            a = abs(b-a);
            if(a>=5){
                    rem = (a/5);
                cnt += rem;
                a = a - (5*rem);
            }
            if(a>=2){
                rem = (a/2);
                cnt += rem;
                a = a - (2*rem);
            }
            cnt += a;
            cout<<cnt<<endl;
        }
    }
    return 0;
}


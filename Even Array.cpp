#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,cnt1,cnt2;
    cin>>t;
    while(t--){
        cin>>n;
        cnt1 = 0,cnt2 = 0;
        for(int i=0;i<n;i++){
                cin>>x;
            if(x%2 != i%2){
                if(i%2==0)
                    cnt1++;
                else
                    cnt2++;
            }

        }
        if(cnt1!=cnt2)
            cout<<-1<<endl;
        else
            cout<<cnt1<<endl;
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ans,n,cnt[4],rem,value;
    cin>>t;
    while(t--){
        cin>>n;
        memset(cnt,0,sizeof(cnt));
        ans = 0;
        for(int i=0;i<n;i++){
            cin>>value;
            rem = value%3;
            if(rem==0)
                ans++;
            else
                cnt[rem]++;
        }
        rem = min(cnt[1],cnt[2]);
        ans+=rem;
        cnt[1]-= rem;
        cnt[2]-=rem;
        if(cnt[2]>=3){
            ans+=(cnt[2]/3);
        }

        if(cnt[1]>=3){
            ans += (cnt[1]/3);
        }
        cout<<ans<<endl;

    }
    return 0;
}


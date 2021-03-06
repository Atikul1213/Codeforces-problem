#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,score[1003],t=0,time[1004],Limark=0,Radewoosh=0,rem=0;
    cin>>n>>c;
    for(int i=0;i<n;i++){
        cin>>score[i];
    }
    for(int i=0;i<n;i++)
        cin>>time[i];

    for(int i=0;i<n;i++){
            t += time[i];
        rem = score[i] - (c*t);
        if(rem<0)
            continue;
        Limark += rem;
    }


    t = 0;
     for(int i=n-1;i>=0;i--){
            int Max;
            t += time[i];
        rem = score[i] - (c*t);
            if(rem<0)
                continue;
        Radewoosh += rem;
    }
    if(Limark==Radewoosh)
        cout<<"Tie"<<endl;
    else if(Limark<Radewoosh)
        cout<<"Radewoosh"<<endl;
    else
        cout<<"Limak"<<endl;
    return 0;
}


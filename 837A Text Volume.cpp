#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt = 0,Max = 0;
    char str[204];
    cin>>n;
    scanf("%*c%[^\n]",str);

    for(int i=0;i<n;i++){
        if(str[i]==' ')
            cnt = 0;
        if(str[i]>='A' && str[i]<='Z')
            cnt++;

        if(Max<cnt)
            Max = cnt;
    }
    cout<<Max<<endl;
    return 0;
}


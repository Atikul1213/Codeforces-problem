#include<bits/stdc++.h>
using namespace std;
int Matching(char str[]){
    int cnt = 0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            cnt++;
    }
    return cnt;
}
int main()
{
    int first,sec,third;
    char str[3][104];
    for(int i=0;i<3;i++){
        scanf("%[^\n]%*c",str[i]);
    }
    first = Matching(str[0]);
    sec = Matching(str[1]);
    third = Matching(str[2]);

    if(first==5 && sec==7 && third==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}


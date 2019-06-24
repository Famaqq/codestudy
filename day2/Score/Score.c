#include<stdio.h>
#define maxn 80
int main(){
    char s[maxn];
    scanf("%s",s);
    int flag=1,score=0,i;
    for(i = 0;i<strlen(s);i++){
        if(s[i]=='O'){
            score = score + flag;
            flag++;
        }
        else{
            flag = 1;
        }
    }
    printf("%d\n",score);
}

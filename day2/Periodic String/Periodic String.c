#include<stdio.h>
#include<string.h>
#define maxn 81

int main(){
    char s[maxn];
    scanf("%s",s);
    int i,j,flag=1;
    int len = strlen(s);
    for(i=1;i<len;i++)
    {
        if(len%i == 0){
            flag = 1;
            for(j=i;j<len;j++){
                if(s[j] != s[j%i]){
                    flag = 0;
                    break;
                }
            }
        } if(flag)
        break;
    }

    printf("%d\n",i);
    return 0;
}

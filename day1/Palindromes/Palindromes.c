#include<stdio.h>
#include<string.h>
#include<ctype.h>
using namespace  std;
bool hui_wen(char *str){
    int len=strlen(str);
    int i=0;
    int j=len-1;
    while(i<=j){
      if(str[i]!=str[j]){
         return 0;
      }
        i++;
        j--;
    }
    return 1;
}
int  best_huiwen_str(char *str,int &begin,int &end){
     int len=strlen(str);
     int max=0;
     if(hui_wen(str)){
           begin=0;
           end=len-1;
           max=len;
           return max;
     }
     else{
         int i=1;
         for(;i            if(i-1>=0&&i+1                   int ii=i-2;
                   int iii=i+2;
                   while(ii>=0&&iii                        if(str[ii]==str[iii]){
                              ii--;
                              iii++;
                         }
                         else{
                                  break;
                         }
                   }
                   ii++;
                   iii--;
                   if(ii>=0&&iii                       int len=iii-ii+1;
                       if(len>max){
                               max=len;
                               begin=ii;
                               end=iii;
                         }
                    }
            }
           i++;
         }
       }
     return max;
}
int main( ){
   char  str[]="123456547890";
   int i,j,max;
   max=best_huiwen_str(str,i,j);
   cout<   return 0;
}

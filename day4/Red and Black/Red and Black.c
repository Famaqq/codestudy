#include<stdio.h>
char room[21][21];        //初始化房间
int n,m;
int ans,w,e;
void dfs(int w,int e){
    if(w<0||w>=n||e<0||e>=m||room[w][e]=='#')   //判断是不是超出了范围
    return ;
    ans++;
    room[w][e]='#';      //搜到“.”后先替换成“#”
    dfs(w-1,e);dfs(w+1,e);dfs(w,e+1);dfs(w,e-1);//四个方向进行搜索
}
int main(){
	while(scanf("%d%d",&m,&n)!=EOF)
	{
	   if(m==0&&n==0)
	 {
	   break;
	 }
	else{
    int i;
		for(i=0;i<n;i++)
		{
		  scanf("%s",&room[i]);
          getchar();                           //再把这个回车接收
		}
	ans=0;
    int k,y;
	for(k=0;k<n;k++)
	{
		for(y=0;y<m;y++)
		{
		  if(room[k][y]=='@')
		  dfs(k,y);
		}
	}
		printf("%d\n",ans);
    }
	}
 return 0;}

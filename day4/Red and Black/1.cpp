
#include<cstdio>
#include<iostream>
using namespace std;
char room[21][21];        //初始化房间
int n,m;
int ans;
void dfs(int i,int j){
    if(i<0||i>=n||j<0||j>=m||room[i][j]=='#')   //判断是不是超出了范围
    return ;
    ans++;
    room[i][j]='#';      //搜到“.”后先替换成“#”
    dfs(i-1,j);dfs(i+1,j);dfs(i,j+1);dfs(i,j-1);//四个方向进行搜索
}

int main(){

	while(scanf("%d%d",&m,&n)!=EOF)
	{
	   if(m==0&&n==0)
	 {
	   break;
	 }

	else{
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
		{
		  cin>>room[i][j];
		}
	}
	   ans=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
		  if(room[i][j]=='@')
		  dfs(i,j);
		}
	}
		printf("%d\n",ans);
		}
	}
	return 0;
}

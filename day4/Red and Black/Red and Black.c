#include<stdio.h>
char room[21][21];        //��ʼ������
int n,m;
int ans,w,e;
void dfs(int w,int e){
    if(w<0||w>=n||e<0||e>=m||room[w][e]=='#')   //�ж��ǲ��ǳ����˷�Χ
    return ;
    ans++;
    room[w][e]='#';      //�ѵ���.�������滻�ɡ�#��
    dfs(w-1,e);dfs(w+1,e);dfs(w,e+1);dfs(w,e-1);//�ĸ������������
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
          getchar();                           //�ٰ�����س�����
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

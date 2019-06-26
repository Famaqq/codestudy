#include<stdio.h>
#include<string.h>
int w,n,m,x,y,h,p[2005],head[2005];
double c,maxx,b[2005];
struct rec
{
	int to,next;
	double l;
}a[4000005];
int main()
{
	scanf("%d %d",&n,&m);
	int i;
	for (i=1;i<=m;++i)
	  {
	  	scanf("%d %d %lf",&x,&y,&c);
	  	a[++w].to=y;//转给的人
	  	a[w].l=(100-c)/100;//利润率
	  	a[w].next=head[x];//下一条线
	  	head[x]=w;//这个点的第一条线
	  	printf("%d",head[x]);
		a[++w].to=x;//相反
	  	a[w].l=(100-c)/100;
	  	a[w].next=head[y];
	  	head[y]=w;
	  }
	scanf("%d %d",&x,&y);
	int g;
	for (g=head[x];g;g=a[g].next)//预处理
	  b[a[g].to]=a[g].l;
	p[x]=1;//记录
	b[x]=1;//记录
	int k;
	for (k=2;k<n;++k)
	  {
	  	maxx=0;
	  	h=0;
	  	int f;
	  	for (f=1;f<=n;++f)
	  	  if (!p[f]&&b[f]>maxx)//求最大的
	  	  {
	  	  	maxx=b[f];//求最大的
	  	  	h=f;//记录
		  }
		if (!h) break;
		p[h]=1;//记录
		int u;
		for (u=head[h];u;u=a[u].next)//和h相连的所有边
		  if (!p[a[u].to]&&b[h]*a[u].l>b[a[u].to])//判断是否可更新
		    b[a[u].to]=b[h]*a[u].l;
	  }
	printf("%.8lf",100/b[y]);//输出结果
	return 0;
}

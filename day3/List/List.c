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
	  	a[++w].to=y;//ת������
	  	a[w].l=(100-c)/100;//������
	  	a[w].next=head[x];//��һ����
	  	head[x]=w;//�����ĵ�һ����
	  	printf("%d",head[x]);
		a[++w].to=x;//�෴
	  	a[w].l=(100-c)/100;
	  	a[w].next=head[y];
	  	head[y]=w;
	  }
	scanf("%d %d",&x,&y);
	int g;
	for (g=head[x];g;g=a[g].next)//Ԥ����
	  b[a[g].to]=a[g].l;
	p[x]=1;//��¼
	b[x]=1;//��¼
	int k;
	for (k=2;k<n;++k)
	  {
	  	maxx=0;
	  	h=0;
	  	int f;
	  	for (f=1;f<=n;++f)
	  	  if (!p[f]&&b[f]>maxx)//������
	  	  {
	  	  	maxx=b[f];//������
	  	  	h=f;//��¼
		  }
		if (!h) break;
		p[h]=1;//��¼
		int u;
		for (u=head[h];u;u=a[u].next)//��h���������б�
		  if (!p[a[u].to]&&b[h]*a[u].l>b[a[u].to])//�ж��Ƿ�ɸ���
		    b[a[u].to]=b[h]*a[u].l;
	  }
	printf("%.8lf",100/b[y]);//������
	return 0;
}

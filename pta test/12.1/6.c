#include<stdio.h>
int a[1000];
int visited[1000];
void perm(int n,int len)
{
	int i,k;
	if(len==n)
	{
		for(i=0;i<n-1;i++)
			printf("%d",a[i]);
		printf("%d\n",a[n-1]);
	}
	for(k=1;k<=n;k++)
	{
		if(visited[k]==0)
		{
			a[len++]=k;
			visited[k]=1;
			perm(n,len);
			len--;
			visited[k]=0;
            }
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	perm(n,0);
}
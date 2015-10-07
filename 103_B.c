#include <stdio.h>
#include <math.h>
typedef struct info
{
	int x;
	int y;
	int r;
}info;


int main()
{
	int x1,x2,y1,y2,n;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	scanf("%d",&n);

	info arr[n];
	int i=0;
	for(i = 0;i < n; i++)
	{
		scanf("%d%d%d",&arr[i].x,&arr[i].y,&arr[i].r);
	}

	int xmax=((x1>x2)?(x1):(x2));
	int xmin=((x1<x2)?(x1):(x2));
	int ymax=((y1>y2)?(y1):(y2));
	int ymin=((y1<y2)?(y1):(y2));




	int length= abs (x2-x1);
	int breadth=abs(y2-y1);
	int gen=2*(length+breadth);
	info g[gen];

	int t=ymin;

	for(i=0;i<breadth;i++)
	{
		g[i].x=xmin;
		g[i].y=t++;
		g[i].r=0;
	}
	int u=xmin;
	for(i=breadth;i<breadth+length;i++)
	{
		g[i].x=u++;
		g[i].y=ymax;
		g[i].r=0;
	}

	t= ymax;
	for(i=breadth+length;i<2*breadth+length;i++)
	{
		g[i].x=xmax;
		g[i].y=t--;
		g[i].r=0;
	}

	u=xmax;

	for(i=2*breadth+length;i<2*breadth+2*length;i++)
	{
		g[i].x=u--;
		g[i].y=ymin;
		g[i].r=0;
	}	

	int count=0;
	int j=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<2*(length+breadth);j++)
		{
			int d=((g[j].x-arr[i].x)*(g[j].x-arr[i].x)+(g[j].y-arr[i].y)*(g[j].y-arr[i].y));
			if(d<=arr[i].r*arr[i].r)
				g[j].r=1;
		}
	}


	count =0;
	for(i=0;i<2*(length+breadth);i++)
	{
		if(g[i].r==1)
			count++;
	}

	printf("%d\n",2*(length+breadth)-count);
	return 0;

}
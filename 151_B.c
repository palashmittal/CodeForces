#include <stdio.h>

int main()
{
	int a,x,y;

	scanf("%d%d%d",&a,&x,&y);
	if(y==0) 
		{
			printf("-1\n");
			return 0;
		}
	if(y<a)
	{
		if((a)<2*abs(x))
		{
			printf("-1\n");
			return 0;
		}
		else if(2*abs(x)==(a))
			{
				printf("-1\n");
				return 0;
			}
		else if(x==0 && y==0) printf("-1\n");
		else if(x==0 && y>0) printf("1\n");
		else printf("1\n");
	}
	else if(y>=a)
	{
		int c=y-a;
		if(c%a==0)
		{
			printf("-1\n");
			return 0;
		}
		else
		{
			int num=0;
			int d=c/a;
	//		int rem=c%a;
			if(d%2==0)
			{
				num=1+3*(d/2);
				
				if(2*abs(x)<(a))
				{
					printf("%d\n",num+1);
					return 0;
				}
				else
				{
					printf("-1\n");
					return 0;
				}
			}
			else
			{
				if(d>1) num=2+3*(d-1)/2;
				else num = 2;
				if(abs(x)>=a)
				{
					printf("-1\n");
					return 0;
				}
				else
				{
					if(x==0) printf("-1\n");
					else if(x<0) printf("%d\n",num+1);
					else if(x>0) printf("%d\n",num+2);
				}
			}
		}
	}


return 0;

}
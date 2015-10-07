#include <stdio.h>

int gcd(int a,int b)
{
	if(b==0) return a;
	else return gcd(b,a%b);
}



int main()
{
	int a, b;
	scanf("%d%d",&a,&b);

	int x=gcd(a,b);
//printf("%d\n",x);
	int count = 0;
	int c=a/x;
	int d=b/x;



	if(c==d)
	{
		printf("0\n");
		return 0;
	}

	while(c>1)
	{
		if(c%2==0)
		{
			c/=2;
			count++;
		}
			
		else if(c%3==0)
		{
			c/=3;
			count++;
		}
		else if(c%5==0)
		{
			c/=5;
			count++;
		}

		else if(c%2!=0 && c%3!=0 && c%5!=0)
		{
			printf("-1\n");
			return 0;
		}
	}
//	printf("%d\n",count);
	c=d;
	while(c>1)
	{
		if(c%2==0)
		{
			c/=2;
			count++;
		}
			
		else if(c%3==0)
		{
			c/=3;
			count++;
		}
		else if(c%5==0)
		{
			c/=5;
			count++;
		}

		else if(c%2!=0 && c%3!=0 && c%5!=0)
		{
			printf("-1\n");
			return 0;
		}
	}

	printf("%d\n",count);

	return 0;

}
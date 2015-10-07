#include <stdio.h>
#include <math.h>
int main()
{
	int r1,r2,c1,c2;
	scanf("%d%d%d%d",&r1,&c1,&r2,&c2);

	int bishop=0;

	if(r1==r2||c1==c2)
		{
			bishop =1;
		}
	else bishop=2;


	int rook;
	if((r1%2==c1%2) && (r2%2==c2%2))
	{
		if(abs(r1-r2)==abs(c1-c2))
			rook=1;
		else rook=2;
	}
	else if((r1%2!=c1%2) && (r2%2!=c2%2))
	{
		if(abs(r1-r2)==abs(c1-c2))
			rook=1;
		else rook=2;
	}
	else rook =0;
	int king=0;

	king = (abs(r1-r2)>=abs(c1-c2))?(abs(r1-r2)):(abs(c1-c2));

	printf("%d %d %d\n",bishop,rook,king);
	return 0;
}
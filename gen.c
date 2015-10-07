#include<stdio.h>
#include<math.h>
#include<setjmp.h>

#define P 0.0000001



typedef struct c
{
  double re;
  double im;
}complex;


jmp_buf jumper;

void rootsolver(double a,double b,double c)
{
  if((a-0.0)<P && (0.0-a)<P && (b-0.0)<P && (0.0-b)<P)
    {
     longjmp(jumper,  -3);
    }

  else if((a-0.0)<P && (0.0-a)<P)
    {
      longjmp(jumper, -2);
    }

  else if(b*b-4*a*c<0.0)
    {
      longjmp(jumper, -1);
    }
 
  else
    {
      double discrim=sqrt(b*b-4*a*c);

      double root1=(-b+discrim)/(2*a);

      double root2=(-b-discrim)/(2*a);

      if((root2-root1)<P)
    {
      printf("The equation has 2 equal roots: %lf and %lf",root1,root2);
    }

      else
    {
      printf("The roots are %lf and %lf",root1,root2);
    }

    }

}


int main(int argc, char *argv[])

{

  double a,b,c;

  printf("Enter 3 coefficients of quadratic equation a,b and c :\n");

  scanf("%lf%lf%lf",&a,&b,&c);

  int i;

  printf("\n");

 
  if((i=setjmp(jumper))==0)
    {
      rootsolver(a,b,c);
    }

  else  if(i==-2)
    {
      printf("Linear equation with single root: %lf\n",(-c)/b);
    }

  else  if(i==-3)
    {
      printf("No root exist\n");
    }
   

  else  if(i==-1)
    {
      complex d;
      d.re=(-b)/(2*a);
      d.im=(sqrt(4*(a*c)-(b*b)))/(2*a);

      complex e;
      e.re=d.re;
      e.im=-d.im;

      printf("Imaginary roots :%lf+i%lf and %lf+i%lf",d.re,d.im,e.re,e.im);

    }

 return 0;

}
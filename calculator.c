#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void show_menu()
{
  printf("\t**** C A L C U L A T O R ****\n");
  printf("1. Sum\n2. Difference\n3. Product\n4. Divide\n5. Power\n6. Square Root\n7. Logarithm\n8. Sine\n9. Cosine\n10. Tangent\n11. ArcSine\n12. Arccosine\n13. ArcTangent\nEnter your choice\n");
}
void sum()
{
  int n,i;
  float sum=0;
  printf("\nEnter the number of elements to be added\n");
  scanf("%d",&n);
  float *A=(float*)malloc(n*sizeof(float));
  printf("\nEnter the elements\n");
  for(i=0;i<n;i++)
    {
      scanf("%f",A+i);  
      sum+=*(A+i);
    }
  printf("\nSum = %f\n",sum);
  return;
}
void difference()
{
  float a,b;
  printf("\nEnter two numbers\n");
  scanf("%f%f",&a,&b);
  printf("\nDifference = %f\n",a-b);
  return;
}
void product()
{
 int n,i;
  float prod=1;
  printf("\nEnter the number of elements to be multiplied\n");
  scanf("%d",&n);
  float *A=(float*)malloc(n*sizeof(float));
  printf("\nEnter the elements\n");
  for(i=0;i<n;i++)
    {
      scanf("%f",A+i);
      prod*=*(A+i);
    }
  printf("\nProduct = %f\n",prod);
  return;
}
void divide()
{
  float a,b;
  printf("\nEnter two numbers\n");
  scanf("%f%f",&a,&b);
  if(b==0)
    {
      printf("\nCannot divide by zero\n");
      return;
    }
  printf("Divident = %f",a/b);
  return;
}
void power()
{
  float n;
  int p;
  printf("\nEnter number and power\n");
  scanf("%f%n",&n,&p);
  printf("\nResult = %f",pow(n,p));
  return;
}
void squareroot()
{
  float n;
  printf("\nEnter number\n");
  scanf("%f",&n);
  printf("\nResult = %f",sqrt(n));
  return;
}
void logarithm()
{
  float n,b;
  printf("\nEnter number and base\n");
  scanf("%f%f",&n,&b);
  printf("\nResult = %f",logf(n)/logf(b));
  return;
}
void sine()
{
  printf("\nEnter Angle in degrees\n");
  float a;
  scanf("%f",&a);
  printf("\nSin(%f) = %f\n",a,sin(a*3.14/180));
}
void cosine()
{
  printf("\nEnter Angle in degrees\n");
  float a;
  scanf("%f",&a);
  printf("\nCos(%f) = %f\n",a,cos(a*3.14/180));
}
void Tan()
{
  printf("\nEnter Angle in degrees\n");
  float a;
  scanf("%f",&a);
  printf("\ntan(%f) = %f\n",a,tan(a*3.14/180));
}

void arcsine()
{
  printf("\nEnter Number\n");
  float a;
  scanf("%f",&a);
  printf("\nArcSin(%f) = %f\n",a,asin(a)*180/3.14);
}
void arccosine()
{
  printf("\nEnter Number\n");
  float a;
  scanf("%f",&a);
  printf("\nArcCos(%f) = %f\n",a,acos(a)*180/3.14);
}
void arcTan()
{
  printf("\nEnter Angle in degrees\n");
  float a;
  scanf("%f",&a);
  printf("\nArctan(%f) = %f\n",a,atan(a)*180/3.14);
}


int main()
{
  int n,c;
  show_menu();
  scanf("%d",&n);
  switch(n)
    {
    case 1 : sum();
      break;
    case 2 : difference();
      break;
    case 3 : product();
      break;
    case 4 : divide();
      break;
    case 5 : power();
      break;
    case 6 : squareroot();
      break;
    case 7 : logarithm();
      break;
    case 8 : sine();
      break; 
    case 9 : cosine();
      break;
    case 10 : Tan();
      break;
    case 11 : arcsine();
      break;
    case 12 : arccosine();
      break;
    case 13 : arcTan();
      break;
   default: printf("\nEnter correct choice\n");
    }
  fflush(stdin);
  printf("\nWant to continue(1/0)\n");
  scanf("%d",&c);
  if(c==1)
    main();
  return 0;
}

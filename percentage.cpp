#include<stdio.h>
int main()
{
    printf("Assignment No.4 \n");

double a,b,c,d,e,f;
printf("\t\tENTER THE PHYSICS MARKS: ");
scanf("%lf",&a);
printf("\t\tENTER THE CHEMISTRY MARKS: ");
scanf("%lf",&b);
printf("\t\tENTER THE ENGLISH MARKS: ");
scanf("%lf",&c);
printf("\t\tENTER THE MATHEMATICS MARKS: ");
scanf("%lf",&d);
printf("\t\tENTER THE COMPUTER MARKS: ");
scanf("%lf",&e);
printf("\n");
f=(a+b+c+d+e)/500*100;
printf("\t\tTOTAL PERCENTAGE = %.2lf\n\n",f);
if(f>=90)
    printf("\t\tGRADE = A ");
else if(f>=80)
    printf("\t\tGRADE = B ");
else if(f>=70)
    printf("\t\tGRADE = C ");
else if(f>=60)
    printf("\t\tGRADE = D ");
else if(f>=50)
    printf("\t\tGRADE = E ");
else
    printf("\t\tGRADE = F ");
    printf("\n\n\n");
return 0; 
}

#include<stdio.h>
int main()
{
	printf("Assignment No.3\n");
	float r,ans;
	printf("\t\tEnter the radius of the Circle(in meter)\n");
	scanf("%f",&r);
	ans=2*r;
	printf("\t\tDiameter = %f m\n",ans);
	ans=2*r*3.141;
	printf("\t\tCircumference = %f m\n",ans);
	ans=r*r*3.141;
	printf("\t\tArea = %f sq.m\n",ans);
	return 0;
}

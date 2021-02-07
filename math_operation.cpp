#include<stdio.h>
int main()
{
	printf("Assignment No.1 \n");
    int x,y;
    char a;
    printf("\t\tEnter any two numbers:");
    scanf("%d %d",&x,&y);
    printf("\t\tEnter your operation:");
    scanf(" %c",&a);
    switch(a)
{
    case '+':
        printf("\t\tsum of two numbers:%d\n",x+y);
        break;
    case '-':
        printf("\t\tsubstraction of two numbers:%d\n",x-y);
        break;
    case '*':
        printf("\t\tmultiplication of two numbers:%d\n",x*y);
        break;
    case '/':
        printf("\t\tdivision of two numbers:%d\n",x/y);
        break;
    case '%':
        printf("\t\tremainder of two numbers:%d\n",x%y);
        break;
    default:
        printf("please try again\n");
}
return 0;
}

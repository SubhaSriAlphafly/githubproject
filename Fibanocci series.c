#include <stdio.h>
int main()
{
	int n,i,a=0,b=1,c;
	printf("Enter no.of terms to be printed(n>2):");
	scanf("%d", &n);
	printf("Fibanocci Series:0 1");
	for(i=1;i<=n-2;i++)
	{
	    c=a+b;
	    a=b;
	    b=c;
	    printf(" %d", c);
	}
	return 0;
}


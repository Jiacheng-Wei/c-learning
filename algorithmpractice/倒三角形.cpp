#include <stdio.h>

int main()
{
	int n;
	while(scanf("%d",&n)==1)
	{	
		for(int j=0;j<n;j++)
		{		
			for(int k=0;k<j;k++)
			printf(" ");
			for(int i=1;i<=2*(n-j)-1;i++)
			printf("#");
			printf("\n");
		}
	}
	return 0;
}

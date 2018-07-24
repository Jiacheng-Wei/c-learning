#include <stdio.h>
//自己的代码，复杂了，时间复杂度高 
/*int main()
{
	int a,b,c;
	while (1)
	{
		scanf("%d%d%d",&a,&b,&c);
		int count = 0;
		int ans=0;
		int three[50],seven[50],five[50],fifteen[50];
		for (int i=0;i<50;i++)
		{
			three[i]=a+3*i;
			//printf("%d",three[i]);
		}
		for (int i=0;i<50;i++)
		{
			five[i]=b+5*i;
			//printf("%d\n",five[i]);
		}
		for (int i=0;i<50;i++)
		{
			seven[i]=c+7*i;
			//printf("%d\n",seven[i]);
		}
		for (int i=0;i<50;i++)
		{
			for (int j=0;j<50;j++)
			{
				if (three[i]==five[j]&&three[i]<100&&three[i]>10) 
				{
					count =1;
					for(int k=0;k<50;k++)
					{
						fifteen[k]=three[i]+15*k;
						//printf("%d\n",fifteen[k]);
					}
				}
			} 
			if (count==1) 
			{
				count = 0;
				break; 
			}
		 } 
		 for (int i=0;i<50;i++)
		 {
		 	for (int j=0;j<50;j++)
		 	{
		 		if (seven[i]==fifteen[j]&&seven[i]<100&&seven[i]>10)
		 		{
		 			count=1;
					ans = seven[i];
					break;
				 }
			 }
			 if (count == 1)
			 {
			 	break;
			 }
		 }
		 if (ans)
		 {
		 	printf("%d\n",ans);
		 	continue;
		 }
		 else 
		 {
		 	printf("No answer\n");
		 	continue;
		 }
	}
	return 0;
 } */ 
 
 
 //标准答案
 int main()
 {
 	int a,b,c;
 	while (1)
 	{
 		int ans = 0; 
		scanf("%d%d%d",&a,&b,&c);
 		for (int i=10;i<100;i++)
 		{
 			if (i%3==a&&i%5==b&&i%7==c) 
			{
				ans=i;
				break;	
			}
		 }
		 if(ans)
		 {
		 	printf("%d\n",ans);
		 }
		 else 
		 {
		 	printf("No answer\n");
		 }
	 }
  } 

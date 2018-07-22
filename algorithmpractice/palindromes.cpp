#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char *rev = "A   3  HIL JM O   2TUVWXY51SE Z 8  "; //用来定位镜像对应的字符串 
const char *msg[] = {"not a palindrom","a regular palindrom","a mirrored string", "a mirrored palindrom"};

char r(char ch)
{
	if(isalpha(ch)) return rev[ch - 'A'];//isalpha是判断是否是字母的函数 
	return rev[ch - '0' + 25];
 } 
 int main()
 {
 	char s[30];
 	while (scanf("%s",s) == 1)
 	{
 		int len = strlen(s);
 		int p=1, m=1;
 		for(int i = 0;i < (len+1)/2;i++)
 		{
 			if(s[i]!=s[len-1-i]) p=0;//不是回文串 
 			if(r(s[i]) != s[len -i-1]) m=0;//不是镜像串 
		 }
		 printf("%s -- is %s.\n\n",s,msg[m*2+p]);
	 }
	 return 0;
  } 

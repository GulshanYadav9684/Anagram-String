#include <stdio.h>
int isAnagram(char x[],char y[],int n1,int n2)
{
if(n1!=n2)return 0;
int i;
int a[26]={0};
int b[26]={0};
for(i=0;i<n1;i++)
   {
	 a[x[i]-97]++;
	 b[x[i]-97]++;
   }
    for(i=0;i<26;i++)
	{
		if(a[i]!=b[i])return 0;
	}		
	return 1;
}

void main()
{
char x[]="ram";
char y[]="arm";
if(isAnagram(x,y,3,3))
{
	printf("String  is anagram");
}	
else 
{
	printf("string is not anagram");
}
}
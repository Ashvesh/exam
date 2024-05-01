
#include<stdio.h>
#include<string.h>

main()
{
	int n=0,a=0;
  char str[20];
  
  printf("enter any string:");
  gets(str);
  int i;
  for( i=0;str[i]!=NULL;i++)
  {
  	if((str[i]=='a')||(str[i]=='e')|| (str[i]=='i')||(str[i]=='o')||(str[i]=='u')||(str[i]=='A')||(str[i]=='E')|| (str[i]=='I')||(str[i]=='O')||(str[i]=='U'))
     	{
  		a++;
  	
  		
     }else
	    {
	    	n++;
		}
  }
  	printf(" the vowel is: %d\n",a);
  printf("the const numer is %d",n);
	
}


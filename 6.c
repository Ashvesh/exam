#include<stdio.h>

 main()

{
	FILE *file;
	char name[20];
	char course[20];
	int i;
	
	file=fopen("data.txt","w");
	if(file == Null)
	{
		printf("error in file.......");
		
	}
	
	
	for(i=0;i<3;i++)
	{
	
		printf("enter student name:",i+1);
		scanf("%s",name);
		printf("enter student course:",i+1);
		scanf("%s",course);
		
		
		fprintf(file,"student name:%s,course:%s\n",name,course);
			
	}
	fclose(file);
	printf("data has written in data.txt......\n");
	return 0;


}

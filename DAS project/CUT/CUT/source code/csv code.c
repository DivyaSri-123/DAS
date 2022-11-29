#include<stdio.h>
#include<stdlib.h>
#define BSIZE 1024
int coma()
{
    FILE *ptr ;
    char buffer[BSIZE];
    float  sum=0.0, avg,min=0,max=0,c;
    int m=0;
    
    ptr=fopen("//home/pathakunta/Documents/file1.csv","r");
    if(ptr == NULL)
	{
		printf("Error opening file \n");
		return 1;
	}   
    while(fgets(buffer,BSIZE,ptr) != NULL) 
	{
		sum += atof(buffer);
	   	m++;
		c=atof(buffer);
		if(m==0)
		
		max=c;
		
		else 
		{
            if (c>max)
	   	   {
		      max = c;
		      m++;
		    }
     	}
	}
	while(fgets(buffer,BSIZE,ptr) != NULL) 
	{
	    c=atof(buffer);
	    if(m==0)
		{
		  min=c;
		  m++;
	    }
		else 
		{
			
	        if (c < min  ) 
	    	{
		        min = c;
		        m++;
        	}
        }
    }
    printf("sum : %.2f \n ",sum);
    printf("max: %.2f \n",max);
    printf("min: %.2f \n",min);
    	avg = sum / m;
	printf("average :: %.2f \n",avg);
	fclose(ptr);
    return 0;
	
}

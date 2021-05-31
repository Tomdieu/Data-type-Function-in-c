#include <stdio.h>
#include <math.h>
#define max 100
char *type(char *value)
{
	double temp;
	int n;
	char str[max]="";
	char s[max]="";
	double val=1e-12;
	if(sscanf(value,"%lf%s",&temp,s))
	{
		if(strcmp(s,"")==0)
		{
			n=(int)temp;
			if(fabs(temp-n)/temp>val)
			{
				return "float";
			}
			else
			{
				return "int";
			}
		}
		else
		{
			return "string";
		}
	}
	else if(sscanf(value, "%s",str)==1)
	{
		return "string";
	}
	else
	{
		return "Not_a_type";
	}
}
int main()
{
	char val[MAX_INPUT];
	do
	{
		printf("\nEntre n'importe quoi pour determiner le type : ");
		fgets(val,100,stdin);
		printf("\nLe type de %s est %s \n\n",val,type(val));
	}while(1);
	
	return 0;
}

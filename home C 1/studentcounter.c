#include<stdio.h>

#define STUDENTS_COUNT 20
#define NAME_LENGTH 8

int calcMax(double[],int);

int main() {


	int ages[STUDENTS_COUNT];
	double rates[STUDENTS_COUNT];
        char names [STUDENTS_COUNT][NAME_LENGTH];

   for(int i=0;i<STUDENTS_COUNT;i++)
   {
	char currentName[NAME_LENGTH];
	scanf("%d",&ages[i]);

	scanf("%lf",&rates[i]);
    	scanf("%s",names[i]);


   }
   


  
   int bestStudent=calcMax(rates,STUDENTS_COUNT);
  
   printf("student:");
   printf("%s/n",names[bestStudent]);
  
   printf("age:");
   printf("%d/n",ages[bestStudent]);

   printf("rate:");
   printf("%lf/n",rates[bestStudent]);

    return 0;
}

int calcMax(double array[],int  length)
{
	int max=0;

	for (int i=0;i<length;i++)
	{
		if( array[i]>array[i+1]){
			max = i;
		}
	}
	return max;
}

#include <stdio.h>
int main(){

int x=0;
int y=0;

while(y == 0)
{
	puts("enter your values::");
	scanf("%i",&x);
	scanf("%i",&y);

}


float result = (x * y + 21 * x / y - 200);

printf("%f",result);


return 0;
}

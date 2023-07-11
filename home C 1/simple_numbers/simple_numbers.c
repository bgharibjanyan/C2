#include <stdio.h>
int main (){

	int num=0;
	
	puts("select the number:");

	scanf("%d",&num);

	for(int i=2;i<num;i++){
		if((num%i)==0){
			puts("number is not simple");
			break;
		}
		else if(i==(num-1)){
			 puts("number is simple");
                        break;

		} 
	}

return 0;
}

#include <stdio.h>
int main(){

char sym=0;


while(1){


	if(sym < 90 && sym > 64){
		break;
	}
	else{
		puts("inpute >>");
		scanf("%c",&sym);

	}
}


char result=sym+32;


printf("%c",result );


return 0;
}

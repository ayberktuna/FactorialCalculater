#include <stdio.h>
#include <windows.h>
#include <time.h>

int main(){
	system("color 6");
	
	int number1;
	int number2;
	int i=0;
	int f=1;
	
	art2:
	printf("Type the number whose factorial you want to calculate:");
	scanf("%d",&number1);
	
	art:
	i++;
	if(i<=number1){
		f=f*i;
		goto art;	
	}

	printf("The factorial of the number you wrote is %d\n",f);
	sleep(1.0);
	printf("Do you want to calculate another value?\n");
	art3:
	printf("Yes(1)\nNo(2)\nType a volue(Only 1 and 2):");
	scanf("%d",&number2);
	
	if(number2==1){
		i=0;
		f=1;
		goto art2;
	}
	if(number2==2){
		printf("Process completed.");
	}
	else{
		printf("Please type only 1 and 2\n");
		sleep(1.0);
		goto art3;
	}
	return 0;
}
#include<stdio.h>
int main(){
	char opera;
	double num1;
	double num2;
	double result;
	printf("enter the operator(*-+/):");
	scanf("%c",&opera);
	printf("enter num1:");
	scanf("%lf",&num1);
	printf("enter num2:");
	scanf("%lf",&num2);
	switch(opera){
		case'/':
			result=num1/num2;
			printf("\nresult=%lf",result);
			break;
		case'*':
			result=num1*num2;
			printf("\nresult=%lf",result);
			break;
		case'-':
			result=num1-num2;
		printf("\nresult=%lf",result);
			break;
		case'+':
			result=num1+num2;
		printf("\nresult=%lf",result);
			break;
			default:
				printf("%c is invalid",opera);
				
	}
	return 0;
}


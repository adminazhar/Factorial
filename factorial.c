#include<stdio.h>
int main(){

//N integer for storing the user input
//I integer for loop
int n,i;
//long long type data type since factorial increases rapidly and unsigned because only positive number's factorial can be found
unsigned long long factorial=1;

//User Input
printf("Enter an Integer: ");
scanf("%d",&n);

//If the enter number is negative then there is no factorial
if(n<0){
	printf("Factorial of negative number doesn't exists.");
}
else{
	for(i=2;i<=n;i++){
		factorial *= i;
	}
	printf("Factorial of: %d is %llu",n,factorial);
}


return 0;
}

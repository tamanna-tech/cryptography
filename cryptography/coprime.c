
#include<stdio.h>
#include<conio.h>
int main()
{
	 int num1, num2, hcf, i;
	 int executenext=1;
    do{
	 printf("Enter two numbers:\n");
	 scanf("%d%d", &num1, &num2);
	 // Finding HCF
	 for(i=1;i<=num1;i++)
	 {
	  if(num1%i==0 && num2%i==0)
	  {
	   hcf = i;
	  }
	 }
	 if(hcf == 1)
	 {
	  printf("%d and %d are CO-PRIME NUMBERS.", num1, num2);
	 }
	 else
	 {
	  printf("%d and %d are NOT CO-PRIME NUMBERS.", num1, num2);
	 }
	     printf("\nDo you want to execute next? (1 for Yes, 0 for No): ");
    scanf("%d", &executenext);
    getchar(); 
}while(executenext);
    printf("Tamanna kc");
    printf("\nRoll no- 34");
	 return(0);
}


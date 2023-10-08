#include <stdio.h>
void checkPrime(int N) {
  int flag = 1, i;
  for (i = 2; i <= N / 2; i++) {
    if (N % i == 0) {
      flag = 0;
      break;
    }
  }
  if (flag) {
    printf("The number %d is a Prime Number\n", N);
  } else {
    printf("The number %d is not a Prime Number\n", N);
  }
  return;
}
int main() {
  int N;
  int executenext = 1;
  do {
    printf("Enter the number to check whether a given number is prime or not:");
    scanf("%d", & N);
    checkPrime(N);
    printf("Do you want to execute next? (1 for Yes, 0 for No): ");
    scanf("%d", & executenext);
    getchar();
  } while (executenext);
  
  return 0;
}



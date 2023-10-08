#include<stdio.h>
main() {
  int i, num, MI;
  int executenext = 1;
  do {
    printf("\nEnter number to get multiplicative Inverse: ");
    scanf("%d", & num);
    for (i = 1; i <= num; i++) {
      MI = ((i * 26) + 1);
      if (MI % num == 0) {
        break;
      }
    }
    MI = MI / num;
    printf("Multiplicative inverse of %d is %d\n", num, MI);
    printf("Do you want to execute next? (1 for Yes, 0 for No): ");
    scanf("%d", & executenext);
    getchar();
  } while (executenext);
  printf("Tamannna k.c");
  printf("\nRoll number: 34");
}


#include <stdio.h>
void encrypt(char message[], int key) {
    int i = 0;
    char ch;
    while (message[i] != '\0') {
        ch = message[i];
        if (ch >= 'a' && ch <= 'z') {
            ch = 'a' + (ch - 'a' + key) % 26;
        }
        else if (ch >= 'A' && ch <= 'Z') {
            ch = 'A' + (ch - 'A' + key) % 26;
        }
        message[i] = ch;
        i++;
    }
}
int main() {
    char message[100];
    int key=3;
    int executenext=1;
    do{
    printf("Enter a message: ");
    gets(message);
    encrypt(message, key);
    printf("Encrypted message: %s\n", message);
    printf("Do you want to execute next? (1 for Yes, 0 for No): ");
    scanf("%d", &executenext);
    getchar(); 
}while(executenext);
    printf("------------Tamanna kc-------------");
    printf("\n--------- Rollno:34--------------");
    return 0;
}


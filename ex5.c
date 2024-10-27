#include <stdio.h>

void sayHello(char name[]) {
    printf("Hello, %s!\n", name);
}

void main(){
    char name[30];
    printf("Enter your name: ");
    scanf("%s", name);
    sayHello(name);

}

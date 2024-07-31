#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char address[200];
    
    printf("Please enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    
    printf("Please enter your address: ");
    fgets(address, sizeof(address), stdin);
    address[strcspn(address, "\n")] = '\0';
    
    printf("\nThank you, %s!\n", name);
    printf("Your address is: %s\n", address);
    
    return 0;
}

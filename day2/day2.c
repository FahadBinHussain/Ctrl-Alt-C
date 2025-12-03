// plain code
// #include <stdio.h>

// int main() {
//   char name[50];
//   printf("Enter your name: ");
//   scanf("%s", name);
//   printf("Hello, %s! Welcome to Day Two of the C Programming Course.\n", name);
//   return 0;
// }

// bug-fixed code
#include <stdio.h>
#include <string.h>

int main() {
  char name[50];
  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);
  name[strcspn(name, "\n")] = '\0';
  printf("Hello, %s! Welcome to Day Two of the C Programming Course.\n", name);
  return 0;
}
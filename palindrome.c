#include<stdio.h>
#include<string.h>
int main() {
  char str[100];
  int i, j, len, flag = 0;

  printf("Enter a string: ");
  scanf("%s", str);
  len = strlen(str);
    for(i = 0, j = len - 1; i < len/2; i++, j--) {
    if(str[i] != str[j]) {
      flag = 1;
      break;
    }
  }
  if(flag)
    printf("%s is not a palindrome.\n", str);
  else
    printf("%s is a palindrome.\n", str);
  return 0;
}

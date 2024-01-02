#include <stdio.h>
#include <string.h>

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  char s[] = "Farmer Jack realized that big yellow quilts were expensive!!";

  int *ptr = &arr[9];

  for (int currentIndex = 9; currentIndex >= 0; currentIndex--)
  {
    printf("%d\n", *ptr);
    ptr--;
  }

  char *ptr2 = &s[0];

  for (int currentIndex = 0; currentIndex < (sizeof(s) / sizeof(s[0])); currentIndex++)
  {
    *ptr2 = '#';
    printf("%c", *ptr2);
    ptr2++;
  }
}

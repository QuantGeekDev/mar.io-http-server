#include <stdio.h>
#include <stdlib.h>

void initializationMessage()
{
  printf("Initializing server");
}

int main()
{
  initializationMessage();

  printf("\nShutting down server...");
  exit(0);
}

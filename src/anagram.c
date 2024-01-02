#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

  char stringToAnalyze[] = "dad";

  size_t lengthOfString = strlen(stringToAnalyze);
  int descendingCounter = lengthOfString - 1;

  for (int ascendingCounter = 0; ascendingCounter < lengthOfString; ascendingCounter++)
  {

    if (stringToAnalyze[ascendingCounter] == stringToAnalyze[descendingCounter])
    {
      descendingCounter--;
    }
    else
    {

      printf("%s is not an anagram!", stringToAnalyze);
      exit(0);
    };
  }
  printf("%s is an anagram!", stringToAnalyze);
  exit(0);
}

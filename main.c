#include <stdio.h>

int main ()
{
  int size = 1000;
  char string[size];
  int count, c, j, flag = 0;
  int longLine = 80;

  count = 0;
  while((c = getchar()) != EOF && c != '\n')
  {
    string[count] = c;
      if(count > longLine)
        {
          flag = 1;
        }
      ++count;
  }
  if(flag == 1) { for(j = 0; j < count; j++) { printf("%c", string[j]); }
  printf("\n");
  return 0;
}
#include <stdio.h>

int main()
{
  printf("Date : %s\n", __DATE__);
  printf("Time : %s\n", __TIME__);
  printf("File : %s\n", __FILE__);
  printf("Line : %d\n", __LINE__);
  printf("STDC / ANSI : %d\n", __STDC__);

  return 0;
}

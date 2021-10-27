#include <unistd.h>
#include <stdio.h>
int main()
{
  printf("Parent ID = %d\n", getppid());
  printf("Child ID = %d\n", getpid());
  return 0;
}
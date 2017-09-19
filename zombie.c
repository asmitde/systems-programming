/* Create a zombie process */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
  pid_t pid;

  pid = fork();
  if(pid > 0)
    {
      /* Code for parent process */
      sleep(60);
      printf("\nI am parent process %d", getpid());
      printf("\nMy zombie child is %d", pid);
    }
  else
    {
      /* Code for child process */
      printf("\nI am child process %d", getpid());
      printf("\nMy parent is %d", getppid());
      printf("\nI am now exiting...");
      exit(0);
    }
  
  return 0;
}

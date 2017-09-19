/* Create an orphan process */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
  pid_t pid;

  pid = fork();
  if(pid == 0)
    {
      /* Code for child process */
      printf("\nI am child process %d", getpid());
      printf("\nMy parent is process %d", getppid());
      sleep(60);
    }
  else
    {
      /* Code for parent process */
      printf("\nI am parent process %d", getpid());
      printf("\nMy would be orphan child is process %d", pid);
      exit(0);
    }

  /* Code execute by child process only */
  printf("\nI am orphan child process %d", getpid());
  printf("\nMy current parent is process %d", getppid()); // This should give 1 since process is orphan

  return 0;
}

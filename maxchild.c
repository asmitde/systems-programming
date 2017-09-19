/* Find maximum number of child processes that can be created */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
  pid_t pid;
  int count = 0;

  while(1)
    {
      pid = fork();
      if(pid == -1)
       	break;
      else if(pid == 0)
	{
	  sleep(1);
	  exit(0);
	}
      
      count++;
      printf("\nChild #%d created: pid = %d", count, pid);
    }

    printf("\n\nNumber of child process created by parent (pid=%d) is %d\n", getpid(), count);

  return 0;
}

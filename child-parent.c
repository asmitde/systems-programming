#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<shm.h>
main()
{
      pid_t id1,id2;
      id1=fork();
      if(id1==0)
                while(1)
                        printf("\nChild1\n");
      id2=fork();
      if(id2 == 0)
             while(1)
                     printf("\nChild2\n");
      sleep(2);
      kill(id1,SIGSTOP);
      sleep(2);
      kill(id1,SIGCONT);
      sleep(2);
      kill(id2,SIGSTOP);
      sleep(2);
      kill(id1,SIGKILL);
      kill(id2,SIGKILL);
}        

#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<shm.h>
maim()
{
      int val,sum=0,sum1=0;
      int *ptr,shmid,id;
      shmid=shmget(IPC_PRIVATE,4,0666|IPC_CREAT);
      ptr=(int*)shmat(shmid,0,0);
      if(shmid<0)
                 printf("Error");
      id=fork();
      if(id==0)
      {
               *ptr=50+40;
               printf("Child:Partial sum:%d",*ptr);
               val=wait(0);
               printf("%d",val);
               sum=sum1+*ptr;
               printf(%d,sum);
               shmdt(ptr);
               shmctl(shmid,IPC_RMID,0);
      }
}               

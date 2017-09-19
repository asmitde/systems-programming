/* Add 4 numbers using shared memory */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <sys/ipc.h>
#include <unistd.h>

int main()
{
  int *shm, shmid, sum, c;
  pid_t pid;

  /* Allocate shared memory */
  shmid = shmget(IPC_PRIVATE, sizeof(int), IPC_CREAT | IPC_EXCL | S_IRUSR | S_IWUSR);

  /* Attach shared memory */
  shm = (int*)shmat(shmid, 0, 0);

  pid = fork();
  if(pid == 0)
    {
      /* Code for child process */
      *shm = 10 + 20;
      exit(0);
    }

  wait(&c); // Wait for child to write to shm and exit

  sum = *shm + 30 + 40;
  printf("\nSum = %d", sum);
  
  /* Detach the shared memory */
  shmdt(shm);
  /* Deallocate the shared memory */
  shmctl(shmid, IPC_RMID, 0);

  return 0;
}

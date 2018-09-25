#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
  int status;
  pid_t pid;

  pid = fork();

  if (pid == -1)
    printf("\n Error creating child");
  else if (pid == 0) {
    printf("\nI'm the child");
  } else {
    pid_t TCpid;
    TCpid = wait(&status);
    printf("\nI'm the parent.\n");
    printf("The child with pid = %d terminated with status = %d", TCpid,
           status);
  }
  return 0;
}

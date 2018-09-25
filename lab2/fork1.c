#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/* 
 * What's the craic here?
 * 
 * A fork command creates a copy of process in execution at the point of
 * fork().
 *
 * The output if this program shows the second printf displayed twice, 
 * this is due to this replication.
 *
 * Definitions:
 * Fork - create child process that's exact copy of parent, see OpenGroup docs for fork()
 * Process - a program in execution
 * System call - call to kernel function
 *
 */

int main() {
  pid_t pid;
  int i = 5;
  
  printf("The value of i is %d. This is before the fork.\n", i);

  pid = fork();

  printf("The value of i is %d. This is after the fork.\n", i);
  return 0;
}

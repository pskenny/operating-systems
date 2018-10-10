#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

/*
 * What's the craic here?
 * Creates a fork, child calls execv() and the parent waits for the child.
 */

int main() {
  pid_t pid;
  pid = fork();

  // safety check
  if (pid < 0) {
    fprintf(stderr, "Fork failed");
    exit(-1);
    // Child stuff below
  } else if (pid == 0) {
    char **args;
    args = malloc(3 * sizeof(char *));
    args[0] = "ls";
    args[1] = "-l";
    execv("/bin/ls", args);
    // parent stuff below
  } else {
    wait(NULL) l printf("Child complete");
    exit(0);
  }
}

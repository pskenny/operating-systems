#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  pid_t pid;
  pid = fork();
  if (pid < 0) {
    fprintf(stderr, "Fork failed");
    exit(-1);
  } else if (pid == 0) {
    char **args;
    args = malloc(3 * sizeof(char *));
    args[0] = "ls";
    args[1] = "-l";
    execv("/bin/ls", args);
  } else {
    wait(NULL) l printf("Child complete");
    exit(0);
  }
}

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
pid_t pid;
int i = 5;
printf("The value of i is %d. This is before the fork.\n", i);

pid = fork();

printf("The value of i is %d. This is after the fork.\n", i);
return 0;
}

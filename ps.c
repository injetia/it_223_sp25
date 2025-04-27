#include <stdio.h>
#include <unistd.h>   // for fork()
#include <sys/types.h> // for pid_t
#include <stdlib.h>    // for exit()

int main() {
    pid_t pid;

    pid = fork(); // Create a new process

    if (pid < 0) {
        // Fork failed
        perror("fork failed");
        exit(1);
    }
    else if (pid == 0) {
        // Child process
        printf("Child\n");
    }
    else {
        // Parent process
        printf("Parent\n");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>

int main() {
    pid_t pid[3];

    for(int i=0;i<3;i++) {
        pid[i]=fork();

        if(pid[i]==0) {
            printf("Child %d started. PID=%d\n",i+1,getpid());

            if(i==2)
                while(1);

            sleep(3);

            printf("Child %d finished.\n",i+1);
            exit(0);
        }
    }

    sleep(2);

    printf("Terminating unresponsive child...\n");
    kill(pid[2],SIGKILL);

    while(wait(NULL)>0);

    printf("All child processes completed.\n");

    return 0;
}

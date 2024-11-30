#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    int num_children;
    
    printf("Masukkan jumlah child process yang ingin dibuat: ");
    scanf("%d", &num_children);
    printf("Creating %d child process\n", num_children);

    pid_t pid;

    for (int i = 0; i < num_children; i++) {
        pid = fork(); 
        
        if (pid == -1) {  
            fprintf(stderr, "Gagal dalam membuat child process\n");
            return 1;
        }
        else if (pid == 0) {  
            printf("Child process %d: pid = %d\n", i + 1, getpid());
            return 0;  
        }
    }

    for (int i = 0; i < num_children; i++) {
        wait(NULL); 
    }

    printf("Semua child process telah selesai\n");

    return 0;
}


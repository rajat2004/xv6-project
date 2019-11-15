#include "user.h"
#include "types.h"
#include "stat.h"

int main() {
    int i;
    while(1) {
        for (i=0; i<500000; i++);
        if (fork() == 0) {
            exit();
        }
        else {
            wait();
        }
    }
    exit();
}
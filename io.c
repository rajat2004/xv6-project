#include "user.h"
#include "types.h"
#include "stat.h"

int main() {
    while(1) {
        uint i=0;
        while (i < 200000) { i++; }
        sleep(1);
    }
    exit();
}
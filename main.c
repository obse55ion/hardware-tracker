#include <stdio.h>
#include <sys/utsname.h>

int main() {
    struct utsname buffer;
    if (uname(&buffer) == 0) {
        printf("OS: %s\n", buffer.sysname);
        printf("version: %s\n", buffer.release);
        printf("Архитектура: %s\n", buffer.machine);
    }
    return 0;
}
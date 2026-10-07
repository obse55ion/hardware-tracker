#include <stdio.h>
#include <sys/utsname.h>
#include <sys/sysinfo.h>
#include "include/get_ram_info.h"

int main() {
    struct utsname buffer;
    if (uname(&buffer) == 0) {
        printf("OS: %s\n", buffer.sysname);
        printf("version: %s\n", buffer.release);
        printf("architecture: %s\n", buffer.machine);
    }
    get_info();
    return 0;
}

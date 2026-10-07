#ifndef GET_RAM_INFO_H
#define GET_RAM_INFO_H



#include <sys/sysinfo.h>
#include <stdio.h>


int get_info(){
    struct sysinfo ram_info;
    sysinfo(&ram_info);
    printf("uptime: %ld\n", ram_info.uptime / 60);
    printf("total ram %lu\n", ram_info.totalram);
    // printf("%lu\n", ram_info.freeram);

    return 0;
}


#endif

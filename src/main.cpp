#include <iostream>
#include <cstring>
#include "offsets.hpp"


void log(char* txt) {
    printf("[ // yoink // ]: %s\n",txt);
}

void* init(void* data) {

    log((char*)"init called!"); // what the fuck.

    return NULL;
}

void __attribute__ ((constructor)) construct(){
    extern char* __progname;

    if ( strcmp("mocktail",__progname) == 0 ) {
        log((char*)"program name is mocktail, moving to thread.");
    }
}

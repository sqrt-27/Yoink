#include <iostream>
#include <cstring>
#include <pthread.h>
#include "offsets.hpp"


void log(char* txt) {
    printf("[ // yoink // ]: %s\n",txt);
}

void* yoink_init(void* data) {

    log((char*)"init called.");

    return NULL;
}

void __attribute__ ((constructor)) construct(){
    extern char* __progname;

    if ( strcmp("mocktail",__progname) == 0 ) {
        log((char*)"__progname is mocktail, moving to new thread.");
        
        pthread_t yoink_thread;
        pthread_create(&yoink_thread, NULL, &yoink_init, NULL);

        pthread_join(yoink_thread, NULL);
    }
}

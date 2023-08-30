#include <stdlib.h>

char randchar(void){
    char r;
    r = rand() % 26; //0-25
    r += 'A'; //start
    return(r);
}
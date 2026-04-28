#include "helpers.h"

// function defination 
int minMaxOrEqual(int min, int max, int same){
    if ( min == max ) return 1;

    if (min < max ) return -1;
    else return 1;
     
}
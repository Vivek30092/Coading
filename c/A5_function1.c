#include <stdio.h>
#include <stdlib.h>

void hello();
void goodbye();


int main(){
    hello();
    goodbye();
    return 0;
}

void hello(){ 
    printf("hello! \n");
}
void goodbye(){
    printf("good bye \n");
}



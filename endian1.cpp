//
// Created by chenyang on 2022/1/3.
//
#include <iostream>

int main(){

    union {
        short s;
        char c[sizeof(short )];
    } un;
    un.s=0x0102;
    
}


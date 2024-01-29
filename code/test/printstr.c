#include "syscall.h"

main(){
    int len;
    len = Print("Hello NachOS2023!\n");
    PrintInt(len);
    len = Print("Good Morning!\n");
    PrintInt(len);
}
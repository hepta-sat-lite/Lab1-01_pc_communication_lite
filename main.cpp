#include "mbed.h"
Serial pc(USBTX,USBRX,9600);
int main()
{
    while (true) {
        pc.printf("Hello World!\r\n");
        wait_ms(500);
    }
}


#include "stm32f4xx.h"
#include "boot.h"
#include "sys.h"
#include "usart/usart.h"
#include <stdio.h>
int main()
{
    bsp_usart_1_inti(115200);
    while (1) {
        printf("Hello World\n");
    }

    return 0;
}



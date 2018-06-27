#include <stdio.h>
#include <wiringPi.h>
#include <wiringPiI2C.h>

int fd_white, fd_yellow;
char val_white, val_yellow;

void boardWrite(int port, bool value);

int main(int argc, char **argv)
{
	int ret;
    wiringPiSetup();
    printf("Orange Pi tests\n");
    printf("KushlaVR@gmail.com\n");
    printf("wiringPiSetup() = %d\n", ret );

    fd_white = wiringPiI2CSetup (0x25);
    fd_yellow = wiringPiI2CSetup (0x27);

    boardWrite(0,false);
    int i;
    while(1){
        boardWrite(i,false);
        i++;
        if (i==16) i = 0;
        printf("Activated port #%d\n", i );
        boardWrite(i,true);
        delay(200);
    };

	return 0;
}


void boardWrite(int port, bool value){
    if (port < 8){
        if (value)
            val_white &= ~(1<<port);
        else
            val_white |= (1<<port);
    }
    else if (port < 16){
        if (value)
            val_yellow &= ~(1<<(port-8));
        else
            val_yellow |= (1<<(port-8));
    }
    wiringPiI2CWrite(fd_white,val_white);
    wiringPiI2CWrite(fd_yellow,val_yellow);
}
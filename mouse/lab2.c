#include "usbmouse.h"
#include "read_mouse.h"
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <arpa/inet.h>
#include <unistd.h>

// void read_mouse(struct read_mouse *)
int main(void)
{
	/* code */
	// struct mouse_info *mouse0;
	struct mouse_info mouse0;
	init_mouse();
	read_mouse(mouse0);
	// printf("position of x, y are: %d %d; left click is %d\n",mouse0.x,&mouse0->y,&mouse0->button);
    printf("position of x is %d ",mouse0.x);
        
	return 0;
	
}
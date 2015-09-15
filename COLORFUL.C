/*This program Displays Colourful Characters in Text Mode
*/

#include<stdio.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    int count=50;
    clrscr();
    while(count--)
    {
	delay(75);
	textattr(random(16)+'a'+BLINK);
	cprintf("*");
    }
}

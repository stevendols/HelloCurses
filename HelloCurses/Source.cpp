#include <curses.h>

int main()
{
	initscr();	//sets up PDCurses window

	printw("Hello World");	//pdcurses equivalent of printf

	getch();	//wait for a character to be entered

	endwin();	//end pdcurses thread

	return 0;	//standard return
}
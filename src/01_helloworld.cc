#include <ncurses.h>

int main(int argc, char** argv) {
  // Init the screen for ncurses.
  initscr();

  // print a string to a window.
  printw("Hello world!");

  // refresh the screen to match what is in its memory.
  refresh();

  // Wait for key input.
  getch();

  // Deallocate memory and end the screen.
  endwin();
}

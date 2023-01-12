#include <wchar.h>

// Convert keypress to character code
int getBase(int, int, wchar_t, int);

// Add dakuten to applicable characters
int getDakuten(int);

// Add handakuten to applicable characters
int getHandakuten(int);

// Print kana from code
void printChar(int);

// Print character directly
void printDirect(int);
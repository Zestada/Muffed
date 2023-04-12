#include "console.h"

/*
void main() {

	char* const VGA_BUFFER = (char*) 0xb8000;
	char* str = "Hello World";

	for (int i=0; str[i] != '\0'; i++) {
		VGA_BUFFER[i*2] = str[i];
	}

	return;
}
*/

void main() {

	clear_terminal();
	print_string_with_color("hello", YELLOW,CYAN);
	print_line_with_color("World",MAGENTA,GREEN);
	print_string("Today");
	return;

}



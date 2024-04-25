/*
The backslash (\) character is used to create escape sequences in C.
Escape sequences are special characters that represent non-printable or special characters.
*/

#include <stdio.h> // Include the standard input/output library.

int main() {

    // Examples of escape sequences:

    // Newline (\n): Moves the cursor to the beginning of the next line.
    printf("Hello\nWorld\n");

    // Tab (\t): Moves the cursor to the next horizontal tab stop.
    printf("Name:\tJohn\nAge:\t25\n");

    // Backspace (\b): Moves the cursor back one position.
    printf("Hello\bWorld\n");

    // Carriage return (\r): Moves the cursor to the beginning of the current line.
    printf("Hello\rWorld\n");

    // Double quote (\"): Inserts a double quote character.
    printf("She said, \"Hello!\"\n");

    // Single quote (\'): Inserts a single quote character.
    printf("He said, \'Hi!\'\n");

    // Backslash (\\): Inserts a backslash character.
    printf("This is a backslash: \\\n");

    return 0; // Exit the program.
}
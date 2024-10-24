#include <stdio.h>

int main() {
    printf("Escape Sequences in C:\n");

    // Newline
    printf("1. Newline (\\n): Hello,\nWorld!\n");

    // Tab
    printf("2. Tab (\\t): Hello,\tWorld!\n");

    // Backspace
    printf("3. Backspace (\\b): Hello, World!\\b!\n");

    // Carriage Return
    printf("4. Carriage Return (\\r): Hello, World!\\rXYZ\n");

    // Form Feed
    printf("5. Form Feed (\\f): Hello, World!\\fNext Page\n");

    // Vertical Tab
    printf("6. Vertical Tab (\\v): Hello,\vWorld!\n");

    // Single Quote
    printf("7. Single Quote (\\'): It\'s a sunny day.\n");

    // Double Quote
    printf("8. Double Quote (\\\"): She said, \"Hello!\"\n");

    // Backslash
    printf("9. Backslash (\\\\): This is a backslash: \\\n");

    // Null Character
    printf("10. Null Character (\\0): This will be cut off here: Hello\0World!\n");
    
    return 0;
}

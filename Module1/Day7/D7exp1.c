#include <stdio.h>

int main() {
    FILE *source, *destination;
    char ch;

   
    source = fopen("C:\Users\nagar\Desktop\ltts\stepin\Activities\learning_2023\Module1\Day7\source_file.txt", "r");
    if (source == NULL) {
        printf("Unable to open source file.\n");
        return 1;
    }

    
    destination = fopen("C:\Users\nagar\Desktop\ltts\stepin\Activities\learning_2023\Module1\Day7\destination_file.txt", "w");
    if (destination == NULL) {
        printf("Unable to create destination file.\n");
        fclose(source);
        return 1;
    }

    
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully.\n");

    // Close the files
    fclose(source);
    fclose(destination);

    return 0;
}
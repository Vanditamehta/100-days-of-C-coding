//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/

  #include <stdio.h>
int main() 
{
    char sourceFile[100], destFile[100];
    FILE *src, *dest;
    char ch;

    printf("Enter source file name: ");
    scanf("%s", sourceFile);

    printf("Enter destination file name: ");
    scanf("%s", destFile);

    src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error: Could not open source file %s\n", sourceFile);
        return 1;
    }
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Could not create destination file %s\n", destFile);
        fclose(src); 
        return 1;
    }

    while (1) {
        ch = fgetc(src);       
        if (ch == EOF) {       
            break;
        }
        fputc(ch, dest);    
    }
    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", destFile);

    return 0;
}

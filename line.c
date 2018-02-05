#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    int count = 0;  // Line counter (result)
    char filename[MAX_FILE_NAME];
    char c;  // To store a character read from file
 
    // Get file name from user. The file should be
    // either in current folder or complete path should be provided
    
    scanf("%s", filename);
 
    // Open the file
    fp = fopen(filename, "r");
 
    

if (fp == NULL)
    {
        printf("Could not open file %s", filename);
        return 0;
    }
 
    for (c = getc(fp); c != EOF; c = getc(fp))
        if (c == '\n') // Increment count if this character is newline
            count = count + 1;

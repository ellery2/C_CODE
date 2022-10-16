#define _CRT_SECURE_NO_WARNINGS 1
//int fseek(FILE* stream, long int offset, int origin);
/* fseek example */
#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("example.txt", "wb");
//	fputs("This is an apple.", pFile);
//	fseek(pFile, 9, SEEK_SET);
//	fputs(" sam", pFile);
//	fclose(pFile);
//	return 0;
//}


//long int ftell(FILE* stream);
/* ftell example : getting size of a file */
//int main()
//{
//    FILE* pFile;
//    long size;
//    pFile = fopen("example.txt", "rb");
//    if (pFile == NULL) perror("Error opening file");
//    else
//    {
//        fseek(pFile, 0, SEEK_END);   // non-portable
//        size = ftell(pFile);
//        fclose(pFile);
//        printf("Size of example.txt: %ld bytes.\n", size);
//    }
//    return 0;
//}


//void rewind(FILE* stream);
/* rewind example */
int main()
{
    int n;
    FILE* pFile;
    char buffer[27];
    pFile = fopen("myfile.txt", "w+");
    for (n = 'A'; n <= 'Z'; n++)
        fputc(n, pFile);
    rewind(pFile);
    fread(buffer, 1, 26, pFile);
    fclose(pFile);
    buffer[26] = '\0';
    puts(buffer);
    return 0;
}

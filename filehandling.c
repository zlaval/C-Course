#include <stdio.h>

int main()
{

    FILE *fp;
    int c;

    fp = fopen("file.txt", "r");

    if (fp == NULL)
    {
        perror("Error opening file");
        return -1;
    }

    while ((c = fgetc(fp)) != EOF)
    {
        printf("%c", c);
        //  printf("%d\n",ftell(fp));
    }

    fclose(fp);
    fp = NULL;

    fp = fopen("file.txt", "a+");

    fseek(fp, 0, SEEK_END);
    int len = ftell(fp);
    printf("file length before write %d \n", len);

    for (int ch = 33; ch < 100; ch++)
    {
        fputc(ch, fp);
    }

    fseek(fp, 7, SEEK_SET);
    fpos_t here;
    fgetpos(fp, &here);

    fputs("\nfrom c program\n", fp);
    fsetpos(fp, &here);
    fputs("\nfrom c program2\n", fp);

    fprintf(fp, "%s %s %d \n", "What", "is", 7);

    fclose(fp);
    fp = NULL;

    fp = fopen("file.txt", "r");
    int lienCount = 0;

    while ((c = fgetc(fp)) != EOF)
    {
        if (c == '\n')
        {
            lienCount++;
        }
    }

    printf("Number of lines are %d \n", lienCount);

    FILE *fpOut;
    fpOut = fopen("tmp.txt", "w+");
    fseek(fp, 0, SEEK_SET);
    while ((c = fgetc(fp)) != EOF)
    {
        if (islower(c))
        {
            c = c - 32;
        }
        fputc(c, fpOut);
    }

    fclose(fpOut);
    fpOut = NULL;
    fclose(fp);
    fp = NULL;

    rename("tmp.txt", "fileOut.txt");
    remove("tmp.txt");

    fpOut = fopen("fileOut.txt", "r");
    fseek(fpOut, 0, SEEK_END);
    int cnt = ftell(fpOut);
    int i = 0;
    while (i < cnt)
    {
        i++;
        fseek(fpOut, -i, SEEK_END);
        printf("%c", fgetc(fpOut));
    }

    fclose(fpOut);
    fpOut = NULL;
    return 0;
}
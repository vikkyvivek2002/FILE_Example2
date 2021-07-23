#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *f1,*f2;
	char s;
	f1= fopen("vikky.txt","r");
	if(f1 == NULL)
	{
		puts("cont open source file");
                exit(0);
	}
	f2 = fopen("vikky2.txt","w");
	while(!(feof(f1)))
	{
		s =fgetc(f1);
		fputc(s,f2);
	}
	printf("\nfile copied sucessfully");
	fclose(f1);
	fclose(f2);
	return 0;
}
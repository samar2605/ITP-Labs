#include<stdio.h>

int main()
{
	char inputFilename[30]="redSanta.bmp",outputFilename[30]="redSantaCopy.bmp";
	char headerInfo[55];
	unsigned char R,G,B;
	FILE *ptr,*opt;


	ptr=fopen(inputFilename,"rb");	// rb is for binary mode

	if (ptr==NULL)
	{
		printf("\n Open Error");
		return 1;				// Exit main after displaying an open error
	}


	opt=fopen(outputFilename,"wb");
	if (opt==NULL){
        printf("Open Error");
        return 1;
	}

	fread(headerInfo,54,1,ptr);
	fwrite(headerInfo,54,1,opt);

	while(!feof(ptr))
	{
		B=fgetc(ptr);
		G=fgetc(ptr);
		R=fgetc(ptr);

		fputc(B+G,opt);
		fputc(G+R,opt);
		fputc(R,opt);      
	}
	fclose(opt);
	fclose(ptr);

	printf("Success!");

	return 0;
}

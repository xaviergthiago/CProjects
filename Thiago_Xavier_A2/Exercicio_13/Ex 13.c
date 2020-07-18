#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void flush_in();

int main()
{
	//ESCREVER DADOS
	FILE *file;
	file=fopen("Cidades.txt","r");
//	fprintf(file,"nasa de aloooooooooooooooo\n");
//	
//	if(file==NULL)
//	{
//		printf("e=ERROOR");
//	}	
	
	int x,hab=0;
	char cidade[40],maior[40],recebe;
	
	while(fgets(cidade,40,file)!=NULL)
	{
		fscanf(file,"%d",&x);
		//flush_in();
		//printf("%d\n",x);
		//fscanf(file,"%s",&cidade);
		if(x > hab)
		{
			hab=x;
			strcpy(maior,cidade);
		}
		//printf("%s %d\n",maior,hab);
	}
	printf("Maiores: %s  %d",maior,hab);
	fclose(file);
	return 0;
}

void flush_in()
{ 
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){} 
}

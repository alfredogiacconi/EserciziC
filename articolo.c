#include <stdio.h>
#include <stdlib.h>
#include <stdring.h>


int main(int argc, char *argv[]) {
	char nome_file[argv[1]];
	char caratteri_riga[31];
	
		if(argc<2) {
			printf("inserisci il nome del file\n");
			exit(-1);
		}
		
		if(argc<3) {
			printf("inserisci il numero massimo di caratteri per riga\n");
			exit(-2);
		}
		
	file *fo
	fo=fopen(nome_file, "r");
	
	if(file==NULL)
    {
        printf("file %s non trovato\n",argv[1]);
        exit(-3);
    }
	
	while(fgets(caratteri_riga,sizeof(caratteri_riga),file)!=NULL)
    {
        printf("%s\n",caratteri_riga);
        count=++1;
    }
	
	
}
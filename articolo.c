#include <stdio.h>
#include <stdlib.h>
#include <stdring.h>


int main(int argc, char *argv[]) {
	
	int x=0;
	int dimensione;
	char articolo[5000];
	char caratteri_riga[100];
	FILE *file;
	int lunghezza_articolo;

		if(argc<2) {
			printf("inserire il nome del file\n");
			exit(-1);
		}
		
		if(argc<3) {
			printf("inserire il numero massimo di caratteri per riga\n");
			exit(-2);
		}
		
		dimensione=atoi(argv[2])
		
		if(dimensione<1) {
			printf("inserire una lunghezza di caratteri per la riga");
			exit(-3);
		}

		file=fopen(argv[1], "r");
	
		if(file==NULL) {
        	printf("file %s non trovato\n",argv[1]);
        	exit(-4);
   		}
	
		while(fgets(caratteri_riga,sizeof(caratteri_riga),file)!=NULL) {
        	int scritti;
			if(caratteri_riga[strlen[caratteri_riga]-1]=='\n') {
				caratteri_riga[strlen[caratteri_riga]-1]='\0'
			}
			
			scritti=sprintf(pCh,"%s",caratteri_riga);
			pCh+=scritti;
    	}
	
	pCh=articolo;
	lunghezza_articolo=strlen[articolo];

	while(pCh<articolo+lunghezza_articolo) {
		int j=dimensione-1;
		if(pCh[0]=' ') {
			pCh++;
		}

		if(pCh[j+1=' ']) {
			printf("%.*s\n",dimensione,pCh);
		}

		else {
			while(pCh[j]!=' ') {
				j--;
			}
			printf("%.*s\n",dimensione,pCh);
			pCh+=j;
		}

		printf(".30s\n",pCh);
		pCh+=30;
		x++;
	}

	fclose(file);
	return x;
}
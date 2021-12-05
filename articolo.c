#include <stdio.h>
#include <stdlib.h>
#include <stdring.h>


int main(int argc, char *argv[]) {
	
	int x=0;															// numero intero variabile uguale a 0
	int dimensione;
	char articolo[5000];												// al massimo 5000 caratteri alfanumerici
	char caratteri_riga[100];											// al massimo 100 caratteri alfanumerici
	char *pCh=articolo_base;											// puntatore caratteri alfanumerici settato all'inizio dell'articolo
	FILE *file;															// puntatore su file
	int lunghezza_articolo;

	if(argc<2) {														// controlla se è stato inserito il nome del file (argv[1])
		printf("inserire il nome del file\n");
		exit(-1);														// esce dal programma
	}
		
	if(argc<3) {														// controlla se è stata inserita la dimensione della riga (argv[2])
		printf("inserire il numero massimo di caratteri per riga\n");
		exit(-2);
	}
		
	dimensione=atoi(argv[2])											// imposta la dimensione (argv[2]) su un numero intero
		
	if(dimensione<1) {													// controlla se la dimensione è un numero maggiore di 0
		printf("inserire un numero per la dimensione della riga");
		exit(-3);
	}

	file=fopen(argv[1], "r");											// apre in sola lettura il file
	
	if(file==NULL) {													// controlla se è stato trovato il file
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
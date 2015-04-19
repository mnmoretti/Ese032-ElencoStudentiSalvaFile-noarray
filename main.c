#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definisci le costanti
#define N 3
#define MAX_STRLEN 30

// Definisci il tipo di dato struct s_studente
struct s_studente {
    char nome[MAX_STRLEN];
    char cognome[MAX_STRLEN];
    unsigned int eta;
    char classe [MAX_STRLEN];
};

// Definisci studente come struct s_studente
struct s_studente studente;


int main(int argc, char** argv) {
    // Dichiara le variabili locali
    FILE *puntaFile;
    int i;

    // Codice per l'inserimento, da parte dell'utente, dei dati e del salvataggio nel file
   puntaFile = fopen("elenco.dat","wb");
   if(puntaFile) {
        for(i=0;i<N;i++){
            printf("Inserisci il nome dell'alunno %d: ",i);
            scanf("%s", studente.nome);
            printf("Inserisci il cognome dell'alunno %d: ",i);
            scanf("%s", studente.cognome);
            printf("Inserisci l'eta' dell'alunno %d: ",i);
            scanf("%d", &studente.eta);
            printf("Inserisci la classe dell'alunno %d: ",i);
            scanf("%s", studente.classe);
            printf("\n");
            
            fwrite(&studente,sizeof(studente),1,puntaFile);
        }
       
        fclose(puntaFile);
        
        puntaFile = fopen("elenco.dat","rb");
        for(i = 0; i < N; i++) {
            fread(&studente,sizeof(studente),1,puntaFile);
            
            printf("Nome: %s\n", studente.nome);
            printf("Cognome: %s\n", studente.cognome);
            printf("Eta': %d\n", studente.eta);
            printf("Classe: %s\n", studente.classe);
            printf("\n");
        }
        fclose(puntaFile);
   }
   else 
       printf("Il file non e' stato trovato");
   
    return (EXIT_SUCCESS);
}
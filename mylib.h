// Progetto Esame Programmazione I - Chiodi Manuel, Lucarini Riccardo, Sisti Guglielmo

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


//dichiarazione dell'enum contenente i tipi delle terre
enum Tipo_terra {	deserto=0, 
					foresta, 
					palude, 
					villaggio, 
					pianura, 
					mare
};


//dichiarazione dell'enum contenente i tipi dei mostri 
enum Tipo_mostro {	nessuno=0,
					scheletro,
					lupo, 
					orco,
					squalo, 
					drago
};


//dichiarazione della struttura per le terra
struct Terra {	enum Tipo_terra tipo_terra;
		enum Tipo_mostro tipo_mostro;
		unsigned short tesoro;
		struct Terra* terra_successiva;
};


//dichiarazione della struttura per muovere Oberon			  
struct Oberon {	short borsa_oro;
		short punti_ferita;
		short incantesimi;
		short pozione_guaritrice;
};
			



//dichiarazioni delle funzioni globali presenti in progexam.c
int crea_percorso();
int muovi_Oberon();
void termina_gioco();

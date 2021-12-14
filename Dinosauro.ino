/**
 * Dinosauro Automatico.ino
 * Massimo Giordano
 */

/*
Lo scopo è creare una struttura che legga quando ci sono gli ostacoli per terra da saltare, quando ci sono quelli a mezza altezza e quando cambia lo sfondo
Serve una macchina a stati per differenziare queste due situazioni, facendo un controllo nel loop sul fototransistor dello sfondo

I componenti sono: 
	Teensy 3.2 (usata come tastiera)
	Fototransistor (per gli ostacoli e lo sfondo)
 */
#define TR_T A0 //pin 14, il transistor che controlla gli ostacoli di terra
#define TR_A A1 //pin 15, il transistor che controlla gli ostacoli in aria
#define TR_S A2 //pin 16, il transistor che controlla il colore dello sfondo

uint32_t time = 0;
uint8_t c = 0; //variabile di controllo per i tempi di salto del dinosauro

void setup()
{

}

void loop()
{
	/**
	 * Controllare il colore di sfondo:
	 * 	se è bianco bisogna far girare la configurazione 1, altrimenti se è nero quella 2
	 *
	 * Controllare se ci sono ostacoli a terra
	 * 	se ci sono bisogna saltarli, per quanto?
	 * 		Se la lettura del colore divero è presente per più di un tot di microsecondi, la freccia in su deve essere premuta fino a quando il dinosauro 
	 * 		si trova all'apice della sua altezza(questo discorso vale per i primi 1600 punti, dopo corre talmente tanto che questa differenza non serve più)
	 *
	 * Controllare se ci sono ostacoli in aria
	 * 	se ci sono bisogna abbassarsi per un tempo X, che verrà abbassato ad un solo click dopo i primi 1600 punti
	 */
	
	uint8_t read_tr_s = readT_S(); //salvataggio della lettura

	if(read_tr_s >= WHITE)
	{
		//lo sfondo del gioco è bianco
		if(c == 0)
		{
			uint8_t read_tr_t = readT_T(); //salvataggio della lettura

			if(read_tr_t <= BLACK && time == 0)
			{
				//facciamo partire un conteggio per sapere quanto sono lunghi i cactus
				//ho creato la variabile time insieme al controllo '&&' per non far entrare il codice deu volte nello stesso if()
			}

			if(time != 0 && read_tr_t >= WHITE)
			{
				//bisogna capire se l'ostacolo è lungo o corto
			}
		}

		else
		{
			//tutto quello di prima senza i controlli sui tempi
		}
		
	} else {
		//lo sfondo è nero
		++c;

		if(c == 1)
		{
			
		}
	}
		




	uint8_t read_tr_a = readT_A(); //salvataggio della lettura

		
}
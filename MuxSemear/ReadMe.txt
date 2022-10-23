######################################################################################################################################

Português minha lingua original e será sempre a primeira a aparecer.

    Biblioteca Multiplexador CD74HC4067 CMOS Analógico Digital 16 canais

        Essa biblioteca foi feita para o projeto de bixo 2022 do Núcleo NRE do SEMEAR - USP São Carlos. Como o Multiplexador(MUX)
        é uma ferramenta muito útil e possivelmente será usada nos proximos anos por outros bixos e integrantes do núcleo eu decidi
        criar uma biblioteca e disponibiliza-la para uso geral, espero que gostem e que ela seja util, abraços.

    by João Pedro Baltieca Garcia
        São Carlos, 21 de Outubro de 2022

	
	Os pinos do Mux são definidos como C0 , C1, C2, ... , C14 e C15
		- Obs: apesar de eu achar que fica mais desorganizado, você também pode usar só o número, como 0, 1, 2, ... , 14 e 15

	* Função digitalWriteMux(int pin, int estado);
	- define um pino do Mux como HIGH ou LOW
	- antes de escolher um pino, ela a define como LOW pra depois definir outro estado.
	- pin = pino do MUX
	- estado = HIGH ou LOW

	* Função choosePinMux(int pino);
	- Escolhe/Seleciona um pino do MUX
	- pin = pino do MUX

#######################################################################################################################################

	CD74HC4067 CMOS Analog Digital Multiplexer Library 16 channels

       	 This library was made for the bixo 2022 project of the NRE Center at SEMEAR - USP São Carlos. As the Multiplexer(MUX)
       	 it's a very useful tool and will possibly be used in the next few years by other guys and core members I decided
       	 create a library and make it available for general use, I hope you like it and that it is useful, hugs.

   	 	by João Pedro Baltieca Garcia
      		  Sao Carlos, October 21, 2022


	Mux pins are defined as C0 , C1, C2, ... , C14 and C15
	- Note: although I think it gets more disorganized, you can also just use the number, like 0, 1, 2, ... , 14 and 15

	* Function digitalWriteMux(int ​​pin, int state);
	- sets a Mux pin to HIGH or LOW
	- before choosing a pin, it sets it to LOW and then sets another state.
	- pin = MUX pin
	- state = HIGH or LOW

	* function choosePinMux(int ​​pin);
	- Pick/Select a MUX pin
	- pin = MUX pin

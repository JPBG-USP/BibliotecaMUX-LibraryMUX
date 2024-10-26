/*
    Biblioteca Multiplexador CD74HC4067 CMOS Analógico Digital 16 canais

        Essa biblioteca foi feita para o projeto de bixo 2022 do Núcleo NRE do SEMEAR - USP São Carlos. Como o Multiplexador(MUX)
        é uma ferramenta muito útil e possivelmente será usada nos proximos anos por outros bixos e integrantes do núcleo eu decidi
        criar uma biblioteca e disponibiliza-la para uso geral.

    by João Pedro Baltieca Garcia
        21 de Outubro de 2022
*/

#ifndef _MuxSemear_h
#define _MuxSemear_h

#define C0 0
#define C1 1
#define C2 2
#define C3 3
#define C4 4
#define C5 5
#define C6 6
#define C7 7
#define C8 8
#define C9 9
#define C10 10
#define C11 11
#define C12 12
#define C13 13
#define C14 14
#define C15 15

#include <arduino.h>


class MUX{

public:

      MUX(int S0, int S1, int S2, int S3, int Signal);
      void digitalWriteMux(int pin, int estado);
      void choosePinMux(int pin);

private:

        int pinosMUX[16][4] = {{0,0,0,0},  // Pino Mux C00
                       {1,0,0,0},  // Pino Mux C01
                       {0,1,0,0},  // Pino Mux C02
                       {1,1,0,0},  // Pino Mux C03
                       {0,0,1,0},  // Pino Mux C04
                       {1,0,1,0},  // Pino Mux C05
                       {0,1,1,0},  // Pino Mux C06
                       {1,1,1,0},  // Pino Mux C07
                       {0,0,0,1},  // Pino Mux C08
                       {1,0,0,1},  // Pino Mux C09
                       {0,1,0,1},  // Pino Mux C10
                       {1,1,0,1},  // Pino Mux C11
                       {0,0,1,1},  // Pino Mux C12
                       {1,0,1,1},  // Pino Mux C13
                       {0,1,1,1},  // Pino Mux C14
                       {1,1,1,1}}; // Pino Mux C15

    int MUX_S0;
    int MUX_S1;
    int MUX_S2;
    int MUX_S3;
    int MUX_Signal;

  };

#endif

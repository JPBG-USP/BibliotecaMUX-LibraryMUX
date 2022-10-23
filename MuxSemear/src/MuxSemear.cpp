/*
    Biblioteca Multiplexador CD74HC4067 CMOS Anal�gico Digital 16 canais

        Essa biblioteca foi feita para o projeto de bixo 2022 do N�cleo NRE do SEMEAR - USP S�o Carlos. Como o Multiplexador(MUX)
        � uma ferramenta muito �til e possivelmente ser� usada nos proximos anos por outros bixos e integrantes do n�cleo eu decidi
        criar uma biblioteca e disponibiliza-la para uso geral.

    by Jo�o Pedro Baltieca Garcia
        21 de Outubro de 2022
*/

#include <MuxSemear.h>

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


/*
    Aqui definimos o estado de cada um dos pinos S0, S1, S2 e S3
    Voc� pesquisando mais a fundo vai ver que o MUX usa uma l�gica bin�ria
    ou seja:

    S0 = 2^0 = 1    S1 = 2^1 = 2    S2 = 2^2 = 4    S3 = 2^3 = 8

    Logo para escolher um pino, voc� o transforma para bin�rio, e assim
    ativa as saidas, pode checar isso na matriz abaixo, onde 1 = HIGH e 0 = LOW
*/

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

MUX::MUX(int S0, int S1, int S2, int S3, int Signal){

    MUX_S0 = S0;
    MUX_S1 = S1;
    MUX_S2 = S2;
    MUX_S3 = S3;
    MUX_Signal = Signal;

}

void MUX::digitalWriteMux(int pin, int estado){

    digitalWrite(MUX_Signal,LOW);

    if(pinosMUX[pin][0] == 1){
      digitalWrite(MUX_S0,HIGH);
      }else {digitalWrite(MUX_S0,LOW);}

    if(pinosMUX[pin][1] == 1){
      digitalWrite(MUX_S1,HIGH);
      }else {digitalWrite(MUX_S1,LOW);}

    if(pinosMUX[pin][2] == 1){
      digitalWrite(MUX_S2,HIGH);
      }else {digitalWrite(MUX_S2,LOW);}

    if(pinosMUX[pin][3] == 1){
      digitalWrite(MUX_S3,HIGH);
      }else {digitalWrite(MUX_S3,LOW);}

    if(estado == HIGH){
      digitalWrite(MUX_Signal,HIGH);
      }else{digitalWrite(MUX_Signal,LOW);}

}

void MUX::choosePinMux(int pin){

    digitalWrite(MUX_Signal,LOW);

    if(pinosMUX[pin][0] == 1){
      digitalWrite(MUX_S0,HIGH);
      }else {digitalWrite(MUX_S0,LOW);}

    if(pinosMUX[pin][1] == 1){
      digitalWrite(MUX_S1,HIGH);
      }else {digitalWrite(MUX_S1,LOW);}

    if(pinosMUX[pin][2] == 1){
      digitalWrite(MUX_S2,HIGH);
      }else {digitalWrite(MUX_S2,LOW);}

    if(pinosMUX[pin][3] == 1){
      digitalWrite(MUX_S3,HIGH);
      }else {digitalWrite(MUX_S3,LOW);}

  }

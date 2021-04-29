
//Código de 00-99 otimizado, utilizando variáveis.
// Este código deixará mais apresentável e também ocupará uma menor quantidade de linhas.
const int l = 0, d = 1; // Display 7 segmentos (anodo comum)

int unidades[] = {0, 1, 2, 3, 4, 5, 6};
int dezenas[] = {7, 8, 9, 10, 11, 12, 13};

byte digito[10][7] = { 
 { l,l,l,l,l,l,d },  //DIGITO 0
 { d,l,l,d,d,d,d },  //DIGITO 1
 { l,l,d,l,l,d,l },  //DIGITO 2
 { l,l,l,l,d,d,l },  //DIGITO 3
 { d,l,l,d,d,l,l },  //DIGITO 4
 { l,d,l,l,d,l,l },  //DIGITO 5
 { l,d,l,l,l,l,l },  //DIGITO 6
 { l,l,l,d,d,d,d },  //DIGITO 7
 { l,l,l,l,l,l,l },  //DIGITO 8
 { l,l,l,d,d,l,l }  //DIGITO 9
};
const int SEGMENTOS = 7;
const int NUMEROS = 10;
 
void setup(){
  for(int i = 0; i < SEGMENTOS; i++) {
       pinMode(dezenas[i], OUTPUT);
       pinMode(unidades[i], OUTPUT);
    }
}

void loop() {
  for(int k = 0; k < NUMEROS; k++) {
       acende(dezenas, k);
       for(int i = 0; i < NUMEROS; i++) {
          acende(unidades, i);
          delay(500);
       } 
    }
}

void acende(int* pino, int dig) {
    for(int i = 0; i < SEGMENTOS; i++) {
       digitalWrite(pino[i], digito[dig][i]);
    }
}

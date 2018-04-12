#include <PuenteH.h>

//pin de stby
const int pstby=6;
//Asignamos estructura de motor (definida en PuenteH.h)
//Recuerda que los pines pwm para arduino nano son 3,5,6,9,10,11
//para el motor Derecho{pinpwm,pin in1,pin in2}
stmotor motorD={3,4,5};//pwm 3,pin1 4,pin2 5
//para el motor Izquierdo
stmotor motorI={9,8,7};//pwm 6,pin1 7,pin2 8

void setup() {
  pinMode(pstby,OUTPUT);
  pinMode(motorD.ppwm,OUTPUT);
  pinMode(motorD.pin1,OUTPUT);
  pinMode(motorD.pin2,OUTPUT);
  pinMode(motorI.ppwm,OUTPUT);
  pinMode(motorI.pin1,OUTPUT);
  pinMode(motorI.pin2,OUTPUT);
}

void loop() {
  PuenteH pH(pstby);//es necesario construir el objeto puente h con el pin del standby
  
  //rutina adelante,atras,giro,detener
  //avanzamos durante 2s
  pH.mover(motorD,100);
  pH.mover(motorI,100);
  delay(2000);
  //retrocedemos durante 2s
  pH.sentido();
  pH.mover(motorD,100);
  pH.mover(motorI,100);
  delay(2000);
  //giramos en circulos durante 2s
  pH.sentido(&motorD);//aqui usamos '&'antes de 'motorD' por que queremos su ubicacion de memoria
  pH.mover(motorD,100);
  delay(2000);
  //detenemos ambos motores durante 3 segundos
  pH.detener();//detiene ambos motores
  delay(3000);
  //para frenar solo un motor
}

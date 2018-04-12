//Esta clase esta diseñada para el funcionamiento del driver para motores tb6612fng
//Autor: Hernández Jiménez Daniel
//Descripción: proporciona funciones para facilitar el uso del puente H o driver para motores tb6612fng
//Fecha: 

#ifndef PUENTEH_H
#define PUENTEH_H

struct stmotor
{
  int ppwm;
  int pin1;
  int pin2;  
};

class PuenteH
{
    public:
        PuenteH(int pstby);//pin standby
        void mover(struct stmotor motor,int ivel);//la velocidad debe estar en un rango[0-255]
        void sentido(struct stmotor* motor);//se cambian los pines in por eso se pide el puntero
        void sentido();//se cambia el sentido de ambos motores
        void detener(struct stmotor motor);
        void detener();//detiene ambos motores

    protected:

    private:
      int m_pstby;
      bool m_iEstby;
      bool m_isentido;
};

#endif // PUENTEH_H

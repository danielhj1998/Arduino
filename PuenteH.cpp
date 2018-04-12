#include "PuenteH.h"
#include <Arduino.h>

PuenteH::PuenteH(int pstby)
{
  m_pstby=pstby;
  m_isentido=LOW;
  m_iEstby=LOW;
}
void PuenteH::mover(struct stmotor motor,int ivel)
{
    //si el stby esta activado lo desactivamos
    if(m_iEstby==LOW)
    {
      digitalWrite(m_pstby,HIGH);
      m_iEstby=HIGH;
    }
    //aplicamos voltaje a los pines LOW a uno de los pines y HIGH al otro
    digitalWrite(motor.pin1,m_isentido);
    digitalWrite(motor.pin2,!m_isentido);
    //asignamos la velocidad al pmw
    analogWrite(motor.ppwm,ivel);
}
void PuenteH::sentido(struct stmotor* motor)
{
    int temp;
    //cambiamos los pines in del motor
    temp=motor->pin1;
    motor->pin1=motor->pin2;
    motor->pin2=temp;
}
void PuenteH::sentido()
{
    //cambiamos el sentido
    m_isentido=!m_isentido;
}
void PuenteH::detener(struct stmotor motor)
{
    //asignamos velocidad 0 al motor
    mover(motor,0);
}
void PuenteH::detener()
{
    //activamos el stby
    digitalWrite(m_pstby,LOW);
}

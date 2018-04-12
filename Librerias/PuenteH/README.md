#ENG-Arduino library for using a tb6612fng driver with Arduino. This library makes it easier for using the driver by 
implementing simple commands.
To use it you need to always create before the void(setup) an structure defined in the header as:
struct stmotor{
int ppwm
int pin1
int pin2
}
//example code is available in the PuenteHejemplo.ino file
Also you need to pass the stdby pin as parameter when creating the object.
//example code is available in the PuenteHejemplo.ino file

#ESP-Libreria Arduino para usar el driver(puente h) tb6612fng con Arduino. Esta libreria facilita el uso del driver con la implementacion
de comandos simples.
Para usarla siempre debe crear antes del void(setup) una estructura definida en el header como:
struct stmotor{
int ppwm
int pin1
int pin2
}
//hay codigo de ejemplo en el archivo PuenteHejemplo.ino
También necesita pasar el pin stdby como parametro cuando crea el objeto.
//hay codigo de ejemplo en el archivo PuenteHejemplo.ino

#FRA-Header Arduino pour utiliser le controlleur tb6612fng avec Arduino. Cet header facilite l'utilisation du controlleur avec 
l'implementation de comands simples.
Pour l'utiliser il faut créer avant le void(setup) une structure définie dans le header comme:
struct stmotor{
int ppwm
int pin1
int pin2
}
//il y a de code example dans le fichier PuenteHejemplo.ino
Aussi il faut passer le pin stdby comme paramètre quand on crée l'objet.
//il y a de code example dans le fichier PuenteHejemplo.ino

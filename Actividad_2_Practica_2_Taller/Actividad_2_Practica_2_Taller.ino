/*
  Fundación Kinal
    Centro Educativo Técnico Laboral Kinal
    Quinto Perito
    Quinto Electrónica
    Codigo Técnico: EB5AV
    Curso: Taller de electrónica digital y reparación de computadoras I
    Proyecto: Como leer un pin digital
    Dev: Sebastian Enrique Lemus Salvador
    Fecha: 12/04/2024
*/

//Directivas de preprocesador
#define LedNaranja 4 //Pin4 conectado a un led
#define tiempo_espera 500 // tiempo entre estados del led

void setup()
{
  pinMode(LedNaranja, OUTPUT); //Pin4 como salida
  digitalWrite(LedNaranja, LOW); //Led conectada al pin 13 inicia apagado
}

void loop()
{
  digitalWrite(LedNaranja, HIGH); //Enciendo el led conectado al Pin4
  delay(tiempo_espera); //espera de 500 milisegundos
  digitalWrite(LedNaranja, LOW); //Apago el led conectado al Pin4
  delay(tiempo_espera); //espera de 500 milisegundos
}

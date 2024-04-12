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

//Directivas del procesador

#define push_button 2 //Push button conectado al Pin2
#define led 3

void setup(){
  pinMode(push_button, INPUT); // Pin 2 como entrada
  pinMode(led, OUTPUT);
  Serial.begin(9600);           // Inicio la comunicación serial
  Serial.println("Lectura de un pulsador"); // Envio el texto entre comillas al puerto serie
}
  
void loop(){
  // Variable local, que se encarga de almacenar el valor (abierto o cerrado)
  // del pulsador conectado al pin2
  bool estado_boton = digitalRead(push_button);
  if (estado_boton == HIGH) // ¿He presionado el boton?
  {
    // Si lo he presionado
    digitalWrite(led, LOW); //apago el led
  } else {
    // si no lo he presionado
    digitalWrite(led, HIGH); // mantengo encendido el led
  }
}

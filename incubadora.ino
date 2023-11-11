int lecturaADC = 0;
double voltajeLM35 = 0.0;
double TemperaturaLM35 = 0.0;

void setup() {
  // Inicializamos comunicación serie
  Serial.begin(9600);
 
  // Comenzamos el sensor DHT
  dht.begin();
 
}
 
void loop() {

   lecturaADC = analogRead(A0); 
   voltajeLM35 = ((double)lecturaADC/1023)*5;
   TemperaturaLM35 = voltajeLM35/0.01;
 
   Serial.print("El valor en temperatura de salida en el sensor es: ");
   Serial.print(TemperaturaLM35,2); //Imprime la variable double con 2 decimales
   Serial.println(" °C");

     // Esperamos 5 segundos entre medidas
  delay(5000);

}

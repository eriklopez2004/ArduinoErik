const int potPinXiulet = A0;   
const int potPinSilenci = A1; 
const int speakerPin = 9;     
int xiuletDuracion;
int silenciDuracion;

void setup() {

  pinMode(speakerPin, OUTPUT);
  pinMode(potPinXiulet, INPUT);
  pinMode(potPinSilenci, INPUT);
}

void loop() {

  xiuletDuracion = analogRead(potPinXiulet);
  silenciDuracion = analogRead(potPinSilenci);

  tone(speakerPin, 1000, xiuletDuracion);  
  delay(xiuletDuracion); 
  delay(silenciDuracion);                                      
}
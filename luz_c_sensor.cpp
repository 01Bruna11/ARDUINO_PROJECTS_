// C++ code
//
int rele = 8;
int PIR = 2;
int sensorPIR = 0;

void setup () {
  
  pinMode (rele, OUTPUT);
  pinMode (PIR, INPUT);
  
}

void loop ()
{
  
  sensorPIR = digitalRead (PIR);
  
	if (sensorPIR == HIGH) {
      digitalWrite (rele, HIGH);
      delay(10000);
  	}
  
  	else{
      digitalWrite (rele, LOW);
      delay(500);
  	}
}
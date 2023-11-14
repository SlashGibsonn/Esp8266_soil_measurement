int sensor_pin = A0; 
int output_value ;

void setup() {
  Serial.begin(9600);
  Serial.println("Baca Sensor");
  delay(1000);
  }

void loop() {

  output_value= analogRead(sensor_pin);
  Serial.print("Nilai Analog: ");
  Serial.println(output_value);
  int output_value2 = map(output_value,1023,0,0,100);
  Serial.print("Mositure : ");
  Serial.print(output_value2);
  Serial.println("%");
  delay(1000);
  }

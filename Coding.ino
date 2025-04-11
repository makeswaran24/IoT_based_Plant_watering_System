#include <DHT.h>

#define DHTPIN 2           
#define DHTTYPE DHT11      
#define rainSensorPin 3    
#define soilMoisturePin A0 

DHT dht(DHTPIN, DHTTYPE);  

void setup() 
{
  Serial.begin(9600);    
  dht.begin();             
  pinMode(rainSensorPin, INPUT); 

void loop() 
{
  delay(2000); 
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
  }
  else
  {
   
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.print(" °C  ");
    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.println(" %");
  }

 
  int rainState = digitalRead(rainSensorPin); 
  if (rainState == LOW) 
  {
    Serial.println("Rain detected!");
  } else {
    Serial.println("No rain detected.");
  }

  int sensorValue = analogRead(soilMoisturePin);
  float moisturePercentage = map(sensorValue, 1023, 0, 0, 100); 

  Serial.print("Soil Moisture (in Percentage) = ");
  Serial.print(moisturePercentage);
  Serial.println("%");

  delay(1000); 
}

#include <DHT22.h>

#define DHT22_PIN 2

DHT22 myDHT22(DHT22_PIN);

void setup()
{
  Serial.begin(9600);
  Serial.println("# DHT22 Sensor Demo");
}

void loop()
{
  DHT22_ERROR_t errorCode;

  errorCode = myDHT22.readData();

  switch(errorCode)
  {
    case DHT_ERROR_NONE:
      Serial.print(myDHT22.getTemperatureC());
      Serial.print(":");
      Serial.print(myDHT22.getHumidity());
      Serial.println("");
      break;
/*
    case DHT_ERROR_CHECKSUM:
      Serial.print("check sum error ");
      Serial.print(myDHT22.getTemperatureC());
      Serial.print("C ");
      Serial.print(myDHT22.getHumidity());
      Serial.println("%");
      break;
    case DHT_BUS_HUNG:
      Serial.println("BUS Hung ");
      break;
    case DHT_ERROR_NOT_PRESENT:
      Serial.println("Not Present ");
      break;
    case DHT_ERROR_ACK_TOO_LONG:
      Serial.println("ACK time out ");
      break;
    case DHT_ERROR_SYNC_TIMEOUT:
      Serial.println("Sync Timeout ");
      break;
    case DHT_ERROR_DATA_TIMEOUT:
      Serial.println("Data Timeout ");
      break;
    case DHT_ERROR_TOOQUICK:
      Serial.println("Polled to quick ");
      break;
*/
  }

  delay(10 * 1000);

}

#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>
#include <SPI.h>

const char* ssid = "JioFi2_E9F85F";//
const char* password = "c7sx64p2sc";
WiFiClient client;
char server[] = "192.168.1.101";   //eg: 192.168.0.222 192.168.1.101 192.168.1.102
const int pin = 5; // D1 of Node MCU

int counter = 0;
int hitObject = false;

void setup()
{

 Serial.begin(115200);
pinMode(pin,INPUT);
  delay(10);

  // Connect to WiFi network
  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");

  // Start the server
//  server.begin();
  Serial.println("Server started");
  Serial.print(WiFi.localIP());
  delay(1000);
  Serial.println("connecting...");
 }
void loop()
{
     int val = digitalRead(pin);

   if( (val == 0) && (hitObject == false) ){
        counter++;
        hitObject = true;
        Serial.print("Count of Gearplate assembly = ");
        Serial.println( counter);
        Sending_To_phpmyadmindatabase();
        Send_To_Component1();
        Send_To_Component2();
        Send_To_Component3();
        Send_To_Component4();
        Send_To_Component5();
        Send_To_Component6();
        Send_To_Component7();
        Send_To_Component8();
        Send_To_Product();
        delay(300);
  
   }else if( (val ==1) && (hitObject == true) ) {
        hitObject = false;
   }

     
   
  // interval
 }

 void Sending_To_phpmyadmindatabase()   //CONNECTING WITH MYSQL
 {
   if (client.connect(server, 80)) {
    Serial.println("connected");
    // Make a HTTP request:
    Serial.println("GET /testcode/New_Val.php");
    client.print("GET /testcode/New_Val.php");     //YOUR URL
    client.print(" ");      //SPACE BEFORE HTTP/1.1
    client.print("HTTP/1.1");
    client.println();
    client.println("Host: 192.168.1.101");
    client.println("Connection: close");
    client.println();
  } else {
    // if you didn't get a connection to the server:
    Serial.println("connection failed");
  }
 }

 void Send_To_Component1()
 {
   {
   if (client.connect(server, 80)) {
    Serial.println("connected");
    // Make a HTTP request:
    Serial.println("GET /testcode/Update_Sensor_Component.php");
    client.print("GET /testcode/Update_Sensor_Component.php?ID=1");
   
          //YOUR URL
    client.print(" ");      //SPACE BEFORE HTTP/1.1
    client.print("HTTP/1.1");
    client.println();
    client.println("Host: 192.168.1.101");
    client.println("Connection: close");
    client.println();
  } else {
    // if you didn't get a connection to the server:
    Serial.println("connection failed");
  }
 }}
 

 void Send_To_Component2()
 {
   {
   if (client.connect(server, 80)) {
    Serial.println("connected");
    // Make a HTTP request:
    Serial.println("GET /testcode/Update_Sensor_Component.php");
    client.print("GET /testcode/Update_Sensor_Component.php?ID=2");
   
          //YOUR URL
    client.print(" ");      //SPACE BEFORE HTTP/1.1
    client.print("HTTP/1.1");
    client.println();
    client.println("Host: 192.168.1.101");
    client.println("Connection: close");
    client.println();
  } else {
    // if you didn't get a connection to the server:
    Serial.println("connection failed");
  }
 }

 }
 
 void Send_To_Component3()
 {
   {
   if (client.connect(server, 80)) {
    Serial.println("connected");
    // Make a HTTP request:
    Serial.println("GET /testcode/Update_Sensor_Component.php");
    client.print("GET /testcode/Update_Sensor_Component.php?ID=3");
   
          //YOUR URL
    client.print(" ");      //SPACE BEFORE HTTP/1.1
    client.print("HTTP/1.1");
    client.println();
    client.println("Host: 192.168.1.101");
    client.println("Connection: close");
    client.println();
  } else {
    // if you didn't get a connection to the server:
    Serial.println("connection failed");
  }
 }

 }
 
 void Send_To_Component4()
 {
   {
   if (client.connect(server, 80)) {
    Serial.println("connected");
    // Make a HTTP request:
    Serial.println("GET /testcode/Update_Sensor_Component.php");
    client.print("GET /testcode/Update_Sensor_Component.php?ID=4");
   
          //YOUR URL
    client.print(" ");      //SPACE BEFORE HTTP/1.1
    client.print("HTTP/1.1");
    client.println();
    client.println("Host: 192.168.1.101");
    client.println("Connection: close");
    client.println();
  } else {
    // if you didn't get a connection to the server:
    Serial.println("connection failed");
  }
 }

 }
 
 void Send_To_Component5()
 {
   {
   if (client.connect(server, 80)) {
    Serial.println("connected");
    // Make a HTTP request:
    Serial.println("GET /testcode/Update_Sensor_Component.php");
    client.print("GET /testcode/Update_Sensor_Component.php?ID=5");
   
          //YOUR URL
    client.print(" ");      //SPACE BEFORE HTTP/1.1
    client.print("HTTP/1.1");
    client.println();
    client.println("Host: 192.168.1.101");
    client.println("Connection: close");
    client.println();
  } else {
    // if you didn't get a connection to the server:
    Serial.println("connection failed");
  }
 }

 }
 
 void Send_To_Component6()
 {
   {
   if (client.connect(server, 80)) {
    Serial.println("connected");
    // Make a HTTP request:
    Serial.println("GET /testcode/Update_Sensor_Component.php");
    client.print("GET /testcode/Update_Sensor_Component.php?ID=6");
   
          //YOUR URL
    client.print(" ");      //SPACE BEFORE HTTP/1.1
    client.print("HTTP/1.1");
    client.println();
    client.println("Host: 192.168.1.101");
    client.println("Connection: close");
    client.println();
  } else {
    // if you didn't get a connection to the server:
    Serial.println("connection failed");
  }
 }

 }
 
 void Send_To_Component7()
 {
   {
   if (client.connect(server, 80)) {
    Serial.println("connected");
    // Make a HTTP request:
    Serial.println("GET /testcode/Update_Sensor_Component.php");
    client.print("GET /testcode/Update_Sensor_Component.php?ID=7");
   
          //YOUR URL
    client.print(" ");      //SPACE BEFORE HTTP/1.1
    client.print("HTTP/1.1");
    client.println();
    client.println("Host: 192.168.1.101");
    client.println("Connection: close");
    client.println();
  } else {
    // if you didn't get a connection to the server:
    Serial.println("connection failed");
  }
 }

 }
 
 void Send_To_Component8()
 {
   {
   if (client.connect(server, 80)) {
    Serial.println("connected");
    // Make a HTTP request:
    Serial.println("GET /testcode/Update_Sensor_Component.php");
    client.print("GET /testcode/Update_Sensor_Component.php?ID=8");
   
          //YOUR URL
    client.print(" ");      //SPACE BEFORE HTTP/1.1
    client.print("HTTP/1.1");
    client.println();
    client.println("Host: 192.168.1.101");
    client.println("Connection: close");
    client.println();
  } else {
    // if you didn't get a connection to the server:
    Serial.println("connection failed");
  }
 }

 }

 
  void Send_To_Product()   //CONNECTING WITH MYSQL
 {
   if (client.connect(server, 80)) {
    Serial.println("connected");
    // Make a HTTP request:
    Serial.println("GET /testcode/Update_Product.php?ID=1");
    client.print("GET /testcode/Update_Product.php?ID=1");     //YOUR URL
    client.print(" ");      //SPACE BEFORE HTTP/1.1
    client.print("HTTP/1.1");
    client.println();
    client.println("Host: 192.168.1.101");
    client.println("Connection: close");
    client.println();
  } else {
    // if you didn't get a connection to the server:
    Serial.println("connection failed");
  }
 }

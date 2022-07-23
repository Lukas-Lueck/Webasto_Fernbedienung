/*
 * GSM-Fernbedienungstool für Webasto Thermo Top Evo 5 mit Multicontroleinheit
 * SIM800L Tx -> PIN #4 Arduino Mini
 *         Rx -> PIN #3 Arduino Mini
 * Arduino Mini PIN #5: Signalleitung an Webasto Multicontroleinheit
 * 
 * verwendeter AT-Befehlssatz:
 * ATV0 = Rückmeldung bei Anruf über Serielle Schnittstelle als Ziffer, 2 = Anruf
 * ATA  = Anruf annehmen
 * ATH  = Anruf beenden
 * 
 * by Lukas Lück, 01.2021
*/

#include <SoftwareSerial.h>

#define TX 3
#define RX 4

SoftwareSerial gsm(TX,RX);      //Serielle Kommunikation an PIN #3(TX) und PIN #4(RX)

void anrufAuswerten();


char gsmStatus=0;              //aktueller Status, 0 = Leerlauf, 2 = Anruf


void setup()
{
  delay(1000);
  gsm.begin(9600);
  while(!gsm);                  // warten bis SIM800L bereit
  gsm.println("ATV0");
  pinMode(5, OUTPUT);
  digitalWrite(5,LOW);
}  


void loop()
{
  if(gsm.available()>0)         //serielle Schnittstelle aktiv
  { 
    gsmStatus=gsm.read(); 
    if(gsmStatus=='2')
    {
      anrufAuswerten(); 
      gsmStatus='0';
    }
  }
}

void anrufAuswerten()
{
  String buffer=gsm.readString();
  String nummer=buffer.substring(10,23);                       //Telefonnummer auslesen
  if(nummer=="+49XXXXXXXXX" || nummer=="+49XXXXXXXXXXX")
  {
    digitalWrite(5,HIGH);
    delay(300);
    digitalWrite(5,LOW);
    gsm.println("ATA");
    delay(1000);
    gsm.println("ATH");
  }
  else
    gsm.println("ATH");
  nummer="";                                                 //ausgelesene Telefonnummer reseten
}

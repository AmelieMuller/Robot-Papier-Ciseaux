//SCRIPT RECEVEUR 

#include<SoftwareSerial.h>
#define RX 10
#define TX 11
SoftwareSerial BlueT(RX,TX);

char joueur;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  BlueT.begin(9600);
  delay(500);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(BlueT.available()){
    joueur=BlueT.read();
    if (joueur=='S'){ //Le joueur a fait le signe pour commencer

      //Décompte 3,2,1 Robot Papier Ciseaux, choix du robot 
      
      if(BlueT.available()){
        joueur=BlueT.read();
        switch (joueur){
          case 'C' :
            Serial.println("le joueur fait ciseaux");
            break;
          
          case 'F':
            Serial.println("le joueur fait Feuille");
            break;
          
          case 'P':
            Serial.println("le joueur fait Pierre");
            break;
          
          case 'I':
            Serial.println("le joueur fait Inconnu");
       
        }
      }
    }
  }
}

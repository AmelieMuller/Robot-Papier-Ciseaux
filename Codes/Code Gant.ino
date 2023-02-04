int pouce = 0;
int index = 1;
int majeur = 2;
int anulaire = 3;
int petitDoigt = 4;

int valPouce;
int valIndex;
int valMajeur;
int valAnulaire;
int valPetitDoigt;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}





void loop() {
  // put your main code here, to run repeatedly:
  valPouce = analogRead(pouce);
  valIndex = analogRead(index);
  valMajeur = analogRead(majeur);
  valAnulaire = analogRead(anulaire);
  valPetitDoigt = analogRead(petitDoigt);
  Serial.println(valPouce);
  Serial.println(valIndex);
  Serial.println(valMajeur);
  Serial.println(valAnulaire);
  Serial.println(valPetitDoigt);


  if( (valPouce>700)&&(valPetitDoigt>700)&&(valIndex>700)&&(valMajeur>700)&&(valAnulaire>800) ){
    Serial.println("P"); //Le gant envoie que le joueur fait Pierre
    
  }
  //&&(valPetitDoigt>700)
  else if ( (valAnulaire>800)&&(valIndex<700)&&(valMajeur<700)&&(valPetitDoigt>700) ){
    Serial.println("C"); //Le gant envoie que le joueur fait CIseaux
    
  }
  //(valPouce<700)&&(valPetitDoigt<700)
  else if ( (valIndex<700)&&(valMajeur<700)&&(valAnulaire<800)&&(valPouce<700)&&(valPetitDoigt<700) ){
    Serial.println("F"); //Le gant envoie que le joueur fait feuille
    
  }
//  else if ((valPouce<740)&&(valIndex>700)&&(valMajeur>700)&&(valAnulaire>800)&&(valPetitDoigt<700)){
//    Serial.println("S"); //Le gant envoie que le joueur fait le signe pour démarrer
//    
//  }

  else{
    Serial.println("I"); //Le gant envoie que le joueur fait un signe inconnu
    
  }
  delay(1000);
}

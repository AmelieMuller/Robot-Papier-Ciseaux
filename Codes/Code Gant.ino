//Initialiser les variables pour le gant
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
  //on récupère la tension pour chaque doigt
  valPouce = analogRead(pouce);
  valIndex = analogRead(index);
  valMajeur = analogRead(majeur);
  valAnulaire = analogRead(anulaire);
  valPetitDoigt = analogRead(petitDoigt);


  //Puis on envoie ce que l'utilisateur fait
  
 if( (valPouce>700)&&(valPetitDoigt>700)&&(valIndex>675)&&(valMajeur>700)&&(valAnulaire>800) ){
      Serial.write("P"); //Le gant envoie que le joueur fait Pierre
  }
  else if ( (valAnulaire>800)&&(valIndex<675)&&(valMajeur<700)&&(valPetitDoigt>700) ){
      Serial.write("C"); //Le gant envoie que le joueur fait CIseaux
  }
  else if ( (valIndex<675)&&(valMajeur<700)&&(valAnulaire<800)&&(valPouce<700)&&(valPetitDoigt<700) ){
      Serial.write("F"); //Le gant envoie que le joueur fait feuille
  }
  else if ((valPouce<700)&&(valIndex>675)&&(valMajeur>700)&&(valAnulaire>800)&&(valPetitDoigt<700)){
      Serial.write("S"); //Le gant envoie que le joueur fait le signe pour démarrer
  }

  else{
      Serial.write("I"); //Le gant envoie que le joueur fait un signe inconnu
  }
  delay(100);
}

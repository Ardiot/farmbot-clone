/*CODIGO CREADO POR CARLOS GARCIA BARAHONA PARA EL PROYECTO  "INSERTE NOMBRE AQUI QUE NO SEA FARM BOT , O SI UNA MODIFICAION MAS BARATA xd" 
 *GIT:CARLOS_ARDIOT
 *TWITTER:ARDIOT_328P
 *
 *
 *LICENCIA CREATIVE-COMMONS


*/



void setup() {
  // put your setup code here, to run once:

}

void loop() {

  if(comprobar())
      empezarTotal();

}




boolean comprobar(){
  //Primero habria que mirar antes de mepezar si es la hora , si no ha dormir de nuevo 
  //Segundo habria que mirar si hay agua suficiente para regar , si no error
  return bool;
}

void empezarTotal(){//Hace el movimiento en el eje X , del principio al final 
  
  // Empezamos el movimiento si y solo si encontramos en pocos pasos la primera etiqueta rfid-nfc o directamente , no lo se todavia la verdad porque habria que confiar en los fianle de carrera que no hay por que no confiar

  //miramos si el carro esta en su sitio , que puede ser si el final de carrera esta aktibo 


   while(!Alerta && !FinalCarreraEjeXTOTAL)// El movimiento hacia alante                      Esa alerta puede ser una de final por si no confio en los finales de carrera 
     {
      //stepperMotorEjeX++ ;
      
      if(etiqueta()==true)//si encontramos la etiqueta de una fila de plantas entramos en empezarHori
        empezarHori();
     }

   while(!Alerta && !FinalCarreraEjeXINICIAL) //El movimiento hacia atras , es decir vuelve al inicio y  para .
     {
      //stepperMotorEjeX--;
     }
  
}

void empezarHori(){//Hace todo el movimiento de ir mirando todas las plantas de la horizontal 

  while(!finalcarreraEjeYDelFinal)
    {
      //stepperMotorEjeY++;
      if(etiqueta()==true)
        {
          regar();
        }
    }

  while(!finalcarreraEjeYDelInicio)
    {
      //stepperMotorEjeX--;
    }
  
}

void regar(){

  //habra que mirar si sigue habiendo agua , ya sea para parar con un puntero por hay para que vuelva a casa o para reducir/optimizar el riego 

  while(!FinalCarreraEjeZdown)//Baja el piñon cremallera hasta el final del 
  {
    //stepperMotorEjeZ++; 
  }
  humedad=analogRead(higroZ);
  //Dependiendo de la humedad o no la verdad pues regamos mas o menos
  tiempo=tiempoRiego(humedad);
  pinMode(bomba,1);// SOLO SI Y SOLO SI HAY AGUA , QUE SI NO SE ROMPE!!!!!!
  delay(tiempo)
  pinMode(bomba,0);

  while(!FinalCarreraEjeZtop)//subimos el piñon cremallera hasta arriba de nuevo , habra que ajustar fisicamente la pieza en freeCad 
  {
    //stepperMotorEjeZ--;
  }
  
}

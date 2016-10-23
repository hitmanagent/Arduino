void setup() {
  Serial.begin(9600);
  
  
  
  
  
 }
  void loop (){
    if (Serial.available() > 0 ){
      char inbyte = Serial.read();
      Serial.println(inbyte);
      switch (inbyte){
        case '1':
        Serial.println ("case 1 tested");
        break; 
        case 2:
        Serial.println ("case 2 tested");
        break;
        case 3:
        Serial.println ("caes 3 tested");
        break;
        case 4:
        Serial.print ("case 4 tested");
        break;




        
        }
      } 
    
    
    
    
    
    }

      /*        
              _a
            f|_|b
            e|_|c
              d
             
                
*/
#include<Wire.h>
const uint8_t pinA = 2; 
const uint8_t pinB = 3; 
const uint8_t pinC = 4; 
const uint8_t pinD = 5; 
const uint8_t pinE = 6; 
const uint8_t pinF = 7; 
const uint8_t pinG = 0; // set to port b //connect to pin 8 // as the first bit shall correspond to 0;

const uint8_t cat1 = 1; // connect of pin 9
const uint8_t cat2 = 2; // connect  to pin 10
const uint8_t cat3 = 3; // donnect to pin 11
const uint8_t cat4 = 4; // connect to pin 12
int value1= 10; // pass first number to be displayed here
int value2 = 9; // pass second number to be displayed here
int freq = 1;
int first_val;
int second_val;

int val0D = B11111100; // fedcba00
int val0B = B00011110; // 0000000g

int val1D = B00011000;
int val1B = B00011110;

int val2D = B01101100;
int val2B = B00011111;

int val3D = B00111100;
int val3B = B00011111;

int val4D = B10011000;
int val4B = B00011111;

int val5D = B10110100;
int val5B = B00011111;

int val6D = B11110100;
int val6B = B00011111; 

int val7D = B00011100;
int val7B = B00011110;

int val8D = B11111100;
int val8B = B00011111;

int val9D = B10111100;
int val9B = B00011111;

void setup(){
  Serial.begin(9600);
  Wire.begin();

  
  //Serial.begin(9600);
  DDRD |= (1<<pinA|1<<pinB|1<<pinC|1<<pinD|1<<pinE|1<<pinF); // setting all pins to output 
  DDRB |= (1<<pinG);
  DDRB |= (1<<cat1|1<<cat2|1<<cat3|1<<cat4);
  //Serial.print(val0);

  
  
}


void loop(){




  ///////////////////////////////////////
digit_splitter(value1);
display_seg_value1_f();
display_seg_value1_l();
digit_splitter(value2);
display_seg_value2_f();
display_seg_value2_l();

}
void display_seg_value1_f(){

  if(first_val ==0){
      PORTD = val0D;
      PORTB = val0B;
      digitalWrite(9,LOW);
      delay(freq);
  }

    else if(first_val ==1){
      PORTD = val1D;
      PORTB = val1B;
      digitalWrite(9,LOW);
      delay(freq);
  }

    else if(first_val ==2){
      PORTD = val2D;
      PORTB = val2B;
      digitalWrite(9,LOW);
      delay(freq);
  }

    else if(first_val ==3){
      PORTD = val3D;
      PORTB = val3B;
      digitalWrite(9,LOW);
      delay(freq);      
  }

    else if(first_val ==4){
      PORTD = val4D;
      PORTB = val4B;
      digitalWrite(9,LOW);
      delay(freq);      
  }

    else if(first_val ==5){
      PORTD = val5D;
      PORTB = val5B;   
      digitalWrite(9,LOW);
      delay(freq);
      
}

    else if(first_val ==6){
      PORTD = val6D;
      PORTB = val6B;
      digitalWrite(9,LOW);
      delay(freq);
}  

    else if(first_val ==7){
      PORTD = val7D;
      PORTB = val7B;
      digitalWrite(9,LOW);
      delay(freq);
}

    else if(first_val ==8){
      PORTD = val8D;
      PORTB = val8B;
      digitalWrite(9,LOW);
      delay(freq);      
}

    else if(first_val ==9){
      PORTD = val9D;
      PORTB = val9B;
      digitalWrite(9,LOW);
      delay(freq);      
}

}


void display_seg_value1_l(){

  if(second_val ==0){
      PORTD = val0D;
      PORTB = val0B;
      digitalWrite(10,LOW);
      delay(freq);
  }

    else if(second_val ==1){
      PORTD = val1D;
      PORTB = val1B;
      digitalWrite(10,LOW);
      delay(freq);      
  }

    else if(second_val ==2){
      PORTD = val2D;
      PORTB = val2B;
      digitalWrite(10,LOW);
      delay(freq);      
  }

    else if(second_val ==3){
      PORTD = val3D;
      PORTB = val3B;
      digitalWrite(10,LOW);
      delay(freq);      
  }

    else if(second_val ==4){
      PORTD = val4D;
      PORTB = val4B;
      digitalWrite(10,LOW);
      delay(freq);      
  }

    else if(second_val ==5){
      PORTD = val5D;
      PORTB = val5B;
      digitalWrite(10,LOW);
      delay(freq);      
}

    else if(second_val ==6){
      PORTD = val6D;
      PORTB = val6B;
      digitalWrite(10,LOW);
      delay(freq);
}  

    else if(second_val ==7){
      PORTD = val7D;
      PORTB = val7B;
      digitalWrite(10,LOW);
      delay(freq);      
}

    else if(second_val ==8){
      PORTD = val8D;
      PORTB = val8B;
      digitalWrite(10,LOW);
      delay(freq);      
}

    else if(second_val ==9){
      PORTD = val9D;
      PORTB = val9B;
      digitalWrite(10,LOW);
      delay(freq);      
}

}


///////////////////////////////////

void display_seg_value2_f(){

  if(first_val ==0){
      PORTD = val0D;
      PORTB = val0B;
      digitalWrite(11,LOW);
      delay(freq);
  }

    else if(first_val ==1){
      PORTD = val1D;
      PORTB = val1B;
      digitalWrite(11,LOW);
      delay(freq);
  }

    else if(first_val ==2){
      PORTD = val2D;
      PORTB = val2B;
      digitalWrite(11,LOW);
      delay(freq);
  }

    else if(first_val ==3){
      PORTD = val3D;
      PORTB = val3B;
      digitalWrite(11,LOW);
      delay(freq);      
  }

    else if(first_val ==4){
      PORTD = val4D;
      PORTB = val4B;
      digitalWrite(11,LOW);
      delay(freq);      
  }

    else if(first_val ==5){
      PORTD = val5D;
      PORTB = val5B;   
      digitalWrite(11,LOW);
      delay(freq);
      
}

    else if(first_val ==6){
      PORTD = val6D;
      PORTB = val6B;
      digitalWrite(11,LOW);
      delay(freq);
}  

    else if(first_val ==7){
      PORTD = val7D;
      PORTB = val7B;
      digitalWrite(11,LOW);
      delay(freq);
}

    else if(first_val ==8){
      PORTD = val8D;
      PORTB = val8B;
      digitalWrite(11,LOW);
      delay(freq);      
}

    else if(first_val ==9){
      PORTD = val9D;
      PORTB = val9B;
      digitalWrite(11,LOW);
      delay(freq);      
}

}


void display_seg_value2_l(){

  if(second_val ==0){
      PORTD = val0D;
      PORTB = val0B;
      digitalWrite(12,LOW);
      delay(freq);
  }

    else if(second_val ==1){
      PORTD = val1D;
      PORTB = val1B;
      digitalWrite(12,LOW);
      delay(freq);      
  }

    else if(second_val ==2){
      PORTD = val2D;
      PORTB = val2B;
      digitalWrite(12,LOW);
      delay(freq);      
  }

    else if(second_val ==3){
      PORTD = val3D;
      PORTB = val3B;
      digitalWrite(12,LOW);
      delay(freq);      
  }

    else if(second_val ==4){
      PORTD = val4D;
      PORTB = val4B;
      digitalWrite(12,LOW);
      delay(freq);      
  }

    else if(second_val ==5){
      PORTD = val5D;
      PORTB = val5B;
      digitalWrite(12,LOW);
      delay(freq);      
}

    else if(second_val ==6){
      PORTD = val6D;
      PORTB = val6B;
      digitalWrite(12,LOW);
      delay(freq);
}  

    else if(second_val ==7){
      PORTD = val7D;
      PORTB = val7B;
      digitalWrite(12,LOW);
      delay(freq);      
}

    else if(second_val ==8){
      PORTD = val8D;
      PORTB = val8B;
      digitalWrite(12,LOW);
      delay(freq);      
}

    else if(second_val ==9){
      PORTD = val9D;
      PORTB = val9B;
      digitalWrite(12,LOW);
      delay(freq);      
}

}
void digit_splitter(int a){

second_val = a%10;
first_val  = (a - second_val)/10;
Serial.println(second_val);
Serial.println(first_val);
}

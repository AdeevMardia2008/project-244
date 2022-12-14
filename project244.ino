#include <CapacitiveSensor.h> 
#define speaker 11

CapacitiveSensor   cs_2_3 = CapacitiveSensor(2,3);        
CapacitiveSensor   cs_2_4 = CapacitiveSensor(2,4);         
CapacitiveSensor   cs_2_5 = CapacitiveSensor(2,5);     
CapacitiveSensor   cs_2_6 = CapacitiveSensor(2,6);     
CapacitiveSensor   cs_2_7 = CapacitiveSensor(2,7);      
CapacitiveSensor   cs_2_8 = CapacitiveSensor(2,8);         
CapacitiveSensor   cs_2_9 = CapacitiveSensor(2,9);  
CapacitiveSensor   cs_2_10 = CapacitiveSensor(2,10);     

void setup()                    
{
  cs_2_6.set_CS_AutocaL_Millis(0xFFFFFFFF); 
  Serial.begin(9600);
}

void loop()                    
{
  long start = millis();
  long total1 =  cs_2_3.capacitiveSensor(3000);
  long total2 =  cs_2_4.capacitiveSensor(3000);
  long total3 =  cs_2_5.capacitiveSensor(3000);
  long total4 =  cs_2_6.capacitiveSensor(3000);
  long total5 =  cs_2_7.capacitiveSensor(3000);
  long total6 =  cs_2_8.capacitiveSensor(3000);
  long total7 =  cs_2_9.capacitiveSensor(3000);
  long total8 =  cs_2_10.capacitiveSensor(3000);

  Serial.print(millis() - start);     
  Serial.print("\t");                    
  Serial.print(total1);
  Serial.print("\t");                   
  Serial.print(total2);
  Serial.print("\t");                    
  Serial.print(total3);
  Serial.print("\t");                  
  Serial.print(total4);
  Serial.print("\t");                   
  Serial.print(total5);
  Serial.print("\t");                   
  Serial.print(total6);
  Serial.print("\t");                   
  Serial.print(total7); 
                                        
  Serial.print("\t");
  Serial.println(total8);               
                
  if (total1 > 500) tone(speaker,131);   
  if (total2 > 500) tone(speaker,147);   
  if (total3 > 500) tone(speaker,165);
  if (total4 > 500) tone(speaker,175);
  if (total5 > 500) tone(speaker,196);
  if (total6 > 500) tone(speaker,220);
  if (total7 > 500) tone(speaker,247);
  if (total8 > 500) tone(speaker,262);
  if (total1<=500  &  total2<=500  &  total3<=500 & total4<=500  &  total5<=500  &  total6<=500 &  total7<=500 &  total8<=500)
    noTone(speaker);

  delay(10);                
}
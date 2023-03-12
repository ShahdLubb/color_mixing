
int pump_bin1=2;
int pump_bin2=3;
int flow_rate=4000;// in mL / minute
int tube_diameter=6;// in mm
int amount=100 ;// in mL
bool pulled=0;
void setup() {
 
pinMode(pump_bin1, OUTPUT);
pinMode(pump_bin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(!pulled){
  digitalWrite(pump_bin1,HIGH);
  digitalWrite(pump_bin2,LOW);
  delay(time_to_pull(amount));
  digitalWrite(pump_bin1,LOW);
  digitalWrite(pump_bin2,LOW);
  pulled=1;
  }

}

 // test1: supposing nothing stuck to the tube
//amount in mL ( milliliter)
int time_to_pull(int color_amount){

 /*
 4000 mL ----> 60 000 ms
 amount mL  ----> x(delay time)

 x=amount * 60 000 ms / 4000 mL
 x=amount *15;
 */
 return color_amount *15;
 
}

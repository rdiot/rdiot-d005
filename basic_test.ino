/* 2 Color(R,G) LED Module (KY-011) [D005] : http://rdiot.tistory.com/197 [RDIoT Demo] */

int R = 11; // OUTPUT PIN red
int G = 10; // OUTPUT PIN green
 
void setup()
{
 Serial.begin(115200); 
 pinMode(R, OUTPUT);
 pinMode(G, OUTPUT);
}
 
void loop()
{ 
 analogWrite(R, 0);
 analogWrite(G, 0);
 
 // RED
 for (int i = 0; i < 256; i++)
 {
 analogWrite(R, i);
 delay(10); 
 }
 for (int i = 0; i < 256; i++)
 {
 analogWrite(R, 255-i);
 delay(10);
 }
 
 // YELLOW
 for (int i = 0; i < 256; i++)
 {
 analogWrite(G, i);
 delay(10);
 }
 for (int i = 0; i < 256; i++)
 {
 analogWrite(G, 255 - i);
 delay(10);
 }
 
 // RED + Green
 for (int i = 0; i < 256; i++)
 {
 analogWrite(R, i);
 analogWrite(G, i);
 delay(10);
 }
 
 for (int i = 0; i < 256; i++)
 {
 analogWrite(R, 255 - i);
 analogWrite(G, 255 - i);
 delay(10);
 } 
}

int on = 300; int off = 900; int space = 100; int led_pin1 = 4; //int led_pin2 = 8;
//int[] rray = new int[5];
/*String alpha[] = { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j",
                "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v",
                "w", "x", "y", "z" };*/
String dottie[] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.",
                "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.",
                "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-",
                "-.--", "--..", "|" };

String toMorse = "sos";
String morse = "";



void setup() { 
  pinMode(led_pin1, OUTPUT);
  //pinMode(led_pin2, OUTPUT);
  for(int x = 0; x < toMorse.length(); x++)
  {
    int y = toMorse.charAt(x) - 'a';
    if( y >= 0 )
    {
      morse = morse + dottie[y];
    }
    else
      morse = morse + "|";
    
  }
}
 
 
void loop() { 
  for( int x = 0; x < morse.length(); x++ )
  {
    if(morse.charAt(x) == '.')
    {
        digitalWrite(led_pin1, LOW);
        delay(space);
        digitalWrite(led_pin1, HIGH);
        delay(on);
        
    }
    else if(morse.charAt(x) == '-')
    {
      digitalWrite(led_pin1, LOW);
       delay(space);
       digitalWrite(led_pin1, HIGH);
       delay(off);
    }
    else
    {
      digitalWrite(led_pin1, LOW);
      delay(1000);
    }
  }
  digitalWrite(led_pin1, LOW);
  delay(1000);
}

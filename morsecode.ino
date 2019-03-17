int LED = D7;

void setup() {
    pinMode(LED, OUTPUT);
}

void loop() {
    
    /*
        If the duration of a dot is taken to be one unit then that of a dash is three units. 
        The space between the components of one character is one unit, between characters is three units and between words seven units.
        
        One unit = 500ms
    */
    
    // The letter J is .---
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(500);
    digitalWrite(LED, HIGH);
    delay(1500);
    digitalWrite(LED, LOW);
    delay(500);
    digitalWrite(LED, HIGH);
    delay(1500);
    digitalWrite(LED, LOW);
    delay(500);
    digitalWrite(LED, HIGH);
    delay(1500);
    digitalWrite(LED, LOW);
    delay(1500);
    
    // The letter o is ---
    digitalWrite(LED, HIGH);
    delay(1500);
    digitalWrite(LED, LOW);
    delay(500);
    digitalWrite(LED, HIGH);
    delay(1500);
    digitalWrite(LED, LOW);
    delay(500);
    digitalWrite(LED, HIGH);
    delay(1500);
    digitalWrite(LED, LOW);
    delay(1500);    
    
    // The letter s is ...
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(500);
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(500);
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(1500);
    
    // The letter h is ....
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(500);
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(500);
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(500);
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(1500);
    
}

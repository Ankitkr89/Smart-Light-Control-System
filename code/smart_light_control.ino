char command;

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);

  Serial.println("System Ready");
}

void loop() {

  if (Serial.available() > 0) {

    command = Serial.read();

    Serial.print("Received: ");
    Serial.println(command);

    if (command == '1') {
      digitalWrite(13, HIGH);
      Serial.println("LED ON");
    }

    else if (command == '0') {
      digitalWrite(13, LOW);
      Serial.println("LED OFF");
    }
  }
}

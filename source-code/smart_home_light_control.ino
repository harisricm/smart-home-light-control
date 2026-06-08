// Smart Home Light Control
// Codtech Internship
// Intern: Harisri C M

const int LED1 = 26;
const int LED2 = 27;

bool led1State = false;
bool led2State = false;

void setup() {
  Serial.begin(115200);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);

  Serial.println("Smart Home Light Control Started");
}

void loop() {

  // LED 1 ON
  led1State = true;
  digitalWrite(LED1, HIGH);
  Serial.println("Light 1 ON");
  delay(2000);

  // LED 1 OFF
  led1State = false;
  digitalWrite(LED1, LOW);
  Serial.println("Light 1 OFF");
  delay(2000);

  // LED 2 ON
  led2State = true;
  digitalWrite(LED2, HIGH);
  Serial.println("Light 2 ON");
  delay(2000);

  // LED 2 OFF
  led2State = false;
  digitalWrite(LED2, LOW);
  Serial.println("Light 2 OFF");
  delay(2000);
}

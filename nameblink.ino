
const pin_t MY_LED = D7;

SYSTEM_THREAD(ENABLED);

void setup()
{

	pinMode(MY_LED, OUTPUT);
}

void blink_D()
{
	digitalWrite(MY_LED, HIGH);

	delay(3s);

	digitalWrite(MY_LED, LOW);

	delay(1s);

	digitalWrite(MY_LED, HIGH);

	delay(1s);

	digitalWrite(MY_LED, LOW);

	delay(1s);
	
	digitalWrite(MY_LED, HIGH);

	delay(1s);

	digitalWrite(MY_LED, LOW);

	delay(3s);
}

void blink_O()
{
	digitalWrite(MY_LED, HIGH);

	delay(3s);

	digitalWrite(MY_LED, LOW);

	delay(1s);

	digitalWrite(MY_LED, HIGH);

	delay(3s);

	digitalWrite(MY_LED, LOW);

	delay(1s);
	
	digitalWrite(MY_LED, HIGH);

	delay(3s);

	digitalWrite(MY_LED, LOW);

	delay(3s);    
}

void blink_M()
{
	digitalWrite(MY_LED, HIGH);

	delay(3s);

	digitalWrite(MY_LED, LOW);

	delay(1s);

	digitalWrite(MY_LED, HIGH);

	delay(3s);

	digitalWrite(MY_LED, LOW);

	delay(3s);
}

void blink_I()
{
	digitalWrite(MY_LED, HIGH);

	delay(1s);

	digitalWrite(MY_LED, LOW);

	delay(1s);

	digitalWrite(MY_LED, HIGH);

	delay(1s);

	digitalWrite(MY_LED, LOW);

	delay(3s);    
}

void blink_N()
{
	digitalWrite(MY_LED, HIGH);

	delay(3s);

	digitalWrite(MY_LED, LOW);

	delay(1s);

	digitalWrite(MY_LED, HIGH);

	delay(1s);

	digitalWrite(MY_LED, LOW);

	delay(3s);    
}

void blink_C()
{
	digitalWrite(MY_LED, HIGH);

	delay(3s);

	digitalWrite(MY_LED, LOW);

	delay(1s);

	digitalWrite(MY_LED, HIGH);

	delay(1s);

	digitalWrite(MY_LED, LOW);

	delay(1s);
	
	digitalWrite(MY_LED, HIGH);

	delay(3s);

	digitalWrite(MY_LED, LOW);

	delay(1s);

	digitalWrite(MY_LED, HIGH);

	delay(1s);

	digitalWrite(MY_LED, LOW);

	delay(3s);
}

void blink_L()
{
	digitalWrite(MY_LED, HIGH);

	delay(1s);

	digitalWrite(MY_LED, LOW);

	delay(1s);

	digitalWrite(MY_LED, HIGH);

	delay(3s);

	digitalWrite(MY_LED, LOW);

	delay(1s);
	
	digitalWrite(MY_LED, HIGH);

	delay(1s);

	digitalWrite(MY_LED, LOW);

	delay(1s);
	
	digitalWrite(MY_LED, HIGH);

	delay(1s);

	digitalWrite(MY_LED, LOW);

	delay(3s);
}

void blink_E()
{
	digitalWrite(MY_LED, HIGH);

	delay(1s);

	digitalWrite(MY_LED, LOW);

	delay(3s);
}


void loop()
{
    blink_D();
    
    blink_O();
    
    blink_M();
    
    blink_I();
    
    blink_N();
    
    blink_I();
    
    blink_C();
}
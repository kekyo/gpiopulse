#include <wiringPi.h>

#define PORT 4

int main()
{
	int i;

	if (wiringPiSetupGpio() == -1) return 1;
	pinMode(PORT, OUTPUT);
	while (1)
	{
		digitalWrite(PORT, 1);
		delay(200);
		digitalWrite(PORT, 0);
		delay(200);
	}
}


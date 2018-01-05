#include <stdio.h>

float soundspeed(void);

float dist;

int main(void)
{
	printf("Enter distance in meteres: ");
	scanf("%f", &dist);

	printf("Time to travel %f meteres: %f sec ", dist, soundspeed());

	return 0;
}
float soundspeed(void) {
	
	float sec;
	sec = dist / 3760;
	return sec;
}
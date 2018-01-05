#include <stdio.h>

float soundspeed(float dist);

int main(void)
{
	float dist;

	printf("Enter distance to find out the seconds: ");
	scanf("%f", &dist);

	printf("It will take %f sec to travel %f\n", soundspeed(dist), dist);
	
	return 0;
}
float soundspeed(float dist) {

	return dist / 3760;
}
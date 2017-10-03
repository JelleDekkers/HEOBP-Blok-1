#include "stdafx.h"
#include "Random.h"

Random::Random() {
	srand(time(NULL));
}

int Random::getRandomNrBetween(int min, int max) {
	int rnd = rand() % max + min;
	return rnd;
}

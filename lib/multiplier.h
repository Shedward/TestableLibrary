#ifndef MULTIPLIER_H
#define MULTIPLIER_H

class Multiplier {
public:
	Multiplier(double factor = 1.0);
	double multiply(double value);

private:
	double _factor;
};

#endif
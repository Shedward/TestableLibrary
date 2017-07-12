#include "multiplier.h"

Multiplier::Multiplier(double factor)
	: _factor(factor) {

}

double Multiplier::multiply(double value) {
	return _factor * value;
}
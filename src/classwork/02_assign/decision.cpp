//Write the function code that returns the product of hours and hourly_rate.
#include "decision.h"

double gross_pay(double hours, double hourly_rate)
{

	double gross;

	if (hours < 40)
	{
		gross = hours * hourly_rate;
	}
	else
	{
		double extra;
		extra = (hours - 40) * (hourly_rate * 1.5);

		gross = (40 * hourly_rate) + extra;
	}
	return gross;
}

#include "app.h"
#include <algorithm>

namespace vsite::oop::v5
{
	// user-defined literals	
	double operator"" _inch(unsigned long long value)
	{
		return value * 2.54;
	}

	double operator"" _eur(unsigned long long value)
	{
		return value * 7.5345;
	}

	// tire class
	tire::tire(double diameter) : m_diameter(diameter) {}

	double tire::diameter()
	{
		return m_diameter;
	}


	// vehicle class
	vehicle::vehicle(int year) : m_year(year) {}
	int vehicle::year()
	{
		return m_year;
	}

	// product class
	product::product(double price_eur) : m_price(price_eur) {}
	double product::price()
	{
		return m_price;
	}

	// car class
	car::car(int year, double price_eur, double tire_diameter)
		: vehicle(year), product(price_eur), m_tire(tire_diameter) {}

	double car::tire_diameter() {
		return m_tire.diameter();
	}

}
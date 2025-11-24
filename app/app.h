#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v5 
{

	double operator"" _inch(unsigned long long value);
	double operator"" _eur(unsigned long long value);


	class tire {
		double m_diameter;

		public:
			tire(double diameter);
			double diameter();
	};

	class vehicle {
		int m_year;

		public:
			vehicle(int year);
			int year();
	};

	class product {
		double m_price;

		public:
			product(double price_eur);
			double price();
	};

	class car : public vehicle, public product {
		tire m_tire;

		public:
			car(int year, double price_eur, double tire_diameter);
			double tire_diameter();
	};

}
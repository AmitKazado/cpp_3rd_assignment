#include <iostream>
#include <string>

#include "Unit.h"
using namespace std;

namespace ariel{
	class PhysicalNumber {

		double data;
		Unit unit;

	public:
		PhysicalNumber(double, Unit);

		// operators for simple calcs
		const PhysicalNumber operator+() const; 
		const PhysicalNumber operator+(const PhysicalNumber&) const; 
		PhysicalNumber& operator+=(const PhysicalNumber&); 

		const PhysicalNumber operator-() const; 
		const PhysicalNumber operator-(const PhysicalNumber&) const; 
		PhysicalNumber& operator-=(const PhysicalNumber&);
		 
		PhysicalNumber& operator=(const PhysicalNumber&); 

		// operators for comparisons between physical numbers
		friend bool operator>(const PhysicalNumber&,const PhysicalNumber&);
		friend bool operator<(const PhysicalNumber&, const PhysicalNumber&); 

		friend bool operator==(const PhysicalNumber&, const PhysicalNumber&);  
		friend bool operator!=(const PhysicalNumber&, const PhysicalNumber&); 

		friend bool operator>=(const PhysicalNumber&,const PhysicalNumber&); 
		friend bool operator<=(const PhysicalNumber&,const PhysicalNumber&); 
		

		// unaric operators
		const PhysicalNumber operator++(int); 
		PhysicalNumber& operator++(); 

		PhysicalNumber& operator--(); 
		const PhysicalNumber operator--(int); 
		
		// input and output
		friend std::ostream& operator<<(std::ostream&, const PhysicalNumber&); 
		friend std::istream& operator>>(std::istream&, PhysicalNumber&); 

	};
};
#ifndef _test_framework_h_
#define _test_framework_h_

#include <iostream>
#include <string>

extern int testNo;

template<class T>
bool assert_equal(const T& expr, const T& wanted_expr, const std::string& str_expr, const std::string& str_wanted_expr) {
	std::cout << "\tTest № " << testNo++ << " : ";
	if (expr != wanted_expr) {
		std::cout << str_expr << " = " << expr << "; Which isn't equal requested " << wanted_expr << std::endl;
		std::cout << "\t\tPassed BAD" << std::endl;
		return false;
	}
	
	std::cout << str_expr << " = " << expr << ";" << std::endl << "\t\tPassed OK" << std::endl; return true;
}

#define ASSERT_EQ(expr, wanted_expr) assert_equal(expr, wanted_expr, #expr, #wanted_expr)

bool asserto(bool expr, const std::string& str_expr); 

#define ASSERT(expr) asserto(expr, #expr)

#endif

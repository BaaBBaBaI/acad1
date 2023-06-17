#include "test_framework.h"


int testNo = 0;
  
bool asserto(bool expr, const std::string& str_expr) {
	if (expr) {
                std::cout << "expr OK" << std::endl;
                return true;
        } else {
                std::cout << "expr " << str_expr << " is  Wrong" << std::endl;
                return false;
        }
}

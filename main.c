#include <iostream>
#include "test_framework.h"



void run_test(void (*test)()) {
	std::cout << "Start" << std::endl;
	test();
}

#define RUN_TEST(test) run_test(test)

int foo(int a) {
	switch(a) {
		case 5:
			return 10;
		case 6:
			return 20;
	}
	return 1 << a;
}

void test_foo() {
	testNo = 0;
	ASSERT_EQ(foo(5), 10);
	ASSERT_EQ(foo(6), 20);
	ASSERT_EQ(foo(7), 30);
	ASSERT_EQ(foo(8), 40);
}
int main() {
	ASSERT(2 + 3 == 10);
	RUN_TEST(test_foo);
	return 0;
}

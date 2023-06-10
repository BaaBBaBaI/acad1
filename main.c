#include <iostream>

struct cord {
	unsigned char x1;
	unsigned char y1;
	unsigned char x2;
	unsigned char y2;

	void show() {
		std::cout << x1 << ", " << y1 << " ; " << x2 << ", " << y2 << std::endl;
	}
	bool getCanMoveQ() {
		if ( x1 == x2 || y1 == x2 || abs(x2 - x1) == abs(y2 - y1) ) {
			return true;
		}
		return false;
	}
};
void getcord(struct cord *cords) {
	std::cin >> cords->x1 >> cords->y1 >> cords->x2 >> cords->y2;
}

int main () {
	struct cord corrQueen;
	getcord(&corrQueen);
	//corrQueen.show();
	std::cout << (corrQueen.getCanMoveQ()?"YES":"NO") << std::endl;
	return 0;
}

#include <iostream>
using namespace std;

// Colors struct
struct Colors
{
	int white = 0, black = 1, orange = 2, pink = 3, red = 4, brown = 5, blue = 6, yellow = 7, green = 8;
};
Colors color;

// No. of Pixels
const int N = 32;

class Image
{
	int **canvas;
	string type;

	void ice_cream();
	void boat();
	void ghost();
	void pizza();
	void water_melon();
	void heart();
	void star();
	void tree();
	void bunny();
	void bee();

	void get_image();

public:
	Image(string image_type);
	void display();
};
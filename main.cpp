#include <iostream>
#include "list.cpp"
#include "Image.cpp" 
using namespace std;

// void draw_image(int);
// void get_user_input(int, List &);
void display_images_list(string img_numbers[10], List &);

int main()
{
	Image bee = Image("bee");
	Image tree = Image("tree");
	Image boat = Image("boat");
	Image star = Image("star");
	Image ghost = Image("ghost");
	Image pizza = Image("pizza");
	Image heart = Image("heart");
	Image bunny = Image("bunny");
	Image ice_cream = Image("ice_cream");
	Image water_melon = Image("water_melon");
	Image images[10] = {bee, tree, boat, star, ghost, pizza, heart, bunny, ice_cream, water_melon};
	cout << "\nWelcome to the Image-Gallery app, you can select one of the following images and our app will draw it for you.\n";
	string img_numbers[10] = {"Bee", "Tree", "Boat", "Star", "Ghost", "Pizza", "Heart", "Bunny", "Ice Cream", "Water Melon"};
	List list = List(1);
	display_images_list(img_numbers, list);
	images[0].display();
	// list.add(7);
	// list.add(9);
	// list.getPrev();
	// cout << list.getPrev()->data << endl;
	// list.add(11);
	// cout << list.getData() << endl;
	// list.getPrev();
	// cout << list.getNext()->data << endl;
	return 0;
}

void display_images_list(string img_numbers[10], List &)
{
	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << ". " << img_numbers[i] << endl;
	}
	cout << "Please select a number from 1 to 10 ";
}

// void get_user_input(int num, List &l)
// {
// 	if (num > 0 && num <= 10)
// 	{
// 		l.add(num);
// 		// draw_image(num);
// 	}
// }
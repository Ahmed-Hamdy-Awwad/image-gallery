#include "list.cpp"
#include <iostream>
#include "Image.cpp"
using namespace std;

void draw_image(int);
void get_user_input(int, List &, int &);
void display_images_list(string img_numbers[10], List &, int &);

int main()
{
	cout << "\nWelcome to the Image-Gallery app, you can select one of the following images and our app will draw it for you.\n";
	string img_numbers[13] = {"Bee", "Tree", "Boat", "Star", "Ghost", "Pizza", "Heart", "Bunny", "Ice Cream", "Water Melon", "Next", "Previous", "Exit"};
	List list = List(1);
	int keep_going = 1;
	while (keep_going)
		display_images_list(img_numbers, list, keep_going);
	return 0;
}

void display_images_list(string img_numbers[10], List &l, int &keep_going)
{
	for (int i = 0; i < 13; i++)
	{
		cout << i + 1 << ". " << img_numbers[i] << endl;
	}
	int user_input;
	cout << "Please select a number from 1 to 13: ";
	cin >> user_input;
	get_user_input(user_input, l, keep_going);
}

void get_user_input(int num, List &l, int &keep_going)
{
	if (num > 0 && num <= 10)
	{
		l.add(num);
		draw_image(num);
	}
	else if (num == 11)
	{
		draw_image(l.getNext()->data);
	}
	else if (num == 12)
	{
		draw_image(l.getPrev()->data);
	}
	else
	{
		keep_going = 0;
	}
}

void draw_image(int num)
{
	Image images[10] = {Image("bee"), Image("tree"), Image("boat"), Image("star"), Image("ghost"), Image("pizza"), Image("heart"), Image("bunny"), Image("ice_cream"), Image("water_melon")};
	images[num - 1].display();
}

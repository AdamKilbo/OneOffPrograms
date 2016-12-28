// 12days.cpp
// programming challenge from: https://redd.it/5j6ggm

#include <iostream>
#include <vector>
using namespace std;

int main() {
	string days[] = {"first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eigth", "ninth", "tenth", "eleventh", "twelfth"};
	string gifts[] = {"Partridge in a Pear Tree", "Turtle Doves", "French Hens", "Calling Birds", "Golden Rings", "Geese a Laying", "Swans a Swimming", "Maids a Milking", "Ladies Dancing", "Lords a Leaping", "Pipers Piping", "Drummers Drumming"};

	for (int i = 0; i < 12; i++) {
		cout << "\nOn the " << days[i] << " day of Christmas \nmy true love sent to me: " << endl;
		for (int j = i; j >= 0; j--) {
			if (j == 0 and i != 0) {
				cout << "and ";
			}
			cout << j+1 << " " << gifts[j] << endl;
		}
	}
	return 0;
}

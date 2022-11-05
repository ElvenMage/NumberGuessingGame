#include <iostream>
using namespace std;
void play();
bool gameover = true;
void guess();

int main() {
	play();
}
void play() {
	int a;
	cout << "**********Welcome to the number guessing game of mine********** " << endl;
	cout << "        1.Play " << endl;
	cout << "        2.Exit " << endl;
	cin >> a;
	if (a == 1) {
		guess();
	}
	if (a == 2) {
		printf("See u :) ");
	}

}
void guess() {
	srand(time(0));
	int b = rand() % 100;
	int a;
	printf("Computer Picked A Random Number Try To Guess It \n");
	while (true) {
		cin >> a;

		if (a < b) {
			cout << "Too low! " << endl;;
			continue;
		}
		if (a > b) {
			cout << "Too high! " << endl;
			continue;
		}
		if (a == b) {
			cout << "You win! " << endl;
			break;
		}
	}
}
#include <iostream>
using namespace std;

void print(int mass[5][5]) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0;j < 5; j++) {
			cout << mass[i][j] << ' ';
		}
		cout << endl;
	}
}

class Zoo {
	string anm;
	int price;
	int n;
public:
	Zoo(string anm, int price, int n) {
		this->anm = anm;
		this->price = price;
		this->n = n;
	}
	void leftAnm(int n){
		if (n > this->n || n <= 0) {
			cout << "not enought animals" << endl;
		}
		else
			this->n -= n;
	}
	void newAnm(int n) {
		if (n <= 0)
			cout << "incorrect";
		else
			this->n += n;
	}
	void info() {
		cout << "animal: " << anm << endl;
		cout << "price: " << price << endl;
		cout << "n: " << n << endl;
	}
	void changePrice(int newprice) {
		price = newprice;
	}
};

class Dog {
	string name;
	string type;
public:
	Dog(string name, string type) {
		this->name = name;
		this->type = type;
	}
	Dog(){}

	void info() {
		cout << "name: " << name << endl;
		cout << "type " << type << endl;
	}
};

int main()
{
	/*Zoo dogs("dog", 4000, 13);
	Zoo cats("cat", 3400, 17);
	Zoo parrots("parrot", 5000, 8);
	dogs.info();
	cats.info();
	parrots.info();
	dogs.leftAnm(4);
	cats.newAnm(5);
	parrots.changePrice(4750);
	dogs.info();
	cats.info();
	parrots.info();*/
	Dog dogs[5];
	string names[] = { "Tim", "Boy", "Tom", "Dog", "God" };
	string types[] = { "ofcharka","beagle","haski","korgi","retriver" };
	for (int i = 0;i < 5;i++) {
		dogs[i] = Dog(names[i], types[i]);
		dogs[i].info();
	}
}


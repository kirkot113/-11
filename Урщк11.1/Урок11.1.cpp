#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string a;
	ifstream fin("original.txt");
	ofstream fout("out.txt");
	if (!fin.is_open())
		cout << "error this file";
	else {
		while (!fin.eof()) {
			getline(fin, a);
			fout << a[0];
			for (int i = 0; i < a.size(); i++) {
				if (a[i] == ' ')
					fout << a[i + 1];
			}
			fout << " ";
		}
		fin.close();
		fout.close();
	}
}


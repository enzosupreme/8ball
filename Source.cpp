#include<iostream>
#include<string>
#include"time.h"
#include<fstream>

using namespace std;

const int SIZE = 8;

string shaker(int);

int main()
{
	string Q;
	srand(time(NULL));
	int roll = rand() % 7;
	string response = shaker(roll);

	cout << "Ask me a question to shake the 8 Ball!: " << endl;
	cin >> Q;

	cout << "\n\n";
	cout << response;


}

string shaker(int shook)
{
	int x = 0;
	fstream list("8ball.txt", ios::in);
	string line;
	string ball[SIZE];

	while (list)
	{
		for (int x = 0; x < SIZE; x++)
		{
			getline(list, line, '#'); // # as a delimiter
			ball[x] = line;
		}
	
	}
	list.close();

	return line;

}

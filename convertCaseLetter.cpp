#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int counter;
	char letter;
	cout << "Input Letter: ";cin>>letter;
	counter=letter;
	if(counter>=65 && counter<=90){
		counter = counter + 32;
		letter = counter;
		cout << letter ;
	}
	else if(counter>=97 && counter<=122){
		counter = counter - 32;
		letter = counter;
		cout << letter << endl;
	}
	return 0;
}
// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
  int totalPage, readPerDay, totalDay, remainingPage, toalDay, readPage;
		
		cout << "Enter total page of book = ";
		cin >> totalPage;
		cout << "Enter read pages per day = ";
		cin >> readPerDay;
		totalDay = totalPage/readPerDay;
		cout << "In " << totalDay << " Day Required to Reading Complete Book." << endl;
		cout << "Enter How many pages read you?" << endl;
		cin >> readPage;
		remainingPage = totalPage - readPage;
		cout << endl << "Remaing Page is " << remainingPage << " and " << remainingPage/readPerDay << " day reuired for completion the book.";
}


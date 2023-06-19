//testing
#include <iostream>
#include "qsirkular.h"

using namespace std;

int main()
{
	Queue q1;
	q1.push(10);
	q1.push(15);
	q1.push(20);
	q1.push(25);
	q1.push(30);
	q1.push(35);
	q1.push(40);
	q1.push(45);
	q1.push(50);
	cout << "Size : " << q1.size() << endl;
	cout << "Front: " << q1.front() << endl;
	cout << "Back : " << q1.back() << endl;
	
	q1.pop();
    q1.push(55);
    q1.push(60);

    cout << "\nSetelah melakukan Pop dan Push:" << endl;
    cout << "Size : " << q1.size() << endl;
    cout << "Front: " << q1.front() << endl;
    cout << "Back : " << q1.back() << endl;
	
	q1.pop();
	q1.push(60);
	
	cout << "\nSetelah melakukan Pop dan Push ke-2:" << endl;
    cout << "Size : " << q1.size() << endl;
    cout << "Front: " << q1.front() << endl;
    cout << "Back : " << q1.back() << endl;
	
	cout << "Elements in queue: ";
	
	while(!q1.empty())
	{
		cout << q1.front() << ' ';
		q1.pop();
	}
	cout << endl;
	
	return 0;
}

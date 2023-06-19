#include "qsirkular.h"
#include <iostream>

Queue::Queue()
{
	_front	= 0;
	_back	= 0;
	for(int i = 0; i < 10; i++)
		_elements[i] = 0;
}

//fungsi push()
//memasukkan elemen 'e' ke queue
void Queue::push(int e)
{
	if (!full())
    {
        _elements[_back] = e;
        _back = (_back + 1) % 10;
    }
    else
    {
        std::cout << "Queue sudah penuh! . Tidak bisa memasukan elemen: " << e << std::endl;
    }
}

//fungsi pop()
//mengeluarkan elemen dari queue
void Queue::pop()
{
	if (!empty())
    {
        _front = (_front + 1) % 10;
    }
    else
    {
        std::cout << "Queue kosong. Tidak bisa mengeluarkan elemen dari queue." << std::endl;
    }
}

//fungsi size()
//mengetahui jumlah element yang ada dalam queue
int Queue::size()
{
	return (_back - _front + 10) % 10;
}

//fungsi full()
//mengetahui apakah queue penuh
bool Queue::full()
{
	return size() == 9;
}

//fungsi empty()
//mengetahui apakah queue kosong
bool Queue::empty()
{
	return size() == 0;
} 

//fungsi front()
//membaca elemen paling depan
int Queue::front()
{
	return _elements[_front];
} 

//fungsi back()
//membaca elemen paling belakang
int Queue::back()
{
	return _elements[(_back - 1 + 10) % 10];
}

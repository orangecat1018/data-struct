#pragma once

#ifndef SORT_H
#define SORT_H

#include <iostream>
#include <vector>
using namespace std;

class Sort
{
private:
	vector<int> _unSorted;
	vector<int> _Sorted;
	int* _a;

public:
	Sort();
	~Sort();
		
	void generate_unsorted(int,int,int);
	void print_vector(vector<int> vec);
	void print_unSorted();
	void print_Sorted();
	void random_quick_sort(int p, int r);
	int random_partition( int p, int r);
	int partition( int p, int r);
	void exchange(int i, int j);
};

#endif // !SORT_H
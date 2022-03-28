#include <iostream>
#include <windows.h>
#include <math.h>
#include <cstdlib>
#include <vector>
#include "Sort.h"
#include <algorithm>
using namespace std;
using std::string;


const int array_num = 100;

int main()
{
	
	int min = 1;
	int max = 500;
	
	Sort s;
	s.generate_unsorted(array_num, min, max);
	s.print_unSorted();
	s.random_quick_sort(0, array_num - 1);
	s.print_unSorted();
	system("pause");
}



#include <iostream>
#include <math.h>
#include <cstdlib>
#include <vector>
#include "Cls.h"
using namespace std;
using std::string;

const int cls_num = 10;

int main()
{
	//initiate clses
	vector<class Cls> clses;
	for (int i = 0; i < cls_num; i++) {
		Cls c;
		c.init();
		clses.push_back(c);
	}

	cout << "Unsorted" << endl;
	for (int i = 0; i < cls_num; i++) {
		clses[i].print_cls();
	}
	cout << endl;

	//your code here for sorting and printing results
	class Cls temp;
	for (int i = 0; i < cls_num; i++) {
		for(int j=i;j<cls_num;j++)
		{
			char a=clses[i].get_name();
			char b=clses[j].get_name();
			if(a>b)
			{temp=clses[i];clses[i]=clses[j];clses[j]=temp;}
		}
	}

	for (int i = 0; i < cls_num; i++) {
		clses[i].sort();
		clses[i].print_cls();
	}
	system("pause");
}
#pragma once

#ifndef CLS_H
#define CLS_H

#include <iostream>
#include <vector>
using namespace std;

class Cls
{
private:
	char _name;
	static const int _score_num = 15;
	vector<int> _unSorted_score;
	vector<int> _Sorted_score;//this vector can be used to store sorted results

public:
	Cls();
	~Cls();
	char get_name();
	void init();
	void print_cls();
	vector<int> Cls::gen_sorted();
    //clarations for new functions here
	vector<int> Cls::sort();
};

#endif // !CLS_H
#pragma once

#ifndef CLS_H
#define CLS_H

#include <iostream>
#include <vector>
using namespace std;

class Cls
{
private:
	string _name;
	static const int _score_num = 20;
	vector<int> _unSorted_score;
	float _avg_score;

public:
	Cls();
	~Cls();
	string get_name();
	void init(int);
	void print_cls();
	void print_avg_score();
	void compute_avg_score();
	float get_avg_score();
};

#endif // !CLS_H
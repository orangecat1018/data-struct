#include "Cls.h"
#include <string> 
using namespace std;

Cls::Cls()
{
}

Cls::~Cls()
{
}


vector<int> gen_unsorted(int array_size = 20, int min = 1, int max = 200)
{
	vector<int> unSorted;
	for (int i = 0; i < array_size; ++i) {
		unSorted.push_back((rand() % (max - min + 1)) + min);  //[min,max]
	}
	return unSorted;
}

void Cls::init(int i) {
	_name = "classNo." + to_string(i);
	_unSorted_score = gen_unsorted(_score_num);
}

string Cls::get_name() {
	return _name;
}

void Cls::print_cls() {
	cout << _name << ' ' << "scores: ";
	for (int i = 0; i < _unSorted_score.size(); ++i) {
		cout << _unSorted_score[i] << " ";
	}
	cout << endl;
}

void Cls::print_avg_score() {
	cout<< _name << ' ' << "avg score: ";
	cout << _avg_score << endl;
}

float Cls::get_avg_score() {
	return _avg_score;
}

void Cls::compute_avg_score() {
	int array_size = 20;
	int sum=0;
	for (int i = 0; i < array_size; ++i) {
		sum+=_unSorted_score[i];
	}
	_avg_score=sum/array_size;
}


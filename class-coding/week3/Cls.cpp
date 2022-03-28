#include "Cls.h"
using namespace std;

Cls::Cls()
{
}

Cls::~Cls()
{
}

vector<int> gen_unsorted(int array_size = 20, int min = 1, int max = 500)
{
	vector<int> unSorted;
	for (int i = 0; i < array_size; ++i) {
		unSorted.push_back((rand() % (max - min + 1)) + min);  //[min,max]
	}
	return unSorted;
}

void Cls::init() {
	_name = (rand() % ('Z' - 'A' + 1)) + 'A';
	_unSorted_score = gen_unsorted(_score_num);
}

char Cls::get_name() {
	return _name;
}

vector<int> Cls::gen_sorted(){
	return _unSorted_score;
}

void Cls::print_cls() {
	cout << "class name: " << _name << ' ' << "unsorted scores: ";
	for (int i = 0; i < _unSorted_score.size(); ++i) {
		cout << _unSorted_score[i] << " ";
	}
	cout << endl;
}

//definitions of functions for sorting and printing results
vector<int> Cls::sort(){
	for (int i = 0; i < _unSorted_score.size(); ++i) {
		for(int j=i;j<_unSorted_score.size(); ++j){
		    if(_unSorted_score[i]>_unSorted_score[j])
			{int temp=_unSorted_score[i];_unSorted_score[i]=_unSorted_score[j];_unSorted_score[j]=temp;}
		}
	}
	return _unSorted_score;
}

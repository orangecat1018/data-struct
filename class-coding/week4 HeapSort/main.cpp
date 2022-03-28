#include <iostream>
#include <math.h>
#include <cstdlib>
#include <vector>
#include "Cls.h"
using namespace std;
using std::string;

const int cls_num =10;

void heap_sort(vector<Cls> clses,int start,int end)
{
    int dad = start;
    int son = dad * 2 + 1;
    while (son <= end) {
        if (son + 1 <= end && clses[son].get_avg_score() < clses[son + 1].get_avg_score()) 
            son++;
        if (clses[dad].get_avg_score() > clses[son].get_avg_score()) 
            return;
        else { 
            swap(clses[dad], clses[son]);
            dad = son;
            son = dad * 2 + 1;
        }
    }
}

vector<Cls> heap_sort(vector<Cls> clses) {
    for (int i = cls_num/ 2 -1; i >=1; i--){
		heap_sort(clses, i, cls_num);}
    for (int i = cls_num; i > 0; i--) {
        swap(clses[1], clses[i]);
        heap_sort(clses, 1, i-1);
    }
	return clses;
}

int main()
{
	//initiate clses
	vector<class Cls> clses;
	Cls null_cls;
	clses.push_back(null_cls);

	cout << "Raw data:" << endl;
	for (int i = 1; i <= cls_num; i++) {
		Cls c;
		c.init(i);
		c.compute_avg_score();
		c.print_cls();
		clses.push_back(c);
	}
	cout<<endl;
	clses = heap_sort(clses);

	cout << "Sorted by Avg score:" << endl;
	for (int i = 1; i <= cls_num; i++) {
		clses[i].print_avg_score();
	}
	
	cout << "your name";
	system("pause");
}
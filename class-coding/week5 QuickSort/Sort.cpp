#include "Sort.h"]
#include <algorithm>

Sort::Sort()
{
}

Sort::~Sort()
{
}

void Sort::print_vector(vector<int> vec)
{
	for (int i = 0; i < vec.size(); ++i) {
		cout << vec[i] << " ";
	}
	cout << endl;
}

void Sort::print_unSorted()
{
	for (int i = 0; i < _unSorted.size(); ++i) {
		cout << _unSorted[i] << " ";
	}
	cout << endl;
}

void Sort::print_Sorted()
{
	for (int i = 0; i < _Sorted.size(); ++i) {
		cout << _Sorted[i] << " ";
	}
	cout << endl;
}

void Sort::generate_unsorted(int array_size,int min=1,int max=500)
{
	for (int i = 0; i < array_size; ++i) {
		_unSorted.push_back((rand() % (max - min + 1)) + min);  //[min,max]
	}
	_Sorted = _unSorted;
	_a = &_Sorted[0];
}


void Sort::exchange(int i, int j)
{
	//your code here
	int temp;
	temp=_unSorted[i];_unSorted[i]=_unSorted[j];_unSorted[j]=temp;
	cout<<_unSorted[j]<<endl;
}

int Sort::partition(int p, int r)
{
	//your code here
	int i;
	if(p<r){
		int x=_unSorted[r];
		cout<<x<<endl;
		i=p-1;
		for(int j=p;j<r;j++){
			if(_unSorted[j]<=x){
				i++;
				int temp=_unSorted[i];_unSorted[i]=_unSorted[j];_unSorted[j]=temp;
			}
		}
		int temp=_unSorted[i+1];_unSorted[i+1]=_unSorted[r];_unSorted[r]=temp;
	}
	return i+1;
}


//find the median of three elements
int Sort::random_partition(int p, int r)
{
	//your code here
	int i=rand()%(r-p)+p;
	int j=rand()%(r-p)+p;
	int k=rand()%(r-p)+p;
	/*cout<<i<<"  "<<j<<"  "<<k;
	cout<<endl;
	cout<<_unSorted[i]<<"  "<<_unSorted[j]<<"  "<<_unSorted[k];
	cout<<endl;*/
	int s[3];
	s[0]=_unSorted[i];s[1]=_unSorted[j];s[2]=_unSorted[k];
	for(int m=0;m<2;m++)
		for(int n=0;n<2-m;n++)
			if(s[n]>s[n+1])
			{int temp=s[n];s[n]=s[n+1];s[n+1]=temp;}
	if(s[1]==_unSorted[i])
	{return i;}
	if(s[1]==_unSorted[j])
	{return j;}
	return k;
}


void Sort::random_quick_sort(int p, int r)
{
	int mid,left;
	if(p<r){
		mid=random_partition(p,r);
		cout<<mid<<endl;
	    exchange(mid,r);
	    left=partition(p,r);
	    random_quick_sort(p,left-1);
		random_quick_sort(left+1,r);
	}
}

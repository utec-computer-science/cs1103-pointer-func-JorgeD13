#include <iostream>
using namespace std;

void * _bubblesort_(
	void * _array_, 
	void (*_puntero_) (void *, int _i, int _k),
	int _tam_
){
	int _k = 0;
	for (int i = 0; i < _tam_ ; i ++)
		for(int k = 0; k < _tam_-1; k++)
			_puntero_(_array_, i, k);
	return _array_;
}

void  _b_int_ (void * _vector_, int _i,int _k){
  int* iptr = (int*) _vector_;
  if (iptr[_i] < iptr[_k]){
    int aux = iptr[_i];
    iptr[_i] = iptr[_k];
    iptr[_k]=aux;
  }
}

void  _b_float_ (void * _vector_, int _i,int _k){
 float* dptr = (float*) _vector_;
  if (dptr[_i] < dptr[_k]){
    float aux = dptr[_i];
    dptr[_i] = dptr[_k];
    dptr[_k]=aux;
  }
}

void  _b_double_ (void * _vector_, int _i,int _k){
 double* fptr = (double*) _vector_;
  if (fptr[_i] < fptr[_k]){
    double aux = fptr[_i];
    fptr[_i] = fptr[_k];
    fptr[_k]=aux;
  }
}

void  _b_char_ (void * _vector_, int _i,int _k){
 char* cptr = (char*) _vector_;
  if (cptr[_i] < cptr[_k]){
    char aux = cptr[_i];
    cptr[_i] = cptr[_k];
    cptr[_k]=aux;
  }
}


int main(){
	int i = 0;
	int _array_1 [5] = {2,20,7,108,9}; // RANDOMS
	float _array_2 [5] = {4.4,5.4,9.1,7.4,2.2};
	double _array_3 [5] = {3.0,8.0,2.0,4.0,15.0};
	char _array_4 [6] = {'k','a','r','l','o','s'};

	_bubblesort_(_array_1,_b_int_,5);	
	// PRINT
	_bubblesort_(_array_2,_b_float_,5);
	// PRINT
	_bubblesort_(_array_3,_b_double_,5);
	// PRINT
	_bubblesort_(_array_4,_b_char_,6);
	// PRINT

  for (auto i: _array_1)
    cout<<i<<" ";
  cout<<endl;
  for (auto i: _array_2)
    cout<<i<<" ";
  cout<<endl;
  for(auto i: _array_3)
    cout<<i<<" ";
  cout<<endl;
  for(auto i: _array_4)
    cout<<i<<"  ";

  return 0;
}

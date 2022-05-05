//============================================================================
// Name        : MatrixSolver.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "SpMat.h"
#include "SpVect.h"
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	 SpMat<double>  *spMat=new SpMat<double>();
	 spMat->Write();

	 delete spMat;

	 vector<pair<double, int>> pp;
	 
	 int sz = 10;
	 for (int k = 0; k < sz; k++) {
		 pair<double, int> p = make_pair(sin(k), 5 * k);
		 pp.push_back(p);
	 }

	 SpVect<double> *spVect=new SpVect<double>(pp,200);
	 spVect->Write();

	 delete spVect;

	return 0;
}

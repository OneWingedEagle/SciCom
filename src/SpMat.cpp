/*
 * SpMat.cpp
 *
 *  Created on: Feb 9, 2019
 *      Author: Hassan
 */

#include "SpMat.h"

#include <iostream>
using namespace std;

template <>
SpMat<double>::SpMat() {
	// TODO Auto-generated constructor stub
}
template <>
SpMat<double>::~SpMat() {
	// TODO Auto-generated destructor stub
}
template <>
void SpMat<double>::Write() {
	// TODO Auto-generated destructor stub
for(int k=0;k<5;k++){
	cout << "**** SpMat "<<k<< endl; // prints !!!Hello World!!!
}
}



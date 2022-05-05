/*
 * SpVect.cpp
 *
 *  Created on: Feb 9, 2019
 *      Author: Hassan
 */

#include "SpVect.h"


#include <iostream>
using namespace std;

template <>
SpVect<double>::SpVect() {
	// TODO Auto-generated constructor stub
}

SpVect<double>::SpVect(const std::vector<std::pair<double, int>>& pairs, int dim) {
	values.clear();
	indices.clear();
	dimention = dim;
	for (auto p : pairs) {
		values.push_back(p.first);
		indices.push_back(p.second);
	}
}


SpVect<double>::SpVect(const std::vector<double>& vals, const std::vector<int>& indcs, int dim) {
	values = vals;
	indices = indcs;
	dimention = dim;
}

template <>
SpVect<double>::~SpVect() {
}

template <>
void SpVect<double>::Write() {
	printf("**** SpVect  Size: %d \n", values.size());

	for(int k=0;k<values.size(); k++) {
		printf("( %3d) %25.12e\n", indices[k], values[k]);
	}
}

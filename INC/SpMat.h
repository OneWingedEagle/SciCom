/*
 * SpMat.h
 *
 *  Created on: Feb 9, 2019
 *      Author: Hassan
 */

#include <vector>


template <class T>
class SpMat {
public:
	SpMat();
	virtual ~SpMat();
	void Write();

private:
	std::vector<T> values;

};

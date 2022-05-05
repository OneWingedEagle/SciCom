
/*
 * SpVect.h
 *
 *  Created on: Feb 9, 2019
 *      Author: Hassan
 */
#include <vector>

template <class T>
class SpVect {
public:
	SpVect();
	SpVect(const std::vector<std::pair<T, int>>& pairs, int dim);
	SpVect(const std::vector<T> &vals, const std::vector<int> &indcs, int dim);
	virtual ~SpVect();
	void Write();

public:
	std::vector<T> values;
	std::vector<int> indices;
	int dimention;


};





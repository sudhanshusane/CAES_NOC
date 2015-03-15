/*
 * flit.h
 *
 *  Created on: Mar 13, 2015
 *      Author: sudhanshu.sane
 */

#ifndef FLIT_H_
#define FLIT_H_

#include <vector>

using namespace std;

class Flit {
private:
	vector<FlitData> data;
public:
	Flit();
	virtual ~Flit();
};

#endif /* FLIT_H_ */

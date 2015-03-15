/*
 * flitData.h
 *
 *  Created on: Mar 13, 2015
 *      Author: sudhanshu.sane
 */

#ifndef FLITDATA_H_
#define FLITDATA_H_

class FlitData {
private:
	int value;
	//double value;
public:
	FlitData(int value);
	FlitData(double value);
	virtual ~FlitData();
};

#endif /* FLITDATA_H_ */

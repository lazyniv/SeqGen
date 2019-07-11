#pragma once
#include<vector>
class FSR {
public:
	virtual ~FSR() {};
	virtual bool shift() = 0;
	virtual std::vector<bool> getState() const = 0;
};
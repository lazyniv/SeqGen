#pragma once
#include"LFSR.h"
class FuncReg {
	LFSR reg;
	bool (*_f)(std::vector<bool>);
public:
	FuncReg(LFSR _reg, bool (*function)(std::vector<bool>)) {
		reg = _reg;
		_f = function;
	}
	LFSR getReg() const { return reg; };
	bool shift();
};

std::ostream& operator<<(std::ostream &os, const FuncReg &obj);
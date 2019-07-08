#pragma once
#include<vector>
#include"LFSR.h"
class CombFuncReg {
	std::vector<LFSR> regs;
	bool(*_f)(std::vector<bool>);
	std::vector<bool> lastv;
public:
	CombFuncReg(std::vector<LFSR> _regs, bool(*func)(std::vector<bool>)) {
		regs = _regs;
		_f = func;
	}
	std::vector<LFSR> getRegs() const { return regs; }
	bool shift();
	std::vector<bool> getLast() const {
		return lastv;
	}
};
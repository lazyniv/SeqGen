#pragma once
#include<vector>
#include"FSR.h"
class MixedFuncReg {
	std::vector<FSR*> regs;
	bool(*_f)(std::vector<bool>);
	std::vector<bool> state;
public:
	MixedFuncReg(std::vector<FSR*> _regs) {
		regs = _regs;
		state = std::vector<bool>(regs.size());
		_f = [](std::vector<bool> a) {return false; };
	}
	MixedFuncReg(std::vector<FSR*> _regs, bool(*func)(std::vector<bool>)) {
		regs = _regs;
		state = std::vector<bool>(regs.size());
		_f = func;
	}
	std::vector<FSR*> getRegs() const { return regs; }
	bool shift();
	std::vector<bool> getState() const {
		return state;
	}
};
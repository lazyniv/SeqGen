#include"CombFuncReg.h"
bool CombFuncReg::shift() {
	std::vector<bool> vars;
	for (size_t i = 0; i < regs.size(); i++) {
		vars.push_back(regs[i].shift());
	}
	lastv = vars;
	return _f(vars);
}
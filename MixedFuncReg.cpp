#include"MixedFuncReg.h"
bool MixedFuncReg::shift() {
	for (size_t i = 0; i < regs.size(); i++) {
		state[i] = (regs[i]->shift());
	}
	return _f(state);
}
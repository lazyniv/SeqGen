#include"FuncReg.h"
bool FuncReg::shift() {
	bool result = _f(reg.getState());
	reg.shift();
	return result;
}

std::ostream& operator<<(std::ostream &os, const FuncReg &obj) {
	os << "f("<<obj.getReg()<<") = ";
	return os;
}
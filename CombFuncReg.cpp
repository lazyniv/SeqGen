#include"CombFuncReg.h"
bool CombFuncReg::shift() {
  std::vector<bool> vars;
  for (auto i : regs) {
    vars.push_back(i.shift());
  }
  lastv = vars;
  return _f(vars);
}

CombFuncReg::CombFuncReg(std::vector<FSR> _regs, bool(*func)(std::vector<bool>)) {
  regs = _regs;
  _f = func;
}

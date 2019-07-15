#pragma once
#include<vector>
#include"FSR.h"
class CombFuncReg {
  std::vector<FSR> regs;
  bool(*_f)(std::vector<bool>);
  std::vector<bool> lastv;
public:
  CombFuncReg(std::vector<FSR> _regs, bool(*func)(std::vector<bool>));
  inline auto getRegs() const { return regs; }
  bool shift();
  inline auto getLast() const { return lastv; }
};

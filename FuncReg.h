#pragma once
#include"FSR.h"
class FuncReg {
  FSR reg;
  bool (*_f)(std::vector<bool>);
public:
  FuncReg(FSR _reg, bool (*f)(std::vector<bool>));
  inline FSR getReg() const { return reg; };
  bool shift();
};

std::ostream &operator<<(std::ostream &os, const FuncReg &obj);

#include<iostream>
#include"CombFuncReg.h"
#include"FSR.h"
using namespace std;

bool feedback(vector<bool> x) {
  return bool(x[1] ^ x[2]);
}


bool combFunc(vector<bool> x) {
  return bool(x[1] ^ x[2]);
}
int main() {
  FSR LFSR1 = FSR(
    {1,0,1,1,1,0,1,0,1,0,0,0,1,1,1,1,1,1,0,1,0,1,0,0,1,0,0,1,1,1,0,1},
    [](vector<bool> x){return bool(x[1]^x[6]^x[15]^x[31]);});
  FSR LFSR2 = FSR(
    {0,1,0,1,1,1,1,1,1,1,0,0,0,1,0,1,1,0,0,1,1,1,0,0,0,1,1,0,1,0,0,0},
    [](vector<bool> x){return bool(x[0]^x[1]^x[21]^x[31]);});
  FSR LFSR3 = FSR(
    {0,0,0,0,1,1,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,1,1,1,1,0,1,1,1,0,0,1},
    [](vector<bool> x){return bool(x[0]^x[2]^x[11]^x[16]^x[29]^x[31]);});
  FSR NFSR = FSR(
    {1,1,0,1,1,1,1,1,0,0,1,1,0,0,0,1,1,0,0,0,0,0,0,1,0,1,1,0,1,0,0,1},
    feedback
    );
  CombFuncReg gen = CombFuncReg({LFSR1,LFSR2,LFSR3,NFSR},combFunc);

}

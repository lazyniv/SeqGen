#include"FSR.h"

bool FSR::shift() {
  auto pop = state[0];
  auto new_first = _f(state);
  for (size_t i = 1; i < size; i++) {
    state[i - 1] = state[i];
  }
  state[size - 1] = new_first;
  return pop;
}

FSR::FSR(std::vector<bool> initial_state, bool(*feedback)(std::vector<bool>)) {
    size = initial_state.size();
    state = initial_state;
    _f = feedback;
}

std::ostream& operator<<(std::ostream &os, const FSR &obj) {
  auto toOut = obj.getState();
  for (bool val : toOut) {
    os << val;
  }
  return os;
}

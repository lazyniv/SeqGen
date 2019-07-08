#include"LFSR.h"
bool LFSR::shift() {
	bool pop = state[0];
	bool new_first = false;
	for (auto i : pos) {
		new_first ^= state[i];
	}
	for (size_t i = 1; i < size; i++) {
		state[i - 1] = state[i];
	}
	state[size - 1] = new_first;
	return pop;
}

std::vector<size_t> getPos(std::vector<size_t> deg_list, size_t deg) {
	std::vector<size_t> result;
	for (auto it : deg_list) {
		result.push_back(deg - it);
	}
	return result;
}

std::ostream& operator<<(std::ostream &os, const LFSR &obj) {
	std::vector<bool> toOut = obj.getState();
	for (bool val : toOut) {
		os << val;
	}
	return os;
}
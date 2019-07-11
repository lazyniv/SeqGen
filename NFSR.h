#pragma once
#include"FSR.h"
#include<iostream>
class NFSR : public FSR {
	size_t size;
	bool(*_f)(std::vector<bool>);
	std::vector<bool> state;
public:
	NFSR() {}
	NFSR(size_t reg_size, std::vector<bool> initial_state, bool(*feedback)(std::vector<bool>)) {
		size = reg_size;
		state = initial_state;
		_f = feedback;
	};
	NFSR(std::vector<bool> initial_state, bool(*feedback)(std::vector<bool>)) {
		size = initial_state.size();
		state = initial_state;
		_f = feedback;
	};
	void setState(std::vector<bool> new_state) { state = new_state; };
	std::vector<bool> getState() const { return state; };
	bool shift();
};

std::ostream& operator<<(std::ostream &os, const NFSR &obj);
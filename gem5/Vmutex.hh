// gem5/src/mem/ruby/structure

#ifndef _Vmutex_H_
#define _Vmutex_H_

#include <iostream>
#include <vector>
#include "sim/sim_object.hh"
#include "params/vmutex_P.hh"
using namespace std;

class Vmutex : public SimObject
{
	public:
		typedef vmutex_PParams Params;
		Vmutex(const Params *p);
		// ~Vmutex();

		void check(int addr);
		void unlock(int addr);
};

#endif

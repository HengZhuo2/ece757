//gem5/src/mem/ruby/structures

#include "Vmutex.hh"
#include <iostream>
#include <vector>
using namespace std;

Vmutex::Vmutex(const Params *p) : 
	SimObject(p)
	// latency(params->time_to_wait)
	// size(params ->size)
{
	std :: cout << "hello world! from vmutex object" << std::endl;
}

void
Vmutex::check(int addr)
{
	std :: cout << "hello world! from vmutex object" << std::endl;
}

void
Vmutex::unlock(int addr)
{

}


Vmutex*
vmutex_PParams::create()
{
	return new Vmutex(this);
}

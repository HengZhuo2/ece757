# gem5/mem/ruby/structures

from m5.params import *
from m5.proxy import *
from m5.SimObject import SimObject

class vmutex_P(SimObject):
	type = 'vmutex_P'
	cxx_class = "Vmutex"
	cxx_header = "mem/ruby/structures/Vmutex.hh"

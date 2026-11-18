CXXFLAGS ?= -std=c++17 -O2 -Wall -Wextra -Wpedantic

SOURCES := $(sort $(wildcard [0-9][0-9]_*/*.cpp))
PROGRAMS := $(patsubst %.cpp,build/%.out,$(SOURCES))

.PHONY: all clean
.DELETE_ON_ERROR:

all: $(PROGRAMS)

build/%.out: %.cpp
	@mkdir -p "$(@D)"
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $(LDFLAGS) "$<" $(LDLIBS) -o "$@"

clean:
	rm -rf build

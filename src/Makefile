CXXFLAGS  = -O2
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
#CXXFLAGS += -pedantic
CXXFLAGS += -Weffc++
CXXFLAGS += -std=c++23
CXXFLAGS += -Werror
CXXFLAGS += --all-warnings
CXXFLAGS += --extra-warnings
CXXFLAGS += -Wconversion
CXXFLAGS += -Wconversion-null
CXXFLAGS += -Wdiv-by-zero
CXXFLAGS += -Wfloat-conversion
CXXFLAGS += -Wfloat-equal
CXXFLAGS += -fext-numeric-literals
CXXFLAGS += -g0

export CXXFLAGS

.PHONY: fp32
.PHONY: fp64
.PHONY: fp80
.PHONY: fp128

all: fp32 fp64 fp80 fp128
	cd fp32 && ./main.exe
	cd fp64 && ./main.exe
	cd fp80 && ./main.exe
	cd fp128 && ./main.exe

fp32:
	${MAKE} -C fp32

fp64:
	${MAKE} -C fp64

fp80:
	${MAKE} -C fp80

fp128:
	${MAKE} -C fp128

all:
	${CXX} -c speed_of_light.cpp -o speed_of_light.o ${CXXFLAGS}
	${CXX} -c vacuum_permittivity.cpp -o vacuum_permittivity.o ${CXXFLAGS}
	${CXX} -c vacuum_permeability.cpp -o vacuum_permeability.o ${CXXFLAGS}
	${CXX} -c main.cpp -o main.o ${CXXFLAGS}
	${CXX} main.o speed_of_light.o vacuum_permittivity.o vacuum_permeability.o -o main.exe
	${CXX} -S main.cpp ${CXXFLAGS}

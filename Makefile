TARGET = main
CXXFLAGS = -g -std=c++17 -O2
OBJS = ${TARGET}.o

main: ${OBJS}
	${CXX} ${CXXFLAGS} $< -o $@

%.o : %.cpp
	${CXX} -c ${CXXFLAGS} $< -o $@

.PHONY: clean
clean:
	${RM} *.o *~ ${TARGET}


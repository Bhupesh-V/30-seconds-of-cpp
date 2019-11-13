SRC_PATH=.
OUT_PATH=./bin
SRC_FILES:=$(wildcard ${SRC_PATH}/*.cpp)
SRC_FILES:= $(filter-out ${SRC_PATH}/sample.cpp, $(SRC_FILES))
SRC_BIN=$(SRC_FILES:${SRC_PATH}/%.cpp=${OUT_PATH}/%)

CXX=g++

all: $(SRC_BIN)

${OUT_PATH}/%: ${SRC_PATH}/%.cpp
	mkdir -p ${OUT_PATH}
	${CXX} -std=c++2a $^ -o $@
clean:
	@rm -rf ${OUT_PATH}



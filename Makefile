CXX = clang++
override CXXFLAGS += -g -Wno-everything

SRCS = $(shell find . -maxdepth 1 -type f -name '*.cpp')
OBJS = $(patsubst %.cpp, %.o, $(SRCS))

main: $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o main

clean:
	rm -f $(OBJS) main

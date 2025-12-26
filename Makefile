CXX := g++
CXXFLAGS := -std=c++20 -O2 -Wall

.PHONY: all clean run runall

all:
	@if [ -z "$(p)" ]; then \
		echo "usage: make p=8000"; \
		exit 1; \
	fi
	@mkdir -p build sources
	@cp code.cpp sources/$(p).cpp
	@$(CXX) $(CXXFLAGS) sources/$(p).cpp -o build/$(p)
	@printf "eolymp %06d - %s\n" "$(p)" "$$(date '+%d/%m/%y/%H/%M')" >> list.txt

clean:
	rm -rf build sources
	mkdir -p build sources

run:
	@if [ -z "$(p)" ]; then \
		echo "usage: make run p=8000"; \
		exit 1; \
	fi
	./build/$(p)

runall: all
	./build/$(p)

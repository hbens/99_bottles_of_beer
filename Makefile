run: 99_bottles_of_beer
	./$<

99_bottles_of_beer: 99_bottles_of_beer.cpp Makefile
	g++ -std=c++23 $< -w -o $@ -O2

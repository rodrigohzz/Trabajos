
bin/bomb : src/bomb.cpp include/*
	c++ src/bomb.cpp -o bin/bomb -lcurses -I include

run : bin/bomb
	./bin/bomb
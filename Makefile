# CXX = x86_64-w64-mingw32-g++  #Windows
# CXX = c++


# br : compilar ejecutar

# compilar : src/main.cpp
# 	$(CXX) src/main.cpp -o bin/mascotas -I include

# ejecutar : bin/mascotas
# 	./bin/mascotas

# clean : bin/mascotas
# 	rm bin/mascotas

bin/cow : src/bomb.cpp include/*
	c++ src/.cpp -o bin/bomb -lcurses -I include

run : bin/bomb
	./bin/bomb
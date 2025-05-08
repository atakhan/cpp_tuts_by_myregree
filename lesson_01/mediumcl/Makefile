LFLAG = -Llibs -lmathlib
T = tosti
K = kawo

All: mathlib main

mathlib:
	g++ -c mathlib.cc
	ar rcs ./libs/libmathlib.a mathlib.o 

clean:
	rm -rf *.o *.a ./libs/*.a ./libs/*.o $(K) $(T)

main:
	g++ main.cc $(LFLAG) -o $(K)

test: mathlib
	g++ test.cc $(LFLAG) -o $(T)
	./$(T)
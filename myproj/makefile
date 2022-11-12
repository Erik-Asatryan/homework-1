
all:  link
mDir:
	mkdir -p bin obj lib
	echo "Create: bin , obj , lib"
obj/encoder.o:mDir
	g++ -c -fPIC src/encoder.cpp -I inc -o obj/encoder.o
	g++ -c -fPIC src/decoder.cpp -I inc -o obj/decoder.o


obj/decoder.o:mDir
	g++ -c -fPIC src/encoder.cpp -I inc -o obj/encoder.o
	g++ -c -fPIC src/decoder.cpp -I inc -o obj/decoder.o
lib/encoder.so: yobj/encoder.o obj/decoder.o 
	gcc -shared -fPIC obj/encoder.o -o lib/libencoder.so
	gcc -shared -fPIC obj/decoder.o -o lib/libdecoder.so

lib/decoder.so: obj/decoder.o obj/encoder.o 
	gcc -shared -fPIC obj/encoder.o -o lib/libencoder.so
	gcc -shared -fPIC obj/decoder.o -o lib/libdecoder.so
link: lib/encoder.so
	g++ src/main.cpp -L lib/ -I inc/ -lencoder -ldecoder  -o bin/encoder
	@LD_LIBRARY_PATH=$LD_LIBRARY_PATH:`pwd`/lib ./bin/encoder

link: lib/decoder.so
	g++ src/main.cpp -L lib/ -I inc/ -lencoder -ldecoder  -o bin/decoder
	@LD_LIBRARY_PATH=$LD_LIBRARY_PATH:`pwd`/lib ./bin/decoder
clear:
	rm -rf bin obj lib
	

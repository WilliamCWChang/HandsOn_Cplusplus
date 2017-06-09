all: libxxx.so testlibxxx.out

libxxx.so:
	    g++ -shared -fPIC -o libxxx.so xxx.cpp
		    
testlibxxx.out:
	    g++ -o testlibxxx.out testlibxxx.cpp libxxx.so
		    
clean:
	    rm -rf *.so *.out

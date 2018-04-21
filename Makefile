all:
	g++ cepoDeMadeira.cpp -o cepoDeMadeira -lGL -lGLU -lglut -lopenal -lalut -fpermissive -w
clean:
	rm cepoDeMadeira
main: main.c
	cc $< -o $@
	./main

clean:
	rm -f main

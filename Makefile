compile:
	gcc -Wall main.c global.h preprocessor.c postprocessor.c preprocessor.h filearray.h filearray.c scanner.h lex.yy.c -lfl -o scanner

clean:
	rm -rf scanner
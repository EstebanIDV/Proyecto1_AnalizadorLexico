compile:
	gcc -Wall symbols_table.h symbols_table.c definetable.c definetable.h main.c global.h preprocessor.c preprocessor.h filearray.h filearray.c  lex.yy.c parser.tab.c parser.tab.h scanner.h -lfl -o scanner

clean:
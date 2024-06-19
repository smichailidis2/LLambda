default: cgen.c Lambda_analyzer.y My_lexer.l;
	@bison -d -v -r all Lambda_analyzer.y
	@flex My_lexer.l
	@gcc -o MyCompiler lex.yy.c Lambda_analyzer.tab.c cgen.c -lfl



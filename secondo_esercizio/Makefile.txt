all: sub-make quiz    

sub-make: 
	make -C math_api
    
quiz : quiz.o 
	gcc -o quiz -L./math_api -libmath quiz.o

quiz.o : quiz.c 
	gcc -c -I./math_api -o quiz.o quiz.c

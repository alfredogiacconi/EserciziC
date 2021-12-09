all: sub-make quiz    

sub-make: 
	make -C math_api
    
quiz : quiz.o 
	gcc -o quiz -L./math_api -libmath quiz.o

quiz.o : test_driver.c 
	gcc -c -I./math_api -o test_driver.o test_driver.c

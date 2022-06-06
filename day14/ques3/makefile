all: myapp

myapp:  main.o hello.o add.o
     gcc -Wall -o myapp main.o hello.o add.o
     
main.o:main.c
     gcc -c -Wall main.c
     
hello.o:hello.c
     gcc -c -Wall hello.c
   
add.o:add.c
     gcc -c -Wall add.c
     
     clean:
      rm main.o
      rm hello.o
      rm add.o
                 

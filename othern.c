 2010  vim b.c 
 2011  vim ../.vimrc 
 2012  vim b.c
 2013  mv b.c main.c

 2017  vim main.c hello.c
 2018  cc main.c hello.c
 2019  ./a.out

 2024  ctags *.c
 
#function
      hello.h
        #include <stdio.h>
        void say_three_hi();

      main.c
        #include <stdio.h>
 
        int main(int argc, char const* argv[])
        {      
            say_three_hi();    
            return 0;
        }
  
      hello.c
        #include "hello.h"
        void say_three_hi()
            {
                int i;
                for (i = 0; i < 3; i++)
                {
                    printf("hello everyone!\n");
                }
            }
 
      

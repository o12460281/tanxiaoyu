
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
 
      
#Conclude:
    1 shell:
      路径：绝对路径 remove file of /cc from /bb in /aa
                  :rm /home/aa/cc/ aa
            相对路径 
                  :rm ../cc/ aa
      权限：ll -l aa 文件  "owner group other"
            ll -ld aa 文件夹
            chmod
            rmdir bb  ;删除一个空文件
            rm -rf cc ;删除一个非空文件


      cd /etc/apt/
      vim sources.list
      dpkg -L tree
      install soft
      sudo apt-get remove --purge softname    ；卸载
     
    2 vim (hacker editor)
      特点：带模式，通过模式转换可以更方便到进行操作
      vim tutor
      cp:<file>===>scp -r peter@192.168.1.?:~/vim .
     
     leave out some note:
      vim b.c 
      vim ../.vimrc 
      vim b.c
      mv b.c main.c

      vim main.c hello.c
      cc main.c hello.c
      ./a.out
      ctags *.c

      通道接口：?
      man 3 printf
      shift k

      open more window
      vnew(new) (tab)<file>

   

    3 git
        前面那些note基本上都是git笔记
        learn by mplayer git.mov

        A funuy solf:gource:  cd in dir then gource   

        make backup of master "tmp" in order to reback priviou date

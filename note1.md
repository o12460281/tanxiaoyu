#this is note of 5 day
##No.1  peter talk the development of langridge 
      1 计算机语言
      2 汇编语言
      3 C语言
      4 高级语言

##No.2  bianyi in vim
     1.gcc -wall b.c

     2.:w   :sh    "you have openned a bash"
       exit  ctrl+d

     3. 撤销操作
        在普通模式下按    u ；是撤销上一步到操作
                          ctrl+r   ；回到上一步撤销到地方

     4.gcc -S b.c
   
##No.3 about return ?
        use echo $? 
      {
            if i = 1;
            if (i != 1 );
             { 
                  return 1;
                 
             }
                  return 0;     
      }
           0 success,1 fail
        好书 " k&R  c progaming "  
        http://tldp.org/LDP/Bash-Beginners-Guide/html/

##No.4    重建一个Repository    
            1 首先在github网站上新建一个项目repository

            2 项目到name必须与本地到工程名相同

            3  cd txy-projec
	       ls
	 1036  git init
	 1604  ls -a
	 1605  git add hello.c
	 1606  git commit -a -m "first"
	 1607  tig
	 1608  git push   ;到了这一步还是不能push的
	 1609  git remote add origin git@github.com:july-12/txy-project.git
	 1610  git push origin master  然后重建一个Repository就完成了
            

##this is note of 3 day

    #N.o 1
       cp h.c h1.c  ;备份
       diff -u h.c h1.c  ;查看文件之间到差别 -u是一个参数
       diff -u h.c h1.c >h.diff ;">"输出内容保存到h.diff

       patch h.c <h.diff  ;合并（打补丁到意思）
       patch -R h.c <h.diff   ；-R？

    #N.o 2               ：  主要就是能让我们在github上做笔记 下面是就是设置
       ## git basics     

      1. first create a dir    ：在根目录下创建一个目录 叫ggg
      
        mkdir ggg

      2. now you MUST cd to this dir    ： 进到该目录下

        cd ggg

      3. initializing this git dir    ：出现.git目录
              git init

        now you can see a `.git` in this dir
        ls -a

      4. now create a file     ：创建一个文件

        vim hello.c
      5. let git knows about this file

        git add hello.c

      6. create the first version   ：跟踪hello，c文件  这一步常常少打里“commit”

        git commit -a -m "my first version"

    N.o 3
             How to use markdown
                  ## title
               this is my code

                  main()
               {
                     printf(...);
               }
      and we can how to open code by use firefox
         markdown mymfile.md > myfile.html

      git remote add origin git@github.com:july-12/tanxiaoyu.git
              firefox myfile.html
   

##this is note of 4 day

             1.how to open anther lable(标签)
                 shift+ctrl+T           ;very usefull for making note and other action

             2.about ".note.md swap"unuse dir of runing(关于对产生swap垃圾文件到操作)
               直接删除即可  rm -rf ---swap

             3.进入可视行模式
               shift+大写到v（注意必须在普通模式下进去）
               退出到时候在按一次shift+大写到v就行里
               在可视行里我们可进行如下操作：
               1 选中 按d 可删除内容
               2 选中内容粘贴  选中内容在按y 需粘贴到地方按p
               3 可进行缩进操作   选中内容后shift+“>”往右走就按<
          
             4 "vim .vimrc"可设置一些有用功能操作

                 set number
                 set hidden   ”不用保存就能bn bp bd“

               "vim .gitconfig"  
		[user]
		name = Peter Wang
		email = happypeter1983@gmail.com
		[core]
		editor = vim
		[alias]
		    ci = commit -a -v
		    co = checkout
		    st = status
		    br = branch
		    throw = reset --hard HEAD
		    throwh = reset --hard HEAD^
		[color]
		    ui = true

		[commit]
		template = ./.commit-template
		[push]
		default = current

             5 multiple files
                 :ls #see buffers
                 :bn # go to next buffer
                 :bp # go to previous buffer
                 :bd # delete a buffer

             6 小问题：两个不同路径下到文件内容拷贝
                 先要确定拷贝到的目录下到路径 pwd 
                 然后在打开内容目录下 :e ~/home/my-note/../b.c
                 then you can make No5 point
             7 nod skill:less modify different you can 
                     git diff

     No.4
		  Global setup:

	 Set up git
	  git config --global user.name "Your Name"
	  git config --global user.email 370403679@163.com
		

	Next steps:

	  mkdir sa
	  cd sa
	  git init
	  touch README
	  git add README
	  git commit -m 'first commit'
	  git remote add origin git@github.com:july-12/sa.git
	  git push -u origin master
	      

	Existing Git Repo?

	  cd existing_git_repo
	  git remote add origin git@github.com:july-12/sa.git
	  git push -u origin master
         
##this is note of 5 day

#No.1  peter talk the development of langridge 
      1 计算机语言
      2 汇编语言
      3 C语言
      4 高级语言

#No.2  编译 in vim
     1.gcc -wall b.c

     2.:w   :sh    "you have openned a bash"
       exit  ctrl+d

     3. 撤销操作
        在普通模式下按    u ；是撤销上一步到操作
                          ctrl+r   ；回到上一步撤销到地方

     4.gcc -S b.c
   
#No.3 about return ?
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
                      

#No.4      
    How to use Git make note
   
    first:    Register account:o12460281
 
    second:   Add ssh key
             1 open Account Settings >>click SSH Pulic keys
             2 open terminal (终端)
                cd
                pwd
                mv .ssh/akaedu-ssh    :don‘t do this way if no -ssh
                ssh-keygen
                cd .ssh
                ls
                vim id_rsa.pub
              3 you should copy code to web. now you can add keys
                    :why add key
                    :beauce you can use git to make note on website
                     you know Git is a very good for managing you note
              4 you can skin /tanyu/note.md to git push
                 git ... “your name” 
                 git ... “..@...com” 
                 mkdir <file> 
                 cd <file>
                 git init
                 vim a.c
                 git add a.c
                 git remote add origin git@github.com:o12460281/<file>.git
                 git push -u origin master
                 git commit -a -m "first"
                 tig
                 git push
               OK now you have seccessed make note to github
                
                
            重建一个Repository    
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
#No.5    1  在根目录下vim .gitconfig中添加
               [core] 
                   editor =  vim      
           2    允许做多行操作
                在note目录下作笔记时修改vim 中到文档后
                git commit -a   ;  是为了能够更清晰到给所修改内容到描述
                                   也就是“message”
            注意*：不允许在git到项目里在建有文件夹  
 
##this is my note of 6 day

#No.1     we learn how to 使用下载安装插件 snipmate
            fine this plugins(插件)	in google or baidu
            download  it
       cope unzip snipMate.zip -d ~/.vim (if no unzip you should sodu)                        cd
	      ls
	      cd .vim/
	      ls       ;you will see that snipmate file,and now you can use it
	      cd
	      vim a.c
           
          # added for test
            snippet dog<tab>
            tab     I love dogs   "you must  tab 补齐"
           now you can try to use "dog"    funny  oha!

                 snippet dog
                         I ${1:love} dogs
	        snippet inc
	        	#include <${1:stdio}.h>${2}  ;you can try 光标到变幻方便修改字符
      
#No.2     say "hello"  10 times with vim skills
          yy-----to cope current line
          dd-----to cut the current line
          p------to paste

#No.3      vim .bashrc
           use aaa replace sudo apt-get install
           alias  install="sudo apt-get install" ;wq 
           source .bashrc ;重读文件  

#No.4     install two soflword
          fortune    cowsay
          fortune | cowsay
          funny! ya hah: (mkdir aaa,cd aaa,touch I love yz,ls |cowsay)
#No.5    delete a file we don‘t want to get
          git rm  trash
          git commit -a
          git push             

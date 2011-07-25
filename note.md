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
         
#this is note of 5 day

    No.1  peter talk the development of langridge 
      1 计算机语言
      2 汇编语言
      3 C语言
      4 高级语言

    No.2  编译 in vim
     1.gcc -wall b.c

     2.:w   :sh    "you have openned a bash"
       exit  ctrl+d

     3. 撤销操作
        在普通模式下按    u ；是撤销上一步到操作
                          ctrl+r   ；回到上一步撤销到地方

     4.gcc -S b.c
   
    No.3 about return ?
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
                      

    No.4      
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
              git init
              ls -a
              git add hello.c
              git commit -a -m "first"
              tig
              git push   ;到了这一步还是不能push的
              git remote add origin git@github.com:july-12/txy-project.git
              git push origin master  然后重建一个Repository就完成了

    No.5    1  在根目录下vim .gitconfig中添加
               [core] 
                   editor =  vim      
           2    允许做多行操作
                在note目录下作笔记时修改vim 中到文档后
                git commit -a   ;  是为了能够更清晰到给所修改内容到描述
                                   也就是“message”
            注意*：不允许在git到项目里在建有文件夹  
 
#this is my note of 6 day

    No.1     we learn how to 使用下载安装插件 snipmate
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
      
    No.2     say "hello"  10 times with vim skills
          yy-----to cope current line
          dd-----to cut the current line
          p------to paste

    No.3      vim .bashrc
           use aaa replace sudo apt-get install
           alias  install="sudo apt-get install" ;wq 
           source .bashrc ;重读文件  

    No.4     install two soflword
          fortune    cowsay
          fortune | cowsay
          funny! ya hah: (mkdir aaa,cd aaa,touch I love yz,ls |cowsay)
    No.5    delete a file we don‘t want to get
          git rm  trash
          git commit -a
          git push       

          
#this is my note of 7 day
    No.1 coding style
         indent:
               1 general don‘t use tab 
               2 general indent 4 writespase
               3 don‘t mis <tab> and writespase
         anto indent：
               1 set autoindent      
               2 小写 o              ;line feed(换行)
               3 open vim .vimrc 
 		 set expandtab
		 set tabstop=4       ;tab will can use as spase
		 set shiftwidth=4
                " can  know further vim seting. link to
		  https://github.com/happypeter/peter-vim/blob/master/vimrc"
               4 insert:
        		 ctrl-t
                 ctrl-d             ;auto对齐 系统自带到
	           5 vim:
 		         :h @  --> 
		         :h i_CTRL-t(<tab>swich T)
                  exit::bd
               6 i_CTRL_X_K
                //// set dictionary+=~/.vim/dict/simple
	        	 i_CTRL_X_F
                //// set dictionary-=/usr/share/dict/words
                //// dictionary+=/usr/share/dict/words
	
               Have Peter‘s Conf:	
			cd  #goto your $HOME
			git clone git://github.com/happypeter/peter-vim.git
			rm -rf .vim # rm the old .vim
			mv peter-vim .vim #have the right name
			cd .vim/
			vim README # check the readme to know more

    No.2    about comunication between PC
            1 install openssk-server
            服务器 ,ip adress, 客户端服务
            2 ssh-chont
            3 ssh peter@192.168.1.17
            4 password:anyone password in server 
            5 ctrl-d    ;exit 客户和服务端都能按

            6 sudo service ssh stop   ;sudo !!(sudo之后重复上一个命令)
            7 sudo service ssh start  ;服务端关闭connection
               
            8 copy something from service
               scp peter@192.168.1.17:~/hihihi .   ;"s"mean pass ssh this gate
            9 service ssh status     ;查看ssh状态是关闭还是打

#P. M  note   
    No.1          
              other setting  in  vim .vimrc:    usefull

              man ,ss :set spell<cr>       :    been on eror
              
              map <tab> :bn<cr>            :    use<tab>replaece bn

              imap jj <esc>          :jump to Normal Mode from Insert

              map ,, :q<cr>
                                
              ctrl-n  补齐 in fun 

    No.2      
              intall ctags
              ctags hello.c
              ls
              vim hello.c
              ctrl-]          ; 跳转到函数定义的地方
              ctrl-t          ；reture
      //Next times use tags you should remove priviou tags then ctags hello.c
  
    No.3   
             内容放在othern.c里面

#this is my note of 8 day
## A.M
    No.1
          git revert
            V1:the initinal commit

            V2:now touch a trash
               git add trash
               git commit -a -m"test revert"
               git push

            V3.1:git throw
                 git commit -a
                 git push          ;==>rejeck

            V3.2:git pull (origin master)  ;get trash from gitbub.com
                 git revert HEAD
                 tig               ;you will find Revert "test revert"
                 git push          ;==>succeed
            conclude:a trash file push on net just can use git revert
                     don‘t use git throw
    No.2
          定位历史
            git checkout 75ef11de..(版本号)   ;get back a file state
            git checkout master               ;return
            git branch    ;you will find
                           * master
                             one_file_com
                               two_file_com
            git checkout 75ef11de.. -b one_file_state ;creat
            git br -D one_file_state                  ;delate
            git checkout master>one_file_state>branch>master
          
                          git checkout master          
            ____________ <==========
            |   _____   |
            |  |_____|  |
            |    _____  |   
            |  |_____|  | by git checkout 75ef11ed.. -b one_file_state
            |   _____   |
            |  |_____|  | just git checkout one_file_state
            |    _____  | ===========>          
            |  |_____|  |                 
            |           |      __________
            |   _____   |     | ______  |        
            |  |_____|  |     || ______||       
            |           |     |         |        
            |___________|     | ________|                   
                      ========>
                      git checkout <版本号>            
     
          onepoint:cp file from peter PC
               scp peter@192.168.1.20:~/git.mov .
               install mplayer
               mplayer git.mov 

## P.M

    No.1   git add .

    No.2   git commit -a -v
           test "-v" is a nice have      
           vim .gitconfig
            st = status
            br = branch
            ci = commit -a -v
    
    No.3   which ls(git..)   ;where are you?

           locate vimrc   ;匹配文件名查找，但只能找到老文件，对新文件找不到
                           在自己到数据库里查找，而不是对整个硬盘到查找，一天
                           更新一次吧
           sudo updatedb      ；手动更新

           find <file>           ;显示文件夹中到所有文件
           find <file>|grep git  ;找出file中git这个文件  “grep字符匹配”
           "|":管道符前 “find file”到输出作为“grep git”到输入

            ps aux              :report a snapshot all of the current processes.
            ps aux | grep firefox ;report firefox processes
            kill 2003             ;close firefox processes
            kill -9 2003          ;force close firefox processes

            ls|grep tig           ;筛选
            gitk

    No.4    about xxx
            install two 包
            make  必须在含有makefile的文件下执行
                  增加一个二进制文件
            sudo make install
            xxx "word"
        
        
#Conclude:
    1 bash就是shell:
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

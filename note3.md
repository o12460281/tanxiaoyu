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
                 set dictionary+=~/.vim/dict/simple
	        	 i_CTRL_X_F
                 set dictionary-=/usr/share/dict/words
                 dictionary+=/usr/share/dict/words
	
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

           find xxx           ;显示文件夹中到所有文件
           find xxx|grep git  ;找出xxx文件夹中git这个文件  “grep字符匹配”
           "|":管道符前 “find xxx”到输出作为“grep git”到输入

            ps aux              :report a snapshot all of the current processes.
            ps aux | grep firefox ;report firefox processes
            kill 2003             ;close firefox processes
            kill -9 2003          ;force close firefox processes

            ls|grep tig           ;筛选

    No.4    about xxx
            make  必须在含有makefile的文件下执行
                  增加一个二进制文件
            sudo make install
            xxx "word"
                  

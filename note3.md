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
              将main函数和子函数 分开写下：
              没掌握好 要补上


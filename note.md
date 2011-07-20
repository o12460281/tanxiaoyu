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
               2 选中内容粘贴  选中内容在需粘贴到地方按p
               3 可进行缩进操作   选中内容后shift+“>”往右走就按<
          
             4 "vim .vimrc"可设置一些有用功能操作

                 set number
                 set hidden   ”不用保存就能bn bp bd“


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
      

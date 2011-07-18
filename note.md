##this is note of 3 day

    #N.o 1
       cp h.c h1.c  ;备份
       diff -u h.c h1.c  ;查看文件之间到差别 -u是一个参数
       diff -u h.c h1.c >h.diff ;">"输出内容保存到h.diff

       patch h.c <h.diff  ;合并（打补丁到意思）
       patch -R h.c <h.diff   ；-R？

    #N.o 2
       ## git basics

      1. first create a dir
       mkdir ggg

      2. now you MUST cd to this dir

        cd ggg

      3. initializing this git dir
              git init

    now you can see a `.git` in this dir
        ls -a

      4. now create a file

        vim hello.c
      5. let git knows about this file

        git add hello.c

      6. create the first version
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



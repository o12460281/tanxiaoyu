#How to use Git make note
   
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
                
                
          

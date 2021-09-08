#!/bin/sh

touch .gitignore | 
echo "
.DS_Store
mywork.c
._.DS_Store
*.o
*.out
*.test" > .gitignore | chmod +x gitignore.sh


#touch git_ignore.sh | echo "touch .gitignore \x7c \necho \x22\n.DS_Store\nmywork.c\n._.DS_Store\n*.o\n*.out\n*.test\x22 \x3e .gitignore \x7c chmod +x gitignore.sh" > git_ignore.sh | chmod +x git_ignore.sh

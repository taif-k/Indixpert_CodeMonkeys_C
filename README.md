
# Task  
1. Create a Repository  
2. Create Branch  
   A. development  
   B. Your Name  
3. Clone Branch(Your Name) locally  
4. Write a C program  
5. Push changes to Github  


# Git Commands  
1. Clone  
   A. https  

      git clone "repo url" or git clone -b branch_name "repo url"  

   B. ssh 
      Generate key(skip if already done)  

      ssh-keygen -t ras -b 4096 -c "email"  
      Add private key to agent  
        eval "$(ssh-agent -s)"  
        ssh-add ~/.ssh/id_rsa  
      copy public key (then add to github)  
        cat ~/.ssh/id_rsa.pub  

2.  Push (Local changes to Github)  

    git add . (for staging all changes) OR git add filename.extension(for particular file)  
    git commit -m "commit message"  
    git push -u origin branch_name OR git push  

3. Pull(Github to Local)  

   git pull remote_name(origin) branch_name  

4. Create Branch  

   git branch branch_name  

5. Change Branch  

   git checkout branch_name (This will take to the particular branch)  

6. Delete Branch  
   First, locally then remotely  

   Locally (only delete if fully merged)  
     git branch -d branch_name  
   Locally (Force delete - If not merged)  
     git branch -D branch_name  
    
   Remotely  
   git push origin --delete branch_name 

           

  

      


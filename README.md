
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

   B. SSh 
      Generate key(skip if already done)  

      ssh-keygen -t ras -b 4096 -c "email"  
      Start Agent(If not started)   
        eval "$(ssh-agent -s)"
      Add private key to agent  
        ssh-add ~/.ssh/id_rsa 
        
      copy public key (then add to github)  
        cat ~/.ssh/id_rsa.pub  

2.  Push (Local changes to Github)  

    A. If working on different path and adding from different folder.  
       working on ( PS D:\Repositories\Indixpert_CodeMonkeys_C\taif\Loop\innerFolder> )   
       Adding from ( Indixpert -> Tasks(folder) which has four.c and five.c )  

       git add .. \ .. \ ..\Tasks\four.c   .. \ .. \ ..\Tasks\five.c 
           

    B. Working and Adding from same  

       git add . (for staging all changes) OR git add filename.extension(for particular file)  
       git commit -m "commit message"  
       git push -u origin branch_name OR git push  



3. Pull(Github to Local)  

   git pull remote_name(origin) branch_name  

4. Create Branch  

   git branch branch_name  

5. Change Branch  
   
   (If there are commits either Commit them, stash them or discard them, forcefully switching it will overwrite them)  
    
   To stash changes for later use:  
   1. git stash  
   2. git checkout branch_name  
   3. come back to previous working branch  
      git stash apply  

   git checkout branch_name (This will take to the particular branch)  
   

6. Delete Branch  
   First, locally then remotely  

   Locally (only delete if fully merged)  
     git branch -d branch_name  
   Locally (Force delete - If not merged)  
     git branch -D branch_name  
    
   Remotely  
   git push origin --delete branch_name 

 7. Remove files  
    A. If working and removing from different folders. [Multiple files]  

       git rm path\to\file path\to\file        (Navigate path accordingly where files are present)  

    B. Working and Removing from same folders.  

       git rm .\file_name file_name  

    C. want to remove all files inside folder but not the folder  

       git rm -r --cached ..\ [folder_name] \ *    (This only removes from git staging and not working dir)    
       git rm ..\ [folder_name] \ *                (Navigate path accordingly) (removes from both )  

    D. If a file is in staged and you want to delete do it forecefully    

       git rm .\file_name -f                        (Navigate path accordingly)  (Will remove even if staged also)  

    E. If a file is already pushed and want to delete  
       
       git rm .\file_name                            (Wont remove if in staged )  

 8. Remove folders  

    git rm -r folder\path  

 9.  Unstage Changes  

     git reset file_name    ( Navigate path accordingly )

 10. See comparsion of branches  

     git diff branch_one  branch_two    

 11. See branches  

     A. If branch name is same as file/folder name   ( use -- to separate the revision/branch names from file paths )  

     git diff branch_one..development                         (here taif is folder_name as well as branch_one also)   

     B. If not same  
         If development is base brach of taif
         branch_one -> taif  
         branch_two -> development (taif is created from development)  

     git diff branch_one  branch_two             (Red will show that is not present in branch_one, green shows that its present)

     or vice -versa  

     git diff branch_two  branch_one              (Green shows that it will be added in development from taif)    



  

      


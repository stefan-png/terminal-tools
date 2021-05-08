# terminal-tools
 -  an assortment of tools I made for the macOS terminal

----------------------------

### math tool
## Brief
 - Do integer math from the terminal
 - Specify any amount of integers and one operation, and it will solve it for you!

## Examples
1. `% math -add 2 12` returns `14`  
2. `% math 10.928374 -sub 3.28374` returns `7`
3. `% math -div 16 -2` returns `-8`
4. `% math 2 2 2 2 2 2 2 2 2 2 2 2 -mult` returns `4096`
5. `% math -help` displays valid usage

---------------------------
### rmpref tool
## Brief
 - Remove a prefix from all files in a directory

## Examples
Given a directory 
```
myDir
+--MyFile1.txt
+--MyFile2.txt
+--MyFileCool3.txt
```
```
% cd myDir
% rmpref MyFile
```
Outputs:
```
myDir
+--1.txt
+--2.txt
+--Cool3.txt
```

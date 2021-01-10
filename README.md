# terminalmath

Do integer math from within the MacOS terminal!

## Setup
1. Run the Makefile using:  
``make /usr/local/bin/math``  

## Examples
1. `math -add 2 12` returns `14`  
2. `math 10.928374 -sub 3.28374` returns `7`
2. `math -div 16 -2` returns `-8`
3. `math 2 2 2 2 2 2 2 2 2 2 2 2 -mult` returns `4096`

### Help
Type `math -help` for help:  

> Specify any amount of integers as arguments, and one operation argument. If more than one operation is specified, the first one will be chosen.
eg. math -add 5 4 20
>   
> Operation Arguments:
>   
> -add	adds all the numbers together.  
> -sub	subtracts all the numbers from first number.  
> -mult	multiplies all the numbers together.  
> -div	divides all the numbers from first number.  

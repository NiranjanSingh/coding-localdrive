/* This is a tricky program writen by trudy summer.. ur fb frnd... 
Now here is the explanation first in main by default 1 and 0 is going ... then its passing the value 1 + 48 = 49 in the function ou which is infact printing that value
but how??? yeahh the question seems to be difficult but not now.. here's the explanation acutally, the write function takes the first argument as where to write 
here  the value is 1 and thats for stdout , now the second argument is address of t from where we are taking out the value .... third argument is 1 so its number of bytes that has to be written so its again 1 so 1 byte every time... 

How the value of i is incremented????? In next line i.e in if statement , we are passing incremented value of i and again calling ou() with value 10 that's for newline
u can use anything... and again we are calling main and thus recursively we are printing the  pattern... 
*/
 

#include<stdio.h>  
  
 ou(t) { write(1,&t,1);}  
 main(i,j) {  
 // system("echo hello");  
    for(j=1;j<=i;ou(j+++48));  
    if(i<5 && main(++i,ou(10)));  
    return 0;  
 } 

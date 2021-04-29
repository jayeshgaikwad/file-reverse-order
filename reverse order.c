#include<stdio.h>
#include<conio.h>
main()
{
	//1. declare the FILE pointer
    FILE *fp;
    char ch;
    int i;
    
    //2. OPEN - Read, write and Append
    fp = fopen("newfile.txt","r");
    
    //3. READ content from the file
    for(i=0;i<5;i++)
    {
    	ch = getc(fp);
    	printf("%c",ch);
	}
    
    //4. WRITE content to the file
    
    //5. APPEND content to the file
	
	//6. CLOSE the pointer
	
}
    


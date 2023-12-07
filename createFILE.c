#include<stdio.h>
#include<stdlib.h>
main()
{
    FILE *fp;
    fp=fopen("text.txt","a");
// inplace of 'r' we can write a,a+,w,w+
// 'r' is for search , vo chk krega ki file exist krti h ya nhi
if(fp==NULL)
printf("file doesn't exist");
else
printf("file exists\n ");
printf("my name is shivansh",fp);
fprintf(fp,"%s my name is ", "shivansh\n");
// 'f' lgane se jo bhi data print krvaege , vo folder jo bna h usme print hoga 
fputs("shiv",fp);
fclose(fp);
// task 1 with 'a'
fopen("test.txt","a");
fpts("SK1\n",fp);
fclose(fp);
// task 2 with 'a+'
fopen("test.txt","a+");
fpts("SK2\n",fp);
fclose(fp);
// task 3 with 'w'
fopen("test.txt","w");
fpts("SK3\n",fp);
fclose(fp);
// task 4 with 'w+'
fopen("test.txt","w+");
fpts("SK4\n",fp);
fclose(fp);

}
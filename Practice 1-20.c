/*＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊
K.R c
练习1-20 编写程序detab,将输入中的制表符替换成适当数目的空格，使空格充满到下一个
制表符终止位的地方。假设制表符终止位的位置是固定的，比如每隔n列就会出现一个制表符
终止位。n应该作为变量还是符号常量呢？
＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊*/

#include <stdio.h>

int main(){
  int c;
  int i;
  while((c = getchar()) != EOF)
  {
      if(c == '\t')
      {
        //替换成空格
        i = 0;
        while(i>0){
          putchar(' ');
          --i;
        }
      }else
        putchar(c);
  }
  return 0;
}

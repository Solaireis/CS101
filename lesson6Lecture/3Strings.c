#include <stdio.h>
#include <string.h>

void do_x(char word[]){
    word[0] = 'e';
}
int main(void){
    // the character string must end with \0 or 0 else it would make an error
    char word[6] = {'a','p','p','l','e','\0'}; //long way
    printf("%s\n",word);
    // lets see C nice way of doing this 
    char apple[6]= "apple"; // 0 would be automatically added at the end of this
    printf("%s\n",apple);
    do_x(word);
    printf("%s\n",word);
    printf("length of word %lu\n", strlen(apple)); //unsigned long value (it doesnt count the end of line character which is 0.)

}
#include <stdio.h>
#include <string.h>

void get_defanged(char ipaddr[]) {   
    int size_of_array = strlen(ipaddr);
    char answer[10000];
    int count = 0;
    //printf("Size of Array:%d\n",size_of_array);
    for (int i = 0; i<size_of_array;i++){
        if(ipaddr[i]=='.' ) {
            answer[count] = '[';
            count += 1;
            answer[count] = '.';
            count += 1; 
            answer[count] = ']';
            count += 1;
        } else {
            answer[count]=ipaddr[i];
            count++;
        }
    }
    for (int i=0; i<count;i++){
        ipaddr[i] = answer[i];
    }
    //printf("%s\n",answer);
    
}

int main(void) {
    int n = 1;
    {
        char ipaddr[18] = "192.168.1.5";
        printf("Test %d\n", n++);
        get_defanged(ipaddr);
        printf("Expected:192[.]168[.]1[.]5\n");
        printf("Actual  :%s\n\n", ipaddr);
    }
    {
        char ipaddr[20] = "74.125.68.104";
        printf("Test %d\n", n++);
        get_defanged(ipaddr);
        printf("Expected:74[.]125[.]68[.]104\n");
        printf("Actual  :%s\n\n", ipaddr);
    }
    {
        char ipaddr[22] = "206.205.204.203";
        printf("Test %d\n", n++);
        get_defanged(ipaddr);
        printf("Expected:206[.]205[.]204[.]203\n");
        printf("Actual  :%s\n\n", ipaddr);
    }
}
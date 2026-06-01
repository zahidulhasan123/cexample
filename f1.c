#include <stdio.h>
int main() {
    char gender;
    int age;

    scanf("%d %c",&age, &gender);

    if(gender=='M'){
        if(age<21)
            printf("Bhai apnar biyer boyos hoynai");
        else
            printf("Ji bhai biyer boyos hoise");
    }
    else if(gender=='F'){
        if(age<18)
            printf("Bon apnar biyer boyos hoynai");
        else
            printf("Ji bon biyer boyos hoise");
    }
    
    return 0;
}
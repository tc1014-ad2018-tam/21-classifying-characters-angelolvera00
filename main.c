/*This program was created for the purpose of asking the user to enter a string so that it can classify the characters
 *entered.
 *
 * Author: Angel Daniel Olvera Perales
 * Date: October 18
 * email:angelolvera00@gmail.com
 */
#include <stdio.h>

int main() {
    //Variables are declared
    char string[10000];
    int i=0;
//The user is asked to enter a string
    printf("Enter a string: \n");
    fgets(string, sizeof(string), stdin);
//Loop that will scan every single character entered by the user and will compare it with the ASCII code,
//where it will check it and assign the character's respective classification: vowel, consonant, space and other special
//characters, like commas.
    while(string[i]!='\n'){
        if((string[i]>64 && string[i]<91) || (string[i]>96 && string[i]<123)){
            if(string[i]==65||string[i]==69||string[i]==73||string[i]==79||string[i]==85||string[i]==97||string[i]==101
            ||string[i]==105||string[i]==111||string[i]==117){
                printf("%c is a vowel\n", string[i]);
            } else{
            printf("%c is a consonant\n", string[i]);
            }
        }
        else if((string[i]>47&&string[i]<58)){
            printf("%c is a digit\n", string[i]);
        }
        else if(string[i]==32){
            printf("' ' is a space\n", string[i]);
        }
        else{
            printf("%c is a special character\n", string[i]);
        }
        //Will keep the loop running.
        i++;
    }
    return 0;
}
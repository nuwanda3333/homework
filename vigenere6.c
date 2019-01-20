

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int shift(char c);

//get two arguments, first is the name of the program, second is the key.
int main(int argc, string argv[])
{
    // only do this if there are 2 commands. otherwise quit program.
    if (argc != 2)
    {
        return 1;
    }
        //prompt user for a message
         string plaintext = get_string("Message: ");
         char cipher[1000];
         printf("ciphertext: ");
        //variables
         string key = argv[1];
         int keylength = strlen(key);
         int textlength = strlen(plaintext);
         int i = 0;
        
        //while iterating over text, also iterate over key and check if they're digits.
            
                for (int k=0; k < textlength; k++)
                 {

                        //if not a letter, then quit the program.
                        if (!isalpha(key[i % keylength]))
                        {
                             return 1; 
                        }
                        
      //if there's a non alphabetic character, print that character and move one character to the right on the plaintext.
                         if (!isalpha(plaintext[k]))
                         {
                           printf("%c", plaintext[k]);
                         }
                        
                        
                                
                            cipher[k] = plaintext[k] + shift(key[i%keylength]);

                        
                             if (isupper(plaintext[k]) &&  cipher[k] > 'Z')
                             {
                                printf("%c", '@' + (cipher[k] - 'Z'));
                             }
                             else if (isupper(plaintext[k]) && cipher[k] <= 'Z')
                            {
                                printf("%c", cipher[k]);
                            }
                            else if (islower(plaintext[k]) && cipher[k] > 'z')
                            {
                            printf("%c", 96 + cipher[k]-'z');
                            }
                            else if (islower(plaintext[k]) && cipher[k] <= 'z')
                            {
                              printf("%c" , cipher[k]);
                            }
                            
                            i++;

                        
                     
             
                  }        
                    
               
                            printf("\n");
           }
       
    
            
            


int shift(char c)
{
     string alphabet ="abcdefghijklmnopqrstuvwxyz";
     int alphabetlength= strlen(alphabet);
    
    if(isupper(c))
    {
        c = tolower(c);
    }
    
     for(int i = 0; i < alphabetlength; i++ ) 
            {
                if(c == alphabet[i])
                {
                    return i;
                }
            }
                    printf("PROBLEM");
                    return 5;
        
}

            
            
        
            
           
             
                  
              
              //TRIES THAT DIDN'T WORK
                  
               /*   for(int n = 0; n < textlength; n++) 
                    {
                         
                       printf("%c", (plaintext[n]+keyvalue));
                      
                      if(n == textlength)
                      {
                          break;
                      }
                                     
                    } 
          
            }
            // iterate through the alphabet and give the realkey values of a=0,                 b=1, c=2, etc.
          
            
            
         }
        
        //Iterate through the plaintext and add the realkey to each character.
             
           
        printf("\n");
    
         
        
        
       
    } */



#include <stdio.h>
#include <stdlib.h>

int main()
{  /* THERE IS A STRING TERMINATOR IN THE END OF THE EVERY STRING
       THE USE OF IT , THAT IT HELPS TO COUNT THE NO. OF BYTES WE NEED FOR STORAGE
       SO ALWAYS ADD ONE MORE TO THE TOTAL NO. OF CHARACTERS IN THE STRING INCLUDING
       THE SPACEBAR ALSO*/
    char name[11] = "MARCO REUS";
    printf("my fav player is %s\n", name);

    /* THE USE OF IS WE CAN THE CHARACTER BY CALLING IT AND CHANGING IT */
    // IN NUMBERING THE FIRST CHARACTER GETS THE NO. 0 AND SECIND GETS NO. 1 AND SO ON

    name[0]='N';
    printf("my fav player is %s\n", name);

    /* NOW TO CHANGE THE CHAR TO OTHER CHAR WE USE strcpy as done below*/
    char player[]= "ronaldo";
    printf("%s is the best player\n",player);

    strcpy(player, "messi");
      printf("%s is the best player\n",player);


    return 0;
}

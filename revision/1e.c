#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a,b,c,d;
    printf("enter characters\n");
	scanf("%c%c%c%c",&a,&b,&c,&d);
    if(a=='b'||b=='b'||c=='b'||d=='b')
	{
		
		if(a=='y'||b=='y'||c=='y'||d=='y') {
			if(a=='t'||b=='t'||c=='t'||d=='t'){
			if(a=='e'||b=='e'||c=='e'||d=='e'){
				printf ("\nword byte can be arranged from these four letters");
				
			}
			else printf("\nword byte cannot be arranged from these four letters");
		}
		else printf("\nword byte cannot be arranged from these four letters");	
		}
		else printf("\nword byte cannot be arranged from these four letters");	

	}

	else printf("\nword byte cannot be arranged from these four letters");	
    return 0;
}
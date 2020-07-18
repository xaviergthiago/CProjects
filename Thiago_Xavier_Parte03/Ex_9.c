#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ori[3][4], mod[3][4];
	int l, c;
	for (l=0; l<3; l++){
		for (c=0; c<4; c++){
			printf ("Digite o valor [%d, %d] ", l+1, c+1);
			scanf ("%d", &ori[l][c]);
			if (ori[l][c]<0)
			mod[l][c]=0;
			else
			mod[l][c]=ori[l][c];	
		}
	}
	
  printf ("\nA matriz original é\n");
  for (l=0; l<3; l++){
		for (c=0; c<4; c++){
			printf ("\t[%d] ", ori[l][c]);
    }
    printf ("\n");
	}

  printf ("\nA matriz modificada é\n");
    for (l=0; l<3; l++){
		for (c=0; c<4; c++){
			printf ("\t[%d] ", mod[l][c]);
		}
    printf ("\n");
  }
	return 0;
}

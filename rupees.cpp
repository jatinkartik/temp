#include <stdio.h>



int main(void) {

	int p, q, r;



	double personsAmount[100];

	int n = 5, i;

	double x, y;

	int coins25, coins50, coins1;





	printf("Enter coins ration as p, q and r: ");

	scanf("\n%d\n%d\n%d", &p, &q, &r);





	printf("Enter number of persons: ");

	scanf("\n%d", &n);



	printf("\n===== Enter amount of each persons =====\n");

	for(i = 0; i < n; i++) {

	  printf("Enter amount of Person (%d): ", (i + 1));

	  scanf("\n%lf", &personsAmount[i]);

	}



	printf("\n\n===== Coins Cout of each Persons as Below =====\n");

	for(i = 0; i < n; i++) {



	  x = personsAmount[i] / (0.25 * p + 0.5 * q + r);



	  coins25 = p * x;

	  coins50 = q * x;

	  coins1 = r * x;



	  printf("\nCoins of Person (%d) as 25 Paisa: %d; 50 Paisa: %d; 1 Rs: %d; Total: %lf", (i + 1), coins25, coins50, coins1, personsAmount[i]);

	}





	return 0;

}

// dýþarýdan çift sayý girildikçe toplama iþlemi yapan,tek sayi girildikçe ise girilen çift sayýlarýn toplamýný gösteren c kodu


#include <stdio.h>

main ()
{
	int sayi=0,toplam=0;
	while (sayi%2==0)
	{
		toplam+=sayi;
		printf("bir sayi girin : ");
		scanf("%d",&sayi);
	}
	printf("döngü sona erdi.");
	printf("toplam=%d",toplam);
	
}




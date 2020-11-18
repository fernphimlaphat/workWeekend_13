#pragma once
#include<stdio.h>

const char* Currency(int i)
{
	const char* currency[] = { "USD","EUR","JPY","GBP","CHF","CNY" };

	return currency[i];

	/*USD ดอลลา 
	EUR ยูโร
	JPY เยน
	GBP ปอนด์
	CHF ฟลังค์
	CNY หยวน*/
}

const double CurrencyChange(int currency,int money)
{
	double change[] = { 30.27 , 35.93 , 0.29 , 40.22 , 33.27 , 4.62 };
	return money / change[currency];
}

void con(int i,double changeMoney,int money)
{
	if (i == 1)
	{
		changeMoney = CurrencyChange(0, money);
		printf("%lf\n", changeMoney);
	}

	if (i == 2)
	{
		changeMoney = CurrencyChange(1, money);
		printf("%lf\n", changeMoney);
	}

	if (i == 3)
	{
		changeMoney = CurrencyChange(2, money);
		printf("%lf\n", changeMoney);
	}

	if (i == 4)
	{
		changeMoney = CurrencyChange(3, money);
		printf("%lf\n", changeMoney);
	}

	if (i == 5)
	{
		changeMoney = CurrencyChange(4, money);
		printf("%lf\n", changeMoney);
	}

}

void DoCurency(int select,double changeMoneytyp,int money)
{
	do
	{
		printf("Select currency\n\n1.%s\n2.%s\n3.%s\n4.%s\n5.%s\n\nSelect : ", Currency(0), Currency(1), Currency(2), Currency(3), Currency(4));
		scanf_s("%d", &select);
		printf("\n");

	} while (select >= 6);
	con(select,changeMoneytyp,money);
}

void DoCurency_2(int select, double changeMoneytyp, int money)
{
	do
	{
		printf("Select currency\n\n1.%s\n2.%s\n3.%s\n4.%s\n5.%s\n\nSelect : ", Currency(0), Currency(1), Currency(2), Currency(3), Currency(4));
		scanf_s("%d", &select);
		printf("\n");

	} while (select <= 0);
	con(select, changeMoneytyp, money);
}

void main_1()
{
	struct information
	{
		int money;
		int select;
		double changeMoneytyp;
		int Try;
		int Changemoney;

	}User;

	do
	{
		printf("Input money : ");
		scanf_s("%d", &User.money);
		printf("\n");


	} while (User.money <= 0);


		do
		{
			printf("Select currency\n\n1.%s\n2.%s\n3.%s\n4.%s\n5.%s\n\nSelect : ", Currency(0), Currency(1), Currency(2), Currency(3), Currency(4));
			scanf_s("%d", &User.select);
			printf("\n");

			con(User.select, User.changeMoneytyp, User.money);
			printf("\n");

			if (User.select >= 6)
			{
				DoCurency(User.select, User.changeMoneytyp, User.money);
			}

			if (User.select <= 0)
			{
				DoCurency_2(User.select, User.changeMoneytyp, User.money);
			}

			do
			{
				printf("\nTry again\n1.yes\n2.No\n3.Change money(yes)\nSelect : ");
				scanf_s("%d", &User.Try);

			} while (User.Try <= 0);

			if (User.Try == 2 || User.Try >= 4)
			{
				if (User.Try >= 4)
				{
					do
					{
						printf("\nTry again\n1.yes\n2.No\n3.Change money(yes)\nSelect : ");
						scanf_s("%d", &User.Try);
					} while (User.Try >= 4);

				}
				if(User.Try == 2)break;
				
			}
			if (User.Try == 3)
			{
				do
				{
					printf("Input money : ");
					scanf_s("%d", &User.money);
					printf("\n");


				} while (User.money <= 0);
				User.Try = 1;
			}



		} while (User.Try == 1);

	
	
}
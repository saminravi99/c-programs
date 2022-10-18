	int i = 0;
		int number;
		while(str[i] != '%')
		{
			number = number * 10 + (str[i] - '0');
			/**
			 * The thing happening here is that we are converting the character to integer.
			 * For example, if the character is '5', then the integer value of '5' is 53.
			 * So, if we subtract '0' from '5', then we get 53 - 48 = 5.
			 * So, we are converting the character to integer.
			*/
			i++;
		}
		printf("\n");

		printf("The Percentage Value is: %s\n", str);
		printf("The number is: %d\n", number);

		return 0;
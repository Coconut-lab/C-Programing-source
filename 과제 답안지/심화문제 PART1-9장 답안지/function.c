int sum(int x, int y) {

	int result;

	result = x + y;

	return result;

}

int minus(int x, int y) {

	int result;

	result = x - y;

	return result;

}

int multi(int x, int y) {

	int result;

	result = x * y;

	return result;

}

double divide(int x, int y) {

	double result;

	result = (double)x / y;

	return result;

}


int absolute(int num)
{
	if (num >= 0)
	{
		return num;
	}
	else
	{
		return -num;
	}
}

char reverse(char asc)
{
	if (asc >= 'a'&&asc <= 'z')
	{
		asc = asc + ('A' - 'a');
		return asc;
	}

	else if (asc >= 'A' && asc <= 'Z')
	{
		asc = asc - ('A' - 'a');
		return asc;
	}

	else
	{
		return 0;
	}
}
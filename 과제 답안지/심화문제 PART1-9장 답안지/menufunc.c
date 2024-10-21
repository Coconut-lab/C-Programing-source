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
int seq_search(int list[], int key)
{
	int i,n;
	for (i = 0; i < n; i++)
		if (list[i] == key)
			return i;

	return -1;
}

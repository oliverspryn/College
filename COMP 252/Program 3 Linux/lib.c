int getOPData(char *OPCode) {
	int left = 0, right = OPTotal, middle = 0, cmp = 0;
	
	while (right >= left) {
		middle = (left + right) / 2;
		cmp = strcmp(OPCode, OPCodes[middle][0]);
		
	//Strangely, !cmp will check if the two strings are equal
		if (!cmp) {
			return middle;
		} else if (cmp > 0) {
			right = middle - 1;
		} else {
			left = middle + 1;
		}
	}
	
	return -1;
}
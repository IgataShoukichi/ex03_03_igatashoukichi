int getObesity(double bmi) {
	if (bmi < 18.5) {
		return -1;
	}
	else if (bmi < 25) {
		return 0;
	}
	else if (bmi < 30) {
		return 1;
	}
	else if (bmi < 35) {
		return 2;
	}
	else if (bmi < 40) {
		return 3;
	}
	else {
		return 4;
	}
}

// Расчеты
W = 0.02 * S + 0.05 * n;
Q = W / t;

Re = (d * V) / ny;

if (Re < 2300) {
	ld = 64 / Re;
}
else {
	ld = 0.3 / pow(Re, 0.25);
}

h = ld * (L / d) + (V * V) / (2 * g);
H = Hr + h + Hc;

// Вывод
cout << "Вывод Q: " << Q << endl;
cout << "Вывод H: " << H << endl;

return 0;

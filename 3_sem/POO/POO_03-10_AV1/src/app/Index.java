package app;

import java.util.Locale;

public class Index {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		int ano = 2019;
		double salario = 1000.0;
		double aumento = 1.5/100;
		
		while (ano != 2026) {
			ano++;
			if (ano > 2020) {
				aumento *= 2;
			}
			salario += salario*aumento;
			System.out.printf("%d\taumento = %.3f salario = R$ %.2f\n", ano, aumento, salario);
		}
		
	}

}

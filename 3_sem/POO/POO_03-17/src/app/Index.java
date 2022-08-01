package app;

import java.util.Locale;
import java.util.Scanner;

import entt.Triangulo;

public class Index {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Triangulo x, y;
		Scanner sc = new Scanner(System.in);

		x = new Triangulo();
		y = new Triangulo();

		System.out.println("Digite as medidas do triangulo X: ");
		x.a = sc.nextDouble();
		x.b = sc.nextDouble();
		x.c = sc.nextDouble();

		System.out.println("Digite as medidas do triangulo Y: ");
		y.a = sc.nextDouble();
		y.b = sc.nextDouble();
		y.c = sc.nextDouble();

		double areaX = x.area();
		double areaY = y.area();

		System.out.printf("Triangulo X area: %.4f%n", areaX);
		System.out.printf("Triangulo Y area: %.4f%n", areaY);

		if (areaX > areaY) {
			System.out.println("Maior area: X");
		} else {
			System.out.println("Maior area: Y");
		}

		sc.close();

	}

}

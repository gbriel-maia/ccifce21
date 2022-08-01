package app;

import java.util.ArrayList;
import java.util.List;
import java.util.Locale;
import java.util.Scanner;

import entt.PoligonoRegular;
import entt.Quadrado;
import entt.TrianguloEquilatero;

public class Index {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		System.out.print("Entre com o numero de poligonos: ");
		int x = sc.nextInt();
		List<PoligonoRegular> pl = new ArrayList<PoligonoRegular>();

		for (int i = 1; i <= x; i++) {
			System.out.printf("Polígono %d: \n", i);
			System.out.print("Número de Lados (3/4): ");
			int numLados = sc.nextInt();
			System.out.print("Medida do Lado: ");
			Double medLado = sc.nextDouble();

			switch (numLados) {
			case 4:
				PoligonoRegular q = new Quadrado(numLados, medLado);
				pl.add(q);
				break;

			case 3:
				PoligonoRegular t = new TrianguloEquilatero(numLados, medLado);
				pl.add(t);
				break;

			default:
				System.out.print("Erro");
				i = x + 1;
				break;

			}

			if (i == x) {
				System.out.println("Poligonos:");
				for (PoligonoRegular poligonos : pl) {
					System.out.println(poligonos.getClass().getName() + " - " + poligonos.calculoArea());

				}

			}

		}
		sc.close();

	}

}

package app;

import java.util.Locale;
import java.util.Scanner;

import entt.Aluno;

public class Index {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		Aluno a = new Aluno();

		System.out.println("Entre com os dados do aluno");
		System.out.print("Matricula: ");
		a.setMat(sc.nextInt());
		System.out.print("Nome: ");
		a.setNome(sc.next());
		System.out.print("Nota 1: ");
		a.setN1(sc.nextDouble());
		System.out.print("Nota 2: ");
		a.setN2(sc.nextDouble());
		System.out.print("Nota Trabalho: ");
		a.setTrab(sc.nextDouble());

		System.out.println("\n" + a);

		sc.close();

	}

}

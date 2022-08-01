package app;

import java.util.Scanner;

import entt.CalculadoraCientifica;

public class Index {

	public static void main(String[] args) {
		CalculadoraCientifica cc = new CalculadoraCientifica();
		Scanner sc = new Scanner(System.in);

		cc.setNum1(sc.nextDouble());
		cc.setNum2(sc.nextDouble());

		System.out.println(cc.getNum1() + " + " + cc.getNum2() + " = " + cc.soma(cc.getNum1(), cc.getNum2()));
		System.out.println(cc.getNum1() + " - " + cc.getNum2() + " = " + cc.subtracao(cc.getNum1(), cc.getNum2()));
		System.out.println(cc.getNum1() + " / " + cc.getNum2() + " = " + cc.divisao(cc.getNum1(), cc.getNum2()));
		System.out.println(cc.getNum1() + " * " + cc.getNum2() + " = " + cc.multiplicacao(cc.getNum1(), cc.getNum2()));
		System.out.println(cc.getNum1() + " ^ -" + cc.getNum2() + " = " + cc.raizQuadrada(cc.getNum1(), cc.getNum2()));
		System.out.println(cc.getNum1() + " ^ " + cc.getNum2() + " = " + cc.potencia(cc.getNum1(), cc.getNum2()));
		
		sc.close();
	}

}

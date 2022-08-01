package app;

import entt.ContaCorrente;
import entt.ContaPoupanca;

public class Index {

	public static void main(String[] args) {
		ContaCorrente cc = new ContaCorrente();
		ContaPoupanca cp = new ContaPoupanca();

		cc.depositar(100);
		cc.sacar(10);
		cp.depositar(100);
		cp.sacar(10);
		cc.imprimirDadosConta();
		cp.imprimirDadosConta();

	}

}

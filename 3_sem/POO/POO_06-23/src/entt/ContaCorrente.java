package entt;

import intf.Impressao;

public class ContaCorrente extends Conta implements Impressao{
	@Override
	public void depositar(double valor) {
		setSaldo(getSaldo() + valor);

	}

	@Override
	public void sacar(double valor) {
		if (getSaldo() > 0) {
			setSaldo(getSaldo() - valor + (getSaldo() - valor * 0.02));
		} else {
			System.out.println("Saldo Insuficiente");
		}

	}

	@Override
	public void imprimirDadosConta() {
		System.out.println("Conta Corrente\nNúmero: " + getNum() + " Saldo: R$ " + getSaldo());
		
	}

}

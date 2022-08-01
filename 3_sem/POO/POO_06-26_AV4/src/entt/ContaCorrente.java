package entt;

import intf.TaxaManutencao;

public class ContaCorrente extends Conta implements TaxaManutencao{
	public ContaCorrente(int numero, String titular, double saldo) {
		super(numero, titular);
		depositar(saldo);
	}

	@Override
	public double valorTaxa() {
		return (getSaldo() * 0.01);
	}

	@Override
	public void sacar(double valor) {
		if (valor > getSaldo()) {
			System.out.println("Saldo Insuficiente");
		} else {
			setSaldo(getSaldo() - valor);
			System.out.println("Saque Concluído");
		}
	}

	@Override
	public void depositar(double valor) {
		setSaldo(getSaldo() + valor);
		System.out.println("Deposito Concluído");
	}

	@Override
	public void atualizaSaldo() {
		setSaldo(getSaldo() - valorTaxa());
	}

	@Override
	public void imprimir() {
		System.out.print("\nConta Corrente"
				+ "\nNumero: " + String.format("%04d", getNumero()) 
				+ "\nTitular: " + getTitular() 
				+ "\nSaldo: R$ "+ String.format("%.2f", getSaldo()) 
				+ "\nSaldo - Taxa: R$ " + String.format("%.2f", getSaldo() - valorTaxa()));
	}

}

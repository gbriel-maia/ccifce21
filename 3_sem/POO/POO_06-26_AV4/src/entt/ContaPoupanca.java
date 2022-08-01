package entt;

public class ContaPoupanca extends Conta{
	public ContaPoupanca(int numero, String titular, double saldo) {
		super(numero, titular);
		depositar(saldo);
		setTaxaJuro(2);
	}

	private double taxaJuro;

	public double getTaxaJuro() {
		return taxaJuro;
	}

	public void setTaxaJuro(double taxaJuro) {
		this.taxaJuro = taxaJuro/100 * getSaldo();
	}

	@Override
	public void sacar(double valor) {
		if (valor > getSaldo()) {
			System.out.println("Saldo Insuficiente");
		} else {
			setSaldo(getSaldo() - valor);
			System.out.println("Saque Conluído");
		}
	}

	@Override
	public void depositar(double valor) {
		setSaldo(getSaldo() + valor);
		System.out.println("Deposito Concluído");
	}

	@Override
	public void atualizaSaldo() {
		setSaldo(getSaldo() + getTaxaJuro());
	}

	@Override
	public void imprimir() {
		System.out.print("\nConta Poupanca"
				+ "\nNumero: " + String.format("%04d", getNumero()) 
				+ "\nTitular: " + getTitular() 
				+ "\nSaldo: R$ "+ String.format("%.2f", getSaldo()) 
				+ "\nSaldo + Juros: R$ " + String.format("%.2f", getSaldo() + getTaxaJuro()));
	}

}

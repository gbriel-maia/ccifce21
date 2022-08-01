package entt;

public abstract class Conta {
	private int numero;
	private String titular;
	private double saldo;

	public Conta(int numero, String titular) {
		super();
		this.numero = numero;
		this.titular = titular;
	}

	public int getNumero() {
		return numero;
	}
	public void setNumero(int numero) {
		this.numero = numero;
	}
	public String getTitular() {
		return titular;
	}
	public void setTitular(String titular) {
		this.titular = titular;
	}
	public double getSaldo() {
		return saldo;
	}
	public void setSaldo(double saldo) {
		this.saldo = saldo;
	}

	public void sacar(double valor) {}

	public void depositar(double valor) {}

	public void atualizaSaldo() {}
	
	public void imprimir() {}

}	

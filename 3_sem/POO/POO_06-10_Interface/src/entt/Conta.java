package entt;

import intf.IConta;

public class Conta implements IConta{
	private int num;
	private double saldo;

	public int getNum() {
		return num;
	}

	public void setNum(int num) {
		this.num = num;
	}

	public double getSaldo() {
		return saldo;
	}

	public void setSaldo(double saldo) {
		this.saldo = saldo;
	}

	@Override
	public void sacar(double x) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void depositar(double x) {
		// TODO Auto-generated method stub
		
	}

}

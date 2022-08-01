package entt;

public abstract class Calculadora {
	private double num1;
	private double num2;

	public double getNum1() {
		return num1;
	}

	public void setNum1(double num1) {
		this.num1 = num1;
	}

	public double getNum2() {
		return num2;
	}

	public void setNum2(double num2) {
		this.num2 = num2;
	}

	public double soma(double a, double b) {
		this.num1 = a;
		this.num2 = b;
		return num1 + num2;
	}

	public double subtracao(double a, double b) {
		this.num1 = a;
		this.num2 = b;
		return num1 - num2;
	}

	public double divisao(double a, double b) {
		this.num1 = a;
		this.num2 = b;
		return num1 / num2;
	}

	public double multiplicacao(double a, double b) {
		this.num1 = a;
		this.num2 = b;
		return num1 * num2;
	}

}

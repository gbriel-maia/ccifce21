package entt;

public abstract class Funcionario {
	private double salario = 0;

	public void setSalario(double salario) {
		this.salario = salario;
	}

	public double getSalario() {
		return salario;
	}

	public abstract void aumentaSalario();
	public abstract void imprimeDados();

}

package entt;

public class Gerente extends Funcionario{
	@Override
	public void aumentaSalario() {
		setSalario(getSalario() + getSalario() * 10 / 100);

	}

	@Override
	public void imprimeDados() {
		System.out.println("Gerente - Salario: R$ " + String.format("%.2f", this.getSalario()));

	}

}

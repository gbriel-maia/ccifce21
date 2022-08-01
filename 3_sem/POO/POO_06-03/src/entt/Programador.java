package entt;

public class Programador extends Funcionario{
	@Override
	public void aumentaSalario() {
		setSalario(getSalario() + getSalario() * 20 / 100);

	}

	@Override
	public void imprimeDados() {
		System.out.println("Programador - Salario: R$ " + String.format("%.2f", this.getSalario()));

	}

}

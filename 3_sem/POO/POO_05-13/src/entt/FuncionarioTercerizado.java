package entt;

public class FuncionarioTercerizado extends Funcionario {
	private Double despesaAdicional;

	public FuncionarioTercerizado(String nome, int horasTrabalhadas, Double valorHora, Double despesaAdicinal) {
		super(nome, horasTrabalhadas, valorHora);
		this.despesaAdicional = despesaAdicinal;
	}

	public Double getDespesaAdicinal() {
		return despesaAdicional;
	}

	public void setDespesaAdicinal(Double despesaAdicinal) {
		this.despesaAdicional = despesaAdicinal;
	}

	@Override
	public Double pagamento() {
		return getHorasTrabalhadas() * getValorHora() + getDespesaAdicinal();
	}

	@Override
	public String toString() {
		return "Nome = " + getNome() + ", HorasTrabalhadas = " + getHorasTrabalhadas() + ", ValorHora = R$ " + String.format("%.2f", getValorHora()) + ", DespesaAdicional = R$ " + String.format("%.2f", getDespesaAdicinal()) + ", Pagamento = R$ " + String.format("%.2f", pagamento());
	}

}

package entt;

public class Funcionario {
	private String nome;
	private int horasTrabalhadas;
	private Double valorHora;

	protected Funcionario(String nome, int horasTrabalhadas, Double valorHora) {
		this.nome = nome;
		this.horasTrabalhadas = horasTrabalhadas;
		this.valorHora = valorHora;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public int getHorasTrabalhadas() {
		return horasTrabalhadas;
	}

	public void setHorasTrabalhadas(int horasTrabalhadas) {
		this.horasTrabalhadas = horasTrabalhadas;
	}

	public Double getValorHora() {
		return valorHora;
	}

	public void setValorHora(Double valorHora) {
		this.valorHora = valorHora;
	}

	public Double pagamento() {
		return getHorasTrabalhadas() * getValorHora();
	}

	@Override
	public String toString() {
		return "Nome = " + getNome() + ", HorasTrabalhadas = " + getHorasTrabalhadas() + ", ValorHora = R$ " + String.format("%.2f", getValorHora()) + ", Pagamento = R$ " + String.format("%.2f", pagamento());
	}

}

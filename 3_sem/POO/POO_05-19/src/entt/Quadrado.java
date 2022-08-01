package entt;

public class Quadrado extends PoligonoRegular {
	public Quadrado(int numeroLados, Double medidaLado) {
		this.numeroLados = numeroLados;
		this.medidaLado = medidaLado;
	}

	@Override
	public Double calculoArea() {
		return getNumeroLados() * getMedidaLado();
	}

}

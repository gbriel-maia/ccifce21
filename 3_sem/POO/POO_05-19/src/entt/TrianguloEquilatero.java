package entt;

public class TrianguloEquilatero extends PoligonoRegular {
	public TrianguloEquilatero(int numeroLados, Double medidaLado) {
		this.numeroLados = numeroLados;
		this.medidaLado = medidaLado;
	}

	@Override
	public Double calculoArea() {
		return (Math.pow(getMedidaLado(), 2) * Math.sqrt(3)) / 4;
	}

}

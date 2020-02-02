
package eddtarea2;

/**
 *
 * @author gerso
 */
public class Usuario {
    private String nombre;
    TDAmoneda listaMonedas;
    
    public Usuario(String nombre, TDAmoneda listaMonedas){
        this.nombre = nombre;
        this.listaMonedas = listaMonedas;
    }
    
    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public TDAmoneda getListaMonedas() {
        return listaMonedas;
    }

    public void setListaMonedas(TDAmoneda listaMonedas) {
        this.listaMonedas = listaMonedas;
    }
    
    
}


package eddtarea2;

/**
 *
 * @author gerso
 */
public class Moneda {

    public Moneda getSiguiente() {
        return siguiente;
    }

    public void setSiguiente(Moneda siguiente) {
        this.siguiente = siguiente;
    }
    private String moneda;
    Moneda siguiente;
    
    public Moneda(String moneda){
        this.moneda = moneda;
    }
    

    public String getMoneda() {
        return moneda;
    }

    public void setMoneda(String moneda) {
        this.moneda = moneda;
    }
    
    
}


package eddtarea2;

/**
 *
 * @author gerso
 */
public class TDAmoneda {
    private int tamaño;
    Moneda primero, ultimo;
    
    public TDAmoneda(){
        primero = null;
        ultimo = null;
    }
    
    public boolean isEmpty(){
        if(primero == null){
            return true;
        }else{
            return false;
        }
    }
    
    
    public void agregarMoneda(String nombre){
        Moneda m = new Moneda(nombre);
        if(isEmpty()){
            primero = m;
            ultimo = m;
        }else{
            m.setSiguiente(primero);
            primero = m;
        }
        tamaño++;
    }
    
    public Moneda quitarMoneda(){
        if(isEmpty()){
            return null;
        }else{
            Moneda m = primero;
            primero = m.getSiguiente();
            return m;
        }
        
    }
    
    public int getTamaño(){
        return tamaño;
    }
}

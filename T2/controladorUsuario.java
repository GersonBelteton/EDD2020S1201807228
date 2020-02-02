/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package eddtarea2;

/**
 *
 * @author gerso
 */
public class controladorUsuario {
    
    Usuario[] usuarios;
    
    
    public Usuario crearUsuario(String nombre){
        for(int i = 0; i < usuarios.length; i++){
            if(usuarios[i]== null){
                TDAmoneda lista = new TDAmoneda();
                usuarios[i] = new Usuario(nombre,lista);
                return usuarios[i];
            }
        }
        return null;
    }
    
    public void transferir(Usuario env, Usuario rec, int cant){
     
   
        for(int i = 0; i < cant; i++){
               env.getListaMonedas().quitarMoneda();
        rec.getListaMonedas().agregarMoneda("x");
        }
    }
    
    
    
    
}

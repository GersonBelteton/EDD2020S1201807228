/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package eddtarea1;

import java.util.Scanner;

/**
 *
 * @author gerso
 */
public class EDDTarea1 {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int M = 0;

        System.out.println("Introduce un valor para M: ");
        M = s.nextInt();

        int matriz[][] = new int[M][M];

        mostrarMatriz(M, llenarMatriz(M, matriz));

    }

    public static int[][] llenarMatriz(int m, int[][] matriz) {

        for (int fila = 0; fila < m; fila++) {
            for (int columna = 0; columna < m; columna++) {
                if (fila == 0 || columna == 0 || fila == m - 1 || columna == m - 1) {
                    matriz[fila][columna] = 1;
                } else {
                    matriz[fila][columna] = 0;
                }

            }
        }
        return matriz;
    }
    public static void mostrarMatriz(int m, int[][] matriz) {
        for (int fila = 0; fila < m; fila++) {
            for (int columna = 0; columna < m; columna++) {
                System.out.print(matriz[fila][columna] + " ");

            }
            System.out.println();
        }
    }

}

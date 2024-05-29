package com.example.atividades.atividade13;

import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class FactorialTest {

    @Test
    public void testCalculate() {
        // Crie uma instância de Factorial
        Factorial factorial = new Factorial();

        // Teste para n = 0
        assertEquals(1, factorial.calculate(0));

        // Teste para n = 1
        assertEquals(1, factorial.calculate(1));

        // Teste para n = 5
        assertEquals(120, factorial.calculate(5));

        // Teste para n = 10
        assertEquals(3628800, factorial.calculate(10));
    }

    @Test
    public void testCalculate_NegativeNumber() {
        // Crie uma instância de Factorial
        Factorial factorial = new Factorial();

        // Teste para n < 0
        factorial.calculate(-1);
    }

}

package com.example.atividades.atividade11;

import org.junit.jupiter.api.Test;

import java.util.Arrays;
import java.util.List;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class CustomSortTest {

    @Test
    public void testCustomSort() {
        // Crie uma instância de CustomSort
        CustomSort customSort = new CustomSort();

        // Crie uma lista de números desordenados
        List<Integer> numbers = Arrays.asList(5, 3, 8, 1, 2);

        // Chame o método customSort para ordenar a lista
        List<Integer> sortedNumbers = customSort.customSort(numbers);

        // Verifique se a lista foi ordenada corretamente
        List<Integer> expectedSortedNumbers = Arrays.asList(8, 5, 3, 2, 1);
        assertEquals(expectedSortedNumbers, sortedNumbers);
    }

}

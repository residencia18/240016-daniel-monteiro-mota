package com.example.atividades.atividade06;

import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertThrows;

public class PointTest {

    @Test
    public void testDistanceTo() {
        // Test case 1: Distance between two points with positive coordinates
        Point point1 = new Point(0, 0);
        Point point2 = new Point(3, 4);
        assertEquals(5.0, point1.distanceTo(point2));

        // Test case 2: Distance between two points with negative coordinates
        Point point3 = new Point(-1, -1);
        Point point4 = new Point(-4, -5);
        assertEquals(5.0, point3.distanceTo(point4));

        // Test case 3: Distance between two points with mixed coordinates
        Point point5 = new Point(-1, 2);
        Point point6 = new Point(2, -2);
        assertEquals(5.0, point5.distanceTo(point6));

        // Test case 4: Distance between two points with one point at the origin
        Point point7 = new Point(0, 0);
        Point point8 = new Point(3, 0);
        assertEquals(3.0, point7.distanceTo(point8));

        // Test case 5: Distance between two points with zero distance
        Point point9 = new Point(1, 1);
        Point point10 = new Point(1, 1);
        assertEquals(0.0, point9.distanceTo(point10));
    }

    @Test
    public void testDistanceToWithNullArgument() {
        Point point = new Point(0, 0);
        assertThrows(IllegalArgumentException.class, () -> {
            point.distanceTo(null);
        });
    }

}

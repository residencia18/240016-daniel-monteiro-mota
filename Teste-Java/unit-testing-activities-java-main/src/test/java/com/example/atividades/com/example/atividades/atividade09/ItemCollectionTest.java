package com.example.atividades.atividade09;

import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

import java.util.List;

import static org.junit.jupiter.api.Assertions.*;

class ItemCollectionTest {

    private ItemCollection itemCollection;
    private Item item1;
    private Item item2;

    @BeforeEach
    public void setUp() {
        itemCollection = new ItemCollection();
        item1 = new Item("Item 1");
        item2 = new Item("Item 2");
    }

    @Test
    public void testAddItem() {
        itemCollection.addItem(item1);
        List<Item> items = itemCollection.getItems();
        assertEquals(1, items.size());
        assertTrue(items.contains(item1));
    }

    @Test
    public void testAddNullItem() {
        itemCollection.addItem(null);
    }

    @Test
    public void testRemoveItem() {
        itemCollection.addItem(item1);
        itemCollection.removeItem(item1);
        List<Item> items = itemCollection.getItems();
        assertEquals(0, items.size());
        assertFalse(items.contains(item1));
    }

    @Test
    public void testRemoveNonExistingItem() {
        itemCollection.removeItem(item1);
    }

    @Test
    public void testGetItems() {
        itemCollection.addItem(item1);
        itemCollection.addItem(item2);
        List<Item> items = itemCollection.getItems();
        assertEquals(2, items.size());
        assertTrue(items.contains(item1));
        assertTrue(items.contains(item2));
    }

}

package com.example.atividades.atividade10;

import org.junit.Before;
import org.junit.jupiter.api.Test;
import org.mockito.Mock;
import org.mockito.MockitoAnnotations;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.mockito.Mockito.when;

public class UserManagerTest {

    @Mock
    private UserService userService;
    private UserManager userManager;

    @Before
    public void setUp() {
        MockitoAnnotations.initMocks(this);
        userManager = new UserManager(userService);
    }

    @Test
    public void testFetchUserInfo_UserFound() {
        int userId = 1;
        User expectedUser = new User(userId, "John");
        when(userService.getUserInfo(userId)).thenReturn(expectedUser);

        User fetchedUser = userManager.fetchUserInfo(userId);

        assertEquals(expectedUser, fetchedUser);
    }

    @org.junit.Test
    @Test
    public void testFetchUserInfo_UserNotFound() {
        int userId = 2;
        when(userService.getUserInfo(userId)).thenReturn(null);

        userManager.fetchUserInfo(userId);
    }

}

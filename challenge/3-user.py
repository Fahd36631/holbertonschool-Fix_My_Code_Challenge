#!/usr/bin/python3
"""User class with password hashing."""

import hashlib


class User:
    """Represent a user with a hashed password."""

    def __init__(self):
        self.__password = None

    def set_password(self, pwd):
        """Hash and store a password string."""
        self.__password = hashlib.sha256(pwd.encode()).hexdigest()

    def is_valid_password(self, pwd):
        """Return True if pwd matches stored password hash."""
        if self.__password is None:
            return False
        return self.__password == hashlib.sha256(pwd.encode()).hexdigest()

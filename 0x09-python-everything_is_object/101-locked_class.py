#!/usr/bin/python3
class LockedClass:
    """a class with no class or object attribute and prevents user from dynamically creating new instance attributes except when the new instance is called "first_name" """
    __slots__ = ['first_name']

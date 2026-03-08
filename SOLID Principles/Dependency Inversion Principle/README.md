## Dependency Inversion Principle

The Dependency Inversion Principle (DIP) is a principle in object-oriented design that states that "High-level modules should not depend on low-level modules. Both should depend on abstractions". means "Big parts of your program should not directly depend on small, detailed parts. Instead, both should depend on general ideas (interfaces)". Additionally, abstractions should not depend on details. Details should depend on abstractions(Details should follow the rules).

    In simpler terms, the DIP suggests that classes should rely on abstractions (e.g., interfaces or abstract classes) rather than concrete implementations.
    This allows for more flexible and decoupled code, making it easier to change implementations without affecting other parts of the codebase.

---

## Without DIP (Bad Example)

In `Without_DIP.cpp`, the `UserService` class directly creates and uses a `MySQLDatabase` object as a member variable. This creates **tight coupling** — `UserService` is hardwired to MySQL and cannot work with any other database.

**How it violates DIP**: The high-level module (`UserService`) directly depends on a low-level module (`MySQLDatabase`). If we want to switch to MongoDB, we must modify the `UserService` class itself.

---

## With DIP (Good Example)

In `With_DIP.cpp`, we introduce a `Database` abstraction (interface) with pure virtual functions. Both `MySQLDatabase` and `MongoDBDatabase` inherit from this interface. The `UserService` class now accepts a `Database*` pointer in its constructor — it depends on the abstraction, not concrete implementations.

**How it follows DIP**: Both high-level (`UserService`) and low-level (`MySQLDatabase`, `MongoDBDatabase`) modules depend on the `Database` abstraction. Now we can pass any database implementation to `UserService` without modifying its code. The code is **loosely coupled** and extensible.

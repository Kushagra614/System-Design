2. Open/Closed Principle

This principle states that "Software entities (classes, modules, functions, etc.) should be open for extension, but closed for modification," which means you should be able to extend a class's behavior without modifying it.

You should be able to change the behavior of a class without changing its source code. You can do this through polymorphism and interfaces or abstract classes.

- **Open for extension** means that the behavior of a software module such as a class or a function can be extended without altering its source code.
- **Closed for modification** means that once a module is written and tested, it should not be modified. Instead, new behavior should be added in a way that doesn't impact existing code.

## Example: Payment System

### Without OCP (Violates the principle)
In a traditional payment system without OCP, the main payment handler class contains if/else branching logic to handle different payment types (UPI, Card, Cash, etc.). When a new payment method needs to be added, the existing payment handler class must be modified and re-tested, increasing the risk of breaking existing functionality.

### With OCP (Follows the principle)
By using an abstract base class or interface for payment methods, each payment type (UPI, Card, Cash, Wallet, etc.) becomes a separate concrete implementation. The main payment processor delegates to the appropriate payment method through polymorphism. To add a new payment option, you simply create a new class that implements the payment interface—no changes to existing classes are needed.

## Benefits of Using OCP:

1. **No modification of existing code**: Adding new payment methods requires only creating new classes, not changing the payment processor that's already in production.

2. **Reduced risk of bugs**: Since tested, working code remains untouched, you minimize the chance of introducing regressions or breaking existing functionality.

3. **Better maintainability**: Each payment type is isolated in its own class with its own logic. Changes to one payment method don't have ripple effects on others.

4. **Improved scalability**: As the system grows with more payment options, the architecture remains clean and organized. New features can be added without cluttering existing code.

5. **Cleaner abstraction**: The payment processor doesn't need to know about every specific payment type. It works with a common abstraction, making the code more flexible and loosely coupled.

6. **Easier testing**: Each payment method can be tested in isolation without depending on or modifying the core payment processor logic.

7. **Follows the single responsibility principle**: Each payment class has one reason to change—its specific payment logic—rather than the entire system changing when new payment types are added.
# Liskov Substitution Principle (LSP)

## Definition
Objects of a superclass should be replaceable with objects of its subclasses without altering the desirable properties of a program.

## In Simple Terms
If class B is a subclass of class A, we should be able to replace A with B without disrupting the behavior of our program.

## Key Points
- Derived classes must be substitutable for their base classes
- Behavioral contracts must be maintained
- Don't break expected functionality when overriding methods
- If a subclass can't fulfill what the parent promises, redesign the hierarchy

## The Problem (Without LSP)
**Rectangle vs Square Violation:**
- Rectangle allows independent height and width setting
- Square inherits from Rectangle but forces height == width
- When you substitute Square for Rectangle, the width/height independence contract breaks
- This violates LSP because Square can't safely replace Rectangle

## The Solution (With LSP)
**Create a Common Shape Interface:**
- Rectangle and Square both inherit from a common `Shape` class
- Rectangle keeps `setHeight()` and `setWidth()` (independent setters)
- Square has its own `setSide()` method (both dimensions together)
- No substitution conflict because they have separate contracts
- Each class fulfills its own promises

## Real-World Examples
1. **Bird hierarchy**: Penguin can't fly but inherits from Bird (violation)
2. **Payment processors**: ChequeProcessor takes 7 days, CreditCardProcessor is instant (violation)
3. **Vehicle interface**: Electric vehicles might not have a `refuel()` method (violation)

## Benefits
- More maintainable and predictable code
- Easier to extend without breaking existing functionality
- Better abstraction and design
# Factory Method Pattern

The Factory Method pattern is a design pattern that defines an interface for creating objects, but it allows subclasses to alter which class gets instantiated. In other words, instead of having one big factory class making all the decisions, each subclass knows how to create its own version of the product. This way, the code follows the open/closed principle: you can introduce new product types by adding new subclasses, without changing existing code.

## Example: Notification System

**First, the setup**: Imagine we're building a notification system. Initially, we only send SMS notifications to users.

**Second, the problem**: As we expand, we need to send emails, WhatsApp messages, and more. If we try to handle all this in one place, we end up with a big if-else chain. This violates the open/closed principle, because each time we add a new notification type, we have to modify existing code.

**Third, the solution**: With the Factory Method pattern, we create a general factory method in a base class. Each subclass—for example, SMS, email, or WhatsApp—handles its own creation logic. Now, we can add new notification types without changing existing code, keeping it open to extension but closed to modification—exactly the open/closed principle.

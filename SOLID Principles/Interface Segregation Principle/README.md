# Interface Segregation Principle

 The Interface Segregation Principle (ISP) states: **do not force any client to implement an interface that is irrelevant to it**. The goal is to avoid “fat” interfaces by preferring multiple small, client-specific interfaces over a single, general-purpose one. Each interface should have a clear, focused responsibility.

 The Interface Segregation Principle (ISP) is the first SOLID principle focused on interfaces rather than classes. It is closely related to the Single Responsibility Principle.

## 🌟 Why it matters

- Reduces unnecessary dependencies.
- Simplifies implementations for specific use cases.

## 💭 Example

Consider a software system that models office equipment through a `Machine` interface that includes printing, scanning, and faxing. This design violates ISP when implementing a basic printer.

The issue appears when a `BasicPrinter` class—intended only for printing—must implement the full `Machine` interface. It is forced to define `scan()` and `fax()` even though those capabilities are outside its core responsibility.
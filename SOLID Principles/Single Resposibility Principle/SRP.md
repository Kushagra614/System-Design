## Single Responsibility Principle

This principle states that a class should have only one reason to change, which means every class should have a single responsibility, single job, or single purpose. In other words, a class should have only one job or purpose within the software system.

## Why it matters

- **Improves maintainability:** Changes in one class do not affect unrelated parts.
- **Enhances readability and reduces complexity.**


## Example 

- `Without_SRP.cpp` shows a single `User` class doing **data management, validation, persistence, display, and email**—multiple reasons to change.
- `With_SRP.cpp` splits those into focused classes (`User`, `UserValidates`, `UserRepo`, `UserDisplay`, `EmailService`) so each has **one responsibility**.

### ✅ Why SRP is beneficial in this example

- **Change isolation:** If email rules change, only `EmailService` changes, not validation or persistence.
- **Easier testing:** Each class can be tested independently (e.g., test `UserValidates` without touching DB or UI).
- **Better reuse:** You can reuse `UserRepo` or `UserDisplay` in other features without dragging in email logic.
- **Safer updates:** Adding a new concern (like logging) becomes a new class instead of modifying the core `User` model.



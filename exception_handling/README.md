< [Home](/README.md)

# Exception Handling

C relies on return codes and `errno` for reporting errors, while C++ uses exceptions for
structured error handling. This section demonstrates both approaches so you can compare
trade-offs and know when each style is expected.

## C Error Handling Example

See [`parse_port.c`](./parse_port.c) for a helper that validates input and reports errors
through return values and `errno`.

## C++ Exception Concept (Snippet)

```cpp
try {
    int value = parse_config("config.json");
    use_config(value);
} catch (const std::runtime_error &error) {
    std::cerr << "Config failed: " << error.what() << "\n";
}
```

#### Exercise

Add a new error case in `parse_port` that rejects ports below 1024 and set `errno` to
`EACCES`.

<br>**[⬆ back to top](#exception-handling)**

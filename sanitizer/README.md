# sanitizer examples

1. out of bound
    ```
    clang -fsanitize=address outofbounds.c
    ```

2. use after free
    ```
    clang -fsanitize=address useafterfree.c
    ```

3. uninitialized memory
    ```
    clang -fsanitize=memory memory.c
    ```

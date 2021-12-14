# sanitizer examples

1. out of bound
    ```
    clang -fsanitize=address -g outofbounds.c
    ```

2. use after free
    ```
    clang -fsanitize=address -g useafterfree.c
    ```

3. uninitialized memory
    ```
    clang -fsanitize=memory -g memory.c
    ```

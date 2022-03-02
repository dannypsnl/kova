# loop transformation

### unrolling

```shell
clang unrolling.c -O0
./a.out
```

|      | origin | unrolling(2) | unrolling(4) |
|------|--------|--------------|--------------|
| time | 0.268s | 0.122s       | 0.072s       |

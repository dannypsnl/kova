# loop transformation

### unrolling

```shell
clang unrolling.c -O0
./a.out
```

|          | origin | unrolling(2) | unrolling(4) |
|----------|--------|--------------|--------------|
| time(O0) | 0.268s | 0.204s       | 0.203s       |
| time(O1) | 0.106s | 0.078s       | 0.070s       |

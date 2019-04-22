#  ISA Description and OPcodes

## ISA

| Instruction | OPcode | Description                | Format                 |
| ----------- | ------ | -------------------------- | ---------------------- |
| `add`       | `00`   | Adds rA to rB              | `00 rA rB`             |
| `sub`       | `10`   | Subtracts rA from rB       | `10 rA rB`             |
| `mul`       | `20`   | Multiplies rB by rA        | `20 rA rB`             |
| `div`       | `30`   | Divides rB by rA           | `30 rA rB`             |
|             |        |                            |                        |
| `mrmov`     | `40`   | Moves D(rB) to rA          | `40 rA rB D` (2 bytes) |
| `rmmov`     | `50`   | Moves rA to D(rB)          | `50 rA rB D` (2 bytes) |
| `rrmov`     | `60`   | Moves rA to rB             | `60 rA rB`             |
| `irmov`     | `70`   | Moves V to rB              | `70 FF rB V` (2 bytes) |
| `immov`     | `80`   | Moves V to D(rB)           | `80 FF rB V` (2 bytes) |
|             |        |                            |                        |
| `jmp`       | `90`   | Unconditional jump to Dest | `90 Dest` (2 bytes)    |
| `jle`       | `91`   | Jump <= to Dest            | `91 Dest` (2 bytes)    |
| `jl`        | `92`   | Jump < to Dest             | `92 Dest` (2 bytes)    |
| `je`        | `93`   | Jump == to Dest            | `93 Dest` (2 bytes)    |
| `jne`       | `94`   | Jump != to Dest            | `94 Dest` (2 bytes)    |
| `jg`        | `95`   | Jump > to Dest             | `95 Dest` (2 bytes)    |
| `jge`       | `96`   | Jump <= to Dest            | `96 Dest` (2 bytes)    |
|             |        |                            |                        |
| `halt`      | `A0`   | Stops execution            | `A0`                   |
| Maybe       |
| `push`      | `B0`   | Push rA to stack           | `B0 rA 08`             |
| `pop`       | `C0`   | Pop rA from stack          | `C0 rA 08`             |


## Registers
| Register | Code |
| -------- | ---- |
| %eax     | 0    |
| %ebx     | 1    |
| %ecx     | 2    |
| %edx     | 3    |
| %rsp     | 4    |
| %rbp     | 5    |

## Flags
| Flag      | Code |
| --------- | ---- |
| No Flag   | 00   |
| Neg Flag  | 01   |
| Zero Flag | 10   |
#  ISA Description and OPcodes

| Instruction | OPcode | Description          | Format       |
| ----------- | ------ | -------------------- | ------------ |
| `add`       | `00`   | Adds rA to rB        | `00 rA rB`   |
| `sub`       | `10`   | Subtracts rA from rB | `10 rA rB`   |
| `mul`       | `20`   | Multiplies rB by rA  | `20 rA rB`   |
| `div`       | `30`   | Divides rB by rA     | `30 rA rB`   |
|             |        |                      |              |
| `mrmov`     | `40`   | Moves D(rB) to rA    | `40 rA rB`   |
| `rmmov`     | `50`   | Moves rA to D(rB)    | `50 rA rB`   |
| `rrmov`     | `60`   | Moves rA to rB       | `60 rA rB`   |
| `irmov`     | `70`   | Moves V to rB        | `70 FF rB V` |
| `immov`     | `80`   |                      |              |
|             |        |                      |              |
| `jmp`       | `90`   |                      |              |
| `jle`       | `91`   |                      |              |
| `jl`        | `92`   |                      |              |
| `je`        | `93`   |                      |              |
| `jne`       | `94`   |                      |              |
| `jg`        | `95`   |                      |              |
| `jge`       | `96`   |                      |              |
|             |        |                      |              |
| `halt`      | `A0`   |                      |              |
|             |        |                      |              |

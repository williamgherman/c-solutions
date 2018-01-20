### Exercise 24.01

(a) Assertions can be used to test for two kinds of problems: (1) problems that
should never occur if the program is correct, and (2) problems that are beyond
the control of the program. Explain why `assert` is best suited for problems in
the first category.

(b) Give three examples of problems that are beyond the control of the program.

### Solution

#### (a)

`assert` makes sure that things are running correctly, some things which may be
implementation defined could be tested, such as if `INT_MAX` is greater than a
certain value.

#### (b)

Signals are out of scope of the program, and as such, the program has no control
over when they occur. For example, the user, operating system or another process
could raise a `SIGTERM` signal to terminate the program (such as the `CTRL+C`
signal in a terminal), and the program will be requested to terminate. Other out
of scope problems are hardware failures, such as a drained laptop battery which
causes program termination or other undefined behavior; and, the running
environment's operating system including other low-level software could
interfere with a running program, like a forced operating system update, which
could terminate the program or cause other undefined behavior.  

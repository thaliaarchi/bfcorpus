VARIABLES (in cell order) :
    total = 0
  > was_letter = 0
  > input ,+
  > tmp0

while the input isn't EOF : we count words <[-
  ---------- if input is not a newline [
    ---------------------- if input is not a space [
      >+         tmp0 = 1
      <<-[<+>+]> if not was_letter increment total
    [-]]
  [-]]

  <[-]       clear was_letter
  >>[<<+>>-] move tmp0 to was_letter

  <, take input again
+]

<[-]<

print the total (nothing new)
[>>+>+<<<-]>>>[<<<+>>>-]<<+>[<->[>++++++++++<[->-[>+>>]>[+[-<+>]>+>]<<<<<]>[-]++++++++[<++++++>-]>[<<+>>-]>[<<+>>-]<<]>]<[->>++++++++[<++++++>-]]<[.[-]<]
>++++++++++.

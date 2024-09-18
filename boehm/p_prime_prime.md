# Flow Diagrams, Turing Machines And Languages With Only Two Formation Rules

In \[8] a language *P′′* (describing a proper subfamily of Turing
machines) has been shown. It was defined as follows.
- (i) λ, R ∈ P′′ (Axiom of Atomic Operations)
- (ii) q₁, q₂ ∈ P′′ implies q₁q₂ in P′′ (Composition Rule)
- (iii) q ∈ P" implies (q) ∈ P′′ (Iteration Rule)
- (iv) Only the expressions that can be derived from (i),
  (ii) and (iii) belong to P′′.

Interpreting q₁, q₂ as functions from X to X, q₁q₂ can be
interpreted as the composition q₂ ∘ q₁, i.e.
q₁q₂\[x] ≡ q₂\[q₁\[x]], x ∈ X
and (q) can be interpreted as the composition of q with
itself ,n times: q ∘ ⋯ ∘ q ≡ qⁿ, i.e. qⁿ\[x] ≡ q\[⋯\[q\[x]]⋯]
where q⁰\[x] = x and n = μν{α\[q<sup>ν</sup>\[x]] = **t**}, ν ≥ 0, i.e.
(q) is the minimum power of q (if it exists) such that the
scanned square, in the final configuration, is □.

α<sup>*</sup> ≡ L³λR⁴(X)L⁵(Y)R,

It is not difficult to test that the choice

(X) ≡ (r′L(λR)λL(λR)L²λR⁶),

(Y) ≡ (r′R⁵λL⁴),

where r′ ≡ [λR]ⁿ, gives the desired solution.

**REFERENCES**

8. Böhm, C. On a family of Turing machines and the related
   programming language. *ICC Bull. 3*, (July 1964), 187-194.

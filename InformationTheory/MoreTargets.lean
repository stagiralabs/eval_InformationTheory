import VerifiedAgora.tagger

namespace AgoraInformationTheory

@[target]
theorem target_nat_add : ∀ n : Nat, n + 0 = n := Nat.add_zero

@[target]
theorem target_nat_mul : ∀ n : Nat, n * 1 = n := Nat.mul_one

@[target]
theorem target_eq_refl (α : Type) (x : α) : x = x := rfl

@[target]
theorem target_and_intro (P Q : Prop) (hp : P) (hq : Q) : P ∧ Q := And.intro hp hq

@[target]
theorem target_or_inl (P Q : Prop) (hp : P) : P ∨ Q := Or.inl hp

@[target]
theorem target_not_false : ¬False := id

@[target]
theorem target_simple_math : 5 + 5 = 10 := rfl

end AgoraInformationTheory

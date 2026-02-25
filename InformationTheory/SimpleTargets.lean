import VerifiedAgora.tagger

namespace AgoraInformationTheory

-- Very simple targets that should be easy to prove

@[target]
theorem easy_one_eq_one : 1 = 1 := rfl

@[target]
theorem easy_zero_add (n : Nat) : 0 + n = n := Nat.zero_add n

@[target]
theorem easy_add_comm (n m : Nat) : n + m = m + n := Nat.add_comm n m

@[target]
theorem easy_nat_succ (n : Nat) : n.succ = n + 1 := Nat.succ_eq_add_one n

@[target]
theorem easy_list_nil_append (α : Type _) (l : List α) : [] ++ l = l := List.nil_append l

end AgoraInformationTheory

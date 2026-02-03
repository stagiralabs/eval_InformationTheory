import VerifiedAgora.tagger

namespace AgoraInformationTheory

-- Very simple targets that should be easy to prove

@[target]
theorem easy_one_eq_one : 1 = 1 := by sorry

@[target]
theorem easy_zero_add (n : Nat) : 0 + n = n := by sorry

@[target]
theorem easy_add_comm (n m : Nat) : n + m = m + n := by sorry

@[target]
theorem easy_nat_succ (n : Nat) : n.succ = n + 1 := by sorry

@[target]
theorem easy_list_nil_append (α : Type _) (l : List α) : [] ++ l = l := by sorry

end AgoraInformationTheory

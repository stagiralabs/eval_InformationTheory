import VerifiedAgora.tagger

namespace AgoraInformationTheory

@[target]
theorem add_comm_nat (a b : Nat) : a + b = b + a := by
  simpa [Nat.add_comm] using rfl

end AgoraInformationTheory

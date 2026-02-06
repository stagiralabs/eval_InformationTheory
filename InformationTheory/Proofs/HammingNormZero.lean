import InformationTheory.Hamming

namespace AgoraInformationTheory

variable {ι : Type*} {β : ι → Type*} [Fintype ι] [∀ i, DecidableEq (β i)] [∀ i, Zero (β i)]

@[target]
theorem proof_hammingNorm_zero : hammingNorm (0 : ∀ i, β i) = 0 := by
  unfold hammingNorm
  simp

end AgoraInformationTheory

import InformationTheory.Hamming

namespace AgoraInformationTheory

variable {ι : Type*} {β : ι → Type*} [Fintype ι] [∀ i, DecidableEq (β i)] [∀ i, Zero (β i)]

@[target, simp]
theorem hammingDist_zero_right_proof (x : ∀ i, β i) : hammingDist x 0 = hammingNorm x := by
  unfold hammingDist hammingNorm
  rfl

end AgoraInformationTheory

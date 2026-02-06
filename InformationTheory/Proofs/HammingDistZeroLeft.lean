import InformationTheory.Hamming

namespace AgoraInformationTheory

variable {ι : Type*} {β : ι → Type*} [Fintype ι] [∀ i, DecidableEq (β i)] [∀ i, Zero (β i)]

@[target, simp]
theorem hammingDist_zero_left_proof : hammingDist (0 : ∀ i, β i) = hammingNorm := by
  ext y
  unfold hammingDist hammingNorm
  congr 1
  ext i
  simp only [Pi.zero_apply, ne_comm]

end AgoraInformationTheory

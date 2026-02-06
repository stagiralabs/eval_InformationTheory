import InformationTheory.Hamming

namespace AgoraInformationTheory

variable {ι : Type*} {β : ι → Type*} [Fintype ι] [∀ i, DecidableEq (β i)]

@[target]
theorem hammingDist_comm_proof (x y : ∀ i, β i) : hammingDist x y = hammingDist y x := by
  unfold hammingDist
  simp only [ne_comm]

end AgoraInformationTheory

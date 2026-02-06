import VerifiedAgora.tagger
import InformationTheory.Hamming

namespace AgoraInformationTheory

open Finset Function

variable {α ι : Type*} {β : ι → Type*} [Fintype ι] [∀ i, DecidableEq (β i)]

@[target]
theorem hammingDist_self_proof (x : ∀ i, β i) : hammingDist x x = 0 := by
  simp [hammingDist]

end AgoraInformationTheory

import Mathlib.Analysis.Normed.Group.Basic
import InformationTheory.Hamming

open AgoraInformationTheory

@[target]
theorem hammingDist_self_ne_one {ι : Type*} {β : ι → Type*} [Fintype ι] [∀ i, DecidableEq (β i)] (x : ∀ i, β i) :
  hammingDist x x ≠ 1 := by
  intro h
  have h0 := hammingDist_self (x := x)
  have : (0 : ℕ) = 1 := by
    simpa [h0] using h
  exact (Nat.succ_ne_self 0) this.symm
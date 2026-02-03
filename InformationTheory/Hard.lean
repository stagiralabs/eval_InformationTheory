import VerifiedAgora.tagger
import Mathlib.Data.Nat.Prime.Basic

namespace AgoraInformationTheory

-- Very hard: Prove there are infinitely many primes (already proven in mathlib but redeclaring)
@[target]
theorem hard_infinitely_many_primes : ∀ n : ℕ, ∃ p > n, Nat.Prime p := by sorry

-- Moderately hard: Fermat's little theorem variant
@[target]  
theorem hard_fermat_variant (p : ℕ) (hp : Nat.Prime p) (a : ℕ) (ha : ¬ p ∣ a) : 
    p ∣ (a ^ (p - 1) - 1) := by sorry

-- Challenging statement about primes
@[target]
theorem hard_prime_gap : ∀ n : ℕ, ∃ p q : ℕ, Nat.Prime p ∧ Nat.Prime q ∧ p < q ∧ q - p > n := by sorry

end AgoraInformationTheory

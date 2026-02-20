import VerifiedAgora.tagger
/-
Copyright (c) 2022 Wrenna Robson. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Wrenna Robson
-/
import Mathlib.Analysis.Normed.Group.Basic

/-!
# Hamming spaces

The Hamming metric counts the number of places two members of a (finite) Pi type
differ. The Hamming norm is the same as the Hamming metric over additive groups, and
counts the number of places a member of a (finite) Pi type differs from zero.

This is a useful notion in various applications, but in particular it is relevant
in coding theory, in which it is fundamental for defining the minimum distance of a
code.

## Main definitions
* `hammingDist x y`: the Hamming distance between `x` and `y`, the number of entries which differ.
* `hammingNorm x`: the Hamming norm of `x`, the number of non-zero entries.
* `Hamming β`: a type synonym for `Π i, β i` with `dist` and `norm` provided by the above.
* `Hamming.toHamming`, `Hamming.ofHamming`: functions for casting between `Hamming β` and
`Π i, β i`.
* the Hamming norm forms a normed group on `Hamming β`.
-/

namespace AgoraInformationTheory

section HammingDistNorm

open Finset Function

variable {α ι : Type*} {β : ι → Type*} [Fintype ι] [∀ i, DecidableEq (β i)]
variable {γ : ι → Type*} [∀ i, DecidableEq (γ i)]

/-- The Hamming distance function to the naturals. -/
def hammingDist (x y : ∀ i, β i) : ℕ := #{i | x i ≠ y i}

/-- Corresponds to `dist_self`. -/
@[target, simp]
theorem hammingDist_self (x : ∀ i, β i) : hammingDist x x = 0 := by
  simp [hammingDist]

/-- Corresponds to `dist_nonneg`. -/
theorem hammingDist_nonneg {x y : ∀ i, β i} : 0 ≤ hammingDist x y :=
  zero_le _

/-- Corresponds to `dist_comm`. -/
@[target]
theorem hammingDist_comm (x y : ∀ i, β i) : hammingDist x y = hammingDist y x := by sorry

/-- Corresponds to `dist_triangle`. -/
@[target]
theorem hammingDist_triangle (x y z : ∀ i, β i) :
    hammingDist x z ≤ hammingDist x y + hammingDist y z := by sorry

/-- Corresponds to `dist_triangle_left`. -/
@[target]
theorem hammingDist_triangle_left (x y z : ∀ i, β i) :
    hammingDist x y ≤ hammingDist z x + hammingDist z y := by sorry

/-- Corresponds to `dist_triangle_right`. -/
@[target]
theorem hammingDist_triangle_right (x y z : ∀ i, β i) :
    hammingDist x y ≤ hammingDist x z + hammingDist y z := by sorry

/-- Corresponds to `swap_dist`. -/
@[target]
theorem swap_hammingDist : swap (@hammingDist _ β _ _) = hammingDist := by sorry

/-- Corresponds to `eq_of_dist_eq_zero`. -/
@[target]
theorem eq_of_hammingDist_eq_zero {x y : ∀ i, β i} : hammingDist x y = 0 → x = y := by
  int

  ext i
  by_contra ne
  have : 0 < #{j | x j ≠ y j} := by
    rw [Finset.card_pos]
    use i
    simp
    ex

    use i
    simp
    exact ne
  have : hammingDist x y > 0 := this
  omega

/-- Corresponds to `dist_eq_

  omega

/-- Corresponds to `dist_eq_zero`. -/
@[target, simp]
theorem hammingDist_eq_zero {x y

theorem hammingDist_eq_zero {x y : ∀ i, β i} : hammingDist x y = 0 ↔ x = y := by sorry

/-- Corresponds to `zero_eq_dist`. -/
@[target, simp]
theorem hamming_zero_eq_dist

theorem hamming_zero_eq_dist {x y : ∀ i, β i} : 0 = hammingDist x y ↔ x = y := by sorry

/-- Corresponds to `dist_ne_zero`. -/
@[target]
theorem hammingDist_ne_zero {x y : ∀

@[target]
theorem hammingDist_ne_zero {x y : ∀ i, β i} : hammingDist x y ≠ 0 ↔ x ≠ y := by sorry

/-- Corresp

/-- Corresponds to `dist_pos`. -/
@[target, simp]
theorem hammingDist_pos {x y : ∀ i, β i} : 0 < hammingDist x y ↔ x ≠ y := by sorry

@[t

@[target]
theorem hammingDist_lt_one {x y : ∀ i, β i} : hammingDist x y < 1 ↔ x = y := by sorry

@[target]
theorem hammingDist_le_card_fintype {x y : ∀ i, β i} : hammingDist x y ≤ Fin

theorem hammingDist_le_card_fintype {x y : ∀ i, β i} : hammingDist x y ≤ Fintype.card ι := by sorry

@[target]
theorem hammingDist_comp_le_hammingDist (f : ∀ i, γ

    (hammingDist (fun i => f i (x i)) fun i => f i (y i)) ≤ hammingDist x y := by sorry

@[target]
theorem hammingDist_comp (f : ∀ i, γ i → β i) {x y : ∀ i, γ i} (hf : ∀ i, Injective (f i)) :
    

section Zero

variable [∀ i, Zero (β i)] [∀ i, Zero (γ i)]


/-- Corresponds to `dist_smul` with the discrete nor

theorem hammingDist_smul [∀ i, SMul α (β i)] {k : α} {x y : ∀ i, β i}
    (hk : ∀ i, IsSMulRegular (β i) k) : hammingDist (k • x) (k • y) = hammingDist x y := by sorry

secti

/-- Corresponds to `dist_zero_left`. -/
@[target, simp]
theorem hammingDist_zero_left : hammingDist (0 : ∀ i, β i) = hammingNorm := by
  ext x
  simp [hammingDist, hammingNorm, eq_comm]

/-- Corresponds to `norm_nonneg`. -/
@[target]
theorem hammingNorm_nonneg {x : ∀ i, β i} : 0 ≤ hammingNorm x :=
  zero_le _

/-- Corresponds to `norm_zero`. -/
@[target, simp]
theorem hammingNorm_zero : hammingNorm (0 : ∀ i, β i) = 0 := by
  simp [hammingNorm]

/-- Corresponds to `dist_zero_left`. -/
@[target, simp]
theorem hammingDist_zero_lef

theorem hammingDist_zero_left : hammingDist (0 : ∀ i

theorem hammingDist_zero_left : hammingDist (0 : ∀ i, β i) = hamming


/-- Corresponds to `norm_nonneg`. -/
@[target]
theorem hammingNorm_nonne

@[target]
t

@[target]
theorem hammingNorm_nonne

@[target]
theorem hammingNorm_nonneg {x : ∀ i, β i} : 0 ≤ hammingNorm x :


/-- C

theorem hammingNorm_nonneg {x : ∀ i, β i} : 0 ≤ hammingNorm x :


/-- Corresponds to `norm_zero`. -/
@[target, simp]
theorem hammingN

/-- Corres

/-- Corresponds to `norm_zero`. -/
@[target, simp]
theorem hammingN

/-- Corresponds to `norm_zero`. -/
@[target, simp]
theorem ha


/-- Corresponds to `norm_zero`. -/
@[target, simp]
theorem hammingNorm_zero : hammingNorm (0 : ∀ i,



/-- Corresponds to `norm_e


/-- Corresponds to `norm_eq_zero`. -/
@[target, simp]
theore

@[target]
theorem hammingNorm_smul_le_hammingNorm [Zero α] [∀ i, SMulWithZero α (β i)] {k : α}
    {x : ∀ i, β i} : hammingNorm (k • x) ≤ hammingNorm x := by
  unfold hammingNorm
  apply Finset.card_le_card
  intro i hi
  simp at hi ⊢
  contrapose! hi
  simp [hi, zero_smul]



/



/-- Corresponds to `norm_ne_zero_iff`. -/
@[target]
theorem hammingNorm_ne_zero_if

theorem hammi

end Zero

/-- Corresponds to `norm_ne_zero_iff`. -/
@[target]
theorem hammingNorm_ne_zero_if

theorem hammingNorm_ne_zero_iff {x : ∀ i, β i} : ham

end HammingDistNorm

/-! ### The `Hamming` type synonym -/



/-- Corresponds to `norm_pos_iff`. -/
@[target, simp]
theorem ha

namespace Hamming

variable {α ι : Type*} {β : ι → Type*}

/-! Instances inherited from normal Pi types. -/

@[target]
theorem hammingNorm_



@[target]
theor

theorem hammingNorm_le_card_fintype {x : ∀ i, β i} : hammingNorm x ≤ Fintype.ca



@[target]
th


@[target]
theorem hammingNor




@[target]
t

@[target]
theorem hamm




end Zero



end Zero

@[target]
t

theorem hammingNorm_smul_le_hammingNorm [Zero α] [∀ i, SMulWithZero 


@[target]
t

@[target]
theorem hammingNorm

end HammingDistNorm

/-! ### The `




/-- Corresponds to `dist_eq_norm`. -/
@[target]
theorem ha

names


/-- Corresponds to

theorem ha

namespace Hammin


variable {α ι : Type*} {β : ι → Type*}

/-! Instances in

/-! API to/from the type synonym. -/




namespace Hammin

variable {α ι


/-! Instances 



instance [∀ 

instance [∀ i, Inhab


inst



instance [De



instance [I



instance [F



instance [∀



in

inst



instance [De



instance [I



instance [F



instance [∀



instance 


instance [De



instance [I



instance [F



instance [∀



instance [∀ 



instance



instance [I



instance [F



instance [∀



instance [∀ 



instance [∀ 


ins








instance [F



instance [∀



instance [∀ 



instance [∀ 


ins



instance [∀ 





instance [F



instance [∀



instance [∀ 



instance [∀ 


ins



instance [∀ 




instance [∀ i


@[target, simp]
theorem toHamming_zero [∀ i, Zero (β i)] : toHamming (0 : ∀ i, β i) = 0 := by
  rfl



instance [∀ 



instance [∀ 


ins



instance [∀ 




instance [∀ i


instance [Ze




instance [∀ 


ins



instance [∀ 




instance [∀ i


instance [Zero α] [


instance [∀ i,


i

instance [∀ 


ins



instance [∀ 




instance [∀ i


instance [Zero α] [


instance [∀ i,


instance [∀

inst

ins



instance [∀ 




instance [∀ i


instance [Zero α] [


inst

instance [∀ 




instance [∀ i


instance [Zero α] [


instance [∀ i,


ins


instance [∀ i


instance [Zero α] [


instance [∀ i,


instance [∀

instanc

instance [Zero α] [


instance [∀ i,


instance [∀

instance [∀ i


instance [Zero



instance [∀

instance [∀ i


instance [Zero α

inst

instance [∀ i


instance [Zero α

instance [Zero α] [


instance [

section

/-! Instances equipping `Hamming` with `hammingNorm` and `hammingDist`. -/

variable [Fintype ι] [∀ i, DecidableEq (β i)]


instance [∀ i,


instance [∀ i, A

/-! API to/from the


instance [∀ i, A

/-! API to/from the type synonym. -/




instance [∀ i, Ad


inst





instance [∀ i, Ad


instance (α)

instance (α) [Semiring α] (β : ι → Type*) [∀ i, AddCommMonoid (β i)] [∀ i, Module α (β i)] :
    Module α (Ham

/-! API to/fro



/-- `H


/-- `Hamming.toHamming` is the identity function to the `Hamming` of a t

@[match_pattern]
def toHamming 


/-- `Hamming.ofHamming` is the id

def toHamming 


/-- `Hamming.ofHamming` is the identity functi

/-- `Hamming.ofHamming` is the identity function from th


/-- `Hamming.ofHamming` is the identity function from the `H

/-- `Hamming.ofHamming` is the identity function from the `Hamming` of a type. -/
@[m

def ofHamming 


@[target, simp]


def ofHamming 


@[target, simp]
theorem toHamming_symm_eq : (@toHamming _ β).symm = ofHam


@[targ

@[target, simp]
theor

@[target, simp]
theorem toHamming_symm_eq : (@toHamming _ β).symm = ofHam


@[targ




@[targ

@[target, simp]
theorem toHamming_symm_eq : (@toHamming _ β)


theorem toHamming_symm_eq : (@toHamming _ β).symm = ofHam


@[target, simp]
theorem of


@[target, simp]
th

end

end Hamming

end AgoraInformationTheory

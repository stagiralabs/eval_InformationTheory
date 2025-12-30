// Lean compiler output
// Module: Mathlib.Logic.Encodable.Basic
// Imports: Init Mathlib.Data.Countable.Defs Mathlib.Data.Fin.Basic Mathlib.Data.Nat.Find Mathlib.Data.PNat.Equiv Mathlib.Logic.Equiv.Nat Mathlib.Order.Directed Mathlib.Order.RelIso.Basic
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Fin_encodable___spec__3___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Fin_encodable___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Encodable_Prod_encodable___rarg___closed__2;
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Encodable_Prod_encodable___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_guard___at_Encodable_decode_u2082___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Subtype_encodable___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Bool_encodable___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_choose___at_Quotient_rep___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_decodeSigma(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_find___at_Quotient_rep___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_encodableQuotient___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_Bool_encodable___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Bool_encodable___spec__2___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_decidable__good___at_Quotient_rep___spec__3___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unique_encodable(lean_object*);
lean_object* l_Fin_equivSubtype(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Fin_encodable___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_choose(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Encodable_Prod_encodable___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_decodeSum_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_equivRangeEncode___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_decodeSubtype(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_encodable___lambda__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_encodable;
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_chooseX___at_Quotient_rep___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_encodeSubtype___at_instDecidableEqULower___spec__3___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_decidableEqOfEncodable___at_instDecidableEqULower___spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_encodeSum_match__1_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___elambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_encodeSigma___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_encodeSubtype___at_instDecidableEqULower___spec__3___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_findX___at_Quotient_rep___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_unpair(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_decodeSum_match__1_splitter(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_Prod_encodable(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___rarg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instDecidableEqULower___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_decodeSum(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Encodable_chooseX___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Int_encodable___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unique_encodable___rarg(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_decidable__good___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_PNat_encodable___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_chooseX___at_Quotient_rep___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Nat_findX___at_Encodable_chooseX___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unique_encodable___elambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_encodeSubtype_match__1_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_encode_x27___rarg(lean_object*);
static lean_object* l_PUnit_encodable___closed__1;
LEAN_EXPORT lean_object* l_Encodable_decode_u2082(lean_object*);
LEAN_EXPORT lean_object* l_PUnit_encodable___lambda__2(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_decodeSigma___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_encodable___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_encodable___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Unique_encodable___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_encodableQuotient___elambda__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULower_instInhabited___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_encodableQuotient___elambda__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Option_encodable___rarg___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_Encodable_encode_x27___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Bool_encodable;
LEAN_EXPORT lean_object* l_PUnit_encodable;
LEAN_EXPORT lean_object* l_encodableQuotient___elambda__1(lean_object*, lean_object*);
static lean_object* l_PLift_encodable___rarg___closed__1;
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_PNat_encodable___spec__1(lean_object*);
static lean_object* l_PUnit_encodable___closed__3;
LEAN_EXPORT lean_object* l_Nat_find___at_Quotient_rep___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_decidableRangeEncode___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULower_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Encodable_ofEquiv___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_decodeSum___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULower_up(lean_object*);
LEAN_EXPORT lean_object* l_instDecidableEqULower___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Equiv_ulift(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_decidableEqOfEncodable___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_choose___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Quotient_rep___spec__6(lean_object*);
static lean_object* l_IsEmpty_toEncodable___closed__3;
LEAN_EXPORT lean_object* l_Option_encodable(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_decidable__good___at_Quotient_rep___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instEncodableULower(lean_object*);
LEAN_EXPORT lean_object* l_encodableQuotient___elambda__2(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_encodeSubtype___at_instDecidableEqULower___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Encodable_ofLeftInverse___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Unique_encodable___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_chooseX(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULower_equiv___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Encodable_ofEquiv___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_findX___at_Quotient_rep___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_decidableEqOfEncodable(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_equivRangeEncode___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PUnit_encodable___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0____private_Mathlib_Logic_Encodable_Basic_0__Encodable_good_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Encodable_ofLeftInverse___at_Bool_encodable___spec__2___closed__1;
LEAN_EXPORT lean_object* l_Encodable_chooseX___at_Quotient_rep___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_encodeSubtype___at_instDecidableEqULower___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULower_down___rarg(lean_object*, lean_object*);
static lean_object* l_Encodable_ofLeftInverse___rarg___closed__1;
static lean_object* l_Nat_encodable___closed__2;
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Encodable_Prod_encodable___spec__3___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___elambda__2(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Encodable_ofLeftInjection___at_Fin_encodable___spec__3___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULower_equiv(lean_object*);
LEAN_EXPORT lean_object* l_encodableQuotient___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_pair(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_Fin_encodable___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_encode_x27(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_equivRangeEncode(lean_object*);
LEAN_EXPORT lean_object* l_PLift_encodable___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Encodable_Prod_encodable___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_find___at_Encodable_chooseX___spec__1(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Encodable_decidableRangeEncode___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_encodeSum_match__1_splitter___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_equivRangeEncode___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Encodable_ofEquiv___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_find___at_Encodable_chooseX___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_rep___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Subtype_encodable(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULift_encodable(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_encode_x27___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_instEncodableULower___rarg(lean_object*);
static lean_object* l_IsEmpty_toEncodable___closed__2;
LEAN_EXPORT lean_object* l_Nat_findX___at_Encodable_chooseX___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_encodeSum___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_IsEmpty_toEncodable___closed__1;
LEAN_EXPORT lean_object* l_Option_encodable___rarg___lambda__2___boxed(lean_object*, lean_object*);
static lean_object* l_Encodable_Prod_encodable___rarg___closed__1;
LEAN_EXPORT lean_object* l_IsEmpty_toEncodable(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Int_encodable___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_encodeSubtype___at_instDecidableEqULower___spec__2___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Encodable_ofLeftInverse___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0____private_Mathlib_Logic_Encodable_Basic_0__Encodable_good_match__1_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_equivRangeEncode___elambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Encodable_ofEquiv___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_decodeSigma___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_find___at_Encodable_chooseX___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Encodable_chooseX___spec__3(lean_object*, lean_object*);
extern lean_object* l_Equiv_pnatEquivNat;
LEAN_EXPORT lean_object* l_Unique_encodable___elambda__1___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_find___at_Quotient_rep___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_encodeSubtype___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Quotient_rep___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Directed_sequence_match__2_splitter___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Nat_encodable___closed__1;
lean_object* l_Equiv_symm___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Bool_encodable___spec__2___lambda__1(uint8_t);
LEAN_EXPORT lean_object* l_Encodable_encodeSum(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_Encodable_Prod_encodable___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_findX___at_Encodable_chooseX___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Directed_sequence_match__2_splitter___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Equiv_intEquivNat;
LEAN_EXPORT lean_object* l_ULower_up___rarg(lean_object*, lean_object*);
lean_object* l_Equiv_plift(lean_object*);
extern uint8_t l_instDecidableFalse;
LEAN_EXPORT lean_object* l_instDecidableEqULower(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Encodable_Prod_encodable___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_PNat_encodable;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_Int_encodable___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_PLift_encodable(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_Prod_encodable___rarg(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
static lean_object* l_Encodable_ofLeftInjection___at_Bool_encodable___spec__3___closed__1;
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_encodeSigma_match__1_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_choose___at_Quotient_rep___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_isEmptyElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Encodable_decidableEqOfEncodable___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_decode_u2082___rarg(lean_object*, lean_object*);
static lean_object* l_PUnit_encodable___closed__2;
lean_object* l_Nat_boddDiv2(lean_object*);
extern lean_object* l_Equiv_boolEquivPUnitSumPUnit;
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_encodeSigma(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_decodeSubtype___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_chooseX___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Bool_encodable___spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_decidable__good(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_Bool_encodable___spec__1___lambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_decidable__good___at_Quotient_rep___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_encodable___rarg___lambda__2(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_guard___at_Encodable_decode_u2082___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_encodeSubtype_match__1_splitter___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_Bool_encodable___spec__1___lambda__1(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_encodableQuotient(lean_object*);
static lean_object* l_PUnit_encodable___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___rarg___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Encodable_chooseX___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IsEmpty_toEncodable___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Unique_encodable___elambda__1___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Directed_sequence_match__2_splitter(lean_object*);
LEAN_EXPORT lean_object* l_ULift_encodable___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_encodeSubtype___at_instDecidableEqULower___spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_decodeSum___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Encodable_decidableEqOfEncodable___at_instDecidableEqULower___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_encodableQuotient___elambda__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Fin_encodable(lean_object*);
LEAN_EXPORT lean_object* l_Option_encodable___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_decidableEqOfEncodable___at_instDecidableEqULower___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_encodable(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_encodeSubtype___at_instDecidableEqULower___spec__2___rarg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IsEmpty_toEncodable___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_PNat_encodable___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sigma_encodable(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ULower_down(lean_object*);
LEAN_EXPORT lean_object* l_PUnit_encodable___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Int_encodable;
LEAN_EXPORT lean_object* l_Option_guard___at_Encodable_decode_u2082___spec__1___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_encodeSubtype___at_instDecidableEqULower___spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_encodeSigma_match__1_splitter___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sigma_encodable___rarg(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_equivRangeEncode___elambda__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_findX___at_Quotient_rep___spec__5(lean_object*);
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0____private_Mathlib_Logic_Encodable_Basic_0__Encodable_good_match__1_splitter(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_rep___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_choose___at_Quotient_rep___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_Encodable_Prod_encodable___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Quotient_rep(lean_object*);
LEAN_EXPORT lean_object* l_Encodable_decidableRangeEncode(lean_object*);
lean_object* l_Equiv_sigmaEquivProd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Encodable_Prod_encodable___spec__2(lean_object*, lean_object*);
static lean_object* l_ULift_encodable___rarg___closed__1;
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Quotient_rep___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Encodable_encodeSubtype(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Encodable_decidableEqOfEncodable___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
lean_inc(x_4);
x_5 = lean_apply_1(x_4, x_2);
x_6 = lean_apply_1(x_4, x_3);
x_7 = lean_nat_dec_eq(x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Encodable_decidableEqOfEncodable(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Encodable_decidableEqOfEncodable___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Encodable_decidableEqOfEncodable___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Encodable_decidableEqOfEncodable___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_4, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_apply_1(x_2, x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___elambda__1___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_3);
x_6 = lean_apply_1(x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___elambda__2___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___elambda__2___rarg), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
x_6 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Encodable_ofLeftInverse___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___elambda__2___rarg), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
x_6 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Encodable_ofLeftInverse___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___at_Encodable_ofLeftInverse___spec__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Encodable_ofLeftInverse___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Encodable_ofLeftInverse___rarg___lambda__1), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Encodable_ofLeftInverse___rarg___closed__1;
x_6 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_3);
x_7 = l_Encodable_ofLeftInjection___at_Encodable_ofLeftInverse___spec__1___rarg(x_1, x_2, x_6, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Encodable_ofLeftInverse___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Encodable_ofEquiv___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___elambda__2___rarg), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
x_6 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Encodable_ofEquiv___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___at_Encodable_ofEquiv___spec__2___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Encodable_ofEquiv___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Encodable_ofLeftInverse___rarg___closed__1;
x_6 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_3);
x_7 = l_Encodable_ofLeftInjection___at_Encodable_ofEquiv___spec__2___rarg(x_1, x_2, x_6, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Encodable_ofEquiv___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Encodable_ofLeftInverse___at_Encodable_ofEquiv___spec__1___rarg), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_Encodable_ofEquiv___rarg___lambda__1), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_alloc_closure((void*)(l_Equiv_symm___elambda__2___rarg), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = l_Encodable_ofLeftInverse___at_Encodable_ofEquiv___spec__1___rarg(x_1, x_3, x_4, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofEquiv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Encodable_ofEquiv___rarg), 2, 0);
return x_3;
}
}
static lean_object* _init_l_Nat_encodable___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_encodable___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Nat_encodable___closed__1;
x_2 = l_Encodable_ofLeftInverse___rarg___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Nat_encodable() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_encodable___closed__2;
return x_1;
}
}
LEAN_EXPORT lean_object* l_IsEmpty_toEncodable___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
static lean_object* _init_l_IsEmpty_toEncodable___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_isEmptyElim___boxed), 4, 3);
lean_closure_set(x_1, 0, lean_box(0));
lean_closure_set(x_1, 1, lean_box(0));
lean_closure_set(x_1, 2, lean_box(0));
return x_1;
}
}
static lean_object* _init_l_IsEmpty_toEncodable___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_IsEmpty_toEncodable___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_IsEmpty_toEncodable___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_IsEmpty_toEncodable___closed__1;
x_2 = l_IsEmpty_toEncodable___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsEmpty_toEncodable(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IsEmpty_toEncodable___closed__3;
return x_3;
}
}
LEAN_EXPORT lean_object* l_IsEmpty_toEncodable___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_IsEmpty_toEncodable___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PUnit_encodable___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(0u);
return x_2;
}
}
static lean_object* _init_l_PUnit_encodable___lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PUnit_encodable___lambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = l_PUnit_encodable___lambda__2___closed__1;
return x_5;
}
}
}
static lean_object* _init_l_PUnit_encodable___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PUnit_encodable___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_PUnit_encodable___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_PUnit_encodable___lambda__2___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_PUnit_encodable___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_PUnit_encodable___closed__1;
x_2 = l_PUnit_encodable___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_PUnit_encodable() {
_start:
{
lean_object* x_1; 
x_1 = l_PUnit_encodable___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_PUnit_encodable___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PUnit_encodable___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_PUnit_encodable___lambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_PUnit_encodable___lambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Option_encodable___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_unsigned_to_nat(0u);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_5, x_4);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_add(x_6, x_7);
lean_dec(x_6);
return x_8;
}
}
}
static lean_object* _init_l_Option_encodable___rarg___lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Option_encodable___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_2, x_5);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_7, x_6);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
x_9 = lean_box(0);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
}
else
{
lean_object* x_15; 
lean_dec(x_1);
x_15 = l_Option_encodable___rarg___lambda__2___closed__1;
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Option_encodable___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Option_encodable___rarg___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Option_encodable___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Option_encodable(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Option_encodable___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Option_encodable___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Option_encodable___rarg___lambda__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Option_guard___at_Encodable_decode_u2082___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
lean_inc(x_3);
x_5 = lean_apply_1(x_4, x_3);
x_6 = lean_nat_dec_eq(x_5, x_2);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_3);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_Option_guard___at_Encodable_decode_u2082___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Option_guard___at_Encodable_decode_u2082___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Encodable_decode_u2082___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_inc(x_2);
x_4 = lean_apply_1(x_3, x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(0);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_4, 0);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
lean_inc(x_7);
x_9 = lean_apply_1(x_8, x_7);
x_10 = lean_nat_dec_eq(x_9, x_2);
lean_dec(x_2);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
lean_free_object(x_4);
lean_dec(x_7);
x_11 = lean_box(0);
return x_11;
}
else
{
return x_4;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_4, 0);
lean_inc(x_12);
lean_dec(x_4);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
lean_inc(x_12);
x_14 = lean_apply_1(x_13, x_12);
x_15 = lean_nat_dec_eq(x_14, x_2);
lean_dec(x_2);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_12);
x_16 = lean_box(0);
return x_16;
}
else
{
lean_object* x_17; 
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_12);
return x_17;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Encodable_decode_u2082(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Encodable_decode_u2082___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Option_guard___at_Encodable_decode_u2082___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Option_guard___at_Encodable_decode_u2082___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Encodable_decidableRangeEncode___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Encodable_decode_u2082___rarg(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
uint8_t x_5; 
lean_dec(x_3);
x_5 = 1;
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_Encodable_decidableRangeEncode(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Encodable_decidableRangeEncode___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Encodable_decidableRangeEncode___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Encodable_decidableRangeEncode___rarg(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Encodable_equivRangeEncode___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Encodable_decode_u2082___rarg(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Encodable_equivRangeEncode___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Encodable_equivRangeEncode___elambda__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Encodable_equivRangeEncode___elambda__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Encodable_equivRangeEncode___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Encodable_equivRangeEncode___elambda__2___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Encodable_equivRangeEncode___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Encodable_equivRangeEncode___elambda__2___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Encodable_equivRangeEncode___elambda__1___rarg), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Encodable_equivRangeEncode(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Encodable_equivRangeEncode___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Unique_encodable___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unique_encodable___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Unique_encodable___elambda__1___rarg___boxed), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Unique_encodable___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_unsigned_to_nat(0u);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unique_encodable___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_Unique_encodable___elambda__2___boxed), 2, 1);
lean_closure_set(x_2, 0, lean_box(0));
x_3 = lean_alloc_closure((void*)(l_Unique_encodable___elambda__1___rarg___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Unique_encodable(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Unique_encodable___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Unique_encodable___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Unique_encodable___elambda__1___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Unique_encodable___elambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Unique_encodable___elambda__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_encodeSum___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_5, x_4);
x_7 = lean_unsigned_to_nat(2u);
x_8 = lean_nat_mul(x_7, x_6);
lean_dec(x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_1);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_apply_1(x_10, x_9);
x_12 = lean_unsigned_to_nat(2u);
x_13 = lean_nat_mul(x_12, x_11);
lean_dec(x_11);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_13, x_14);
lean_dec(x_13);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Encodable_encodeSum(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Encodable_encodeSum___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_decodeSum___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = l_Nat_boddDiv2(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_unbox(x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_1(x_8, x_7);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
x_10 = lean_box(0);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_9, 0, x_13);
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_9, 0);
lean_inc(x_14);
lean_dec(x_9);
x_15 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_1);
x_17 = lean_ctor_get(x_4, 1);
lean_inc(x_17);
lean_dec(x_4);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
lean_dec(x_2);
x_19 = lean_apply_1(x_18, x_17);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; 
x_20 = lean_box(0);
return x_20;
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_19, 0);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_19, 0, x_23);
return x_19;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_19, 0);
lean_inc(x_24);
lean_dec(x_19);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_25);
return x_26;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Encodable_decodeSum(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Encodable_decodeSum___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_decodeSum___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Encodable_decodeSum___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_encodeSum_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_encodeSum_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_encodeSum_match__1_splitter___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Sum_encodable___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_Encodable_encodeSum___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_alloc_closure((void*)(l_Encodable_decodeSum___rarg___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Sum_encodable(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Sum_encodable___rarg), 2, 0);
return x_3;
}
}
static lean_object* _init_l_Encodable_ofLeftInjection___at_Bool_encodable___spec__3___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_PUnit_encodable;
x_2 = l_Sum_encodable___rarg(x_1, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Bool_encodable___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_Encodable_ofLeftInjection___at_Bool_encodable___spec__3___closed__1;
x_5 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___elambda__2___rarg), 3, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_1);
x_6 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Bool_encodable___spec__2___lambda__1(uint8_t x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(x_1);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_Encodable_ofLeftInverse___at_Bool_encodable___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Encodable_ofLeftInverse___at_Bool_encodable___spec__2___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Bool_encodable___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Encodable_ofLeftInverse___at_Bool_encodable___spec__2___closed__1;
x_5 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_2);
x_6 = l_Encodable_ofLeftInjection___at_Bool_encodable___spec__3(x_1, x_5, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_Bool_encodable___spec__1___lambda__1(lean_object* x_1, uint8_t x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_box(x_2);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_Bool_encodable___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Encodable_ofEquiv___at_Bool_encodable___spec__1___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Equiv_symm___elambda__2___rarg), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_Encodable_ofLeftInverse___at_Bool_encodable___spec__2(x_2, x_3, lean_box(0));
return x_4;
}
}
static lean_object* _init_l_Bool_encodable() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Equiv_boolEquivPUnitSumPUnit;
x_2 = l_Encodable_ofEquiv___at_Bool_encodable___spec__1(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Bool_encodable___spec__2___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Encodable_ofLeftInverse___at_Bool_encodable___spec__2___lambda__1(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_Bool_encodable___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_Encodable_ofEquiv___at_Bool_encodable___spec__1___lambda__1(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_decodeSum_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_unbox(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_3(x_3, x_4, x_8, lean_box(0));
return x_9;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_decodeSum_match__1_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_decodeSum_match__1_splitter___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Encodable_encodeSigma___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
lean_inc(x_4);
x_7 = lean_apply_1(x_6, x_4);
x_8 = lean_apply_1(x_2, x_4);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_apply_1(x_9, x_5);
x_11 = l_Nat_pair(x_7, x_10);
lean_dec(x_10);
lean_dec(x_7);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Encodable_encodeSigma(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Encodable_encodeSigma___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_decodeSigma___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Nat_unpair(x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_1(x_8, x_6);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
lean_free_object(x_4);
lean_dec(x_7);
lean_dec(x_2);
x_10 = lean_box(0);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_11);
x_12 = lean_apply_1(x_2, x_11);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_apply_1(x_13, x_7);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
lean_dec(x_11);
lean_free_object(x_4);
x_15 = lean_box(0);
return x_15;
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_14, 0);
lean_ctor_set(x_4, 1, x_17);
lean_ctor_set(x_4, 0, x_11);
lean_ctor_set(x_14, 0, x_4);
return x_14;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_14, 0);
lean_inc(x_18);
lean_dec(x_14);
lean_ctor_set(x_4, 1, x_18);
lean_ctor_set(x_4, 0, x_11);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_4);
return x_19;
}
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_4, 0);
x_21 = lean_ctor_get(x_4, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_4);
x_22 = lean_ctor_get(x_1, 1);
lean_inc(x_22);
lean_dec(x_1);
x_23 = lean_apply_1(x_22, x_20);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; 
lean_dec(x_21);
lean_dec(x_2);
x_24 = lean_box(0);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_25);
x_26 = lean_apply_1(x_2, x_25);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_apply_1(x_27, x_21);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; 
lean_dec(x_25);
x_29 = lean_box(0);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_28, 0);
lean_inc(x_30);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 x_31 = x_28;
} else {
 lean_dec_ref(x_28);
 x_31 = lean_box(0);
}
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_25);
lean_ctor_set(x_32, 1, x_30);
if (lean_is_scalar(x_31)) {
 x_33 = lean_alloc_ctor(1, 1, 0);
} else {
 x_33 = x_31;
}
lean_ctor_set(x_33, 0, x_32);
return x_33;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Encodable_decodeSigma(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Encodable_decodeSigma___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_decodeSigma___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Encodable_decodeSigma___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_encodeSigma_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_encodeSigma_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_encodeSigma_match__1_splitter___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Sigma_encodable___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_Encodable_encodeSigma___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_alloc_closure((void*)(l_Encodable_decodeSigma___rarg___boxed), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Sigma_encodable(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Sigma_encodable___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Encodable_Prod_encodable___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Encodable_Prod_encodable___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___at_Encodable_Prod_encodable___spec__3___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = l_Sigma_encodable___rarg(x_1, x_6);
lean_inc(x_7);
x_8 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___elambda__2___rarg), 3, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_3);
x_9 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_4);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Encodable_Prod_encodable___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___at_Encodable_Prod_encodable___spec__3___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Encodable_Prod_encodable___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Encodable_ofLeftInverse___rarg___closed__1;
x_7 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_7, 0, x_6);
lean_closure_set(x_7, 1, x_4);
x_8 = l_Encodable_ofLeftInjection___at_Encodable_Prod_encodable___spec__3___rarg(x_1, x_2, x_3, x_7, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Encodable_Prod_encodable___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Encodable_ofLeftInverse___at_Encodable_Prod_encodable___spec__2___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_Encodable_Prod_encodable___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_Encodable_ofEquiv___rarg___lambda__1), 2, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_alloc_closure((void*)(l_Equiv_symm___elambda__2___rarg), 2, 1);
lean_closure_set(x_5, 0, x_3);
x_6 = l_Encodable_ofLeftInverse___at_Encodable_Prod_encodable___spec__2___rarg(x_1, x_2, x_4, x_5, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_Encodable_Prod_encodable___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Encodable_ofEquiv___at_Encodable_Prod_encodable___spec__1___rarg), 3, 0);
return x_3;
}
}
static lean_object* _init_l_Encodable_Prod_encodable___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_sigmaEquivProd(lean_box(0), lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Encodable_Prod_encodable___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Encodable_Prod_encodable___rarg___closed__1;
x_2 = l_Equiv_symm___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Encodable_Prod_encodable___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Encodable_Prod_encodable___rarg___closed__2;
x_4 = l_Encodable_ofEquiv___at_Encodable_Prod_encodable___spec__1___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Encodable_Prod_encodable(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Encodable_Prod_encodable___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Encodable_Prod_encodable___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Encodable_ofLeftInjection___at_Encodable_Prod_encodable___spec__3___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_encodeSubtype___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Encodable_encodeSubtype(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Encodable_encodeSubtype___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_decodeSubtype___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_4, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_box(0);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
x_9 = lean_apply_1(x_2, x_8);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
lean_free_object(x_5);
lean_dec(x_8);
x_11 = lean_box(0);
return x_11;
}
else
{
return x_5;
}
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_5, 0);
lean_inc(x_12);
lean_dec(x_5);
lean_inc(x_12);
x_13 = lean_apply_1(x_2, x_12);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_12);
x_15 = lean_box(0);
return x_15;
}
else
{
lean_object* x_16; 
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_12);
return x_16;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Encodable_decodeSubtype(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Encodable_decodeSubtype___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_encodeSubtype_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_2(x_2, x_1, lean_box(0));
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_encodeSubtype_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_encodeSubtype_match__1_splitter___rarg), 2, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Subtype_encodable___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_Encodable_encodeSubtype___rarg), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_Encodable_decodeSubtype___rarg), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Subtype_encodable(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Subtype_encodable___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Encodable_ofLeftInjection___at_Fin_encodable___spec__3___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_nat_dec_lt(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Fin_encodable___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___at_Fin_encodable___spec__3___lambda__1___boxed), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = l_Nat_encodable;
x_7 = l_Subtype_encodable___rarg(x_6, x_5);
lean_inc(x_7);
x_8 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___elambda__2___rarg), 3, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_2);
x_9 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___elambda__1___rarg), 3, 2);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_3);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Fin_encodable___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Encodable_ofLeftInverse___rarg___closed__1;
x_6 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_3);
x_7 = l_Encodable_ofLeftInjection___at_Fin_encodable___spec__3(x_1, x_2, x_6, lean_box(0));
return x_7;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_Fin_encodable___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_Encodable_ofEquiv___rarg___lambda__1), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_alloc_closure((void*)(l_Equiv_symm___elambda__2___rarg), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = l_Encodable_ofLeftInverse___at_Fin_encodable___spec__2(x_1, x_3, x_4, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Fin_encodable(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Fin_equivSubtype(x_1);
x_3 = l_Encodable_ofEquiv___at_Fin_encodable___spec__1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Fin_encodable___spec__3___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Encodable_ofLeftInjection___at_Fin_encodable___spec__3___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_Int_encodable___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_Nat_encodable;
x_5 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___elambda__2___rarg), 3, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_1);
x_6 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_Int_encodable___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Encodable_ofLeftInverse___rarg___closed__1;
x_5 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_2);
x_6 = l_Encodable_ofLeftInjection___at_Int_encodable___spec__3(x_1, x_5, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_Int_encodable___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Encodable_ofEquiv___rarg___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Equiv_symm___elambda__2___rarg), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_Encodable_ofLeftInverse___at_Int_encodable___spec__2(x_2, x_3, lean_box(0));
return x_4;
}
}
static lean_object* _init_l_Int_encodable() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Equiv_intEquivNat;
x_2 = l_Encodable_ofEquiv___at_Int_encodable___spec__1(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInjection___at_PNat_encodable___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_Nat_encodable;
x_5 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___elambda__2___rarg), 3, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_1);
x_6 = lean_alloc_closure((void*)(l_Encodable_ofLeftInjection___elambda__1___rarg), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofLeftInverse___at_PNat_encodable___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Encodable_ofLeftInverse___rarg___closed__1;
x_5 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_5, 0, x_4);
lean_closure_set(x_5, 1, x_2);
x_6 = l_Encodable_ofLeftInjection___at_PNat_encodable___spec__3(x_1, x_5, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Encodable_ofEquiv___at_PNat_encodable___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Encodable_ofEquiv___rarg___lambda__1), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Equiv_symm___elambda__2___rarg), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_Encodable_ofLeftInverse___at_PNat_encodable___spec__2(x_2, x_3, lean_box(0));
return x_4;
}
}
static lean_object* _init_l_PNat_encodable() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Equiv_pnatEquivNat;
x_2 = l_Encodable_ofEquiv___at_PNat_encodable___spec__1(x_1);
return x_2;
}
}
static lean_object* _init_l_ULift_encodable___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_ulift(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_ULift_encodable___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_ULift_encodable___rarg___closed__1;
x_3 = l_Encodable_ofEquiv___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ULift_encodable(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULift_encodable___rarg), 1, 0);
return x_2;
}
}
static lean_object* _init_l_PLift_encodable___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Equiv_plift(lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_PLift_encodable___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_PLift_encodable___rarg___closed__1;
x_3 = l_Encodable_ofEquiv___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_PLift_encodable(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_PLift_encodable___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Encodable_encodeSubtype___at_instDecidableEqULower___spec__2___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Encodable_encodeSubtype___at_instDecidableEqULower___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Encodable_encodeSubtype___at_instDecidableEqULower___spec__2___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_encodeSubtype___at_instDecidableEqULower___spec__3___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Encodable_encodeSubtype___at_instDecidableEqULower___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Encodable_encodeSubtype___at_instDecidableEqULower___spec__3___rarg___boxed), 1, 0);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Encodable_decidableEqOfEncodable___at_instDecidableEqULower___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_nat_dec_eq(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Encodable_decidableEqOfEncodable___at_instDecidableEqULower___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Encodable_decidableEqOfEncodable___at_instDecidableEqULower___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT uint8_t l_instDecidableEqULower___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Encodable_decidableEqOfEncodable___at_instDecidableEqULower___spec__1___rarg(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instDecidableEqULower(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instDecidableEqULower___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Encodable_encodeSubtype___at_instDecidableEqULower___spec__2___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Encodable_encodeSubtype___at_instDecidableEqULower___spec__2___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Encodable_encodeSubtype___at_instDecidableEqULower___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Encodable_encodeSubtype___at_instDecidableEqULower___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_encodeSubtype___at_instDecidableEqULower___spec__3___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Encodable_encodeSubtype___at_instDecidableEqULower___spec__3___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Encodable_encodeSubtype___at_instDecidableEqULower___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Encodable_encodeSubtype___at_instDecidableEqULower___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_decidableEqOfEncodable___at_instDecidableEqULower___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Encodable_decidableEqOfEncodable___at_instDecidableEqULower___spec__1___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instDecidableEqULower___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_instDecidableEqULower___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_instEncodableULower___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_Encodable_decidableRangeEncode___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Nat_encodable;
x_4 = l_Subtype_encodable___rarg(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_instEncodableULower(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instEncodableULower___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULower_equiv___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Encodable_equivRangeEncode___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULower_equiv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULower_equiv___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULower_down___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Encodable_equivRangeEncode___elambda__2___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ULower_down(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULower_down___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULower_instInhabited___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Encodable_equivRangeEncode___elambda__2___rarg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_ULower_instInhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULower_instInhabited___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_ULower_up___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Encodable_equivRangeEncode___rarg(x_1);
x_4 = l_Equiv_symm___elambda__2___rarg(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_ULower_up(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ULower_up___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_decidable__good___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; lean_object* x_4; 
lean_dec(x_1);
x_3 = l_instDecidableFalse;
x_4 = lean_box(x_3);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_apply_1(x_1, x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_decidable__good(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_decidable__good___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0____private_Mathlib_Logic_Encodable_Basic_0__Encodable_good_match__1_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_2);
lean_inc(x_3);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0____private_Mathlib_Logic_Encodable_Basic_0__Encodable_good_match__1_splitter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Logic_Encodable_Basic_0____private_Mathlib_Logic_Encodable_Basic_0__Encodable_good_match__1_splitter___rarg___boxed), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0____private_Mathlib_Logic_Encodable_Basic_0__Encodable_good_match__1_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Logic_Encodable_Basic_0____private_Mathlib_Logic_Encodable_Basic_0__Encodable_good_match__1_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Encodable_chooseX___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
lean_inc(x_3);
lean_inc(x_4);
x_6 = lean_apply_1(x_3, x_4);
lean_inc(x_2);
x_7 = l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_decidable__good___rarg(x_2, x_6);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_4, x_9);
lean_dec(x_4);
x_4 = x_10;
x_5 = lean_box(0);
goto _start;
}
else
{
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Encodable_chooseX___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Batteries_WF_0__WellFounded_fixC___at_Encodable_chooseX___spec__3___rarg___boxed), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_findX___at_Encodable_chooseX___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l___private_Batteries_WF_0__WellFounded_fixC___at_Encodable_chooseX___spec__3___rarg(x_1, x_2, x_3, x_5, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_findX___at_Encodable_chooseX___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_findX___at_Encodable_chooseX___spec__2___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Nat_find___at_Encodable_chooseX___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l___private_Batteries_WF_0__WellFounded_fixC___at_Encodable_chooseX___spec__3___rarg(x_1, x_2, x_3, x_5, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_find___at_Encodable_chooseX___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Nat_find___at_Encodable_chooseX___spec__1___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_chooseX___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_unsigned_to_nat(0u);
lean_inc(x_4);
x_6 = l___private_Batteries_WF_0__WellFounded_fixC___at_Encodable_chooseX___spec__3___rarg(x_1, x_2, x_4, x_5, lean_box(0));
lean_dec(x_1);
x_7 = lean_apply_1(x_4, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Encodable_chooseX(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Encodable_chooseX___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Encodable_chooseX___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Batteries_WF_0__WellFounded_fixC___at_Encodable_chooseX___spec__3___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Nat_findX___at_Encodable_chooseX___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Nat_findX___at_Encodable_chooseX___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Nat_find___at_Encodable_chooseX___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Nat_find___at_Encodable_chooseX___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Encodable_choose___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Encodable_chooseX___rarg(x_1, x_2, lean_box(0));
return x_4;
}
}
LEAN_EXPORT lean_object* l_Encodable_choose(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Encodable_choose___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Encodable_encode_x27___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Encodable_encode_x27___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Encodable_encode_x27___elambda__1___rarg), 2, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Encodable_encode_x27___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Encodable_encode_x27___elambda__1___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Encodable_encode_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Encodable_encode_x27___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Directed_sequence_match__2_splitter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
else
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Directed_sequence_match__2_splitter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Logic_Encodable_Basic_0__Directed_sequence_match__2_splitter___rarg___boxed), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Directed_sequence_match__2_splitter___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Mathlib_Logic_Encodable_Basic_0__Directed_sequence_match__2_splitter___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_decidable__good___at_Quotient_rep___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; lean_object* x_5; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = l_instDecidableFalse;
x_5 = lean_box(x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_2(x_1, x_6, x_2);
return x_7;
}
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_decidable__good___at_Quotient_rep___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_decidable__good___at_Quotient_rep___spec__3___rarg), 3, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Quotient_rep___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_inc(x_5);
lean_inc(x_6);
x_8 = lean_apply_1(x_5, x_6);
lean_inc(x_4);
lean_inc(x_2);
x_9 = l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_decidable__good___at_Quotient_rep___spec__3___rarg(x_2, x_4, x_8);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_6, x_11);
lean_dec(x_6);
x_6 = x_12;
x_7 = lean_box(0);
goto _start;
}
else
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Quotient_rep___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Batteries_WF_0__WellFounded_fixC___at_Quotient_rep___spec__6___rarg___boxed), 7, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_findX___at_Quotient_rep___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = l___private_Batteries_WF_0__WellFounded_fixC___at_Quotient_rep___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_7, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_Nat_findX___at_Quotient_rep___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_findX___at_Quotient_rep___spec__5___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Nat_find___at_Quotient_rep___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = l___private_Batteries_WF_0__WellFounded_fixC___at_Quotient_rep___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_7, lean_box(0));
return x_8;
}
}
LEAN_EXPORT lean_object* l_Nat_find___at_Quotient_rep___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Nat_find___at_Quotient_rep___spec__4___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Encodable_chooseX___at_Quotient_rep___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_unsigned_to_nat(0u);
lean_inc(x_6);
x_8 = l___private_Batteries_WF_0__WellFounded_fixC___at_Quotient_rep___spec__6___rarg(x_1, x_2, x_3, x_4, x_6, x_7, lean_box(0));
lean_dec(x_3);
x_9 = lean_apply_1(x_6, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Encodable_chooseX___at_Quotient_rep___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Encodable_chooseX___at_Quotient_rep___spec__2___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Encodable_choose___at_Quotient_rep___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Encodable_chooseX___at_Quotient_rep___spec__2___rarg(x_1, x_2, x_3, x_4, lean_box(0));
return x_6;
}
}
LEAN_EXPORT lean_object* l_Encodable_choose___at_Quotient_rep___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Encodable_choose___at_Quotient_rep___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Quotient_rep___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Encodable_chooseX___at_Quotient_rep___spec__2___rarg(x_1, x_2, x_3, x_4, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_Quotient_rep(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Quotient_rep___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_decidable__good___at_Quotient_rep___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Mathlib_Logic_Encodable_Basic_0__Encodable_decidable__good___at_Quotient_rep___spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Batteries_WF_0__WellFounded_fixC___at_Quotient_rep___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Batteries_WF_0__WellFounded_fixC___at_Quotient_rep___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Nat_findX___at_Quotient_rep___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Nat_findX___at_Quotient_rep___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Nat_find___at_Quotient_rep___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Nat_find___at_Quotient_rep___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Encodable_chooseX___at_Quotient_rep___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Encodable_chooseX___at_Quotient_rep___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Encodable_choose___at_Quotient_rep___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Encodable_choose___at_Quotient_rep___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Quotient_rep___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Quotient_rep___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_encodableQuotient___elambda__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_4);
if (x_6 == 0)
{
return x_4;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_encodableQuotient___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_encodableQuotient___elambda__1___rarg), 2, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_encodableQuotient___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = l_Encodable_chooseX___at_Quotient_rep___spec__2___rarg(x_1, x_2, x_3, x_4, lean_box(0));
x_7 = lean_apply_1(x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_encodableQuotient___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_encodableQuotient___elambda__2___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_encodableQuotient___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_encodableQuotient___elambda__2___rarg___boxed), 4, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
x_5 = lean_alloc_closure((void*)(l_encodableQuotient___elambda__1___rarg), 2, 1);
lean_closure_set(x_5, 0, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_encodableQuotient(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_encodableQuotient___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_encodableQuotient___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_encodableQuotient___elambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_encodableQuotient___elambda__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_encodableQuotient___elambda__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Countable_Defs(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Fin_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Find(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Data_PNat_Equiv(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Logic_Equiv_Nat(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_Directed(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Order_RelIso_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Logic_Encodable_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Countable_Defs(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Fin_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Find(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_PNat_Equiv(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Equiv_Nat(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_Directed(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Order_RelIso_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Encodable_ofLeftInverse___rarg___closed__1 = _init_l_Encodable_ofLeftInverse___rarg___closed__1();
lean_mark_persistent(l_Encodable_ofLeftInverse___rarg___closed__1);
l_Nat_encodable___closed__1 = _init_l_Nat_encodable___closed__1();
lean_mark_persistent(l_Nat_encodable___closed__1);
l_Nat_encodable___closed__2 = _init_l_Nat_encodable___closed__2();
lean_mark_persistent(l_Nat_encodable___closed__2);
l_Nat_encodable = _init_l_Nat_encodable();
lean_mark_persistent(l_Nat_encodable);
l_IsEmpty_toEncodable___closed__1 = _init_l_IsEmpty_toEncodable___closed__1();
lean_mark_persistent(l_IsEmpty_toEncodable___closed__1);
l_IsEmpty_toEncodable___closed__2 = _init_l_IsEmpty_toEncodable___closed__2();
lean_mark_persistent(l_IsEmpty_toEncodable___closed__2);
l_IsEmpty_toEncodable___closed__3 = _init_l_IsEmpty_toEncodable___closed__3();
lean_mark_persistent(l_IsEmpty_toEncodable___closed__3);
l_PUnit_encodable___lambda__2___closed__1 = _init_l_PUnit_encodable___lambda__2___closed__1();
lean_mark_persistent(l_PUnit_encodable___lambda__2___closed__1);
l_PUnit_encodable___closed__1 = _init_l_PUnit_encodable___closed__1();
lean_mark_persistent(l_PUnit_encodable___closed__1);
l_PUnit_encodable___closed__2 = _init_l_PUnit_encodable___closed__2();
lean_mark_persistent(l_PUnit_encodable___closed__2);
l_PUnit_encodable___closed__3 = _init_l_PUnit_encodable___closed__3();
lean_mark_persistent(l_PUnit_encodable___closed__3);
l_PUnit_encodable = _init_l_PUnit_encodable();
lean_mark_persistent(l_PUnit_encodable);
l_Option_encodable___rarg___lambda__2___closed__1 = _init_l_Option_encodable___rarg___lambda__2___closed__1();
lean_mark_persistent(l_Option_encodable___rarg___lambda__2___closed__1);
l_Encodable_ofLeftInjection___at_Bool_encodable___spec__3___closed__1 = _init_l_Encodable_ofLeftInjection___at_Bool_encodable___spec__3___closed__1();
lean_mark_persistent(l_Encodable_ofLeftInjection___at_Bool_encodable___spec__3___closed__1);
l_Encodable_ofLeftInverse___at_Bool_encodable___spec__2___closed__1 = _init_l_Encodable_ofLeftInverse___at_Bool_encodable___spec__2___closed__1();
lean_mark_persistent(l_Encodable_ofLeftInverse___at_Bool_encodable___spec__2___closed__1);
l_Bool_encodable = _init_l_Bool_encodable();
lean_mark_persistent(l_Bool_encodable);
l_Encodable_Prod_encodable___rarg___closed__1 = _init_l_Encodable_Prod_encodable___rarg___closed__1();
lean_mark_persistent(l_Encodable_Prod_encodable___rarg___closed__1);
l_Encodable_Prod_encodable___rarg___closed__2 = _init_l_Encodable_Prod_encodable___rarg___closed__2();
lean_mark_persistent(l_Encodable_Prod_encodable___rarg___closed__2);
l_Int_encodable = _init_l_Int_encodable();
lean_mark_persistent(l_Int_encodable);
l_PNat_encodable = _init_l_PNat_encodable();
lean_mark_persistent(l_PNat_encodable);
l_ULift_encodable___rarg___closed__1 = _init_l_ULift_encodable___rarg___closed__1();
lean_mark_persistent(l_ULift_encodable___rarg___closed__1);
l_PLift_encodable___rarg___closed__1 = _init_l_PLift_encodable___rarg___closed__1();
lean_mark_persistent(l_PLift_encodable___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif

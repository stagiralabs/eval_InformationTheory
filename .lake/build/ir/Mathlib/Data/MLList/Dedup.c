// Lean compiler output
// Module: Mathlib.Data.MLList.Dedup
// Imports: Init Mathlib.Init Batteries.Data.MLList.Basic Batteries.Data.HashMap.Basic
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
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__61(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_bind___at_MLList_dedupBy___spec__66___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__12___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MLList_liftM___at_MLList_dedupBy___spec__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__41___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__71(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_bind___at_MLList_dedupBy___spec__54(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__68___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__11___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__62___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__62___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__63(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__12___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__22___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__36(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__60(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_dedupBy___rarg___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__60___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__32(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__36___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__24___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__74___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__23___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_get___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__60___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_bind___at_MLList_dedupBy___spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__46(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__73___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_bind___at_MLList_dedupBy___spec__18___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__25___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_dedupBy___rarg___lambda__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_monadLift___at_MLList_dedupBy___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__40(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__27___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__62___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_modifyGet___at_MLList_dedupBy___spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__58___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__44___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__28(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_modifyGet___at_MLList_dedupBy___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_bind___at_MLList_dedupBy___spec__42___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__39___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__41___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__77___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__48___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__74___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_bind___at_MLList_dedupBy___spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__75(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__51(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__39___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__58___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__65___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__31___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_dedup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__26___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__26___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__32___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__29___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_liftM___at_MLList_dedupBy___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadLiftT(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__74(lean_object*, lean_object*, lean_object*);
static lean_object* l_MLList_dedupBy___rarg___closed__1;
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__50___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__26___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__52___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__58(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__65___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__17___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__47___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__17___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_bind___at_MLList_dedupBy___spec__30(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_monadLift___at_MLList_dedupBy___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_liftM___at_MLList_dedupBy___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__20(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__50(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__70___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__47(lean_object*, lean_object*, lean_object*);
static lean_object* l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___closed__1;
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__58___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_bind___at_MLList_dedupBy___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__75___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__31(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__75___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__64___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__45(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__43___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_monadLift___at_MLList_dedupBy___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__68___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__24___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__65___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__10___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__20___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__70(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__29___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__19(lean_object*, lean_object*, lean_object*);
lean_object* l_Batteries_HashMap_Imp_empty___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MLList_dedupBy(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_dedupBy___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__56___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__70___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__29___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__77___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__34___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_liftM___at_MLList_dedupBy___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__38(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__72___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__41___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__8___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__77___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__48(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__24___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_StateT_modifyGet___at_MLList_dedupBy___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__65(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__8___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__36___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___closed__2;
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__72___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__51___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__50___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___closed__3;
LEAN_EXPORT lean_object* l_MLList_monadLift___at_MLList_dedupBy___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__13___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__56(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__17___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_dedupBy___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MLList_dedupBy___rarg___lambda__4___closed__1;
uint8_t l_Batteries_HashMap_Imp_contains___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__25(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__63___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__62(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__38___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_bind___at_MLList_dedupBy___spec__42(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__41___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Batteries_Data_MLList_Basic_0__MLList_unconsImpl___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__49(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__72(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__53___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_monadLift___at_MLList_dedupBy___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__60___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__77(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__29___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__71___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__51___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__21___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__64(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__37(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__37___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__59___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__28___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___lambda__1(lean_object*);
lean_object* l_Batteries_HashMap_insert___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_dedupBy___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__46___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_dedupBy___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_thunk(lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__51___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__77___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__23(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__57(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__68(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__17(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__56___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__33(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__24(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__53___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__53___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__44___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_lift___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_monadLift___at_MLList_dedupBy___spec__5(lean_object*, lean_object*);
lean_object* l_StateT_instMonad___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__50___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__65___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_bind___at_MLList_dedupBy___spec__66(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__14___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__63___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__55(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_dedupBy___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_monadLift___at_MLList_dedupBy___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__52(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__44(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__20___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_MLList_monadLift___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_dedup___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__36___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__70___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__76(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__65___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_monadLift___at_MLList_dedupBy___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__19___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_monadLift___at_MLList_dedupBy___spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_dedupBy___rarg___lambda__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_dedupBy___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__73(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__53___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_MLList_liftM___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__41___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__29(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__67(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__14___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__10(lean_object*, lean_object*, lean_object*);
lean_object* l_MLList_runState_x27___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__34___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__41(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__57___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__44___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__38___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__39___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__48___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__53___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__39(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__69___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__68___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__27___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__59(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__45___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__38___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__55___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__49___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__32___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__67___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__46___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__20___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__34___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__33___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__26(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__69(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__17___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__72___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_bind___at_MLList_dedupBy___spec__54___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_dedupBy___rarg___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__76___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__29___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__74___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__77___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__48___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__56___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__15___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__22___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__22(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__61___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadLiftTOfMonadLift___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__40___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__17___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__63___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__34(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__32___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__35(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__22___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__53(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__46___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__35___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_bind___at_MLList_dedupBy___spec__30___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__14___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__16___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__75___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__43(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_MLList_liftM___at_MLList_dedupBy___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_instMonadLiftT), 2, 1);
lean_closure_set(x_1, 0, lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_MLList_liftM___at_MLList_dedupBy___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_1);
x_5 = l_StateT_instMonad___rarg(x_1);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_StateT_lift___rarg), 4, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = l_MLList_liftM___at_MLList_dedupBy___spec__1___rarg___closed__1;
x_8 = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___rarg), 4, 2);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_alloc_closure((void*)(l_MLList_liftM___elambda__1___rarg___boxed), 5, 4);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_5);
lean_closure_set(x_9, 2, x_8);
lean_closure_set(x_9, 3, x_4);
x_10 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MLList_liftM___at_MLList_dedupBy___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_liftM___at_MLList_dedupBy___spec__1___rarg___boxed), 4, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_monadLift___at_MLList_dedupBy___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_StateT_instMonad___rarg(x_1);
x_6 = lean_alloc_closure((void*)(l_MLList_monadLift___elambda__1___rarg___boxed), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MLList_monadLift___at_MLList_dedupBy___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MLList_monadLift___at_MLList_dedupBy___spec__2___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MLList_monadLift___at_MLList_dedupBy___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_StateT_instMonad___rarg(x_1);
x_6 = lean_alloc_closure((void*)(l_MLList_monadLift___elambda__1___rarg___boxed), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MLList_monadLift___at_MLList_dedupBy___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MLList_monadLift___at_MLList_dedupBy___spec__3___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_StateT_modifyGet___at_MLList_dedupBy___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_apply_1(x_5, x_6);
x_10 = lean_apply_2(x_8, lean_box(0), x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_StateT_modifyGet___at_MLList_dedupBy___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_StateT_modifyGet___at_MLList_dedupBy___spec__4___rarg___boxed), 6, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MLList_monadLift___at_MLList_dedupBy___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_StateT_instMonad___rarg(x_1);
x_6 = lean_alloc_closure((void*)(l_MLList_monadLift___elambda__1___rarg___boxed), 3, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MLList_monadLift___at_MLList_dedupBy___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MLList_monadLift___at_MLList_dedupBy___spec__5___rarg___boxed), 4, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__10___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_1, x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_6);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
return x_12;
}
else
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_5, 0);
lean_inc(x_13);
lean_dec(x_5);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_2);
x_17 = l_MLList_cases___at_MLList_dedupBy___spec__8___rarg(x_2, x_3, x_4, x_1, x_16);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
lean_dec(x_2);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
lean_ctor_set(x_13, 1, x_6);
lean_ctor_set(x_13, 0, x_18);
x_21 = lean_apply_2(x_20, lean_box(0), x_13);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
lean_inc(x_2);
x_24 = l_MLList_cases___at_MLList_dedupBy___spec__8___rarg(x_2, x_3, x_4, x_1, x_23);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_ctor_get(x_2, 0);
lean_inc(x_26);
lean_dec(x_2);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_6);
x_29 = lean_apply_2(x_27, lean_box(0), x_28);
return x_29;
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
x_10 = l___private_Batteries_Data_MLList_Basic_0__MLList_unconsImpl___rarg(x_5, x_6);
x_11 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__10___rarg___lambda__1), 6, 4);
lean_closure_set(x_11, 0, x_4);
lean_closure_set(x_11, 1, x_1);
lean_closure_set(x_11, 2, x_2);
lean_closure_set(x_11, 3, x_3);
x_12 = lean_apply_5(x_9, lean_box(0), lean_box(0), x_10, x_11, x_8);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__10___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_6 = l_StateT_instMonad___rarg(x_1);
x_7 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__10___rarg___boxed), 8, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_6);
lean_closure_set(x_7, 5, x_5);
x_8 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___at_MLList_dedupBy___spec__9___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__8___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__8___rarg(x_1, x_2, x_3, x_5, x_4);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_5);
x_6 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = l_MLList_casesM___at_MLList_dedupBy___spec__9___rarg(x_1, x_2, x_3, x_4, x_5);
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_5);
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_6, 0);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_mk_thunk(x_4);
lean_ctor_set_tag(x_6, 2);
lean_ctor_set(x_6, 0, x_10);
return x_6;
}
else
{
uint8_t x_11; 
lean_free_object(x_6);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__8___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
lean_closure_set(x_15, 2, x_3);
lean_closure_set(x_15, 3, x_14);
lean_closure_set(x_15, 4, x_4);
lean_closure_set(x_15, 5, x_13);
x_16 = lean_mk_thunk(x_15);
lean_ctor_set_tag(x_9, 2);
lean_ctor_set(x_9, 0, x_16);
return x_9;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
lean_dec(x_9);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__8___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_2);
lean_closure_set(x_20, 2, x_3);
lean_closure_set(x_20, 3, x_19);
lean_closure_set(x_20, 4, x_4);
lean_closure_set(x_20, 5, x_18);
x_21 = lean_mk_thunk(x_20);
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
}
else
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_6, 0);
lean_inc(x_23);
lean_dec(x_6);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = lean_mk_thunk(x_4);
x_25 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_25, 0, x_24);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_26 = lean_ctor_get(x_23, 0);
lean_inc(x_26);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 x_27 = x_23;
} else {
 lean_dec_ref(x_23);
 x_27 = lean_box(0);
}
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__8___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_30, 0, x_1);
lean_closure_set(x_30, 1, x_2);
lean_closure_set(x_30, 2, x_3);
lean_closure_set(x_30, 3, x_29);
lean_closure_set(x_30, 4, x_4);
lean_closure_set(x_30, 5, x_28);
x_31 = lean_mk_thunk(x_30);
if (lean_is_scalar(x_27)) {
 x_32 = lean_alloc_ctor(2, 1, 0);
} else {
 x_32 = x_27;
 lean_ctor_set_tag(x_32, 2);
}
lean_ctor_set(x_32, 0, x_31);
return x_32;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__8___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MLList_cases___at_MLList_dedupBy___spec__8___rarg(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_append___at_MLList_dedupBy___spec__7___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__14___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_1, x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_6);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
return x_12;
}
else
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_5, 0);
lean_inc(x_13);
lean_dec(x_5);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_2);
x_17 = l_MLList_cases___at_MLList_dedupBy___spec__12___rarg(x_2, x_3, x_4, x_1, x_16);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
lean_dec(x_2);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
lean_ctor_set(x_13, 1, x_6);
lean_ctor_set(x_13, 0, x_18);
x_21 = lean_apply_2(x_20, lean_box(0), x_13);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
lean_inc(x_2);
x_24 = l_MLList_cases___at_MLList_dedupBy___spec__12___rarg(x_2, x_3, x_4, x_1, x_23);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_ctor_get(x_2, 0);
lean_inc(x_26);
lean_dec(x_2);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_6);
x_29 = lean_apply_2(x_27, lean_box(0), x_28);
return x_29;
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__14___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
x_10 = l___private_Batteries_Data_MLList_Basic_0__MLList_unconsImpl___rarg(x_5, x_6);
x_11 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__14___rarg___lambda__1), 6, 4);
lean_closure_set(x_11, 0, x_4);
lean_closure_set(x_11, 1, x_1);
lean_closure_set(x_11, 2, x_2);
lean_closure_set(x_11, 3, x_3);
x_12 = lean_apply_5(x_9, lean_box(0), lean_box(0), x_10, x_11, x_8);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__14___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__13___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_6 = l_StateT_instMonad___rarg(x_1);
x_7 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__14___rarg___boxed), 8, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_6);
lean_closure_set(x_7, 5, x_5);
x_8 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___at_MLList_dedupBy___spec__13___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__12___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__12___rarg(x_1, x_2, x_3, x_5, x_4);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_5);
x_6 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = l_MLList_casesM___at_MLList_dedupBy___spec__13___rarg(x_1, x_2, x_3, x_4, x_5);
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_5);
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_6, 0);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_mk_thunk(x_4);
lean_ctor_set_tag(x_6, 2);
lean_ctor_set(x_6, 0, x_10);
return x_6;
}
else
{
uint8_t x_11; 
lean_free_object(x_6);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__12___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
lean_closure_set(x_15, 2, x_3);
lean_closure_set(x_15, 3, x_14);
lean_closure_set(x_15, 4, x_4);
lean_closure_set(x_15, 5, x_13);
x_16 = lean_mk_thunk(x_15);
lean_ctor_set_tag(x_9, 2);
lean_ctor_set(x_9, 0, x_16);
return x_9;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
lean_dec(x_9);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__12___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_2);
lean_closure_set(x_20, 2, x_3);
lean_closure_set(x_20, 3, x_19);
lean_closure_set(x_20, 4, x_4);
lean_closure_set(x_20, 5, x_18);
x_21 = lean_mk_thunk(x_20);
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
}
else
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_6, 0);
lean_inc(x_23);
lean_dec(x_6);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = lean_mk_thunk(x_4);
x_25 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_25, 0, x_24);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_26 = lean_ctor_get(x_23, 0);
lean_inc(x_26);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 x_27 = x_23;
} else {
 lean_dec_ref(x_23);
 x_27 = lean_box(0);
}
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__12___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_30, 0, x_1);
lean_closure_set(x_30, 1, x_2);
lean_closure_set(x_30, 2, x_3);
lean_closure_set(x_30, 3, x_29);
lean_closure_set(x_30, 4, x_4);
lean_closure_set(x_30, 5, x_28);
x_31 = lean_mk_thunk(x_30);
if (lean_is_scalar(x_27)) {
 x_32 = lean_alloc_ctor(2, 1, 0);
} else {
 x_32 = x_27;
 lean_ctor_set_tag(x_32, 2);
}
lean_ctor_set(x_32, 0, x_31);
return x_32;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__12___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MLList_cases___at_MLList_dedupBy___spec__12___rarg(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_append___at_MLList_dedupBy___spec__11___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__17___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MLList_cases___at_MLList_dedupBy___spec__15___rarg(x_1, x_2, x_3, x_5, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__17___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_6);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_5, 0);
lean_inc(x_12);
lean_dec(x_5);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
x_16 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
lean_inc(x_2);
x_19 = lean_apply_1(x_2, x_14);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_20 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__17___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_3);
lean_closure_set(x_20, 2, x_4);
lean_closure_set(x_20, 3, x_15);
lean_closure_set(x_20, 4, x_2);
x_21 = l_MLList_cases___at_MLList_dedupBy___spec__8___rarg(x_1, x_3, x_4, x_20, x_19);
lean_ctor_set(x_12, 1, x_6);
lean_ctor_set(x_12, 0, x_21);
x_22 = lean_apply_2(x_18, lean_box(0), x_12);
return x_22;
}
else
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_16, 0);
lean_inc(x_23);
lean_dec(x_16);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
x_24 = lean_ctor_get(x_1, 0);
lean_inc(x_24);
lean_dec(x_1);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_apply_1(x_2, x_14);
lean_ctor_set(x_12, 1, x_6);
lean_ctor_set(x_12, 0, x_26);
x_27 = lean_apply_2(x_25, lean_box(0), x_12);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_23);
x_28 = lean_ctor_get(x_1, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
lean_inc(x_2);
x_30 = lean_apply_1(x_2, x_14);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_31 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__17___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_31, 0, x_1);
lean_closure_set(x_31, 1, x_3);
lean_closure_set(x_31, 2, x_4);
lean_closure_set(x_31, 3, x_15);
lean_closure_set(x_31, 4, x_2);
x_32 = l_MLList_cases___at_MLList_dedupBy___spec__12___rarg(x_1, x_3, x_4, x_31, x_30);
lean_ctor_set(x_12, 1, x_6);
lean_ctor_set(x_12, 0, x_32);
x_33 = lean_apply_2(x_29, lean_box(0), x_12);
return x_33;
}
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_12, 0);
x_35 = lean_ctor_get(x_12, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_12);
lean_inc(x_35);
x_36 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_35);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_37 = lean_ctor_get(x_1, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
lean_inc(x_2);
x_39 = lean_apply_1(x_2, x_34);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_40 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__17___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_40, 0, x_1);
lean_closure_set(x_40, 1, x_3);
lean_closure_set(x_40, 2, x_4);
lean_closure_set(x_40, 3, x_35);
lean_closure_set(x_40, 4, x_2);
x_41 = l_MLList_cases___at_MLList_dedupBy___spec__8___rarg(x_1, x_3, x_4, x_40, x_39);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_6);
x_43 = lean_apply_2(x_38, lean_box(0), x_42);
return x_43;
}
else
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_36, 0);
lean_inc(x_44);
lean_dec(x_36);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_35);
lean_dec(x_4);
lean_dec(x_3);
x_45 = lean_ctor_get(x_1, 0);
lean_inc(x_45);
lean_dec(x_1);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
x_47 = lean_apply_1(x_2, x_34);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_6);
x_49 = lean_apply_2(x_46, lean_box(0), x_48);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_44);
x_50 = lean_ctor_get(x_1, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
lean_inc(x_2);
x_52 = lean_apply_1(x_2, x_34);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_53 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__17___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_53, 0, x_1);
lean_closure_set(x_53, 1, x_3);
lean_closure_set(x_53, 2, x_4);
lean_closure_set(x_53, 3, x_35);
lean_closure_set(x_53, 4, x_2);
x_54 = l_MLList_cases___at_MLList_dedupBy___spec__12___rarg(x_1, x_3, x_4, x_53, x_52);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_6);
x_56 = lean_apply_2(x_51, lean_box(0), x_55);
return x_56;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__17___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
x_10 = l___private_Batteries_Data_MLList_Basic_0__MLList_unconsImpl___rarg(x_5, x_6);
x_11 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__17___rarg___lambda__2), 6, 4);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_4);
lean_closure_set(x_11, 2, x_2);
lean_closure_set(x_11, 3, x_3);
x_12 = lean_apply_5(x_9, lean_box(0), lean_box(0), x_10, x_11, x_8);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__17___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__16___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_6 = l_StateT_instMonad___rarg(x_1);
x_7 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__17___rarg___boxed), 8, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_6);
lean_closure_set(x_7, 5, x_5);
x_8 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__16(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___at_MLList_dedupBy___spec__16___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_1);
x_8 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_1);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_2);
x_9 = lean_apply_1(x_2, x_3);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_10 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__17___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_10, 0, x_4);
lean_closure_set(x_10, 1, x_5);
lean_closure_set(x_10, 2, x_6);
lean_closure_set(x_10, 3, x_1);
lean_closure_set(x_10, 4, x_2);
x_11 = l_MLList_cases___at_MLList_dedupBy___spec__8___rarg(x_4, x_5, x_6, x_10, x_9);
return x_11;
}
else
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_13 = lean_apply_1(x_2, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_12);
lean_inc(x_2);
x_14 = lean_apply_1(x_2, x_3);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_15 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__17___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_15, 0, x_4);
lean_closure_set(x_15, 1, x_5);
lean_closure_set(x_15, 2, x_6);
lean_closure_set(x_15, 3, x_1);
lean_closure_set(x_15, 4, x_2);
x_16 = l_MLList_cases___at_MLList_dedupBy___spec__12___rarg(x_4, x_5, x_6, x_15, x_14);
return x_16;
}
}
}
}
static lean_object* _init_l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___closed__1;
x_2 = lean_mk_thunk(x_1);
return x_2;
}
}
static lean_object* _init_l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___closed__2;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__15___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_5);
x_6 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = l_MLList_casesM___at_MLList_dedupBy___spec__16___rarg(x_1, x_2, x_3, x_4, x_5);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_9 = l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___closed__3;
return x_9;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_8, 0);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___lambda__2___boxed), 7, 6);
lean_closure_set(x_14, 0, x_13);
lean_closure_set(x_14, 1, x_4);
lean_closure_set(x_14, 2, x_12);
lean_closure_set(x_14, 3, x_1);
lean_closure_set(x_14, 4, x_2);
lean_closure_set(x_14, 5, x_3);
x_15 = lean_mk_thunk(x_14);
lean_ctor_set_tag(x_8, 2);
lean_ctor_set(x_8, 0, x_15);
return x_8;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_8, 0);
lean_inc(x_16);
lean_dec(x_8);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___lambda__2___boxed), 7, 6);
lean_closure_set(x_19, 0, x_18);
lean_closure_set(x_19, 1, x_4);
lean_closure_set(x_19, 2, x_17);
lean_closure_set(x_19, 3, x_1);
lean_closure_set(x_19, 4, x_2);
lean_closure_set(x_19, 5, x_3);
x_20 = lean_mk_thunk(x_19);
x_21 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_21, 0, x_20);
return x_21;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__15(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__15___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_bind___at_MLList_dedupBy___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MLList_cases___at_MLList_dedupBy___spec__15___rarg(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MLList_bind___at_MLList_dedupBy___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_bind___at_MLList_dedupBy___spec__6___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__22___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_1, x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_6);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
return x_12;
}
else
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_5, 0);
lean_inc(x_13);
lean_dec(x_5);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_2);
x_17 = l_MLList_cases___at_MLList_dedupBy___spec__20___rarg(x_2, x_3, x_4, x_1, x_16);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
lean_dec(x_2);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
lean_ctor_set(x_13, 1, x_6);
lean_ctor_set(x_13, 0, x_18);
x_21 = lean_apply_2(x_20, lean_box(0), x_13);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
lean_inc(x_2);
x_24 = l_MLList_cases___at_MLList_dedupBy___spec__20___rarg(x_2, x_3, x_4, x_1, x_23);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_ctor_get(x_2, 0);
lean_inc(x_26);
lean_dec(x_2);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_6);
x_29 = lean_apply_2(x_27, lean_box(0), x_28);
return x_29;
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__22___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
x_10 = l___private_Batteries_Data_MLList_Basic_0__MLList_unconsImpl___rarg(x_5, x_6);
x_11 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__22___rarg___lambda__1), 6, 4);
lean_closure_set(x_11, 0, x_4);
lean_closure_set(x_11, 1, x_1);
lean_closure_set(x_11, 2, x_2);
lean_closure_set(x_11, 3, x_3);
x_12 = lean_apply_5(x_9, lean_box(0), lean_box(0), x_10, x_11, x_8);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__22(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__22___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__21___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_6 = l_StateT_instMonad___rarg(x_1);
x_7 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__22___rarg___boxed), 8, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_6);
lean_closure_set(x_7, 5, x_5);
x_8 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__21(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___at_MLList_dedupBy___spec__21___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__20___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__20___rarg(x_1, x_2, x_3, x_5, x_4);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__20___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_5);
x_6 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = l_MLList_casesM___at_MLList_dedupBy___spec__21___rarg(x_1, x_2, x_3, x_4, x_5);
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_5);
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_6, 0);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_mk_thunk(x_4);
lean_ctor_set_tag(x_6, 2);
lean_ctor_set(x_6, 0, x_10);
return x_6;
}
else
{
uint8_t x_11; 
lean_free_object(x_6);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__20___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
lean_closure_set(x_15, 2, x_3);
lean_closure_set(x_15, 3, x_14);
lean_closure_set(x_15, 4, x_4);
lean_closure_set(x_15, 5, x_13);
x_16 = lean_mk_thunk(x_15);
lean_ctor_set_tag(x_9, 2);
lean_ctor_set(x_9, 0, x_16);
return x_9;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
lean_dec(x_9);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__20___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_2);
lean_closure_set(x_20, 2, x_3);
lean_closure_set(x_20, 3, x_19);
lean_closure_set(x_20, 4, x_4);
lean_closure_set(x_20, 5, x_18);
x_21 = lean_mk_thunk(x_20);
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
}
else
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_6, 0);
lean_inc(x_23);
lean_dec(x_6);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = lean_mk_thunk(x_4);
x_25 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_25, 0, x_24);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_26 = lean_ctor_get(x_23, 0);
lean_inc(x_26);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 x_27 = x_23;
} else {
 lean_dec_ref(x_23);
 x_27 = lean_box(0);
}
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__20___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_30, 0, x_1);
lean_closure_set(x_30, 1, x_2);
lean_closure_set(x_30, 2, x_3);
lean_closure_set(x_30, 3, x_29);
lean_closure_set(x_30, 4, x_4);
lean_closure_set(x_30, 5, x_28);
x_31 = lean_mk_thunk(x_30);
if (lean_is_scalar(x_27)) {
 x_32 = lean_alloc_ctor(2, 1, 0);
} else {
 x_32 = x_27;
 lean_ctor_set_tag(x_32, 2);
}
lean_ctor_set(x_32, 0, x_31);
return x_32;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__20(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__20___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__19___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MLList_cases___at_MLList_dedupBy___spec__20___rarg(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__19(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_append___at_MLList_dedupBy___spec__19___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__26___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_1, x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_6);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
return x_12;
}
else
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_5, 0);
lean_inc(x_13);
lean_dec(x_5);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_2);
x_17 = l_MLList_cases___at_MLList_dedupBy___spec__24___rarg(x_2, x_3, x_4, x_1, x_16);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
lean_dec(x_2);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
lean_ctor_set(x_13, 1, x_6);
lean_ctor_set(x_13, 0, x_18);
x_21 = lean_apply_2(x_20, lean_box(0), x_13);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
lean_inc(x_2);
x_24 = l_MLList_cases___at_MLList_dedupBy___spec__24___rarg(x_2, x_3, x_4, x_1, x_23);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_ctor_get(x_2, 0);
lean_inc(x_26);
lean_dec(x_2);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_6);
x_29 = lean_apply_2(x_27, lean_box(0), x_28);
return x_29;
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__26___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
x_10 = l___private_Batteries_Data_MLList_Basic_0__MLList_unconsImpl___rarg(x_5, x_6);
x_11 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__26___rarg___lambda__1), 6, 4);
lean_closure_set(x_11, 0, x_4);
lean_closure_set(x_11, 1, x_1);
lean_closure_set(x_11, 2, x_2);
lean_closure_set(x_11, 3, x_3);
x_12 = lean_apply_5(x_9, lean_box(0), lean_box(0), x_10, x_11, x_8);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__26(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__26___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__25___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_6 = l_StateT_instMonad___rarg(x_1);
x_7 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__26___rarg___boxed), 8, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_6);
lean_closure_set(x_7, 5, x_5);
x_8 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__25(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___at_MLList_dedupBy___spec__25___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__24___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__24___rarg(x_1, x_2, x_3, x_5, x_4);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__24___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_5);
x_6 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = l_MLList_casesM___at_MLList_dedupBy___spec__25___rarg(x_1, x_2, x_3, x_4, x_5);
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_5);
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_6, 0);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_mk_thunk(x_4);
lean_ctor_set_tag(x_6, 2);
lean_ctor_set(x_6, 0, x_10);
return x_6;
}
else
{
uint8_t x_11; 
lean_free_object(x_6);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__24___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
lean_closure_set(x_15, 2, x_3);
lean_closure_set(x_15, 3, x_14);
lean_closure_set(x_15, 4, x_4);
lean_closure_set(x_15, 5, x_13);
x_16 = lean_mk_thunk(x_15);
lean_ctor_set_tag(x_9, 2);
lean_ctor_set(x_9, 0, x_16);
return x_9;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
lean_dec(x_9);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__24___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_2);
lean_closure_set(x_20, 2, x_3);
lean_closure_set(x_20, 3, x_19);
lean_closure_set(x_20, 4, x_4);
lean_closure_set(x_20, 5, x_18);
x_21 = lean_mk_thunk(x_20);
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
}
else
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_6, 0);
lean_inc(x_23);
lean_dec(x_6);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = lean_mk_thunk(x_4);
x_25 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_25, 0, x_24);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_26 = lean_ctor_get(x_23, 0);
lean_inc(x_26);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 x_27 = x_23;
} else {
 lean_dec_ref(x_23);
 x_27 = lean_box(0);
}
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__24___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_30, 0, x_1);
lean_closure_set(x_30, 1, x_2);
lean_closure_set(x_30, 2, x_3);
lean_closure_set(x_30, 3, x_29);
lean_closure_set(x_30, 4, x_4);
lean_closure_set(x_30, 5, x_28);
x_31 = lean_mk_thunk(x_30);
if (lean_is_scalar(x_27)) {
 x_32 = lean_alloc_ctor(2, 1, 0);
} else {
 x_32 = x_27;
 lean_ctor_set_tag(x_32, 2);
}
lean_ctor_set(x_32, 0, x_31);
return x_32;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__24(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__24___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__23___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MLList_cases___at_MLList_dedupBy___spec__24___rarg(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__23(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_append___at_MLList_dedupBy___spec__23___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__29___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MLList_cases___at_MLList_dedupBy___spec__27___rarg(x_1, x_2, x_3, x_5, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__29___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_6);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_5, 0);
lean_inc(x_12);
lean_dec(x_5);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
x_16 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
lean_inc(x_2);
x_19 = lean_apply_1(x_2, x_14);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_20 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__29___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_3);
lean_closure_set(x_20, 2, x_4);
lean_closure_set(x_20, 3, x_15);
lean_closure_set(x_20, 4, x_2);
x_21 = l_MLList_cases___at_MLList_dedupBy___spec__20___rarg(x_1, x_3, x_4, x_20, x_19);
lean_ctor_set(x_12, 1, x_6);
lean_ctor_set(x_12, 0, x_21);
x_22 = lean_apply_2(x_18, lean_box(0), x_12);
return x_22;
}
else
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_16, 0);
lean_inc(x_23);
lean_dec(x_16);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
x_24 = lean_ctor_get(x_1, 0);
lean_inc(x_24);
lean_dec(x_1);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_apply_1(x_2, x_14);
lean_ctor_set(x_12, 1, x_6);
lean_ctor_set(x_12, 0, x_26);
x_27 = lean_apply_2(x_25, lean_box(0), x_12);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_23);
x_28 = lean_ctor_get(x_1, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
lean_inc(x_2);
x_30 = lean_apply_1(x_2, x_14);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_31 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__29___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_31, 0, x_1);
lean_closure_set(x_31, 1, x_3);
lean_closure_set(x_31, 2, x_4);
lean_closure_set(x_31, 3, x_15);
lean_closure_set(x_31, 4, x_2);
x_32 = l_MLList_cases___at_MLList_dedupBy___spec__24___rarg(x_1, x_3, x_4, x_31, x_30);
lean_ctor_set(x_12, 1, x_6);
lean_ctor_set(x_12, 0, x_32);
x_33 = lean_apply_2(x_29, lean_box(0), x_12);
return x_33;
}
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_12, 0);
x_35 = lean_ctor_get(x_12, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_12);
lean_inc(x_35);
x_36 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_35);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_37 = lean_ctor_get(x_1, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
lean_inc(x_2);
x_39 = lean_apply_1(x_2, x_34);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_40 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__29___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_40, 0, x_1);
lean_closure_set(x_40, 1, x_3);
lean_closure_set(x_40, 2, x_4);
lean_closure_set(x_40, 3, x_35);
lean_closure_set(x_40, 4, x_2);
x_41 = l_MLList_cases___at_MLList_dedupBy___spec__20___rarg(x_1, x_3, x_4, x_40, x_39);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_6);
x_43 = lean_apply_2(x_38, lean_box(0), x_42);
return x_43;
}
else
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_36, 0);
lean_inc(x_44);
lean_dec(x_36);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_35);
lean_dec(x_4);
lean_dec(x_3);
x_45 = lean_ctor_get(x_1, 0);
lean_inc(x_45);
lean_dec(x_1);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
x_47 = lean_apply_1(x_2, x_34);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_6);
x_49 = lean_apply_2(x_46, lean_box(0), x_48);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_44);
x_50 = lean_ctor_get(x_1, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
lean_inc(x_2);
x_52 = lean_apply_1(x_2, x_34);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_53 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__29___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_53, 0, x_1);
lean_closure_set(x_53, 1, x_3);
lean_closure_set(x_53, 2, x_4);
lean_closure_set(x_53, 3, x_35);
lean_closure_set(x_53, 4, x_2);
x_54 = l_MLList_cases___at_MLList_dedupBy___spec__24___rarg(x_1, x_3, x_4, x_53, x_52);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_6);
x_56 = lean_apply_2(x_51, lean_box(0), x_55);
return x_56;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__29___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
x_10 = l___private_Batteries_Data_MLList_Basic_0__MLList_unconsImpl___rarg(x_5, x_6);
x_11 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__29___rarg___lambda__2), 6, 4);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_4);
lean_closure_set(x_11, 2, x_2);
lean_closure_set(x_11, 3, x_3);
x_12 = lean_apply_5(x_9, lean_box(0), lean_box(0), x_10, x_11, x_8);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__29(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__29___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__28___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_6 = l_StateT_instMonad___rarg(x_1);
x_7 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__29___rarg___boxed), 8, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_6);
lean_closure_set(x_7, 5, x_5);
x_8 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__28(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___at_MLList_dedupBy___spec__28___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__27___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_1);
x_8 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_1);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_2);
x_9 = lean_apply_1(x_2, x_3);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_10 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__29___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_10, 0, x_4);
lean_closure_set(x_10, 1, x_5);
lean_closure_set(x_10, 2, x_6);
lean_closure_set(x_10, 3, x_1);
lean_closure_set(x_10, 4, x_2);
x_11 = l_MLList_cases___at_MLList_dedupBy___spec__20___rarg(x_4, x_5, x_6, x_10, x_9);
return x_11;
}
else
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_13 = lean_apply_1(x_2, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_12);
lean_inc(x_2);
x_14 = lean_apply_1(x_2, x_3);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_15 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__29___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_15, 0, x_4);
lean_closure_set(x_15, 1, x_5);
lean_closure_set(x_15, 2, x_6);
lean_closure_set(x_15, 3, x_1);
lean_closure_set(x_15, 4, x_2);
x_16 = l_MLList_cases___at_MLList_dedupBy___spec__24___rarg(x_4, x_5, x_6, x_15, x_14);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_5);
x_6 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = l_MLList_casesM___at_MLList_dedupBy___spec__28___rarg(x_1, x_2, x_3, x_4, x_5);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_9 = l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___closed__3;
return x_9;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_8, 0);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__27___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_14, 0, x_13);
lean_closure_set(x_14, 1, x_4);
lean_closure_set(x_14, 2, x_12);
lean_closure_set(x_14, 3, x_1);
lean_closure_set(x_14, 4, x_2);
lean_closure_set(x_14, 5, x_3);
x_15 = lean_mk_thunk(x_14);
lean_ctor_set_tag(x_8, 2);
lean_ctor_set(x_8, 0, x_15);
return x_8;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_8, 0);
lean_inc(x_16);
lean_dec(x_8);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__27___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_19, 0, x_18);
lean_closure_set(x_19, 1, x_4);
lean_closure_set(x_19, 2, x_17);
lean_closure_set(x_19, 3, x_1);
lean_closure_set(x_19, 4, x_2);
lean_closure_set(x_19, 5, x_3);
x_20 = lean_mk_thunk(x_19);
x_21 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_21, 0, x_20);
return x_21;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__27(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__27___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_bind___at_MLList_dedupBy___spec__18___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MLList_cases___at_MLList_dedupBy___spec__27___rarg(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MLList_bind___at_MLList_dedupBy___spec__18(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_bind___at_MLList_dedupBy___spec__18___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__34___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_1, x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_6);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
return x_12;
}
else
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_5, 0);
lean_inc(x_13);
lean_dec(x_5);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_2);
x_17 = l_MLList_cases___at_MLList_dedupBy___spec__32___rarg(x_2, x_3, x_4, x_1, x_16);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
lean_dec(x_2);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
lean_ctor_set(x_13, 1, x_6);
lean_ctor_set(x_13, 0, x_18);
x_21 = lean_apply_2(x_20, lean_box(0), x_13);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
lean_inc(x_2);
x_24 = l_MLList_cases___at_MLList_dedupBy___spec__32___rarg(x_2, x_3, x_4, x_1, x_23);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_ctor_get(x_2, 0);
lean_inc(x_26);
lean_dec(x_2);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_6);
x_29 = lean_apply_2(x_27, lean_box(0), x_28);
return x_29;
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__34___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
x_10 = l___private_Batteries_Data_MLList_Basic_0__MLList_unconsImpl___rarg(x_5, x_6);
x_11 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__34___rarg___lambda__1), 6, 4);
lean_closure_set(x_11, 0, x_4);
lean_closure_set(x_11, 1, x_1);
lean_closure_set(x_11, 2, x_2);
lean_closure_set(x_11, 3, x_3);
x_12 = lean_apply_5(x_9, lean_box(0), lean_box(0), x_10, x_11, x_8);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__34(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__34___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__33___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_6 = l_StateT_instMonad___rarg(x_1);
x_7 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__34___rarg___boxed), 8, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_6);
lean_closure_set(x_7, 5, x_5);
x_8 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__33(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___at_MLList_dedupBy___spec__33___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__32___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__32___rarg(x_1, x_2, x_3, x_5, x_4);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__32___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_5);
x_6 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = l_MLList_casesM___at_MLList_dedupBy___spec__33___rarg(x_1, x_2, x_3, x_4, x_5);
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_5);
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_6, 0);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_mk_thunk(x_4);
lean_ctor_set_tag(x_6, 2);
lean_ctor_set(x_6, 0, x_10);
return x_6;
}
else
{
uint8_t x_11; 
lean_free_object(x_6);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__32___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
lean_closure_set(x_15, 2, x_3);
lean_closure_set(x_15, 3, x_14);
lean_closure_set(x_15, 4, x_4);
lean_closure_set(x_15, 5, x_13);
x_16 = lean_mk_thunk(x_15);
lean_ctor_set_tag(x_9, 2);
lean_ctor_set(x_9, 0, x_16);
return x_9;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
lean_dec(x_9);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__32___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_2);
lean_closure_set(x_20, 2, x_3);
lean_closure_set(x_20, 3, x_19);
lean_closure_set(x_20, 4, x_4);
lean_closure_set(x_20, 5, x_18);
x_21 = lean_mk_thunk(x_20);
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
}
else
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_6, 0);
lean_inc(x_23);
lean_dec(x_6);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = lean_mk_thunk(x_4);
x_25 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_25, 0, x_24);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_26 = lean_ctor_get(x_23, 0);
lean_inc(x_26);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 x_27 = x_23;
} else {
 lean_dec_ref(x_23);
 x_27 = lean_box(0);
}
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__32___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_30, 0, x_1);
lean_closure_set(x_30, 1, x_2);
lean_closure_set(x_30, 2, x_3);
lean_closure_set(x_30, 3, x_29);
lean_closure_set(x_30, 4, x_4);
lean_closure_set(x_30, 5, x_28);
x_31 = lean_mk_thunk(x_30);
if (lean_is_scalar(x_27)) {
 x_32 = lean_alloc_ctor(2, 1, 0);
} else {
 x_32 = x_27;
 lean_ctor_set_tag(x_32, 2);
}
lean_ctor_set(x_32, 0, x_31);
return x_32;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__32(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__32___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__31___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MLList_cases___at_MLList_dedupBy___spec__32___rarg(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__31(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_append___at_MLList_dedupBy___spec__31___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__38___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_1, x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_6);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
return x_12;
}
else
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_5, 0);
lean_inc(x_13);
lean_dec(x_5);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_2);
x_17 = l_MLList_cases___at_MLList_dedupBy___spec__36___rarg(x_2, x_3, x_4, x_1, x_16);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
lean_dec(x_2);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
lean_ctor_set(x_13, 1, x_6);
lean_ctor_set(x_13, 0, x_18);
x_21 = lean_apply_2(x_20, lean_box(0), x_13);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
lean_inc(x_2);
x_24 = l_MLList_cases___at_MLList_dedupBy___spec__36___rarg(x_2, x_3, x_4, x_1, x_23);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_ctor_get(x_2, 0);
lean_inc(x_26);
lean_dec(x_2);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_6);
x_29 = lean_apply_2(x_27, lean_box(0), x_28);
return x_29;
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__38___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
x_10 = l___private_Batteries_Data_MLList_Basic_0__MLList_unconsImpl___rarg(x_5, x_6);
x_11 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__38___rarg___lambda__1), 6, 4);
lean_closure_set(x_11, 0, x_4);
lean_closure_set(x_11, 1, x_1);
lean_closure_set(x_11, 2, x_2);
lean_closure_set(x_11, 3, x_3);
x_12 = lean_apply_5(x_9, lean_box(0), lean_box(0), x_10, x_11, x_8);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__38(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__38___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__37___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_6 = l_StateT_instMonad___rarg(x_1);
x_7 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__38___rarg___boxed), 8, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_6);
lean_closure_set(x_7, 5, x_5);
x_8 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__37(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___at_MLList_dedupBy___spec__37___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__36___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__36___rarg(x_1, x_2, x_3, x_5, x_4);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__36___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_5);
x_6 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = l_MLList_casesM___at_MLList_dedupBy___spec__37___rarg(x_1, x_2, x_3, x_4, x_5);
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_5);
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_6, 0);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_mk_thunk(x_4);
lean_ctor_set_tag(x_6, 2);
lean_ctor_set(x_6, 0, x_10);
return x_6;
}
else
{
uint8_t x_11; 
lean_free_object(x_6);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__36___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
lean_closure_set(x_15, 2, x_3);
lean_closure_set(x_15, 3, x_14);
lean_closure_set(x_15, 4, x_4);
lean_closure_set(x_15, 5, x_13);
x_16 = lean_mk_thunk(x_15);
lean_ctor_set_tag(x_9, 2);
lean_ctor_set(x_9, 0, x_16);
return x_9;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
lean_dec(x_9);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__36___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_2);
lean_closure_set(x_20, 2, x_3);
lean_closure_set(x_20, 3, x_19);
lean_closure_set(x_20, 4, x_4);
lean_closure_set(x_20, 5, x_18);
x_21 = lean_mk_thunk(x_20);
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
}
else
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_6, 0);
lean_inc(x_23);
lean_dec(x_6);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = lean_mk_thunk(x_4);
x_25 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_25, 0, x_24);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_26 = lean_ctor_get(x_23, 0);
lean_inc(x_26);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 x_27 = x_23;
} else {
 lean_dec_ref(x_23);
 x_27 = lean_box(0);
}
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__36___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_30, 0, x_1);
lean_closure_set(x_30, 1, x_2);
lean_closure_set(x_30, 2, x_3);
lean_closure_set(x_30, 3, x_29);
lean_closure_set(x_30, 4, x_4);
lean_closure_set(x_30, 5, x_28);
x_31 = lean_mk_thunk(x_30);
if (lean_is_scalar(x_27)) {
 x_32 = lean_alloc_ctor(2, 1, 0);
} else {
 x_32 = x_27;
 lean_ctor_set_tag(x_32, 2);
}
lean_ctor_set(x_32, 0, x_31);
return x_32;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__36(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__36___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__35___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MLList_cases___at_MLList_dedupBy___spec__36___rarg(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__35(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_append___at_MLList_dedupBy___spec__35___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__41___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MLList_cases___at_MLList_dedupBy___spec__39___rarg(x_1, x_2, x_3, x_5, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__41___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_6);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_5, 0);
lean_inc(x_12);
lean_dec(x_5);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
x_16 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
lean_inc(x_2);
x_19 = lean_apply_1(x_2, x_14);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_20 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__41___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_3);
lean_closure_set(x_20, 2, x_4);
lean_closure_set(x_20, 3, x_15);
lean_closure_set(x_20, 4, x_2);
x_21 = l_MLList_cases___at_MLList_dedupBy___spec__32___rarg(x_1, x_3, x_4, x_20, x_19);
lean_ctor_set(x_12, 1, x_6);
lean_ctor_set(x_12, 0, x_21);
x_22 = lean_apply_2(x_18, lean_box(0), x_12);
return x_22;
}
else
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_16, 0);
lean_inc(x_23);
lean_dec(x_16);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
x_24 = lean_ctor_get(x_1, 0);
lean_inc(x_24);
lean_dec(x_1);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_apply_1(x_2, x_14);
lean_ctor_set(x_12, 1, x_6);
lean_ctor_set(x_12, 0, x_26);
x_27 = lean_apply_2(x_25, lean_box(0), x_12);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_23);
x_28 = lean_ctor_get(x_1, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
lean_inc(x_2);
x_30 = lean_apply_1(x_2, x_14);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_31 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__41___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_31, 0, x_1);
lean_closure_set(x_31, 1, x_3);
lean_closure_set(x_31, 2, x_4);
lean_closure_set(x_31, 3, x_15);
lean_closure_set(x_31, 4, x_2);
x_32 = l_MLList_cases___at_MLList_dedupBy___spec__36___rarg(x_1, x_3, x_4, x_31, x_30);
lean_ctor_set(x_12, 1, x_6);
lean_ctor_set(x_12, 0, x_32);
x_33 = lean_apply_2(x_29, lean_box(0), x_12);
return x_33;
}
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_12, 0);
x_35 = lean_ctor_get(x_12, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_12);
lean_inc(x_35);
x_36 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_35);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_37 = lean_ctor_get(x_1, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
lean_inc(x_2);
x_39 = lean_apply_1(x_2, x_34);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_40 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__41___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_40, 0, x_1);
lean_closure_set(x_40, 1, x_3);
lean_closure_set(x_40, 2, x_4);
lean_closure_set(x_40, 3, x_35);
lean_closure_set(x_40, 4, x_2);
x_41 = l_MLList_cases___at_MLList_dedupBy___spec__32___rarg(x_1, x_3, x_4, x_40, x_39);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_6);
x_43 = lean_apply_2(x_38, lean_box(0), x_42);
return x_43;
}
else
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_36, 0);
lean_inc(x_44);
lean_dec(x_36);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_35);
lean_dec(x_4);
lean_dec(x_3);
x_45 = lean_ctor_get(x_1, 0);
lean_inc(x_45);
lean_dec(x_1);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
x_47 = lean_apply_1(x_2, x_34);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_6);
x_49 = lean_apply_2(x_46, lean_box(0), x_48);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_44);
x_50 = lean_ctor_get(x_1, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
lean_inc(x_2);
x_52 = lean_apply_1(x_2, x_34);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_53 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__41___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_53, 0, x_1);
lean_closure_set(x_53, 1, x_3);
lean_closure_set(x_53, 2, x_4);
lean_closure_set(x_53, 3, x_35);
lean_closure_set(x_53, 4, x_2);
x_54 = l_MLList_cases___at_MLList_dedupBy___spec__36___rarg(x_1, x_3, x_4, x_53, x_52);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_6);
x_56 = lean_apply_2(x_51, lean_box(0), x_55);
return x_56;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__41___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
x_10 = l___private_Batteries_Data_MLList_Basic_0__MLList_unconsImpl___rarg(x_5, x_6);
x_11 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__41___rarg___lambda__2), 6, 4);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_4);
lean_closure_set(x_11, 2, x_2);
lean_closure_set(x_11, 3, x_3);
x_12 = lean_apply_5(x_9, lean_box(0), lean_box(0), x_10, x_11, x_8);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__41(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__41___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__40___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_6 = l_StateT_instMonad___rarg(x_1);
x_7 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__41___rarg___boxed), 8, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_6);
lean_closure_set(x_7, 5, x_5);
x_8 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__40(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___at_MLList_dedupBy___spec__40___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__39___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_1);
x_8 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_1);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_2);
x_9 = lean_apply_1(x_2, x_3);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_10 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__41___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_10, 0, x_4);
lean_closure_set(x_10, 1, x_5);
lean_closure_set(x_10, 2, x_6);
lean_closure_set(x_10, 3, x_1);
lean_closure_set(x_10, 4, x_2);
x_11 = l_MLList_cases___at_MLList_dedupBy___spec__32___rarg(x_4, x_5, x_6, x_10, x_9);
return x_11;
}
else
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_13 = lean_apply_1(x_2, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_12);
lean_inc(x_2);
x_14 = lean_apply_1(x_2, x_3);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_15 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__41___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_15, 0, x_4);
lean_closure_set(x_15, 1, x_5);
lean_closure_set(x_15, 2, x_6);
lean_closure_set(x_15, 3, x_1);
lean_closure_set(x_15, 4, x_2);
x_16 = l_MLList_cases___at_MLList_dedupBy___spec__36___rarg(x_4, x_5, x_6, x_15, x_14);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__39___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_5);
x_6 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = l_MLList_casesM___at_MLList_dedupBy___spec__40___rarg(x_1, x_2, x_3, x_4, x_5);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_9 = l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___closed__3;
return x_9;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_8, 0);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__39___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_14, 0, x_13);
lean_closure_set(x_14, 1, x_4);
lean_closure_set(x_14, 2, x_12);
lean_closure_set(x_14, 3, x_1);
lean_closure_set(x_14, 4, x_2);
lean_closure_set(x_14, 5, x_3);
x_15 = lean_mk_thunk(x_14);
lean_ctor_set_tag(x_8, 2);
lean_ctor_set(x_8, 0, x_15);
return x_8;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_8, 0);
lean_inc(x_16);
lean_dec(x_8);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__39___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_19, 0, x_18);
lean_closure_set(x_19, 1, x_4);
lean_closure_set(x_19, 2, x_17);
lean_closure_set(x_19, 3, x_1);
lean_closure_set(x_19, 4, x_2);
lean_closure_set(x_19, 5, x_3);
x_20 = lean_mk_thunk(x_19);
x_21 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_21, 0, x_20);
return x_21;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__39(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__39___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_bind___at_MLList_dedupBy___spec__30___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MLList_cases___at_MLList_dedupBy___spec__39___rarg(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MLList_bind___at_MLList_dedupBy___spec__30(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_bind___at_MLList_dedupBy___spec__30___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__46___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_1, x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_6);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
return x_12;
}
else
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_5, 0);
lean_inc(x_13);
lean_dec(x_5);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_2);
x_17 = l_MLList_cases___at_MLList_dedupBy___spec__44___rarg(x_2, x_3, x_4, x_1, x_16);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
lean_dec(x_2);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
lean_ctor_set(x_13, 1, x_6);
lean_ctor_set(x_13, 0, x_18);
x_21 = lean_apply_2(x_20, lean_box(0), x_13);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
lean_inc(x_2);
x_24 = l_MLList_cases___at_MLList_dedupBy___spec__44___rarg(x_2, x_3, x_4, x_1, x_23);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_ctor_get(x_2, 0);
lean_inc(x_26);
lean_dec(x_2);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_6);
x_29 = lean_apply_2(x_27, lean_box(0), x_28);
return x_29;
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__46___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
x_10 = l___private_Batteries_Data_MLList_Basic_0__MLList_unconsImpl___rarg(x_5, x_6);
x_11 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__46___rarg___lambda__1), 6, 4);
lean_closure_set(x_11, 0, x_4);
lean_closure_set(x_11, 1, x_1);
lean_closure_set(x_11, 2, x_2);
lean_closure_set(x_11, 3, x_3);
x_12 = lean_apply_5(x_9, lean_box(0), lean_box(0), x_10, x_11, x_8);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__46(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__46___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__45___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_6 = l_StateT_instMonad___rarg(x_1);
x_7 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__46___rarg___boxed), 8, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_6);
lean_closure_set(x_7, 5, x_5);
x_8 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__45(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___at_MLList_dedupBy___spec__45___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__44___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__44___rarg(x_1, x_2, x_3, x_5, x_4);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__44___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_5);
x_6 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = l_MLList_casesM___at_MLList_dedupBy___spec__45___rarg(x_1, x_2, x_3, x_4, x_5);
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_5);
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_6, 0);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_mk_thunk(x_4);
lean_ctor_set_tag(x_6, 2);
lean_ctor_set(x_6, 0, x_10);
return x_6;
}
else
{
uint8_t x_11; 
lean_free_object(x_6);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__44___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
lean_closure_set(x_15, 2, x_3);
lean_closure_set(x_15, 3, x_14);
lean_closure_set(x_15, 4, x_4);
lean_closure_set(x_15, 5, x_13);
x_16 = lean_mk_thunk(x_15);
lean_ctor_set_tag(x_9, 2);
lean_ctor_set(x_9, 0, x_16);
return x_9;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
lean_dec(x_9);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__44___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_2);
lean_closure_set(x_20, 2, x_3);
lean_closure_set(x_20, 3, x_19);
lean_closure_set(x_20, 4, x_4);
lean_closure_set(x_20, 5, x_18);
x_21 = lean_mk_thunk(x_20);
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
}
else
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_6, 0);
lean_inc(x_23);
lean_dec(x_6);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = lean_mk_thunk(x_4);
x_25 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_25, 0, x_24);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_26 = lean_ctor_get(x_23, 0);
lean_inc(x_26);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 x_27 = x_23;
} else {
 lean_dec_ref(x_23);
 x_27 = lean_box(0);
}
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__44___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_30, 0, x_1);
lean_closure_set(x_30, 1, x_2);
lean_closure_set(x_30, 2, x_3);
lean_closure_set(x_30, 3, x_29);
lean_closure_set(x_30, 4, x_4);
lean_closure_set(x_30, 5, x_28);
x_31 = lean_mk_thunk(x_30);
if (lean_is_scalar(x_27)) {
 x_32 = lean_alloc_ctor(2, 1, 0);
} else {
 x_32 = x_27;
 lean_ctor_set_tag(x_32, 2);
}
lean_ctor_set(x_32, 0, x_31);
return x_32;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__44(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__44___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__43___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MLList_cases___at_MLList_dedupBy___spec__44___rarg(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__43(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_append___at_MLList_dedupBy___spec__43___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__50___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_1, x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_6);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
return x_12;
}
else
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_5, 0);
lean_inc(x_13);
lean_dec(x_5);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_2);
x_17 = l_MLList_cases___at_MLList_dedupBy___spec__48___rarg(x_2, x_3, x_4, x_1, x_16);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
lean_dec(x_2);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
lean_ctor_set(x_13, 1, x_6);
lean_ctor_set(x_13, 0, x_18);
x_21 = lean_apply_2(x_20, lean_box(0), x_13);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
lean_inc(x_2);
x_24 = l_MLList_cases___at_MLList_dedupBy___spec__48___rarg(x_2, x_3, x_4, x_1, x_23);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_ctor_get(x_2, 0);
lean_inc(x_26);
lean_dec(x_2);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_6);
x_29 = lean_apply_2(x_27, lean_box(0), x_28);
return x_29;
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__50___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
x_10 = l___private_Batteries_Data_MLList_Basic_0__MLList_unconsImpl___rarg(x_5, x_6);
x_11 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__50___rarg___lambda__1), 6, 4);
lean_closure_set(x_11, 0, x_4);
lean_closure_set(x_11, 1, x_1);
lean_closure_set(x_11, 2, x_2);
lean_closure_set(x_11, 3, x_3);
x_12 = lean_apply_5(x_9, lean_box(0), lean_box(0), x_10, x_11, x_8);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__50(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__50___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__49___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_6 = l_StateT_instMonad___rarg(x_1);
x_7 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__50___rarg___boxed), 8, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_6);
lean_closure_set(x_7, 5, x_5);
x_8 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__49(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___at_MLList_dedupBy___spec__49___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__48___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__48___rarg(x_1, x_2, x_3, x_5, x_4);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__48___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_5);
x_6 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = l_MLList_casesM___at_MLList_dedupBy___spec__49___rarg(x_1, x_2, x_3, x_4, x_5);
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_5);
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_6, 0);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_mk_thunk(x_4);
lean_ctor_set_tag(x_6, 2);
lean_ctor_set(x_6, 0, x_10);
return x_6;
}
else
{
uint8_t x_11; 
lean_free_object(x_6);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__48___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
lean_closure_set(x_15, 2, x_3);
lean_closure_set(x_15, 3, x_14);
lean_closure_set(x_15, 4, x_4);
lean_closure_set(x_15, 5, x_13);
x_16 = lean_mk_thunk(x_15);
lean_ctor_set_tag(x_9, 2);
lean_ctor_set(x_9, 0, x_16);
return x_9;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
lean_dec(x_9);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__48___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_2);
lean_closure_set(x_20, 2, x_3);
lean_closure_set(x_20, 3, x_19);
lean_closure_set(x_20, 4, x_4);
lean_closure_set(x_20, 5, x_18);
x_21 = lean_mk_thunk(x_20);
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
}
else
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_6, 0);
lean_inc(x_23);
lean_dec(x_6);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = lean_mk_thunk(x_4);
x_25 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_25, 0, x_24);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_26 = lean_ctor_get(x_23, 0);
lean_inc(x_26);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 x_27 = x_23;
} else {
 lean_dec_ref(x_23);
 x_27 = lean_box(0);
}
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__48___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_30, 0, x_1);
lean_closure_set(x_30, 1, x_2);
lean_closure_set(x_30, 2, x_3);
lean_closure_set(x_30, 3, x_29);
lean_closure_set(x_30, 4, x_4);
lean_closure_set(x_30, 5, x_28);
x_31 = lean_mk_thunk(x_30);
if (lean_is_scalar(x_27)) {
 x_32 = lean_alloc_ctor(2, 1, 0);
} else {
 x_32 = x_27;
 lean_ctor_set_tag(x_32, 2);
}
lean_ctor_set(x_32, 0, x_31);
return x_32;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__48(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__48___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__47___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MLList_cases___at_MLList_dedupBy___spec__48___rarg(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__47(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_append___at_MLList_dedupBy___spec__47___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__53___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MLList_cases___at_MLList_dedupBy___spec__51___rarg(x_1, x_2, x_3, x_5, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__53___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_6);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_5, 0);
lean_inc(x_12);
lean_dec(x_5);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
x_16 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
lean_inc(x_2);
x_19 = lean_apply_1(x_2, x_14);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_20 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__53___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_3);
lean_closure_set(x_20, 2, x_4);
lean_closure_set(x_20, 3, x_15);
lean_closure_set(x_20, 4, x_2);
x_21 = l_MLList_cases___at_MLList_dedupBy___spec__44___rarg(x_1, x_3, x_4, x_20, x_19);
lean_ctor_set(x_12, 1, x_6);
lean_ctor_set(x_12, 0, x_21);
x_22 = lean_apply_2(x_18, lean_box(0), x_12);
return x_22;
}
else
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_16, 0);
lean_inc(x_23);
lean_dec(x_16);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
x_24 = lean_ctor_get(x_1, 0);
lean_inc(x_24);
lean_dec(x_1);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_apply_1(x_2, x_14);
lean_ctor_set(x_12, 1, x_6);
lean_ctor_set(x_12, 0, x_26);
x_27 = lean_apply_2(x_25, lean_box(0), x_12);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_23);
x_28 = lean_ctor_get(x_1, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
lean_inc(x_2);
x_30 = lean_apply_1(x_2, x_14);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_31 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__53___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_31, 0, x_1);
lean_closure_set(x_31, 1, x_3);
lean_closure_set(x_31, 2, x_4);
lean_closure_set(x_31, 3, x_15);
lean_closure_set(x_31, 4, x_2);
x_32 = l_MLList_cases___at_MLList_dedupBy___spec__48___rarg(x_1, x_3, x_4, x_31, x_30);
lean_ctor_set(x_12, 1, x_6);
lean_ctor_set(x_12, 0, x_32);
x_33 = lean_apply_2(x_29, lean_box(0), x_12);
return x_33;
}
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_12, 0);
x_35 = lean_ctor_get(x_12, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_12);
lean_inc(x_35);
x_36 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_35);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_37 = lean_ctor_get(x_1, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
lean_inc(x_2);
x_39 = lean_apply_1(x_2, x_34);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_40 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__53___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_40, 0, x_1);
lean_closure_set(x_40, 1, x_3);
lean_closure_set(x_40, 2, x_4);
lean_closure_set(x_40, 3, x_35);
lean_closure_set(x_40, 4, x_2);
x_41 = l_MLList_cases___at_MLList_dedupBy___spec__44___rarg(x_1, x_3, x_4, x_40, x_39);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_6);
x_43 = lean_apply_2(x_38, lean_box(0), x_42);
return x_43;
}
else
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_36, 0);
lean_inc(x_44);
lean_dec(x_36);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_35);
lean_dec(x_4);
lean_dec(x_3);
x_45 = lean_ctor_get(x_1, 0);
lean_inc(x_45);
lean_dec(x_1);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
x_47 = lean_apply_1(x_2, x_34);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_6);
x_49 = lean_apply_2(x_46, lean_box(0), x_48);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_44);
x_50 = lean_ctor_get(x_1, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
lean_inc(x_2);
x_52 = lean_apply_1(x_2, x_34);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_53 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__53___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_53, 0, x_1);
lean_closure_set(x_53, 1, x_3);
lean_closure_set(x_53, 2, x_4);
lean_closure_set(x_53, 3, x_35);
lean_closure_set(x_53, 4, x_2);
x_54 = l_MLList_cases___at_MLList_dedupBy___spec__48___rarg(x_1, x_3, x_4, x_53, x_52);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_6);
x_56 = lean_apply_2(x_51, lean_box(0), x_55);
return x_56;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__53___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
x_10 = l___private_Batteries_Data_MLList_Basic_0__MLList_unconsImpl___rarg(x_5, x_6);
x_11 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__53___rarg___lambda__2), 6, 4);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_4);
lean_closure_set(x_11, 2, x_2);
lean_closure_set(x_11, 3, x_3);
x_12 = lean_apply_5(x_9, lean_box(0), lean_box(0), x_10, x_11, x_8);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__53(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__53___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__52___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_6 = l_StateT_instMonad___rarg(x_1);
x_7 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__53___rarg___boxed), 8, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_6);
lean_closure_set(x_7, 5, x_5);
x_8 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__52(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___at_MLList_dedupBy___spec__52___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__51___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_1);
x_8 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_1);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_2);
x_9 = lean_apply_1(x_2, x_3);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_10 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__53___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_10, 0, x_4);
lean_closure_set(x_10, 1, x_5);
lean_closure_set(x_10, 2, x_6);
lean_closure_set(x_10, 3, x_1);
lean_closure_set(x_10, 4, x_2);
x_11 = l_MLList_cases___at_MLList_dedupBy___spec__44___rarg(x_4, x_5, x_6, x_10, x_9);
return x_11;
}
else
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_13 = lean_apply_1(x_2, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_12);
lean_inc(x_2);
x_14 = lean_apply_1(x_2, x_3);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_15 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__53___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_15, 0, x_4);
lean_closure_set(x_15, 1, x_5);
lean_closure_set(x_15, 2, x_6);
lean_closure_set(x_15, 3, x_1);
lean_closure_set(x_15, 4, x_2);
x_16 = l_MLList_cases___at_MLList_dedupBy___spec__48___rarg(x_4, x_5, x_6, x_15, x_14);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__51___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_5);
x_6 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = l_MLList_casesM___at_MLList_dedupBy___spec__52___rarg(x_1, x_2, x_3, x_4, x_5);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_9 = l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___closed__3;
return x_9;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_8, 0);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__51___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_14, 0, x_13);
lean_closure_set(x_14, 1, x_4);
lean_closure_set(x_14, 2, x_12);
lean_closure_set(x_14, 3, x_1);
lean_closure_set(x_14, 4, x_2);
lean_closure_set(x_14, 5, x_3);
x_15 = lean_mk_thunk(x_14);
lean_ctor_set_tag(x_8, 2);
lean_ctor_set(x_8, 0, x_15);
return x_8;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_8, 0);
lean_inc(x_16);
lean_dec(x_8);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__51___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_19, 0, x_18);
lean_closure_set(x_19, 1, x_4);
lean_closure_set(x_19, 2, x_17);
lean_closure_set(x_19, 3, x_1);
lean_closure_set(x_19, 4, x_2);
lean_closure_set(x_19, 5, x_3);
x_20 = lean_mk_thunk(x_19);
x_21 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_21, 0, x_20);
return x_21;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__51(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__51___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_bind___at_MLList_dedupBy___spec__42___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MLList_cases___at_MLList_dedupBy___spec__51___rarg(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MLList_bind___at_MLList_dedupBy___spec__42(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_bind___at_MLList_dedupBy___spec__42___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__58___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_1, x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_6);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
return x_12;
}
else
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_5, 0);
lean_inc(x_13);
lean_dec(x_5);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_2);
x_17 = l_MLList_cases___at_MLList_dedupBy___spec__56___rarg(x_2, x_3, x_4, x_1, x_16);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
lean_dec(x_2);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
lean_ctor_set(x_13, 1, x_6);
lean_ctor_set(x_13, 0, x_18);
x_21 = lean_apply_2(x_20, lean_box(0), x_13);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
lean_inc(x_2);
x_24 = l_MLList_cases___at_MLList_dedupBy___spec__56___rarg(x_2, x_3, x_4, x_1, x_23);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_ctor_get(x_2, 0);
lean_inc(x_26);
lean_dec(x_2);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_6);
x_29 = lean_apply_2(x_27, lean_box(0), x_28);
return x_29;
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__58___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
x_10 = l___private_Batteries_Data_MLList_Basic_0__MLList_unconsImpl___rarg(x_5, x_6);
x_11 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__58___rarg___lambda__1), 6, 4);
lean_closure_set(x_11, 0, x_4);
lean_closure_set(x_11, 1, x_1);
lean_closure_set(x_11, 2, x_2);
lean_closure_set(x_11, 3, x_3);
x_12 = lean_apply_5(x_9, lean_box(0), lean_box(0), x_10, x_11, x_8);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__58(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__58___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__57___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_6 = l_StateT_instMonad___rarg(x_1);
x_7 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__58___rarg___boxed), 8, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_6);
lean_closure_set(x_7, 5, x_5);
x_8 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__57(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___at_MLList_dedupBy___spec__57___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__56___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__56___rarg(x_1, x_2, x_3, x_5, x_4);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__56___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_5);
x_6 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = l_MLList_casesM___at_MLList_dedupBy___spec__57___rarg(x_1, x_2, x_3, x_4, x_5);
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_5);
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_6, 0);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_mk_thunk(x_4);
lean_ctor_set_tag(x_6, 2);
lean_ctor_set(x_6, 0, x_10);
return x_6;
}
else
{
uint8_t x_11; 
lean_free_object(x_6);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__56___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
lean_closure_set(x_15, 2, x_3);
lean_closure_set(x_15, 3, x_14);
lean_closure_set(x_15, 4, x_4);
lean_closure_set(x_15, 5, x_13);
x_16 = lean_mk_thunk(x_15);
lean_ctor_set_tag(x_9, 2);
lean_ctor_set(x_9, 0, x_16);
return x_9;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
lean_dec(x_9);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__56___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_2);
lean_closure_set(x_20, 2, x_3);
lean_closure_set(x_20, 3, x_19);
lean_closure_set(x_20, 4, x_4);
lean_closure_set(x_20, 5, x_18);
x_21 = lean_mk_thunk(x_20);
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
}
else
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_6, 0);
lean_inc(x_23);
lean_dec(x_6);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = lean_mk_thunk(x_4);
x_25 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_25, 0, x_24);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_26 = lean_ctor_get(x_23, 0);
lean_inc(x_26);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 x_27 = x_23;
} else {
 lean_dec_ref(x_23);
 x_27 = lean_box(0);
}
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__56___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_30, 0, x_1);
lean_closure_set(x_30, 1, x_2);
lean_closure_set(x_30, 2, x_3);
lean_closure_set(x_30, 3, x_29);
lean_closure_set(x_30, 4, x_4);
lean_closure_set(x_30, 5, x_28);
x_31 = lean_mk_thunk(x_30);
if (lean_is_scalar(x_27)) {
 x_32 = lean_alloc_ctor(2, 1, 0);
} else {
 x_32 = x_27;
 lean_ctor_set_tag(x_32, 2);
}
lean_ctor_set(x_32, 0, x_31);
return x_32;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__56(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__56___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__55___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MLList_cases___at_MLList_dedupBy___spec__56___rarg(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__55(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_append___at_MLList_dedupBy___spec__55___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__62___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_1, x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_6);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
return x_12;
}
else
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_5, 0);
lean_inc(x_13);
lean_dec(x_5);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_2);
x_17 = l_MLList_cases___at_MLList_dedupBy___spec__60___rarg(x_2, x_3, x_4, x_1, x_16);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
lean_dec(x_2);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
lean_ctor_set(x_13, 1, x_6);
lean_ctor_set(x_13, 0, x_18);
x_21 = lean_apply_2(x_20, lean_box(0), x_13);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
lean_inc(x_2);
x_24 = l_MLList_cases___at_MLList_dedupBy___spec__60___rarg(x_2, x_3, x_4, x_1, x_23);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_ctor_get(x_2, 0);
lean_inc(x_26);
lean_dec(x_2);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_6);
x_29 = lean_apply_2(x_27, lean_box(0), x_28);
return x_29;
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__62___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
x_10 = l___private_Batteries_Data_MLList_Basic_0__MLList_unconsImpl___rarg(x_5, x_6);
x_11 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__62___rarg___lambda__1), 6, 4);
lean_closure_set(x_11, 0, x_4);
lean_closure_set(x_11, 1, x_1);
lean_closure_set(x_11, 2, x_2);
lean_closure_set(x_11, 3, x_3);
x_12 = lean_apply_5(x_9, lean_box(0), lean_box(0), x_10, x_11, x_8);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__62(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__62___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__61___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_6 = l_StateT_instMonad___rarg(x_1);
x_7 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__62___rarg___boxed), 8, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_6);
lean_closure_set(x_7, 5, x_5);
x_8 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__61(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___at_MLList_dedupBy___spec__61___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__60___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__60___rarg(x_1, x_2, x_3, x_5, x_4);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__60___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_5);
x_6 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = l_MLList_casesM___at_MLList_dedupBy___spec__61___rarg(x_1, x_2, x_3, x_4, x_5);
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_5);
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_6, 0);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_mk_thunk(x_4);
lean_ctor_set_tag(x_6, 2);
lean_ctor_set(x_6, 0, x_10);
return x_6;
}
else
{
uint8_t x_11; 
lean_free_object(x_6);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__60___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
lean_closure_set(x_15, 2, x_3);
lean_closure_set(x_15, 3, x_14);
lean_closure_set(x_15, 4, x_4);
lean_closure_set(x_15, 5, x_13);
x_16 = lean_mk_thunk(x_15);
lean_ctor_set_tag(x_9, 2);
lean_ctor_set(x_9, 0, x_16);
return x_9;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
lean_dec(x_9);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__60___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_2);
lean_closure_set(x_20, 2, x_3);
lean_closure_set(x_20, 3, x_19);
lean_closure_set(x_20, 4, x_4);
lean_closure_set(x_20, 5, x_18);
x_21 = lean_mk_thunk(x_20);
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
}
else
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_6, 0);
lean_inc(x_23);
lean_dec(x_6);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = lean_mk_thunk(x_4);
x_25 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_25, 0, x_24);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_26 = lean_ctor_get(x_23, 0);
lean_inc(x_26);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 x_27 = x_23;
} else {
 lean_dec_ref(x_23);
 x_27 = lean_box(0);
}
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__60___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_30, 0, x_1);
lean_closure_set(x_30, 1, x_2);
lean_closure_set(x_30, 2, x_3);
lean_closure_set(x_30, 3, x_29);
lean_closure_set(x_30, 4, x_4);
lean_closure_set(x_30, 5, x_28);
x_31 = lean_mk_thunk(x_30);
if (lean_is_scalar(x_27)) {
 x_32 = lean_alloc_ctor(2, 1, 0);
} else {
 x_32 = x_27;
 lean_ctor_set_tag(x_32, 2);
}
lean_ctor_set(x_32, 0, x_31);
return x_32;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__60(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__60___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__59___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MLList_cases___at_MLList_dedupBy___spec__60___rarg(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__59(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_append___at_MLList_dedupBy___spec__59___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__65___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MLList_cases___at_MLList_dedupBy___spec__63___rarg(x_1, x_2, x_3, x_5, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__65___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_6);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_5, 0);
lean_inc(x_12);
lean_dec(x_5);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
x_16 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
lean_inc(x_2);
x_19 = lean_apply_1(x_2, x_14);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_20 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__65___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_3);
lean_closure_set(x_20, 2, x_4);
lean_closure_set(x_20, 3, x_15);
lean_closure_set(x_20, 4, x_2);
x_21 = l_MLList_cases___at_MLList_dedupBy___spec__56___rarg(x_1, x_3, x_4, x_20, x_19);
lean_ctor_set(x_12, 1, x_6);
lean_ctor_set(x_12, 0, x_21);
x_22 = lean_apply_2(x_18, lean_box(0), x_12);
return x_22;
}
else
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_16, 0);
lean_inc(x_23);
lean_dec(x_16);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
x_24 = lean_ctor_get(x_1, 0);
lean_inc(x_24);
lean_dec(x_1);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_apply_1(x_2, x_14);
lean_ctor_set(x_12, 1, x_6);
lean_ctor_set(x_12, 0, x_26);
x_27 = lean_apply_2(x_25, lean_box(0), x_12);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_23);
x_28 = lean_ctor_get(x_1, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
lean_inc(x_2);
x_30 = lean_apply_1(x_2, x_14);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_31 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__65___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_31, 0, x_1);
lean_closure_set(x_31, 1, x_3);
lean_closure_set(x_31, 2, x_4);
lean_closure_set(x_31, 3, x_15);
lean_closure_set(x_31, 4, x_2);
x_32 = l_MLList_cases___at_MLList_dedupBy___spec__60___rarg(x_1, x_3, x_4, x_31, x_30);
lean_ctor_set(x_12, 1, x_6);
lean_ctor_set(x_12, 0, x_32);
x_33 = lean_apply_2(x_29, lean_box(0), x_12);
return x_33;
}
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_12, 0);
x_35 = lean_ctor_get(x_12, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_12);
lean_inc(x_35);
x_36 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_35);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_37 = lean_ctor_get(x_1, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
lean_inc(x_2);
x_39 = lean_apply_1(x_2, x_34);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_40 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__65___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_40, 0, x_1);
lean_closure_set(x_40, 1, x_3);
lean_closure_set(x_40, 2, x_4);
lean_closure_set(x_40, 3, x_35);
lean_closure_set(x_40, 4, x_2);
x_41 = l_MLList_cases___at_MLList_dedupBy___spec__56___rarg(x_1, x_3, x_4, x_40, x_39);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_6);
x_43 = lean_apply_2(x_38, lean_box(0), x_42);
return x_43;
}
else
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_36, 0);
lean_inc(x_44);
lean_dec(x_36);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_35);
lean_dec(x_4);
lean_dec(x_3);
x_45 = lean_ctor_get(x_1, 0);
lean_inc(x_45);
lean_dec(x_1);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
x_47 = lean_apply_1(x_2, x_34);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_6);
x_49 = lean_apply_2(x_46, lean_box(0), x_48);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_44);
x_50 = lean_ctor_get(x_1, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
lean_inc(x_2);
x_52 = lean_apply_1(x_2, x_34);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_53 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__65___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_53, 0, x_1);
lean_closure_set(x_53, 1, x_3);
lean_closure_set(x_53, 2, x_4);
lean_closure_set(x_53, 3, x_35);
lean_closure_set(x_53, 4, x_2);
x_54 = l_MLList_cases___at_MLList_dedupBy___spec__60___rarg(x_1, x_3, x_4, x_53, x_52);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_6);
x_56 = lean_apply_2(x_51, lean_box(0), x_55);
return x_56;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__65___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
x_10 = l___private_Batteries_Data_MLList_Basic_0__MLList_unconsImpl___rarg(x_5, x_6);
x_11 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__65___rarg___lambda__2), 6, 4);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_4);
lean_closure_set(x_11, 2, x_2);
lean_closure_set(x_11, 3, x_3);
x_12 = lean_apply_5(x_9, lean_box(0), lean_box(0), x_10, x_11, x_8);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__65(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__65___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__64___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_6 = l_StateT_instMonad___rarg(x_1);
x_7 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__65___rarg___boxed), 8, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_6);
lean_closure_set(x_7, 5, x_5);
x_8 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__64(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___at_MLList_dedupBy___spec__64___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__63___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_1);
x_8 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_1);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_2);
x_9 = lean_apply_1(x_2, x_3);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_10 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__65___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_10, 0, x_4);
lean_closure_set(x_10, 1, x_5);
lean_closure_set(x_10, 2, x_6);
lean_closure_set(x_10, 3, x_1);
lean_closure_set(x_10, 4, x_2);
x_11 = l_MLList_cases___at_MLList_dedupBy___spec__56___rarg(x_4, x_5, x_6, x_10, x_9);
return x_11;
}
else
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_13 = lean_apply_1(x_2, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_12);
lean_inc(x_2);
x_14 = lean_apply_1(x_2, x_3);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_15 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__65___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_15, 0, x_4);
lean_closure_set(x_15, 1, x_5);
lean_closure_set(x_15, 2, x_6);
lean_closure_set(x_15, 3, x_1);
lean_closure_set(x_15, 4, x_2);
x_16 = l_MLList_cases___at_MLList_dedupBy___spec__60___rarg(x_4, x_5, x_6, x_15, x_14);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__63___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_5);
x_6 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = l_MLList_casesM___at_MLList_dedupBy___spec__64___rarg(x_1, x_2, x_3, x_4, x_5);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_9 = l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___closed__3;
return x_9;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_8, 0);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__63___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_14, 0, x_13);
lean_closure_set(x_14, 1, x_4);
lean_closure_set(x_14, 2, x_12);
lean_closure_set(x_14, 3, x_1);
lean_closure_set(x_14, 4, x_2);
lean_closure_set(x_14, 5, x_3);
x_15 = lean_mk_thunk(x_14);
lean_ctor_set_tag(x_8, 2);
lean_ctor_set(x_8, 0, x_15);
return x_8;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_8, 0);
lean_inc(x_16);
lean_dec(x_8);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__63___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_19, 0, x_18);
lean_closure_set(x_19, 1, x_4);
lean_closure_set(x_19, 2, x_17);
lean_closure_set(x_19, 3, x_1);
lean_closure_set(x_19, 4, x_2);
lean_closure_set(x_19, 5, x_3);
x_20 = lean_mk_thunk(x_19);
x_21 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_21, 0, x_20);
return x_21;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__63(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__63___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_bind___at_MLList_dedupBy___spec__54___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MLList_cases___at_MLList_dedupBy___spec__63___rarg(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MLList_bind___at_MLList_dedupBy___spec__54(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_bind___at_MLList_dedupBy___spec__54___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__70___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_1, x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_6);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
return x_12;
}
else
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_5, 0);
lean_inc(x_13);
lean_dec(x_5);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_2);
x_17 = l_MLList_cases___at_MLList_dedupBy___spec__68___rarg(x_2, x_3, x_4, x_1, x_16);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
lean_dec(x_2);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
lean_ctor_set(x_13, 1, x_6);
lean_ctor_set(x_13, 0, x_18);
x_21 = lean_apply_2(x_20, lean_box(0), x_13);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
lean_inc(x_2);
x_24 = l_MLList_cases___at_MLList_dedupBy___spec__68___rarg(x_2, x_3, x_4, x_1, x_23);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_ctor_get(x_2, 0);
lean_inc(x_26);
lean_dec(x_2);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_6);
x_29 = lean_apply_2(x_27, lean_box(0), x_28);
return x_29;
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__70___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
x_10 = l___private_Batteries_Data_MLList_Basic_0__MLList_unconsImpl___rarg(x_5, x_6);
x_11 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__70___rarg___lambda__1), 6, 4);
lean_closure_set(x_11, 0, x_4);
lean_closure_set(x_11, 1, x_1);
lean_closure_set(x_11, 2, x_2);
lean_closure_set(x_11, 3, x_3);
x_12 = lean_apply_5(x_9, lean_box(0), lean_box(0), x_10, x_11, x_8);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__70(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__70___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__69___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_6 = l_StateT_instMonad___rarg(x_1);
x_7 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__70___rarg___boxed), 8, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_6);
lean_closure_set(x_7, 5, x_5);
x_8 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__69(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___at_MLList_dedupBy___spec__69___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__68___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__68___rarg(x_1, x_2, x_3, x_5, x_4);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__68___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_5);
x_6 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = l_MLList_casesM___at_MLList_dedupBy___spec__69___rarg(x_1, x_2, x_3, x_4, x_5);
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_5);
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_6, 0);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_mk_thunk(x_4);
lean_ctor_set_tag(x_6, 2);
lean_ctor_set(x_6, 0, x_10);
return x_6;
}
else
{
uint8_t x_11; 
lean_free_object(x_6);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__68___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
lean_closure_set(x_15, 2, x_3);
lean_closure_set(x_15, 3, x_14);
lean_closure_set(x_15, 4, x_4);
lean_closure_set(x_15, 5, x_13);
x_16 = lean_mk_thunk(x_15);
lean_ctor_set_tag(x_9, 2);
lean_ctor_set(x_9, 0, x_16);
return x_9;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
lean_dec(x_9);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__68___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_2);
lean_closure_set(x_20, 2, x_3);
lean_closure_set(x_20, 3, x_19);
lean_closure_set(x_20, 4, x_4);
lean_closure_set(x_20, 5, x_18);
x_21 = lean_mk_thunk(x_20);
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
}
else
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_6, 0);
lean_inc(x_23);
lean_dec(x_6);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = lean_mk_thunk(x_4);
x_25 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_25, 0, x_24);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_26 = lean_ctor_get(x_23, 0);
lean_inc(x_26);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 x_27 = x_23;
} else {
 lean_dec_ref(x_23);
 x_27 = lean_box(0);
}
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__68___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_30, 0, x_1);
lean_closure_set(x_30, 1, x_2);
lean_closure_set(x_30, 2, x_3);
lean_closure_set(x_30, 3, x_29);
lean_closure_set(x_30, 4, x_4);
lean_closure_set(x_30, 5, x_28);
x_31 = lean_mk_thunk(x_30);
if (lean_is_scalar(x_27)) {
 x_32 = lean_alloc_ctor(2, 1, 0);
} else {
 x_32 = x_27;
 lean_ctor_set_tag(x_32, 2);
}
lean_ctor_set(x_32, 0, x_31);
return x_32;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__68(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__68___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__67___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MLList_cases___at_MLList_dedupBy___spec__68___rarg(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__67(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_append___at_MLList_dedupBy___spec__67___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__74___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_1, x_7);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_6);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
return x_12;
}
else
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_5, 0);
lean_inc(x_13);
lean_dec(x_5);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_2);
x_17 = l_MLList_cases___at_MLList_dedupBy___spec__72___rarg(x_2, x_3, x_4, x_1, x_16);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
lean_dec(x_2);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
lean_ctor_set(x_13, 1, x_6);
lean_ctor_set(x_13, 0, x_18);
x_21 = lean_apply_2(x_20, lean_box(0), x_13);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
lean_inc(x_2);
x_24 = l_MLList_cases___at_MLList_dedupBy___spec__72___rarg(x_2, x_3, x_4, x_1, x_23);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_ctor_get(x_2, 0);
lean_inc(x_26);
lean_dec(x_2);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_6);
x_29 = lean_apply_2(x_27, lean_box(0), x_28);
return x_29;
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__74___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
x_10 = l___private_Batteries_Data_MLList_Basic_0__MLList_unconsImpl___rarg(x_5, x_6);
x_11 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__74___rarg___lambda__1), 6, 4);
lean_closure_set(x_11, 0, x_4);
lean_closure_set(x_11, 1, x_1);
lean_closure_set(x_11, 2, x_2);
lean_closure_set(x_11, 3, x_3);
x_12 = lean_apply_5(x_9, lean_box(0), lean_box(0), x_10, x_11, x_8);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__74(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__74___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__73___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_6 = l_StateT_instMonad___rarg(x_1);
x_7 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__74___rarg___boxed), 8, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_6);
lean_closure_set(x_7, 5, x_5);
x_8 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__73(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___at_MLList_dedupBy___spec__73___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__72___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__72___rarg(x_1, x_2, x_3, x_5, x_4);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__72___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_5);
x_6 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = l_MLList_casesM___at_MLList_dedupBy___spec__73___rarg(x_1, x_2, x_3, x_4, x_5);
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_5);
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_6, 0);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_mk_thunk(x_4);
lean_ctor_set_tag(x_6, 2);
lean_ctor_set(x_6, 0, x_10);
return x_6;
}
else
{
uint8_t x_11; 
lean_free_object(x_6);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__72___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
lean_closure_set(x_15, 2, x_3);
lean_closure_set(x_15, 3, x_14);
lean_closure_set(x_15, 4, x_4);
lean_closure_set(x_15, 5, x_13);
x_16 = lean_mk_thunk(x_15);
lean_ctor_set_tag(x_9, 2);
lean_ctor_set(x_9, 0, x_16);
return x_9;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
lean_dec(x_9);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__72___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_2);
lean_closure_set(x_20, 2, x_3);
lean_closure_set(x_20, 3, x_19);
lean_closure_set(x_20, 4, x_4);
lean_closure_set(x_20, 5, x_18);
x_21 = lean_mk_thunk(x_20);
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
}
else
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_6, 0);
lean_inc(x_23);
lean_dec(x_6);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = lean_mk_thunk(x_4);
x_25 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_25, 0, x_24);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_26 = lean_ctor_get(x_23, 0);
lean_inc(x_26);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 x_27 = x_23;
} else {
 lean_dec_ref(x_23);
 x_27 = lean_box(0);
}
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__72___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_30, 0, x_1);
lean_closure_set(x_30, 1, x_2);
lean_closure_set(x_30, 2, x_3);
lean_closure_set(x_30, 3, x_29);
lean_closure_set(x_30, 4, x_4);
lean_closure_set(x_30, 5, x_28);
x_31 = lean_mk_thunk(x_30);
if (lean_is_scalar(x_27)) {
 x_32 = lean_alloc_ctor(2, 1, 0);
} else {
 x_32 = x_27;
 lean_ctor_set_tag(x_32, 2);
}
lean_ctor_set(x_32, 0, x_31);
return x_32;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__72(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__72___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__71___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MLList_cases___at_MLList_dedupBy___spec__72___rarg(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MLList_append___at_MLList_dedupBy___spec__71(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_append___at_MLList_dedupBy___spec__71___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__77___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MLList_cases___at_MLList_dedupBy___spec__75___rarg(x_1, x_2, x_3, x_5, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__77___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_6);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_5, 0);
lean_inc(x_12);
lean_dec(x_5);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
x_16 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
lean_inc(x_2);
x_19 = lean_apply_1(x_2, x_14);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_20 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__77___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_3);
lean_closure_set(x_20, 2, x_4);
lean_closure_set(x_20, 3, x_15);
lean_closure_set(x_20, 4, x_2);
x_21 = l_MLList_cases___at_MLList_dedupBy___spec__68___rarg(x_1, x_3, x_4, x_20, x_19);
lean_ctor_set(x_12, 1, x_6);
lean_ctor_set(x_12, 0, x_21);
x_22 = lean_apply_2(x_18, lean_box(0), x_12);
return x_22;
}
else
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_16, 0);
lean_inc(x_23);
lean_dec(x_16);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
x_24 = lean_ctor_get(x_1, 0);
lean_inc(x_24);
lean_dec(x_1);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_apply_1(x_2, x_14);
lean_ctor_set(x_12, 1, x_6);
lean_ctor_set(x_12, 0, x_26);
x_27 = lean_apply_2(x_25, lean_box(0), x_12);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_23);
x_28 = lean_ctor_get(x_1, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
lean_inc(x_2);
x_30 = lean_apply_1(x_2, x_14);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_31 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__77___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_31, 0, x_1);
lean_closure_set(x_31, 1, x_3);
lean_closure_set(x_31, 2, x_4);
lean_closure_set(x_31, 3, x_15);
lean_closure_set(x_31, 4, x_2);
x_32 = l_MLList_cases___at_MLList_dedupBy___spec__72___rarg(x_1, x_3, x_4, x_31, x_30);
lean_ctor_set(x_12, 1, x_6);
lean_ctor_set(x_12, 0, x_32);
x_33 = lean_apply_2(x_29, lean_box(0), x_12);
return x_33;
}
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_12, 0);
x_35 = lean_ctor_get(x_12, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_12);
lean_inc(x_35);
x_36 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_35);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_37 = lean_ctor_get(x_1, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
lean_inc(x_2);
x_39 = lean_apply_1(x_2, x_34);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_40 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__77___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_40, 0, x_1);
lean_closure_set(x_40, 1, x_3);
lean_closure_set(x_40, 2, x_4);
lean_closure_set(x_40, 3, x_35);
lean_closure_set(x_40, 4, x_2);
x_41 = l_MLList_cases___at_MLList_dedupBy___spec__68___rarg(x_1, x_3, x_4, x_40, x_39);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_6);
x_43 = lean_apply_2(x_38, lean_box(0), x_42);
return x_43;
}
else
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_36, 0);
lean_inc(x_44);
lean_dec(x_36);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_35);
lean_dec(x_4);
lean_dec(x_3);
x_45 = lean_ctor_get(x_1, 0);
lean_inc(x_45);
lean_dec(x_1);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
x_47 = lean_apply_1(x_2, x_34);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_6);
x_49 = lean_apply_2(x_46, lean_box(0), x_48);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_44);
x_50 = lean_ctor_get(x_1, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
lean_inc(x_2);
x_52 = lean_apply_1(x_2, x_34);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_53 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__77___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_53, 0, x_1);
lean_closure_set(x_53, 1, x_3);
lean_closure_set(x_53, 2, x_4);
lean_closure_set(x_53, 3, x_35);
lean_closure_set(x_53, 4, x_2);
x_54 = l_MLList_cases___at_MLList_dedupBy___spec__72___rarg(x_1, x_3, x_4, x_53, x_52);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_6);
x_56 = lean_apply_2(x_51, lean_box(0), x_55);
return x_56;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__77___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
x_10 = l___private_Batteries_Data_MLList_Basic_0__MLList_unconsImpl___rarg(x_5, x_6);
x_11 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__77___rarg___lambda__2), 6, 4);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_4);
lean_closure_set(x_11, 2, x_2);
lean_closure_set(x_11, 3, x_3);
x_12 = lean_apply_5(x_9, lean_box(0), lean_box(0), x_10, x_11, x_8);
return x_12;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__77(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__77___rarg___boxed), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__76___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_6 = l_StateT_instMonad___rarg(x_1);
x_7 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__77___rarg___boxed), 8, 6);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_closure_set(x_7, 4, x_6);
lean_closure_set(x_7, 5, x_5);
x_8 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___at_MLList_dedupBy___spec__76(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_casesM___at_MLList_dedupBy___spec__76___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__75___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_1);
x_8 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_1);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_2);
x_9 = lean_apply_1(x_2, x_3);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_10 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__77___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_10, 0, x_4);
lean_closure_set(x_10, 1, x_5);
lean_closure_set(x_10, 2, x_6);
lean_closure_set(x_10, 3, x_1);
lean_closure_set(x_10, 4, x_2);
x_11 = l_MLList_cases___at_MLList_dedupBy___spec__68___rarg(x_4, x_5, x_6, x_10, x_9);
return x_11;
}
else
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_13 = lean_apply_1(x_2, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_12);
lean_inc(x_2);
x_14 = lean_apply_1(x_2, x_3);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_15 = lean_alloc_closure((void*)(l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__77___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_15, 0, x_4);
lean_closure_set(x_15, 1, x_5);
lean_closure_set(x_15, 2, x_6);
lean_closure_set(x_15, 3, x_1);
lean_closure_set(x_15, 4, x_2);
x_16 = l_MLList_cases___at_MLList_dedupBy___spec__72___rarg(x_4, x_5, x_6, x_15, x_14);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__75___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_5);
x_6 = l___private_Batteries_Data_MLList_Basic_0__MLList_uncons_x3fImpl___rarg(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = l_MLList_casesM___at_MLList_dedupBy___spec__76___rarg(x_1, x_2, x_3, x_4, x_5);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_9 = l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___closed__3;
return x_9;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_8, 0);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__75___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_14, 0, x_13);
lean_closure_set(x_14, 1, x_4);
lean_closure_set(x_14, 2, x_12);
lean_closure_set(x_14, 3, x_1);
lean_closure_set(x_14, 4, x_2);
lean_closure_set(x_14, 5, x_3);
x_15 = lean_mk_thunk(x_14);
lean_ctor_set_tag(x_8, 2);
lean_ctor_set(x_8, 0, x_15);
return x_8;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_8, 0);
lean_inc(x_16);
lean_dec(x_8);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__75___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_19, 0, x_18);
lean_closure_set(x_19, 1, x_4);
lean_closure_set(x_19, 2, x_17);
lean_closure_set(x_19, 3, x_1);
lean_closure_set(x_19, 4, x_2);
lean_closure_set(x_19, 5, x_3);
x_20 = lean_mk_thunk(x_19);
x_21 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_21, 0, x_20);
return x_21;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__75(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_cases___at_MLList_dedupBy___spec__75___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_bind___at_MLList_dedupBy___spec__66___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_MLList_cases___at_MLList_dedupBy___spec__75___rarg(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_MLList_bind___at_MLList_dedupBy___spec__66(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_bind___at_MLList_dedupBy___spec__66___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_dedupBy___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_box(0);
x_6 = l_Batteries_HashMap_insert___rarg(x_1, x_2, lean_box(0), x_4, x_3, x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MLList_dedupBy___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_dedupBy___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_2);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_MLList_dedupBy___rarg___lambda__1), 4, 3);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_inc(x_2);
lean_inc(x_1);
lean_inc(x_4);
x_8 = lean_alloc_closure((void*)(l_StateT_modifyGet___at_MLList_dedupBy___spec__4___rarg___boxed), 6, 5);
lean_closure_set(x_8, 0, x_4);
lean_closure_set(x_8, 1, x_1);
lean_closure_set(x_8, 2, x_2);
lean_closure_set(x_8, 3, lean_box(0));
lean_closure_set(x_8, 4, x_7);
lean_inc(x_4);
x_9 = l_MLList_monadLift___at_MLList_dedupBy___spec__5___rarg(x_4, x_1, x_2, x_8);
x_10 = lean_alloc_closure((void*)(l_MLList_dedupBy___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_10, 0, x_5);
x_11 = l_MLList_cases___at_MLList_dedupBy___spec__15___rarg(x_4, x_1, x_2, x_10, x_9);
return x_11;
}
}
static lean_object* _init_l_MLList_dedupBy___rarg___lambda__4___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MLList_dedupBy___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_7 = l_Batteries_HashMap_Imp_contains___rarg(x_1, x_2, x_6, x_3);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_MLList_dedupBy___rarg___lambda__3___boxed), 6, 5);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
lean_closure_set(x_8, 2, x_3);
lean_closure_set(x_8, 3, x_4);
lean_closure_set(x_8, 4, x_5);
if (x_7 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_MLList_dedupBy___rarg___lambda__4___closed__1;
x_10 = l_MLList_cases___at_MLList_dedupBy___spec__27___rarg(x_4, x_1, x_2, x_8, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = l_MLList_cases___at_MLList_dedupBy___spec__39___rarg(x_4, x_1, x_2, x_8, x_11);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_MLList_dedupBy___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_StateT_get___rarg), 2, 1);
lean_closure_set(x_6, 0, x_1);
lean_inc(x_1);
x_7 = l_MLList_monadLift___at_MLList_dedupBy___spec__3___rarg(x_1, x_2, x_3, x_6);
lean_inc(x_1);
lean_inc(x_3);
lean_inc(x_2);
x_8 = lean_alloc_closure((void*)(l_MLList_dedupBy___rarg___lambda__4___boxed), 6, 5);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_3);
lean_closure_set(x_8, 2, x_5);
lean_closure_set(x_8, 3, x_1);
lean_closure_set(x_8, 4, x_4);
x_9 = l_MLList_cases___at_MLList_dedupBy___spec__51___rarg(x_1, x_2, x_3, x_8, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_dedupBy___rarg___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_5);
x_6 = lean_apply_1(x_1, x_5);
lean_inc(x_2);
x_7 = lean_alloc_closure((void*)(l_StateT_lift___rarg), 4, 3);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, lean_box(0));
lean_closure_set(x_7, 2, x_6);
lean_inc(x_2);
x_8 = l_MLList_monadLift___at_MLList_dedupBy___spec__2___rarg(x_2, x_3, x_4, x_7);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_9 = lean_alloc_closure((void*)(l_MLList_dedupBy___rarg___lambda__5), 5, 4);
lean_closure_set(x_9, 0, x_2);
lean_closure_set(x_9, 1, x_3);
lean_closure_set(x_9, 2, x_4);
lean_closure_set(x_9, 3, x_5);
x_10 = l_MLList_cases___at_MLList_dedupBy___spec__63___rarg(x_2, x_3, x_4, x_9, x_8);
return x_10;
}
}
static lean_object* _init_l_MLList_dedupBy___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Batteries_HashMap_Imp_empty___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MLList_dedupBy___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_1);
x_6 = l_MLList_liftM___at_MLList_dedupBy___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_MLList_dedupBy___rarg___lambda__6), 5, 4);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_1);
lean_closure_set(x_7, 2, x_2);
lean_closure_set(x_7, 3, x_3);
lean_inc(x_1);
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__75___rarg(x_1, x_2, x_3, x_7, x_6);
x_9 = l_MLList_dedupBy___rarg___closed__1;
x_10 = l_MLList_runState_x27___rarg(x_1, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_MLList_dedupBy(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MLList_dedupBy___rarg), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_MLList_liftM___at_MLList_dedupBy___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MLList_liftM___at_MLList_dedupBy___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MLList_monadLift___at_MLList_dedupBy___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MLList_monadLift___at_MLList_dedupBy___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MLList_monadLift___at_MLList_dedupBy___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MLList_monadLift___at_MLList_dedupBy___spec__3___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_StateT_modifyGet___at_MLList_dedupBy___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_StateT_modifyGet___at_MLList_dedupBy___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MLList_monadLift___at_MLList_dedupBy___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_MLList_monadLift___at_MLList_dedupBy___spec__5___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__10___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__8___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__8___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__14___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__14___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__12___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__12___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__17___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__17___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__17___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__17___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__22___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__22___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__20___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__20___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__26___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__26___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__24___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__24___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__29___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__29___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__29___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__29___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__27___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__27___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__34___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__34___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__32___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__32___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__38___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__38___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__36___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__36___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__41___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__41___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__41___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__41___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__39___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__39___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__46___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__46___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__44___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__44___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__50___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__50___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__48___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__48___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__53___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__53___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__53___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__53___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__51___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__51___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__58___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__58___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__56___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__56___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__62___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__62___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__60___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__60___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__65___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__65___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__65___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__65___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__63___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__63___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__70___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__70___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__68___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__68___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__74___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__74___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__72___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__72___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__77___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__77___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__77___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_MLList_casesM___elambda__1___at_MLList_dedupBy___spec__77___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_MLList_cases___at_MLList_dedupBy___spec__75___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_MLList_cases___at_MLList_dedupBy___spec__75___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_dedupBy___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MLList_dedupBy___rarg___lambda__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_MLList_dedupBy___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MLList_dedupBy___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MLList_dedupBy___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_MLList_dedupBy___rarg___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_MLList_dedup___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_1(x_6, lean_box(0));
x_8 = l_MLList_dedupBy___rarg(x_1, x_2, x_3, x_4, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_MLList_dedup(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MLList_dedup___rarg), 4, 0);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Batteries_Data_MLList_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Batteries_Data_HashMap_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Data_MLList_Dedup(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Batteries_Data_MLList_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Batteries_Data_HashMap_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_MLList_liftM___at_MLList_dedupBy___spec__1___rarg___closed__1 = _init_l_MLList_liftM___at_MLList_dedupBy___spec__1___rarg___closed__1();
lean_mark_persistent(l_MLList_liftM___at_MLList_dedupBy___spec__1___rarg___closed__1);
l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___closed__1 = _init_l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___closed__1();
lean_mark_persistent(l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___closed__1);
l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___closed__2 = _init_l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___closed__2();
lean_mark_persistent(l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___closed__2);
l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___closed__3 = _init_l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___closed__3();
lean_mark_persistent(l_MLList_cases___at_MLList_dedupBy___spec__15___rarg___closed__3);
l_MLList_dedupBy___rarg___lambda__4___closed__1 = _init_l_MLList_dedupBy___rarg___lambda__4___closed__1();
lean_mark_persistent(l_MLList_dedupBy___rarg___lambda__4___closed__1);
l_MLList_dedupBy___rarg___closed__1 = _init_l_MLList_dedupBy___rarg___closed__1();
lean_mark_persistent(l_MLList_dedupBy___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif

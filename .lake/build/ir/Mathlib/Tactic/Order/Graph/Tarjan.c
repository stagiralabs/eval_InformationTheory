// Lean compiler output
// Module: Mathlib.Tactic.Order.Graph.Tarjan
// Imports: Init Mathlib.Tactic.Order.Graph.Basic
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
static lean_object* l_Mathlib_Tactic_Order_Graph_tarjanDFS___closed__1;
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_Order_Graph_tarjanDFS(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
extern uint8_t l_instInhabitedBool;
lean_object* lean_array_fget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_Order_Graph_findSCCs___boxed(lean_object*);
extern lean_object* l_instInhabitedNat;
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Mathlib_Tactic_Order_Graph_findSCCsImp___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_Order_Graph_tarjanDFS___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_outOfBounds___rarg(lean_object*);
lean_object* lean_array_pop(lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_Order_Graph_findSCCsImp___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_Order_Graph_findSCCsImp(lean_object*, lean_object*);
lean_object* l_Array_back_x21___rarg(lean_object*, lean_object*);
static lean_object* l_Mathlib_Tactic_Order_Graph_findSCCs___closed__1;
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_Mathlib_Tactic_Order_Graph_findSCCs(lean_object*);
static lean_object* l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
size_t lean_array_size(lean_object*);
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Mathlib_Tactic_Order_Graph_findSCCsImp___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* _init_l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, size_t x_6, size_t x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_17; 
x_17 = lean_usize_dec_lt(x_7, x_6);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_8);
lean_ctor_set(x_18, 1, x_9);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_103; lean_object* x_186; lean_object* x_201; lean_object* x_202; uint8_t x_203; 
lean_dec(x_8);
x_19 = lean_array_uget(x_5, x_7);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_201 = lean_ctor_get(x_9, 0);
lean_inc(x_201);
x_202 = lean_array_get_size(x_201);
x_203 = lean_nat_dec_lt(x_20, x_202);
lean_dec(x_202);
if (x_203 == 0)
{
uint8_t x_204; lean_object* x_205; lean_object* x_206; uint8_t x_207; 
lean_dec(x_201);
x_204 = l_instInhabitedBool;
x_205 = lean_box(x_204);
x_206 = l_outOfBounds___rarg(x_205);
x_207 = lean_unbox(x_206);
lean_dec(x_206);
if (x_207 == 0)
{
lean_object* x_208; 
x_208 = lean_box(0);
x_21 = x_208;
goto block_102;
}
else
{
lean_object* x_209; 
x_209 = lean_box(0);
x_186 = x_209;
goto block_200;
}
}
else
{
lean_object* x_210; uint8_t x_211; 
x_210 = lean_array_fget(x_201, x_20);
lean_dec(x_201);
x_211 = lean_unbox(x_210);
lean_dec(x_210);
if (x_211 == 0)
{
lean_object* x_212; 
x_212 = lean_box(0);
x_21 = x_212;
goto block_102;
}
else
{
lean_object* x_213; 
x_213 = lean_box(0);
x_186 = x_213;
goto block_200;
}
}
block_102:
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
lean_dec(x_21);
lean_inc(x_20);
x_22 = l_Mathlib_Tactic_Order_Graph_tarjanDFS(x_1, x_20, x_9);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; uint8_t x_28; 
x_25 = lean_ctor_get(x_23, 2);
x_26 = lean_array_get_size(x_25);
x_27 = lean_nat_dec_lt(x_2, x_26);
x_28 = lean_nat_dec_lt(x_20, x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = l_instInhabitedNat;
x_30 = l_outOfBounds___rarg(x_29);
if (x_28 == 0)
{
lean_object* x_31; uint8_t x_32; 
lean_dec(x_20);
x_31 = l_outOfBounds___rarg(x_29);
x_32 = lean_nat_dec_le(x_30, x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_30);
x_33 = lean_array_set(x_25, x_2, x_31);
lean_ctor_set(x_23, 2, x_33);
x_34 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_34;
x_11 = x_23;
goto block_16;
}
else
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_31);
x_35 = lean_array_set(x_25, x_2, x_30);
lean_ctor_set(x_23, 2, x_35);
x_36 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_36;
x_11 = x_23;
goto block_16;
}
}
else
{
lean_object* x_37; uint8_t x_38; 
x_37 = lean_array_fget(x_25, x_20);
lean_dec(x_20);
x_38 = lean_nat_dec_le(x_30, x_37);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_30);
x_39 = lean_array_set(x_25, x_2, x_37);
lean_ctor_set(x_23, 2, x_39);
x_40 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_40;
x_11 = x_23;
goto block_16;
}
else
{
lean_object* x_41; lean_object* x_42; 
lean_dec(x_37);
x_41 = lean_array_set(x_25, x_2, x_30);
lean_ctor_set(x_23, 2, x_41);
x_42 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_42;
x_11 = x_23;
goto block_16;
}
}
}
else
{
lean_object* x_43; 
x_43 = lean_array_fget(x_25, x_2);
if (x_28 == 0)
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; 
lean_dec(x_20);
x_44 = l_instInhabitedNat;
x_45 = l_outOfBounds___rarg(x_44);
x_46 = lean_nat_dec_le(x_43, x_45);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
lean_dec(x_43);
x_47 = lean_array_set(x_25, x_2, x_45);
lean_ctor_set(x_23, 2, x_47);
x_48 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_48;
x_11 = x_23;
goto block_16;
}
else
{
lean_object* x_49; lean_object* x_50; 
lean_dec(x_45);
x_49 = lean_array_set(x_25, x_2, x_43);
lean_ctor_set(x_23, 2, x_49);
x_50 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_50;
x_11 = x_23;
goto block_16;
}
}
else
{
lean_object* x_51; uint8_t x_52; 
x_51 = lean_array_fget(x_25, x_20);
lean_dec(x_20);
x_52 = lean_nat_dec_le(x_43, x_51);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; 
lean_dec(x_43);
x_53 = lean_array_set(x_25, x_2, x_51);
lean_ctor_set(x_23, 2, x_53);
x_54 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_54;
x_11 = x_23;
goto block_16;
}
else
{
lean_object* x_55; lean_object* x_56; 
lean_dec(x_51);
x_55 = lean_array_set(x_25, x_2, x_43);
lean_ctor_set(x_23, 2, x_55);
x_56 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_56;
x_11 = x_23;
goto block_16;
}
}
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; uint8_t x_65; 
x_57 = lean_ctor_get(x_23, 0);
x_58 = lean_ctor_get(x_23, 1);
x_59 = lean_ctor_get(x_23, 2);
x_60 = lean_ctor_get(x_23, 3);
x_61 = lean_ctor_get(x_23, 4);
x_62 = lean_ctor_get(x_23, 5);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_inc(x_59);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_23);
x_63 = lean_array_get_size(x_59);
x_64 = lean_nat_dec_lt(x_2, x_63);
x_65 = lean_nat_dec_lt(x_20, x_63);
lean_dec(x_63);
if (x_64 == 0)
{
lean_object* x_66; lean_object* x_67; 
x_66 = l_instInhabitedNat;
x_67 = l_outOfBounds___rarg(x_66);
if (x_65 == 0)
{
lean_object* x_68; uint8_t x_69; 
lean_dec(x_20);
x_68 = l_outOfBounds___rarg(x_66);
x_69 = lean_nat_dec_le(x_67, x_68);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_67);
x_70 = lean_array_set(x_59, x_2, x_68);
x_71 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_71, 0, x_57);
lean_ctor_set(x_71, 1, x_58);
lean_ctor_set(x_71, 2, x_70);
lean_ctor_set(x_71, 3, x_60);
lean_ctor_set(x_71, 4, x_61);
lean_ctor_set(x_71, 5, x_62);
x_72 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_72;
x_11 = x_71;
goto block_16;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
lean_dec(x_68);
x_73 = lean_array_set(x_59, x_2, x_67);
x_74 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_74, 0, x_57);
lean_ctor_set(x_74, 1, x_58);
lean_ctor_set(x_74, 2, x_73);
lean_ctor_set(x_74, 3, x_60);
lean_ctor_set(x_74, 4, x_61);
lean_ctor_set(x_74, 5, x_62);
x_75 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_75;
x_11 = x_74;
goto block_16;
}
}
else
{
lean_object* x_76; uint8_t x_77; 
x_76 = lean_array_fget(x_59, x_20);
lean_dec(x_20);
x_77 = lean_nat_dec_le(x_67, x_76);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_67);
x_78 = lean_array_set(x_59, x_2, x_76);
x_79 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_79, 0, x_57);
lean_ctor_set(x_79, 1, x_58);
lean_ctor_set(x_79, 2, x_78);
lean_ctor_set(x_79, 3, x_60);
lean_ctor_set(x_79, 4, x_61);
lean_ctor_set(x_79, 5, x_62);
x_80 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_80;
x_11 = x_79;
goto block_16;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_76);
x_81 = lean_array_set(x_59, x_2, x_67);
x_82 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_82, 0, x_57);
lean_ctor_set(x_82, 1, x_58);
lean_ctor_set(x_82, 2, x_81);
lean_ctor_set(x_82, 3, x_60);
lean_ctor_set(x_82, 4, x_61);
lean_ctor_set(x_82, 5, x_62);
x_83 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_83;
x_11 = x_82;
goto block_16;
}
}
}
else
{
lean_object* x_84; 
x_84 = lean_array_fget(x_59, x_2);
if (x_65 == 0)
{
lean_object* x_85; lean_object* x_86; uint8_t x_87; 
lean_dec(x_20);
x_85 = l_instInhabitedNat;
x_86 = l_outOfBounds___rarg(x_85);
x_87 = lean_nat_dec_le(x_84, x_86);
if (x_87 == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
lean_dec(x_84);
x_88 = lean_array_set(x_59, x_2, x_86);
x_89 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_89, 0, x_57);
lean_ctor_set(x_89, 1, x_58);
lean_ctor_set(x_89, 2, x_88);
lean_ctor_set(x_89, 3, x_60);
lean_ctor_set(x_89, 4, x_61);
lean_ctor_set(x_89, 5, x_62);
x_90 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_90;
x_11 = x_89;
goto block_16;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
lean_dec(x_86);
x_91 = lean_array_set(x_59, x_2, x_84);
x_92 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_92, 0, x_57);
lean_ctor_set(x_92, 1, x_58);
lean_ctor_set(x_92, 2, x_91);
lean_ctor_set(x_92, 3, x_60);
lean_ctor_set(x_92, 4, x_61);
lean_ctor_set(x_92, 5, x_62);
x_93 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_93;
x_11 = x_92;
goto block_16;
}
}
else
{
lean_object* x_94; uint8_t x_95; 
x_94 = lean_array_fget(x_59, x_20);
lean_dec(x_20);
x_95 = lean_nat_dec_le(x_84, x_94);
if (x_95 == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_84);
x_96 = lean_array_set(x_59, x_2, x_94);
x_97 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_97, 0, x_57);
lean_ctor_set(x_97, 1, x_58);
lean_ctor_set(x_97, 2, x_96);
lean_ctor_set(x_97, 3, x_60);
lean_ctor_set(x_97, 4, x_61);
lean_ctor_set(x_97, 5, x_62);
x_98 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_98;
x_11 = x_97;
goto block_16;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
lean_dec(x_94);
x_99 = lean_array_set(x_59, x_2, x_84);
x_100 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_100, 0, x_57);
lean_ctor_set(x_100, 1, x_58);
lean_ctor_set(x_100, 2, x_99);
lean_ctor_set(x_100, 3, x_60);
lean_ctor_set(x_100, 4, x_61);
lean_ctor_set(x_100, 5, x_62);
x_101 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_101;
x_11 = x_100;
goto block_16;
}
}
}
}
}
block_185:
{
uint8_t x_104; 
lean_dec(x_103);
x_104 = !lean_is_exclusive(x_9);
if (x_104 == 0)
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; uint8_t x_108; lean_object* x_109; uint8_t x_110; 
x_105 = lean_ctor_get(x_9, 1);
x_106 = lean_ctor_get(x_9, 2);
x_107 = lean_array_get_size(x_106);
x_108 = lean_nat_dec_lt(x_2, x_107);
lean_dec(x_107);
x_109 = lean_array_get_size(x_105);
x_110 = lean_nat_dec_lt(x_20, x_109);
lean_dec(x_109);
if (x_108 == 0)
{
lean_object* x_111; lean_object* x_112; 
x_111 = l_instInhabitedNat;
x_112 = l_outOfBounds___rarg(x_111);
if (x_110 == 0)
{
lean_object* x_113; uint8_t x_114; 
lean_dec(x_20);
x_113 = l_outOfBounds___rarg(x_111);
x_114 = lean_nat_dec_le(x_112, x_113);
if (x_114 == 0)
{
lean_object* x_115; lean_object* x_116; 
lean_dec(x_112);
x_115 = lean_array_set(x_106, x_2, x_113);
lean_ctor_set(x_9, 2, x_115);
x_116 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_116;
x_11 = x_9;
goto block_16;
}
else
{
lean_object* x_117; lean_object* x_118; 
lean_dec(x_113);
x_117 = lean_array_set(x_106, x_2, x_112);
lean_ctor_set(x_9, 2, x_117);
x_118 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_118;
x_11 = x_9;
goto block_16;
}
}
else
{
lean_object* x_119; uint8_t x_120; 
x_119 = lean_array_fget(x_105, x_20);
lean_dec(x_20);
x_120 = lean_nat_dec_le(x_112, x_119);
if (x_120 == 0)
{
lean_object* x_121; lean_object* x_122; 
lean_dec(x_112);
x_121 = lean_array_set(x_106, x_2, x_119);
lean_ctor_set(x_9, 2, x_121);
x_122 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_122;
x_11 = x_9;
goto block_16;
}
else
{
lean_object* x_123; lean_object* x_124; 
lean_dec(x_119);
x_123 = lean_array_set(x_106, x_2, x_112);
lean_ctor_set(x_9, 2, x_123);
x_124 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_124;
x_11 = x_9;
goto block_16;
}
}
}
else
{
lean_object* x_125; 
x_125 = lean_array_fget(x_106, x_2);
if (x_110 == 0)
{
lean_object* x_126; lean_object* x_127; uint8_t x_128; 
lean_dec(x_20);
x_126 = l_instInhabitedNat;
x_127 = l_outOfBounds___rarg(x_126);
x_128 = lean_nat_dec_le(x_125, x_127);
if (x_128 == 0)
{
lean_object* x_129; lean_object* x_130; 
lean_dec(x_125);
x_129 = lean_array_set(x_106, x_2, x_127);
lean_ctor_set(x_9, 2, x_129);
x_130 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_130;
x_11 = x_9;
goto block_16;
}
else
{
lean_object* x_131; lean_object* x_132; 
lean_dec(x_127);
x_131 = lean_array_set(x_106, x_2, x_125);
lean_ctor_set(x_9, 2, x_131);
x_132 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_132;
x_11 = x_9;
goto block_16;
}
}
else
{
lean_object* x_133; uint8_t x_134; 
x_133 = lean_array_fget(x_105, x_20);
lean_dec(x_20);
x_134 = lean_nat_dec_le(x_125, x_133);
if (x_134 == 0)
{
lean_object* x_135; lean_object* x_136; 
lean_dec(x_125);
x_135 = lean_array_set(x_106, x_2, x_133);
lean_ctor_set(x_9, 2, x_135);
x_136 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_136;
x_11 = x_9;
goto block_16;
}
else
{
lean_object* x_137; lean_object* x_138; 
lean_dec(x_133);
x_137 = lean_array_set(x_106, x_2, x_125);
lean_ctor_set(x_9, 2, x_137);
x_138 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_138;
x_11 = x_9;
goto block_16;
}
}
}
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; uint8_t x_146; lean_object* x_147; uint8_t x_148; 
x_139 = lean_ctor_get(x_9, 0);
x_140 = lean_ctor_get(x_9, 1);
x_141 = lean_ctor_get(x_9, 2);
x_142 = lean_ctor_get(x_9, 3);
x_143 = lean_ctor_get(x_9, 4);
x_144 = lean_ctor_get(x_9, 5);
lean_inc(x_144);
lean_inc(x_143);
lean_inc(x_142);
lean_inc(x_141);
lean_inc(x_140);
lean_inc(x_139);
lean_dec(x_9);
x_145 = lean_array_get_size(x_141);
x_146 = lean_nat_dec_lt(x_2, x_145);
lean_dec(x_145);
x_147 = lean_array_get_size(x_140);
x_148 = lean_nat_dec_lt(x_20, x_147);
lean_dec(x_147);
if (x_146 == 0)
{
lean_object* x_149; lean_object* x_150; 
x_149 = l_instInhabitedNat;
x_150 = l_outOfBounds___rarg(x_149);
if (x_148 == 0)
{
lean_object* x_151; uint8_t x_152; 
lean_dec(x_20);
x_151 = l_outOfBounds___rarg(x_149);
x_152 = lean_nat_dec_le(x_150, x_151);
if (x_152 == 0)
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; 
lean_dec(x_150);
x_153 = lean_array_set(x_141, x_2, x_151);
x_154 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_154, 0, x_139);
lean_ctor_set(x_154, 1, x_140);
lean_ctor_set(x_154, 2, x_153);
lean_ctor_set(x_154, 3, x_142);
lean_ctor_set(x_154, 4, x_143);
lean_ctor_set(x_154, 5, x_144);
x_155 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_155;
x_11 = x_154;
goto block_16;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; 
lean_dec(x_151);
x_156 = lean_array_set(x_141, x_2, x_150);
x_157 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_157, 0, x_139);
lean_ctor_set(x_157, 1, x_140);
lean_ctor_set(x_157, 2, x_156);
lean_ctor_set(x_157, 3, x_142);
lean_ctor_set(x_157, 4, x_143);
lean_ctor_set(x_157, 5, x_144);
x_158 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_158;
x_11 = x_157;
goto block_16;
}
}
else
{
lean_object* x_159; uint8_t x_160; 
x_159 = lean_array_fget(x_140, x_20);
lean_dec(x_20);
x_160 = lean_nat_dec_le(x_150, x_159);
if (x_160 == 0)
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; 
lean_dec(x_150);
x_161 = lean_array_set(x_141, x_2, x_159);
x_162 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_162, 0, x_139);
lean_ctor_set(x_162, 1, x_140);
lean_ctor_set(x_162, 2, x_161);
lean_ctor_set(x_162, 3, x_142);
lean_ctor_set(x_162, 4, x_143);
lean_ctor_set(x_162, 5, x_144);
x_163 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_163;
x_11 = x_162;
goto block_16;
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; 
lean_dec(x_159);
x_164 = lean_array_set(x_141, x_2, x_150);
x_165 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_165, 0, x_139);
lean_ctor_set(x_165, 1, x_140);
lean_ctor_set(x_165, 2, x_164);
lean_ctor_set(x_165, 3, x_142);
lean_ctor_set(x_165, 4, x_143);
lean_ctor_set(x_165, 5, x_144);
x_166 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_166;
x_11 = x_165;
goto block_16;
}
}
}
else
{
lean_object* x_167; 
x_167 = lean_array_fget(x_141, x_2);
if (x_148 == 0)
{
lean_object* x_168; lean_object* x_169; uint8_t x_170; 
lean_dec(x_20);
x_168 = l_instInhabitedNat;
x_169 = l_outOfBounds___rarg(x_168);
x_170 = lean_nat_dec_le(x_167, x_169);
if (x_170 == 0)
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; 
lean_dec(x_167);
x_171 = lean_array_set(x_141, x_2, x_169);
x_172 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_172, 0, x_139);
lean_ctor_set(x_172, 1, x_140);
lean_ctor_set(x_172, 2, x_171);
lean_ctor_set(x_172, 3, x_142);
lean_ctor_set(x_172, 4, x_143);
lean_ctor_set(x_172, 5, x_144);
x_173 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_173;
x_11 = x_172;
goto block_16;
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; 
lean_dec(x_169);
x_174 = lean_array_set(x_141, x_2, x_167);
x_175 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_175, 0, x_139);
lean_ctor_set(x_175, 1, x_140);
lean_ctor_set(x_175, 2, x_174);
lean_ctor_set(x_175, 3, x_142);
lean_ctor_set(x_175, 4, x_143);
lean_ctor_set(x_175, 5, x_144);
x_176 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_176;
x_11 = x_175;
goto block_16;
}
}
else
{
lean_object* x_177; uint8_t x_178; 
x_177 = lean_array_fget(x_140, x_20);
lean_dec(x_20);
x_178 = lean_nat_dec_le(x_167, x_177);
if (x_178 == 0)
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; 
lean_dec(x_167);
x_179 = lean_array_set(x_141, x_2, x_177);
x_180 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_180, 0, x_139);
lean_ctor_set(x_180, 1, x_140);
lean_ctor_set(x_180, 2, x_179);
lean_ctor_set(x_180, 3, x_142);
lean_ctor_set(x_180, 4, x_143);
lean_ctor_set(x_180, 5, x_144);
x_181 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_181;
x_11 = x_180;
goto block_16;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; 
lean_dec(x_177);
x_182 = lean_array_set(x_141, x_2, x_167);
x_183 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_183, 0, x_139);
lean_ctor_set(x_183, 1, x_140);
lean_ctor_set(x_183, 2, x_182);
lean_ctor_set(x_183, 3, x_142);
lean_ctor_set(x_183, 4, x_143);
lean_ctor_set(x_183, 5, x_144);
x_184 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_184;
x_11 = x_183;
goto block_16;
}
}
}
}
}
block_200:
{
lean_object* x_187; lean_object* x_188; uint8_t x_189; 
lean_dec(x_186);
x_187 = lean_ctor_get(x_9, 4);
lean_inc(x_187);
x_188 = lean_array_get_size(x_187);
x_189 = lean_nat_dec_lt(x_20, x_188);
lean_dec(x_188);
if (x_189 == 0)
{
uint8_t x_190; lean_object* x_191; lean_object* x_192; uint8_t x_193; 
lean_dec(x_187);
x_190 = l_instInhabitedBool;
x_191 = lean_box(x_190);
x_192 = l_outOfBounds___rarg(x_191);
x_193 = lean_unbox(x_192);
lean_dec(x_192);
if (x_193 == 0)
{
lean_object* x_194; 
lean_dec(x_20);
x_194 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_194;
x_11 = x_9;
goto block_16;
}
else
{
lean_object* x_195; 
x_195 = lean_box(0);
x_103 = x_195;
goto block_185;
}
}
else
{
lean_object* x_196; uint8_t x_197; 
x_196 = lean_array_fget(x_187, x_20);
lean_dec(x_187);
x_197 = lean_unbox(x_196);
lean_dec(x_196);
if (x_197 == 0)
{
lean_object* x_198; 
lean_dec(x_20);
x_198 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1;
x_10 = x_198;
x_11 = x_9;
goto block_16;
}
else
{
lean_object* x_199; 
x_199 = lean_box(0);
x_103 = x_199;
goto block_185;
}
}
}
}
block_16:
{
lean_object* x_12; size_t x_13; size_t x_14; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = 1;
x_14 = lean_usize_add(x_7, x_13);
x_7 = x_14;
x_8 = x_12;
x_9 = x_11;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
lean_dec(x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_5 = lean_ctor_get(x_3, 2);
x_6 = lean_ctor_get(x_3, 3);
x_7 = lean_ctor_get(x_3, 4);
x_8 = l_instInhabitedNat;
x_9 = l_Array_back_x21___rarg(x_8, x_6);
x_10 = lean_array_get_size(x_5);
x_11 = lean_nat_dec_lt(x_1, x_10);
lean_dec(x_10);
x_12 = lean_array_pop(x_6);
x_13 = 0;
x_14 = lean_box(x_13);
x_15 = lean_array_set(x_7, x_9, x_14);
x_16 = lean_nat_dec_eq(x_9, x_1);
if (x_11 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = l_outOfBounds___rarg(x_8);
x_18 = lean_array_set(x_5, x_9, x_17);
lean_ctor_set(x_3, 4, x_15);
lean_ctor_set(x_3, 3, x_12);
lean_ctor_set(x_3, 2, x_18);
if (x_16 == 0)
{
x_2 = x_9;
goto _start;
}
else
{
lean_object* x_20; 
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_9);
lean_ctor_set(x_20, 1, x_3);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_array_fget(x_5, x_1);
x_22 = lean_array_set(x_5, x_9, x_21);
lean_ctor_set(x_3, 4, x_15);
lean_ctor_set(x_3, 3, x_12);
lean_ctor_set(x_3, 2, x_22);
if (x_16 == 0)
{
x_2 = x_9;
goto _start;
}
else
{
lean_object* x_24; 
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_9);
lean_ctor_set(x_24, 1, x_3);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_25 = lean_ctor_get(x_3, 0);
x_26 = lean_ctor_get(x_3, 1);
x_27 = lean_ctor_get(x_3, 2);
x_28 = lean_ctor_get(x_3, 3);
x_29 = lean_ctor_get(x_3, 4);
x_30 = lean_ctor_get(x_3, 5);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_3);
x_31 = l_instInhabitedNat;
x_32 = l_Array_back_x21___rarg(x_31, x_28);
x_33 = lean_array_get_size(x_27);
x_34 = lean_nat_dec_lt(x_1, x_33);
lean_dec(x_33);
x_35 = lean_array_pop(x_28);
x_36 = 0;
x_37 = lean_box(x_36);
x_38 = lean_array_set(x_29, x_32, x_37);
x_39 = lean_nat_dec_eq(x_32, x_1);
if (x_34 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = l_outOfBounds___rarg(x_31);
x_41 = lean_array_set(x_27, x_32, x_40);
x_42 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_42, 0, x_25);
lean_ctor_set(x_42, 1, x_26);
lean_ctor_set(x_42, 2, x_41);
lean_ctor_set(x_42, 3, x_35);
lean_ctor_set(x_42, 4, x_38);
lean_ctor_set(x_42, 5, x_30);
if (x_39 == 0)
{
x_2 = x_32;
x_3 = x_42;
goto _start;
}
else
{
lean_object* x_44; 
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_32);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_array_fget(x_27, x_1);
x_46 = lean_array_set(x_27, x_32, x_45);
x_47 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_47, 0, x_25);
lean_ctor_set(x_47, 1, x_26);
lean_ctor_set(x_47, 2, x_46);
lean_ctor_set(x_47, 3, x_35);
lean_ctor_set(x_47, 4, x_38);
lean_ctor_set(x_47, 5, x_30);
if (x_39 == 0)
{
x_2 = x_32;
x_3 = x_47;
goto _start;
}
else
{
lean_object* x_49; 
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_32);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
}
}
}
static lean_object* _init_l_Mathlib_Tactic_Order_Graph_tarjanDFS___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_Order_Graph_tarjanDFS(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; size_t x_24; lean_object* x_25; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = 1;
x_6 = lean_box(x_5);
x_7 = lean_array_set(x_4, x_2, x_6);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 5);
lean_inc(x_9);
lean_inc(x_9);
x_10 = lean_array_set(x_8, x_2, x_9);
x_11 = lean_ctor_get(x_3, 2);
lean_inc(x_11);
lean_inc(x_9);
x_12 = lean_array_set(x_11, x_2, x_9);
x_13 = lean_ctor_get(x_3, 3);
lean_inc(x_13);
lean_inc(x_2);
x_14 = lean_array_push(x_13, x_2);
x_15 = lean_ctor_get(x_3, 4);
lean_inc(x_15);
lean_dec(x_3);
x_16 = lean_box(x_5);
x_17 = lean_array_set(x_15, x_2, x_16);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_9, x_18);
lean_dec(x_9);
x_20 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_20, 0, x_7);
lean_ctor_set(x_20, 1, x_10);
lean_ctor_set(x_20, 2, x_12);
lean_ctor_set(x_20, 3, x_14);
lean_ctor_set(x_20, 4, x_17);
lean_ctor_set(x_20, 5, x_19);
x_21 = lean_array_get_size(x_1);
x_22 = lean_nat_dec_lt(x_2, x_21);
lean_dec(x_21);
x_23 = lean_box(0);
x_24 = 0;
if (x_22 == 0)
{
lean_object* x_56; lean_object* x_57; 
x_56 = l_Mathlib_Tactic_Order_Graph_tarjanDFS___closed__1;
x_57 = l_outOfBounds___rarg(x_56);
x_25 = x_57;
goto block_55;
}
else
{
lean_object* x_58; 
x_58 = lean_array_fget(x_1, x_2);
x_25 = x_58;
goto block_55;
}
block_55:
{
size_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; 
x_26 = lean_array_size(x_25);
x_27 = lean_box(0);
x_28 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1(x_1, x_2, x_23, x_25, x_25, x_26, x_24, x_27, x_20);
lean_dec(x_25);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_30 = x_28;
} else {
 lean_dec_ref(x_28);
 x_30 = lean_box(0);
}
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
x_32 = lean_array_get_size(x_31);
x_33 = lean_nat_dec_lt(x_2, x_32);
lean_dec(x_32);
x_34 = lean_ctor_get(x_29, 2);
lean_inc(x_34);
x_35 = lean_array_get_size(x_34);
x_36 = lean_nat_dec_lt(x_2, x_35);
lean_dec(x_35);
if (x_33 == 0)
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_31);
x_52 = l_instInhabitedNat;
x_53 = l_outOfBounds___rarg(x_52);
x_37 = x_53;
goto block_51;
}
else
{
lean_object* x_54; 
x_54 = lean_array_fget(x_31, x_2);
lean_dec(x_31);
x_37 = x_54;
goto block_51;
}
block_51:
{
lean_object* x_38; 
if (x_36 == 0)
{
lean_object* x_48; lean_object* x_49; 
lean_dec(x_34);
x_48 = l_instInhabitedNat;
x_49 = l_outOfBounds___rarg(x_48);
x_38 = x_49;
goto block_47;
}
else
{
lean_object* x_50; 
x_50 = lean_array_fget(x_34, x_2);
lean_dec(x_34);
x_38 = x_50;
goto block_47;
}
block_47:
{
uint8_t x_39; 
x_39 = lean_nat_dec_eq(x_37, x_38);
lean_dec(x_38);
lean_dec(x_37);
if (x_39 == 0)
{
lean_object* x_40; 
lean_dec(x_2);
if (lean_is_scalar(x_30)) {
 x_40 = lean_alloc_ctor(0, 2, 0);
} else {
 x_40 = x_30;
}
lean_ctor_set(x_40, 0, x_27);
lean_ctor_set(x_40, 1, x_29);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; 
lean_dec(x_30);
x_41 = lean_unsigned_to_nat(0u);
x_42 = l_Lean_Loop_forIn_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__2(x_2, x_41, x_29);
lean_dec(x_2);
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_42, 0);
lean_dec(x_44);
lean_ctor_set(x_42, 0, x_27);
return x_42;
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_42, 1);
lean_inc(x_45);
lean_dec(x_42);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_27);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_11 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_12 = l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1(x_1, x_2, x_3, x_4, x_5, x_10, x_11, x_8, x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Loop_forIn_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Loop_forIn_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__2(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_Order_Graph_tarjanDFS___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Mathlib_Tactic_Order_Graph_tarjanDFS(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Mathlib_Tactic_Order_Graph_findSCCsImp___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_3, 1);
x_10 = lean_nat_dec_lt(x_5, x_9);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_5);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_4);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
lean_dec(x_4);
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
x_13 = lean_array_get_size(x_12);
x_14 = lean_nat_dec_lt(x_5, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
uint8_t x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_dec(x_12);
x_15 = l_instInhabitedBool;
x_16 = lean_box(x_15);
x_17 = l_outOfBounds___rarg(x_16);
x_18 = lean_unbox(x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_inc(x_5);
x_19 = l_Mathlib_Tactic_Order_Graph_tarjanDFS(x_1, x_5, x_8);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_ctor_get(x_3, 2);
x_22 = lean_nat_add(x_5, x_21);
lean_dec(x_5);
x_23 = lean_box(0);
x_4 = x_23;
x_5 = x_22;
x_6 = lean_box(0);
x_7 = lean_box(0);
x_8 = x_20;
goto _start;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_3, 2);
x_26 = lean_nat_add(x_5, x_25);
lean_dec(x_5);
x_27 = lean_box(0);
x_4 = x_27;
x_5 = x_26;
x_6 = lean_box(0);
x_7 = lean_box(0);
goto _start;
}
}
else
{
lean_object* x_29; uint8_t x_30; 
x_29 = lean_array_fget(x_12, x_5);
lean_dec(x_12);
x_30 = lean_unbox(x_29);
lean_dec(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_inc(x_5);
x_31 = l_Mathlib_Tactic_Order_Graph_tarjanDFS(x_1, x_5, x_8);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = lean_ctor_get(x_3, 2);
x_34 = lean_nat_add(x_5, x_33);
lean_dec(x_5);
x_35 = lean_box(0);
x_4 = x_35;
x_5 = x_34;
x_6 = lean_box(0);
x_7 = lean_box(0);
x_8 = x_32;
goto _start;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_3, 2);
x_38 = lean_nat_add(x_5, x_37);
lean_dec(x_5);
x_39 = lean_box(0);
x_4 = x_39;
x_5 = x_38;
x_6 = lean_box(0);
x_7 = lean_box(0);
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_Order_Graph_findSCCsImp(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_3 = lean_array_get_size(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 2, x_5);
x_7 = lean_box(0);
x_8 = l_Std_Range_forIn_x27_loop___at_Mathlib_Tactic_Order_Graph_findSCCsImp___spec__1(x_1, x_6, x_6, x_7, x_4, lean_box(0), lean_box(0), x_2);
lean_dec(x_6);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_8, 0);
lean_dec(x_10);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_7);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Std_Range_forIn_x27_loop___at_Mathlib_Tactic_Order_Graph_findSCCsImp___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Std_Range_forIn_x27_loop___at_Mathlib_Tactic_Order_Graph_findSCCsImp___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_Order_Graph_findSCCsImp___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Mathlib_Tactic_Order_Graph_findSCCsImp(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Mathlib_Tactic_Order_Graph_findSCCs___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_array_mk(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_Order_Graph_findSCCs(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_2 = lean_array_get_size(x_1);
x_3 = 0;
x_4 = lean_box(x_3);
lean_inc(x_2);
x_5 = lean_mk_array(x_2, x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_mk_array(x_2, x_6);
x_8 = l_Mathlib_Tactic_Order_Graph_findSCCs___closed__1;
lean_inc(x_7);
lean_inc(x_5);
x_9 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_7);
lean_ctor_set(x_9, 2, x_7);
lean_ctor_set(x_9, 3, x_8);
lean_ctor_set(x_9, 4, x_5);
lean_ctor_set(x_9, 5, x_6);
x_10 = l_Mathlib_Tactic_Order_Graph_findSCCsImp(x_1, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 2);
lean_inc(x_12);
lean_dec(x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Mathlib_Tactic_Order_Graph_findSCCs___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Mathlib_Tactic_Order_Graph_findSCCs(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Order_Graph_Basic(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Mathlib_Tactic_Order_Graph_Tarjan(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Order_Graph_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1 = _init_l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1();
lean_mark_persistent(l_Array_forIn_x27Unsafe_loop___at_Mathlib_Tactic_Order_Graph_tarjanDFS___spec__1___closed__1);
l_Mathlib_Tactic_Order_Graph_tarjanDFS___closed__1 = _init_l_Mathlib_Tactic_Order_Graph_tarjanDFS___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_Order_Graph_tarjanDFS___closed__1);
l_Mathlib_Tactic_Order_Graph_findSCCs___closed__1 = _init_l_Mathlib_Tactic_Order_Graph_findSCCs___closed__1();
lean_mark_persistent(l_Mathlib_Tactic_Order_Graph_findSCCs___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif

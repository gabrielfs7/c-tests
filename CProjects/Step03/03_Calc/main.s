	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 11
	.section	__TEXT,__literal8,8byte_literals
	.align	3
LCPI0_0:
	.quad	4595473059768854118     ## double 0.17499999999999999
LCPI0_1:
	.quad	4641240890982006784     ## double 200
LCPI0_2:
	.quad	4596373779694328218     ## double 0.20000000000000001
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
Lfunc_begin0:
	.file	1 "/Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc" "main.c"
	.loc	1 3 0                   ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:3:0
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp0:
	.cfi_def_cfa_offset 16
Ltmp1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp2:
	.cfi_def_cfa_register %rbp
	subq	$80, %rsp
	leaq	L_.str(%rip), %rax
	movsd	LCPI0_2(%rip), %xmm0    ## xmm0 = mem[0],zero
	movsd	LCPI0_1(%rip), %xmm1    ## xmm1 = mem[0],zero
	movsd	LCPI0_0(%rip), %xmm2    ## xmm2 = mem[0],zero
	movl	$0, -4(%rbp)
	movl	%edi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	.loc	1 5 15 prologue_end     ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:5:15
Ltmp3:
	movsd	%xmm2, -24(%rbp)
	.loc	1 12 10                 ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:12:10
	movsd	%xmm2, -56(%rbp)
	.loc	1 13 11                 ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:13:11
	movsd	%xmm1, -32(%rbp)
	.loc	1 14 10                 ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:14:10
	movsd	%xmm0, -56(%rbp)
	.loc	1 15 8                  ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:15:8
	movsd	-32(%rbp), %xmm0        ## xmm0 = mem[0],zero
	.loc	1 15 17 is_stmt 0       ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:15:17
	mulsd	-56(%rbp), %xmm0
	.loc	1 15 6                  ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:15:6
	movsd	%xmm0, -40(%rbp)
	.loc	1 16 15 is_stmt 1       ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:16:15
	movsd	-32(%rbp), %xmm0        ## xmm0 = mem[0],zero
	.loc	1 16 24 is_stmt 0       ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:16:24
	addsd	-40(%rbp), %xmm0
	.loc	1 16 13                 ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:16:13
	movsd	%xmm0, -48(%rbp)
	.loc	1 20 9 is_stmt 1        ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:20:9
	movsd	-56(%rbp), %xmm0        ## xmm0 = mem[0],zero
	.loc	1 21 9                  ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:21:9
	movsd	-32(%rbp), %xmm1        ## xmm1 = mem[0],zero
	.loc	1 22 9                  ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:22:9
	movsd	-40(%rbp), %xmm2        ## xmm2 = mem[0],zero
	.loc	1 23 9                  ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:23:9
	movsd	-48(%rbp), %xmm3        ## xmm3 = mem[0],zero
	.loc	1 18 2                  ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:18:2
	movq	%rax, %rdi
	movb	$4, %al
	callq	_printf
	leaq	L_.str.1(%rip), %rdi
	movsd	LCPI0_2(%rip), %xmm0    ## xmm0 = mem[0],zero
	movsd	LCPI0_1(%rip), %xmm1    ## xmm1 = mem[0],zero
	.loc	1 27 11                 ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:27:11
	movsd	%xmm1, -32(%rbp)
	.loc	1 28 17                 ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:28:17
	movaps	%xmm0, %xmm1
	mulsd	-32(%rbp), %xmm1
	.loc	1 28 6 is_stmt 0        ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:28:6
	movsd	%xmm1, -40(%rbp)
	.loc	1 29 15 is_stmt 1       ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:29:15
	movsd	-32(%rbp), %xmm1        ## xmm1 = mem[0],zero
	.loc	1 29 24 is_stmt 0       ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:29:24
	addsd	-40(%rbp), %xmm1
	.loc	1 29 13                 ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:29:13
	movsd	%xmm1, -48(%rbp)
	.loc	1 31 99 is_stmt 1       ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:31:99
	movsd	-32(%rbp), %xmm1        ## xmm1 = mem[0],zero
	.loc	1 31 109 is_stmt 0      ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:31:109
	movsd	-40(%rbp), %xmm2        ## xmm2 = mem[0],zero
	.loc	1 31 114                ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:31:114
	movsd	-48(%rbp), %xmm3        ## xmm3 = mem[0],zero
	.loc	1 31 2                  ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:31:2
	movl	%eax, -60(%rbp)         ## 4-byte Spill
	movb	$4, %al
	callq	_printf
	leaq	L_.str.2(%rip), %rdi
	movsd	LCPI0_0(%rip), %xmm0    ## xmm0 = mem[0],zero
	movsd	LCPI0_1(%rip), %xmm1    ## xmm1 = mem[0],zero
	.loc	1 34 11 is_stmt 1       ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:34:11
	movsd	%xmm1, -32(%rbp)
	.loc	1 36 17                 ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:36:17
	movaps	%xmm0, %xmm1
	mulsd	-32(%rbp), %xmm1
	.loc	1 36 6 is_stmt 0        ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:36:6
	movsd	%xmm1, -40(%rbp)
	.loc	1 37 15 is_stmt 1       ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:37:15
	movsd	-32(%rbp), %xmm1        ## xmm1 = mem[0],zero
	.loc	1 37 24 is_stmt 0       ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:37:24
	addsd	-40(%rbp), %xmm1
	.loc	1 37 13                 ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:37:13
	movsd	%xmm1, -48(%rbp)
	.loc	1 39 107 is_stmt 1      ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:39:107
	movsd	-32(%rbp), %xmm1        ## xmm1 = mem[0],zero
	.loc	1 39 117 is_stmt 0      ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:39:117
	movsd	-40(%rbp), %xmm2        ## xmm2 = mem[0],zero
	.loc	1 39 122                ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:39:122
	movsd	-48(%rbp), %xmm3        ## xmm3 = mem[0],zero
	.loc	1 39 2                  ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:39:2
	movl	%eax, -64(%rbp)         ## 4-byte Spill
	movb	$4, %al
	callq	_printf
	xorl	%ecx, %ecx
	.loc	1 41 2 is_stmt 1        ## /Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc/main.c:41:2
	movl	%eax, -68(%rbp)         ## 4-byte Spill
	movl	%ecx, %eax
	addq	$80, %rsp
	popq	%rbp
	retq
Ltmp4:
Lfunc_end0:
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"(taxrate is %.3f) The tax on %.2f is %.2f, so the grand total is %.2f.\n"

L_.str.1:                               ## @.str.1
	.asciz	"(TAXRATE_DEFINED is %.3f) The tax on %.2f is %.2f, so the grand total is %.2f.\n"

L_.str.2:                               ## @.str.2
	.asciz	"(TAXRATE_CONST is %.3f) The tax on %.2f is %.2f, so the grand total is %.2f.\n"

	.section	__DWARF,__debug_str,regular,debug
Linfo_string:
	.asciz	"Apple LLVM version 7.3.0 (clang-703.0.31)" ## string offset=0
	.asciz	"main.c"                ## string offset=42
	.asciz	"/Users/gsoares/workspace/c-tests/CProjects/Step03/03_Calc" ## string offset=49
	.asciz	"main"                  ## string offset=107
	.asciz	"int"                   ## string offset=112
	.asciz	"argc"                  ## string offset=116
	.asciz	"argv"                  ## string offset=121
	.asciz	"char"                  ## string offset=126
	.asciz	"TAXRATE_CONST"         ## string offset=131
	.asciz	"double"                ## string offset=145
	.asciz	"subtotal"              ## string offset=152
	.asciz	"tax"                   ## string offset=161
	.asciz	"grandtotal"            ## string offset=165
	.asciz	"taxrate"               ## string offset=176
	.section	__DWARF,__debug_loc,regular,debug
Lsection_debug_loc:
	.section	__DWARF,__debug_abbrev,regular,debug
Lsection_abbrev:
	.byte	1                       ## Abbreviation Code
	.byte	17                      ## DW_TAG_compile_unit
	.byte	1                       ## DW_CHILDREN_yes
	.byte	37                      ## DW_AT_producer
	.byte	14                      ## DW_FORM_strp
	.byte	19                      ## DW_AT_language
	.byte	5                       ## DW_FORM_data2
	.byte	3                       ## DW_AT_name
	.byte	14                      ## DW_FORM_strp
	.byte	16                      ## DW_AT_stmt_list
	.byte	6                       ## DW_FORM_data4
	.byte	27                      ## DW_AT_comp_dir
	.byte	14                      ## DW_FORM_strp
	.byte	17                      ## DW_AT_low_pc
	.byte	1                       ## DW_FORM_addr
	.byte	18                      ## DW_AT_high_pc
	.byte	1                       ## DW_FORM_addr
	.byte	0                       ## EOM(1)
	.byte	0                       ## EOM(2)
	.byte	2                       ## Abbreviation Code
	.byte	46                      ## DW_TAG_subprogram
	.byte	1                       ## DW_CHILDREN_yes
	.byte	17                      ## DW_AT_low_pc
	.byte	1                       ## DW_FORM_addr
	.byte	18                      ## DW_AT_high_pc
	.byte	1                       ## DW_FORM_addr
	.byte	64                      ## DW_AT_frame_base
	.byte	10                      ## DW_FORM_block1
	.byte	3                       ## DW_AT_name
	.byte	14                      ## DW_FORM_strp
	.byte	58                      ## DW_AT_decl_file
	.byte	11                      ## DW_FORM_data1
	.byte	59                      ## DW_AT_decl_line
	.byte	11                      ## DW_FORM_data1
	.byte	39                      ## DW_AT_prototyped
	.byte	12                      ## DW_FORM_flag
	.byte	73                      ## DW_AT_type
	.byte	19                      ## DW_FORM_ref4
	.byte	63                      ## DW_AT_external
	.byte	12                      ## DW_FORM_flag
	.byte	0                       ## EOM(1)
	.byte	0                       ## EOM(2)
	.byte	3                       ## Abbreviation Code
	.byte	5                       ## DW_TAG_formal_parameter
	.byte	0                       ## DW_CHILDREN_no
	.byte	2                       ## DW_AT_location
	.byte	10                      ## DW_FORM_block1
	.byte	3                       ## DW_AT_name
	.byte	14                      ## DW_FORM_strp
	.byte	58                      ## DW_AT_decl_file
	.byte	11                      ## DW_FORM_data1
	.byte	59                      ## DW_AT_decl_line
	.byte	11                      ## DW_FORM_data1
	.byte	73                      ## DW_AT_type
	.byte	19                      ## DW_FORM_ref4
	.byte	0                       ## EOM(1)
	.byte	0                       ## EOM(2)
	.byte	4                       ## Abbreviation Code
	.byte	52                      ## DW_TAG_variable
	.byte	0                       ## DW_CHILDREN_no
	.byte	2                       ## DW_AT_location
	.byte	10                      ## DW_FORM_block1
	.byte	3                       ## DW_AT_name
	.byte	14                      ## DW_FORM_strp
	.byte	58                      ## DW_AT_decl_file
	.byte	11                      ## DW_FORM_data1
	.byte	59                      ## DW_AT_decl_line
	.byte	11                      ## DW_FORM_data1
	.byte	73                      ## DW_AT_type
	.byte	19                      ## DW_FORM_ref4
	.byte	0                       ## EOM(1)
	.byte	0                       ## EOM(2)
	.byte	5                       ## Abbreviation Code
	.byte	36                      ## DW_TAG_base_type
	.byte	0                       ## DW_CHILDREN_no
	.byte	3                       ## DW_AT_name
	.byte	14                      ## DW_FORM_strp
	.byte	62                      ## DW_AT_encoding
	.byte	11                      ## DW_FORM_data1
	.byte	11                      ## DW_AT_byte_size
	.byte	11                      ## DW_FORM_data1
	.byte	0                       ## EOM(1)
	.byte	0                       ## EOM(2)
	.byte	6                       ## Abbreviation Code
	.byte	15                      ## DW_TAG_pointer_type
	.byte	0                       ## DW_CHILDREN_no
	.byte	73                      ## DW_AT_type
	.byte	19                      ## DW_FORM_ref4
	.byte	0                       ## EOM(1)
	.byte	0                       ## EOM(2)
	.byte	7                       ## Abbreviation Code
	.byte	38                      ## DW_TAG_const_type
	.byte	0                       ## DW_CHILDREN_no
	.byte	73                      ## DW_AT_type
	.byte	19                      ## DW_FORM_ref4
	.byte	0                       ## EOM(1)
	.byte	0                       ## EOM(2)
	.byte	0                       ## EOM(3)
	.section	__DWARF,__debug_info,regular,debug
Lsection_info:
Lcu_begin0:
	.long	209                     ## Length of Unit
	.short	2                       ## DWARF version number
Lset0 = Lsection_abbrev-Lsection_abbrev ## Offset Into Abbrev. Section
	.long	Lset0
	.byte	8                       ## Address Size (in bytes)
	.byte	1                       ## Abbrev [1] 0xb:0xca DW_TAG_compile_unit
	.long	0                       ## DW_AT_producer
	.short	12                      ## DW_AT_language
	.long	42                      ## DW_AT_name
Lset1 = Lline_table_start0-Lsection_line ## DW_AT_stmt_list
	.long	Lset1
	.long	49                      ## DW_AT_comp_dir
	.quad	Lfunc_begin0            ## DW_AT_low_pc
	.quad	Lfunc_end0              ## DW_AT_high_pc
	.byte	2                       ## Abbrev [2] 0x2e:0x82 DW_TAG_subprogram
	.quad	Lfunc_begin0            ## DW_AT_low_pc
	.quad	Lfunc_end0              ## DW_AT_high_pc
	.byte	1                       ## DW_AT_frame_base
	.byte	86
	.long	107                     ## DW_AT_name
	.byte	1                       ## DW_AT_decl_file
	.byte	3                       ## DW_AT_decl_line
	.byte	1                       ## DW_AT_prototyped
	.long	176                     ## DW_AT_type
	.byte	1                       ## DW_AT_external
	.byte	3                       ## Abbrev [3] 0x4d:0xe DW_TAG_formal_parameter
	.byte	2                       ## DW_AT_location
	.byte	145
	.byte	120
	.long	116                     ## DW_AT_name
	.byte	1                       ## DW_AT_decl_file
	.byte	3                       ## DW_AT_decl_line
	.long	176                     ## DW_AT_type
	.byte	3                       ## Abbrev [3] 0x5b:0xe DW_TAG_formal_parameter
	.byte	2                       ## DW_AT_location
	.byte	145
	.byte	112
	.long	121                     ## DW_AT_name
	.byte	1                       ## DW_AT_decl_file
	.byte	3                       ## DW_AT_decl_line
	.long	183                     ## DW_AT_type
	.byte	4                       ## Abbrev [4] 0x69:0xe DW_TAG_variable
	.byte	2                       ## DW_AT_location
	.byte	145
	.byte	104
	.long	131                     ## DW_AT_name
	.byte	1                       ## DW_AT_decl_file
	.byte	5                       ## DW_AT_decl_line
	.long	200                     ## DW_AT_type
	.byte	4                       ## Abbrev [4] 0x77:0xe DW_TAG_variable
	.byte	2                       ## DW_AT_location
	.byte	145
	.byte	96
	.long	152                     ## DW_AT_name
	.byte	1                       ## DW_AT_decl_file
	.byte	7                       ## DW_AT_decl_line
	.long	205                     ## DW_AT_type
	.byte	4                       ## Abbrev [4] 0x85:0xe DW_TAG_variable
	.byte	2                       ## DW_AT_location
	.byte	145
	.byte	88
	.long	161                     ## DW_AT_name
	.byte	1                       ## DW_AT_decl_file
	.byte	8                       ## DW_AT_decl_line
	.long	205                     ## DW_AT_type
	.byte	4                       ## Abbrev [4] 0x93:0xe DW_TAG_variable
	.byte	2                       ## DW_AT_location
	.byte	145
	.byte	80
	.long	165                     ## DW_AT_name
	.byte	1                       ## DW_AT_decl_file
	.byte	9                       ## DW_AT_decl_line
	.long	205                     ## DW_AT_type
	.byte	4                       ## Abbrev [4] 0xa1:0xe DW_TAG_variable
	.byte	2                       ## DW_AT_location
	.byte	145
	.byte	72
	.long	176                     ## DW_AT_name
	.byte	1                       ## DW_AT_decl_file
	.byte	10                      ## DW_AT_decl_line
	.long	205                     ## DW_AT_type
	.byte	0                       ## End Of Children Mark
	.byte	5                       ## Abbrev [5] 0xb0:0x7 DW_TAG_base_type
	.long	112                     ## DW_AT_name
	.byte	5                       ## DW_AT_encoding
	.byte	4                       ## DW_AT_byte_size
	.byte	6                       ## Abbrev [6] 0xb7:0x5 DW_TAG_pointer_type
	.long	188                     ## DW_AT_type
	.byte	6                       ## Abbrev [6] 0xbc:0x5 DW_TAG_pointer_type
	.long	193                     ## DW_AT_type
	.byte	5                       ## Abbrev [5] 0xc1:0x7 DW_TAG_base_type
	.long	126                     ## DW_AT_name
	.byte	6                       ## DW_AT_encoding
	.byte	1                       ## DW_AT_byte_size
	.byte	7                       ## Abbrev [7] 0xc8:0x5 DW_TAG_const_type
	.long	205                     ## DW_AT_type
	.byte	5                       ## Abbrev [5] 0xcd:0x7 DW_TAG_base_type
	.long	145                     ## DW_AT_name
	.byte	4                       ## DW_AT_encoding
	.byte	8                       ## DW_AT_byte_size
	.byte	0                       ## End Of Children Mark
	.section	__DWARF,__debug_ranges,regular,debug
Ldebug_range:
	.section	__DWARF,__apple_names,regular,debug
Lnames_begin:
	.long	1212240712              ## Header Magic
	.short	1                       ## Header Version
	.short	0                       ## Header Hash Function
	.long	1                       ## Header Bucket Count
	.long	1                       ## Header Hash Count
	.long	12                      ## Header Data Length
	.long	0                       ## HeaderData Die Offset Base
	.long	1                       ## HeaderData Atom Count
	.short	1                       ## DW_ATOM_die_offset
	.short	6                       ## DW_FORM_data4
	.long	0                       ## Bucket 0
	.long	2090499946              ## Hash in Bucket 0
	.long	LNames0-Lnames_begin    ## Offset in Bucket 0
LNames0:
	.long	107                     ## main
	.long	1                       ## Num DIEs
	.long	46
	.long	0
	.section	__DWARF,__apple_objc,regular,debug
Lobjc_begin:
	.long	1212240712              ## Header Magic
	.short	1                       ## Header Version
	.short	0                       ## Header Hash Function
	.long	1                       ## Header Bucket Count
	.long	0                       ## Header Hash Count
	.long	12                      ## Header Data Length
	.long	0                       ## HeaderData Die Offset Base
	.long	1                       ## HeaderData Atom Count
	.short	1                       ## DW_ATOM_die_offset
	.short	6                       ## DW_FORM_data4
	.long	-1                      ## Bucket 0
	.section	__DWARF,__apple_namespac,regular,debug
Lnamespac_begin:
	.long	1212240712              ## Header Magic
	.short	1                       ## Header Version
	.short	0                       ## Header Hash Function
	.long	1                       ## Header Bucket Count
	.long	0                       ## Header Hash Count
	.long	12                      ## Header Data Length
	.long	0                       ## HeaderData Die Offset Base
	.long	1                       ## HeaderData Atom Count
	.short	1                       ## DW_ATOM_die_offset
	.short	6                       ## DW_FORM_data4
	.long	-1                      ## Bucket 0
	.section	__DWARF,__apple_types,regular,debug
Ltypes_begin:
	.long	1212240712              ## Header Magic
	.short	1                       ## Header Version
	.short	0                       ## Header Hash Function
	.long	3                       ## Header Bucket Count
	.long	3                       ## Header Hash Count
	.long	20                      ## Header Data Length
	.long	0                       ## HeaderData Die Offset Base
	.long	3                       ## HeaderData Atom Count
	.short	1                       ## DW_ATOM_die_offset
	.short	6                       ## DW_FORM_data4
	.short	3                       ## DW_ATOM_die_tag
	.short	5                       ## DW_FORM_data2
	.short	4                       ## DW_ATOM_type_flags
	.short	11                      ## DW_FORM_data1
	.long	-1                      ## Bucket 0
	.long	0                       ## Bucket 1
	.long	1                       ## Bucket 2
	.long	-113419488              ## Hash in Bucket 1
	.long	193495088               ## Hash in Bucket 2
	.long	2090147939              ## Hash in Bucket 2
	.long	Ltypes1-Ltypes_begin    ## Offset in Bucket 1
	.long	Ltypes0-Ltypes_begin    ## Offset in Bucket 2
	.long	Ltypes2-Ltypes_begin    ## Offset in Bucket 2
Ltypes1:
	.long	145                     ## double
	.long	1                       ## Num DIEs
	.long	205
	.short	36
	.byte	0
	.long	0
Ltypes0:
	.long	112                     ## int
	.long	1                       ## Num DIEs
	.long	176
	.short	36
	.byte	0
	.long	0
Ltypes2:
	.long	126                     ## char
	.long	1                       ## Num DIEs
	.long	193
	.short	36
	.byte	0
	.long	0
	.section	__DWARF,__apple_exttypes,regular,debug
Lexttypes_begin:
	.long	1212240712              ## Header Magic
	.short	1                       ## Header Version
	.short	0                       ## Header Hash Function
	.long	1                       ## Header Bucket Count
	.long	0                       ## Header Hash Count
	.long	12                      ## Header Data Length
	.long	0                       ## HeaderData Die Offset Base
	.long	1                       ## HeaderData Atom Count
	.short	7                       ## DW_ATOM_ext_types
	.short	6                       ## DW_FORM_data4
	.long	-1                      ## Bucket 0

.subsections_via_symbols
	.section	__DWARF,__debug_line,regular,debug
Lsection_line:
Lline_table_start0:

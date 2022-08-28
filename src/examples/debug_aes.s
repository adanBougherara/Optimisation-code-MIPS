	.ent	aes_expandEncKey
aes_expandEncKey:
		# vars= 0, regs= 1/0, args= 0, gp= 0
	addiu	$sp,$sp,-8
	sw	$16,4($sp)
	sw	$4,8($sp)
	sw	$5,12($sp)
	lw	$2,8($sp)
	lbu	$3,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,29
	lbu	$2,0($2)
	move	$4,$2
	lui	$2,0x1001 # sbox
	addu	$2,$4,$2
	lbu	$4,0($2)
	lw	$2,12($sp)
	lbu	$2,0($2)
	xor	$2,$4,$2
	andi	$2,$2,0x00ff
	xor	$2,$3,$2
	andi	$3,$2,0x00ff
	lw	$2,8($sp)
	sb	$3,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,1
	lbu	$4,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,30
	lbu	$2,0($2)
	move	$3,$2
	lui	$2,0x1001 # sbox
	addu	$2,$3,$2
	lbu	$3,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,1
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,2
	lbu	$4,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,31
	lbu	$2,0($2)
	move	$3,$2
	lui	$2,0x1001 # sbox
	addu	$2,$3,$2
	lbu	$3,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,2
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,3
	lbu	$4,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,28
	lbu	$2,0($2)
	move	$3,$2
	lui	$2,0x1001 # sbox
	addu	$2,$3,$2
	lbu	$3,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,3
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	lw	$2,12($sp)
	lbu	$2,0($2)
	sll	$2,$2,1
	sll	$4,$2,24
	sra	$4,$4,24
	lw	$2,12($sp)
	lbu	$2,0($2)
	srl	$2,$2,7
	andi	$2,$2,0x00ff
	move	$3,$2
	sll	$3,$3,3
	subu	$3,$3,$2
	sll	$3,$3,2
	subu	$2,$3,$2
	andi	$2,$2,0x00ff
	sll	$2,$2,24
	sra	$2,$2,24
	xor	$2,$4,$2
	sll	$2,$2,24
	sra	$2,$2,24
	andi	$3,$2,0x00ff
	lw	$2,12($sp)
	sb	$3,0($2)
	ori	$16, $0, 4			# 0x4
	b	$L38
	nop

$L39:
	move	$3,$16
	lw	$2,8($sp)
	addu	$2,$2,$3
	lbu	$4,0($2)
	move	$2,$16
	addiu	$2,$2,-4
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$3,0($2)
	move	$5,$16
	lw	$2,8($sp)
	addu	$2,$2,$5
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	move	$2,$16
	addiu	$2,$2,1
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$4,0($2)
	move	$2,$16
	addiu	$2,$2,-3
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$3,0($2)
	move	$2,$16
	addiu	$2,$2,1
	lw	$5,8($sp)
	addu	$2,$5,$2
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	move	$2,$16
	addiu	$2,$2,2
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$4,0($2)
	move	$2,$16
	addiu	$2,$2,-2
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$3,0($2)
	move	$2,$16
	addiu	$2,$2,2
	lw	$5,8($sp)
	addu	$2,$5,$2
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	move	$2,$16
	addiu	$2,$2,3
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$4,0($2)
	move	$2,$16
	addiu	$2,$2,-1
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$3,0($2)
	move	$2,$16
	addiu	$2,$2,3
	lw	$5,8($sp)
	addu	$2,$5,$2
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	addiu	$2,$16,4
	andi	$16,$2,0x00ff
$L38:
	sltiu	$2,$16,16
	bne	$2,$0,$L39
	nop

	lw	$2,8($sp)
	addiu	$2,$2,16
	lbu	$4,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,12
	lbu	$2,0($2)
	move	$3,$2
	lui	$2,0x1001 # sbox
	addu	$2,$3,$2
	lbu	$3,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,16
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,17
	lbu	$4,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,13
	lbu	$2,0($2)
	move	$3,$2
	lui	$2,0x1001 # sbox
	addu	$2,$3,$2
	lbu	$3,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,17
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,18
	lbu	$4,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,14
	lbu	$2,0($2)
	move	$3,$2
	lui	$2,0x1001 # sbox
	addu	$2,$3,$2
	lbu	$3,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,18
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,19
	lbu	$4,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,15
	lbu	$2,0($2)
	move	$3,$2
	lui	$2,0x1001 # sbox
	addu	$2,$3,$2
	lbu	$3,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,19
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	ori	$16,$0,20			# 0x14
	b	$L40
	nop

$L41:
	move	$3,$16
	lw	$2,8($sp)
	addu	$2,$2,$3
	lbu	$4,0($2)
	move	$2,$16
	addiu	$2,$2,-4
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$3,0($2)
	move	$5,$16
	lw	$2,8($sp)
	addu	$2,$2,$5
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	move	$2,$16
	addiu	$2,$2,1
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$4,0($2)
	move	$2,$16
	addiu	$2,$2,-3
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$3,0($2)
	move	$2,$16
	addiu	$2,$2,1
	lw	$5,8($sp)
	addu	$2,$5,$2
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	move	$2,$16
	addiu	$2,$2,2
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$4,0($2)
	move	$2,$16
	addiu	$2,$2,-2
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$3,0($2)
	move	$2,$16
	addiu	$2,$2,2
	lw	$5,8($sp)
	addu	$2,$5,$2
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	move	$2,$16
	addiu	$2,$2,3
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$4,0($2)
	move	$2,$16
	addiu	$2,$2,-1
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$3,0($2)
	move	$2,$16
	addiu	$2,$2,3
	lw	$5,8($sp)
	addu	$2,$5,$2
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	addiu	$2,$16,4
	andi	$16,$2,0x00ff
$L40:
	sltiu	$2,$16,32
	bne	$2,$0,$L41
	nop

	nop
	lw	$16,4($sp)
	addiu	$sp,$sp,8
	jr	$31
	nop

	.end	aes_expandEncKey
	.globl	aes_expandDecKey
	.ent	aes_expandDecKey
aes_expandDecKey:
	# vars= 8, regs= 0/0, args= 0, gp= 0
	addiu	$sp,$sp,-8
	sw	$4,8($sp)
	sw	$5,12($sp)
	ori	$2, $0, 28			# 0x1c
	sb	$2,0($sp)
	b	$L44
	nop

$L45:
	lbu	$2,0($sp)
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$4,0($2)
	lbu	$2,0($sp)
	addiu	$2,$2,-4
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$3,0($2)
	lbu	$2,0($sp)
	lw	$5,8($sp)
	addu	$2,$5,$2
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	lbu	$2,0($sp)
	addiu	$2,$2,1
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$4,0($2)
	lbu	$2,0($sp)
	addiu	$2,$2,-3
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$3,0($2)
	lbu	$2,0($sp)
	addiu	$2,$2,1
	lw	$5,8($sp)
	addu	$2,$5,$2
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	lbu	$2,0($sp)
	addiu	$2,$2,2
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$4,0($2)
	lbu	$2,0($sp)
	addiu	$2,$2,-2
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$3,0($2)
	lbu	$2,0($sp)
	addiu	$2,$2,2
	lw	$5,8($sp)
	addu	$2,$5,$2
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	lbu	$2,0($sp)
	addiu	$2,$2,3
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$4,0($2)
	lbu	$2,0($sp)
	addiu	$2,$2,-1
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$3,0($2)
	lbu	$2,0($sp)
	addiu	$2,$2,3
	lw	$5,8($sp)
	addu	$2,$5,$2
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	lbu	$2,0($sp)
	addiu	$2,$2,-4
	sb	$2,0($sp)
$L44:
	lbu	$2,0($sp)
	sltiu	$2,$2,17
	beq	$2,$0,$L45
	nop

	lw	$2,8($sp)
	addiu	$2,$2,16
	lbu	$4,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,12
	lbu	$2,0($2)
	move	$3,$2
	lui	$2,0x1001 # sbox
	addu	$2,$3,$2
	lbu	$3,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,16
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,17
	lbu	$4,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,13
	lbu	$2,0($2)
	move	$3,$2
	lui	$2,0x1001 # sbox
	addu	$2,$3,$2
	lbu	$3,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,17
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,18
	lbu	$4,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,14
	lbu	$2,0($2)
	move	$3,$2
	lui	$2,0x1001 # sbox
	addu	$2,$3,$2
	lbu	$3,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,18
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,19
	lbu	$4,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,15
	lbu	$2,0($2)
	move	$3,$2
	lui	$2,0x1001 # sbox
	addu	$2,$3,$2
	lbu	$3,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,19
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	ori	$2,$0,12			# 0xc
	sb	$2,0($sp)
	b	$L46
	nop

$L47:
	lbu	$2,0($sp)
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$4,0($2)
	lbu	$2,0($sp)
	addiu	$2,$2,-4
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$3,0($2)
	lbu	$2,0($sp)
	lw	$5,8($sp)
	addu	$2,$5,$2
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	lbu	$2,0($sp)
	addiu	$2,$2,1
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$4,0($2)
	lbu	$2,0($sp)
	addiu	$2,$2,-3
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$3,0($2)
	lbu	$2,0($sp)
	addiu	$2,$2,1
	lw	$5,8($sp)
	addu	$2,$5,$2
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	lbu	$2,0($sp)
	addiu	$2,$2,2
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$4,0($2)
	lbu	$2,0($sp)
	addiu	$2,$2,-2
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$3,0($2)
	lbu	$2,0($sp)
	addiu	$2,$2,2
	lw	$5,8($sp)
	addu	$2,$5,$2
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	lbu	$2,0($sp)
	addiu	$2,$2,3
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$4,0($2)
	lbu	$2,0($sp)
	addiu	$2,$2,-1
	lw	$3,8($sp)
	addu	$2,$3,$2
	lbu	$3,0($2)
	lbu	$2,0($sp)
	addiu	$2,$2,3
	lw	$5,8($sp)
	addu	$2,$5,$2
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	lbu	$2,0($sp)
	addiu	$2,$2,-4
	sb	$2,0($sp)
$L46:
	lbu	$2,0($sp)
	bne	$2,$0,$L47
	nop

	lw	$2,12($sp)
	lbu	$2,0($2)
	srl	$2,$2,1
	andi	$2,$2,0x00ff
	sll	$2,$2,24
	sra	$2,$2,24
	lw	$3,12($sp)
	lbu	$3,0($3)
	andi	$3,$3,0x1
	beq	$3,$0,$L48
	nop

	addi	$3,$0,-115			# 0xffffffffffffff8d
	b	$L49
	nop

$L48:
	move	$3,$0
$L49:
	xor	$2,$3,$2
	sll	$2,$2,24
	sra	$2,$2,24
	andi	$3,$2,0x00ff
	lw	$2,12($sp)
	sb	$3,0($2)
	lw	$2,8($sp)
	lbu	$3,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,29
	lbu	$2,0($2)
	move	$4,$2
	lui	$2,0x1001 # sbox
	addu	$2,$4,$2
	lbu	$4,0($2)
	lw	$2,12($sp)
	lbu	$2,0($2)
	xor	$2,$4,$2
	andi	$2,$2,0x00ff
	xor	$2,$3,$2
	andi	$3,$2,0x00ff
	lw	$2,8($sp)
	sb	$3,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,1
	lbu	$4,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,30
	lbu	$2,0($2)
	move	$3,$2
	lui	$2,0x1001 # sbox
	addu	$2,$3,$2
	lbu	$3,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,1
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,2
	lbu	$4,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,31
	lbu	$2,0($2)
	move	$3,$2
	lui	$2,0x1001 # sbox
	addu	$2,$3,$2
	lbu	$3,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,2
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,3
	lbu	$4,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,28
	lbu	$2,0($2)
	move	$3,$2
	lui	$2,0x1001 # sbox
	addu	$2,$3,$2
	lbu	$3,0($2)
	lw	$2,8($sp)
	addiu	$2,$2,3
	xor	$3,$4,$3
	andi	$3,$3,0x00ff
	sb	$3,0($2)
	nop
	addiu	$sp,$sp,8
	jr	$31
	nop

	.end	aes_expandDecKey
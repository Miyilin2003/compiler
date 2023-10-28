.arch armv7-a

@ .comm section save global variable without initialization
.comm n, 4 @ global variables
.comm a, 4
.comm b, 4
.comm i, 4
.comm t, 4

.section .data
a:
    .int 0
b:
    .int 1
t:
    .int 1


@ .rodata section save constant
.section .rodata
.align 2
_str1:
.ascii "%d" 
.align 2
_str2:
.ascii "%d\n"


.text
.global main
.type main, %function
main:
    push {fp, lr}
    add fp, sp, #4
    

    ldr r0, _bridge+20  @ *r0="%d"
    ldr r1, _bridge      @ r1=&n
    bl scanf              @ scanf("%d", &n)

    ldr r0, _bridge      @ r0=&n
    ldr r4, [r0]          @ r4=n
    

    ldr r0, _bridge+4	@r0=&a
    ldr r1,[r0]		@r1=a
    ldr r0, _bridge+24	@*r0="%d\n"
    bl printf 		@printf("%d\n", a)
    
    ldr r0, _bridge+8	@r0=&b
    ldr r1,[r0]		@r1=b
    ldr r0, _bridge+24	@*r0="%d\n"
    bl printf 		@printf("%d\n", b)
    
l1:
    ldr r0, _bridge+4      @ r0=&a
    ldr r1, [r0]           @ r1=a
    ldr r0, _bridge+8      @ r0=&b
    ldr r2, [r0]           @ r2=t=b(我省略了t的使用)
    add r3, r1, r2         @ r3=r1+r2=a+b
    ldr r0, _bridge+8      @ r0=&b
    str r3, [r0]           @ b=a+b
    ldr r0, _bridge+4      @ r0=&a
    str r2, [r0]           @ a=t
    
    ldr r0, _bridge+8	@r0=&b
    ldr r1,[r0]		@r1=b
    ldr r0, _bridge+24	@*r0="%d\n"
    bl printf 		@printf("%d\n", b)
    
    ldr r0, _bridge+12    @ r0=&i
    ldr r1, [r0]          @ r1=i
    add r3, r1, #1        @ r3=i+1
    ldr r0, _bridge+12    @ r0=&i
    str r3, [r0]          @ i=r3=i+1
    
    cmp r3,r4		  @while(i<n) 循环
    blt l1

l2:
    pop {fp, pc} @ return 0


_bridge:
    .word n
    .word a
    .word b
    .word i
    .word t
    .word _str1
    .word _str2

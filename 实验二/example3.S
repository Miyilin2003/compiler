.arch armv7-a

@ .comm section save global variable without initialization
.comm i, 4
.comm n, 4
.comm f, 4

.section .data
i:
    .int 2
f:
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
    

    ldr r0, _bridge+12  @ *r0="%d"
    ldr r1, _bridge+4      @ r1=&n
    bl scanf              @ scanf("%d", &n)

    ldr r0, _bridge+4      @ r0=&n
    ldr r3, [r0]          @ r3=n
    
l1:
    ldr r0, _bridge      @ r0=&a
    ldr r1, [r0]           @ r1=a
    ldr r0, _bridge+8      @ r0=&b
    ldr r2, [r0]           @ r2=t=b(我省略了t的使用)
    MUL r2, r1, r2         @ r3=r1+r2=a+b
    
    ldr r0, _bridge+8      @ r0=&b
    str r2, [r0]           @ b=a+b
    
    
    ldr r0, _bridge       @ r0=&i
    ldr r1, [r0]          @ r1=i
    add r2, r1, #1        @ r3=i+1
    ldr r0, _bridge       @ r0=&i
    str r2, [r0]          @ i=r3=i+1
    
    cmp r2,r3		  @while(i<=n) 循环
    ble l1

l2:
    ldr r0, _bridge+8	@r0=&b
    ldr r1,[r0]		@r1=b
    ldr r0, _bridge+16	@*r0="%d\n"
    bl printf 		@printf("%d\n", b)
    pop {fp, pc} @ return 0


_bridge:
    .word i
    .word n
    .word f
    .word _str1
    .word _str2
.late_rodata
glabel D_80A4B930
    .float 3.14159274101

.text
glabel func_80A4A6AC
/* 017EC 80A4A6AC 27BDFFC8 */  addiu   $sp, $sp, 0xFFC8           ## $sp = FFFFFFC8
/* 017F0 80A4A6B0 AFBF0024 */  sw      $ra, 0x0024($sp)           
/* 017F4 80A4A6B4 AFB00020 */  sw      $s0, 0x0020($sp)           
/* 017F8 80A4A6B8 848202C2 */  lh      $v0, 0x02C2($a0)           ## 000002C2
/* 017FC 80A4A6BC 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 01800 80A4A6C0 00A03025 */  or      $a2, $a1, $zero            ## $a2 = 00000000
/* 01804 80A4A6C4 10400004 */  beq     $v0, $zero, .L80A4A6D8     
/* 01808 80A4A6C8 8CA71C44 */  lw      $a3, 0x1C44($a1)           ## 00001C44
/* 0180C 80A4A6CC 244EFFFF */  addiu   $t6, $v0, 0xFFFF           ## $t6 = FFFFFFFF
/* 01810 80A4A6D0 1000007B */  beq     $zero, $zero, .L80A4A8C0   
/* 01814 80A4A6D4 A48E02C2 */  sh      $t6, 0x02C2($a0)           ## 000002C2
.L80A4A6D8:
/* 01818 80A4A6D8 920F031C */  lbu     $t7, 0x031C($s0)           ## 0000031C
/* 0181C 80A4A6DC 31F80002 */  andi    $t8, $t7, 0x0002           ## $t8 = 00000000
/* 01820 80A4A6E0 53000010 */  beql    $t8, $zero, .L80A4A724     
/* 01824 80A4A6E4 92020369 */  lbu     $v0, 0x0369($s0)           ## 00000369
/* 01828 80A4A6E8 8E0802B0 */  lw      $t0, 0x02B0($s0)           ## 000002B0
/* 0182C 80A4A6EC 3C1980A5 */  lui     $t9, %hi(func_80A4A234)    ## $t9 = 80A50000
/* 01830 80A4A6F0 2739A234 */  addiu   $t9, $t9, %lo(func_80A4A234) ## $t9 = 80A4A234
/* 01834 80A4A6F4 1728000A */  bne     $t9, $t0, .L80A4A720       
/* 01838 80A4A6F8 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 0183C 80A4A6FC AFA6003C */  sw      $a2, 0x003C($sp)           
/* 01840 80A4A700 0C29282A */  jal     func_80A4A0A8              
/* 01844 80A4A704 AFA70034 */  sw      $a3, 0x0034($sp)           
/* 01848 80A4A708 44802000 */  mtc1    $zero, $f4                 ## $f4 = 0.00
/* 0184C 80A4A70C 44803000 */  mtc1    $zero, $f6                 ## $f6 = 0.00
/* 01850 80A4A710 8FA6003C */  lw      $a2, 0x003C($sp)           
/* 01854 80A4A714 8FA70034 */  lw      $a3, 0x0034($sp)           
/* 01858 80A4A718 E6040068 */  swc1    $f4, 0x0068($s0)           ## 00000068
/* 0185C 80A4A71C E6060060 */  swc1    $f6, 0x0060($s0)           ## 00000060
.L80A4A720:
/* 01860 80A4A720 92020369 */  lbu     $v0, 0x0369($s0)           ## 00000369
.L80A4A724:
/* 01864 80A4A724 30490002 */  andi    $t1, $v0, 0x0002           ## $t1 = 00000000
/* 01868 80A4A728 51200066 */  beql    $t1, $zero, .L80A4A8C4     
/* 0186C 80A4A72C 8FBF0024 */  lw      $ra, 0x0024($sp)           
/* 01870 80A4A730 820A00AF */  lb      $t2, 0x00AF($s0)           ## 000000AF
/* 01874 80A4A734 59400063 */  blezl   $t2, .L80A4A8C4            
/* 01878 80A4A738 8FBF0024 */  lw      $ra, 0x0024($sp)           
/* 0187C 80A4A73C 860C02B8 */  lh      $t4, 0x02B8($s0)           ## 000002B8
/* 01880 80A4A740 304BFFFD */  andi    $t3, $v0, 0xFFFD           ## $t3 = 00000000
/* 01884 80A4A744 8E030394 */  lw      $v1, 0x0394($s0)           ## 00000394
/* 01888 80A4A748 1580004F */  bne     $t4, $zero, .L80A4A888     
/* 0188C 80A4A74C A20B0369 */  sb      $t3, 0x0369($s0)           ## 00000369
/* 01890 80A4A750 8C640000 */  lw      $a0, 0x0000($v1)           ## 00000000
/* 01894 80A4A754 00046AC0 */  sll     $t5, $a0, 11               
/* 01898 80A4A758 05A10021 */  bgez    $t5, .L80A4A7E0            
/* 0189C 80A4A75C 30880001 */  andi    $t0, $a0, 0x0001           ## $t0 = 00000000
/* 018A0 80A4A760 8E0F02B0 */  lw      $t7, 0x02B0($s0)           ## 000002B0
/* 018A4 80A4A764 3C0E80A5 */  lui     $t6, %hi(func_80A4A234)    ## $t6 = 80A50000
/* 018A8 80A4A768 25CEA234 */  addiu   $t6, $t6, %lo(func_80A4A234) ## $t6 = 80A4A234
/* 018AC 80A4A76C 55CF000A */  bnel    $t6, $t7, .L80A4A798       
/* 018B0 80A4A770 84F800B6 */  lh      $t8, 0x00B6($a3)           ## 000000B6
/* 018B4 80A4A774 0C29282A */  jal     func_80A4A0A8              
/* 018B8 80A4A778 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 018BC 80A4A77C 44809000 */  mtc1    $zero, $f18                ## $f18 = 0.00
/* 018C0 80A4A780 3C01C0A0 */  lui     $at, 0xC0A0                ## $at = C0A00000
/* 018C4 80A4A784 44818000 */  mtc1    $at, $f16                  ## $f16 = -5.00
/* 018C8 80A4A788 E6120060 */  swc1    $f18, 0x0060($s0)          ## 00000060
/* 018CC 80A4A78C 1000004C */  beq     $zero, $zero, .L80A4A8C0   
/* 018D0 80A4A790 E6100068 */  swc1    $f16, 0x0068($s0)          ## 00000068
/* 018D4 80A4A794 84F800B6 */  lh      $t8, 0x00B6($a3)           ## 000000B6
.L80A4A798:
/* 018D8 80A4A798 3C014700 */  lui     $at, 0x4700                ## $at = 47000000
/* 018DC 80A4A79C 44812000 */  mtc1    $at, $f4                   ## $f4 = 32768.00
/* 018E0 80A4A7A0 44988000 */  mtc1    $t8, $f16                  ## $f16 = 0.00
/* 018E4 80A4A7A4 3C0180A5 */  lui     $at, %hi(D_80A4B930)       ## $at = 80A50000
/* 018E8 80A4A7A8 C428B930 */  lwc1    $f8, %lo(D_80A4B930)($at)  
/* 018EC 80A4A7AC 468084A0 */  cvt.s.w $f18, $f16                 
/* 018F0 80A4A7B0 00002825 */  or      $a1, $zero, $zero          ## $a1 = 00000000
/* 018F4 80A4A7B4 46049183 */  div.s   $f6, $f18, $f4             
/* 018F8 80A4A7B8 46083302 */  mul.s   $f12, $f6, $f8             
/* 018FC 80A4A7BC 0C034348 */  jal     Matrix_RotateY              
/* 01900 80A4A7C0 00000000 */  nop
/* 01904 80A4A7C4 3C0480A5 */  lui     $a0, %hi(D_80A4B830)       ## $a0 = 80A50000
/* 01908 80A4A7C8 2484B830 */  addiu   $a0, $a0, %lo(D_80A4B830)  ## $a0 = 80A4B830
/* 0190C 80A4A7CC 0C0346BD */  jal     Matrix_MultVec3f              
/* 01910 80A4A7D0 260502FC */  addiu   $a1, $s0, 0x02FC           ## $a1 = 000002FC
/* 01914 80A4A7D4 24190005 */  addiu   $t9, $zero, 0x0005         ## $t9 = 00000005
/* 01918 80A4A7D8 10000039 */  beq     $zero, $zero, .L80A4A8C0   
/* 0191C 80A4A7DC A61902CA */  sh      $t9, 0x02CA($s0)           ## 000002CA
.L80A4A7E0:
/* 01920 80A4A7E0 1100000B */  beq     $t0, $zero, .L80A4A810     
/* 01924 80A4A7E4 00000000 */  nop
/* 01928 80A4A7E8 8E0A02B0 */  lw      $t2, 0x02B0($s0)           ## 000002B0
/* 0192C 80A4A7EC 3C0980A5 */  lui     $t1, %hi(func_80A4A50C)    ## $t1 = 80A50000
/* 01930 80A4A7F0 2529A50C */  addiu   $t1, $t1, %lo(func_80A4A50C) ## $t1 = 80A4A50C
/* 01934 80A4A7F4 112A0032 */  beq     $t1, $t2, .L80A4A8C0       
/* 01938 80A4A7F8 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 0193C 80A4A7FC 0C29291C */  jal     func_80A4A470              
/* 01940 80A4A800 00C02825 */  or      $a1, $a2, $zero            ## $a1 = 00000000
/* 01944 80A4A804 240B0008 */  addiu   $t3, $zero, 0x0008         ## $t3 = 00000008
/* 01948 80A4A808 1000002D */  beq     $zero, $zero, .L80A4A8C0   
/* 0194C 80A4A80C A60B02C2 */  sh      $t3, 0x02C2($s0)           ## 000002C2
.L80A4A810:
/* 01950 80A4A810 0C018D74 */  jal     CollisionCheck_GetSwordDamage              
/* 01954 80A4A814 AFA6003C */  sw      $a2, 0x003C($sp)           
/* 01958 80A4A818 8FA6003C */  lw      $a2, 0x003C($sp)           
/* 0195C 80A4A81C 10400009 */  beq     $v0, $zero, .L80A4A844     
/* 01960 80A4A820 304300FF */  andi    $v1, $v0, 0x00FF           ## $v1 = 00000000
/* 01964 80A4A824 00C02025 */  or      $a0, $a2, $zero            ## $a0 = 00000000
/* 01968 80A4A828 26050038 */  addiu   $a1, $s0, 0x0038           ## $a1 = 00000038
/* 0196C 80A4A82C A3A3002F */  sb      $v1, 0x002F($sp)           
/* 01970 80A4A830 0C00A66B */  jal     EffectSsSibuki_SpawnBurst              
/* 01974 80A4A834 AFA6003C */  sw      $a2, 0x003C($sp)           
/* 01978 80A4A838 93A3002F */  lbu     $v1, 0x002F($sp)           
/* 0197C 80A4A83C 10000002 */  beq     $zero, $zero, .L80A4A848   
/* 01980 80A4A840 8FA6003C */  lw      $a2, 0x003C($sp)           
.L80A4A844:
/* 01984 80A4A844 24030001 */  addiu   $v1, $zero, 0x0001         ## $v1 = 00000001
.L80A4A848:
/* 01988 80A4A848 920C00AF */  lbu     $t4, 0x00AF($s0)           ## 000000AF
/* 0198C 80A4A84C 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 01990 80A4A850 00C02825 */  or      $a1, $a2, $zero            ## $a1 = 00000000
/* 01994 80A4A854 01836823 */  subu    $t5, $t4, $v1              
/* 01998 80A4A858 0C29266F */  jal     func_80A499BC              
/* 0199C 80A4A85C A20D00AF */  sb      $t5, 0x00AF($s0)           ## 000000AF
/* 019A0 80A4A860 240E0005 */  addiu   $t6, $zero, 0x0005         ## $t6 = 00000005
/* 019A4 80A4A864 AFAE0010 */  sw      $t6, 0x0010($sp)           
/* 019A8 80A4A868 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 019AC 80A4A86C 24054000 */  addiu   $a1, $zero, 0x4000         ## $a1 = 00004000
/* 019B0 80A4A870 240600FF */  addiu   $a2, $zero, 0x00FF         ## $a2 = 000000FF
/* 019B4 80A4A874 0C00D09B */  jal     Actor_SetColorFilter              
/* 019B8 80A4A878 00003825 */  or      $a3, $zero, $zero          ## $a3 = 00000000
/* 019BC 80A4A87C 240F000D */  addiu   $t7, $zero, 0x000D         ## $t7 = 0000000D
/* 019C0 80A4A880 1000000F */  beq     $zero, $zero, .L80A4A8C0   
/* 019C4 80A4A884 A60F02C2 */  sh      $t7, 0x02C2($s0)           ## 000002C2
.L80A4A888:
/* 019C8 80A4A888 8603001C */  lh      $v1, 0x001C($s0)           ## 0000001C
/* 019CC 80A4A88C 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 019D0 80A4A890 28610006 */  slti    $at, $v1, 0x0006           
/* 019D4 80A4A894 10200006 */  beq     $at, $zero, .L80A4A8B0     
/* 019D8 80A4A898 00000000 */  nop
/* 019DC 80A4A89C 8E020118 */  lw      $v0, 0x0118($s0)           ## 00000118
/* 019E0 80A4A8A0 0003C840 */  sll     $t9, $v1,  1               
/* 019E4 80A4A8A4 2418FFFF */  addiu   $t8, $zero, 0xFFFF         ## $t8 = FFFFFFFF
/* 019E8 80A4A8A8 00594021 */  addu    $t0, $v0, $t9              
/* 019EC 80A4A8AC A51801A4 */  sh      $t8, 0x01A4($t0)           ## 000001A4
.L80A4A8B0:
/* 019F0 80A4A8B0 0C292CFC */  jal     func_80A4B3F0              
/* 019F4 80A4A8B4 00C02825 */  or      $a1, $a2, $zero            ## $a1 = 00000000
/* 019F8 80A4A8B8 0C00B55C */  jal     Actor_Kill
              
/* 019FC 80A4A8BC 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
.L80A4A8C0:
/* 01A00 80A4A8C0 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L80A4A8C4:
/* 01A04 80A4A8C4 8FB00020 */  lw      $s0, 0x0020($sp)           
/* 01A08 80A4A8C8 27BD0038 */  addiu   $sp, $sp, 0x0038           ## $sp = 00000000
/* 01A0C 80A4A8CC 03E00008 */  jr      $ra                        
/* 01A10 80A4A8D0 00000000 */  nop

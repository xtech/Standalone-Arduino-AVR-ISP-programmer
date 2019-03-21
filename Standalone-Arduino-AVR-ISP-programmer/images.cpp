#include "optiLoader.h"

const image_t PROGMEM image_328 = {
    // Sketch name, only used for serial printing
    {"optiboot_atmega328.hex"},
    // Chip name, only used for serial printing
    {"atmega328P"},
    // Signature bytes for 328P
    0x950F,
    // Programming fuses, written before writing to flash. Fuses set to
    // zero are untouched.
    {0x3F, 0xFF, 0xDE, 0x05}, // {lock, low, high, extended}
    // Normal fuses, written after writing to flash (but before
    // verifying). Fuses set to zero are untouched.
    {0x0F, 0x0, 0x0, 0x0}, // {lock, low, high, extended}
    // Fuse verify mask. Any bits set to zero in these values are
    // ignored while verifying the fuses after writing them. All (and
    // only) bits that are unused for this atmega chip should be zero
    // here.
    {0x3F, 0xFF, 0xFF, 0x07}, // {lock, low, high, extended}
    // size of chip flash in bytes
    32768,
    // size in bytes of flash page
    128,
    // The actual image to flash. This can be copy-pasted as-is from a
    // .hex file. If you do, replace all lines below starting with a
    // colon, but make sure to keep the start and end markers {R"( and
    // )"} in place.
    {R"(
:100000000C9462000C948A000C948A000C948A0070
:100010000C948A000C948A000C948A000C948A0038
:100020000C948A000C948A000C948A000C948A0028
:100030000C948A000C948A000C948A000C948A0018
:100040000C9415020C948A000C9485020C945F02A7
:100050000C948A000C948A000C948A000C948A00F8
:100060000C948A000C948A0000000009000302002E
:10007000000405080000000000000000000000006F
:10008000000000250028002B0000000000240027AD
:10009000002A00040404040404040402020202020C
:1000A00002030303030303020203010204081020F6
:1000B0004080010204081020010204081020408042
:1000C0004000A30311241FBECFEFD8E0DEBFCDBF99
:1000D00011E0A0E0B1E0EAEBF7E002C005900D927C
:1000E000A031B107D9F721E0A0E1B1E001C01D9234
:1000F000A73BB207E1F710E0C2E6D0E004C02197C9
:10010000FE010E94D003C136D107C9F70E94B70291
:100110000C94DB030C94000090E0FC01E655FF4FCB
:100120002491FC01ED56FF4F8491882399F090E0D3
:10013000880F991FFC01E757FF4FA591B491FC016F
:10014000E158FF4F859194918FB7F894EC91E22B91
:10015000EC938FBF089590E0FC01E859FF4F249184
:10016000FC01E655FF4F3491FC01ED56FF4FE49141
:10017000EE2309F43CC0222339F1243091F038F405
:100180002230A9F0233001F584B58F7D12C02830CC
:1001900091F02930A1F02530B9F4809180008F7D55
:1001A00003C0809180008F77809380000DC084B55C
:1001B0008F7784BD09C08091B0008F7703C0809194
:1001C000B0008F7D8093B000F0E0EE0FFF1FE1588C
:1001D000FF4FA591B4919FB7F894611104C08C9121
:1001E0003095382302C0EC913E2B3C939FBF08957D
:1001F0003FB7F8948091B3019091B401A091B501FB
:10020000B091B60126B5A89B05C02F3F19F0019605
:10021000A11DB11D3FBFBA2FA92F982F8827820F8C
:10022000911DA11DB11DBC01CD0143E0660F771FDB
:10023000881F991F4A95D1F70895CF92DF92EF92C8
:10024000FF920F931F93CF93DF936C017A018B0181
:10025000C0E0D0E0CE15DF0581F0D8016D918D01B1
:10026000D601ED91FC910190F081E02DC601099538
:10027000892B11F02196EECF7E01C701DF91CF913E
:100280001F910F91FF90EF90DF90CF900895FC01A8
:10029000918D828D981761F0828DDF01A80FB11DBD
:1002A0005D968C91928D9F5F9F73928F90E00895E1
:1002B0008FEF9FEF0895FC01918D828D981731F09B
:1002C000828DE80FF11D858D90E008958FEF9FEFEF
:1002D0000895FC01918D228D892F90E0805C9F4FC5
:1002E000821B91098F739927089581E191E00E9403
:1002F000690121E0892B09F420E0822F0895FC0197
:10030000848DDF01A80FB11DA35ABF4F2C91848D9E
:1003100090E001968F739927848FA689B7892C93D3
:10032000A089B1898C9180648C93938D848D98136E
:1003300006C00288F389E02D80818F7D8083089537
:10034000EF92FF920F931F93CF93DF93EC0181E025
:10035000888F9B8D8C8D981305C0E889F9898081E1
:1003600085FD24C0F62E0B8D10E00F5F1F4F0F731D
:100370001127E02E8C8DE8120CC00FB607FCFACFC7
:10038000E889F989808185FFF5CFCE010E947F0140
:10039000F1CF8B8DFE01E80FF11DE35AFF4FF08284
:1003A0000B8FEA89FB898081806207C0EE89FF8913
:1003B0006083E889F98980818064808381E090E0AE
:1003C000DF91CF911F910F91FF90EF900895CF9300
:1003D000DF93EC01888D8823C9F0EA89FB8980814D
:1003E00085FD05C0A889B9898C9186FD0FC00FB61F
:1003F00007FCF5CF808185FFF2CFA889B9898C9160
:1004000085FFEDCFCE010E947F01E7CFDF91CF9135
:10041000089580E090E0892B29F00E9475018111F8
:100420000C94000008950E94D6031F920F920FB6FD
:100430000F9211242F933F938F939F93AF93BF936A
:100440008091AF019091B001A091B101B091B20142
:100450003091AE0126E0230F2D3720F40296A11D26
:10046000B11D05C029E8230F0396A11DB11D2093DE
:10047000AE018093AF019093B001A093B101B0930E
:10048000B2018091B3019091B401A091B501B091F6
:10049000B6010196A11DB11D8093B3019093B401E3
:1004A000A093B501B093B601BF91AF919F918F9189
:1004B0003F912F910F900FBE0F901F9018951F9294
:1004C0000F920FB60F9211242F933F934F935F9388
:1004D0006F937F938F939F93AF93BF93EF93FF930C
:1004E00081E191E00E947F01FF91EF91BF91AF9177
:1004F0009F918F917F916F915F914F913F912F913C
:100500000F900FBE0F901F9018951F920F920FB66D
:100510000F9211242F938F939F93EF93FF93E0916A
:100520002101F09122018081E0912701F0912801C1
:1005300082FD12C0908180912A018F5F8F7320917C
:100540002B01821751F0E0912A01F0E0EF5EFE4F9F
:10055000958F80932A0101C08081FF91EF919F9137
:100560008F912F910F900FBE0F901F901895789438
:1005700084B5826084BD84B5816084BD85B58260A8
:1005800085BD85B5816085BD80916E008160809359
:100590006E001092810080918100826080938100C2
:1005A00080918100816080938100809180008160D2
:1005B000809380008091B10084608093B10080912D
:1005C000B00081608093B00080917A008460809355
:1005D0007A0080917A00826080937A0080917A001C
:1005E0008E7F80937A0080917A00806880937A0071
:1005F0001092C100109210010E94F8004B015C01A2
:1006000038EEC32E33E0D32EE12CF12C0E94F800FB
:10061000DC01CB0188199909AA09BB09883E9340DE
:10062000A105B10598F321E0C21AD108E108F1084B
:1006300088EE880E83E0981EA11CB11CC114D10461
:10064000E104F10419F78DE00E948C0088E00E941B
:100650008C0061E088E00E94AB00E0912101F09104
:10066000220182E08083E0911D01F0911E01108241
:10067000E0911F01F091200189E18083109229010E
:10068000E0912501F091260186E08083E09123012D
:10069000F0912401808180618083E0912301F091B9
:1006A0002401808188608083E0912301F0912401FE
:1006B000808180688083E0912301F0912401808112
:1006C0008F7D8083C0E0DFE381E191E00E946901DA
:1006D000892BF9F081E191E00E944701803231F0ED
:1006E0008033A1F481E080931001EECF809110015E
:1006F000882361F061E08DE00E94AB00F8941092D5
:10070000B0001092800014BCFE01099510921001F7
:10071000DBCF2FB7F8948091AF019091B001A091F9
:10072000B101B091B2012FBF25E0B695A79597957D
:1007300087952A95D1F7682F61708DE00E94AB00F4
:100740000E940902C1CFE1E1F1E01382128288EE3A
:1007500093E0A0E0B0E084839583A683B78384E030
:1007600091E09183808385EC90E09587848784EC89
:1007700090E09787868780EC90E0918B808B81EC6E
:1007800090E0938B828B82EC90E0958B848B86EC4F
:1007900090E0978B868B118E128E138E148E089597
:1007A000EE0FFF1F0590F491E02D099481E090E099
:0A07B000F8940C94DB03F894FFCFDB
:1007BA0000000000A0011D01690147015B01E7017A
:107E000001C0CBC0112484B7882361F0982F9A70E9
:107E1000923041F081FF02C097EF94BF282E80E09E
:107E2000A7D0EEC082E08093C00088E18093C100BB
:107E300086E08093C20089E18093C4008EE098D0F0
:107E400093E0E92EDD24D39425E0C22E31E1B32E58
:107E500083D0813461F480D0182F90D01238E9F0AB
:107E6000113811F488E001C083E06FD06BC0823418
:107E700011F484E103C0853419F485E087D062C031
:107E8000853539F469D0C82F67D0D82FCC0FDD1FC6
:107E900058C0863521F484E079D080E0E6CF84367E
:107EA00009F02DC059D058D0F82E56D0A82E00E099
:107EB00011E052D0F80181938F01FE12FACF5ED00B
:107EC000F5E4AF1201C0FFCFFE01E7BEE89507B6AB
:107ED00000FCFDCFA0E0B1E0FE018D919D910C0171
:107EE000D7BEE89511243296FA12F7CFFE01C7BE2D
:107EF000E89507B600FCFDCFB7BEE89523C08437F0
:107F000071F42AD029D0F82E27D038D08E01F8016C
:107F100085918F011AD0FA94F110F9CF13C08537EB
:107F200039F42CD08EE111D085E90FD08FE09DCFB0
:107F3000813539F480E01CD021D080E106D060C0CA
:107F400001C01CD080E101D083CF9091C00095FF8B
:107F5000FCCF8093C60008958091C00087FFFCCFBE
:107F60008091C00084FD01C0A8958091C60008954D
:107F7000E0E6F0E098E1908380830895EDDF8032C1
:107F800019F088E0F5DFFFCF84E1DFCFCF93C82F72
:107F9000E3DFC150E9F7CF91F1CFFC010A0167BFE0
:107FA000E895112407B600FCFDCF667029F0452B3B
:0A7FB00019F481E187BFE8950895F8
:027FFE00000879
:0400000300007E007B
:00000001FF
    )"}
};


/*
 * Table of defined images. The first one matching the chip's signature
 * is used.
 */
const image_t *images[] = {
  &image_328,
};

uint8_t NUMIMAGES = sizeof(images)/sizeof(images[0]);

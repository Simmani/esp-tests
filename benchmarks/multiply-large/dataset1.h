
#define DATA_SIZE 1000 

int input_data1[DATA_SIZE] = 
{
   41, 454, 833, 335, 564,   1, 187, 989, 749, 365, 350, 572, 132,  64, 949, 153, 584, 216, 805, 140, 
  621, 210,   6, 572, 931, 339, 890, 593, 392, 898, 694, 228, 961,  12, 110, 883, 116, 750, 296, 646, 
  426, 500, 314, 436, 659, 701, 774, 812, 319, 981, 678, 150, 875, 696, 376, 564, 474, 272, 938, 258, 
  539, 647, 569, 509, 203,  88, 280, 703, 759, 669, 606, 375, 511, 551, 657, 936, 195, 592,  81, 569, 
  267, 952, 229, 800, 337, 584, 944, 643, 902, 368, 241, 489, 913, 328, 826, 313, 933, 592, 985, 388, 
  195, 543, 960, 649, 566, 979, 350, 997, 649, 814, 657,  79, 181, 208, 111, 998, 859, 629,  65, 847, 
  288, 704, 349, 997, 141, 253, 905, 715, 886, 430, 264, 415, 576, 538, 979, 700, 761,   4, 241, 494, 
  478, 100, 499, 864, 403, 693, 222, 416, 444, 296, 721, 285, 676, 620, 317,  78, 224, 351, 937, 540, 
  288, 646, 119, 169, 615, 527, 606, 289, 389, 796, 351, 801, 455, 720, 278, 758, 367, 745, 358,  92, 
  584, 989,  62, 271, 985, 853, 403, 788, 346, 531, 517, 222, 559, 461, 908, 241, 775, 358, 255, 332, 
  778, 684, 598, 740, 143, 446,  33, 311, 125, 743, 941, 557, 933, 479, 799, 557, 553, 925, 431, 796, 
  648, 357, 952, 891, 287, 666,  19, 514,  49, 557,  86, 870,  95, 853, 441, 440, 587,  61, 614, 678, 
  382, 396, 280,   9, 808,  17, 971, 170, 819, 291, 344, 380, 450, 536, 512, 185, 965, 917, 347, 539, 
  808, 983, 882, 887, 537,  54, 946, 612, 701, 951, 356, 479, 567, 151, 891,   7,  22, 641, 568, 335, 
  665, 730, 423,  95, 434, 728, 158, 280,   2, 395,  84, 688, 247, 911,  49, 476, 435, 815, 792, 729, 
  869, 265, 486, 127, 414, 236, 369, 214, 548, 180, 518,   6, 888, 503, 682, 596, 284, 173, 264, 643, 
  499, 346, 290, 599, 897,  68, 215, 849, 731, 658, 688, 619, 251, 121, 786, 131, 555, 828, 302, 667, 
  528, 433, 544, 487, 322, 753, 947, 125, 287, 626, 824,  14, 304,  10, 788, 403, 733, 106, 959, 703, 
  366, 818, 722, 964, 294, 406, 975, 874, 653, 856, 748,  86,  91,  60, 378, 660, 105, 667, 102, 153, 
  381, 121, 651,  98, 825, 412, 840, 236, 356,  12, 148, 423,  54, 965, 140, 216, 955, 621, 343, 361, 
  533, 921, 757, 715, 521, 647, 837, 299, 592, 886,  13, 682, 173,  36,  63, 493, 121, 551, 133, 537, 
  758, 969, 372, 643, 951, 434,  39, 415, 129, 303, 110, 438, 847, 860, 437, 203, 255, 478, 269, 988, 
  409, 675, 628, 719, 399, 990, 549, 338, 753, 450, 564, 633, 171, 155,  19, 646, 727, 452, 501, 427, 
  777, 509,  43, 988, 753, 426,  81,  12, 202, 483, 853, 142, 153, 339, 760, 390, 357,  50, 943, 171, 
  922, 601, 328, 105, 496, 968, 442, 121, 516, 879, 641,  81, 276, 870, 786, 600, 113, 603, 842, 871, 
  907, 887, 275, 610, 237, 404,  32, 234, 784, 745, 565, 526, 357, 275, 803, 441, 819, 226, 751, 752, 
  280, 943,  85, 726, 458, 709, 454, 201, 710,  54, 459, 758,  41,  53, 253, 397, 377,  41, 508, 141, 
  700, 416, 860, 747, 480, 219, 741, 478, 499, 770, 709, 180,  49, 482, 371, 691, 873, 725, 945, 173, 
  992, 186, 526, 914, 721,   1, 435, 963, 232, 247, 497, 464, 697, 362,  30, 521, 348, 233, 250, 120, 
  350,  40, 250, 779, 573, 195, 784, 161, 749, 743, 502, 439, 823, 355, 826, 403, 170, 141, 160, 633, 
  674, 289,  32, 782, 202, 320, 143, 636, 853, 118,  90, 852, 394,  70, 107, 816, 855, 388, 106, 954, 
  157,  36,   6,  16, 765, 698, 204, 695, 194, 677, 574, 598, 218, 883, 526, 824, 177, 746, 239, 462, 
  698, 511, 757, 534, 706, 440,  49, 428,  84, 732, 799, 726, 893, 702, 512, 547, 373,  86, 492, 798, 
   14, 215, 621,  21,  83, 651, 103,  59, 794, 429, 921, 657, 643,  96, 880, 973, 834, 659, 239, 966, 
  462, 524, 114,  62, 561, 625, 529, 303,  10, 714, 997, 409, 904,  55, 387, 728, 407, 305, 105, 436, 
  559, 901, 936, 592, 512, 691, 409, 796, 302, 497, 202, 177, 427, 940, 613, 995, 359, 480, 521, 158, 
  684, 822,  22, 611, 185, 680, 312,  14, 107, 111, 274, 797, 387, 185, 242,   0, 486, 718, 105,  96, 
  698, 749, 899, 739, 770, 814, 644, 435,  80, 326, 161,  37, 407,  33, 946, 605,  30, 935, 768,  27, 
  870,  88, 113, 441, 148, 339,  62, 344, 147, 554, 838, 365, 845, 954, 432, 639, 141, 396, 211, 991, 
  817, 249, 821, 338, 562, 832, 364, 974, 615, 393, 495, 266, 812, 470, 916, 348, 159, 336, 430, 419, 
  803, 249, 180, 215, 544, 542, 840, 903, 458, 636, 786, 729, 872, 581, 795, 820, 806, 671, 758, 979, 
  104, 418, 401, 670, 254, 920, 984, 568, 136, 745, 729, 662, 584, 139, 794, 385, 414, 927, 528, 173, 
  707, 457, 554, 316, 378, 183, 766, 477, 977, 196, 236, 399, 947, 416, 229, 805, 165, 996, 505, 270, 
  105, 735, 704, 696, 796, 825, 140, 528, 303,  50, 795, 623, 635, 537, 560,  87, 119, 294,   8, 867, 
  532, 110, 814, 398,  37, 781, 584, 646, 739, 375, 619, 943, 767, 897, 478, 589,  57,  44, 958, 288, 
  784, 845, 985, 742, 837,  99, 307, 522,  67, 443, 824, 432, 996, 165, 749, 930, 171,  28, 826, 461, 
  621, 323, 155, 272, 826, 376,  43, 340, 694, 898,  80, 158, 236, 168, 747, 443, 744, 193, 265, 631, 
  124, 935, 731, 274, 941, 781, 425, 185, 370, 619, 320, 292, 269, 933, 542, 156, 763, 827, 752,  88, 
  915, 987,  14, 629,   1, 649, 906,  32, 995,   1, 809, 744, 560, 399, 873, 915, 972, 791, 289, 554, 
  509, 984, 558, 530, 970, 600, 405, 401, 579, 683, 293, 540, 251, 903, 849, 120, 129, 995, 452, 521
};

int input_data2[DATA_SIZE] = 
{
  716, 622,  86, 224, 678, 895, 181, 530, 240, 820, 335, 651, 793, 226, 641,  96,   1, 262, 320, 569, 
  987, 238, 646, 126, 754, 610, 958, 191, 203, 238, 142, 796, 180, 884, 299, 573, 165, 108, 761, 140, 
  974, 789, 646, 852, 559,  23, 619, 704, 422, 890, 260, 480, 565,  52, 542, 372, 492, 201, 991, 546, 
  745, 408, 207, 119, 372, 645, 932, 464, 664,  81,  34, 293, 533,  52, 478, 880, 908, 224, 203, 744, 
   33, 735, 214, 886, 365, 167, 892,   1, 781, 532, 680, 321, 705, 169, 688, 485, 947, 101, 386, 177, 
   50,  42, 101, 708, 474, 654, 399, 915, 679, 625, 330, 242, 952, 822, 471, 795, 477, 641, 725, 252, 
  713, 245, 937, 151, 529, 876, 870, 333,  77, 601, 545, 938, 907, 775, 853, 397, 143, 233, 979, 755, 
  239, 454, 105, 424, 365, 210,  98, 962,  54, 900,  98, 923, 440, 655, 764, 529, 315, 595, 336,  90, 
  697, 464, 774, 685, 726,  70, 324, 754, 282,  32, 536, 494, 622,  25, 594, 389, 890, 488,  75,  37, 
  290, 409, 496, 639, 726,  27, 449, 950, 548, 539, 135,  80, 644, 303, 838, 723, 290, 734, 767, 125, 
  162, 552, 415, 248, 491, 107, 985, 362, 116,  48, 617, 869, 859, 144, 235, 841, 282, 724, 571, 335, 
  913, 470, 560, 263, 194, 343, 242, 809, 782, 677, 985, 339, 728, 336, 344, 410, 430, 465, 613,  56, 
  759, 590, 176, 485, 309, 406, 333, 993, 354, 746, 310, 238, 699, 525,  46, 336, 487, 256, 503, 134, 
  100, 546, 393, 722, 268, 367, 314, 943,  75, 106, 345, 629, 987, 396, 600, 208, 908, 429, 384, 523, 
   92, 130, 545, 355, 277, 990, 668, 673, 351, 991, 853, 719, 863, 449, 312,  84, 100, 616, 532, 211, 
  567, 707, 836, 737, 370, 847, 989, 452, 461, 316, 912, 974, 182, 746, 268, 796, 160, 522, 771, 618, 
   22, 115, 854, 727, 644, 226,  17, 165, 779, 200, 911, 830, 855, 742, 137, 187, 983, 705, 717, 671, 
  565, 785, 719, 886, 253, 962, 785, 657, 154, 293, 196, 620, 253, 144, 447, 173, 899, 796,   5,  72, 
  325, 678, 616,  80, 309, 793, 175, 685, 159, 637, 123, 967, 838, 241, 715, 898, 550, 693, 230, 372, 
   82, 601, 627, 721, 324, 398, 927, 553, 103,  72,  17, 174, 966, 978, 159, 325, 177, 558, 593, 185, 
  372, 505, 393, 859, 599, 651, 745, 573, 377, 321, 865, 349, 591, 400, 553, 890, 440, 844, 345, 885, 
  593, 933, 290, 980, 908, 448, 544, 989, 377,  50, 456, 332, 781, 900, 110, 716, 495, 747, 896, 444, 
  806,   6, 700, 394, 548, 285, 340, 703,  29, 450, 829, 652, 630, 771, 546, 485, 613, 534, 972, 559, 
  116, 481, 313, 507, 904, 434, 971, 343, 607,  42, 794, 784, 169, 865, 896, 421, 507, 415, 916, 871, 
  431, 539, 339, 162, 147, 105, 224, 481, 112, 595, 580, 115, 834, 350, 134, 964, 948, 287, 201, 232, 
  488, 154, 396, 602, 797, 539, 478, 943, 769, 872, 574, 121, 485, 652, 339, 811, 721, 747, 451, 362, 
  821, 340, 744, 910,   0, 206, 594, 572, 277, 505, 120, 973, 680, 961, 757, 354, 555, 627, 847, 849, 
  517, 971, 379, 910, 505, 410, 904, 770, 246,  63, 243, 874, 394, 396, 430, 482, 214, 619, 244, 646, 
  524, 557, 399, 328, 172,  67, 304, 884, 620, 512, 594, 972, 535,   6, 698, 513, 159, 882, 750, 562, 
  809, 764, 454, 366,  75, 506,  93, 786, 167, 831,  16, 382, 853, 638, 494, 452, 324,  72,  78,  83, 
   52,  59, 112, 932,  10, 929, 342, 924, 730, 961, 680,  69, 287, 797, 961, 985,  92, 854, 626, 885, 
  912, 600, 616, 389, 860, 232, 744, 793, 744, 179, 478, 773, 615, 689, 508, 775, 914, 494, 810, 139, 
  288, 234, 974, 431, 129, 780, 581, 371, 548,  22, 868, 653, 981, 741, 270, 815, 623, 428, 653, 139, 
  626, 603, 990, 315, 386, 344, 323, 889, 472, 317, 164, 260, 239, 861, 189, 377, 865, 511, 231, 304, 
  356,  70, 152,  35, 825, 854, 328, 576, 390, 490, 848, 326,  38, 303, 402, 431, 616, 813, 546, 708, 
  206, 388,   2, 962, 783, 967, 890, 442, 815,  49, 831, 831, 665, 251, 410, 321,  94, 741, 246, 179, 
  422, 176, 211, 117, 675, 523,   9, 764, 374, 952, 426, 704,  64, 531,  53, 804, 758,  23, 811, 611, 
  500, 846, 437, 375, 335, 854, 328, 971, 237,  24, 415, 639, 468, 318, 684, 723, 565, 662, 305, 647, 
  449, 281, 597, 158, 136, 294, 882, 885, 383, 734, 938, 866, 268, 471, 115, 296, 908, 673,  50, 472, 
  952, 439, 366,   5, 397, 155, 257, 506, 231, 948, 667, 600,  35, 445, 990, 222, 443, 784, 213, 349, 
  389, 943,  13, 150, 621, 366,  52, 444, 612, 604, 934, 720, 953, 340, 828, 972, 462, 911, 621, 321, 
  812, 435, 522,  50, 672,  78,  57, 761, 313, 950, 352, 238,  55,  27, 972, 226, 753, 201, 416, 176, 
  879, 877, 864, 450, 572, 879, 163,  99, 721, 143,  12,  31, 643, 812, 507, 771, 968, 527, 781, 488, 
  840, 797, 242, 194, 630, 293, 810, 966, 795, 276, 435, 345, 885, 413, 599, 197, 696, 386, 643, 116, 
   93, 322, 710, 680, 785, 538, 112, 553, 581, 960,  12, 874, 923,  48, 615, 506, 652, 898, 359, 539, 
  261, 495, 233, 764, 609, 805, 686, 286, 539, 432, 118, 836, 560, 192, 739, 825,  20, 778, 317, 586, 
  976, 359, 573, 352, 386, 746, 772,  11, 663, 749, 504,   5, 212, 408, 888, 643, 907, 441, 420, 368, 
  737,  97, 516, 169,  25, 359, 219, 527, 797, 672, 716,  69, 452, 880, 692, 298, 683, 300, 459, 327, 
  815, 923, 323, 829, 612, 816, 247, 497, 116, 243, 352, 981, 281, 917, 738, 713, 290, 653, 909, 503, 
  645, 406, 625, 543, 932, 108, 220, 304, 685, 464, 373, 954, 876,  86, 646, 802, 412, 446, 955,  28
};

int verify_data[DATA_SIZE] = 
{
  29356, 282388, 71638, 75040, 382392, 895, 33847, 524170, 179760, 299300, 117250, 372372, 104676, 14464, 608309, 14688, 584, 56592, 257600, 79660, 
  612927, 49980, 3876, 72072, 701974, 206790, 852620, 113263, 79576, 213724, 98548, 181488, 172980, 10608, 32890, 505959, 19140, 81000, 225256, 90440, 
  414924, 394500, 202844, 371472, 368381, 16123, 479106, 571648, 134618, 873090, 176280, 72000, 494375, 36192, 203792, 209808, 233208, 54672, 929558, 140868, 
  401555, 263976, 117783, 60571, 75516, 56760, 260960, 326192, 503976, 54189, 20604, 109875, 272363, 28652, 314046, 823680, 177060, 132608, 16443, 423336, 
  8811, 699720, 49006, 708800, 123005, 97528, 842048, 643, 704462, 195776, 163880, 156969, 643665, 55432, 568288, 151805, 883551, 59792, 380210, 68676, 
  9750, 22806, 96960, 459492, 268284, 640266, 139650, 912255, 440671, 508750, 216810, 19118, 172312, 170976, 52281, 793410, 409743, 403189, 47125, 213444, 
  205344, 172480, 327013, 150547, 74589, 221628, 787350, 238095, 68222, 258430, 143880, 389270, 522432, 416950, 835087, 277900, 108823, 932, 235939, 372970, 
  114242, 45400, 52395, 366336, 147095, 145530, 21756, 400192, 23976, 266400, 70658, 263055, 297440, 406100, 242188, 41262, 70560, 208845, 314832, 48600, 
  200736, 299744, 92106, 115765, 446490, 36890, 196344, 217906, 109698, 25472, 188136, 395694, 283010, 18000, 165132, 294862, 326630, 363560, 26850, 3404, 
  169360, 404501, 30752, 173169, 715110, 23031, 180947, 748600, 189608, 286209, 69795, 17760, 359996, 139683, 760904, 174243, 224750, 262772, 195585, 41500, 
  126036, 377568, 248170, 183520, 70213, 47722, 32505, 112582, 14500, 35664, 580597, 484033, 801447, 68976, 187765, 468437, 155946, 669700, 246101, 266660, 
  591624, 167790, 533120, 234333, 55678, 228438, 4598, 415826, 38318, 377089, 84710, 294930, 69160, 286608, 151704, 180400, 252410, 28365, 376382, 37968, 
  289938, 233640, 49280, 4365, 249672, 6902, 323343, 168810, 289926, 217086, 106640, 90440, 314550, 281400, 23552, 62160, 469955, 234752, 174541, 72226, 
  80800, 536718, 346626, 640414, 143916, 19818, 297044, 577116, 52575, 100806, 122820, 301291, 559629, 59796, 534600, 1456, 19976, 274989, 218112, 175205, 
  61180, 94900, 230535, 33725, 120218, 720720, 105544, 188440, 702, 391445, 71652, 494672, 213161, 409039, 15288, 39984, 43500, 502040, 421344, 153819, 
  492723, 187355, 406296, 93599, 153180, 199892, 364941, 96728, 252628, 56880, 472416, 5844, 161616, 375238, 182776, 474416, 45440, 90306, 203544, 397374, 
  10978, 39790, 247660, 435473, 577668, 15368, 3655, 140085, 569449, 131600, 626768, 513770, 214605, 89782, 107682, 24497, 545565, 583740, 216534, 447557, 
  298320, 339905, 391136, 431482, 81466, 724386, 743395, 82125, 44198, 183418, 161504, 8680, 76912, 1440, 352236, 69719, 658967, 84376, 4795, 50616, 
  118950, 554604, 444752, 77120, 90846, 321958, 170625, 598690, 103827, 545272, 92004, 83162, 76258, 14460, 270270, 592680, 57750, 462231, 23460, 56916, 
  31242, 72721, 408177, 70658, 267300, 163976, 778680, 130508, 36668, 864, 2516, 73602, 52164, 943770, 22260, 70200, 169035, 346518, 203399, 66785, 
  198276, 465105, 297501, 614185, 312079, 421197, 623565, 171327, 223184, 284406, 11245, 238018, 102243, 14400, 34839, 438770, 53240, 465044, 45885, 475245, 
  449494, 904077, 107880, 630140, 863508, 194432, 21216, 410435, 48633, 15150, 50160, 145416, 661507, 774000, 48070, 145348, 126225, 357066, 241024, 438672, 
  329654, 4050, 439600, 283286, 218652, 282150, 186660, 237614, 21837, 202500, 467556, 412716, 107730, 119505, 10374, 313310, 445651, 241368, 486972, 238693, 
  90132, 244829, 13459, 500916, 680712, 184884, 78651, 4116, 122614, 20286, 677282, 111328, 25857, 293235, 680960, 164190, 180999, 20750, 863788, 148941, 
  397382, 323939, 111192, 17010, 72912, 101640, 99008, 58201, 57792, 523005, 371780, 9315, 230184, 304500, 105324, 578400, 107124, 173061, 169242, 202072, 
  442616, 136598, 108900, 367220, 188889, 217756, 15296, 220662, 602896, 649640, 324310, 63646, 173145, 179300, 272217, 357651, 590499, 168822, 338701, 272224, 
  229880, 320620, 63240, 660660,   0, 146054, 269676, 114972, 196670, 27270, 55080, 737534, 27880, 50933, 191521, 140538, 209235, 25707, 430276, 119709, 
  361900, 403936, 325940, 679770, 242400, 89790, 669864, 368060, 122754, 48510, 172287, 157320, 19306, 190872, 159530, 333062, 186822, 448775, 230580, 111758, 
  519808, 103602, 209874, 299792, 124012,  67, 132240, 851292, 143840, 126464, 295218, 451008, 372895, 2172, 20940, 267273, 55332, 205506, 187500, 67440, 
  283150, 30560, 113500, 285114, 42975, 98670, 72912, 126546, 125083, 617433, 8032, 167698, 702019, 226490, 408044, 182156, 55080, 10152, 12480, 52539, 
  35048, 17051, 3584, 728824, 2020, 297280, 48906, 587664, 622690, 113398, 61200, 58788, 113078, 55790, 102827, 803760, 78660, 331352, 66356, 844290, 
  143184, 21600, 3696, 6224, 657900, 161936, 151776, 551135, 144336, 121183, 274372, 462254, 134070, 608387, 267208, 638600, 161778, 368524, 193590, 64218, 
  201024, 119574, 737318, 230154, 91074, 343200, 28469, 158788, 46032, 16104, 693532, 474078, 876033, 520182, 138240, 445805, 232379, 36808, 321276, 110922, 
  8764, 129645, 614790, 6615, 32038, 223944, 33269, 52451, 374768, 135993, 151044, 170820, 153677, 82656, 166320, 366821, 721410, 336749, 55209, 293664, 
  164472, 36680, 17328, 2170, 462825, 533750, 173512, 174528, 3900, 349860, 845456, 133334, 34352, 16665, 155574, 313768, 250712, 247965, 57330, 308688, 
  115154, 349588, 1872, 569504, 400896, 668197, 364010, 351832, 246130, 24353, 167862, 147087, 283955, 235940, 251330, 319395, 33746, 355680, 128166, 28282, 
  288648, 144672, 4642, 71487, 124875, 355640, 2808, 10696, 40018, 105672, 116724, 561088, 24768, 98235, 12826,   0, 368388, 16514, 85155, 58656, 
  349000, 633654, 392863, 277125, 257950, 695156, 211232, 422385, 18960, 7824, 66815, 23643, 190476, 10494, 647064, 437415, 16950, 618970, 234240, 17469, 
  390630, 24728, 67461, 69678, 20128, 99666, 54684, 304440, 56301, 406636, 786044, 316090, 226460, 449334, 49680, 189144, 128028, 266508, 10550, 467752, 
  777784, 109311, 300486, 1690, 223114, 128960, 93548, 492844, 142065, 372564, 330165, 159600, 28420, 209150, 906840, 77256, 70437, 263424, 91590, 146231, 
  312367, 234807, 2340, 32250, 337824, 198372, 43680, 400932, 280296, 384144, 734124, 524880, 831016, 197540, 658260, 797040, 372372, 611281, 470718, 314259, 
  84448, 181830, 209322, 33500, 170688, 71760, 56088, 432248, 42568, 707750, 256608, 157556, 32120, 3753, 771768, 87010, 311742, 186327, 219648, 30448, 
  621453, 400789, 478656, 142200, 216216, 160857, 124858, 47223, 704417, 28028, 2832, 12369, 608921, 337792, 116103, 620655, 159720, 524892, 394405, 131760, 
  88200, 585795, 170368, 135024, 501480, 241725, 113400, 510048, 240885, 13800, 345825, 214935, 561975, 221781, 335440, 17139, 82824, 113484, 5144, 100572, 
  49476, 35420, 577940, 270640, 29045, 420178, 65408, 357238, 429359, 360000, 7428, 824182, 707941, 43056, 293970, 298034, 37164, 39512, 343922, 155232, 
  204624, 418275, 229505, 566888, 509733, 79695, 210602, 149292, 36113, 191376, 97232, 361152, 557760, 31680, 553511, 767250, 3420, 21784, 261842, 270146, 
  606096, 115957, 88815, 95744, 318836, 280496, 33196, 3740, 460122, 672602, 40320, 790, 50032, 68544, 663336, 284849, 674808, 85113, 111300, 232208, 
  91388, 90695, 377196, 46306, 23525, 280379, 93075, 97495, 294890, 415968, 229120, 20148, 121588, 821040, 375064, 46488, 521129, 248100, 345168, 28776, 
  745725, 911001, 4522, 521441, 612, 529584, 223782, 15904, 115420, 243, 284768, 729864, 157360, 365883, 644274, 652395, 281880, 516523, 262701, 278662, 
  328305, 399504, 348750, 287790, 904040, 64800, 89100, 121904, 396615, 316912, 109289, 515160, 219876, 77658, 548454, 96240, 53148, 443770, 431660, 14588
};

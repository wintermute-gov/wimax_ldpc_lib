#include "matrices.h"


#ifdef Z_40
int16_t wimax_960_0_83[160][20] = {
    {0, 50, 102, 179, 201, 317, 355, 363, 435, 461, 514, 533, 562, 600, 655, 688, 721, 792, 833, 840},
    {1, 51, 103, 180, 202, 318, 356, 364, 436, 462, 515, 534, 563, 601, 656, 689, 722, 793, 834, 841},
    {2, 52, 104, 181, 203, 319, 357, 365, 437, 463, 516, 535, 564, 602, 657, 690, 723, 794, 835, 842},
    {3, 53, 105, 182, 204, 280, 358, 366, 438, 464, 517, 536, 565, 603, 658, 691, 724, 795, 836, 843},
    {4, 54, 106, 183, 205, 281, 359, 367, 439, 465, 518, 537, 566, 604, 659, 692, 725, 796, 837, 844},
    {5, 55, 107, 184, 206, 282, 320, 368, 400, 466, 519, 538, 567, 605, 660, 693, 726, 797, 838, 845},
    {6, 56, 108, 185, 207, 283, 321, 369, 401, 467, 480, 539, 568, 606, 661, 694, 727, 798, 839, 846},
    {7, 57, 109, 186, 208, 284, 322, 370, 402, 468, 481, 540, 569, 607, 662, 695, 728, 799, 800, 847},
    {8, 58, 110, 187, 209, 285, 323, 371, 403, 469, 482, 541, 570, 608, 663, 696, 729, 760, 801, 848},
    {9, 59, 111, 188, 210, 286, 324, 372, 404, 470, 483, 542, 571, 609, 664, 697, 730, 761, 802, 849},
    {10, 60, 112, 189, 211, 287, 325, 373, 405, 471, 484, 543, 572, 610, 665, 698, 731, 762, 803, 850},
    {11, 61, 113, 190, 212, 288, 326, 374, 406, 472, 485, 544, 573, 611, 666, 699, 732, 763, 804, 851},
    {12, 62, 114, 191, 213, 289, 327, 375, 407, 473, 486, 545, 574, 612, 667, 700, 733, 764, 805, 852},
    {13, 63, 115, 192, 214, 290, 328, 376, 408, 474, 487, 546, 575, 613, 668, 701, 734, 765, 806, 853},
    {14, 64, 116, 193, 215, 291, 329, 377, 409, 475, 488, 547, 576, 614, 669, 702, 735, 766, 807, 854},
    {15, 65, 117, 194, 216, 292, 330, 378, 410, 476, 489, 548, 577, 615, 670, 703, 736, 767, 808, 855},
    {16, 66, 118, 195, 217, 293, 331, 379, 411, 477, 490, 549, 578, 616, 671, 704, 737, 768, 809, 856},
    {17, 67, 119, 196, 218, 294, 332, 380, 412, 478, 491, 550, 579, 617, 672, 705, 738, 769, 810, 857},
    {18, 68, 80, 197, 219, 295, 333, 381, 413, 479, 492, 551, 580, 618, 673, 706, 739, 770, 811, 858},
    {19, 69, 81, 198, 220, 296, 334, 382, 414, 440, 493, 552, 581, 619, 674, 707, 740, 771, 812, 859},
    {20, 70, 82, 199, 221, 297, 335, 383, 415, 441, 494, 553, 582, 620, 675, 708, 741, 772, 813, 860},
    {21, 71, 83, 160, 222, 298, 336, 384, 416, 442, 495, 554, 583, 621, 676, 709, 742, 773, 814, 861},
    {22, 72, 84, 161, 223, 299, 337, 385, 417, 443, 496, 555, 584, 622, 677, 710, 743, 774, 815, 862},
    {23, 73, 85, 162, 224, 300, 338, 386, 418, 444, 497, 556, 585, 623, 678, 711, 744, 775, 816, 863},
    {24, 74, 86, 163, 225, 301, 339, 387, 419, 445, 498, 557, 586, 624, 679, 712, 745, 776, 817, 864},
    {25, 75, 87, 164, 226, 302, 340, 388, 420, 446, 499, 558, 587, 625, 640, 713, 746, 777, 818, 865},
    {26, 76, 88, 165, 227, 303, 341, 389, 421, 447, 500, 559, 588, 626, 641, 714, 747, 778, 819, 866},
    {27, 77, 89, 166, 228, 304, 342, 390, 422, 448, 501, 520, 589, 627, 642, 715, 748, 779, 820, 867},
    {28, 78, 90, 167, 229, 305, 343, 391, 423, 449, 502, 521, 590, 628, 643, 716, 749, 780, 821, 868},
    {29, 79, 91, 168, 230, 306, 344, 392, 424, 450, 503, 522, 591, 629, 644, 717, 750, 781, 822, 869},
    {30, 40, 92, 169, 231, 307, 345, 393, 425, 451, 504, 523, 592, 630, 645, 718, 751, 782, 823, 870},
    {31, 41, 93, 170, 232, 308, 346, 394, 426, 452, 505, 524, 593, 631, 646, 719, 752, 783, 824, 871},
    {32, 42, 94, 171, 233, 309, 347, 395, 427, 453, 506, 525, 594, 632, 647, 680, 753, 784, 825, 872},
    {33, 43, 95, 172, 234, 310, 348, 396, 428, 454, 507, 526, 595, 633, 648, 681, 754, 785, 826, 873},
    {34, 44, 96, 173, 235, 311, 349, 397, 429, 455, 508, 527, 596, 634, 649, 682, 755, 786, 827, 874},
    {35, 45, 97, 174, 236, 312, 350, 398, 430, 456, 509, 528, 597, 635, 650, 683, 756, 787, 828, 875},
    {36, 46, 98, 175, 237, 313, 351, 399, 431, 457, 510, 529, 598, 636, 651, 684, 757, 788, 829, 876},
    {37, 47, 99, 176, 238, 314, 352, 360, 432, 458, 511, 530, 599, 637, 652, 685, 758, 789, 830, 877},
    {38, 48, 100, 177, 239, 315, 353, 361, 433, 459, 512, 531, 560, 638, 653, 686, 759, 790, 831, 878},
    {39, 49, 101, 178, 200, 316, 354, 362, 434, 460, 513, 532, 561, 639, 654, 687, 720, 791, 832, 879},
    {42, 135, 176, 219, 245, 312, 339, 417, 448, 485, 549, 565, 630, 640, 698, 740, 760, 800, 840, 880},
    {43, 136, 177, 220, 246, 313, 340, 418, 449, 486, 550, 566, 631, 641, 699, 741, 761, 801, 841, 881},
    {44, 137, 178, 221, 247, 314, 341, 419, 450, 487, 551, 567, 632, 642, 700, 742, 762, 802, 842, 882},
    {45, 138, 179, 222, 248, 315, 342, 420, 451, 488, 552, 568, 633, 643, 701, 743, 763, 803, 843, 883},
    {46, 139, 180, 223, 249, 316, 343, 421, 452, 489, 553, 569, 634, 644, 702, 744, 764, 804, 844, 884},
    {47, 140, 181, 224, 250, 317, 344, 422, 453, 490, 554, 570, 635, 645, 703, 745, 765, 805, 845, 885},
    {48, 141, 182, 225, 251, 318, 345, 423, 454, 491, 555, 571, 636, 646, 704, 746, 766, 806, 846, 886},
    {49, 142, 183, 226, 252, 319, 346, 424, 455, 492, 556, 572, 637, 647, 705, 747, 767, 807, 847, 887},
    {50, 143, 184, 227, 253, 280, 347, 425, 456, 493, 557, 573, 638, 648, 706, 748, 768, 808, 848, 888},
    {51, 144, 185, 228, 254, 281, 348, 426, 457, 494, 558, 574, 639, 649, 707, 749, 769, 809, 849, 889},
    {52, 145, 186, 229, 255, 282, 349, 427, 458, 495, 559, 575, 600, 650, 708, 750, 770, 810, 850, 890},
    {53, 146, 187, 230, 256, 283, 350, 428, 459, 496, 520, 576, 601, 651, 709, 751, 771, 811, 851, 891},
    {54, 147, 188, 231, 257, 284, 351, 429, 460, 497, 521, 577, 602, 652, 710, 752, 772, 812, 852, 892},
    {55, 148, 189, 232, 258, 285, 352, 430, 461, 498, 522, 578, 603, 653, 711, 753, 773, 813, 853, 893},
    {56, 149, 190, 233, 259, 286, 353, 431, 462, 499, 523, 579, 604, 654, 712, 754, 774, 814, 854, 894},
    {57, 150, 191, 234, 260, 287, 354, 432, 463, 500, 524, 580, 605, 655, 713, 755, 775, 815, 855, 895},
    {58, 151, 192, 235, 261, 288, 355, 433, 464, 501, 525, 581, 606, 656, 714, 756, 776, 816, 856, 896},
    {59, 152, 193, 236, 262, 289, 356, 434, 465, 502, 526, 582, 607, 657, 715, 757, 777, 817, 857, 897},
    {60, 153, 194, 237, 263, 290, 357, 435, 466, 503, 527, 583, 608, 658, 716, 758, 778, 818, 858, 898},
    {61, 154, 195, 238, 264, 291, 358, 436, 467, 504, 528, 584, 609, 659, 717, 759, 779, 819, 859, 899},
    {62, 155, 196, 239, 265, 292, 359, 437, 468, 505, 529, 585, 610, 660, 718, 720, 780, 820, 860, 900},
    {63, 156, 197, 200, 266, 293, 320, 438, 469, 506, 530, 586, 611, 661, 719, 721, 781, 821, 861, 901},
    {64, 157, 198, 201, 267, 294, 321, 439, 470, 507, 531, 587, 612, 662, 680, 722, 782, 822, 862, 902},
    {65, 158, 199, 202, 268, 295, 322, 400, 471, 508, 532, 588, 613, 663, 681, 723, 783, 823, 863, 903},
    {66, 159, 160, 203, 269, 296, 323, 401, 472, 509, 533, 589, 614, 664, 682, 724, 784, 824, 864, 904},
    {67, 120, 161, 204, 270, 297, 324, 402, 473, 510, 534, 590, 615, 665, 683, 725, 785, 825, 865, 905},
    {68, 121, 162, 205, 271, 298, 325, 403, 474, 511, 535, 591, 616, 666, 684, 726, 786, 826, 866, 906},
    {69, 122, 163, 206, 272, 299, 326, 404, 475, 512, 536, 592, 617, 667, 685, 727, 787, 827, 867, 907},
    {70, 123, 164, 207, 273, 300, 327, 405, 476, 513, 537, 593, 618, 668, 686, 728, 788, 828, 868, 908},
    {71, 124, 165, 208, 274, 301, 328, 406, 477, 514, 538, 594, 619, 669, 687, 729, 789, 829, 869, 909},
    {72, 125, 166, 209, 275, 302, 329, 407, 478, 515, 539, 595, 620, 670, 688, 730, 790, 830, 870, 910},
    {73, 126, 167, 210, 276, 303, 330, 408, 479, 516, 540, 596, 621, 671, 689, 731, 791, 831, 871, 911},
    {74, 127, 168, 211, 277, 304, 331, 409, 440, 517, 541, 597, 622, 672, 690, 732, 792, 832, 872, 912},
    {75, 128, 169, 212, 278, 305, 332, 410, 441, 518, 542, 598, 623, 673, 691, 733, 793, 833, 873, 913},
    {76, 129, 170, 213, 279, 306, 333, 411, 442, 519, 543, 599, 624, 674, 692, 734, 794, 834, 874, 914},
    {77, 130, 171, 214, 240, 307, 334, 412, 443, 480, 544, 560, 625, 675, 693, 735, 795, 835, 875, 915},
    {78, 131, 172, 215, 241, 308, 335, 413, 444, 481, 545, 561, 626, 676, 694, 736, 796, 836, 876, 916},
    {79, 132, 173, 216, 242, 309, 336, 414, 445, 482, 546, 562, 627, 677, 695, 737, 797, 837, 877, 917},
    {40, 133, 174, 217, 243, 310, 337, 415, 446, 483, 547, 563, 628, 678, 696, 738, 798, 838, 878, 918},
    {41, 134, 175, 218, 244, 311, 338, 416, 447, 484, 548, 564, 629, 679, 697, 739, 799, 839, 879, 919},
    {21, 73, 114, 121, 187, 248, 332, 370, 437, 465, 513, 523, 595, 632, 665, 716, 747, 766, 880, 920},
    {22, 74, 115, 122, 188, 249, 333, 371, 438, 466, 514, 524, 596, 633, 666, 717, 748, 767, 881, 921},
    {23, 75, 116, 123, 189, 250, 334, 372, 439, 467, 515, 525, 597, 634, 667, 718, 749, 768, 882, 922},
    {24, 76, 117, 124, 190, 251, 335, 373, 400, 468, 516, 526, 598, 635, 668, 719, 750, 769, 883, 923},
    {25, 77, 118, 125, 191, 252, 336, 374, 401, 469, 517, 527, 599, 636, 669, 680, 751, 770, 884, 924},
    {26, 78, 119, 126, 192, 253, 337, 375, 402, 470, 518, 528, 560, 637, 670, 681, 752, 771, 885, 925},
    {27, 79, 80, 127, 193, 254, 338, 376, 403, 471, 519, 529, 561, 638, 671, 682, 753, 772, 886, 926},
    {28, 40, 81, 128, 194, 255, 339, 377, 404, 472, 480, 530, 562, 639, 672, 683, 754, 773, 887, 927},
    {29, 41, 82, 129, 195, 256, 340, 378, 405, 473, 481, 531, 563, 600, 673, 684, 755, 774, 888, 928},
    {30, 42, 83, 130, 196, 257, 341, 379, 406, 474, 482, 532, 564, 601, 674, 685, 756, 775, 889, 929},
    {31, 43, 84, 131, 197, 258, 342, 380, 407, 475, 483, 533, 565, 602, 675, 686, 757, 776, 890, 930},
    {32, 44, 85, 132, 198, 259, 343, 381, 408, 476, 484, 534, 566, 603, 676, 687, 758, 777, 891, 931},
    {33, 45, 86, 133, 199, 260, 344, 382, 409, 477, 485, 535, 567, 604, 677, 688, 759, 778, 892, 932},
    {34, 46, 87, 134, 160, 261, 345, 383, 410, 478, 486, 536, 568, 605, 678, 689, 720, 779, 893, 933},
    {35, 47, 88, 135, 161, 262, 346, 384, 411, 479, 487, 537, 569, 606, 679, 690, 721, 780, 894, 934},
    {36, 48, 89, 136, 162, 263, 347, 385, 412, 440, 488, 538, 570, 607, 640, 691, 722, 781, 895, 935},
    {37, 49, 90, 137, 163, 264, 348, 386, 413, 441, 489, 539, 571, 608, 641, 692, 723, 782, 896, 936},
    {38, 50, 91, 138, 164, 265, 349, 387, 414, 442, 490, 540, 572, 609, 642, 693, 724, 783, 897, 937},
    {39, 51, 92, 139, 165, 266, 350, 388, 415, 443, 491, 541, 573, 610, 643, 694, 725, 784, 898, 938},
    {0, 52, 93, 140, 166, 267, 351, 389, 416, 444, 492, 542, 574, 611, 644, 695, 726, 785, 899, 939},
    {1, 53, 94, 141, 167, 268, 352, 390, 417, 445, 493, 543, 575, 612, 645, 696, 727, 786, 900, 940},
    {2, 54, 95, 142, 168, 269, 353, 391, 418, 446, 494, 544, 576, 613, 646, 697, 728, 787, 901, 941},
    {3, 55, 96, 143, 169, 270, 354, 392, 419, 447, 495, 545, 577, 614, 647, 698, 729, 788, 902, 942},
    {4, 56, 97, 144, 170, 271, 355, 393, 420, 448, 496, 546, 578, 615, 648, 699, 730, 789, 903, 943},
    {5, 57, 98, 145, 171, 272, 356, 394, 421, 449, 497, 547, 579, 616, 649, 700, 731, 790, 904, 944},
    {6, 58, 99, 146, 172, 273, 357, 395, 422, 450, 498, 548, 580, 617, 650, 701, 732, 791, 905, 945},
    {7, 59, 100, 147, 173, 274, 358, 396, 423, 451, 499, 549, 581, 618, 651, 702, 733, 792, 906, 946},
    {8, 60, 101, 148, 174, 275, 359, 397, 424, 452, 500, 550, 582, 619, 652, 703, 734, 793, 907, 947},
    {9, 61, 102, 149, 175, 276, 320, 398, 425, 453, 501, 551, 583, 620, 653, 704, 735, 794, 908, 948},
    {10, 62, 103, 150, 176, 277, 321, 399, 426, 454, 502, 552, 584, 621, 654, 705, 736, 795, 909, 949},
    {11, 63, 104, 151, 177, 278, 322, 360, 427, 455, 503, 553, 585, 622, 655, 706, 737, 796, 910, 950},
    {12, 64, 105, 152, 178, 279, 323, 361, 428, 456, 504, 554, 586, 623, 656, 707, 738, 797, 911, 951},
    {13, 65, 106, 153, 179, 240, 324, 362, 429, 457, 505, 555, 587, 624, 657, 708, 739, 798, 912, 952},
    {14, 66, 107, 154, 180, 241, 325, 363, 430, 458, 506, 556, 588, 625, 658, 709, 740, 799, 913, 953},
    {15, 67, 108, 155, 181, 242, 326, 364, 431, 459, 507, 557, 589, 626, 659, 710, 741, 760, 914, 954},
    {16, 68, 109, 156, 182, 243, 327, 365, 432, 460, 508, 558, 590, 627, 660, 711, 742, 761, 915, 955},
    {17, 69, 110, 157, 183, 244, 328, 366, 433, 461, 509, 559, 591, 628, 661, 712, 743, 762, 916, 956},
    {18, 70, 111, 158, 184, 245, 329, 367, 434, 462, 510, 520, 592, 629, 662, 713, 744, 763, 917, 957},
    {19, 71, 112, 159, 185, 246, 330, 368, 435, 463, 511, 521, 593, 630, 663, 714, 745, 764, 918, 958},
    {20, 72, 113, 120, 186, 247, 331, 369, 436, 464, 512, 522, 594, 631, 664, 715, 746, 765, 919, 959},
    {20, 100, 126, 215, 245, 284, 324, 368, 422, 477, 492, 558, 583, 612, 675, 718, 724, 787, 833, 920},
    {21, 101, 127, 216, 246, 285, 325, 369, 423, 478, 493, 559, 584, 613, 676, 719, 725, 788, 834, 921},
    {22, 102, 128, 217, 247, 286, 326, 370, 424, 479, 494, 520, 585, 614, 677, 680, 726, 789, 835, 922},
    {23, 103, 129, 218, 248, 287, 327, 371, 425, 440, 495, 521, 586, 615, 678, 681, 727, 790, 836, 923},
    {24, 104, 130, 219, 249, 288, 328, 372, 426, 441, 496, 522, 587, 616, 679, 682, 728, 791, 837, 924},
    {25, 105, 131, 220, 250, 289, 329, 373, 427, 442, 497, 523, 588, 617, 640, 683, 729, 792, 838, 925},
    {26, 106, 132, 221, 251, 290, 330, 374, 428, 443, 498, 524, 589, 618, 641, 684, 730, 793, 839, 926},
    {27, 107, 133, 222, 252, 291, 331, 375, 429, 444, 499, 525, 590, 619, 642, 685, 731, 794, 800, 927},
    {28, 108, 134, 223, 253, 292, 332, 376, 430, 445, 500, 526, 591, 620, 643, 686, 732, 795, 801, 928},
    {29, 109, 135, 224, 254, 293, 333, 377, 431, 446, 501, 527, 592, 621, 644, 687, 733, 796, 802, 929},
    {30, 110, 136, 225, 255, 294, 334, 378, 432, 447, 502, 528, 593, 622, 645, 688, 734, 797, 803, 930},
    {31, 111, 137, 226, 256, 295, 335, 379, 433, 448, 503, 529, 594, 623, 646, 689, 735, 798, 804, 931},
    {32, 112, 138, 227, 257, 296, 336, 380, 434, 449, 504, 530, 595, 624, 647, 690, 736, 799, 805, 932},
    {33, 113, 139, 228, 258, 297, 337, 381, 435, 450, 505, 531, 596, 625, 648, 691, 737, 760, 806, 933},
    {34, 114, 140, 229, 259, 298, 338, 382, 436, 451, 506, 532, 597, 626, 649, 692, 738, 761, 807, 934},
    {35, 115, 141, 230, 260, 299, 339, 383, 437, 452, 507, 533, 598, 627, 650, 693, 739, 762, 808, 935},
    {36, 116, 142, 231, 261, 300, 340, 384, 438, 453, 508, 534, 599, 628, 651, 694, 740, 763, 809, 936},
    {37, 117, 143, 232, 262, 301, 341, 385, 439, 454, 509, 535, 560, 629, 652, 695, 741, 764, 810, 937},
    {38, 118, 144, 233, 263, 302, 342, 386, 400, 455, 510, 536, 561, 630, 653, 696, 742, 765, 811, 938},
    {39, 119, 145, 234, 264, 303, 343, 387, 401, 456, 511, 537, 562, 631, 654, 697, 743, 766, 812, 939},
    {0, 80, 146, 235, 265, 304, 344, 388, 402, 457, 512, 538, 563, 632, 655, 698, 744, 767, 813, 940},
    {1, 81, 147, 236, 266, 305, 345, 389, 403, 458, 513, 539, 564, 633, 656, 699, 745, 768, 814, 941},
    {2, 82, 148, 237, 267, 306, 346, 390, 404, 459, 514, 540, 565, 634, 657, 700, 746, 769, 815, 942},
    {3, 83, 149, 238, 268, 307, 347, 391, 405, 460, 515, 541, 566, 635, 658, 701, 747, 770, 816, 943},
    {4, 84, 150, 239, 269, 308, 348, 392, 406, 461, 516, 542, 567, 636, 659, 702, 748, 771, 817, 944},
    {5, 85, 151, 200, 270, 309, 349, 393, 407, 462, 517, 543, 568, 637, 660, 703, 749, 772, 818, 945},
    {6, 86, 152, 201, 271, 310, 350, 394, 408, 463, 518, 544, 569, 638, 661, 704, 750, 773, 819, 946},
    {7, 87, 153, 202, 272, 311, 351, 395, 409, 464, 519, 545, 570, 639, 662, 705, 751, 774, 820, 947},
    {8, 88, 154, 203, 273, 312, 352, 396, 410, 465, 480, 546, 571, 600, 663, 706, 752, 775, 821, 948},
    {9, 89, 155, 204, 274, 313, 353, 397, 411, 466, 481, 547, 572, 601, 664, 707, 753, 776, 822, 949},
    {10, 90, 156, 205, 275, 314, 354, 398, 412, 467, 482, 548, 573, 602, 665, 708, 754, 777, 823, 950},
    {11, 91, 157, 206, 276, 315, 355, 399, 413, 468, 483, 549, 574, 603, 666, 709, 755, 778, 824, 951},
    {12, 92, 158, 207, 277, 316, 356, 360, 414, 469, 484, 550, 575, 604, 667, 710, 756, 779, 825, 952},
    {13, 93, 159, 208, 278, 317, 357, 361, 415, 470, 485, 551, 576, 605, 668, 711, 757, 780, 826, 953},
    {14, 94, 120, 209, 279, 318, 358, 362, 416, 471, 486, 552, 577, 606, 669, 712, 758, 781, 827, 954},
    {15, 95, 121, 210, 240, 319, 359, 363, 417, 472, 487, 553, 578, 607, 670, 713, 759, 782, 828, 955},
    {16, 96, 122, 211, 241, 280, 320, 364, 418, 473, 488, 554, 579, 608, 671, 714, 720, 783, 829, 956},
    {17, 97, 123, 212, 242, 281, 321, 365, 419, 474, 489, 555, 580, 609, 672, 715, 721, 784, 830, 957},
    {18, 98, 124, 213, 243, 282, 322, 366, 420, 475, 490, 556, 581, 610, 673, 716, 722, 785, 831, 958},
    {19, 99, 125, 214, 244, 283, 323, 367, 421, 476, 491, 557, 582, 611, 674, 717, 723, 786, 832, 959}
};
#endif
#ifndef MAIN_MENU_H
#define MAIN_MENU_H

#include <allegro5/allegro.h>
#include <vector>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_image.h>
#include <iostream>

using namespace std;

class MainMenu {

private:
	

public:
	vector<const char*> frames;
	MainMenu() {
		frames.push_back("MainMenu/frame_000_delay-0.04s.png");
		frames.push_back("MainMenu/frame_001_delay-0.04s.png");
		frames.push_back("MainMenu/frame_002_delay-0.04s.png");
		frames.push_back("MainMenu/frame_003_delay-0.04s.png");
		frames.push_back("MainMenu/frame_004_delay-0.04s.png");
		frames.push_back("MainMenu/frame_005_delay-0.04s.png");
		frames.push_back("MainMenu/frame_006_delay-0.04s.png");
		frames.push_back("MainMenu/frame_007_delay-0.04s.png");
		frames.push_back("MainMenu/frame_008_delay-0.04s.png");
		frames.push_back("MainMenu/frame_009_delay-0.04s.png");
		frames.push_back("MainMenu/frame_010_delay-0.04s.png");
		frames.push_back("MainMenu/frame_011_delay-0.04s.png");
		frames.push_back("MainMenu/frame_012_delay-0.04s.png");
		frames.push_back("MainMenu/frame_013_delay-0.04s.png");
		frames.push_back("MainMenu/frame_014_delay-0.04s.png");
		frames.push_back("MainMenu/frame_015_delay-0.04s.png");
		frames.push_back("MainMenu/frame_016_delay-0.04s.png");
		frames.push_back("MainMenu/frame_017_delay-0.04s.png");
		frames.push_back("MainMenu/frame_018_delay-0.04s.png");
		frames.push_back("MainMenu/frame_019_delay-0.04s.png");
		frames.push_back("MainMenu/frame_020_delay-0.04s.png");
		frames.push_back("MainMenu/frame_021_delay-0.04s.png");
		frames.push_back("MainMenu/frame_022_delay-0.04s.png");
		frames.push_back("MainMenu/frame_023_delay-0.04s.png");
		frames.push_back("MainMenu/frame_024_delay-0.04s.png");
		frames.push_back("MainMenu/frame_025_delay-0.04s.png");
		frames.push_back("MainMenu/frame_026_delay-0.04s.png");
		frames.push_back("MainMenu/frame_027_delay-0.04s.png");
		frames.push_back("MainMenu/frame_028_delay-0.04s.png");
		frames.push_back("MainMenu/frame_029_delay-0.04s.png");
		frames.push_back("MainMenu/frame_030_delay-0.04s.png");
		frames.push_back("MainMenu/frame_031_delay-0.04s.png");
		frames.push_back("MainMenu/frame_032_delay-0.04s.png");
		frames.push_back("MainMenu/frame_033_delay-0.04s.png");
		frames.push_back("MainMenu/frame_034_delay-0.04s.png");
		frames.push_back("MainMenu/frame_035_delay-0.04s.png");
		frames.push_back("MainMenu/frame_036_delay-0.04s.png");
		frames.push_back("MainMenu/frame_037_delay-0.04s.png");
		frames.push_back("MainMenu/frame_038_delay-0.04s.png");
		frames.push_back("MainMenu/frame_039_delay-0.04s.png");
		frames.push_back("MainMenu/frame_040_delay-0.04s.png");
		frames.push_back("MainMenu/frame_041_delay-0.04s.png");
		frames.push_back("MainMenu/frame_042_delay-0.04s.png");
		frames.push_back("MainMenu/frame_043_delay-0.04s.png");
		frames.push_back("MainMenu/frame_044_delay-0.04s.png");
		frames.push_back("MainMenu/frame_045_delay-0.04s.png");
		frames.push_back("MainMenu/frame_046_delay-0.04s.png");
		frames.push_back("MainMenu/frame_047_delay-0.04s.png");
		frames.push_back("MainMenu/frame_048_delay-0.04s.png");
		frames.push_back("MainMenu/frame_049_delay-0.04s.png");
		frames.push_back("MainMenu/frame_050_delay-0.04s.png");
		frames.push_back("MainMenu/frame_051_delay-0.04s.png");
		frames.push_back("MainMenu/frame_052_delay-0.04s.png");
		frames.push_back("MainMenu/frame_053_delay-0.04s.png");
		frames.push_back("MainMenu/frame_054_delay-0.04s.png");
		frames.push_back("MainMenu/frame_055_delay-0.04s.png");
		frames.push_back("MainMenu/frame_056_delay-0.04s.png");
		frames.push_back("MainMenu/frame_057_delay-0.04s.png");
		frames.push_back("MainMenu/frame_058_delay-0.04s.png");
		frames.push_back("MainMenu/frame_059_delay-0.04s.png");
		frames.push_back("MainMenu/frame_060_delay-0.04s.png");
		frames.push_back("MainMenu/frame_061_delay-0.04s.png");
		frames.push_back("MainMenu/frame_062_delay-0.04s.png");
		frames.push_back("MainMenu/frame_063_delay-0.04s.png");
		frames.push_back("MainMenu/frame_064_delay-0.04s.png");
		frames.push_back("MainMenu/frame_065_delay-0.04s.png");
		frames.push_back("MainMenu/frame_066_delay-0.04s.png");
		frames.push_back("MainMenu/frame_067_delay-0.04s.png");
		frames.push_back("MainMenu/frame_068_delay-0.04s.png");
		frames.push_back("MainMenu/frame_069_delay-0.04s.png");
		frames.push_back("MainMenu/frame_070_delay-0.04s.png");
		frames.push_back("MainMenu/frame_071_delay-0.04s.png");
		frames.push_back("MainMenu/frame_072_delay-0.04s.png");
		frames.push_back("MainMenu/frame_073_delay-0.04s.png");
		frames.push_back("MainMenu/frame_074_delay-0.04s.png");
		frames.push_back("MainMenu/frame_075_delay-0.04s.png");
		frames.push_back("MainMenu/frame_076_delay-0.04s.png");
		frames.push_back("MainMenu/frame_077_delay-0.04s.png");
		frames.push_back("MainMenu/frame_078_delay-0.04s.png");
		frames.push_back("MainMenu/frame_079_delay-0.04s.png");
		frames.push_back("MainMenu/frame_080_delay-0.04s.png");
		frames.push_back("MainMenu/frame_081_delay-0.04s.png");
		frames.push_back("MainMenu/frame_082_delay-0.04s.png");
		frames.push_back("MainMenu/frame_083_delay-0.04s.png");
		frames.push_back("MainMenu/frame_084_delay-0.04s.png");
		frames.push_back("MainMenu/frame_085_delay-0.04s.png");
		frames.push_back("MainMenu/frame_086_delay-0.04s.png");
		frames.push_back("MainMenu/frame_087_delay-0.04s.png");
		frames.push_back("MainMenu/frame_088_delay-0.04s.png");
		frames.push_back("MainMenu/frame_089_delay-0.04s.png");
		frames.push_back("MainMenu/frame_090_delay-0.04s.png");
		frames.push_back("MainMenu/frame_091_delay-0.04s.png");
		frames.push_back("MainMenu/frame_092_delay-0.04s.png");
		frames.push_back("MainMenu/frame_093_delay-0.04s.png");
		frames.push_back("MainMenu/frame_094_delay-0.04s.png");
		frames.push_back("MainMenu/frame_095_delay-0.04s.png");
		frames.push_back("MainMenu/frame_096_delay-0.04s.png");
		frames.push_back("MainMenu/frame_097_delay-0.04s.png");
		frames.push_back("MainMenu/frame_098_delay-0.04s.png");
		frames.push_back("MainMenu/frame_099_delay-0.04s.png");
		frames.push_back("MainMenu/frame_100_delay-0.04s.png");
		frames.push_back("MainMenu/frame_101_delay-0.04s.png");
		frames.push_back("MainMenu/frame_102_delay-0.04s.png");
		frames.push_back("MainMenu/frame_103_delay-0.04s.png");
		frames.push_back("MainMenu/frame_104_delay-0.04s.png");
		frames.push_back("MainMenu/frame_105_delay-0.04s.png");
		frames.push_back("MainMenu/frame_106_delay-0.04s.png");
		frames.push_back("MainMenu/frame_107_delay-0.04s.png");
		frames.push_back("MainMenu/frame_108_delay-0.04s.png");
		frames.push_back("MainMenu/frame_109_delay-0.04s.png");
		frames.push_back("MainMenu/frame_110_delay-0.04s.png");
		frames.push_back("MainMenu/frame_111_delay-0.04s.png");
		frames.push_back("MainMenu/frame_112_delay-0.04s.png");
		frames.push_back("MainMenu/frame_113_delay-0.04s.png");
		frames.push_back("MainMenu/frame_114_delay-0.04s.png");
		frames.push_back("MainMenu/frame_115_delay-0.04s.png");
		frames.push_back("MainMenu/frame_116_delay-0.04s.png");
		frames.push_back("MainMenu/frame_117_delay-0.04s.png");
		frames.push_back("MainMenu/frame_118_delay-0.04s.png");
		frames.push_back("MainMenu/frame_119_delay-0.04s.png");
		frames.push_back("MainMenu/frame_120_delay-0.04s.png");
		frames.push_back("MainMenu/frame_121_delay-0.04s.png");
		frames.push_back("MainMenu/frame_122_delay-0.04s.png");
		frames.push_back("MainMenu/frame_123_delay-0.04s.png");
		frames.push_back("MainMenu/frame_124_delay-0.04s.png");
		frames.push_back("MainMenu/frame_125_delay-0.04s.png");
		frames.push_back("MainMenu/frame_126_delay-0.04s.png");
		frames.push_back("MainMenu/frame_127_delay-0.04s.png");
		frames.push_back("MainMenu/frame_128_delay-0.04s.png");
		frames.push_back("MainMenu/frame_129_delay-0.04s.png");
		frames.push_back("MainMenu/frame_130_delay-0.04s.png");
		frames.push_back("MainMenu/frame_131_delay-0.04s.png");
		frames.push_back("MainMenu/frame_132_delay-0.04s.png");
		frames.push_back("MainMenu/frame_133_delay-0.04s.png");
		frames.push_back("MainMenu/frame_134_delay-0.04s.png");
		frames.push_back("MainMenu/frame_135_delay-0.04s.png");
		frames.push_back("MainMenu/frame_136_delay-0.04s.png");
		frames.push_back("MainMenu/frame_137_delay-0.04s.png");
		frames.push_back("MainMenu/frame_138_delay-0.04s.png");
		frames.push_back("MainMenu/frame_139_delay-0.04s.png");
		frames.push_back("MainMenu/frame_140_delay-0.04s.png");
		frames.push_back("MainMenu/frame_141_delay-0.04s.png");
		frames.push_back("MainMenu/frame_142_delay-0.04s.png");
		frames.push_back("MainMenu/frame_143_delay-0.04s.png");
		frames.push_back("MainMenu/frame_144_delay-0.04s.png");
		frames.push_back("MainMenu/frame_145_delay-0.04s.png");
		frames.push_back("MainMenu/frame_146_delay-0.04s.png");
		frames.push_back("MainMenu/frame_147_delay-0.04s.png");
		frames.push_back("MainMenu/frame_148_delay-0.04s.png");
		frames.push_back("MainMenu/frame_149_delay-0.04s.png");
		frames.push_back("MainMenu/frame_150_delay-0.04s.png");
		frames.push_back("MainMenu/frame_151_delay-0.04s.png");


	}

	~MainMenu() {
		
	}

	void render(int, ALLEGRO_BITMAP*, int&, ALLEGRO_DISPLAY*, ALLEGRO_FONT*);


};


#endif

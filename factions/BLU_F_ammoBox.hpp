// NLD - Army (DPM)
// Author: Cole

class TB_BLUBasicAmmunitionBox
{
	transportClear = 1;
	proxyObject = "TB_BLUBasicAmmunitionBox";
	class transportCargo
	{
		transportMagazines[] = {
			{"rhs_mag_30Rnd_556x45_M855A1_Stanag", 20},
			{"rhsusf_20Rnd_762x51_m118_special_Mag", 10},
			{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", 5},
			{"CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1", 5},
			{"CUP_5Rnd_86x70_L115A1", 10},
			{"SmokeShell", 10},
			{"rhs_mag_m67", 10},
			{"rhs_mag_M441_HE", 10},
			{"CUP_M136_M", 2},
			{"LaserBatteries", 2}
		};
		transportWeapons[] = {{"rhs_weap_rsp30_green", 10}, {"CUP_launch_M136",1}, {"rhs_weap_m4a1_blockII",2}};
		//transportBackpacks[] = {};
		//transportItems[] = {};
	};
};
class TB_Box_West_Mines_F
{
	transportClear = 1;
	proxyObject = "TB_Box_West_Mines_F";
	class transportCargo
	{
		transportMagazines[] = {
			{"rhs_mine_M19_mag", 2},
			{"SLAMDirectionalMine_Wire_Mag", 2},
			{"APERSMine_Range_Mag", 6},
			{"APERSBoundingMine_Range_Mag", 2},
			{"APERSTripMine_Wire_Mag", 2},
			{"ClaymoreDirectionalMine_Remote_Mag", 2}
		};
		//transportWeapons[] = {};
		transportBackpacks[] = {{"TB_B_Kitbag_DPM", 2}};
		transportItems[] = {{"MineDetector", 2}, {"ToolKit", 1}};
	};
};
/**
 * config
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
class CfgPatches
{
	class exile_server_config
	{
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};


class CfgBuildings
{
	class CivillianLowerClass {
		table = "CivillianLowerClass";
	};

	class CivillianUpperClass {
		table = "CivillianUpperClass";
	};

	class Factories {
		table = "Factories";
	};

	class Industrial {
		table = "Industrial";
	};

	class Medical {
		table = "Medical";
	};

	class Military {
		table = "Military";
	};

	class Shop {
		table = "Shop";
	};

	class Tourist {
		table = "Tourist";
	};

	class VehicleService {
		table = "VehicleService";
	}; 
	
	class Land_MilOffices_V1_F: Military
	{
		positions[] =
		{
			{5.9043,-0.84668,-2.69008},
			{3.16309,-2.79297,-1.62292},
			{-1.24316,-0.647461,-1.62292},
			{-7.7334,2.84375,-2.69008},
			{3.96289,5.06641,-2.69008},
			{7.16992,8.30762,-2.69008},
			{14.6953,6.37402,-2.69008},
			{14.4961,2.08984,-2.69008},
			{13.0254,-4.12695,-2.69008},
			{8.01758,-4.68262,-2.69008},
			{8.84668,-1.9375,-2.69008},
			{5.00293,2.90918,-2.69008},
			{-4.29395,8.66992,-2.69008},
			{-14.999,-1.71973,-2.69008},
			{-11.2988,-3.89258,-2.69008},
			{-15.2656,1.95801,-2.69008},
			{-17.0918,6.00098,-1.60889}
		};
	};

	class Land_dp_smallFactory_F: VehicleService
	{
		positions[] =
		{
			{6.65625,4.90918,-1.76074},
			{10.1543,4.35352,-1.76074},
			{-1.59961,5.01465,-1.74775},
			{-2.80371,-10.4492,-1.91948},
			{2.66406,-13.3623,-1.11459},
			{8.30957,-7.95313,-1.91948}
		};
	};

	class fr: CivillianLowerClass
	{
		positions[] =
		{
			{-3.25488,-0.635742,0.0643082},
			{-4.70508,3.91309,0.0643082},
			{0.379883,3.77246,0.0643082},
			{-3.63477,-2.30371,0.961494},
			{-2.79199,4.83594,0.922173},
			{5.35645,-0.255859,0.908737},
			{5.35645,2.97363,0.989006},
			{3.79883,-6.4043,0.98217}
		};
	};

	class Land_New_WiredFence_10m_Dam_F: Military
	{
		positions[] =
		{
			{5.53809,-0.0253906,-0.757286},
			{2.57861,-0.262695,-1.01564},
			{-6.37598,-14.3887,-1.00101},
			{-11.356,-11.7559,-1.00501},
			{-16.2417,-18.1904,-1.00893},
			{-12.5151,-20.626,-1.00594},
			{-21.4473,-14.6758,-1.09615},
			{-17.6758,-8.07129,-1.01009},
			{-23.9731,-28.3662,-1.01514},
			{-13.5396,-52.6699,-0.18792},
			{-11.2939,-53.2998,-0.00993347},
			{-15.0542,-54.1924,-0.0159073},
			{-18.6758,-55.1533,-1.01086},
			{-20.7319,-52.5537,-1.01252},
			{5.9375,-38.9072,-0.185616},
			{6.25488,-72.6855,-0.638885},
			{4.68262,-73.3213,-0.592216},
			{9.18848,-74.1982,-0.814346},
			{16.1553,-72.2334,-1.07009},
			{20.1929,-83.4971,-0.97921},
			{20.3535,-79.5225,-0.66938},
			{33.5581,-85.1006,-0.832611},
			{30.0669,-86.7314,-0.740486},
			{29.7979,-87.5693,-0.124107},
			{39.064,-93.2656,-0.9645},
			{55.5293,-96.373,-1.37588},
			{61.7388,-101.9,-1.77055},
			{67.2705,-104.938,-1.84039}
		};
	};

	class Land_TTowerBig_1_F: Industrial
	{
		positions[] =
		{
			{-8.03516,-7.09961,-20.142},
			{-7.75635,5.79102,-19.6869},
			{-0.830078,-0.118164,-19.9796},
			{14.5195,4.57129,-19.7024},
			{6.2124,-6.40332,-19.3289}
		};
	};

	class Land_LampHalogen_F: Industrial
	{
		positions[] =
		{
			{-0.21875,-0.00292969,-5.60781}
		};
	};

	class Land_Hangar_F: Military
	{
		positions[] =
		{
			{-9.78418,-22.0303,-5.26193},
			{0.651367,-22.1133,-5.22521},
			{0.326172,-4.8291,-5.34429},
			{11.478,20.334,-5.27287},
			{2.2373,20.4053,-5.35822},
			{-1.771,12.459,-5.30567}
		};
	};

	class Land_TBox_F: Industrial
	{
		positions[] =
		{
			{-1.79004,-1.23877,-1.47168},
			{0.43457,-1.94971,-1.11721}
		};
	};

	class Land_LampAirport_F: Factories
	{
		positions[] =
		{
			{0.292969,0.29834,-12.1102},
			{-0.617188,-0.709473,-11.9932}
		};
	};

	class Land_LampHarbour_F: VehicleService
	{
		positions[] =
		{
			{0.291504,-0.269531,-2.77682}
		};
	};

	class Land_i_Barracks_V1_F: Military
	{
		positions[] =
		{
			{13.1699,-3.50195,0.617718},
			{10.7031,3.82813,0.617718},
			{6.09473,3.35059,0.617718},
			{3.80566,-3.0625,0.617718},
			{5.93848,0.0273438,0.617718},
			{-2.13379,3.58105,0.617722},
			{1.09375,3.86914,0.617722},
			{-5.08984,-3.37305,0.617722},
			{-12.5547,-0.0693359,0.617722},
			{-10.6563,-3.04492,0.617718},
			{-10.0762,3.79395,0.617722},
			{0.485352,-4.7832,1.21839},
			{-0.84375,-1.7334,2.46712},
			{-5.98145,-5.98047,3.85389},
			{-12.749,0.199219,3.95143},
			{-10.2021,3.27539,3.97747},
			{-10.208,-3.12793,3.95143},
			{-1.91895,3.3916,3.97732},
			{4.45508,-3.27734,3.95143},
			{5.65039,3.09375,3.95143},
			{9.52344,0.310547,3.94317},
			{11.2061,3.30664,3.95143},
			{13.3232,-2.66797,3.95143},
			{15.8115,-0.00488281,3.95143}
		};
	};

	class Land_ReservoirTank_Airport_F: Factories
	{
		positions[] =
		{
			{2.62305,-0.132324,-12.7143},
			{2.80273,0.535156,-12.7143},
			{5.11914,-4.70459,-12.8925}
		};
	};

	class Land_i_Barracks_V2_F: Military
	{
		positions[] =
		{
			{-7.50684,-13.4727,0.0254841},
			{-5.52832,-5.10742,0.562433},
			{-1.41895,-4.00586,0.617722},
			{1.22461,-6.06836,0.614264},
			{0.704102,-1.83496,2.14384},
			{-6.03027,-3.57715,4.04608},
			{-12.9707,-0.046875,3.95143},
			{-10.1836,-3.23633,3.88744},
			{-8.8623,3.62402,3.95143},
			{-8.3252,3.47266,3.95143},
			{0.292969,-0.0292969,4.55099},
			{-1.29102,2.82324,3.95143},
			{4.75781,-3.19922,3.90956},
			{9.05273,0.178711,3.95042},
			{12.8076,-2.81543,3.95143},
			{10.7744,4.11328,3.95143},
			{9.56738,5.88477,3.95143},
			{0.452148,5.82324,4.22963},
			{2.65918,2.00586,3.95143},
			{13.7432,-0.0859375,0.617722},
			{10.2861,3.41113,0.617722},
			{5.64453,4.43164,0.617722},
			{5.09473,-3.01172,0.534601},
			{-1.67871,2.9541,0.652409},
			{-9.42871,2.90039,0.617722},
			{-12.0322,0.755859,1.41457},
			{-10.3867,-2.77051,0.617722}
		};
	};

	class Land_i_Garage_V1_F: VehicleService
	{
		positions[] =
		{
			{-2.67969,-1.24609,-0.0549774},
			{-3.76855,1.57227,0.0347862},
			{3.58301,1.82275,-0.0684814},
			{3.11816,-1.12158,0.0225372},
			{0.145508,-0.0615234,-0.0189209}
		};
	};

	class Land_Airport_Tower_F: Military
	{
		positions[] =
		{
			{1.84375,2.51563,-10.3663},
			{-1.66016,2.58887,-10.3663},
			{0.112305,5.9248,-10.3663},
			{-0.733398,7.03418,-8.86471},
			{-0.166992,1.69482,-7.36311},
			{-0.858398,6.76416,-5.86491},
			{-0.513672,2.04688,-4.36248},
			{-0.499023,6.91699,-2.86427},
			{-0.397461,2.65137,-1.36753},
			{-0.754883,5.00488,1.6328},
			{-0.458984,1.87305,1.63279},
			{-0.847656,7.46338,-1.93297}
		};
	};

	class Land_u_House_Small_01_V1_F: Military
	{
		positions[] =
		{
			{2.87695,-4.09619,-0.761576},
			{3.26367,1.65967,-0.824091},
			{-1.86328,-1.51611,-0.824091},
			{-1.11719,3.38184,-0.2693}
		};
	};

	class Land_u_House_Small_02_V1_F: Military
	{
		positions[] =
		{
			{-3.66602,-2.03271,-0.635187},
			{-0.700195,1.39014,-0.635187},
			{5.31738,0.643555,-0.635187}
		};
	};

	class Land_d_House_Big_01_V1_F: Military
	{
		positions[] =
		{
			{-2.65479,1.32813,-2.0766},
			{2.3916,2.11426,-1.87016},
			{-2.44092,6.08887,1.31484},
			{-4.52686,10.2539,1.31484},
			{-3.47168,-0.854492,1.45188}
		};
	};

	class Land_u_Shop_02_V1_F: Shop
	{
		positions[] =
		{
			{-0.981934,-3.28223,-2.56905},
			{-4.07422,-2.14063,-2.56905},
			{-3.60156,3.92969,-2.34252},
			{-4.8584,3.14355,1.28056},
			{-1.36816,-0.655273,-2.60325},
			{-0.822754,-3.75488,1.27904},
			{4.5918,-3.67578,1.28687},
			{-2.22461,3.86914,-2.60325},
			{-1.17676,1.95703,1.29034},
			{-4.75342,-2.93848,1.2997},
			{4.73145,3.72363,1.28451},
			{2.52637,-2.81445,1.302},
			{2.81641,2.71582,1.28451},
			{-6.70068,1.15918,1.36175},
			{0.385742,-0.836914,1.65177}
		};
	};


	class Land_d_House_Small_01_V1_F: Medical
	{
		positions[] =
		{
			{0.989258,6.24854,-0.753979},
			{5.00879,5.46143,-0.753979},
			{8.34863,4.62158,-0.753979},
			{7.01855,-0.493652,-0.753979},
			{4.00879,1.3208,-0.772158}
		};
	};

	class Land_i_Stone_Shed_01_b_white_F: CivillianLowerClass
	{
		positions[] =
		{
			{-1.60059,0.833008,-0.0746517},
			{1.12842,1.12695,-0.0258541},
			{4.20459,3.08887,-0.0233402}
		};
	};

	class Land_Cargo_House_V3_derelict_F: Military
	{
		positions[] =
		{
			{2.14746,0.376953,0.0263672},
			{0.445313,0.792969,0.418457},
			{-1.8125,0.636719,0.280273}
		};
	};

	class Land_Cargo_House_V2_F: Military
	{
		positions[] =
		{
			{0.564941,-1.38379,-0.110718},
			{-1.76758,2.55859,0.136719},
			{1.46729,3.19629,0.136597}
		};
	};

	class Land_Bunker_01_small_F: Military
	{
		positions[] =
		{
			{2.08496,1.27417,0.210091},
			{2.35938,-1.43848,0.289925},
			{-1.59766,-0.539063,0.289925}
		};
	};

	class Land_Cargo_HQ_V3_derelict_F: Medical
	{
		positions[] =
		{
			{-3.4834,-2.5127,-1.1458},
			{0.729492,-2.90186,-1.02927},
			{4.47266,4.3208,-1.10295}
		};
	};

	class Land_Bunker_01_tall_F: Military
	{
		positions[] =
		{
			{1.58203,2.02783,-3.18208},
			{-2.24316,-1.04443,-3.33868},
			{1.61816,-1.95068,-2.26742},
			{-2.37207,1.90674,1.52953},
			{2.21973,-0.0791016,1.52953},
			{-0.573242,0.761719,2.88573},
			{1.22461,0.487305,1.87902},
			{2.85547,1.96436,1.52953}
		};
	};

	class Land_Cargo_Tower_V2_F: Military
	{
		positions[] =
		{
			{-4.88477,-2.22656,-12.2631},
			{2.42578,1.38281,-8.1452},
			{1.07422,3.23828,-8.17076},
			{-0.245117,1.95605,-4.20825},
			{4.67773,4.26367,-0.032608},
			{-0.444336,4.75586,-0.032608},
			{-4.74512,-3.53906,-0.0880356},
			{6.39648,-0.928223,2.68789},
			{6.46777,4.4873,2.68789},
			{-1.27344,4.05762,2.5051},
			{-2.83496,-3.4751,2.77155},
			{-6.30664,2.03564,2.68789},
			{-0.472656,1.55762,5.1674},
			{-1.71875,-4.89893,4.99467},
			{5.84961,-0.648438,5.09487},
			{-2.77734,5.17627,5.27798},
			{-4.81836,5.32861,5.27862},
			{-6.73828,1.81934,4.9947},
			{-6.02344,3.27588,6.04148}
		};
	};

	class Land_Cargo_Patrol_V2_F: Military
	{
		positions[] =
		{
			{-0.59668,0.546631,-4.32072},
			{2.24609,0.436035,-2.8321},
			{-1.1416,1.51465,-0.666954},
			{0.791016,-1.03955,-0.476959},
			{1.81543,0.516113,-0.666954}
		};
	};

	class Land_Bunker_01_big_F: Military
	{
		positions[] =
		{
			{4.71826,0.571289,0.0894547},
			{-3.9292,1.46777,0.0878525},
			{-1.66602,2.19434,0.598946},
			{-3.9375,-3.0791,0.0893784},
			{0.755371,-6.10938,0.0875397},
			{4.33301,-1.04004,0.0887375},
			{5.31885,-1.74707,1.23566}
		};
	};

	class Land_LightHouse_F: Industrial
	{
		positions[] =
		{
			{-0.078125,-0.591797,-11.0579},
			{-1.61133,0.880859,-10.2521},
			{-3.20508,2.43555,-10.3058},
			{2.7959,0.779297,-10.2531}
		};
	};

	class Land_i_House_Small_01_V1_F: Military
	{
		positions[] =
		{
			{3.16602,-2.66992,-0.726645},
			{3.15039,3.74902,-0.947206},
			{-0.507813,-0.380859,-0.437305},
			{-3.24805,3.23633,-0.961542},
			{-3.80078,5.18164,-0.956514},
			{2.25,10.5542,-1.41862}
		};
	};

	class Land_u_House_Big_02_V1_F: Medical
	{
		positions[] =
		{
			{-3.66162,-5.55664,-2.44562},
			{3.38721,-5.8457,-2.00562},
			{-3.01221,-1.25586,-2.44562},
			{1.60254,-1.53711,-2.19326},
			{-2.04639,4.22266,-2.2304},
			{3.23779,1.63867,-2.09364},
			{4.01514,-2.33789,-0.605618},
			{1.06592,-3.58398,-1.91667},
			{-2.97314,-2.4707,1.06438},
			{-3.20557,-5.27637,1.06438},
			{0.817871,-5.12891,1.06438},
			{-1.93506,3.91113,1.06438},
			{2.21924,0.859375,1.27229},
			{-3.11914,5.58203,1.26955}
		};
	};

	class Land_u_Addon_01_V1_F: Medical
	{
		positions[] =
		{
			{-0.467773,2.89307,0.066452},
			{3.71973,1.74023,0.066452},
			{4.52441,0.714844,0.0664825}
		};
	};

	class Land_Slum_House02_F: CivillianLowerClass
	{
		positions[] =
		{
			{-1.65137,2.70898,-1.11275},
			{2.94873,2.59473,-0.91745},
			{2.44873,-0.930664,-0.850098}
		};
	};

	class Land_u_Addon_02_V1_F: CivillianUpperClass
	{
		positions[] =
		{
			{2.58691,2.16797,0.518204},
			{-1.62793,2.84814,0.142227}
		};
	};

	class Land_i_House_Big_01_V2_F: Military
	{
		positions[] =
		{
			{-3.74756,-6.50879,-2.46324},
			{-3.51416,-1.13379,-2.67149},
			{2.3584,-4.46973,-2.67146},
			{0.70752,-2.37695,-2.1647},
			{-1.62207,4.4248,-2.31242},
			{-4.09424,2.47168,-2.5645},
			{3.59082,2.20801,-0.888336},
			{-3.31543,1.5625,0.899475},
			{0.904785,-5.90918,1.01491},
			{1.63086,-0.787109,0.965729},
			{-1.87109,6.0459,0.92067},
			{2.63086,5.45117,0.902451}
		};
	};

	class Land_i_Stone_HouseSmall_V2_F: CivillianUpperClass
	{
		positions[] =
		{
			{6.61182,3.7334,-0.612091},
			{2.73828,2.8291,-0.249802},
			{-5.79883,1.49219,-0.649841}
		};
	};

	class Land_i_House_Small_01_V3_F: VehicleService
	{
		positions[] =
		{
			{3.9707,-6.12646,-1.19966},
			{3.10645,1.43359,-0.961533},
			{-2.36914,3.00488,-0.961533},
			{-0.978516,-0.84082,-0.5159}
		};
	};

	class Land_i_House_Big_01_V3_F: Medical
	{
		positions[] =
		{
			{-3.34424,-1.80957,-2.43066},
			{-3.39063,-6.53125,-2.67148},
			{1.54492,-0.591797,-2.29089},
			{0.868164,4.03711,-2.25064},
			{3.90723,-6.10254,-2.45151},
			{3.85059,2.31836,-0.888336},
			{-2.7002,-0.263672,0.9207},
			{3.75439,-1.56641,1.08313},
			{1.97266,-5.05078,1.14059},
			{-1.57178,6.29785,0.9207},
			{2.67383,5.31836,0.941757}
		};
	};

	class Land_i_Shop_02_V3_F: Shop
	{
		positions[] =
		{
			{-3.84326,1.87598,-2.51791},
			{-2.09766,4.07031,-2.56905},
			{-4.10156,-3.54688,-2.40894},
			{0.196289,-3.55664,-2.56905},
			{-4.64404,3.61328,1.28056},
			{-1.3877,-0.65625,-2.60324},
			{-0.841309,-3.75488,1.27905},
			{4.57324,-3.67578,1.28688},
			{-2.24414,3.86914,-2.60324},
			{-1.1958,1.95703,1.29034},
			{-4.77197,-2.93945,1.2997},
			{4.71191,3.72363,1.28452},
			{2.50684,-2.81445,1.30202},
			{2.79736,2.71484,1.28452},
			{-6.71973,1.1582,1.36176},
			{0.515625,-1.5918,1.60081}
		};
	};

	class Land_i_Shop_01_V3_F: Military
	{
		positions[] =
		{
			{2.56152,5.83691,-2.53342},
			{-2.69556,5.46387,-2.68362},
			{0.451904,0.248047,-2.66499},
			{2.91797,-1.26172,-2.68947},
			{3.20825,1.24512,-1.29698},
			{3.06104,3.77832,0.763168},
			{2.67896,6.56152,1.1255},
			{-1.4812,5.19824,1.67273},
			{-1.56641,1.86816,1.18826},
			{0.999512,-0.663086,1.18826}
		};
	};

	class Land_Kiosk_papers_F: Medical
	{
		positions[] =
		{
			{2.4043,0.992676,-1.88375},
			{0.107422,2.95166,-1.88375},
			{-2.89355,2.74219,-1.88375},
			{0.75,-1.15039,-1.88375},
			{-0.555664,-1.44238,-1.9455},
			{-0.490234,0.625,-1.88375}
		};
	};

	class Land_i_Shop_02_b_pink_F: Shop
	{
		positions[] =
		{
			{-0.407227,-2.96069,-2.56905},
			{-0.236328,0.816162,-2.49007},
			{-4.13184,3.53052,1.28056},
			{-2.26074,-2.20215,1.49342},
			{-0.335938,1.06055,1.75957},
			{-4.58691,1.34375,-2.56905},
			{-2.11328,3.70923,-2.56905},
			{-3.95996,-2.94556,-2.50636}
		};
	};

	class Land_i_House_Big_01_b_yellow_F: CivillianUpperClass
	{
		positions[] =
		{
			{4.25684,5.56006,-2.45829},
			{-2.6416,5.13452,-2.38513},
			{2.05566,0.522461,-2.42254},
			{3.28223,-6.3125,-2.58747},
			{3.92773,2.78198,-0.901627},
			{-2.06641,1.77368,0.9207},
			{1.98145,-5.20679,1.08328},
			{-1.6709,6.29736,0.9207},
			{3.27637,5.03491,0.9207}
		};
	};

	class Land_i_Stone_HouseSmall_V3_F: Military
	{
		positions[] =
		{
			{-7.59619,2.77051,-0.612122},
			{-4.23315,2.10645,-0.435684},
			{6.76221,2.49902,-0.612106}
		};
	};

	class Land_Unfinished_Building_01_F: Industrial
	{
		positions[] =
		{
			{3.05225,0.504883,-1.94948},
			{-2.41553,-0.543945,-2.15053},
			{2.35327,-1.74805,-2.14849},
			{2.92725,2.02344,-2.22353},
			{-3.27734,-1.33301,-2.22353},
			{-3.37573,4.11914,-2.01853},
			{-3.22144,5.50293,1.30147},
			{-1.93921,-2.71582,1.33369},
			{0.160889,0.34375,1.32396},
			{3.86426,-4.68262,1.32396},
			{0.0927734,3.93555,4.59225},
			{-4.26196,4.57422,4.5768},
			{3.86621,0.966797,1.32396},
			{0.691406,5.18848,-1.44352}
		};
	};

	class Land_i_House_Big_02_b_pink_F: Military
	{
		positions[] =
		{
			{3.20972,-5.31445,-2.22397},
			{-3.4248,-5.38184,-2.60397},
			{-2.71802,-1.40039,-2.58397},
			{1.71362,-1.47559,-2.58397},
			{-3.58374,4.0459,-2.58398},
			{2.07104,1.66602,-2.14783},
			{4.07715,-1.15625,-0.833969},
			{-2.27393,-2.32617,0.836044},
			{-2.77417,3.36328,0.836029},
			{3.00513,2.35547,0.82579}
		};
	};

	class Land_CarService_F: VehicleService
	{
		positions[] =
		{
			{-2.15381,-0.613281,-1.13877},
			{-1.88232,3.87891,-0.867912},
			{-3.28027,3.5791,-0.826317},
			{3.26904,4.49219,-1.1675},
			{1.08887,-0.329102,-1.01647}
		};
	};

	class Land_d_House_Big_02_V1_F: Military
	{
		positions[] =
		{
			{-1.76758,5.67383,-2.88783},
			{-5.4668,0.891602,-2.94141},
			{-0.305664,1.73633,-2.30605},
			{-3.41211,-2.63477,-2.80705},
			{2.54492,-3.53467,-1.1014},
			{2.39063,-1.30664,-0.973343},
			{-5.24805,-4.84863,0.499947},
			{-2.33398,2.89844,0.568573}
		};
	};

	class Land_i_House_Big_01_b_whiteblue_F: VehicleService
	{
		positions[] =
		{
			{-3.67969,-6.67725,-2.33623},
			{-3.34863,-1.04785,-2.58839},
			{3.05664,-5.19824,-2.41165},
			{-0.392578,1.02344,-2.50217},
			{-3.52197,6.52246,-2.67146},
			{1.47803,4.76123,-2.22246},
			{3.77686,2.2168,-0.888336},
			{-3.14697,-2.43799,0.930801},
			{2.57031,-5.53516,1.1859},
			{-2.72949,6.21289,0.9207},
			{2.86719,-0.824219,1.83864}
		};
	};

	class Land_Chapel_V1_F: Military
	{
		positions[] =
		{
			{-6.40869,2.83008,-2.74992},
			{-6.86768,-1.20508,-2.54269},
			{-1.61523,-1.00586,-1.77493},
			{-0.51416,-0.882813,-1.77493},
			{0.810059,-1.48633,-1.77493},
			{2.16992,-1.26953,-1.77493},
			{3.71631,-2.89063,-2.79146},
			{6.52148,-0.286133,-1.63493},
			{2.21484,1.22363,-1.77493},
			{1.05273,1.56934,-1.77493},
			{-0.222656,1.5166,-1.77493},
			{-3.26025,-2.93164,-2.56151},
			{7.92529,-0.0429688,-2.60152},
			{5.6001,3.02148,-2.60152},
			{5.97705,-2.68945,-2.60152},
			{-0.963379,1.61523,-1.77493}
		};
	};

	class Land_Slum_02_F: Military
	{
		positions[] =
		{
			{-3.50195,0.736328,0.269608},
			{0.850098,3.11426,0.272568},
			{-0.369141,-3.9873,0.272568}
		};
	};

	class Land_Church_01_V2_F: Military
	{
		positions[] =
		{
			{-5.2251,-2.56982,-5.71977},
			{-4.21387,1.92334,-5.35201},
			{-5.02539,5.84961,-5.41371}
		};
	};

	class Land_FuelStation_01_shop_F: Shop
	{
		positions[] =
		{
			{-4.22656,-4.30078,-1.82666},
			{-4.50684,-1.32349,-0.87204},
			{-2.97168,-1.38916,-0.87204},
			{1.2793,-2.55908,-1.91301},
			{-3.97559,0.125,-1.91301},
			{-0.383789,-4.08765,-1.91301}
		};
	};

	class Land_FuelStation_01_pump_malevil_F: VehicleService
	{
		positions[] =
		{
			{1.27539,-0.128174,-1.19576},
			{-4.45605,0.138672,-1.19576},
			{-5.24609,-8.41675,-1.2493},
			{-1.18164,-8.91626,-1.12556},
			{1.875,-17.5647,-1.17284},
			{-8.06738,-17.2344,-0.984558}
		};
	};

	class Land_Barn_01_grey_F: Military
	{
		positions[] =
		{
			{-7.28467,-3.37793,-0.676971},
			{-6.77344,3.86719,-0.720825},
			{-2.94531,2.64746,-0.713486},
			{-0.150879,3.1748,-0.716583},
			{-2.41455,-2.80957,-0.68042},
			{1.53418,-2.86523,-0.680084},
			{4.77539,-3.24707,-0.677765},
			{7.79102,-3.50391,-0.676208},
			{7.39453,2.66895,-0.713608}
		};
	};

	class Land_WaterTower_01_F: Medical
	{
		positions[] =
		{
			{1.70581,-1.50977,-4.11716},
			{1.68262,1.57715,-4.12267},
			{1.29834,2.79102,-3.12369},
			{-0.20874,2.30469,-2.95433}
		};
	};

	class Land_FuelStation_Feed_F: VehicleService
	{
		positions[] =
		{
			{0.588135,0,-0.646824},
			{-5.2876,0.69043,-0.302906},
			{-1.20605,6.7832,-0.23978},
			{-0.769531,9.68848,-0.301281},
			{-5.22583,9.81738,-0.627644}
		};
	};

	class Land_Supermarket_01_malden_F: Shop
	{
		positions[] =
		{
			{-1.3158,-10.8584,-1.44995},
			{2.16736,-11.1338,-1.44992},
			{5.56958,-11.0796,-1.44992},
			{5.61682,-5.68604,-0.400055},
			{2.1416,-4.5625,-0.180359},
			{-1.44934,-5.02441,-0.351166},
			{-0.956543,-7.76953,-0.419937},
			{-3.41919,-7.63184,-0.57428},
			{-3.40637,-8.28369,-0.582642},
			{-4.5282,-0.930176,-0.650787},
			{-4.31396,0.806641,-0.529388},
			{-3.75781,2.47607,-0.0397797},
			{-2.0083,2.47803,-0.143402},
			{0.827026,2.48193,-0.132278},
			{5.6167,1.12109,-0.119797},
			{3.68115,-1.21875,-1.44992},
			{2.14148,0.0878906,-0.753891},
			{5.61658,-2.94922,-0.318512},
			{6.3186,-8.1582,-0.416153}
		};
	};

	class Land_fs_feed_F: VehicleService
	{
		positions[] =
		{
			{-0.17749,0.54834,-0.452499},
			{2.95325,0.27002,-0.644394},
			{12.3656,-6.08008,-0.370972},
			{14.8219,-10.8159,-0.213318},
			{12.425,-14.1914,-0.105576},
			{16.2188,-14.8628,-0.174911},
			{5.25183,-14.376,-0.395874}
		};
	};

	class Land_i_Shed_Ind_F: VehicleService
	{
		positions[] =
		{
			{13.042,-2.12109,-1.34579},
			{14.0908,6.53296,-1.0943},
			{-0.365234,2.29102,-1.24792},
			{-0.59668,6.56299,-0.998718},
			{-7.4043,7.698,-1.17245},
			{-7.33496,4.53296,-1.04129},
			{-8.2959,-0.349121,-1.6293},
			{-5.23633,-1.19043,-1.43909}
		};
	};


	class Land_Lighthouse_small_F: Military
	{
		positions[] =
		{
			{-2.47949,-0.0124512,-3.24663},
			{2.58691,1.65869,-3.25089},
			{0.797852,-1.77637,-3.12854}
		};
	};
};
class CfgExileLootServer
{
	class LootTables
	{
class CfgExileLoot
{
	class LootTables
	{
		/*
			Percental Item Group Spawn Chances of CivillianLowerClass:

			Restraints        = 0.60%
			PistolAttachments = 1.80%
			ShotgunAmmo       = 1.80%
			SMGAmmo           = 1.80%
			SMGAttachments    = 1.80%
			Shotguns          = 4.79%
			SMG               = 4.19%
			CivilianVests     = 2.99%
			PistolAmmo        = 2.99%
			Pistols           = 4.79%
			Chemlights        = 5.99%
			CivilianItems     = 5.99%
			Drinks            = 5.99%
			RoadFlares        = 5.99%
			CivilianBackpacks = 6.59%
			CivilianClothing  = 11.98%
			CivilianHeadgear  = 11.98%
			Food              = 8.98%
			Rifles            = 8.98%
		*/
		CivillianLowerClass[] = {"ShotgunAmmo", "CivilianBackpacks", "Chemlights", "CivilianHeadgear", "Pistols", "Rifles", "Food", "CivilianHeadgear", "Chemlights", "Drinks", "Drinks", "CivilianVests", "Food", "RoadFlares", "CivilianClothing", "Pistols", "Rifles", "CivilianHeadgear", "Rifles", "Drinks", "CivilianHeadgear", "CivilianClothing", "Pistols", "CivilianHeadgear", "Food", "CivilianVests", "PistolAttachments", "Shotguns", "CivilianClothing", "CivilianVests", "ShotgunAmmo", "CivilianHeadgear", "SMGAttachments", "CivilianClothing", "Shotguns", "RoadFlares", "CivilianBackpacks", "CivilianBackpacks", "CivilianVests", "Rifles", "Rifles", "CivilianItems", "Pistols", "SMG", "RoadFlares", "SMG", "Rifles", "CivilianClothing", "Chemlights", "Shotguns", "CivilianItems", "CivilianHeadgear", "Food", "CivilianVests", "CivilianClothing", "SMGAttachments", "Drinks", "Pistols", "CivilianHeadgear", "CivilianHeadgear", "CivilianItems", "CivilianBackpacks", "CivilianClothing", "Chemlights", "Restraints", "CivilianItems", "Pistols", "Rifles", "SMGAttachments", "Shotguns", "CivilianHeadgear", "SMG", "Food", "CivilianBackpacks", "CivilianHeadgear", "Food", "CivilianBackpacks", "CivilianHeadgear", "CivilianClothing", "CivilianClothing", "CivilianItems", "SMGAmmo", "Chemlights", "CivilianBackpacks", "Food", "CivilianClothing", "CivilianClothing", "CivilianClothing", "PistolAmmo", "Chemlights", "PistolAttachments", "Rifles", "SMG", "CivilianItems", "Chemlights", "CivilianClothing", "Chemlights", "RoadFlares", "CivilianClothing", "PistolAmmo", "CivilianBackpacks", "Shotguns", "CivilianClothing", "CivilianItems", "Food", "Shotguns", "CivilianHeadgear", "Pistols", "CivilianItems", "SMG", "CivilianBackpacks", "RoadFlares", "CivilianClothing", "SMGAmmo", "ShotgunAmmo", "Chemlights", "PistolAmmo", "Pistols", "Drinks", "Food", "PistolAmmo", "CivilianHeadgear", "Rifles", "CivilianItems", "CivilianClothing", "CivilianHeadgear", "CivilianItems", "CivilianBackpacks", "RoadFlares", "CivilianHeadgear", "Drinks", "Food", "Rifles", "CivilianBackpacks", "Drinks", "CivilianClothing", "Drinks", "CivilianHeadgear", "CivilianClothing", "RoadFlares", "RoadFlares", "Rifles", "Food", "Food", "Rifles", "CivilianHeadgear", "SMG", "Rifles", "Chemlights", "Shotguns", "RoadFlares", "Shotguns", "Food", "PistolAttachments", "SMGAmmo", "Drinks", "Rifles", "CivilianHeadgear", "Rifles", "RoadFlares", "CivilianHeadgear", "Drinks", "Food", "SMG", "PistolAmmo", "Food", "CivilianClothing"};

		/*
			Percental Item Group Spawn Chances of CivillianUpperClass:

			Restraints        = 0.54%
			PistolAttachments = 1.63%
			RifleAmmo         = 1.63%
			RifleAttachments  = 1.63%
			ShotgunAmmo       = 1.63%
			SMGAmmo           = 1.63%
			SMGAttachments    = 1.63%
			Shotguns          = 4.35%
			SMG               = 4.35%
			CivilianVests     = 2.72%
			PistolAmmo        = 2.72%
			Pistols           = 4.35%
			Chemlights        = 5.43%
			CivilianItems     = 5.43%
			Drinks            = 5.43%
			RoadFlares        = 5.43%
			CivilianBackpacks = 5.98%
			CivilianClothing  = 10.87%
			CivilianHeadgear  = 10.87%
			Food              = 8.15%
			Rifles            = 13.59%
		*/
		CivillianUpperClass[] = {"Rifles", "Chemlights", "Chemlights", "Pistols", "CivilianHeadgear", "Rifles", "Rifles", "Food", "Shotguns", "SMGAmmo", "Rifles", "Food", "CivilianVests", "ShotgunAmmo", "CivilianItems", "Pistols", "CivilianHeadgear", "Drinks", "CivilianItems", "RifleAmmo", "CivilianBackpacks", "Food", "Pistols", "Drinks", "SMG", "PistolAttachments", "CivilianBackpacks", "Drinks", "CivilianHeadgear", "CivilianVests", "CivilianClothing", "Pistols", "CivilianHeadgear", "Rifles", "PistolAmmo", "Rifles", "CivilianClothing", "Chemlights", "SMG", "Rifles", "Shotguns", "CivilianItems", "Rifles", "Chemlights", "SMGAttachments", "Rifles", "Chemlights", "RoadFlares", "SMG", "Food", "Food", "CivilianBackpacks", "SMG", "CivilianBackpacks", "RoadFlares", "CivilianClothing", "Rifles", "Food", "CivilianClothing", "CivilianHeadgear", "RoadFlares", "SMG", "Drinks", "SMG", "Pistols", "Rifles", "CivilianHeadgear", "PistolAttachments", "CivilianClothing", "CivilianClothing", "Chemlights", "Chemlights", "CivilianItems", "CivilianClothing", "Rifles", "RoadFlares", "Shotguns", "Rifles", "PistolAmmo", "CivilianClothing", "PistolAmmo", "RoadFlares", "CivilianHeadgear", "CivilianBackpacks", "Restraints", "Rifles", "CivilianHeadgear", "Pistols", "Rifles", "RoadFlares", "RoadFlares", "CivilianHeadgear", "Rifles", "CivilianItems", "RifleAmmo", "CivilianHeadgear", "Rifles", "Rifles", "Chemlights", "CivilianBackpacks", "CivilianClothing", "PistolAmmo", "CivilianHeadgear", "Chemlights", "CivilianHeadgear", "CivilianHeadgear", "Rifles", "Drinks", "PistolAmmo", "Drinks", "Drinks", "CivilianBackpacks", "CivilianClothing", "SMGAttachments", "CivilianHeadgear", "CivilianHeadgear", "Food", "PistolAttachments", "Shotguns", "CivilianVests", "Drinks", "CivilianItems", "Chemlights", "CivilianHeadgear", "CivilianClothing", "CivilianHeadgear", "CivilianHeadgear", "CivilianClothing", "CivilianVests", "Food", "RoadFlares", "RifleAttachments", "SMGAmmo", "Food", "Shotguns", "CivilianBackpacks", "CivilianClothing", "SMGAmmo", "CivilianClothing", "Shotguns", "RifleAttachments", "CivilianClothing", "ShotgunAmmo", "Food", "ShotgunAmmo", "CivilianBackpacks", "SMG", "Rifles", "CivilianBackpacks", "Pistols", "Shotguns", "CivilianItems", "CivilianClothing", "CivilianClothing", "CivilianItems", "CivilianClothing", "Shotguns", "Food", "CivilianClothing", "Rifles", "Pistols", "Food", "RoadFlares", "Drinks", "RifleAmmo", "CivilianHeadgear", "CivilianBackpacks", "SMG", "Rifles", "CivilianHeadgear", "CivilianItems", "CivilianItems", "Drinks", "Rifles", "Rifles", "SMGAttachments", "Rifles", "CivilianClothing", "RifleAttachments", "RoadFlares", "Food", "CivilianVests", "Food", "Food"};

		/*
			Percental Item Group Spawn Chances of Shop:

			CivilianClothing  = 0.85%
			CivilianVests     = 0.85%
			PistolAttachments = 0.85%
			ShotgunAmmo       = 0.85%
			SMGAmmo           = 0.85%
			SMGAttachments    = 0.85%
			PistolAmmo        = 1.71%
			CivilianHeadgear  = 2.56%
			IndustrialItems   = 2.56%
			MedicalItems      = 2.56%
			Restraints        = 2.56%
			Shotguns          = 6.84%
			SmokeGrenades     = 3.42%
			Chemlights        = 4.27%
			CivilianBackpacks = 4.27%
			RoadFlares        = 4.27%
			SMG               = 6.84%
			CivilianItems     = 5.98%
			Pistols           = 8.55%
			Drinks            = 12.82%
			Food              = 12.82%
			Rifles            = 12.82%
		*/
		Shop[] = {"Drinks", "Pistols", "Drinks", "Shotguns", "Chemlights", "RoadFlares", "SMGAmmo", "CivilianBackpacks", "SMG", "CivilianItems", "Shotguns", "Food", "Food", "Drinks", "Drinks", "Rifles", "CivilianBackpacks", "Food", "Rifles", "Food", "CivilianBackpacks", "Food", "RoadFlares", "PistolAttachments", "Rifles", "SMG", "SMGAttachments", "SMG", "SMG", "Rifles", "Rifles", "CivilianItems", "Drinks", "Pistols", "RoadFlares", "Chemlights", "Rifles", "CivilianItems", "Drinks", "RoadFlares", "CivilianBackpacks", "Food", "Food", "Pistols", "Pistols", "Restraints", "Food", "IndustrialItems", "Pistols", "Food", "Drinks", "Food", "Drinks", "MedicalItems", "CivilianClothing", "Food", "IndustrialItems", "SmokeGrenades", "Pistols", "ShotgunAmmo", "Drinks", "Pistols", "Rifles", "SmokeGrenades", "CivilianVests", "Food", "CivilianHeadgear", "SMG", "Pistols", "Shotguns", "CivilianHeadgear", "CivilianItems", "Chemlights", "Drinks", "MedicalItems", "Food", "Drinks", "Rifles", "SMG", "Rifles", "PistolAmmo", "Rifles", "Rifles", "SMG", "SMG", "Shotguns", "RoadFlares", "Shotguns", "SmokeGrenades", "CivilianHeadgear", "Chemlights", "Rifles", "IndustrialItems", "MedicalItems", "Drinks", "Restraints", "Food", "Drinks", "SmokeGrenades", "Rifles", "CivilianBackpacks", "Shotguns", "CivilianItems", "Drinks", "Shotguns", "CivilianItems", "Rifles", "Drinks", "CivilianItems", "Chemlights", "Pistols", "Pistols", "Restraints", "PistolAmmo", "Shotguns", "Rifles", "Food"};

		/*
			Percental Item Group Spawn Chances of Industrial:

			Restraints      = 5.88%
			RoadFlares      = 17.65%
			Vehicle         = 29.41%
			IndustrialItems = 47.06%
		*/
		Industrial[] = {"IndustrialItems", "IndustrialItems", "RoadFlares", "IndustrialItems", "IndustrialItems", "RoadFlares", "IndustrialItems", "Vehicle", "Restraints", "IndustrialItems", "Vehicle", "IndustrialItems", "Vehicle", "IndustrialItems", "RoadFlares", "Vehicle", "Vehicle"};

		/*
			Percental Item Group Spawn Chances of Factories:

			Electronics     = 16.67%
			IndustrialItems = 83.33%
		*/
		Factories[] = {"Electronics", "IndustrialItems", "IndustrialItems", "IndustrialItems", "IndustrialItems", "IndustrialItems"};

		/*
			Percental Item Group Spawn Chances of VehicleService:

			Restraints      = 5.88%
			RoadFlares      = 17.65%
			IndustrialItems = 29.41%
			Vehicle         = 47.06%
		*/
		VehicleService[] = {"Vehicle", "Vehicle", "RoadFlares", "IndustrialItems", "Vehicle", "Restraints", "Vehicle", "Vehicle", "IndustrialItems", "RoadFlares", "RoadFlares", "IndustrialItems", "Vehicle", "Vehicle", "IndustrialItems", "Vehicle", "IndustrialItems"};

		/*
			Percental Item Group Spawn Chances of Military:

			DLCGhillies       = 0.90%
			Ghillies          = 0.90%
			Rebreathers       = 0.90%
			Bipods            = 1.80%
			DLCAmmo           = 1.80%
			DLCOptics         = 1.80%
			DLCSupressor      = 1.80%
			LMGAmmo           = 1.80%
			MedicalItems      = 1.80%
			Restraints        = 1.80%
			SniperAmmo        = 1.80%
			SniperAttachments = 1.80%
			DLCRifles         = 5.41%
			DLCVests          = 2.70%
			GuerillaHeadgear  = 2.70%
			GuerillaVests     = 2.70%
			HandGrenades      = 2.70%
			HEGrenades        = 2.70%
			MilitaryBackpacks = 2.70%
			MilitaryHeadgear  = 2.70%
			MilitaryVests     = 2.70%
			RifleAmmo         = 2.70%
			RifleAttachments  = 2.70%
			SmokeGrenades     = 2.70%
			Snipers           = 5.41%
			UGLFlares         = 2.70%
			UGLSmokes         = 2.70%
			CivilianItems     = 3.60%
			GuerillaBackpacks = 3.60%
			GuerillaItems     = 3.60%
			LMG               = 5.41%
			Explosives        = 4.50%
			GuerillaClothing  = 4.50%
			MilitaryClothing  = 4.50%
			Rifles            = 5.41%
		*/
		Military[] = {"GuerillaHeadgear", "MilitaryHeadgear", "LMGAmmo", "DLCOptics", "MilitaryClothing", "DLCGhillies", "SniperAmmo", "DLCRifles", "MilitaryBackpacks", "HandGrenades", "CivilianItems", "GuerillaItems", "SniperAttachments", "DLCRifles", "RifleAttachments", "Explosives", "MilitaryBackpacks", "MilitaryBackpacks", "DLCVests", "GuerillaHeadgear", "GuerillaItems", "GuerillaBackpacks", "DLCSupressor", "MilitaryClothing", "SmokeGrenades", "GuerillaBackpacks", "GuerillaClothing", "GuerillaBackpacks", "HandGrenades", "MedicalItems", "Snipers", "Rifles", "Snipers", "DLCVests", "Explosives", "LMG", "Snipers", "GuerillaVests", "UGLFlares", "GuerillaItems", "LMGAmmo", "SmokeGrenades", "Explosives", "UGLSmokes", "LMG", "Rifles", "GuerillaHeadgear", "LMG", "SniperAttachments", "Explosives", "Bipods", "UGLFlares", "DLCRifles", "MilitaryClothing", "LMG", "MilitaryVests", "RifleAttachments", "DLCSupressor", "DLCRifles", "Rifles", "MilitaryClothing", "LMG", "CivilianItems", "DLCOptics", "GuerillaItems", "HEGrenades", "Restraints", "Rebreathers", "HEGrenades", "DLCAmmo", "Rifles", "Snipers", "SniperAmmo", "DLCAmmo", "RifleAmmo", "DLCRifles", "LMG", "DLCVests", "MilitaryVests", "Restraints", "Snipers", "MedicalItems", "Explosives", "HandGrenades", "MilitaryHeadgear", "RifleAmmo", "Rifles", "GuerillaClothing", "GuerillaBackpacks", "UGLSmokes", "UGLSmokes", "Rifles", "CivilianItems", "Snipers", "Bipods", "GuerillaClothing", "RifleAmmo", "GuerillaVests", "MilitaryClothing", "MilitaryVests", "DLCRifles", "MilitaryHeadgear", "Ghillies", "GuerillaVests", "SmokeGrenades", "UGLFlares", "HEGrenades", "GuerillaClothing", "GuerillaClothing", "RifleAttachments", "CivilianItems"};

		/*
			Percental Item Group Spawn Chances of Medical:

			MedicalItems = 100.00%
		*/
		Medical[] = {"MedicalItems", "MedicalItems", "MedicalItems", "MedicalItems", "MedicalItems", "MedicalItems", "MedicalItems"};

		/*
			Percental Item Group Spawn Chances of Tourist:

			DLCAmmo           = 2.22%
			DLCOptics         = 2.22%
			DLCSupressor      = 2.22%
			SniperAmmo        = 2.22%
			SniperAttachments = 2.22%
			CivilianItems     = 4.44%
			Explosives        = 4.44%
			HandGrenades      = 4.44%
			MedicalItems      = 4.44%
			Restraints        = 4.44%
			DLCGhillies       = 6.67%
			Ghillies          = 6.67%
			MilitaryBackpacks = 8.89%
			MilitaryHeadgear  = 8.89%
			DLCRifles         = 17.78%
			Snipers           = 17.78%
		*/
		Tourist[] = {"Ghillies", "Explosives", "Ghillies", "Snipers", "SniperAttachments", "MedicalItems", "HandGrenades", "DLCRifles", "DLCGhillies", "MilitaryBackpacks", "Ghillies", "MilitaryHeadgear", "CivilianItems", "Snipers", "DLCGhillies", "Restraints", "MilitaryBackpacks", "DLCRifles", "HandGrenades", "Snipers", "MilitaryBackpacks", "Snipers", "MilitaryHeadgear", "DLCRifles", "MilitaryHeadgear", "CivilianItems", "DLCOptics", "DLCRifles", "Restraints", "DLCRifles", "Snipers", "Snipers", "SniperAmmo", "Snipers", "MedicalItems", "DLCSupressor", "MilitaryBackpacks", "DLCRifles", "DLCRifles", "DLCGhillies", "Explosives", "Snipers", "MilitaryHeadgear", "DLCAmmo", "DLCRifles"};

		/*
			Percental Item Group Spawn Chances of Radiation:

			DLCAmmo           = 2.27%
			DLCOptics         = 2.27%
			DLCSupressor      = 2.27%
			SniperAmmo        = 2.27%
			SniperAttachments = 2.27%
			EpicWeapons       = 4.55%
			HandGrenades      = 4.55%
			MedicalItems      = 4.55%
			Restraints        = 4.55%
			DLCGhillies       = 6.82%
			Ghillies          = 6.82%
			Explosives        = 11.36%
			MilitaryBackpacks = 11.36%
			MilitaryHeadgear  = 11.36%
			DLCRifles         = 11.36%
			Snipers           = 11.36%
		*/
		Radiation[] = {"DLCRifles", "HandGrenades", "MedicalItems", "DLCGhillies", "SniperAmmo", "Snipers", "MilitaryHeadgear", "DLCAmmo", "Snipers", "MilitaryBackpacks", "DLCGhillies", "DLCSupressor", "MilitaryHeadgear", "EpicWeapons", "Snipers", "Ghillies", "DLCOptics", "Ghillies", "MilitaryHeadgear", "MilitaryHeadgear", "DLCRifles", "MedicalItems", "HandGrenades", "SniperAttachments", "Snipers", "Explosives", "Snipers", "MilitaryBackpacks", "Explosives", "Explosives", "Ghillies", "MilitaryBackpacks", "EpicWeapons", "Explosives", "MilitaryBackpacks", "Explosives", "DLCRifles", "DLCRifles", "Restraints", "Restraints", "DLCRifles", "DLCGhillies", "MilitaryBackpacks", "MilitaryHeadgear"};
	};

	class ItemGroups
	{

		/*
			Percental Item Spawn Chances of Food:

			Exile_Item_CookingPot        = 2.08%
			Exile_Item_CanOpener         = 3.47%
			Exile_Item_Matches           = 3.47%
			Exile_Item_EMRE              = 2.08%
			Exile_Item_GloriousKnakworst = 4.17%
			Exile_Item_Surstromming      = 4.86%
			Exile_Item_SausageGravy      = 4.86%
			Exile_Item_ChristmasTinner   = 4.86%
			Exile_Item_MacasCheese       = 4.86%
			Exile_Item_BBQSandwich       = 4.86%
			Exile_Item_CatFood           = 4.86%
			Exile_Item_Dogfood           = 4.86%
			Exile_Item_BeefParts         = 4.86%
			Exile_Item_Cheathas          = 4.86%
			Exile_Item_DsNuts            = 4.86%
			Exile_Item_Noodles           = 4.86%
			Exile_Item_CockONut          = 5.56%
			Exile_Item_SeedAstics        = 5.56%
			Exile_Item_Raisins           = 6.25%
			Exile_Item_Moobar            = 6.25%
			Exile_Item_InstantCoffee     = 7.64%
		*/
		Food[] = {"Exile_Item_Raisins", "Exile_Item_InstantCoffee", "Exile_Item_Surstromming", "Exile_Item_Matches", "Exile_Item_BBQSandwich", "Exile_Item_Raisins", "Exile_Item_DsNuts", "Exile_Item_BeefParts", "Exile_Item_Moobar", "Exile_Item_SeedAstics", "Exile_Item_SeedAstics", "Exile_Item_Moobar", "Exile_Item_BeefParts", "Exile_Item_MacasCheese", "Exile_Item_InstantCoffee", "Exile_Item_Raisins", "Exile_Item_Matches", "Exile_Item_CanOpener", "Exile_Item_Surstromming", "Exile_Item_GloriousKnakworst", "Exile_Item_ChristmasTinner", "Exile_Item_CockONut", "Exile_Item_CatFood", "Exile_Item_CockONut", "Exile_Item_CanOpener", "Exile_Item_Dogfood", "Exile_Item_CanOpener", "Exile_Item_Cheathas", "Exile_Item_Cheathas", "Exile_Item_BeefParts", "Exile_Item_SeedAstics", "Exile_Item_ChristmasTinner", "Exile_Item_BeefParts", "Exile_Item_BBQSandwich", "Exile_Item_CanOpener", "Exile_Item_CookingPot", "Exile_Item_CatFood", "Exile_Item_SeedAstics", "Exile_Item_Noodles", "Exile_Item_CatFood", "Exile_Item_SausageGravy", "Exile_Item_CatFood", "Exile_Item_Cheathas", "Exile_Item_BBQSandwich", "Exile_Item_MacasCheese", "Exile_Item_Matches", "Exile_Item_ChristmasTinner", "Exile_Item_BBQSandwich", "Exile_Item_Noodles", "Exile_Item_Noodles", "Exile_Item_Moobar", "Exile_Item_Cheathas", "Exile_Item_ChristmasTinner", "Exile_Item_CanOpener", "Exile_Item_BBQSandwich", "Exile_Item_DsNuts", "Exile_Item_Dogfood", "Exile_Item_SeedAstics", "Exile_Item_SeedAstics", "Exile_Item_CatFood", "Exile_Item_CatFood", "Exile_Item_CookingPot", "Exile_Item_Raisins", "Exile_Item_Raisins", "Exile_Item_Moobar", "Exile_Item_Raisins", "Exile_Item_Noodles", "Exile_Item_EMRE", "Exile_Item_Moobar", "Exile_Item_GloriousKnakworst", "Exile_Item_Dogfood", "Exile_Item_Matches", "Exile_Item_ChristmasTinner", "Exile_Item_Noodles", "Exile_Item_Dogfood", "Exile_Item_SausageGravy", "Exile_Item_SeedAstics", "Exile_Item_Surstromming", "Exile_Item_SausageGravy", "Exile_Item_MacasCheese", "Exile_Item_DsNuts", "Exile_Item_CockONut", "Exile_Item_DsNuts", "Exile_Item_CatFood", "Exile_Item_InstantCoffee", "Exile_Item_CockONut", "Exile_Item_CockONut", "Exile_Item_DsNuts", "Exile_Item_InstantCoffee", "Exile_Item_InstantCoffee", "Exile_Item_InstantCoffee", "Exile_Item_SausageGravy", "Exile_Item_BeefParts", "Exile_Item_Cheathas", "Exile_Item_Surstromming", "Exile_Item_Dogfood", "Exile_Item_MacasCheese", "Exile_Item_Moobar", "Exile_Item_GloriousKnakworst", "Exile_Item_Dogfood", "Exile_Item_Cheathas", "Exile_Item_GloriousKnakworst", "Exile_Item_ChristmasTinner", "Exile_Item_Noodles", "Exile_Item_SausageGravy", "Exile_Item_Raisins", "Exile_Item_Moobar", "Exile_Item_EMRE", "Exile_Item_MacasCheese", "Exile_Item_InstantCoffee", "Exile_Item_InstantCoffee", "Exile_Item_Dogfood", "Exile_Item_EMRE", "Exile_Item_Matches", "Exile_Item_Noodles", "Exile_Item_SausageGravy", "Exile_Item_DsNuts", "Exile_Item_CookingPot", "Exile_Item_InstantCoffee", "Exile_Item_Cheathas", "Exile_Item_SeedAstics", "Exile_Item_GloriousKnakworst", "Exile_Item_MacasCheese", "Exile_Item_CockONut", "Exile_Item_SausageGravy", "Exile_Item_Surstromming", "Exile_Item_Raisins", "Exile_Item_Moobar", "Exile_Item_InstantCoffee", "Exile_Item_MacasCheese", "Exile_Item_Surstromming", "Exile_Item_ChristmasTinner", "Exile_Item_Raisins", "Exile_Item_BeefParts", "Exile_Item_DsNuts", "Exile_Item_Surstromming", "Exile_Item_BBQSandwich", "Exile_Item_GloriousKnakworst", "Exile_Item_CockONut", "Exile_Item_InstantCoffee", "Exile_Item_Moobar", "Exile_Item_BBQSandwich", "Exile_Item_BeefParts", "Exile_Item_CockONut"};

		/*
			Percental Item Spawn Chances of Drinks:

			Exile_Item_Beer                    = 7.14%
			Exile_Item_EnergyDrink             = 7.14%
			Exile_Item_PlasticBottleFreshWater = 7.14%
			Exile_Item_PowerDrink              = 7.14%
			Exile_Item_MountainDupe            = 14.29%
			Exile_Item_ChocolateMilk           = 21.43%
			Exile_Item_PlasticBottleDirtyWater = 35.71%
		*/
		Drinks[] = {"Exile_Item_MountainDupe", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_ChocolateMilk", "Exile_Item_ChocolateMilk", "Exile_Item_EnergyDrink", "Exile_Item_PlasticBottleFreshWater", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_MountainDupe", "Exile_Item_ChocolateMilk", "Exile_Item_Beer", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_PowerDrink"};

		/*
			Percental Item Spawn Chances of Pistols:

			Exile_Weapon_Colt1911   = 6.67%
			Exile_Weapon_Makarov    = 6.67%
			Exile_Weapon_Taurus     = 6.67%
			Exile_Weapon_TaurusGold = 6.67%
			hgun_P07_khk_F          = 6.67%
			hgun_Pistol_01_F        = 6.67%
			hgun_Pistol_heavy_01_F  = 6.67%
			hgun_Pistol_heavy_02_F  = 6.67%
			hgun_Pistol_Signal_F    = 6.67%
			hgun_ACPC2_F            = 13.33%
			hgun_P07_F              = 13.33%
			hgun_Rook40_F           = 13.33%
		*/
		Pistols[] = {"Exile_Weapon_Makarov", "hgun_Pistol_heavy_02_F", "Exile_Weapon_TaurusGold", "hgun_Rook40_F", "hgun_Pistol_Signal_F", "hgun_P07_khk_F", "hgun_Pistol_heavy_01_F", "Exile_Weapon_Taurus", "hgun_ACPC2_F", "Exile_Weapon_Colt1911", "hgun_ACPC2_F", "hgun_Pistol_01_F", "hgun_Rook40_F", "hgun_P07_F", "hgun_P07_F"};

		/*
			Percental Item Spawn Chances of PistolAmmo:

			6Rnd_GreenSignal_F        = 3.03%
			6Rnd_RedSignal_F          = 3.03%
			16Rnd_9x21_Mag            = 3.03%
			6Rnd_45ACP_Cylinder       = 6.06%
			10Rnd_9x21_Mag            = 12.12%
			11Rnd_45ACP_Mag           = 12.12%
			30Rnd_9x21_Mag            = 12.12%
			9Rnd_45ACP_Mag            = 12.12%
			Exile_Magazine_6Rnd_45ACP = 12.12%
			Exile_Magazine_7Rnd_45ACP = 12.12%
			Exile_Magazine_8Rnd_9x18  = 12.12%
		*/
		PistolAmmo[] = {"Exile_Magazine_6Rnd_45ACP", "Exile_Magazine_8Rnd_9x18", "30Rnd_9x21_Mag", "11Rnd_45ACP_Mag", "30Rnd_9x21_Mag", "10Rnd_9x21_Mag", "6Rnd_RedSignal_F", "6Rnd_45ACP_Cylinder", "11Rnd_45ACP_Mag", "Exile_Magazine_8Rnd_9x18", "9Rnd_45ACP_Mag", "30Rnd_9x21_Mag", "10Rnd_9x21_Mag", "Exile_Magazine_8Rnd_9x18", "Exile_Magazine_7Rnd_45ACP", "6Rnd_GreenSignal_F", "30Rnd_9x21_Mag", "16Rnd_9x21_Mag", "11Rnd_45ACP_Mag", "Exile_Magazine_7Rnd_45ACP", "11Rnd_45ACP_Mag", "Exile_Magazine_6Rnd_45ACP", "Exile_Magazine_8Rnd_9x18", "9Rnd_45ACP_Mag", "Exile_Magazine_7Rnd_45ACP", "9Rnd_45ACP_Mag", "Exile_Magazine_7Rnd_45ACP", "10Rnd_9x21_Mag", "9Rnd_45ACP_Mag", "Exile_Magazine_6Rnd_45ACP", "6Rnd_45ACP_Cylinder", "10Rnd_9x21_Mag", "Exile_Magazine_6Rnd_45ACP"};

		/*
			Percental Item Spawn Chances of PistolAttachments:

			optic_MRD       = 16.67%
			optic_Yorris    = 16.67%
			muzzle_snds_acp = 33.33%
			muzzle_snds_L   = 33.33%
		*/
		PistolAttachments[] = {"muzzle_snds_L", "muzzle_snds_L", "muzzle_snds_acp", "muzzle_snds_acp", "optic_MRD", "optic_Yorris"};

		/*
			Percental Item Spawn Chances of Shotguns:

			Exile_Weapon_M1014 = 100.00%
		*/
		Shotguns[] = {"Exile_Weapon_M1014"};

		/*
			Percental Item Spawn Chances of ShotgunAmmo:

			Exile_Magazine_8Rnd_74Slug = 100.00%
		*/
		ShotgunAmmo[] = {"Exile_Magazine_8Rnd_74Slug"};

		/*
			Percental Item Spawn Chances of SMG:

			SMG_01_F       = 25.00%
			SMG_02_F       = 25.00%
			SMG_05_F       = 25.00%
			hgun_PDW2000_F = 25.00%
		*/
		SMG[] = {"SMG_02_F", "hgun_PDW2000_F", "SMG_01_F", "SMG_05_F"};

		/*
			Percental Item Spawn Chances of SMGAmmo:

			30Rnd_45ACP_Mag_SMG_01              = 16.67%
			30Rnd_45ACP_Mag_SMG_01_Tracer_Green = 16.67%
			30Rnd_9x21_Mag_SMG_02               = 16.67%
			30Rnd_9x21_Mag_SMG_02_Tracer_Red    = 16.67%
			30Rnd_9x21_Mag_SMG_02_Tracer_Yellow = 16.67%
			30Rnd_9x21_Mag_SMG_02_Tracer_Green  = 16.67%
		*/
		SMGAmmo[] = {"30Rnd_45ACP_Mag_SMG_01_Tracer_Green", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow"};

		/*
			Percental Item Spawn Chances of SMGAttachments:

			optic_Holosight_smg       = 16.67%
			optic_Holosight_smg_blk_F = 16.67%
			optic_ACO_grn_smg         = 16.67%
			optic_Aco_smg             = 16.67%
			optic_ACO_grn             = 16.67%
			optic_Aco                 = 16.67%
		*/
		SMGAttachments[] = {"optic_Aco_smg", "optic_Holosight_smg_blk_F", "optic_ACO_grn", "optic_Aco", "optic_ACO_grn_smg", "optic_Holosight_smg"};

		/*
			Percental Item Spawn Chances of Rifles:

			arifle_Katiba_GL_F       = 0.76%
			arifle_Mk20_GL_F         = 0.76%
			arifle_MX_GL_Black_F     = 0.76%
			arifle_MX_GL_F           = 0.76%
			arifle_MXM_F             = 0.76%
			arifle_TRG21_GL_F        = 0.76%
			Exile_Weapon_AK107_GL    = 0.76%
			Exile_Weapon_AK74_GL     = 0.76%
			arifle_AK12_GL_F         = 1.53%
			arifle_AKM_F             = 1.53%
			arifle_AKM_FL_F          = 1.53%
			arifle_AKS_F             = 1.53%
			arifle_ARX_blk_F         = 1.53%
			arifle_ARX_ghex_F        = 1.53%
			arifle_ARX_hex_F         = 1.53%
			arifle_CTAR_blk_F        = 1.53%
			arifle_CTAR_ghex_F       = 1.53%
			arifle_CTAR_GL_blk_F     = 1.53%
			arifle_CTAR_hex_F        = 1.53%
			arifle_CTARS_blk_F       = 1.53%
			arifle_CTARS_ghex_F      = 1.53%
			arifle_CTARS_hex_F       = 1.53%
			arifle_Katiba_F          = 1.53%
			arifle_Mk20_F            = 1.53%
			arifle_Mk20C_F           = 1.53%
			arifle_MX_Black_F        = 1.53%
			arifle_MX_F              = 1.53%
			arifle_MXC_Black_F       = 1.53%
			arifle_MXC_F             = 1.53%
			arifle_MXM_Black_F       = 1.53%
			arifle_SDAR_F            = 1.53%
			arifle_SPAR_01_blk_F     = 1.53%
			arifle_SPAR_01_GL_blk_F  = 1.53%
			arifle_SPAR_01_GL_khk_F  = 1.53%
			arifle_SPAR_01_GL_snd_F  = 1.53%
			arifle_SPAR_01_khk_F     = 1.53%
			arifle_SPAR_01_snd_F     = 1.53%
			arifle_SPAR_02_blk_F     = 1.53%
			arifle_SPAR_02_khk_F     = 1.53%
			arifle_SPAR_02_snd_F     = 1.53%
			arifle_SPAR_03_blk_F     = 1.53%
			arifle_SPAR_03_khk_F     = 1.53%
			arifle_SPAR_03_snd_F     = 1.53%
			arifle_TRG20_F           = 1.53%
			arifle_TRG21_F           = 1.53%
			Exile_Weapon_AK107       = 1.53%
			Exile_Weapon_AK74        = 1.53%
			Exile_Weapon_DMR         = 1.53%
			arifle_MXM_khk_F         = 2.29%
			Exile_Weapon_AK47        = 2.29%
			Exile_Weapon_AKS_Gold    = 2.29%
			Exile_Weapon_SVD         = 2.29%
			Exile_Weapon_SVDCamo     = 2.29%
			Exile_Weapon_VSSVintorez = 2.29%
			arifle_MX_GL_khk_F       = 2.29%
			arifle_AK12_F            = 2.29%
			Exile_Weapon_CZ550       = 2.29%
			arifle_MX_khk_F          = 2.29%
			arifle_MXC_khk_F         = 2.29%
			Exile_Weapon_LeeEnfield  = 7.63%
		*/
		Rifles[] = {"arifle_CTAR_hex_F", "arifle_SPAR_01_GL_blk_F", "arifle_SPAR_01_khk_F", "arifle_MXC_Black_F", "arifle_ARX_blk_F", "arifle_MX_Black_F", "arifle_MXC_F", "arifle_AK12_F", "Exile_Weapon_SVD", "arifle_MXC_Black_F", "arifle_MX_F", "Exile_Weapon_SVDCamo", "arifle_CTAR_GL_blk_F", "Exile_Weapon_LeeEnfield", "arifle_CTAR_ghex_F", "arifle_AKM_FL_F", "Exile_Weapon_CZ550", "arifle_CTARS_blk_F", "arifle_AKM_F", "arifle_SPAR_03_khk_F", "arifle_CTARS_ghex_F", "arifle_ARX_hex_F", "Exile_Weapon_SVDCamo", "arifle_SPAR_01_GL_snd_F", "arifle_CTAR_blk_F", "Exile_Weapon_AK107", "Exile_Weapon_AKS_Gold", "arifle_CTAR_blk_F", "arifle_MX_GL_Black_F", "Exile_Weapon_SVD", "arifle_CTAR_ghex_F", "Exile_Weapon_AK47", "arifle_SDAR_F", "Exile_Weapon_AK47", "Exile_Weapon_LeeEnfield", "arifle_MX_GL_F", "arifle_TRG21_GL_F", "arifle_ARX_hex_F", "arifle_SPAR_02_khk_F", "Exile_Weapon_AKS_Gold", "Exile_Weapon_CZ550", "arifle_Mk20_F", "Exile_Weapon_VSSVintorez", "Exile_Weapon_VSSVintorez", "arifle_SPAR_03_khk_F", "arifle_SPAR_03_snd_F", "arifle_MX_GL_khk_F", "Exile_Weapon_AK107_GL", "arifle_MX_khk_F", "arifle_Katiba_F", "arifle_MXC_F", "arifle_MX_GL_khk_F", "Exile_Weapon_AK74", "arifle_CTARS_hex_F", "arifle_CTAR_hex_F", "arifle_SPAR_02_snd_F", "arifle_SPAR_02_khk_F", "arifle_SPAR_03_blk_F", "arifle_MXM_khk_F", "Exile_Weapon_AK74", "arifle_MXM_khk_F", "arifle_Mk20C_F", "arifle_MX_Black_F", "arifle_SPAR_01_snd_F", "Exile_Weapon_SVDCamo", "Exile_Weapon_VSSVintorez", "arifle_SPAR_02_snd_F", "arifle_TRG21_F", "Exile_Weapon_LeeEnfield", "arifle_MX_GL_khk_F", "arifle_MX_khk_F", "arifle_Katiba_GL_F", "Exile_Weapon_SVD", "arifle_CTARS_hex_F", "arifle_AK12_F", "arifle_SDAR_F", "Exile_Weapon_AK47", "Exile_Weapon_DMR", "Exile_Weapon_LeeEnfield", "arifle_SPAR_03_blk_F", "arifle_CTARS_ghex_F", "arifle_TRG20_F", "arifle_Mk20_F", "arifle_AK12_F", "arifle_MX_F", "arifle_SPAR_01_khk_F", "arifle_CTAR_GL_blk_F", "Exile_Weapon_LeeEnfield", "arifle_SPAR_01_GL_blk_F", "arifle_Mk20C_F", "Exile_Weapon_LeeEnfield", "Exile_Weapon_AKS_Gold", "arifle_MXM_Black_F", "arifle_MXM_khk_F", "arifle_TRG20_F", "Exile_Weapon_AK74_GL", "arifle_SPAR_01_GL_snd_F", "arifle_MXM_Black_F", "arifle_AKS_F", "arifle_ARX_blk_F", "arifle_AKM_FL_F", "arifle_MX_khk_F", "arifle_AK12_GL_F", "arifle_Mk20_GL_F", "arifle_MXC_khk_F", "arifle_SPAR_01_blk_F", "Exile_Weapon_LeeEnfield", "Exile_Weapon_LeeEnfield", "Exile_Weapon_AK107", "arifle_ARX_ghex_F", "arifle_AKS_F", "arifle_SPAR_01_snd_F", "arifle_CTARS_blk_F", "arifle_SPAR_01_GL_khk_F", "arifle_SPAR_03_snd_F", "arifle_SPAR_01_GL_khk_F", "Exile_Weapon_DMR", "Exile_Weapon_LeeEnfield", "arifle_SPAR_01_blk_F", "arifle_AK12_GL_F", "arifle_MXC_khk_F", "arifle_ARX_ghex_F", "arifle_AKM_F", "arifle_SPAR_02_blk_F", "arifle_MXC_khk_F", "arifle_MXM_F", "arifle_SPAR_02_blk_F", "arifle_Katiba_F", "arifle_TRG21_F", "Exile_Weapon_LeeEnfield", "Exile_Weapon_CZ550"};

		/*
			Percental Item Spawn Chances of RifleAmmo:

			20Rnd_556x45_UW_mag                    = 2.20%
			30Rnd_556x45_Stanag                    = 2.20%
			30Rnd_556x45_Stanag_green              = 2.20%
			30Rnd_556x45_Stanag_red                = 2.20%
			30Rnd_556x45_Stanag_Tracer_Green       = 2.20%
			30Rnd_556x45_Stanag_Tracer_Red         = 2.20%
			30Rnd_556x45_Stanag_Tracer_Yellow      = 2.20%
			30Rnd_65x39_caseless_green             = 2.20%
			30Rnd_65x39_caseless_green_mag_Tracer  = 2.20%
			30Rnd_65x39_caseless_mag               = 2.20%
			30Rnd_65x39_caseless_mag_Tracer        = 2.20%
			Exile_Magazine_10Rnd_303               = 10.99%
			Exile_Magazine_30Rnd_762x39_AK         = 2.20%
			Exile_Magazine_30Rnd_545x39_AK         = 2.20%
			Exile_Magazine_30Rnd_545x39_AK_Green   = 2.20%
			Exile_Magazine_30Rnd_545x39_AK_Red     = 2.20%
			Exile_Magazine_30Rnd_545x39_AK_White   = 2.20%
			Exile_Magazine_30Rnd_545x39_AK_Yellow  = 2.20%
			Exile_Magazine_20Rnd_762x51_DMR        = 1.10%
			Exile_Magazine_20Rnd_762x51_DMR_Yellow = 1.10%
			Exile_Magazine_20Rnd_762x51_DMR_Red    = 1.10%
			Exile_Magazine_20Rnd_762x51_DMR_Green  = 1.10%
			Exile_Magazine_20Rnd_762x51_DMR_White  = 1.10%
			Exile_Magazine_5Rnd_22LR               = 2.20%
			Exile_Magazine_10Rnd_762x54            = 2.20%
			Exile_Magazine_10Rnd_9x39              = 2.20%
			Exile_Magazine_20Rnd_9x39              = 2.20%
			30Rnd_762x39_Mag_F                     = 2.20%
			30Rnd_762x39_Mag_Green_F               = 2.20%
			30Rnd_762x39_Mag_Tracer_F              = 2.20%
			30Rnd_762x39_Mag_Tracer_Green_F        = 2.20%
			30Rnd_762x39_AK47_M                    = 2.20%
			30Rnd_545x39_Mag_F                     = 2.20%
			30Rnd_545x39_Mag_Green_F               = 2.20%
			30Rnd_545x39_Mag_Tracer_F              = 2.20%
			30Rnd_545x39_Mag_Tracer_Green_F        = 2.20%
			10Rnd_50BW_Mag_F                       = 2.20%
			30Rnd_580x42_Mag_F                     = 2.20%
			30Rnd_580x42_Mag_Tracer_F              = 2.20%
			100Rnd_580x42_Mag_F                    = 2.20%
			100Rnd_580x42_Mag_Tracer_F             = 2.20%
			150Rnd_556x45_Drum_Mag_F               = 2.20%
			150Rnd_556x45_Drum_Mag_Tracer_F        = 2.20%
			20Rnd_762x51_Mag                       = 2.20%
		*/
		RifleAmmo[] = {"Exile_Magazine_30Rnd_545x39_AK_White", "Exile_Magazine_10Rnd_303", "30Rnd_580x42_Mag_F", "30Rnd_556x45_Stanag_Tracer_Yellow", "Exile_Magazine_30Rnd_545x39_AK_Red", "20Rnd_762x51_Mag", "Exile_Magazine_10Rnd_303", "30Rnd_556x45_Stanag_green", "30Rnd_762x39_Mag_F", "30Rnd_65x39_caseless_green", "30Rnd_556x45_Stanag_green", "30Rnd_762x39_Mag_Tracer_Green_F", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_545x39_Mag_Tracer_Green_F", "Exile_Magazine_10Rnd_762x54", "100Rnd_580x42_Mag_Tracer_F", "30Rnd_545x39_Mag_Tracer_F", "30Rnd_65x39_caseless_green", "Exile_Magazine_10Rnd_303", "Exile_Magazine_10Rnd_9x39", "Exile_Magazine_10Rnd_303", "100Rnd_580x42_Mag_Tracer_F", "Exile_Magazine_5Rnd_22LR", "30Rnd_580x42_Mag_Tracer_F", "Exile_Magazine_10Rnd_762x54", "30Rnd_762x39_Mag_Green_F", "Exile_Magazine_10Rnd_303", "30Rnd_580x42_Mag_Tracer_F", "Exile_Magazine_20Rnd_9x39", "Exile_Magazine_30Rnd_545x39_AK_Yellow", "100Rnd_580x42_Mag_F", "Exile_Magazine_20Rnd_762x51_DMR", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_545x39_Mag_Green_F", "30Rnd_65x39_caseless_mag_Tracer", "30Rnd_762x39_Mag_Tracer_Green_F", "100Rnd_580x42_Mag_F", "30Rnd_556x45_Stanag", "Exile_Magazine_30Rnd_545x39_AK_Green", "30Rnd_556x45_Stanag", "30Rnd_545x39_Mag_Green_F", "30Rnd_65x39_caseless_mag", "150Rnd_556x45_Drum_Mag_F", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_762x39_Mag_Green_F", "30Rnd_65x39_caseless_mag", "Exile_Magazine_10Rnd_303", "Exile_Magazine_30Rnd_545x39_AK_White", "30Rnd_545x39_Mag_F", "150Rnd_556x45_Drum_Mag_F", "30Rnd_556x45_Stanag_red", "Exile_Magazine_30Rnd_762x39_AK", "30Rnd_65x39_caseless_green_mag_Tracer", "30Rnd_556x45_Stanag_Tracer_Red", "20Rnd_556x45_UW_mag", "Exile_Magazine_30Rnd_545x39_AK_Yellow", "30Rnd_65x39_caseless_green_mag_Tracer", "30Rnd_556x45_Stanag_Tracer_Green", "Exile_Magazine_20Rnd_762x51_DMR_Red", "Exile_Magazine_10Rnd_303", "Exile_Magazine_20Rnd_762x51_DMR_Yellow", "30Rnd_545x39_Mag_Tracer_Green_F", "20Rnd_556x45_UW_mag", "Exile_Magazine_10Rnd_303", "30Rnd_580x42_Mag_F", "10Rnd_50BW_Mag_F", "30Rnd_762x39_AK47_M", "30Rnd_65x39_caseless_mag_Tracer", "Exile_Magazine_20Rnd_9x39", "150Rnd_556x45_Drum_Mag_Tracer_F", "Exile_Magazine_5Rnd_22LR", "10Rnd_50BW_Mag_F", "Exile_Magazine_30Rnd_545x39_AK_Green", "30Rnd_762x39_AK47_M", "30Rnd_762x39_Mag_F", "Exile_Magazine_10Rnd_303", "20Rnd_762x51_Mag", "30Rnd_545x39_Mag_F", "150Rnd_556x45_Drum_Mag_Tracer_F", "30Rnd_556x45_Stanag_red", "Exile_Magazine_10Rnd_303", "Exile_Magazine_30Rnd_545x39_AK_Red", "30Rnd_545x39_Mag_Tracer_F", "30Rnd_762x39_Mag_Tracer_F", "Exile_Magazine_10Rnd_9x39", "Exile_Magazine_30Rnd_762x39_AK", "Exile_Magazine_20Rnd_762x51_DMR_Green", "Exile_Magazine_30Rnd_545x39_AK", "Exile_Magazine_20Rnd_762x51_DMR_White", "Exile_Magazine_30Rnd_545x39_AK", "30Rnd_762x39_Mag_Tracer_F"};

		/*
			Percental Item Spawn Chances of RifleAttachments:

			muzzle_snds_M            = 3.39%
			muzzle_snds_H            = 3.39%
			muzzle_snds_H_khk_F      = 3.39%
			muzzle_snds_H_snd_F      = 3.39%
			muzzle_snds_58_blk_F     = 3.39%
			muzzle_snds_m_khk_F      = 3.39%
			muzzle_snds_m_snd_F      = 3.39%
			muzzle_snds_58_wdm_F     = 3.39%
			muzzle_snds_65_TI_blk_F  = 3.39%
			muzzle_snds_65_TI_hex_F  = 3.39%
			muzzle_snds_65_TI_ghex_F = 3.39%
			muzzle_snds_H_MG_blk_F   = 3.39%
			muzzle_snds_H_MG_khk_F   = 3.39%
			optic_Arco               = 3.39%
			optic_Arco_blk_F         = 3.39%
			optic_Arco_ghex_F        = 3.39%
			optic_Hamr               = 3.39%
			optic_Hamr_khk_F         = 3.39%
			optic_Holosight          = 3.39%
			optic_Holosight_blk_F    = 3.39%
			optic_Holosight_khk_F    = 3.39%
			acc_flashlight           = 3.39%
			acc_pointer_IR           = 3.39%
			optic_MRCO               = 3.39%
			optic_DMS                = 3.39%
			optic_DMS_ghex_F         = 3.39%
			optic_ERCO_blk_F         = 3.39%
			optic_ERCO_khk_F         = 3.39%
			optic_ERCO_snd_F         = 3.39%
			optic_NVS                = 1.69%
		*/
		RifleAttachments[] = {"optic_MRCO", "muzzle_snds_m_khk_F", "muzzle_snds_65_TI_ghex_F", "optic_ERCO_blk_F", "optic_Holosight_blk_F", "optic_Holosight", "optic_Arco", "muzzle_snds_65_TI_hex_F", "muzzle_snds_58_wdm_F", "optic_NVS", "muzzle_snds_H_khk_F", "optic_Hamr", "muzzle_snds_58_blk_F", "optic_Arco_ghex_F", "muzzle_snds_H_MG_khk_F", "muzzle_snds_H", "optic_Holosight", "optic_Holosight_khk_F", "acc_flashlight", "optic_ERCO_khk_F", "muzzle_snds_M", "acc_flashlight", "optic_DMS", "muzzle_snds_m_snd_F", "muzzle_snds_65_TI_ghex_F", "optic_ERCO_blk_F", "muzzle_snds_H_MG_blk_F", "muzzle_snds_65_TI_blk_F", "muzzle_snds_H_snd_F", "muzzle_snds_M", "muzzle_snds_m_snd_F", "optic_Hamr_khk_F", "optic_Arco", "muzzle_snds_65_TI_blk_F", "optic_ERCO_khk_F", "optic_DMS_ghex_F", "muzzle_snds_58_wdm_F", "muzzle_snds_H_MG_blk_F", "optic_Arco_blk_F", "muzzle_snds_H_MG_khk_F", "optic_Hamr_khk_F", "muzzle_snds_H", "muzzle_snds_65_TI_hex_F", "optic_ERCO_snd_F", "muzzle_snds_H_khk_F", "optic_Holosight_khk_F", "optic_Arco_blk_F", "muzzle_snds_58_blk_F", "optic_DMS_ghex_F", "optic_Hamr", "muzzle_snds_H_snd_F", "optic_Arco_ghex_F", "optic_DMS", "optic_MRCO", "acc_pointer_IR", "optic_Holosight_blk_F", "optic_ERCO_snd_F", "acc_pointer_IR", "muzzle_snds_m_khk_F"};

		/*
			Percental Item Spawn Chances of LMG:

			arifle_MX_SW_Black_F = 12.50%
			arifle_MX_SW_F       = 12.50%
			LMG_Mk200_F          = 12.50%
			LMG_Zafir_F          = 12.50%
			Exile_Weapon_RPK     = 12.50%
			Exile_Weapon_PK      = 12.50%
			Exile_Weapon_PKP     = 12.50%
			LMG_03_F             = 12.50%
		*/
		LMG[] = {"arifle_MX_SW_F", "Exile_Weapon_PKP", "LMG_03_F", "Exile_Weapon_PK", "LMG_Zafir_F", "arifle_MX_SW_Black_F", "LMG_Mk200_F", "Exile_Weapon_RPK"};

		/*
			Percental Item Spawn Chances of LMGAmmo:

			100Rnd_65x39_caseless_mag             = 3.03%
			100Rnd_65x39_caseless_mag_Tracer      = 4.55%
			150Rnd_762x54_Box                     = 4.55%
			150Rnd_762x54_Box_Tracer              = 1.52%
			130Rnd_338_Mag                        = 7.58%
			150Rnd_93x64_Mag                      = 7.58%
			Exile_Magazine_45Rnd_545x39_RPK_Green = 1.52%
			Exile_Magazine_75Rnd_545x39_RPK_Green = 1.52%
			Exile_Magazine_100Rnd_762x54_PK_Green = 1.52%
			200Rnd_65x39_Belt                     = 15.15%
			200Rnd_65x39_Belt_Tracer_Green        = 15.15%
			200Rnd_65x39_Belt_Tracer_Red          = 15.15%
			200Rnd_65x39_Belt_Tracer_Yellow       = 15.15%
			200Rnd_556x45_Box_F                   = 1.52%
			200Rnd_556x45_Box_Red_F               = 1.52%
			200Rnd_556x45_Box_Tracer_F            = 1.52%
			200Rnd_556x45_Box_Tracer_Red_F        = 1.52%
		*/
		LMGAmmo[] = {"150Rnd_93x64_Mag", "150Rnd_762x54_Box", "100Rnd_65x39_caseless_mag", "130Rnd_338_Mag", "200Rnd_65x39_Belt_Tracer_Red", "150Rnd_93x64_Mag", "200Rnd_65x39_Belt_Tracer_Yellow", "200Rnd_556x45_Box_Red_F", "200Rnd_65x39_Belt_Tracer_Red", "Exile_Magazine_100Rnd_762x54_PK_Green", "Exile_Magazine_75Rnd_545x39_RPK_Green", "200Rnd_65x39_Belt_Tracer_Yellow", "Exile_Magazine_45Rnd_545x39_RPK_Green", "100Rnd_65x39_caseless_mag_Tracer", "200Rnd_65x39_Belt_Tracer_Red", "200Rnd_65x39_Belt_Tracer_Green", "150Rnd_762x54_Box_Tracer", "200Rnd_65x39_Belt", "200Rnd_65x39_Belt_Tracer_Yellow", "100Rnd_65x39_caseless_mag_Tracer", "200Rnd_65x39_Belt_Tracer_Green", "200Rnd_65x39_Belt_Tracer_Green", "200Rnd_65x39_Belt", "150Rnd_762x54_Box", "200Rnd_65x39_Belt_Tracer_Yellow", "150Rnd_93x64_Mag", "200Rnd_65x39_Belt", "200Rnd_65x39_Belt_Tracer_Yellow", "200Rnd_556x45_Box_Tracer_Red_F", "130Rnd_338_Mag", "200Rnd_65x39_Belt_Tracer_Yellow", "200Rnd_65x39_Belt_Tracer_Red", "200Rnd_65x39_Belt_Tracer_Green", "200Rnd_65x39_Belt", "150Rnd_93x64_Mag", "200Rnd_65x39_Belt_Tracer_Red", "200Rnd_65x39_Belt_Tracer_Red", "200Rnd_65x39_Belt", "130Rnd_338_Mag", "200Rnd_65x39_Belt_Tracer_Red", "150Rnd_762x54_Box", "200Rnd_65x39_Belt_Tracer_Yellow", "200Rnd_65x39_Belt", "200Rnd_65x39_Belt_Tracer_Yellow", "200Rnd_65x39_Belt_Tracer_Yellow", "200Rnd_65x39_Belt_Tracer_Red", "200Rnd_65x39_Belt_Tracer_Green", "200Rnd_65x39_Belt_Tracer_Red", "200Rnd_65x39_Belt_Tracer_Yellow", "150Rnd_93x64_Mag", "200Rnd_65x39_Belt_Tracer_Green", "200Rnd_65x39_Belt_Tracer_Green", "200Rnd_556x45_Box_Tracer_F", "130Rnd_338_Mag", "200Rnd_65x39_Belt_Tracer_Red", "200Rnd_556x45_Box_F", "200Rnd_65x39_Belt", "200Rnd_65x39_Belt", "100Rnd_65x39_caseless_mag", "200Rnd_65x39_Belt_Tracer_Green", "130Rnd_338_Mag", "200Rnd_65x39_Belt_Tracer_Green", "100Rnd_65x39_caseless_mag_Tracer", "200Rnd_65x39_Belt", "200Rnd_65x39_Belt", "200Rnd_65x39_Belt_Tracer_Green"};

		/*
			Percental Item Spawn Chances of Snipers:

			srifle_DMR_01_F      = 11.11%
			srifle_EBR_F         = 11.11%
			srifle_GM6_F         = 11.11%
			srifle_LRR_F         = 11.11%
			srifle_LRR_tna_F     = 11.11%
			srifle_GM6_ghex_F    = 11.11%
			srifle_DMR_07_blk_F  = 11.11%
			srifle_DMR_07_hex_F  = 11.11%
			srifle_DMR_07_ghex_F = 11.11%
		*/
		Snipers[] = {"srifle_DMR_07_hex_F", "srifle_DMR_07_ghex_F", "srifle_GM6_F", "srifle_EBR_F", "srifle_LRR_tna_F", "srifle_DMR_07_blk_F", "srifle_LRR_F", "srifle_DMR_01_F", "srifle_GM6_ghex_F"};

		/*
			Percental Item Spawn Chances of SniperAmmo:

			Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag       = 2.00%
			Exile_Magazine_7Rnd_408_Bullet_Cam_Mag           = 3.00%
			Exile_Magazine_10Rnd_338_Bullet_Cam_Mag          = 5.00%
			Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag = 5.00%
			5Rnd_127x108_APDS_Mag                            = 8.00%
			5Rnd_127x108_Mag                                 = 10.00%
			7Rnd_408_Mag                                     = 10.00%
			10Rnd_762x54_Mag                                 = 17.00%
			20Rnd_762x51_Mag                                 = 19.00%
			20Rnd_650x39_Cased_Mag_F                         = 21.00%
		*/
		SniperAmmo[] = {"20Rnd_762x51_Mag", "5Rnd_127x108_APDS_Mag", "5Rnd_127x108_APDS_Mag", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_762x51_Mag", "5Rnd_127x108_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "5Rnd_127x108_APDS_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "5Rnd_127x108_Mag", "10Rnd_762x54_Mag", "7Rnd_408_Mag", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F", "5Rnd_127x108_Mag", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "5Rnd_127x108_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_762x51_Mag", "7Rnd_408_Mag", "10Rnd_762x54_Mag", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "5Rnd_127x108_Mag", "20Rnd_762x51_Mag", "5Rnd_127x108_APDS_Mag", "20Rnd_762x51_Mag", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "5Rnd_127x108_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "20Rnd_762x51_Mag", "10Rnd_762x54_Mag", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "5Rnd_127x108_Mag", "5Rnd_127x108_APDS_Mag", "10Rnd_762x54_Mag", "7Rnd_408_Mag", "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag", "7Rnd_408_Mag", "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "5Rnd_127x108_Mag", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_762x51_Mag", "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_762x51_Mag", "5Rnd_127x108_APDS_Mag", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "20Rnd_650x39_Cased_Mag_F", "7Rnd_408_Mag", "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "5Rnd_127x108_APDS_Mag", "7Rnd_408_Mag", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "5Rnd_127x108_Mag", "20Rnd_650x39_Cased_Mag_F", "5Rnd_127x108_APDS_Mag", "10Rnd_762x54_Mag", "5Rnd_127x108_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", "20Rnd_762x51_Mag", "7Rnd_408_Mag", "7Rnd_408_Mag", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "10Rnd_762x54_Mag"};

		/*
			Percental Item Spawn Chances of SniperAttachments:

			muzzle_snds_B_khk_F = 11.11%
			muzzle_snds_B_snd_F = 11.11%
			muzzle_snds_B       = 11.11%
			optic_LRPS          = 11.11%
			optic_LRPS_ghex_F   = 11.11%
			optic_LRPS_tna_F    = 11.11%
			optic_SOS           = 11.11%
			optic_SOS_khk_F     = 11.11%
			optic_DMS           = 11.11%
		*/
		SniperAttachments[] = {"optic_LRPS", "optic_LRPS_tna_F", "muzzle_snds_B", "optic_LRPS_ghex_F", "muzzle_snds_B_snd_F", "optic_DMS", "optic_SOS", "muzzle_snds_B_khk_F", "optic_SOS_khk_F"};

		/*
			Percental Item Spawn Chances of DLCRifles:

			MMG_01_hex_F             = 4.00%
			MMG_01_tan_F             = 4.00%
			MMG_02_black_F           = 6.00%
			MMG_02_camo_F            = 6.00%
			MMG_02_sand_F            = 6.00%
			srifle_DMR_03_F          = 3.00%
			srifle_DMR_03_khaki_F    = 3.00%
			srifle_DMR_03_tan_F      = 3.00%
			srifle_DMR_03_woodland_F = 3.00%
			srifle_DMR_06_camo_F     = 3.00%
			srifle_DMR_06_olive_F    = 3.00%
			srifle_DMR_02_camo_F     = 6.00%
			srifle_DMR_02_F          = 6.00%
			srifle_DMR_02_sniper_F   = 6.00%
			srifle_DMR_04_F          = 7.00%
			srifle_DMR_04_Tan_F      = 7.00%
			srifle_DMR_05_blk_F      = 8.00%
			srifle_DMR_05_hex_F      = 8.00%
			srifle_DMR_05_tan_F      = 8.00%
		*/
		DLCRifles[] = {"MMG_02_sand_F", "MMG_02_sand_F", "srifle_DMR_05_tan_F", "srifle_DMR_02_camo_F", "MMG_02_black_F", "srifle_DMR_03_woodland_F", "MMG_02_black_F", "MMG_02_sand_F", "srifle_DMR_05_blk_F", "srifle_DMR_05_tan_F", "srifle_DMR_02_sniper_F", "srifle_DMR_02_camo_F", "srifle_DMR_04_Tan_F", "MMG_02_black_F", "MMG_01_hex_F", "srifle_DMR_05_tan_F", "srifle_DMR_04_F", "MMG_02_camo_F", "srifle_DMR_05_tan_F", "srifle_DMR_05_hex_F", "srifle_DMR_03_khaki_F", "srifle_DMR_06_camo_F", "srifle_DMR_05_tan_F", "srifle_DMR_03_tan_F", "srifle_DMR_03_woodland_F", "srifle_DMR_05_hex_F", "MMG_01_hex_F", "srifle_DMR_04_F", "srifle_DMR_02_camo_F", "srifle_DMR_04_F", "srifle_DMR_06_camo_F", "srifle_DMR_03_tan_F", "srifle_DMR_06_camo_F", "srifle_DMR_02_camo_F", "MMG_02_sand_F", "srifle_DMR_03_F", "srifle_DMR_02_camo_F", "srifle_DMR_05_blk_F", "srifle_DMR_05_hex_F", "srifle_DMR_03_khaki_F", "srifle_DMR_06_olive_F", "MMG_02_camo_F", "srifle_DMR_04_Tan_F", "srifle_DMR_04_Tan_F", "srifle_DMR_02_F", "srifle_DMR_05_tan_F", "MMG_01_hex_F", "MMG_02_camo_F", "srifle_DMR_03_F", "MMG_01_tan_F", "MMG_02_camo_F", "srifle_DMR_02_sniper_F", "srifle_DMR_05_hex_F", "MMG_02_sand_F", "srifle_DMR_02_F", "srifle_DMR_04_Tan_F", "srifle_DMR_02_F", "MMG_02_black_F", "MMG_01_tan_F", "srifle_DMR_04_F", "srifle_DMR_05_blk_F", "srifle_DMR_05_blk_F", "srifle_DMR_05_hex_F", "srifle_DMR_03_F", "MMG_02_camo_F", "srifle_DMR_05_tan_F", "srifle_DMR_02_F", "srifle_DMR_02_sniper_F", "srifle_DMR_05_blk_F", "srifle_DMR_02_sniper_F", "srifle_DMR_03_tan_F", "srifle_DMR_03_woodland_F", "srifle_DMR_03_khaki_F", "MMG_02_sand_F", "srifle_DMR_06_olive_F", "MMG_02_camo_F", "srifle_DMR_05_blk_F", "srifle_DMR_04_Tan_F", "MMG_02_black_F", "srifle_DMR_04_Tan_F", "srifle_DMR_02_sniper_F", "srifle_DMR_05_blk_F", "srifle_DMR_05_hex_F", "srifle_DMR_05_tan_F", "srifle_DMR_02_camo_F", "srifle_DMR_04_F", "MMG_01_hex_F", "srifle_DMR_04_F", "srifle_DMR_04_F", "srifle_DMR_04_Tan_F", "srifle_DMR_02_F", "srifle_DMR_06_olive_F", "MMG_01_tan_F", "srifle_DMR_05_blk_F", "MMG_01_tan_F", "srifle_DMR_05_hex_F", "srifle_DMR_02_F", "srifle_DMR_05_hex_F", "srifle_DMR_02_sniper_F", "MMG_02_black_F"};

		/*
			Percental Item Spawn Chances of DLCAmmo:

			150Rnd_93x64_Mag       = 33.96%
			130Rnd_338_Mag         = 47.17%
			10Rnd_127x54_Mag       = 3.77%
			20Rnd_762x51_Mag       = 3.77%
			10Rnd_338_Mag          = 5.66%
			10Rnd_93x64_DMR_05_Mag = 5.66%
		*/
		DLCAmmo[] = {"150Rnd_93x64_Mag", "130Rnd_338_Mag", "130Rnd_338_Mag", "130Rnd_338_Mag", "150Rnd_93x64_Mag", "130Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "150Rnd_93x64_Mag", "130Rnd_338_Mag", "130Rnd_338_Mag", "150Rnd_93x64_Mag", "20Rnd_762x51_Mag", "130Rnd_338_Mag", "130Rnd_338_Mag", "150Rnd_93x64_Mag", "130Rnd_338_Mag", "150Rnd_93x64_Mag", "10Rnd_93x64_DMR_05_Mag", "130Rnd_338_Mag", "130Rnd_338_Mag", "150Rnd_93x64_Mag", "130Rnd_338_Mag", "130Rnd_338_Mag", "130Rnd_338_Mag", "20Rnd_762x51_Mag", "130Rnd_338_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "130Rnd_338_Mag", "150Rnd_93x64_Mag", "130Rnd_338_Mag", "150Rnd_93x64_Mag", "130Rnd_338_Mag", "10Rnd_127x54_Mag", "150Rnd_93x64_Mag", "150Rnd_93x64_Mag", "150Rnd_93x64_Mag", "150Rnd_93x64_Mag", "130Rnd_338_Mag", "130Rnd_338_Mag", "150Rnd_93x64_Mag", "150Rnd_93x64_Mag", "130Rnd_338_Mag", "150Rnd_93x64_Mag", "130Rnd_338_Mag", "10Rnd_338_Mag", "150Rnd_93x64_Mag", "130Rnd_338_Mag", "10Rnd_127x54_Mag", "130Rnd_338_Mag", "150Rnd_93x64_Mag", "130Rnd_338_Mag"};

		/*
			Percental Item Spawn Chances of DLCOptics:

			optic_AMS     = 14.29%
			optic_AMS_khk = 14.29%
			optic_AMS_snd = 14.29%
			optic_KHS_blk = 14.29%
			optic_KHS_hex = 14.29%
			optic_KHS_old = 14.29%
			optic_KHS_tan = 14.29%
		*/
		DLCOptics[] = {"optic_AMS_khk", "optic_KHS_hex", "optic_KHS_tan", "optic_AMS_snd", "optic_KHS_old", "optic_KHS_blk", "optic_AMS"};

		/*
			Percental Item Spawn Chances of DLCSupressor:

			muzzle_snds_338_black = 16.67%
			muzzle_snds_338_green = 16.67%
			muzzle_snds_338_sand  = 16.67%
			muzzle_snds_93mmg     = 16.67%
			muzzle_snds_93mmg_tan = 16.67%
			muzzle_snds_B         = 16.67%
		*/
		DLCSupressor[] = {"muzzle_snds_338_green", "muzzle_snds_338_sand", "muzzle_snds_B", "muzzle_snds_93mmg", "muzzle_snds_93mmg_tan", "muzzle_snds_338_black"};

		/*
			Percental Item Spawn Chances of EpicWeapons:

			MMG_01_hex_F   = 20.00%
			MMG_01_tan_F   = 20.00%
			MMG_02_black_F = 20.00%
			MMG_02_camo_F  = 20.00%
			MMG_02_sand_F  = 20.00%
		*/
		EpicWeapons[] = {"MMG_01_tan_F", "MMG_01_hex_F", "MMG_02_camo_F", "MMG_02_sand_F", "MMG_02_black_F"};

		/*
			Percental Item Spawn Chances of Bipods:

			bipod_03_F_oli = 11.11%
			bipod_03_F_blk = 11.11%
			bipod_02_F_tan = 11.11%
			bipod_02_F_hex = 11.11%
			bipod_02_F_blk = 11.11%
			bipod_01_F_snd = 11.11%
			bipod_01_F_mtp = 11.11%
			bipod_01_F_blk = 11.11%
			bipod_01_F_khk = 11.11%
		*/
		Bipods[] = {"bipod_02_F_tan", "bipod_02_F_blk", "bipod_03_F_blk", "bipod_01_F_mtp", "bipod_01_F_blk", "bipod_02_F_hex", "bipod_01_F_khk", "bipod_01_F_snd", "bipod_03_F_oli"};

		/*
			Percental Item Spawn Chances of HEGrenades:

			3Rnd_HE_Grenade_shell = 25.00%
			1Rnd_HE_Grenade_shell = 75.00%
		*/
		HEGrenades[] = {"3Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell"};

		/*
			Percental Item Spawn Chances of UGLFlares:

			3Rnd_UGL_FlareGreen_F  = 6.25%
			3Rnd_UGL_FlareRed_F    = 6.25%
			3Rnd_UGL_FlareWhite_F  = 6.25%
			3Rnd_UGL_FlareYellow_F = 6.25%
			UGL_FlareGreen_F       = 18.75%
			UGL_FlareRed_F         = 18.75%
			UGL_FlareWhite_F       = 18.75%
			UGL_FlareYellow_F      = 18.75%
		*/
		UGLFlares[] = {"3Rnd_UGL_FlareYellow_F", "UGL_FlareYellow_F", "UGL_FlareYellow_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareWhite_F", "UGL_FlareRed_F", "3Rnd_UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareYellow_F", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "3Rnd_UGL_FlareGreen_F", "UGL_FlareWhite_F", "3Rnd_UGL_FlareRed_F"};

		/*
			Percental Item Spawn Chances of UGLSmokes:

			3Rnd_Smoke_Grenade_shell       = 3.57%
			3Rnd_SmokeBlue_Grenade_shell   = 3.57%
			3Rnd_SmokeGreen_Grenade_shell  = 3.57%
			3Rnd_SmokeOrange_Grenade_shell = 3.57%
			3Rnd_SmokePurple_Grenade_shell = 3.57%
			3Rnd_SmokeRed_Grenade_shell    = 3.57%
			3Rnd_SmokeYellow_Grenade_shell = 3.57%
			1Rnd_Smoke_Grenade_shell       = 10.71%
			1Rnd_SmokeBlue_Grenade_shell   = 10.71%
			1Rnd_SmokeGreen_Grenade_shell  = 10.71%
			1Rnd_SmokeOrange_Grenade_shell = 10.71%
			1Rnd_SmokePurple_Grenade_shell = 10.71%
			1Rnd_SmokeRed_Grenade_shell    = 10.71%
			1Rnd_SmokeYellow_Grenade_shell = 10.71%
		*/
		UGLSmokes[] = {"1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "3Rnd_SmokeGreen_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "3Rnd_SmokeRed_Grenade_shell", "3Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "3Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "3Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "3Rnd_SmokePurple_Grenade_shell", "1Rnd_Smoke_Grenade_shell"};

		/*
			Percental Item Spawn Chances of HandGrenades:

			HandGrenade = 50.00%
			MiniGrenade = 50.00%
		*/
		HandGrenades[] = {"HandGrenade", "MiniGrenade"};

		/*
			Percental Item Spawn Chances of Explosives:

			SatchelCharge_Remote_Mag    = 5.26%
			APERSBoundingMine_Range_Mag = 15.79%
			APERSMine_Range_Mag         = 15.79%
			APERSTripMine_Wire_Mag      = 15.79%
			DemoCharge_Remote_Mag       = 15.79%
			IEDLandSmall_Remote_Mag     = 15.79%
			IEDUrbanSmall_Remote_Mag    = 15.79%
		*/
		Explosives[] = {"DemoCharge_Remote_Mag", "APERSTripMine_Wire_Mag", "IEDLandSmall_Remote_Mag", "APERSMine_Range_Mag", "APERSTripMine_Wire_Mag", "IEDLandSmall_Remote_Mag", "APERSMine_Range_Mag", "IEDUrbanSmall_Remote_Mag", "DemoCharge_Remote_Mag", "APERSBoundingMine_Range_Mag", "DemoCharge_Remote_Mag", "APERSBoundingMine_Range_Mag", "APERSTripMine_Wire_Mag", "IEDUrbanSmall_Remote_Mag", "IEDLandSmall_Remote_Mag", "IEDUrbanSmall_Remote_Mag", "SatchelCharge_Remote_Mag", "APERSBoundingMine_Range_Mag", "APERSMine_Range_Mag"};

		/*
			Percental Item Spawn Chances of CivilianItems:

			Exile_Item_MobilePhone = 2.78%
			Binocular              = 11.11%
			ItemGPS                = 11.11%
			ItemRadio              = 16.67%
			ItemWatch              = 16.67%
			ItemMap                = 19.44%
			Exile_Item_Heatpack    = 22.22%
		*/
		CivilianItems[] = {"ItemWatch", "Exile_Item_MobilePhone", "ItemWatch", "Exile_Item_Heatpack", "Exile_Item_Heatpack", "ItemMap", "ItemGPS", "ItemMap", "ItemWatch", "Exile_Item_Heatpack", "ItemWatch", "ItemWatch", "Binocular", "Exile_Item_Heatpack", "ItemMap", "ItemGPS", "Binocular", "Binocular", "ItemRadio", "ItemGPS", "ItemRadio", "ItemMap", "Exile_Item_Heatpack", "ItemMap", "ItemRadio", "Binocular", "ItemRadio", "ItemRadio", "Exile_Item_Heatpack", "ItemWatch", "ItemRadio", "Exile_Item_Heatpack", "ItemMap", "ItemMap", "ItemGPS", "Exile_Item_Heatpack"};

		/*
			Percental Item Spawn Chances of CivilianClothing:

			U_NikosAgedBody          = 0.58%
			U_NikosBody              = 0.58%
			U_OrestesBody            = 0.58%
			U_C_Man_casual_1_F       = 2.92%
			U_C_Man_casual_2_F       = 2.92%
			U_C_Man_casual_3_F       = 2.92%
			U_C_Man_casual_4_F       = 2.92%
			U_C_Man_casual_5_F       = 2.92%
			U_C_Man_casual_6_F       = 2.92%
			U_C_man_sport_1_F        = 2.92%
			U_C_man_sport_2_F        = 2.92%
			U_C_man_sport_3_F        = 2.92%
			U_I_C_Soldier_Bandit_1_F = 2.92%
			U_I_C_Soldier_Bandit_2_F = 2.92%
			U_I_C_Soldier_Bandit_3_F = 2.92%
			U_I_C_Soldier_Bandit_4_F = 2.92%
			U_I_C_Soldier_Bandit_5_F = 2.92%
			U_C_Poloshirt_blue       = 4.09%
			U_C_Poloshirt_burgundy   = 4.09%
			U_C_Poloshirt_salmon     = 4.09%
			U_C_Poloshirt_stripped   = 4.09%
			U_C_Poloshirt_tricolour  = 4.09%
			U_C_HunterBody_grn       = 5.26%
			U_C_Journalist           = 5.26%
			U_C_Poor_1               = 5.26%
			U_C_Poor_2               = 5.26%
			U_C_Poor_shorts_1        = 5.26%
			U_C_Scientist            = 5.26%
			U_Rangemaster            = 5.26%
		*/
		CivilianClothing[] = {"U_C_Poloshirt_blue", "U_I_C_Soldier_Bandit_4_F", "U_C_Journalist", "U_C_Poor_shorts_1", "U_C_Scientist", "U_C_man_sport_1_F", "U_I_C_Soldier_Bandit_5_F", "U_C_Poloshirt_salmon", "U_C_Man_casual_3_F", "U_C_Man_casual_5_F", "U_C_Poloshirt_blue", "U_I_C_Soldier_Bandit_1_F", "U_C_Poloshirt_tricolour", "U_C_Scientist", "U_C_Man_casual_4_F", "U_C_Poloshirt_burgundy", "U_C_Poor_2", "U_C_Poor_2", "U_C_Poloshirt_burgundy", "U_C_Poloshirt_blue", "U_C_Poloshirt_blue", "U_C_man_sport_3_F", "U_C_Poloshirt_burgundy", "U_I_C_Soldier_Bandit_2_F", "U_I_C_Soldier_Bandit_2_F", "U_C_HunterBody_grn", "U_C_Poloshirt_blue", "U_C_Poloshirt_salmon", "U_C_man_sport_3_F", "U_I_C_Soldier_Bandit_1_F", "U_C_Scientist", "U_C_man_sport_1_F", "U_I_C_Soldier_Bandit_5_F", "U_Rangemaster", "U_Rangemaster", "U_C_Poloshirt_stripped", "U_C_man_sport_2_F", "U_C_Journalist", "U_C_Man_casual_2_F", "U_C_Man_casual_4_F", "U_C_Poloshirt_stripped", "U_C_Poor_shorts_1", "U_C_Poloshirt_salmon", "U_I_C_Soldier_Bandit_3_F", "U_C_Man_casual_5_F", "U_C_Poloshirt_stripped", "U_C_Man_casual_5_F", "U_I_C_Soldier_Bandit_3_F", "U_C_Poor_2", "U_C_Journalist", "U_C_Poor_1", "U_C_Scientist", "U_C_Poor_1", "U_C_Poloshirt_stripped", "U_C_Man_casual_6_F", "U_C_Poor_1", "U_C_Poor_shorts_1", "U_C_Man_casual_4_F", "U_C_Poor_1", "U_C_Poloshirt_stripped", "U_C_Poor_2", "U_I_C_Soldier_Bandit_5_F", "U_C_Poloshirt_tricolour", "U_C_Poloshirt_tricolour", "U_Rangemaster", "U_C_Poor_shorts_1", "U_C_Poloshirt_blue", "U_C_Journalist", "U_I_C_Soldier_Bandit_4_F", "U_C_Poloshirt_salmon", "U_C_Man_casual_2_F", "U_C_man_sport_2_F", "U_C_Poor_shorts_1", "U_I_C_Soldier_Bandit_3_F", "U_C_Poor_2", "U_C_Man_casual_1_F", "U_C_Man_casual_6_F", "U_C_Scientist", "U_C_Poloshirt_tricolour", "U_I_C_Soldier_Bandit_4_F", "U_C_Man_casual_1_F", "U_I_C_Soldier_Bandit_1_F", "U_C_Man_casual_2_F", "U_C_Man_casual_3_F", "U_C_Poloshirt_salmon", "U_C_Man_casual_4_F", "U_C_Poloshirt_salmon", "U_Rangemaster", "U_C_Poor_1", "U_C_Scientist", "U_C_Man_casual_2_F", "U_C_Scientist", "U_C_Poloshirt_tricolour", "U_C_Scientist", "U_C_Poloshirt_tricolour", "U_C_Poloshirt_burgundy", "U_C_HunterBody_grn", "U_C_Man_casual_1_F", "U_C_Journalist", "U_C_Poor_shorts_1", "U_C_Man_casual_3_F", "U_C_Poor_2", "U_C_man_sport_2_F", "U_C_Man_casual_3_F", "U_C_HunterBody_grn", "U_C_man_sport_1_F", "U_C_Poloshirt_burgundy", "U_C_Poor_1", "U_C_man_sport_3_F", "U_C_HunterBody_grn", "U_Rangemaster", "U_C_Journalist", "U_C_Poor_2", "U_C_HunterBody_grn", "U_C_Poor_2", "U_C_Poor_1", "U_C_man_sport_1_F", "U_C_Poor_shorts_1", "U_I_C_Soldier_Bandit_5_F", "U_C_Man_casual_6_F", "U_C_Journalist", "U_C_Poor_1", "U_C_Journalist", "U_C_man_sport_3_F", "U_C_man_sport_1_F", "U_I_C_Soldier_Bandit_2_F", "U_C_HunterBody_grn", "U_Rangemaster", "U_C_man_sport_2_F", "U_C_Man_casual_5_F", "U_C_Man_casual_1_F", "U_C_HunterBody_grn", "U_I_C_Soldier_Bandit_1_F", "U_Rangemaster", "U_C_Poloshirt_tricolour", "U_C_Poloshirt_burgundy", "U_C_HunterBody_grn", "U_C_Scientist", "U_OrestesBody", "U_C_Man_casual_2_F", "U_Rangemaster", "U_C_HunterBody_grn", "U_I_C_Soldier_Bandit_1_F", "U_I_C_Soldier_Bandit_3_F", "U_NikosBody", "U_I_C_Soldier_Bandit_3_F", "U_C_Man_casual_4_F", "U_C_Poloshirt_blue", "U_Rangemaster", "U_C_Poloshirt_stripped", "U_C_Man_casual_1_F", "U_C_Man_casual_3_F", "U_C_Poor_2", "U_I_C_Soldier_Bandit_2_F", "U_C_Poloshirt_salmon", "U_C_Poor_shorts_1", "U_C_Man_casual_6_F", "U_C_Man_casual_6_F", "U_C_Poloshirt_stripped", "U_I_C_Soldier_Bandit_2_F", "U_I_C_Soldier_Bandit_4_F", "U_C_man_sport_2_F", "U_C_man_sport_3_F", "U_C_Poor_1", "U_I_C_Soldier_Bandit_4_F", "U_I_C_Soldier_Bandit_5_F", "U_C_Journalist", "U_C_Man_casual_5_F", "U_C_Poloshirt_burgundy", "U_NikosAgedBody", "U_C_Poor_shorts_1"};

		/*
			Percental Item Spawn Chances of CivilianBackpacks:

			B_Kitbag_cbr        = 6.67%
			B_Kitbag_mcamo      = 6.67%
			B_Kitbag_sgg        = 6.67%
			B_AssaultPack_blk   = 6.67%
			B_AssaultPack_cbr   = 6.67%
			B_AssaultPack_dgtl  = 6.67%
			B_AssaultPack_khk   = 6.67%
			B_AssaultPack_mcamo = 6.67%
			B_AssaultPack_rgr   = 6.67%
			B_AssaultPack_sgg   = 6.67%
			B_AssaultPack_tna_F = 6.67%
			B_HuntingBackpack   = 6.67%
			B_OutdoorPack_blu   = 6.67%
			B_OutdoorPack_tan   = 6.67%
			B_OutdoorPack_blk   = 6.67%
		*/
		CivilianBackpacks[] = {"B_OutdoorPack_tan", "B_AssaultPack_dgtl", "B_AssaultPack_sgg", "B_OutdoorPack_blk", "B_AssaultPack_cbr", "B_AssaultPack_blk", "B_HuntingBackpack", "B_Kitbag_sgg", "B_AssaultPack_tna_F", "B_OutdoorPack_blu", "B_AssaultPack_khk", "B_Kitbag_cbr", "B_AssaultPack_rgr", "B_AssaultPack_mcamo", "B_Kitbag_mcamo"};

		/*
			Percental Item Spawn Chances of CivilianVests:

			V_Press_F            = 25.00%
			V_TacVest_blk_POLICE = 25.00%
			V_Rangemaster_belt   = 50.00%
		*/
		CivilianVests[] = {"V_Rangemaster_belt", "V_Press_F", "V_Rangemaster_belt", "V_TacVest_blk_POLICE"};

		/*
			Percental Item Spawn Chances of CivilianHeadgear:

			H_Bandanna_surfer  = 5.56%
			H_Beret_blk_POLICE = 5.56%
			H_Cap_blk          = 5.56%
			H_Cap_blk_Raven    = 5.56%
			H_Cap_blu          = 5.56%
			H_Cap_grn          = 5.56%
			H_Cap_headphones   = 5.56%
			H_Cap_oli          = 5.56%
			H_Cap_press        = 5.56%
			H_Cap_red          = 5.56%
			H_Cap_tan          = 5.56%
			H_Hat_blue         = 5.56%
			H_Hat_brown        = 5.56%
			H_Hat_checker      = 5.56%
			H_Hat_grey         = 5.56%
			H_Hat_tan          = 5.56%
			H_StrawHat         = 5.56%
			H_StrawHat_dark    = 5.56%
		*/
		CivilianHeadgear[] = {"H_Cap_blk_Raven", "H_StrawHat", "H_Hat_grey", "H_StrawHat_dark", "H_Cap_press", "H_Cap_tan", "H_Hat_brown", "H_Cap_blu", "H_Bandanna_surfer", "H_Cap_oli", "H_Cap_blk", "H_Hat_tan", "H_Beret_blk_POLICE", "H_Cap_headphones", "H_Hat_checker", "H_Cap_red", "H_Cap_grn", "H_Hat_blue"};

		/*
			Percental Item Spawn Chances of GuerillaItems:

			Rangefinder        = 6.25%
			ItemCompass        = 62.50%
			NVGoggles          = 6.25%
			NVGoggles_tna_F    = 6.25%
			O_NVGoggles_ghex_F = 6.25%
			O_NVGoggles_hex_F  = 6.25%
			O_NVGoggles_urb_F  = 6.25%
		*/
		GuerillaItems[] = {"O_NVGoggles_urb_F", "ItemCompass", "ItemCompass", "ItemCompass", "NVGoggles", "ItemCompass", "ItemCompass", "NVGoggles_tna_F", "ItemCompass", "ItemCompass", "ItemCompass", "O_NVGoggles_ghex_F", "ItemCompass", "Rangefinder", "O_NVGoggles_hex_F", "ItemCompass"};

		/*
			Percental Item Spawn Chances of GuerillaClothing:

			U_I_G_resistanceLeader_F = 1.75%
			U_I_C_Soldier_Camo_F     = 5.26%
			U_I_C_Soldier_Para_1_F   = 5.26%
			U_I_C_Soldier_Para_2_F   = 5.26%
			U_I_C_Soldier_Para_3_F   = 5.26%
			U_I_C_Soldier_Para_4_F   = 5.26%
			U_I_C_Soldier_Para_5_F   = 5.26%
			U_IG_leader              = 7.02%
			U_IG_Guerilla3_1         = 8.77%
			U_IG_Guerilla3_2         = 8.77%
			U_IG_Guerilla1_1         = 10.53%
			U_IG_Guerilla2_1         = 10.53%
			U_IG_Guerilla2_2         = 10.53%
			U_IG_Guerilla2_3         = 10.53%
		*/
		GuerillaClothing[] = {"U_IG_Guerilla2_1", "U_IG_Guerilla2_2", "U_I_C_Soldier_Para_5_F", "U_IG_Guerilla2_3", "U_IG_Guerilla2_2", "U_I_C_Soldier_Para_2_F", "U_IG_Guerilla2_3", "U_IG_Guerilla1_1", "U_IG_Guerilla3_2", "U_I_C_Soldier_Para_1_F", "U_IG_Guerilla3_2", "U_IG_Guerilla3_1", "U_IG_Guerilla3_1", "U_IG_Guerilla3_2", "U_I_C_Soldier_Camo_F", "U_I_C_Soldier_Para_2_F", "U_I_C_Soldier_Para_4_F", "U_IG_Guerilla2_1", "U_IG_Guerilla2_1", "U_IG_Guerilla1_1", "U_I_C_Soldier_Para_5_F", "U_IG_Guerilla2_1", "U_IG_Guerilla3_2", "U_I_C_Soldier_Camo_F", "U_I_C_Soldier_Para_1_F", "U_I_C_Soldier_Para_4_F", "U_IG_Guerilla2_3", "U_I_G_resistanceLeader_F", "U_IG_Guerilla3_1", "U_I_C_Soldier_Para_3_F", "U_IG_Guerilla2_2", "U_IG_Guerilla2_2", "U_I_C_Soldier_Para_4_F", "U_IG_leader", "U_IG_Guerilla1_1", "U_I_C_Soldier_Para_3_F", "U_IG_Guerilla2_3", "U_I_C_Soldier_Para_5_F", "U_IG_Guerilla2_2", "U_IG_Guerilla1_1", "U_IG_Guerilla3_1", "U_IG_leader", "U_IG_Guerilla3_1", "U_I_C_Soldier_Para_1_F", "U_IG_Guerilla2_3", "U_IG_Guerilla1_1", "U_IG_Guerilla2_1", "U_IG_Guerilla1_1", "U_IG_Guerilla2_1", "U_IG_leader", "U_IG_Guerilla3_2", "U_IG_leader", "U_I_C_Soldier_Para_2_F", "U_IG_Guerilla2_3", "U_I_C_Soldier_Para_3_F", "U_IG_Guerilla2_2", "U_I_C_Soldier_Camo_F"};

		/*
			Percental Item Spawn Chances of GuerillaBackpacks:

			B_Bergen_blk               = 1.82%
			B_Bergen_mcamo             = 1.82%
			B_Bergen_rgr               = 1.82%
			B_Bergen_sgg               = 1.82%
			B_FieldPack_ghex_F         = 1.82%
			B_ViperHarness_base_F      = 3.64%
			B_ViperHarness_blk_F       = 3.64%
			B_ViperHarness_ghex_F      = 3.64%
			B_ViperHarness_hex_F       = 3.64%
			B_ViperHarness_khk_F       = 3.64%
			B_ViperHarness_oli_F       = 3.64%
			B_ViperLightHarness_base_F = 5.45%
			B_ViperLightHarness_blk_F  = 5.45%
			B_ViperLightHarness_ghex_F = 5.45%
			B_ViperLightHarness_hex_F  = 5.45%
			B_ViperLightHarness_khk_F  = 5.45%
			B_ViperLightHarness_oli_F  = 5.45%
			B_FieldPack_blk            = 9.09%
			B_FieldPack_cbr            = 9.09%
			B_FieldPack_ocamo          = 9.09%
			B_FieldPack_oucamo         = 9.09%
		*/
		GuerillaBackpacks[] = {"B_FieldPack_cbr", "B_ViperLightHarness_oli_F", "B_Bergen_rgr", "B_FieldPack_oucamo", "B_ViperHarness_hex_F", "B_FieldPack_blk", "B_ViperLightHarness_blk_F", "B_ViperLightHarness_base_F", "B_FieldPack_blk", "B_ViperLightHarness_khk_F", "B_ViperHarness_base_F", "B_ViperLightHarness_base_F", "B_ViperHarness_blk_F", "B_ViperLightHarness_hex_F", "B_ViperHarness_khk_F", "B_ViperHarness_ghex_F", "B_ViperHarness_oli_F", "B_ViperHarness_ghex_F", "B_ViperLightHarness_khk_F", "B_ViperLightHarness_ghex_F", "B_FieldPack_blk", "B_FieldPack_blk", "B_FieldPack_cbr", "B_ViperLightHarness_base_F", "B_FieldPack_ocamo", "B_FieldPack_ocamo", "B_ViperLightHarness_blk_F", "B_Bergen_sgg", "B_FieldPack_cbr", "B_ViperHarness_oli_F", "B_FieldPack_ocamo", "B_ViperLightHarness_oli_F", "B_FieldPack_cbr", "B_Bergen_mcamo", "B_ViperHarness_blk_F", "B_Bergen_blk", "B_ViperLightHarness_blk_F", "B_FieldPack_ocamo", "B_ViperLightHarness_ghex_F", "B_FieldPack_oucamo", "B_ViperLightHarness_hex_F", "B_FieldPack_ghex_F", "B_FieldPack_oucamo", "B_ViperHarness_base_F", "B_ViperLightHarness_ghex_F", "B_FieldPack_ocamo", "B_FieldPack_oucamo", "B_FieldPack_cbr", "B_ViperLightHarness_hex_F", "B_ViperHarness_khk_F", "B_ViperHarness_hex_F", "B_FieldPack_blk", "B_FieldPack_oucamo", "B_ViperLightHarness_oli_F", "B_ViperLightHarness_khk_F"};

		/*
			Percental Item Spawn Chances of GuerillaVests:

			V_I_G_resistanceLeader_F = 3.23%
			V_BandollierB_blk        = 6.45%
			V_BandollierB_cbr        = 6.45%
			V_BandollierB_khk        = 6.45%
			V_BandollierB_oli        = 6.45%
			V_BandollierB_rgr        = 6.45%
			V_Chestrig_blk           = 6.45%
			V_Chestrig_khk           = 6.45%
			V_Chestrig_oli           = 6.45%
			V_Chestrig_rgr           = 6.45%
			V_HarnessO_brn           = 6.45%
			V_HarnessO_gry           = 6.45%
			V_HarnessOGL_brn         = 6.45%
			V_HarnessOGL_gry         = 6.45%
			V_HarnessOSpec_brn       = 6.45%
			V_HarnessOSpec_gry       = 6.45%
		*/
		GuerillaVests[] = {"V_BandollierB_blk", "V_Chestrig_oli", "V_HarnessOGL_brn", "V_HarnessOGL_gry", "V_Chestrig_blk", "V_HarnessO_brn", "V_HarnessO_brn", "V_HarnessOSpec_brn", "V_BandollierB_cbr", "V_BandollierB_rgr", "V_HarnessOGL_brn", "V_Chestrig_khk", "V_BandollierB_khk", "V_HarnessO_gry", "V_HarnessOSpec_brn", "V_HarnessO_gry", "V_BandollierB_blk", "V_BandollierB_khk", "V_Chestrig_oli", "V_HarnessOSpec_gry", "V_HarnessOGL_gry", "V_Chestrig_rgr", "V_I_G_resistanceLeader_F", "V_BandollierB_rgr", "V_Chestrig_blk", "V_Chestrig_rgr", "V_BandollierB_oli", "V_BandollierB_oli", "V_BandollierB_cbr", "V_HarnessOSpec_gry", "V_Chestrig_khk"};

		/*
			Percental Item Spawn Chances of GuerillaHeadgear:

			H_Beret_02                = 0.82%
			H_Beret_blk               = 0.82%
			H_Beret_brn_SF            = 0.82%
			H_Beret_Colonel           = 0.82%
			H_Beret_grn               = 0.82%
			H_Beret_grn_SF            = 0.82%
			H_Beret_ocamo             = 0.82%
			H_Beret_red               = 0.82%
			H_Booniehat_tna_F         = 1.64%
			H_Cap_blk_Syndikat_F      = 1.64%
			H_Cap_grn_Syndikat_F      = 1.64%
			H_Cap_oli_Syndikat_F      = 1.64%
			H_Cap_tan_Syndikat_F      = 1.64%
			H_FakeHeadgear_Syndikat_F = 1.64%
			H_MilCap_gen_F            = 1.64%
			H_MilCap_ghex_F           = 1.64%
			H_MilCap_tna_F            = 1.64%
			H_Shemag_khk              = 1.64%
			H_Shemag_olive            = 1.64%
			H_Shemag_olive_hs         = 1.64%
			H_Shemag_tan              = 1.64%
			H_ShemagOpen_khk          = 1.64%
			H_ShemagOpen_tan          = 1.64%
			H_TurbanO_blk             = 1.64%
			H_Watchcap_camo           = 1.64%
			H_Watchcap_sgg            = 1.64%
			H_Bandanna_camo           = 2.46%
			H_Bandanna_cbr            = 2.46%
			H_Bandanna_gry            = 2.46%
			H_Bandanna_khk            = 2.46%
			H_Bandanna_khk_hs         = 2.46%
			H_Bandanna_mcamo          = 2.46%
			H_Bandanna_sgg            = 2.46%
			H_BandMask_blk            = 2.46%
			H_Cap_brn_SPECOPS         = 2.46%
			H_Cap_khaki_specops_UK    = 2.46%
			H_Cap_tan_specops_US      = 2.46%
			H_Hat_camo                = 2.46%
			H_Watchcap_blk            = 2.46%
			H_Watchcap_khk            = 2.46%
			Exile_Headgear_GasMask    = 3.28%
			H_Booniehat_dgtl          = 3.28%
			H_Booniehat_dirty         = 3.28%
			H_Booniehat_grn           = 3.28%
			H_Booniehat_indp          = 3.28%
			H_Booniehat_khk           = 3.28%
			H_Booniehat_khk_hs        = 3.28%
			H_Booniehat_mcamo         = 3.28%
			H_Booniehat_tan           = 3.28%
		*/
		GuerillaHeadgear[] = {"Exile_Headgear_GasMask", "H_Watchcap_blk", "H_Watchcap_khk", "H_Bandanna_khk", "H_Booniehat_tan", "H_Bandanna_khk", "H_Beret_02", "H_Watchcap_khk", "H_Watchcap_blk", "H_Booniehat_dgtl", "H_Cap_tan_specops_US", "H_MilCap_gen_F", "H_Booniehat_indp", "H_Bandanna_mcamo", "H_Booniehat_dirty", "H_Watchcap_camo", "H_Cap_khaki_specops_UK", "H_Booniehat_khk", "H_Shemag_tan", "H_Bandanna_camo", "H_Cap_blk_Syndikat_F", "H_Cap_grn_Syndikat_F", "H_Shemag_olive_hs", "H_BandMask_blk", "H_Booniehat_dgtl", "H_Booniehat_indp", "H_Booniehat_khk", "H_Booniehat_khk", "H_MilCap_gen_F", "H_Shemag_khk", "H_TurbanO_blk", "H_Watchcap_khk", "H_Booniehat_khk_hs", "H_FakeHeadgear_Syndikat_F", "H_Beret_Colonel", "H_Shemag_olive", "H_Cap_brn_SPECOPS", "H_Beret_blk", "H_Booniehat_tan", "H_Cap_tan_Syndikat_F", "H_Booniehat_khk_hs", "H_Bandanna_sgg", "H_Booniehat_grn", "H_Watchcap_sgg", "H_Bandanna_gry", "H_Bandanna_khk_hs", "H_Cap_grn_Syndikat_F", "H_Cap_brn_SPECOPS", "H_Booniehat_khk_hs", "H_Cap_khaki_specops_UK", "H_MilCap_tna_F", "H_Beret_grn_SF", "H_Booniehat_dirty", "H_Cap_oli_Syndikat_F", "H_Bandanna_khk_hs", "H_BandMask_blk", "H_Booniehat_tna_F", "H_Hat_camo", "H_Bandanna_sgg", "H_Bandanna_cbr", "H_Hat_camo", "H_Booniehat_indp", "H_ShemagOpen_khk", "H_Booniehat_grn", "H_Cap_brn_SPECOPS", "H_Beret_brn_SF", "H_Cap_tan_specops_US", "H_ShemagOpen_tan", "H_MilCap_ghex_F", "H_Cap_blk_Syndikat_F", "H_MilCap_ghex_F", "H_Booniehat_tan", "H_Hat_camo", "H_Booniehat_mcamo", "H_Booniehat_dirty", "H_Booniehat_khk_hs", "Exile_Headgear_GasMask", "H_BandMask_blk", "H_Booniehat_mcamo", "H_Booniehat_grn", "H_Beret_red", "H_FakeHeadgear_Syndikat_F", "H_Bandanna_camo", "H_MilCap_tna_F", "H_Watchcap_camo", "H_Bandanna_sgg", "H_Booniehat_khk", "H_Bandanna_cbr", "H_Booniehat_tna_F", "H_ShemagOpen_tan", "H_Booniehat_dgtl", "Exile_Headgear_GasMask", "H_Booniehat_mcamo", "H_Bandanna_mcamo", "H_Booniehat_mcamo", "H_Beret_grn", "H_Bandanna_cbr", "H_Booniehat_grn", "H_Watchcap_blk", "H_Cap_tan_specops_US", "H_Bandanna_khk_hs", "H_TurbanO_blk", "H_Cap_khaki_specops_UK", "H_Shemag_olive_hs", "H_Watchcap_sgg", "H_Booniehat_indp", "H_Booniehat_dgtl", "H_Bandanna_khk", "Exile_Headgear_GasMask", "H_Shemag_olive", "H_Bandanna_gry", "H_Cap_tan_Syndikat_F", "H_Shemag_khk", "H_ShemagOpen_khk", "H_Bandanna_gry", "H_Cap_oli_Syndikat_F", "H_Bandanna_mcamo", "H_Beret_ocamo", "H_Bandanna_camo", "H_Booniehat_tan", "H_Booniehat_dirty", "H_Shemag_tan"};

		/*
			Percental Item Spawn Chances of MilitaryClothing:

			U_B_Wetsuit                   = 1.32%
			U_I_OfficerUniform            = 1.32%
			U_I_Wetsuit                   = 1.32%
			U_O_CombatUniform_ocamo       = 1.32%
			U_O_CombatUniform_oucamo      = 1.32%
			U_O_OfficerUniform_ocamo      = 1.32%
			U_O_SpecopsUniform_blk        = 1.32%
			U_O_SpecopsUniform_ocamo      = 1.32%
			U_O_V_Soldier_Viper_F         = 1.32%
			U_O_V_Soldier_Viper_hex_F     = 1.32%
			U_O_Wetsuit                   = 1.32%
			U_B_SpecopsUniform_sgg        = 1.97%
			U_B_HeliPilotCoveralls        = 2.63%
			U_B_PilotCoveralls            = 2.63%
			U_I_CombatUniform             = 2.63%
			U_I_CombatUniform_shortsleeve = 2.63%
			U_I_CombatUniform_tshirt      = 2.63%
			U_I_HeliPilotCoveralls        = 2.63%
			U_I_pilotCoveralls            = 2.63%
			U_O_PilotCoveralls            = 2.63%
			U_B_CombatUniform_mcam        = 3.29%
			U_B_CombatUniform_mcam_tshirt = 3.29%
			U_B_CombatUniform_mcam_vest   = 3.29%
			U_B_CombatUniform_mcam_worn   = 3.29%
			U_B_CTRG_1                    = 3.29%
			U_B_CTRG_2                    = 3.29%
			U_B_CTRG_3                    = 3.29%
			U_B_CTRG_Soldier_2_F          = 3.29%
			U_B_CTRG_Soldier_3_F          = 3.29%
			U_B_CTRG_Soldier_F            = 3.29%
			U_B_CTRG_Soldier_urb_1_F      = 3.29%
			U_B_CTRG_Soldier_urb_2_F      = 3.29%
			U_B_CTRG_Soldier_urb_3_F      = 3.29%
			U_B_GEN_Commander_F           = 3.29%
			U_B_GEN_Soldier_F             = 3.29%
			U_B_T_Soldier_AR_F            = 3.29%
			U_B_T_Soldier_SL_F            = 3.29%
			U_O_T_Officer_F               = 3.29%
			U_O_T_Soldier_F               = 3.29%
		*/
		MilitaryClothing[] = {"U_B_CTRG_Soldier_F", "U_I_pilotCoveralls", "U_B_GEN_Commander_F", "U_B_CTRG_3", "U_I_CombatUniform_tshirt", "U_O_OfficerUniform_ocamo", "U_B_CTRG_1", "U_B_T_Soldier_SL_F", "U_B_HeliPilotCoveralls", "U_B_CTRG_Soldier_urb_2_F", "U_B_CTRG_Soldier_urb_2_F", "U_B_PilotCoveralls", "U_B_CTRG_Soldier_3_F", "U_B_T_Soldier_SL_F", "U_O_Wetsuit", "U_B_CombatUniform_mcam_worn", "U_O_T_Soldier_F", "U_O_SpecopsUniform_blk", "U_B_T_Soldier_SL_F", "U_B_CTRG_1", "U_O_CombatUniform_oucamo", "U_O_T_Soldier_F", "U_I_CombatUniform", "U_B_GEN_Soldier_F", "U_I_HeliPilotCoveralls", "U_I_pilotCoveralls", "U_B_CTRG_3", "U_I_CombatUniform", "U_B_CombatUniform_mcam_worn", "U_B_CombatUniform_mcam_vest", "U_B_CTRG_Soldier_F", "U_B_CTRG_Soldier_3_F", "U_I_Wetsuit", "U_O_Wetsuit", "U_I_pilotCoveralls", "U_B_CombatUniform_mcam_worn", "U_B_CTRG_Soldier_urb_3_F", "U_B_CTRG_Soldier_2_F", "U_B_CombatUniform_mcam_tshirt", "U_B_T_Soldier_AR_F", "U_O_OfficerUniform_ocamo", "U_B_SpecopsUniform_sgg", "U_B_CombatUniform_mcam", "U_B_CombatUniform_mcam_tshirt", "U_O_SpecopsUniform_ocamo", "U_B_CombatUniform_mcam_tshirt", "U_O_PilotCoveralls", "U_B_CombatUniform_mcam_vest", "U_B_CTRG_Soldier_3_F", "U_B_T_Soldier_SL_F", "U_I_OfficerUniform", "U_B_SpecopsUniform_sgg", "U_B_CombatUniform_mcam_tshirt", "U_B_CTRG_2", "U_I_CombatUniform_shortsleeve", "U_O_CombatUniform_ocamo", "U_B_CTRG_Soldier_F", "U_B_CTRG_Soldier_3_F", "U_B_T_Soldier_AR_F", "U_O_T_Soldier_F", "U_B_CTRG_Soldier_urb_1_F", "U_I_CombatUniform_shortsleeve", "U_B_T_Soldier_AR_F", "U_B_HeliPilotCoveralls", "U_B_T_Soldier_SL_F", "U_B_CTRG_1", "U_B_CTRG_Soldier_urb_3_F", "U_I_HeliPilotCoveralls", "U_B_CombatUniform_mcam_vest", "U_O_T_Officer_F", "U_B_CTRG_Soldier_urb_3_F", "U_B_CTRG_Soldier_2_F", "U_O_V_Soldier_Viper_F", "U_O_T_Soldier_F", "U_B_GEN_Commander_F", "U_O_SpecopsUniform_blk", "U_B_GEN_Commander_F", "U_I_HeliPilotCoveralls", "U_B_CTRG_2", "U_B_Wetsuit", "U_O_PilotCoveralls", "U_B_CTRG_Soldier_urb_2_F", "U_B_PilotCoveralls", "U_B_GEN_Commander_F", "U_B_CTRG_Soldier_urb_2_F", "U_B_CTRG_3", "U_B_GEN_Soldier_F", "U_B_CombatUniform_mcam", "U_B_CTRG_Soldier_urb_1_F", "U_B_CombatUniform_mcam", "U_B_PilotCoveralls", "U_O_V_Soldier_Viper_hex_F", "U_O_SpecopsUniform_ocamo", "U_I_CombatUniform_shortsleeve", "U_B_CTRG_Soldier_F", "U_B_PilotCoveralls", "U_O_T_Officer_F", "U_B_CTRG_Soldier_urb_1_F", "U_O_V_Soldier_Viper_hex_F", "U_B_CombatUniform_mcam_worn", "U_B_CTRG_1", "U_B_CTRG_2", "U_I_OfficerUniform", "U_B_T_Soldier_AR_F", "U_B_CTRG_Soldier_urb_2_F", "U_B_CTRG_Soldier_3_F", "U_B_CTRG_3", "U_O_CombatUniform_oucamo", "U_B_HeliPilotCoveralls", "U_B_GEN_Soldier_F", "U_B_CTRG_2", "U_B_CTRG_Soldier_2_F", "U_O_PilotCoveralls", "U_O_V_Soldier_Viper_F", "U_B_CombatUniform_mcam_worn", "U_B_CTRG_Soldier_urb_1_F", "U_B_CTRG_Soldier_F", "U_B_CombatUniform_mcam_vest", "U_I_CombatUniform_tshirt", "U_I_CombatUniform", "U_B_GEN_Soldier_F", "U_B_GEN_Soldier_F", "U_B_CombatUniform_mcam", "U_O_T_Officer_F", "U_I_Wetsuit", "U_O_T_Officer_F", "U_I_HeliPilotCoveralls", "U_B_T_Soldier_AR_F", "U_B_GEN_Commander_F", "U_I_CombatUniform_shortsleeve", "U_B_HeliPilotCoveralls", "U_I_pilotCoveralls", "U_B_CombatUniform_mcam", "U_B_CTRG_Soldier_urb_3_F", "U_B_SpecopsUniform_sgg", "U_I_CombatUniform_tshirt", "U_O_CombatUniform_ocamo", "U_I_CombatUniform_tshirt", "U_B_CTRG_2", "U_I_CombatUniform", "U_B_CTRG_3", "U_B_CTRG_Soldier_urb_1_F", "U_B_Wetsuit", "U_B_CTRG_Soldier_urb_3_F", "U_B_CTRG_Soldier_2_F", "U_O_PilotCoveralls", "U_O_T_Soldier_F", "U_B_CTRG_1", "U_B_CombatUniform_mcam_vest", "U_B_CombatUniform_mcam_tshirt", "U_B_CTRG_Soldier_2_F", "U_O_T_Officer_F"};

		/*
			Percental Item Spawn Chances of MilitaryBackpacks:

			B_Bergen_Base_F   = 5.26%
			B_Bergen_dgtl_F   = 5.26%
			B_Bergen_hex_F    = 5.26%
			B_Bergen_mcamo_F  = 5.26%
			B_Bergen_tna_F    = 5.26%
			B_Carryall_mcamo  = 10.53%
			B_Carryall_ocamo  = 10.53%
			B_Carryall_oucamo = 10.53%
			B_Carryall_khk    = 10.53%
			B_Carryall_oli    = 10.53%
			B_Carryall_cbr    = 10.53%
			B_Carryall_ghex_F = 10.53%
		*/
		MilitaryBackpacks[] = {"B_Carryall_oucamo", "B_Bergen_tna_F", "B_Carryall_oucamo", "B_Carryall_khk", "B_Bergen_Base_F", "B_Carryall_mcamo", "B_Carryall_oli", "B_Carryall_ghex_F", "B_Carryall_cbr", "B_Carryall_oli", "B_Carryall_khk", "B_Carryall_cbr", "B_Carryall_ghex_F", "B_Carryall_ocamo", "B_Bergen_mcamo_F", "B_Bergen_hex_F", "B_Carryall_mcamo", "B_Bergen_dgtl_F", "B_Carryall_ocamo"};

		/*
			Percental Item Spawn Chances of MilitaryVests:

			V_PlateCarrierH_CTRG    = 5.00%
			V_PlateCarrierL_CTRG    = 5.00%
			V_PlateCarrier1_blk     = 10.00%
			V_PlateCarrier1_rgr     = 10.00%
			V_PlateCarrier2_rgr     = 10.00%
			V_PlateCarrier3_rgr     = 10.00%
			V_PlateCarrierGL_rgr    = 10.00%
			V_PlateCarrierIA1_dgtl  = 10.00%
			V_PlateCarrierIA2_dgtl  = 10.00%
			V_PlateCarrierIAGL_dgtl = 10.00%
			V_PlateCarrierSpec_rgr  = 10.00%
		*/
		MilitaryVests[] = {"V_PlateCarrierIAGL_dgtl", "V_PlateCarrierSpec_rgr", "V_PlateCarrier1_blk", "V_PlateCarrierH_CTRG", "V_PlateCarrierL_CTRG", "V_PlateCarrier2_rgr", "V_PlateCarrierGL_rgr", "V_PlateCarrierIA1_dgtl", "V_PlateCarrier2_rgr", "V_PlateCarrier1_rgr", "V_PlateCarrierIA1_dgtl", "V_PlateCarrierIA2_dgtl", "V_PlateCarrier3_rgr", "V_PlateCarrierSpec_rgr", "V_PlateCarrier1_rgr", "V_PlateCarrierIAGL_dgtl", "V_PlateCarrierGL_rgr", "V_PlateCarrier1_blk", "V_PlateCarrierIA2_dgtl", "V_PlateCarrier3_rgr"};

		/*
			Percental Item Spawn Chances of MilitaryHeadgear:

			H_CrewHelmetHeli_B        = 0.81%
			H_CrewHelmetHeli_I        = 0.81%
			H_CrewHelmetHeli_O        = 0.81%
			H_HelmetB_camo            = 0.81%
			H_HelmetCrew_B            = 0.81%
			H_HelmetCrew_I            = 0.81%
			H_HelmetCrew_O            = 0.81%
			H_HelmetLeaderO_ocamo     = 0.81%
			H_HelmetLeaderO_oucamo    = 0.81%
			H_HelmetO_ghex_F          = 0.81%
			H_HelmetO_ocamo           = 0.81%
			H_HelmetO_oucamo          = 0.81%
			H_HelmetSpecO_blk         = 0.81%
			H_HelmetSpecO_ocamo       = 0.81%
			H_PilotHelmetFighter_B    = 0.81%
			H_PilotHelmetFighter_I    = 0.81%
			H_PilotHelmetFighter_O    = 0.81%
			H_PilotHelmetHeli_B       = 0.81%
			H_PilotHelmetHeli_I       = 0.81%
			H_PilotHelmetHeli_O       = 0.81%
			H_BandMask_demon          = 1.63%
			H_BandMask_khk            = 1.63%
			H_BandMask_reaper         = 1.63%
			H_Beret_gen_F             = 1.63%
			H_Helmet_Skate            = 1.63%
			H_HelmetB_black           = 1.63%
			H_HelmetB_desert          = 1.63%
			H_HelmetB_Enh_tna_F       = 1.63%
			H_HelmetB_grass           = 1.63%
			H_HelmetB_light_black     = 1.63%
			H_HelmetB_light_desert    = 1.63%
			H_HelmetB_light_grass     = 1.63%
			H_HelmetB_light_sand      = 1.63%
			H_HelmetB_light_snakeskin = 1.63%
			H_HelmetB_Light_tna_F     = 1.63%
			H_HelmetB_sand            = 1.63%
			H_HelmetB_snakeskin       = 1.63%
			H_HelmetB_TI_tna_F        = 1.63%
			H_HelmetB_tna_F           = 1.63%
			H_HelmetCrew_O_ghex_F     = 1.63%
			H_HelmetIA_camo           = 1.63%
			H_HelmetIA_net            = 1.63%
			H_HelmetLeaderO_ghex_F    = 1.63%
			H_HelmetSpecO_ghex_F      = 1.63%
			H_HelmetB                 = 2.44%
			H_HelmetB_light           = 2.44%
			H_HelmetB_paint           = 2.44%
			H_HelmetB_plain_blk       = 2.44%
			H_HelmetIA                = 2.44%
			H_HelmetSpecB             = 2.44%
			H_HelmetSpecB_blk         = 2.44%
			H_HelmetSpecB_paint1      = 2.44%
			H_HelmetSpecB_paint2      = 2.44%
			Exile_Headgear_GasMask    = 3.25%
			H_MilCap_blue             = 3.25%
			H_MilCap_dgtl             = 3.25%
			H_MilCap_mcamo            = 3.25%
			H_MilCap_ocamo            = 3.25%
			H_MilCap_oucamo           = 3.25%
			H_MilCap_rucamo           = 3.25%
		*/
		MilitaryHeadgear[] = {"H_MilCap_blue", "H_Beret_gen_F", "H_HelmetB_light_desert", "H_HelmetSpecB", "H_HelmetB_light_black", "H_HelmetSpecB_paint1", "H_MilCap_oucamo", "Exile_Headgear_GasMask", "H_MilCap_ocamo", "H_HelmetIA_camo", "H_HelmetCrew_O_ghex_F", "H_HelmetB_light_grass", "H_HelmetSpecO_blk", "H_MilCap_dgtl", "H_HelmetSpecB_blk", "H_HelmetB_light", "H_HelmetSpecB_paint2", "H_Helmet_Skate", "H_BandMask_demon", "H_BandMask_reaper", "H_HelmetB_grass", "H_PilotHelmetHeli_O", "H_MilCap_rucamo", "H_MilCap_blue", "H_HelmetB_light_sand", "H_HelmetB_black", "H_HelmetB_TI_tna_F", "H_HelmetB_light", "H_HelmetSpecB", "H_MilCap_dgtl", "H_MilCap_oucamo", "H_HelmetB_Light_tna_F", "H_HelmetCrew_O_ghex_F", "H_HelmetB_tna_F", "H_BandMask_demon", "H_HelmetB_grass", "H_Beret_gen_F", "H_HelmetB_plain_blk", "H_HelmetB", "H_HelmetB_sand", "H_MilCap_dgtl", "H_MilCap_rucamo", "H_HelmetSpecB_blk", "H_MilCap_ocamo", "H_HelmetB_Enh_tna_F", "H_HelmetB_Enh_tna_F", "H_HelmetB_TI_tna_F", "H_HelmetIA", "H_Helmet_Skate", "H_CrewHelmetHeli_O", "H_HelmetB_light_sand", "H_HelmetCrew_O", "H_HelmetO_ocamo", "H_MilCap_dgtl", "H_MilCap_mcamo", "H_HelmetB_sand", "H_PilotHelmetHeli_B", "H_PilotHelmetFighter_O", "H_HelmetB_snakeskin", "H_BandMask_khk", "H_HelmetSpecO_ghex_F", "H_HelmetIA_net", "H_MilCap_ocamo", "H_HelmetB_desert", "H_PilotHelmetFighter_I", "H_MilCap_mcamo", "H_HelmetLeaderO_ocamo", "H_MilCap_mcamo", "H_HelmetCrew_I", "H_HelmetB_plain_blk", "H_HelmetO_oucamo", "Exile_Headgear_GasMask", "H_HelmetB_light_black", "H_CrewHelmetHeli_I", "H_HelmetB_light_snakeskin", "H_MilCap_ocamo", "H_HelmetIA_net", "H_HelmetSpecB_paint1", "H_BandMask_reaper", "H_HelmetB_tna_F", "H_HelmetB_plain_blk", "H_HelmetB_black", "H_HelmetB_desert", "H_HelmetB", "H_HelmetLeaderO_ghex_F", "H_HelmetLeaderO_ghex_F", "H_HelmetB_snakeskin", "H_HelmetB_light", "Exile_Headgear_GasMask", "H_HelmetIA_camo", "H_HelmetB_paint", "H_MilCap_rucamo", "H_HelmetSpecO_ocamo", "H_HelmetB_paint", "H_HelmetSpecB", "H_HelmetB_light_grass", "H_MilCap_mcamo", "H_HelmetIA", "H_HelmetIA", "H_HelmetLeaderO_oucamo", "H_HelmetB_light_snakeskin", "H_MilCap_blue", "H_CrewHelmetHeli_B", "H_MilCap_blue", "H_HelmetSpecB_paint1", "H_MilCap_rucamo", "H_HelmetSpecB_paint2", "H_MilCap_oucamo", "H_HelmetB_paint", "H_HelmetB_Light_tna_F", "H_HelmetSpecO_ghex_F", "H_PilotHelmetFighter_B", "H_PilotHelmetHeli_I", "H_HelmetCrew_B", "H_BandMask_khk", "H_HelmetB_camo", "H_HelmetSpecB_blk", "H_HelmetSpecB_paint2", "H_HelmetB_light_desert", "H_HelmetO_ghex_F", "Exile_Headgear_GasMask", "H_HelmetB", "H_MilCap_oucamo"};

		/*
			Percental Item Spawn Chances of Ghillies:

			U_B_GhillieSuit = 33.33%
			U_O_GhillieSuit = 33.33%
			U_I_GhillieSuit = 33.33%
		*/
		Ghillies[] = {"U_I_GhillieSuit", "U_B_GhillieSuit", "U_O_GhillieSuit"};

		/*
			Percental Item Spawn Chances of DLCGhillies:

			U_B_FullGhillie_ard     = 2.94%
			U_B_FullGhillie_lsh     = 2.94%
			U_B_FullGhillie_sard    = 2.94%
			U_O_FullGhillie_ard     = 2.94%
			U_O_FullGhillie_lsh     = 2.94%
			U_O_FullGhillie_sard    = 2.94%
			U_I_FullGhillie_ard     = 2.94%
			U_I_FullGhillie_lsh     = 2.94%
			U_I_FullGhillie_sard    = 2.94%
			U_B_T_Sniper_F          = 14.71%
			U_B_T_Soldier_F         = 14.71%
			U_B_T_FullGhillie_tna_F = 14.71%
			U_O_T_Sniper_F          = 14.71%
			U_O_T_FullGhillie_tna_F = 14.71%
		*/
		DLCGhillies[] = {"U_B_T_FullGhillie_tna_F", "U_O_FullGhillie_sard", "U_O_FullGhillie_ard", "U_O_T_FullGhillie_tna_F", "U_B_FullGhillie_lsh", "U_B_T_Soldier_F", "U_I_FullGhillie_ard", "U_I_FullGhillie_sard", "U_B_T_Soldier_F", "U_O_T_Sniper_F", "U_B_T_Sniper_F", "U_O_T_FullGhillie_tna_F", "U_O_T_FullGhillie_tna_F", "U_I_FullGhillie_lsh", "U_B_T_FullGhillie_tna_F", "U_B_T_Soldier_F", "U_O_T_Sniper_F", "U_B_T_Sniper_F", "U_B_T_FullGhillie_tna_F", "U_B_T_FullGhillie_tna_F", "U_B_FullGhillie_ard", "U_O_T_Sniper_F", "U_B_FullGhillie_sard", "U_B_T_Soldier_F", "U_O_T_FullGhillie_tna_F", "U_O_T_Sniper_F", "U_O_T_Sniper_F", "U_B_T_Sniper_F", "U_B_T_Sniper_F", "U_B_T_Soldier_F", "U_O_T_FullGhillie_tna_F", "U_B_T_FullGhillie_tna_F", "U_B_T_Sniper_F", "U_O_FullGhillie_lsh"};

		/*
			Percental Item Spawn Chances of DLCVests:

			V_PlateCarrierGL_blk         = 4.76%
			V_PlateCarrierGL_mtp         = 4.76%
			V_PlateCarrierGL_rgr         = 4.76%
			V_PlateCarrierIAGL_dgtl      = 4.76%
			V_PlateCarrierIAGL_oli       = 4.76%
			V_PlateCarrierSpec_blk       = 4.76%
			V_PlateCarrierSpec_mtp       = 4.76%
			V_PlateCarrierSpec_rgr       = 4.76%
			V_TacChestrig_grn_F          = 4.76%
			V_TacChestrig_oli_F          = 4.76%
			V_TacChestrig_cbr_F          = 4.76%
			V_PlateCarrier1_tna_F        = 4.76%
			V_PlateCarrier2_tna_F        = 4.76%
			V_PlateCarrierSpec_tna_F     = 4.76%
			V_PlateCarrierGL_tna_F       = 4.76%
			V_HarnessO_ghex_F            = 4.76%
			V_HarnessOGL_ghex_F          = 4.76%
			V_BandollierB_ghex_F         = 4.76%
			V_TacVest_gen_F              = 4.76%
			V_PlateCarrier1_rgr_noflag_F = 4.76%
			V_PlateCarrier2_rgr_noflag_F = 4.76%
		*/
		DLCVests[] = {"V_HarnessO_ghex_F", "V_PlateCarrier1_rgr_noflag_F", "V_PlateCarrierGL_rgr", "V_PlateCarrierSpec_mtp", "V_PlateCarrierSpec_blk", "V_PlateCarrier2_tna_F", "V_TacChestrig_grn_F", "V_TacVest_gen_F", "V_HarnessOGL_ghex_F", "V_PlateCarrier1_tna_F", "V_PlateCarrierGL_mtp", "V_PlateCarrier2_rgr_noflag_F", "V_PlateCarrierSpec_rgr", "V_PlateCarrierGL_blk", "V_PlateCarrierIAGL_oli", "V_TacChestrig_oli_F", "V_PlateCarrierIAGL_dgtl", "V_PlateCarrierGL_tna_F", "V_TacChestrig_cbr_F", "V_PlateCarrierSpec_tna_F", "V_BandollierB_ghex_F"};

		/*
			Percental Item Spawn Chances of Rebreathers:

			V_RebreatherB  = 33.33%
			V_RebreatherIR = 33.33%
			V_RebreatherIA = 33.33%
		*/
		Rebreathers[] = {"V_RebreatherIA", "V_RebreatherIR", "V_RebreatherB"};

		/*
			Percental Item Spawn Chances of MedicalItems:

			Exile_Item_InstaDoc  = 9.09%
			Exile_Item_Bandage   = 18.18%
			Exile_Item_Vishpirin = 36.36%
			Exile_Item_Heatpack  = 36.36%
		*/
		MedicalItems[] = {"Exile_Item_Heatpack", "Exile_Item_Vishpirin", "Exile_Item_Vishpirin", "Exile_Item_Heatpack", "Exile_Item_Bandage", "Exile_Item_Vishpirin", "Exile_Item_InstaDoc", "Exile_Item_Heatpack", "Exile_Item_Bandage", "Exile_Item_Vishpirin", "Exile_Item_Heatpack"};

		/*
			Percental Item Spawn Chances of IndustrialItems:

			Exile_Item_ThermalScannerPro    = 0.66%
			Exile_Item_Knife                = 1.32%
			Exile_Item_Cement               = 1.97%
			Exile_Item_FloodLightKit        = 1.97%
			Exile_Item_PortableGeneratorKit = 1.97%
			Exile_Item_CamoTentKit          = 2.63%
			Exile_Item_MetalBoard           = 2.63%
			Exile_Item_Foolbox              = 2.63%
			Exile_Item_Sand                 = 2.63%
			Exile_Item_Grinder              = 3.29%
			Exile_Item_MetalScrews          = 3.29%
			Exile_Melee_SledgeHammer        = 3.29%
			Exile_Item_ExtensionCord        = 5.26%
			Exile_Item_LightBulb            = 5.92%
			Exile_Item_WaterCanisterEmpty   = 6.58%
			Exile_Melee_Shovel              = 6.58%
			Exile_Item_JunkMetal            = 7.24%
			Exile_Item_Handsaw              = 8.55%
			Exile_Item_Pliers               = 8.55%
			Exile_Item_ScrewDriver          = 8.55%
			Exile_Melee_Axe                 = 14.47%
		*/
		IndustrialItems[] = {"Exile_Item_ScrewDriver", "Exile_Item_ScrewDriver", "Exile_Item_Handsaw", "Exile_Item_Knife", "Exile_Item_WaterCanisterEmpty", "Exile_Item_ScrewDriver", "Exile_Item_FloodLightKit", "Exile_Item_JunkMetal", "Exile_Melee_SledgeHammer", "Exile_Item_ScrewDriver", "Exile_Item_Foolbox", "Exile_Item_LightBulb", "Exile_Melee_Axe", "Exile_Item_Knife", "Exile_Melee_Shovel", "Exile_Item_WaterCanisterEmpty", "Exile_Item_Handsaw", "Exile_Item_JunkMetal", "Exile_Item_JunkMetal", "Exile_Item_Sand", "Exile_Item_Handsaw", "Exile_Item_Handsaw", "Exile_Item_Pliers", "Exile_Item_ScrewDriver", "Exile_Item_Pliers", "Exile_Item_ExtensionCord", "Exile_Item_WaterCanisterEmpty", "Exile_Item_JunkMetal", "Exile_Item_Sand", "Exile_Item_Sand", "Exile_Item_Pliers", "Exile_Item_Cement", "Exile_Item_JunkMetal", "Exile_Melee_Shovel", "Exile_Item_Sand", "Exile_Item_WaterCanisterEmpty", "Exile_Item_ScrewDriver", "Exile_Item_Grinder", "Exile_Melee_SledgeHammer", "Exile_Item_CamoTentKit", "Exile_Item_LightBulb", "Exile_Melee_Shovel", "Exile_Item_Handsaw", "Exile_Item_Grinder", "Exile_Melee_Shovel", "Exile_Item_Pliers", "Exile_Item_ExtensionCord", "Exile_Item_Grinder", "Exile_Item_PortableGeneratorKit", "Exile_Melee_Axe", "Exile_Item_LightBulb", "Exile_Item_MetalScrews", "Exile_Item_ScrewDriver", "Exile_Melee_Axe", "Exile_Item_Handsaw", "Exile_Item_Pliers", "Exile_Melee_Axe", "Exile_Item_Handsaw", "Exile_Melee_Shovel", "Exile_Item_JunkMetal", "Exile_Item_LightBulb", "Exile_Item_ExtensionCord", "Exile_Item_ExtensionCord", "Exile_Item_ThermalScannerPro", "Exile_Item_ScrewDriver", "Exile_Item_WaterCanisterEmpty", "Exile_Item_Cement", "Exile_Item_Handsaw", "Exile_Item_Handsaw", "Exile_Item_ExtensionCord", "Exile_Item_MetalBoard", "Exile_Melee_SledgeHammer", "Exile_Melee_Axe", "Exile_Item_Handsaw", "Exile_Melee_Axe", "Exile_Item_LightBulb", "Exile_Item_MetalScrews", "Exile_Item_Foolbox", "Exile_Item_CamoTentKit", "Exile_Item_PortableGeneratorKit", "Exile_Item_Cement", "Exile_Melee_Axe", "Exile_Item_ScrewDriver", "Exile_Item_LightBulb", "Exile_Item_Pliers", "Exile_Item_Pliers", "Exile_Item_MetalBoard", "Exile_Melee_Axe", "Exile_Item_ScrewDriver", "Exile_Melee_Axe", "Exile_Item_MetalBoard", "Exile_Item_ExtensionCord", "Exile_Item_Grinder", "Exile_Item_ExtensionCord", "Exile_Item_MetalBoard", "Exile_Item_Pliers", "Exile_Item_ScrewDriver", "Exile_Item_JunkMetal", "Exile_Item_Handsaw", "Exile_Melee_Axe", "Exile_Item_LightBulb", "Exile_Melee_Shovel", "Exile_Melee_Axe", "Exile_Item_WaterCanisterEmpty", "Exile_Item_Grinder", "Exile_Item_WaterCanisterEmpty", "Exile_Item_JunkMetal", "Exile_Item_FloodLightKit", "Exile_Item_ScrewDriver", "Exile_Melee_Shovel", "Exile_Item_Pliers", "Exile_Item_MetalScrews", "Exile_Melee_Axe", "Exile_Melee_Shovel", "Exile_Item_PortableGeneratorKit", "Exile_Melee_Axe", "Exile_Item_Pliers", "Exile_Melee_Axe", "Exile_Item_Handsaw", "Exile_Item_Handsaw", "Exile_Item_JunkMetal", "Exile_Item_JunkMetal", "Exile_Melee_Axe", "Exile_Item_WaterCanisterEmpty", "Exile_Item_MetalScrews", "Exile_Melee_Axe", "Exile_Item_Foolbox", "Exile_Item_Pliers", "Exile_Item_Pliers", "Exile_Item_ExtensionCord", "Exile_Melee_Axe", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_Shovel", "Exile_Item_MetalScrews", "Exile_Melee_Axe", "Exile_Item_Foolbox", "Exile_Melee_SledgeHammer", "Exile_Melee_SledgeHammer", "Exile_Melee_Axe", "Exile_Item_Pliers", "Exile_Melee_Axe", "Exile_Item_ScrewDriver", "Exile_Item_CamoTentKit", "Exile_Item_LightBulb", "Exile_Melee_Axe", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_Axe", "Exile_Melee_Shovel", "Exile_Item_LightBulb", "Exile_Item_FloodLightKit", "Exile_Item_JunkMetal", "Exile_Item_CamoTentKit"};

		/*
			Percental Item Spawn Chances of Vehicle:

			Exile_Item_FuelCanisterFull  = 40.00%
			Exile_Item_FuelCanisterEmpty = 50.00%
			Exile_Item_DuctTape          = 10.00%
		*/
		Vehicle[] = {"Exile_Item_DuctTape", "Exile_Item_FuelCanisterFull", "Exile_Item_FuelCanisterFull", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterFull", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterFull", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterEmpty"};

		/*
			Percental Item Spawn Chances of Chemlights:

			Chemlight_blue   = 25.00%
			Chemlight_green  = 25.00%
			Chemlight_red    = 25.00%
			Chemlight_yellow = 25.00%
		*/
		Chemlights[] = {"Chemlight_yellow", "Chemlight_green", "Chemlight_red", "Chemlight_blue"};

		/*
			Percental Item Spawn Chances of RoadFlares:

			FlareGreen_F  = 25.00%
			FlareRed_F    = 25.00%
			FlareWhite_F  = 25.00%
			FlareYellow_F = 25.00%
		*/
		RoadFlares[] = {"FlareGreen_F", "FlareYellow_F", "FlareRed_F", "FlareWhite_F"};

		/*
			Percental Item Spawn Chances of SmokeGrenades:

			SmokeShell       = 14.29%
			SmokeShellRed    = 14.29%
			SmokeShellGreen  = 14.29%
			SmokeShellYellow = 14.29%
			SmokeShellPurple = 14.29%
			SmokeShellBlue   = 14.29%
			SmokeShellOrange = 14.29%
		*/
		SmokeGrenades[] = {"SmokeShellRed", "SmokeShell", "SmokeShellBlue", "SmokeShellYellow", "SmokeShellPurple", "SmokeShellOrange", "SmokeShellGreen"};

		/*
			Percental Item Spawn Chances of Restraints:

			Exile_Item_ZipTie = 100.00%
		*/
		Restraints[] = {"Exile_Item_ZipTie"};

		/*
			Percental Item Spawn Chances of Electronics:

			Exile_Item_Laptop        = 50.00%
			Exile_Item_BaseCameraKit = 50.00%
		*/
		Electronics[] = {"Exile_Item_Laptop", "Exile_Item_BaseCameraKit"};

		/*
			Percental Item Spawn Chances of Trash:

			Exile_Item_Magazine01         = 6.25%
			Exile_Item_Magazine02         = 6.25%
			Exile_Item_Magazine03         = 6.25%
			Exile_Item_Magazine04         = 6.25%
			Exile_Item_Can_Empty          = 25.00%
			Exile_Item_PlasticBottleEmpty = 25.00%
			Exile_Item_ToiletPaper        = 25.00%
		*/
		Trash[] = {"Exile_Item_Can_Empty", "Exile_Item_ToiletPaper", "Exile_Item_PlasticBottleEmpty", "Exile_Item_Magazine01", "Exile_Item_ToiletPaper", "Exile_Item_ToiletPaper", "Exile_Item_Can_Empty", "Exile_Item_PlasticBottleEmpty", "Exile_Item_Can_Empty", "Exile_Item_PlasticBottleEmpty", "Exile_Item_Magazine02", "Exile_Item_Magazine04", "Exile_Item_ToiletPaper", "Exile_Item_Can_Empty", "Exile_Item_PlasticBottleEmpty", "Exile_Item_Magazine03"};

		/*
			Percental Item Spawn Chances of Unused:

			Exile_Item_CordlessScrewdriver = 11.11%
			Exile_Item_FireExtinguisher    = 11.11%
			Exile_Item_Rope                = 11.11%
			Exile_Item_Carwheel            = 11.11%
			Exile_Item_Defibrillator       = 11.11%
			Exile_Item_SleepingMat         = 11.11%
			Exile_Item_Wrench              = 11.11%
			Exile_Item_OilCanister         = 11.11%
			Exile_Item_Hammer              = 11.11%
		*/
		Unused[] = {"Exile_Item_OilCanister", "Exile_Item_Wrench", "Exile_Item_Carwheel", "Exile_Item_Rope", "Exile_Item_Defibrillator", "Exile_Item_SleepingMat", "Exile_Item_Hammer", "Exile_Item_CordlessScrewdriver", "Exile_Item_FireExtinguisher"};
	};
};
class CfgSettings
{
	///////////////////////////////////////////////////////////////////////
	// Community Base Addons
	///////////////////////////////////////////////////////////////////////
	class CBA 
	{
		// Set this to 1 if you want to have CBA support
		useStackedEH = 0;

		// If you set this to 1 ...........................................
		iReallyWantToGetHackedAndImRetarded = 0;
	};

	///////////////////////////////////////////////////////////////////////
	// GARBAGE COLLECTOR
	///////////////////////////////////////////////////////////////////////
	class GarbageCollector
	{
		/*
			Remark: 
			In 0.9.35 and below, Exile has checked if a player was nearby and then delayed
			the deletion. This check has been removed to save server performance.

			Do NOT touch these if you are not 10000% sure what you do!	
		*/
		class Ingame 
		{
			// Dropped items without fissix
			class GroundWeaponHolder
			{
				lifeTime = 10;
				interval = 5;
			};

			// Dropped items with fissix
			class WeaponHolderSimulated
			{
				lifeTime = 10;
				interval = 5;
			};

			// Corpses and wrecks
			class AllDead 
			{
				lifeTime = 15;
				interval = 5;
			};

			// Loot spawned inside a building
			class Loot 
			{
				lifeTime = 8;
				interval = 1;
			};

			// Never touch this or you will break your sever!
			class Groups 
			{
				interval = 0.5;
			};
		};

		class Database 
		{
			// Remove all deleted items from the database after X days
			permanentlyDeleteTime = 3;
			
			// Remove all territories (and contructions + containers in it) that were not paid after X days
			territoryLifeTime = 7;

			// Remove all containers outside of territories that have not been used for X days
			// Example: Tents
			containerLifeTime = 10;

			// Remove all constructions outside of territories that are older than X days or not moved for X days 
			// Example: Work Benches
			constructionLifeTime = 2;

			// Remove all vehicles that were not moved/used for X days
			vehicleLifeTime = 3;
			
			// Set safe as abandoned
			abandonedTime = 7;
			
			// Deletes a base X days after the flag is stolen if the ransom money isn't paid
			stolenFlagLifeTime = 3;
			
			// Sets door & safe pins to 0000 and marks safes to abandoned X days after the flag is stolen if the ransom money isn't paid
			unlockLifeTime = 2;
		};
	};

	///////////////////////////////////////////////////////////////////////
	// RESPECT, YO
	///////////////////////////////////////////////////////////////////////
	class Respect
	{
		/**
		* Defines the factor of respect you gain for every pop tab in revenue
		*
		* Default: Get 1 respect for every 10 pop tabs 
		*/
		tradingRespectFactor = 0.1;
		
		/**
		* Defines the the minimum amount of Respect earned/lost for a kill
		*/
		minRespectTransfer = 50;

		/**
		* Defines the amount of respect earned/lost for certain types of frags
		*/
		class Frags
		{
			domination = 80;			// Keeps killing the same guy
			letItRain = 150;			// MG, also vehicle MGs
			humiliation = 300;			// Axe
			passenger = 400;			// Out of car/chopper/boat
			roadKill = 200;				// :)
			bigBird = 600;				// Roadkill, but with chopper/plane
			chuteGreaterChopper = 1000;	// Someone flies into chute and chopper/plane explodes	
		};

		class Percentages 
		{
			unlucky = 1; // Dying for an unknown reason costs you 1% respect
			crash = 1; // Crashing your car costs you 1% respect
			suicide = 2; // Comitting suicide costs you 2% of your respect
			friendyFire = 3; // Friendly fire costs you 3% 
			npc = 4; // Being killed by an NPC costs you 4%
			bambiKill = 5; // Killing a bambi costs you 5%
			frag = 5; // Killing someone will get you 5% and remove 5% from the victim
		};

		class Handcuffs 
		{
			trapping = -50;					// A handcuffs B
			breakingFree = 100; 			// B broke free
			releasedByHero = 100; 			// C releases B
			releasedByHostageTaker = 50; 	// A releases B	
		};

		class Bonus
		{
			// Bonus per full 100m 
			per100mDistance = 10;

			// First blood after server restart
			firstBlood = 100;

			// If you kill someone while you are in your own territory
			homie = 20;

			// If you kill someone who is in his own territory
			raid = 20;

			/*
				Example with killstreak = 50

				Frag  Factor   Bonus
				2    * 50      +100
				3    * 50      +150
				4    * 50      +200
				5    * 50      +250
			*/
			killStreak = 50;

			// Kills within this amount of seconds stack (default: 2 minutes)
			killStreakTimeout = 120;
		};
	};

	///////////////////////////////////////////////////////////////////////
	// KILLFEED MAN!
	///////////////////////////////////////////////////////////////////////

	class KillFeed
	{
		// Shows a kill feed for well kills
		showKillFeed = 1;
	};

	///////////////////////////////////////////////////////////////////////
	// PLAYER SPAWN CONFIGURATION
	///////////////////////////////////////////////////////////////////////
	class BambiSettings
	{
		/**
		 * Loadout of new bambi players
		 *
		 * (They will always spawn with a bambi overall - you cannot 
		 * change the loadout uniform)
		 */
		loadOut[] = 
		{
			"ItemCompass",
			"ItemMap", // Because why not
			"Exile_Item_XM8",
			"ItemRadio",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_ExtensionCord"
		};

		/**
		 * Enables or disables parachute spawning.
		 *
		 * 1 = On
		 * 0 = Off
		 */
		parachuteSpawning = 0;

		/**
		 * Enables or disables halo jumping. Only applies 
		 * if parachute spawning is enabled.
		 *
		 * Remember that if you enable halo jump, it is adviced
		 * to adjust the parachuteDropHeight to something around
		 * 1km or so.
		 *
		 * 1 = On
		 * 0 = Off
		 */
		haloJump =0;

		/**
		 * Parachute drop height in meters. 
		 */
		parachuteDropHeight = 1000;

		/**
		 * Number of minutes where a fresh spawned player remains in the
		 * bambi state. It will end the bambi state after this timeout
		 * expired or when they pick up their first weapon. Whatever
		 * happens first.
		 */
		protectionDuration = 5;

		/**
		 * Radius of spawn zones around the center of spawn zone markers.
		 */
		spawnZoneRadius = 500;

		/**
		 * These vehicles spawn on server restart close to spawn zones.
		 * They are non-persistent and will despawn on server restart.
		 * Basically they are just used to get away from the spawn zone
		 * faster.
		 *
		 * {Number of vehicles *per* spawn zone, vehicle class name}
		 */
		spawnZoneVehicles[] =
		{

		};
	};

	///////////////////////////////////////////////////////////////////////
	// VEHICLE SPAWN CONFIGURATION
	///////////////////////////////////////////////////////////////////////

	class VehicleSpawn
	{
		/**
		* Grid Size for vehicle spawning,
		* smaller the number more vehicles,
		* you get the point
		*/
		vehiclesGridSize = 2200;

		/**
		* Vehicle ammount per grid
		* kinda self explanitory
		*/
		vehiclesGridAmount = 2;

		/**
		* Creates global markers for vehicle spawn tweeking,
		* after you are satisfied with vehicle ammount and spread set this to 0.
		*/
		vehiclesDebugMarkers = 0;

		/**
		* The server will apply random damage up to this value when spawning a vehicle.
		*/
		damageChance = 20; // 20% chance for a vehicle HITPOINT to be damaged
		maximumDamage = 0.9;

		/**
		 * If "randmizeFuel" is set to 1, vehicles will spawn with randomized
		 * fuel. In this case, "fuel" controls the percentage of fuel that
		 * can be in the vehicle at a maximum. For example, if you set this to
		 * 0.5, then vehicles will spawn with something random between 0% and 50%.
		 *
		 * If "randomizeFuel" is set to 0, all vehicles will spawn exactly the 
		 * fuel percentage defined in "fuel". For example, setting this to 0.5
		 * will spawn all vehicles with 50% fuel. Setting it to 0 would spawn
		 * all vehicles without fuel.
		 */
		randomizeFuel = 1;
		fuel = 1;

		/**
		 * Works exactly the same as the fuel setting ^
		 */
		randomizeAmmo = 1;
		ammo = 1;

		// Stuff to spawn on water
		water[] = 
		{
			"Exile_Boat_MotorBoat_Police",
			"Exile_Boat_MotorBoat_Orange",
			"Exile_Boat_MotorBoat_White",
			"Exile_Boat_RubberDuck_CSAT",
			"Exile_Boat_RubberDuck_Digital",
			"Exile_Boat_RubberDuck_Orange",
			"Exile_Boat_RubberDuck_Blue",
			"Exile_Boat_RubberDuck_Black",
			"Exile_Boat_SDV_CSAT",
			"Exile_Boat_SDV_Digital",
			"Exile_Boat_SDV_Grey"
		};

		// Stuff to spawn on roads
		ground[] = 
		{
			"Exile_Bike_QuadBike_Black",
			"Exile_Bike_QuadBike_Blue",
			"Exile_Bike_QuadBike_Red",
			"Exile_Bike_QuadBike_White",
			"Exile_Bike_QuadBike_Nato",
			"Exile_Bike_QuadBike_Csat",
			"Exile_Bike_QuadBike_Fia",
			"Exile_Bike_QuadBike_Guerilla01",
			"Exile_Bike_QuadBike_Guerilla02",
			"Exile_Car_Volha_Blue",
			"Exile_Car_Volha_White",
			"Exile_Car_Lada_Green",
			"Exile_Car_Lada_Taxi",
			"Exile_Car_TowTractor_White",
			"Exile_Car_UAZ_Open_Green",
			"Exile_Car_UAZ_Green",
			"Exile_Car_LandRover_Ambulance_Desert",
			"Exile_Car_Tractor_Red",
			"Exile_Car_OldTractor_Red",
			"Exile_Car_Octavius_White"
		};

		/**
		 * Enables or disables nightvision optics on ALL vehicles
		 *
		 * 0 = off
		 * 1 = on
		 */
		nightVision = 1;

		/**
		 * Enables or disables thermal optics on ALL vehicles
		 *
		 * 0 = off
		 * 1 = on
		 */
		thermalVision = 0;

		/**
		 * Set this to 1 to unlock vehicles on server boot if they are in safe zones
		 *
		 * 0 = off
		 * 1 = on
		 */
		unlockInSafeZonesAfterRestart = 1;	
	};

	class Weather
	{
		/*
			You can define multiple "keyframes" for the weather to change. The server will pick
			a keyframe randomly to simulate the weather. It will change the weather-keyframes
			based on the following interval
		*/
		interval = 30;

		/*
			Add the keyframes here. The server will pick one random, so if you want one 
			weather type of be more dominant compared to others, add it multiple times
		*/
		//keyframes[] = {"Sunny", "Cloudy", "Thunderstorm"}; 
		keyframes[] = {"Sunny"}; 

		/*
			This is a keyframe. Look up the BIKI to get more details about the parameters

			Be sure to design the fog settings at a view distance of 1,600m as this is the
			limit in multiplayer by default

			https://community.bistudio.com/wiki/fogParams
			https://community.bistudio.com/wiki/overcast
			https://community.bistudio.com/wiki/setWaves
			https://community.bistudio.com/wiki/setWindStr
			https://community.bistudio.com/wiki/setGusts
			https://community.bistudio.com/wiki/setRain
			https://community.bistudio.com/wiki/setLightnings
			https://community.bistudio.com/wiki/setRainbow
		*/
		class Sunny
		{
			fogValue = 0.1;
			fogDecay = 0.2;
			fogBase = 5;
			overcast = 0.2;
			waves = 0.2;
			wind = 0.25;
			gusts = 0.1;
			rain = 0;
			lightnings = 0;
			rainbows = 0;
		};

		class Cloudy
		{
			fogValue = 0.2;
			fogDecay = 0.1;
			fogBase = 5;
			overcast = 0.4;
			waves = 0.4;
			wind = 0.25;
			gusts = 0.5;
			rain = 0.1;
			lightnings = 0.1;
			rainbows = 1;
		};

		class Thunderstorm
		{
			fogValue = 0.7;
			fogDecay = 0.2;
			fogBase = 5;
			overcast = 1;
			waves = 1;
			wind = 0.25;
			gusts = 0.5;
			rain = 1;
			lightnings = 1;
			rainbows = 0.5;
		};
	};

	class Time
	{
		// Uses Dedicated Server time as ingame Time
		useRealTime = 0;

		// Will overide RealTime
		useStaticTime = 1;

		// time in ARMA FORMAT << CONFIG
		// https://community.bistudio.com/wiki/setDate

		staticTime[] = {2039,10,24,15,30};
	};


	class RCON
	{
		/*
			Note that for this to work you need to have serverCommandPassowrd defined in config.cfg and BE enabled
		*/

		// This needs to match config.cfg serverCommandPassword
		serverPassword = "";

		// Autolocks server until its ready to accept players
		useAutoLock = 0;

		// Server will autoLock at that time before restart (minutes)
		restartAutoLock = 3;

		/*
			Number of hours and minutes of your restart period.

			Examples:

			{4, 0} = Every 4 hours
			{1, 30} = Every one and a half hour (who the hell would do this?)
		*/
		restartTimer[] = {3, 0};

		/*
			Kicks players before restart to prevent gear loss.
			We strongely recommend to use this!

			0 = off
			1 = on
		*/
		useAutoKick = 0;

		/*
			Number of minutes before the server kicks players that did
			not disconnect before the restart. Should at least be two
			minutes!
		*/
		kickTime = 2;

		/*
			Self-explanatory

			0 = off
			1 = on
		*/
		useRestartMessages = 0;

		/*
			Number of minutes before the restart to inform your players.

			Only use full minutes here. Value like 5.5 have not been tested.
		*/
		restartWarningTime[] = {15, 10, 5, 3}; 

		/* 
			If set to 1 server will execute '#shutdown',
			to try to shutdown the server
		*/

		useShutdown = 0;
	};

	class ServerSettings
	{
		/*
			Support for custom server FSM if wanted
		*/
		serverFSM = "exile_server\fsm\main.fsm";

		/*
			If this is enabled, Exile developers will spawn with a ton of pop tabs.
			We will have a hard time debugging things if you disable this.
		*/
		devFriendyMode = 1;

		devs[] = 
		{
			{"76561197985241690","[EXILE|DEV] Eichi"},
			{"76561198022879703","[EXILE|DEV] Grim"},
			{"76561198075905447","[EXILE|DEV] Vishpala"},
			{"76561197968613061","[EXILE|DEV] Niuva"},
			{"76561198027700602","[EXILE|DEV] Eraser1"},
			{"76561198048317094","[EXILE|DEV] HappyDayZ"},
			{"76561198105900802","[EXILE|DEV] Psycho"},
			{"76561198004111275","[EXILE|DEV] Maca134"},
			{"76561198037177305","[EXILE|DEV] Wolfkill"}
		};
	};

	class Events 
	{
		/*
			A list of events that are active
		*/
		enabledEvents[] = {"SupplyBox", "AbandonedSafe"}; 

		class EarthQuake 
		{
			type = "spawn";
			function = "ExileServer_system_event_earthQuake_start";
			minTime = 60;
			maxTime = 180;
			minimumPlayersOnline = 1;
		};

		class SupplyBox 
		{
			/*
				Drops a supply box on a parachute next to a random airport on the map.
				The box may contain items. The box can be transported to a territory
				and installed to become a normal storage container.
			*/
			type = "spawn";
			function = "ExileServer_system_event_supplyBox_start";
			minTime = 60; // minutes
			maxTime = 180; // minutes
			minimumPlayersOnline = 10;
			dropRadius = 500; // 500m around an airport (including the main airport on Altis!)
			dropAltitude = 100; // altitude of the drop
			markerTime = 10; // minutes

			/*
				These are different types of boxes can be dropped.
				You can specify the cargo a box should contain.
				The type of box is chosen randomly from the following list.
				Add a type multiple times to increase the chance of being used.
			*/
			types[] = {"Beer", "Beer", "Tools", "Food", "Food", "RepairParts"};

			class BoxTypes
			{
				class Beer 
				{
					items[] = 
					{
						{"Exile_Item_Beer", 24}
					};
				};

				class Food 
				{
					items[] = 
					{
						{"Exile_Item_BBQSandwich", 5},
						{"Exile_Item_Catfood", 5},
						{"Exile_Item_ChristmasTinner", 5},
						{"Exile_Item_GloriousKnakworst", 5},
						{"Exile_Item_SausageGravy", 5},
						{"Exile_Item_Surstromming", 5},
						{"Exile_Item_CanOpener", 1},
						{"Exile_Item_CookingPot", 1},
						{"Exile_Item_Matches", 1}
					};
				};

				class Tools 
				{
					items[] = 
					{
						{"Exile_Item_Wrench", 1},
						{"Exile_Item_Shovel", 1},
						{"Exile_Item_Screwdriver", 1},
						{"Exile_Item_Pliers", 1},
						{"Exile_Item_Handsaw", 1},
						{"Exile_Item_FireExtinguisher", 1},
						{"Exile_Item_DuctTape", 1}
					};
				};

				class RepairParts 
				{
					items[] = 
					{
						{"Exile_Item_CarWheel", 8},
						{"Exile_Item_FuelCanisterFull", 4},
						{"Exile_Item_OilCanister", 1},
						{"Exile_Item_Grinder", 1},
						{"Exile_Item_CordlessScrewdriver", 1}
					};
				};
			};
		};

		class AbandonedSafe
		{
			type = "spawn";
			function = "ExileServer_system_event_abandonedSafe_start";
			minTime = 60; // minutes
			maxTime = 120; // minutes
			minimumPlayersOnline = 0;
			markerTime = 15; // minutes
		};

		class AmbientFlyOver
		{
			type = "call";
			function = "ExileServer_system_event_ambientFlyOver_start";
			minTime = 30; // minutes
			maxTime = 90; // minutes
			minimumPlayersOnline = 1;
		};
	};
	
	class Logging
	{
		/*
			If logging is enabled separate logs will be made in the sql logs folder for each type
		*/
		traderLogging = 1;
		deathLogging = 1;
		territoryLogging = 1;
	};
};

/*
	Author: Chris(tian) "infiSTAR" Lorenzen
	Contact: infiSTAR23@gmail.com // www.infiSTAR.de
	
	Copyright infiSTAR - 2011 - 2017. All rights reserved.
	Christian (Chris) L. (infiSTAR23@gmail.com) Developer of infiSTAR
*/
#include "EXILE_AHAT_CONFIG.hpp"
class CfgPatches
{
	class a3_infiSTAR_Exile
	{
		requiredVersion = 0.15021;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		author[]= {"Chris(tian) 'infiSTAR' Lorenzen"};
		website[]= {"https://infiSTAR.de"};
		contact[]= {"admin@infiSTAR.de","infiSTAR23@gmail.com"};
		version = 'v88';
		licensed = "chad143laryn@outlook.com";
	};
};
class CfgFunctions
{
	class a3_infiSTAR_Exile
	{
		class main
		{
			file = "a3_infiSTAR_Exile";
			class preInit { preInit = 1; };
			class postInit { postInit = 1; };
		};
	};
};
#include "CUSTOM_FUNCTIONS.hpp"

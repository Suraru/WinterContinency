class CfgPatches {
	class HALO_Winter_Contingency {

		name = "Winter Contingency Visor";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {};
		requiredVersion = 1.94;
		author[] = {"Suraru and George Floros"};
		authorUrl="https://discord.gg/QxukZ8B";
		license = "https://www.bohemia.net/community/licenses/arma-public-license-share-alike";
		version = 0.1;
		versionStr = "0.1.0.1";
		versionAr[] = {0,1,0,1};
	};
};

//__________________________ ***  INIT  *** __________________________


class CfgFunctions {
	class HALO_Winter_Contingency {
		class HALO_chud {
			class Init {
				file = "\HALO_chud\scripts\visor\init.sqf";
				postInit = 1;
			};
		};
	};
};


//__________________________ ***  VISOR RSC  *** __________________________


class RscTitles
{
	#include "\HALO_chud\scripts\visor\chud_HPP.hpp"	
};
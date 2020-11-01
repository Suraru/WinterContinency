if (chud_Systemchat_info) then {
systemchat "chud_Headgear Script initializing";			
};	

if (chud_diag_log_info) then {
diag_log "//________________ chud_Headgear initializing _____________";
};


//////////////////////////////////////////////////////////////////////////////////////
	
[] spawn {
    ["chud_Headgear_Id", "onEachFrame", {
	
	//________________	add your lists	________________
	
	if (

	Headgear player in chud_marine_helms
	or Headgear player in chud_odst_helms

	) then {
	
	
	//________________	Visors Enabled	________________
	
	if (chud_Systemchat_info) then {
	systemchat "Headgear Visors Enabled";			
	};
	
	
	//________________	INTERNAL view	________________
	
	if(cameraView != "EXTERNAL") then {
	
	
	if (chud_Systemchat_info) then {
	systemchat"Internal view";			
	};
	
	//________________	Marine Visor	________________
	
	if(Headgear player in chud_marine_helms) then {
	
	if(chud_Hintsilent_info) then {
	hintsilent "chud_marine_helms";
	};
	
	"chud_marine_helms" cutRsc ["Rsc_chud_marine", "PLAIN"];

	"cchud_odst_helms" cutText ["", "PLAIN"];

	};	
		
	//________________	ODST Visor	________________
	
	if(Headgear player in chud_odst_helms) then {
	
	if(chud_Hintsilent_info) then {
	hintsilent "chud_odst_helms";
	};
	
	"chud_odst_helms" cutRsc ["Rsc_chud_odst", "PLAIN"]; //WIP, add RSC later

	"chud_marine_helms" cutText ["", "PLAIN"];

	};
	
	
	//________________	Headgear colorCorrections ON	________________
	//	https://forums.bohemia.net/forums/topic/219908-gf-colorcorrections-script/
	
	if (chud_colorCorrections) then {
	
	if (chud_Systemchat_info) then {
	systemchat"Headgear colorCorrections ON";		
	};
	
	
	//________________	Marine Visor	________________
	
	if(Headgear player in chud_marine_helms) then {
	
	//	Make screen yellow
	chud_marine_helmet_pp = ppEffectCreate ["colorCorrections", 1501];
	chud_marine_helmet_pp ppEffectEnable true;
	chud_marine_helmet_pp ppEffectAdjust [1, 1, 0, [0.0, 0.0, 0.0, 0.0], [1.8, 1.8, 0.3, 0.7],  [0.199, 0.587, 0.114, 0.0]]; 
	chud_marine_helmet_pp ppEffectCommit 0; 
	};
	
	//________________	ODST Visor	________________
	
	if(Headgear player in chud_odst_helms) then {
	
	//	Make screen yellow
	chud_odst_helmet_pp = ppEffectCreate ["colorCorrections", 1501];
	chud_odst_helmet_pp ppEffectEnable true;
	chud_odst_helmet_pp ppEffectAdjust [1, 1, 0, [0.0, 0.0, 0.0, 0.0], [1.8, 1.8, 0.3, 0.7],  [0.199, 0.587, 0.114, 0.0]]; 
	chud_odst_helmet_pp ppEffectCommit 0; 
	};
	
	};
	
	
	};
	
		//________________	External view	________________
	
	if(cameraView == "EXTERNAL") then {
	
	if (chud_Systemchat_info) then {
	systemchat"External view";		
	};

    "chud_marine_helms" cutText ["", "PLAIN"];
    "chud_odst_helms" cutText ["", "PLAIN"];
	
	
 //________________    Headgear colorCorrections ON    ________________
    //    https://forums.bohemia.net/forums/topic/219908-gf-colorcorrections-script/
    
    if (chud_colorCorrections) then {
    
    if (chud_Systemchat_info) then {
    systemchat"Headgear colorCorrections ON";        
    };
    
    
    //________________    Marine Visor    ________________
    
    if(Headgear player in chud_marine_helms) then {
    
    //    Make screen yellow
    chud_marine_helmet_pp = ppEffectCreate ["colorCorrections", 1501];
    chud_marine_helmet_pp ppEffectEnable true;
    chud_marine_helmet_pp ppEffectAdjust [1, 1, 0, [0.0, 0.0, 0.0, 0.0], [1.8, 1.8, 0.3, 0.7],  [0.199, 0.587, 0.114, 0.0]]; 
    chud_marine_helmet_pp ppEffectCommit 0; 
    };
    
    //________________    ODST Visor    ________________
    
    if(Headgear player in chud_odst_helms) then {
    
    //    Make screen yellow
    chud_odst_helmet_pp = ppEffectCreate ["colorCorrections", 1501];
    chud_odst_helmet_pp ppEffectEnable true;
    chud_odst_helmet_pp ppEffectAdjust [1, 1, 0, [0.0, 0.0, 0.0, 0.0], [1.8, 1.8, 0.3, 0.7],  [0.199, 0.587, 0.114, 0.0]]; 
    chud_odst_helmet_pp ppEffectCommit 0; 
    };
    
    };
    
    
    };
	
	}

	//________________	Headgear Visors Disabled	________________
	
//	if (
//
//	!(
//	Headgear player in chud_marine_helms
//	or Headgear player in chud_odst_helms
//	)

//	) then {

	else {
	//________________	cutText	________________
	
	if (chud_Systemchat_info) then {
	systemchat"Headgear Visors Disabled";	
	};
	
	"chud_marine_helms" cutText ["", "PLAIN"];
	"chud_odst_helms" cutText ["", "PLAIN"];
	
	
	//________________	Headgear colorCorrections OFF	________________
	
	if (chud_colorCorrections) then {
	
	if (chud_Systemchat_info) then {
	systemchat"Headgear colorCorrections OFF";	
	};

	ppEffectDestroy chud_marine_helmet_pp;
	ppEffectDestroy chud_odst_helmet_pp;
	
	};
	
	};
	
	}] call BIS_fnc_addStackedEventHandler;
	};


if (chud_Systemchat_info) then {
systemchat "chud_Headgear Script initialized";			
};	

diag_log "//________________ chud_Headgear Script initialized ________________";
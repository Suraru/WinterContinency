if (chud_Systemchat_info) then {
systemchat "chud_Goggles Script initializing";			
};	

if (chud_diag_log_info) then {
diag_log "//________________ chud_Goggles initializing _____________";
};


//////////////////////////////////////////////////////////////////////////////////////
	
[] spawn {
    ["chud_Goggles_Id", "onEachFrame", {
	
	//________________	add your lists	________________
	
	if (

	Goggles player in chud_marine_goggles
	or Goggles player in chud_pilot_goggles

	) then {
	
	
	//________________	Visors Enabled	________________
	
	if (chud_Systemchat_info) then {
	systemchat "Goggles Visors Enabled";			
	};
	
	
	//________________	INTERNAL view	________________
	
	if(cameraView != "EXTERNAL") then {
	
	
	if (chud_Systemchat_info) then {
	systemchat"Internal view";			
	};
	
	//________________	Shooting Glasses	________________
	
	if(Goggles player in chud_marine_goggles) then {
	
	if(chud_Hintsilent_info) then {
	hintsilent "chud_marine_goggles";
	};
	
	"chud_marine_goggles" cutRsc ["Rsc_chud_marine", "PLAIN"];

	"chud_pilot_goggles" cutText ["", "PLAIN"];

	};	
		
	//________________	Pilot Glasses	________________
	
	if(Goggles player in chud_pilot_goggles) then {
	
	if(chud_Hintsilent_info) then {
	hintsilent "chud_pilot_goggles";
	};
	
	"chud_pilot_goggles" cutRsc ["Rsc_chud_marine", "PLAIN"]; //WIP, add RSC later

	"chud_marine_goggles" cutText ["", "PLAIN"];

	};
	
	
	//________________	Goggles colorCorrections ON	________________
	//	https://forums.bohemia.net/forums/topic/219908-gf-colorcorrections-script/
	
	if (chud_colorCorrections) then {
	
	if (chud_Systemchat_info) then {
	systemchat"Goggles colorCorrections ON";		
	};
	
	
	//________________	Marine Visor	________________
	
	if(Goggles player in chud_marine_goggles) then {
	
	//	Make screen yellow
	chud_marine_goggles_pp = ppEffectCreate ["colorCorrections", 1501];
	chud_marine_goggles_pp ppEffectEnable true;
	chud_marine_goggles_pp ppEffectAdjust [1, 1, 0, [0.0, 0.0, 0.0, 0.0], [1.8, 1.8, 0.3, 0.7],  [0.199, 0.587, 0.114, 0.0]]; 
	chud_marine_goggles_pp ppEffectCommit 0; 
	};
	
	//________________	Pilot Visor	________________
	
	if(Goggles player in chud_pilot_goggles) then {
	
	//	Make screen yellow
	chud_pilot_goggles_pp = ppEffectCreate ["colorCorrections", 1501];
	chud_pilot_goggles_pp ppEffectEnable true;
	chud_pilot_goggles_pp ppEffectAdjust [1, 1, 0, [0.0, 0.0, 0.0, 0.0], [1.8, 1.8, 0.3, 0.7],  [0.199, 0.587, 0.114, 0.0]]; 
	chud_pilot_goggles_pp ppEffectCommit 0; 
	};
	
	};
	
	
	};
	
	//________________	External view	________________
	
	if(cameraView == "EXTERNAL") then {
	
	if (chud_Systemchat_info) then {
	systemchat"External view";		
	};

    "chud_marine_goggles" cutText ["", "PLAIN"];
    "chud_pilot_goggles" cutText ["", "PLAIN"];
	
	
 //________________    Headgear colorCorrections ON    ________________
    //    https://forums.bohemia.net/forums/topic/219908-gf-colorcorrections-script/
    
    if (chud_colorCorrections) then {
    
    if (chud_Systemchat_info) then {
    systemchat"Headgear colorCorrections ON";        
    };
    
    
    //________________    Marine Visor    ________________
    
    if(Headgear player in hud_marine_goggles) then {
    
    //    Make screen yellow
    chud_marine_helmet_pp = ppEffectCreate ["colorCorrections", 1501];
    chud_marine_helmet_pp ppEffectEnable true;
    chud_marine_helmet_pp ppEffectAdjust [1, 1, 0, [0.0, 0.0, 0.0, 0.0], [1.8, 1.8, 0.3, 0.7],  [0.199, 0.587, 0.114, 0.0]]; 
    chud_marine_helmet_pp ppEffectCommit 0; 
    };
    
    //________________    ODST Visor    ________________
    
    if(Headgear player in chud_pilot_goggles) then {
    
    //    Make screen yellow
    chud_odst_helmet_pp = ppEffectCreate ["colorCorrections", 1501];
    chud_odst_helmet_pp ppEffectEnable true;
    chud_odst_helmet_pp ppEffectAdjust [1, 1, 0, [0.0, 0.0, 0.0, 0.0], [1.8, 1.8, 0.3, 0.7],  [0.199, 0.587, 0.114, 0.0]]; 
    chud_odst_helmet_pp ppEffectCommit 0; 
    };
    
    };
    
    
    };
	
	}

	//________________	Goggles Visors Disabled	________________
	
//	if (
//
//	!(
//	Goggles player in chud_marine_goggles
//	or Goggles player in chud_pilot_goggles
//	)

//	) then {

	else {
	
	//________________	cutText	________________
	
	if (chud_Systemchat_info) then {
	systemchat"Goggles Visors Disabled";	
	};
	
	"chud_marine_goggles" cutText ["", "PLAIN"];
	"chud_pilot_goggles" cutText ["", "PLAIN"];
	
	
	//________________	Goggles colorCorrections OFF	________________
	
	if (chud_colorCorrections) then {
	
	if (chud_Systemchat_info) then {
	systemchat"Goggles colorCorrections OFF";	
	};

	ppEffectDestroy chud_marine_goggles_pp;
	ppEffectDestroy chud_pilot_goggles_pp;
	
	};
	
	};
	
	}] call BIS_fnc_addStackedEventHandler;
	};


if (chud_Systemchat_info) then {
systemchat "chud_Goggles Script initialized";			
};	

diag_log "//________________ chud_Goggles Script initialized ________________";
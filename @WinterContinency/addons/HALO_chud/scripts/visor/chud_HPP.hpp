//________________	Control types	________________
//	https://community.bistudio.com/wiki/Dialog_Control

#define ST_PICTURE	48
#define CT_STATIC    0


//________________	available Rsc	________________
/*
Rsc_chud_marine
Rsc_chud_odst
Rsc_chud_elite
Rsc_chud_mkvi
Rsc_chud_mkv
Rsc_chud_mkiv
Rsc_chud_aa
Rsc_chud_akis
Rsc_chud_argus
Rsc_chud_commando
Rsc_chud_cqb
Rsc_chud_cqc
Rsc_chud_eod
Rsc_chud_eva
Rsc_chud_grenadier
Rsc_chud_gungnir
Rsc_chud_hazop
Rsc_chud_jfo
Rsc_chud_mkvb
Rsc_chud_mp
Rsc_chud_operator
Rsc_chud_pilot
Rsc_chud_recon
Rsc_chud_scout
Rsc_chud_security
*/

//________________	Rsc_chud_marine	________________

class Rsc_chud_marine { 
idd = -1; 
duration = 1e+011;
fadein = 0.5;
fadeout = 0.5;
	class controls { 
		class Rsc_chud_marine_Control { 
			idc = 1200;
			type = CT_STATIC; 
			style = ST_PICTURE;
			tileH = 1;
			tileW = 1;

			//	Axis
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			
			//	Size
			w = 1 * safezoneW;		
			h = 1 * safezoneH;	

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 1; 
			colorBackground[] = {0,0,0,0}; 
			colorText[] = {1,1,1,1};
			
			//	Image
			text = "HALO_chud\resources\visor\halo_chud_marine.paa"; 
			lineSpacing = 0; 
		}; 
	}; 
};


//________________	Rsc_chud_odst	________________

class Rsc_chud_odst { 
idd = -1; 
duration = 1e+011;
fadein = 0.5;
fadeout = 0.5;
	class controls { 
		class Rsc_chud_odst_Control { 
			idc = 1200;
			type = CT_STATIC; 
			style = ST_PICTURE;
			tileH = 1;
			tileW = 1;

			//	Axis
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			
			//	Size
			w = 1 * safezoneW;		
			h = 1 * safezoneH;	

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 1; 
			colorBackground[] = {0,0,0,0}; 
			colorText[] = {1,1,1,1};
			
			//	Image
			text = "HALO_chud\resources\visor\halo_chud_odst.paa"; 
			lineSpacing = 0; 
		}; 
	}; 
};


//________________	Rsc_chud_elite	________________

class Rsc_chud_elite { 
idd = -1; 
duration = 1e+011;
fadein = 0.5;
fadeout = 0.5;
	class controls { 
		class Rsc_chud_elite_Control { 
			idc = 1200;
			type = CT_STATIC; 
			style = ST_PICTURE;
			tileH = 1;
			tileW = 1;

			//	Axis
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			
			//	Size
			w = 1 * safezoneW;		
			h = 1 * safezoneH;	

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 1; 
			colorBackground[] = {0,0,0,0}; 
			colorText[] = {1,1,1,1};
			
			//	Image
			text = "HALO_chud\resources\visor\halo_chud_elite.paa"; 
			lineSpacing = 0; 
		}; 
	}; 
};


//________________	Rsc_chud_spartan	________________

class Rsc_chud_mkvi { 
idd = -1; 
duration = 1e+011;
fadein = 0.5;
fadeout = 0.5;
	class controls { 
		class Rsc_chud_mkvi_Control { 
			idc = 1200;
			type = CT_STATIC; 
			style = ST_PICTURE;
			tileH = 1;
			tileW = 1;

			//	Axis
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			
			//	Size
			w = 1 * safezoneW;		
			h = 1 * safezoneH;	

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 1; 
			colorBackground[] = {0,0,0,0}; 
			colorText[] = {1,1,1,1};
			
			//	Image
			text = "HALO_chud\resources\visor\halo_chud_mkvi.paa"; 
			lineSpacing = 0; 
		}; 
	}; 
};

class Rsc_chud_mkv { 
idd = -1; 
duration = 1e+011;
fadein = 0.5;
fadeout = 0.5;
	class controls { 
		class Rsc_chud_mkv_Control { 
			idc = 1200;
			type = CT_STATIC; 
			style = ST_PICTURE;
			tileH = 1;
			tileW = 1;

			//	Axis
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			
			//	Size
			w = 1 * safezoneW;		
			h = 1 * safezoneH;	

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 1; 
			colorBackground[] = {0,0,0,0}; 
			colorText[] = {1,1,1,1};
			
			//	Image
			text = "HALO_chud\resources\visor\halo_chud_mkv.paa"; 
			lineSpacing = 0; 
		}; 
	}; 
};

class Rsc_chud_mkiv { 
idd = -1; 
duration = 1e+011;
fadein = 0.5;
fadeout = 0.5;
	class controls { 
		class Rsc_chud_mkiv_Control { 
			idc = 1200;
			type = CT_STATIC; 
			style = ST_PICTURE;
			tileH = 1;
			tileW = 1;

			//	Axis
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			
			//	Size
			w = 1 * safezoneW;		
			h = 1 * safezoneH;	

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 1; 
			colorBackground[] = {0,0,0,0}; 
			colorText[] = {1,1,1,1};
			
			//	Image
			text = "HALO_chud\resources\visor\halo_chud_mkiv.paa"; 
			lineSpacing = 0; 
		}; 
	}; 
};

class Rsc_chud_aa { 
idd = -1; 
duration = 1e+011;
fadein = 0.5;
fadeout = 0.5;
	class controls { 
		class Rsc_chud_aa_Control { 
			idc = 1200;
			type = CT_STATIC; 
			style = ST_PICTURE;
			tileH = 1;
			tileW = 1;

			//	Axis
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			
			//	Size
			w = 1 * safezoneW;		
			h = 1 * safezoneH;	

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 1; 
			colorBackground[] = {0,0,0,0}; 
			colorText[] = {1,1,1,1};
			
			//	Image
			text = "HALO_chud\resources\visor\halo_chud_aa.paa"; 
			lineSpacing = 0; 
		}; 
	}; 
};

class Rsc_chud_akis { 
idd = -1; 
duration = 1e+011;
fadein = 0.5;
fadeout = 0.5;
	class controls { 
		class Rsc_chud_akis_Control { 
			idc = 1200;
			type = CT_STATIC; 
			style = ST_PICTURE;
			tileH = 1;
			tileW = 1;

			//	Axis
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			
			//	Size
			w = 1 * safezoneW;		
			h = 1 * safezoneH;	

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 1; 
			colorBackground[] = {0,0,0,0}; 
			colorText[] = {1,1,1,1};
			
			//	Image
			text = "HALO_chud\resources\visor\halo_chud_akis.paa"; 
			lineSpacing = 0; 
		}; 
	}; 
};

class Rsc_chud_argus { 
idd = -1; 
duration = 1e+011;
fadein = 0.5;
fadeout = 0.5;
	class controls { 
		class Rsc_chud_argus_Control { 
			idc = 1200;
			type = CT_STATIC; 
			style = ST_PICTURE;
			tileH = 1;
			tileW = 1;

			//	Axis
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			
			//	Size
			w = 1 * safezoneW;		
			h = 1 * safezoneH;	

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 1; 
			colorBackground[] = {0,0,0,0}; 
			colorText[] = {1,1,1,1};
			
			//	Image
			text = "HALO_chud\resources\visor\halo_chud_argus.paa"; 
			lineSpacing = 0; 
		}; 
	}; 
};

class Rsc_chud_commando { 
idd = -1; 
duration = 1e+011;
fadein = 0.5;
fadeout = 0.5;
	class controls { 
		class Rsc_chud_commando_Control { 
			idc = 1200;
			type = CT_STATIC; 
			style = ST_PICTURE;
			tileH = 1;
			tileW = 1;

			//	Axis
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			
			//	Size
			w = 1 * safezoneW;		
			h = 1 * safezoneH;	

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 1; 
			colorBackground[] = {0,0,0,0}; 
			colorText[] = {1,1,1,1};
			
			//	Image
			text = "HALO_chud\resources\visor\halo_chud_commando.paa"; 
			lineSpacing = 0; 
		}; 
	}; 
};

class Rsc_chud_cqb { 
idd = -1; 
duration = 1e+011;
fadein = 0.5;
fadeout = 0.5;
	class controls { 
		class Rsc_chud_cqb_Control { 
			idc = 1200;
			type = CT_STATIC; 
			style = ST_PICTURE;
			tileH = 1;
			tileW = 1;

			//	Axis
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			
			//	Size
			w = 1 * safezoneW;		
			h = 1 * safezoneH;	

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 1; 
			colorBackground[] = {0,0,0,0}; 
			colorText[] = {1,1,1,1};
			
			//	Image
			text = "HALO_chud\resources\visor\halo_chud_cqb.paa"; 
			lineSpacing = 0; 
		}; 
	}; 
};

class Rsc_chud_cqc { 
idd = -1; 
duration = 1e+011;
fadein = 0.5;
fadeout = 0.5;
	class controls { 
		class Rsc_chud_cqc_Control { 
			idc = 1200;
			type = CT_STATIC; 
			style = ST_PICTURE;
			tileH = 1;
			tileW = 1;

			//	Axis
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			
			//	Size
			w = 1 * safezoneW;		
			h = 1 * safezoneH;	

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 1; 
			colorBackground[] = {0,0,0,0}; 
			colorText[] = {1,1,1,1};
			
			//	Image
			text = "HALO_chud\resources\visor\halo_chud_cqc.paa"; 
			lineSpacing = 0; 
		}; 
	}; 
};

class Rsc_chud_eod { 
idd = -1; 
duration = 1e+011;
fadein = 0.5;
fadeout = 0.5;
	class controls { 
		class Rsc_chud_eod_Control { 
			idc = 1200;
			type = CT_STATIC; 
			style = ST_PICTURE;
			tileH = 1;
			tileW = 1;

			//	Axis
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			
			//	Size
			w = 1 * safezoneW;		
			h = 1 * safezoneH;	

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 1; 
			colorBackground[] = {0,0,0,0}; 
			colorText[] = {1,1,1,1};
			
			//	Image
			text = "HALO_chud\resources\visor\halo_chud_eod.paa"; 
			lineSpacing = 0; 
		}; 
	}; 
};

class Rsc_chud_eva { 
idd = -1; 
duration = 1e+011;
fadein = 0.5;
fadeout = 0.5;
	class controls { 
		class Rsc_chud_eva_Control { 
			idc = 1200;
			type = CT_STATIC; 
			style = ST_PICTURE;
			tileH = 1;
			tileW = 1;

			//	Axis
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			
			//	Size
			w = 1 * safezoneW;		
			h = 1 * safezoneH;	

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 1; 
			colorBackground[] = {0,0,0,0}; 
			colorText[] = {1,1,1,1};
			
			//	Image
			text = "HALO_chud\resources\visor\halo_chud_eva.paa"; 
			lineSpacing = 0; 
		}; 
	}; 
};

class Rsc_chud_grenadier { 
idd = -1; 
duration = 1e+011;
fadein = 0.5;
fadeout = 0.5;
	class controls { 
		class Rsc_chud_grenadier_Control { 
			idc = 1200;
			type = CT_STATIC; 
			style = ST_PICTURE;
			tileH = 1;
			tileW = 1;

			//	Axis
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			
			//	Size
			w = 1 * safezoneW;		
			h = 1 * safezoneH;	

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 1; 
			colorBackground[] = {0,0,0,0}; 
			colorText[] = {1,1,1,1};
			
			//	Image
			text = "HALO_chud\resources\visor\halo_chud_grenadier.paa"; 
			lineSpacing = 0; 
		}; 
	}; 
};

class Rsc_chud_gungnir { 
idd = -1; 
duration = 1e+011;
fadein = 0.5;
fadeout = 0.5;
	class controls { 
		class Rsc_chud_gungnir_Control { 
			idc = 1200;
			type = CT_STATIC; 
			style = ST_PICTURE;
			tileH = 1;
			tileW = 1;

			//	Axis
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			
			//	Size
			w = 1 * safezoneW;		
			h = 1 * safezoneH;	

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 1; 
			colorBackground[] = {0,0,0,0}; 
			colorText[] = {1,1,1,1};
			
			//	Image
			text = "HALO_chud\resources\visor\halo_chud_gungnir.paa"; 
			lineSpacing = 0; 
		}; 
	}; 
};

class Rsc_chud_hazop { 
idd = -1; 
duration = 1e+011;
fadein = 0.5;
fadeout = 0.5;
	class controls { 
		class Rsc_chud_hazop_Control { 
			idc = 1200;
			type = CT_STATIC; 
			style = ST_PICTURE;
			tileH = 1;
			tileW = 1;

			//	Axis
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			
			//	Size
			w = 1 * safezoneW;		
			h = 1 * safezoneH;	

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 1; 
			colorBackground[] = {0,0,0,0}; 
			colorText[] = {1,1,1,1};
			
			//	Image
			text = "HALO_chud\resources\visor\halo_chud_hazop.paa"; 
			lineSpacing = 0; 
		}; 
	}; 
};

class Rsc_chud_jfo { 
idd = -1; 
duration = 1e+011;
fadein = 0.5;
fadeout = 0.5;
	class controls { 
		class Rsc_chud_jfo_Control { 
			idc = 1200;
			type = CT_STATIC; 
			style = ST_PICTURE;
			tileH = 1;
			tileW = 1;

			//	Axis
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			
			//	Size
			w = 1 * safezoneW;		
			h = 1 * safezoneH;	

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 1; 
			colorBackground[] = {0,0,0,0}; 
			colorText[] = {1,1,1,1};
			
			//	Image
			text = "HALO_chud\resources\visor\halo_chud_jfo.paa"; 
			lineSpacing = 0; 
		}; 
	}; 
};

class Rsc_chud_mkvb { 
idd = -1; 
duration = 1e+011;
fadein = 0.5;
fadeout = 0.5;
	class controls { 
		class Rsc_chud_mkvb_Control { 
			idc = 1200;
			type = CT_STATIC; 
			style = ST_PICTURE;
			tileH = 1;
			tileW = 1;

			//	Axis
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			
			//	Size
			w = 1 * safezoneW;		
			h = 1 * safezoneH;	

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 1; 
			colorBackground[] = {0,0,0,0}; 
			colorText[] = {1,1,1,1};
			
			//	Image
			text = "HALO_chud\resources\visor\halo_chud_mkvb.paa"; 
			lineSpacing = 0; 
		}; 
	}; 
};

class Rsc_chud_mp { 
idd = -1; 
duration = 1e+011;
fadein = 0.5;
fadeout = 0.5;
	class controls { 
		class Rsc_chud_mp_Control { 
			idc = 1200;
			type = CT_STATIC; 
			style = ST_PICTURE;
			tileH = 1;
			tileW = 1;

			//	Axis
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			
			//	Size
			w = 1 * safezoneW;		
			h = 1 * safezoneH;	

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 1; 
			colorBackground[] = {0,0,0,0}; 
			colorText[] = {1,1,1,1};
			
			//	Image
			text = "HALO_chud\resources\visor\halo_chud_mp.paa"; 
			lineSpacing = 0; 
		}; 
	}; 
};

class Rsc_chud_operator { 
idd = -1; 
duration = 1e+011;
fadein = 0.5;
fadeout = 0.5;
	class controls { 
		class Rsc_chud_operator_Control { 
			idc = 1200;
			type = CT_STATIC; 
			style = ST_PICTURE;
			tileH = 1;
			tileW = 1;

			//	Axis
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			
			//	Size
			w = 1 * safezoneW;		
			h = 1 * safezoneH;	

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 1; 
			colorBackground[] = {0,0,0,0}; 
			colorText[] = {1,1,1,1};
			
			//	Image
			text = "HALO_chud\resources\visor\halo_chud_operator.paa"; 
			lineSpacing = 0; 
		}; 
	}; 
};

class Rsc_chud_pilot { 
idd = -1; 
duration = 1e+011;
fadein = 0.5;
fadeout = 0.5;
	class controls { 
		class Rsc_chud_pilot_Control { 
			idc = 1200;
			type = CT_STATIC; 
			style = ST_PICTURE;
			tileH = 1;
			tileW = 1;

			//	Axis
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			
			//	Size
			w = 1 * safezoneW;		
			h = 1 * safezoneH;	

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 1; 
			colorBackground[] = {0,0,0,0}; 
			colorText[] = {1,1,1,1};
			
			//	Image
			text = "HALO_chud\resources\visor\halo_chud_pilot.paa"; 
			lineSpacing = 0; 
		}; 
	}; 
};

class Rsc_chud_recon { 
idd = -1; 
duration = 1e+011;
fadein = 0.5;
fadeout = 0.5;
	class controls { 
		class Rsc_chud_recon_Control { 
			idc = 1200;
			type = CT_STATIC; 
			style = ST_PICTURE;
			tileH = 1;
			tileW = 1;

			//	Axis
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			
			//	Size
			w = 1 * safezoneW;		
			h = 1 * safezoneH;	

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 1; 
			colorBackground[] = {0,0,0,0}; 
			colorText[] = {1,1,1,1};
			
			//	Image
			text = "HALO_chud\resources\visor\halo_chud_recon.paa"; 
			lineSpacing = 0; 
		}; 
	}; 
};

class Rsc_chud_scout { 
idd = -1; 
duration = 1e+011;
fadein = 0.5;
fadeout = 0.5;
	class controls { 
		class Rsc_chud_scout_Control { 
			idc = 1200;
			type = CT_STATIC; 
			style = ST_PICTURE;
			tileH = 1;
			tileW = 1;

			//	Axis
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			
			//	Size
			w = 1 * safezoneW;		
			h = 1 * safezoneH;	

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 1; 
			colorBackground[] = {0,0,0,0}; 
			colorText[] = {1,1,1,1};
			
			//	Image
			text = "HALO_chud\resources\visor\halo_chud_scout.paa"; 
			lineSpacing = 0; 
		}; 
	}; 
};

class Rsc_chud_security { 
idd = -1; 
duration = 1e+011;
fadein = 0.5;
fadeout = 0.5;
	class controls { 
		class Rsc_chud_security_Control { 
			idc = 1200;
			type = CT_STATIC; 
			style = ST_PICTURE;
			tileH = 1;
			tileW = 1;

			//	Axis
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			
			//	Size
			w = 1 * safezoneW;		
			h = 1 * safezoneH;	

			font = "EtelkaNarrowMediumPro"; 
			sizeEx = 1; 
			colorBackground[] = {0,0,0,0}; 
			colorText[] = {1,1,1,1};
			
			//	Image
			text = "HALO_chud\resources\visor\halo_chud_security.paa"; 
			lineSpacing = 0; 
		}; 
	}; 
};
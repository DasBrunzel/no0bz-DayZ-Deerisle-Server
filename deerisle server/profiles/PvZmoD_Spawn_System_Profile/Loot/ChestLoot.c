///								Spawn Type / Items list

ref autoptr  TStringArray data_Chest001 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd", "BaseRadio", "CarBattery" }; // Military base
ref autoptr  TStringArray data_Chest002 = { "All","Normal","CZ61","Mag_CZ61_20Rnd" }; // little police station
ref autoptr  TStringArray data_Chest003 = { "All","Normal","MP5K","Mag_MP5_30Rnd", "CarBattery", }; // big police station
ref autoptr  TStringArray data_Chest004 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd", "CarBattery", }; // Prison
ref autoptr  TStringArray data_Chest005 = { "All","Normal","CarBattery","PressVest_Blue", }; // Altar
ref autoptr  TStringArray data_Chest006 = { "All","Normal","NailBox", }; // Indus
ref autoptr  TStringArray data_Chest007 = { "All","Normal","FirefighterAxe", }; // FireStation
ref autoptr  TStringArray data_Chest008 = { "All","Normal","AKM","Mag_AKM_Drum75Rnd","AK_Suppressor","AK_Woodbttstck","AK_WoodHndgrd","Jmc_Keycard", }; // With Moutain Base Keycard
ref autoptr  TStringArray data_Chest009 = { "All","Normal","M4A1","M4_CarryHandleOptic", "M4_CQBBttstck", "M4_MPBttstck", "M4_MPHndgrd", "M4_OEBttstk", "M4_PlasticHndgrd", "M4_RISHndgrd", "M4_Suppressor", "M4_Suppressor", "M4_T3NRDSOptic", "Mag_STANAGCoupled_30Rnd", "Mag_STANAGCoupled_30Rnd", "Mag_STANAGCoupled_30Rnd","BUISOptic","M68Optic","ReflexOptic","ACOGOptic","Battery9V","Battery9V","Battery9V","Battery9V","NVGoggles","NVGHeadstrap" }; // Big Base under the mountain
ref autoptr  TStringArray data_Chest010 = { "All","Normal","AntiChemInjector","GasMask_Filter", }; // Toxic zones (v1.14 update)


/// use these line to create your own loot chest configuration
ref autoptr  TStringArray data_Chest011 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd" }; // not used yet
ref autoptr  TStringArray data_Chest012 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd" }; // not used yet
ref autoptr  TStringArray data_Chest013 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd" }; // not used yet
ref autoptr  TStringArray data_Chest014 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd" }; // not used yet
ref autoptr  TStringArray data_Chest015 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd" }; // not used yet
ref autoptr  TStringArray data_Chest016 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd" }; // not used yet
ref autoptr  TStringArray data_Chest017 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd" }; // not used yet
ref autoptr  TStringArray data_Chest018 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd" }; // not used yet
ref autoptr  TStringArray data_Chest019 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd" }; // not used yet
ref autoptr  TStringArray data_Chest020 = { "All","Normal","AKM","Mag_AKM_30Rnd", "AK_Suppressor", "AK_Woodbttstck", "AK_WoodHndgrd" }; // not used yet


/// First entry :
/// Spawn Type : "All" => spawn all the items in the chest
/// Spawn Type : "3" => spawn randomly 3 the items in the chest
/// Spawn Type : "-3" 	=> spawn between 1 and 3 items randomly chosen in the list


/// Second entry
/// "Normal" => Nothing special
/// "Stacked" => Spawn a stack containing the quantity defined in the first entry of each item in the list.

/// For example : data_Chest001 = { "100","Stacked","AKM","Ammo_22","MoneyRuble25"};
/// => 	1 AKM (just 1 because this item can't be stacked)
/// And	1 stack of 50 Ammo_22 (because the max nbr of Ammo_22 in a stack is 50)
/// And 1 stack of 100 MoneyRuble25 (Total 2500 rubles)

/// Note that if the first entry is negative the stack value will be randomly choose between 1 and the set value.
private _objects = [
	["Land_Cargo_House_V3_F",[7983.23,10355.2,34.6526],[[-0.999832,-0.0183195,0],[0,0,1]],[true,false]],
	["Land_Cargo_House_V3_F",[7983.37,10346.3,34.4074],[[-0.999832,-0.0183195,0],[0,0,1]],[true,false]],
	["Land_Cargo_House_V3_F",[7983.25,10338.1,34.2993],[[-0.999832,-0.0183195,0],[0,0,1]],[true,false]],
	["Land_Cargo_House_V3_F",[7943.73,10161.4,29.6307],[[-0.999832,-0.0183195,0],[0,0,1]],[true,false]],
	["Land_Cargo_House_V3_F",[7943.64,10153.8,29.637],[[-0.999832,-0.0183195,0],[0,0,1]],[true,false]],
	["Land_Cargo_House_V3_F",[7943.78,10148.2,29.6462],[[-0.999832,-0.0183195,0],[0,0,1]],[true,false]],
	["Land_Cargo_House_V3_F",[7943.84,10142.3,29.6717],[[-0.999832,-0.0183195,0],[0,0,1]],[true,false]],
	["Land_Cargo_Tower_V1_No7_F",[8087.07,10248.7,29.657],[[0,1,0],[0,0,1]],[true,false]],
	["Land_Cargo_Tower_V1_No7_F",[8105.6,10053.9,29.2979],[[0,1,0],[0,0,1]],[true,false]],
	["Land_MilOffices_V1_F",[7967.52,10103.6,29.8272],[[0,1,0],[0,0,1]],[true,false]],
	["Land_MilOffices_V1_F",[8040.16,10406.2,30.2607],[[0,1,0],[0,0,1]],[true,false]],
	["Land_PillboxBunker_01_big_F",[8016.85,10567.1,30.5513],[[-0.996648,-0.0818043,-0.00068822],[-0.000690534,0,1]],[true,false]],
	["Land_PillboxBunker_01_big_F",[8012.92,10627.9,30.5895],[[-0.996648,-0.0818037,-0.000832609],[-0.00077204,-0.00077204,0.999999]],[true,false]],
	["Land_PillboxBunker_01_big_F",[8005.51,10684.7,30.5337],[[-0.996643,-0.0818093,-0.0030617],[-0.00320187,0.0015822,0.999994]],[true,false]],
	["Land_i_Barracks_V1_F",[8024.12,10466.5,30.3441],[[-0.997482,-0.0709264,0],[0,0,1]],[true,false]],
	["Land_Cargo_HQ_V1_F",[8039.3,10365,30.2205],[[0,1,0],[0,0,1]],[true,false]],
	["Land_PillboxBunker_01_big_F",[8040.93,10312.7,30.157],[[-0.996643,-0.0818117,0.00299545],[0.00320187,-0.00239207,0.999992]],[true,false]],
	["Land_PillboxBunker_01_big_F",[8040.39,10263.6,29.7129],[[-0.99664,-0.0817661,-0.00470273],[-0.00399675,-0.00879569,0.999953]],[true,false]],
	["Land_PillboxBunker_01_big_F",[8124.89,9811.36,31.525],[[0.998644,-0.00591724,0.0517314],[-0.05193,-0.0407117,0.997821]],[true,false]],
	["Land_fs_sign_F",[8163.6,10466.7,30.0482],[[-0.997644,-0.0686034,0],[0,0,1]],[true,false]],
	["Land_fs_feed_F",[8167.48,10457.1,30.042],[[0,1,0],[0,0,1]],[true,false]],
	["Land_fs_feed_F",[8164.82,10478.6,30.0463],[[0,1,0],[0,0,1]],[true,false]],
	["Land_fs_feed_F",[8179.19,10452.1,30.1071],[[0,1,0],[0,0,1]],[true,false]],
	["Land_FuelStation_02_roof_F",[8166.83,10428.9,29.714],[[-0.0451943,0.998978,0],[0,0,1]],[true,false]],
	["Exile_Locker",[7986.2,9638.39,30.7631],[[-0.983309,0.181941,0.000312664],[0.00239116,0.0112047,0.999934]],[true,false]]
];
{
	private _object = (_x select 0) createVehicle [0,0,0];
	_object setPosASL (_x select 1);
	_object setVectorDirAndUp (_x select 2);
	_object enableSimulationGlobal ((_x select 3) select 0);
	_object allowDamage ((_x select 3) select 1);
} forEach _objects;

private _traders = [
	["Exile_Trader_Armory",[7981.6,9628.08,0.00195313],267.669,"Exile_Trader_Armory","WhiteHead_11"],
	["Exile_Trader_Vehicle",[7985.79,9642.32,0.00199509],275.289,"Exile_Trader_Vehicle","WhiteHead_01"],
	["Exile_Trader_Equipment",[7985.89,9633.73,0.00199318],313.115,"Exile_Trader_Equipment","AfricanHead_03"]
];
{
	private _trader = [
		_x select 0,
		_x select 4,
		["HubStanding_idle1"],
		_x select 1,
		_x select 2
	] call ExileClient_object_trader_create;
	_trader setVariable ["ExileTraderType", _x select 3];
} forEach _traders;
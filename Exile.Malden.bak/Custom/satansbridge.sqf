	/**
	Filename: satansbridge.sqf
	Script name: Satan's Bridge
	Description: Bridge connecting the Main island to the East Island
	Author: [GADD]lorsd8n
	**/
	
private _objects = [
	["Land_AirstripPlatform_01_F",[8491.92,3774.43,-0.676077],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[8512.08,3774.43,-0.672309],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[8532.23,3774.43,-0.669784],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[8552.39,3774.43,-0.665881],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[8572.54,3774.43,-0.661397],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[8592.7,3774.44,-0.671272],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[8612.85,3774.44,-0.667503],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[8633.01,3774.44,-0.664979],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[8653.16,3774.44,-0.661075],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[8673.32,3774.44,-0.656591],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[8693.48,3774.44,-0.671276],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[8713.63,3774.44,-0.667507],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[8733.79,3774.44,-0.664982],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[8753.94,3774.44,-0.661079],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[8774.1,3774.44,-0.656595],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[8794.25,3774.44,-0.66647],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[8814.41,3774.44,-0.662702],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[8834.56,3774.44,-0.660177],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[8854.72,3774.44,-0.656273],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[8874.87,3774.44,-0.651789],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[8895.02,3774.45,-0.671249],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[8915.17,3774.45,-0.66748],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[8935.33,3774.45,-0.664956],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[8955.48,3774.45,-0.661052],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[8975.64,3774.45,-0.656568],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[8995.79,3774.45,-0.666443],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[9015.95,3774.45,-0.662675],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[9036.1,3774.45,-0.66015],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[9056.26,3774.45,-0.656246],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[9076.41,3774.46,-0.694931],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[9096.57,3774.46,-0.751963],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[9116.72,3774.46,-0.791712],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[9136.88,3774.46,-0.832281],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[9157.04,3774.46,-0.871216],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[9177.19,3774.46,-0.909756],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[9197.34,3774.46,-0.963017],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[9217.5,3774.46,-1.00162],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[9237.66,3774.46,-1.0801],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[9257.81,3774.46,-1.12408],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[9277.97,3774.46,-1.1627],[[0,1,0],[0,0,1]],[false,false]],
	["Land_AirstripPlatform_01_F",[9316.14,3774.26,-1.23065],[[0.00502966,0.999987,0],[0,0,1]],[false,false]],
	["ArrowDesk_R_F_Preview",[9330.41,3766.73,3.75035],[[-0.998668,-0.051589,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9316.73,3768.71,4.32467],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_end_L_F",[9329.5,3768.2,4.29804],[[-0.525854,-0.850575,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9324.76,3768.7,4.32467],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9300.78,3768.71,4.37781],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9308.72,3768.72,4.32467],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9292.78,3768.71,4.37781],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9284.77,3768.72,4.39262],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9276.78,3768.73,4.39262],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9268.78,3768.73,4.39262],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9260.8,3768.75,4.43124],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9252.79,3768.75,4.43124],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9244.81,3768.79,4.47522],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9236.81,3768.78,4.47522],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9228.81,3768.78,4.47522],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9220.85,3768.87,4.5537],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9212.84,3768.86,4.5537],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9204.89,3768.9,4.59231],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9188.94,3768.94,4.56147],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9196.96,3768.94,4.56147],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9172.98,3768.95,4.63995],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9180.93,3768.95,4.63995],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9164.98,3768.94,4.63995],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9156.97,3768.96,4.67855],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9148.98,3768.96,4.67855],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9140.98,3768.96,4.73181],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9133,3768.99,4.73181],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9124.99,3768.99,4.73181],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9117.01,3769.03,4.77035],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9109.06,3768.97,4.77035],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9100.96,3768.93,4.80929],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9093.04,3768.96,4.80929],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9085.17,3768.97,4.80929],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9077.2,3768.86,4.84986],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9061.2,3768.8,4.76109],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9069.22,3768.79,4.76109],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9045.24,3768.8,4.81423],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9053.19,3768.81,4.76109],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9037.24,3768.8,4.81423],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9029.24,3768.82,4.82904],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9021.24,3768.82,4.82904],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9013.25,3768.82,4.82904],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9005.26,3768.85,4.86766],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8997.26,3768.85,4.86766],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8988.92,3768.7,4.91164],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8980.72,3768.66,4.91164],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8972.65,3768.69,4.92209],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8965.09,3768.65,4.96421],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8957.15,3768.68,4.91016],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8949.31,3768.68,4.94074],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8941.21,3768.72,4.92812],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8925.25,3768.72,4.95468],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8933.2,3768.73,4.91366],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8917.25,3768.72,4.95603],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8909.24,3768.74,4.90494],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8901.25,3768.74,4.88797],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8893.25,3768.74,4.83776],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8885.27,3768.77,4.81891],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8877.26,3768.77,4.82703],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8869.28,3768.8,4.81403],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8861.28,3768.8,4.82863],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8853.28,3768.8,4.85512],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8845.32,3768.88,4.86727],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8837.31,3768.88,4.88158],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8829.36,3768.91,4.92119],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8813.41,3768.96,4.92524],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8821.43,3768.95,4.91462],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8797.45,3768.96,4.91123],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8805.4,3768.97,4.91712],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8789.45,3768.96,4.95237],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8781.45,3768.97,4.92204],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8773.45,3768.98,4.94483],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8765.41,3768.96,4.94619],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8757.47,3769.01,4.91747],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8749.46,3769.01,4.90761],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8741.48,3769.04,4.9065],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8733.53,3768.99,4.885],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8725.43,3768.94,4.90713],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8717.51,3768.98,4.90712],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8709.64,3768.98,4.90712],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8701.67,3768.87,4.91515],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8685.67,3768.81,4.87514],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8693.69,3768.81,4.91409],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8669.71,3768.81,4.91206],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8677.66,3768.82,4.89037],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8661.71,3768.81,4.91206],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8653.71,3768.83,4.92688],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8645.71,3768.83,4.92688],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8637.72,3768.83,4.92688],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8629.7,3768.78,4.91377],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8621.56,3768.85,4.93187],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8613.38,3768.69,4.88678],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8605.19,3768.68,4.87083],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8597.13,3768.71,4.89206],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8589.56,3768.66,4.88027],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8581.62,3768.69,4.90901],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8573.44,3768.74,4.92039],[[-0.0100283,-0.99995,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_end_R_F",[8489.04,3768.16,4.84464],[[0.572074,-0.820202,0],[0,0,1]],[true,false]],
	["ArrowDesk_L_F_Preview",[8487.85,3766.92,4.35973],[[0.998969,-0.0453871,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8501.76,3768.71,4.90114],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8509.72,3768.75,4.91621],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8517.7,3768.77,4.92637],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8525.71,3768.78,4.9375],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8533.72,3768.79,4.91987],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8541.72,3768.85,4.90724],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8549.71,3768.82,4.93409],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8557.69,3768.77,4.97439],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8565.7,3768.79,4.93577],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8493.76,3768.7,4.85404],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["ArrowDesk_R_F_Preview",[8487.72,3781.82,4.25095],[[0.998742,0.0501453,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8501.45,3780.2,4.91602],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_end_L_F",[8488.64,3780.71,4.8933],[[0.527083,0.849814,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8493.42,3780.19,4.88145],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8517.47,3780.23,4.89917],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8509.45,3780.22,4.90115],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8525.48,3780.22,4.89473],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8533.49,3780.21,4.89012],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8541.49,3780.21,4.92027],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8549.49,3780.22,4.92258],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8557.48,3780.21,4.91159],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8565.47,3780.21,4.88075],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8573.47,3780.2,4.88555],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8581.43,3780.2,4.87773],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8589.35,3780.2,4.88808],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8597.32,3780.25,4.87233],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8605.3,3780.24,4.89907],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8613.26,3780.24,4.90801],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8629.23,3780.23,4.91541],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8621.22,3780.24,4.92511],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8644.71,3780.23,4.92458],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8636.87,3780.23,4.92831],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8652.72,3780.22,4.93628],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8660.73,3780.23,4.91572],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8668.75,3780.22,4.92498],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8676.78,3780.21,4.90963],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8684.78,3780.2,4.92714],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8692.79,3780.2,4.93699],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8700.81,3780.19,4.92235],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8708.81,3780.19,4.92415],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8716.83,3780.18,4.91005],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8724.84,3780.18,4.88589],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8732.84,3780.18,4.90352],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8740.87,3780.2,4.9217],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8756.86,3780.18,4.94675],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8748.86,3780.19,4.91637],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8772.89,3780.17,4.9093],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8764.87,3780.17,4.9309],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8780.9,3780.16,4.9236],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8788.9,3780.16,4.88259],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8796.92,3780.15,4.88163],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8804.94,3780.15,4.88163],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8812.95,3780.15,4.92025],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8820.96,3780.15,4.92025],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8828.96,3780.15,4.96424],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8836.98,3780.15,4.96424],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8845.01,3780.18,4.97468],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8853.03,3780.17,5.01681],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8861.03,3780.16,4.96275],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8869.04,3780.16,4.99333],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8877.05,3780.15,4.98071],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8893.07,3780.14,5.00728],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8885.05,3780.14,4.96626],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8901.06,3780.13,5.00862],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8909.08,3780.13,4.95754],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8917.09,3780.13,4.94057],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8925.08,3780.12,4.89035],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8933.07,3780.11,4.8715],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8941.07,3780.11,4.87963],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8949.06,3780.13,4.86662],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8957.04,3780.15,4.88123],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8964.65,3780.16,4.90772],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8972.59,3780.18,4.91987],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8980.56,3780.19,4.93417],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8988.61,3780.19,4.97378],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9004.53,3780.24,4.9204],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[8996.53,3780.22,4.91896],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9020.56,3780.23,4.86495],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9012.54,3780.23,4.89462],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9028.56,3780.22,4.90263],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9036.56,3780.21,4.88293],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9044.6,3780.21,4.91262],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9052.62,3780.21,4.92824],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9060.66,3780.2,4.97007],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9068.64,3780.24,4.90181],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9076.65,3780.25,4.88452],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9084.58,3780.29,4.8084],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9092.58,3780.3,4.81661],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9100.62,3780.29,4.83377],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9108.6,3780.26,4.79239],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9116.61,3780.26,4.79957],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9132.65,3780.3,4.76689],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9124.64,3780.24,4.75311],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9148.58,3780.26,4.704],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9140.64,3780.27,4.73166],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9156.61,3780.27,4.66187],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9164.46,3780.28,4.68274],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9172.41,3780.26,4.61962],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9180.43,3780.24,4.59064],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9188.43,3780.24,4.57073],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9196.42,3780.26,4.58544],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9204.47,3780.28,4.60412],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9212.5,3780.26,4.56659],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9220.48,3780.23,4.56349],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9228.33,3780.26,4.52823],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9236.4,3780.25,4.48266],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9244.38,3780.23,4.47961],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_end_R_F",[9328.96,3780.44,4.31457],[[-0.570888,0.821028,0],[0,0,1]],[true,false]],
	["ArrowDesk_L_F_Preview",[9330.14,3781.67,3.74616],[[-0.998903,0.0468312,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9316.22,3779.93,4.32767],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9308.25,3779.99,4.39475],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9300.21,3779.97,4.38825],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9292.22,3780.02,4.36781],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9284.34,3780.13,4.41718],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9276.34,3780.14,4.43511],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9268.37,3780.18,4.42327],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9260.37,3780.21,4.4382],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9252.38,3780.25,4.45539],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_CrashBarrier_01_8m_F",[9324.23,3779.9,4.31379],[[0.00144542,0.999999,0],[0,0,1]],[true,false]],
	["Land_AirstripPlatform_01_F",[9295.98,3774.36,-1.17752],[[0.00502966,0.999987,0],[0,0,1]],[false,false]],
	["RoadBarrier_small_F",[9318.89,3769.26,3.77527],[[-0.842786,-0.538248,0],[0,0,1]],[true,false]],
	["RoadBarrier_small_F_Preview",[9317.23,3769.28,3.77527],[[-0.769827,0.638252,0],[0,0,1]],[true,false]],
	["Land_LampAirport_F",[9306.78,3768.87,3.77527],[[0,1,0],[0,0,1]],[true,false]],
	["Land_LampAirport_F",[9248.26,3780.08,3.88184],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_LampAirport_F",[9188.27,3769.05,4.0429],[[0,1,0],[0,0,1]],[true,false]],
	["Land_LampAirport_F",[9126.75,3780.09,4.21421],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_LampAirport_F",[9065.42,3768.92,4.34967],[[0,1,0],[0,0,1]],[true,false]],
	["Land_LampAirport_F",[9006.56,3780.08,4.34325],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_LampAirport_F",[8945.52,3768.87,4.61731],[[0,1,0],[0,0,1]],[true,false]],
	["Land_LampAirport_F",[8885.46,3780.01,4.78798],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_LampAirport_F",[8523.43,3780.06,4.82464],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_LampAirport_F",[8583.31,3768.8,4.92015],[[0,1,0],[0,0,1]],[true,false]],
	["Land_LampAirport_F",[8642.78,3780.09,4.7839],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_LampAirport_F",[8703.78,3769.04,4.61338],[[0,1,0],[0,0,1]],[true,false]],
	["Land_LampAirport_F",[8764.85,3780.01,4.34933],[[-8.74228e-008,-1,0],[0,0,1]],[true,false]],
	["Land_LampAirport_F",[8825.24,3769.08,4.34575],[[0,1,0],[0,0,1]],[true,false]]
];
{
	private _object = (_x select 0) createVehicle [0,0,0];
	_object setPosASL (_x select 1);
	_object setVectorDirAndUp (_x select 2);
	_object enableSimulationGlobal ((_x select 3) select 0);
	_object allowDamage ((_x select 3) select 1);
} forEach _objects;



#include "SLG.h"

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance,LPSTR lpCmdLine, int nCmdShow )
{
	SetMainWindowText( "MasterCombat 1.01" ) ;//ウィンドウタイトル変更
	SetWindowIconID( 101 ) ;
	ChangeWindowMode( TRUE ) ;//ウィンドウモードに変更
	SetGraphMode( 640 , 480 ,16) ;
	SetScreenMemToVramFlag( FALSE ) ;//Ｖラムを使用しない
	SetOutApplicationLogValidFlag( FALSE ) ;//ログ出力しない
	if( DxLib_Init() == -1 )return -1 ;//ＤＸライブラリ初期化処理 エラーが起きたら直ちに終了
	SetDrawScreen( DX_SCREEN_BACK ) ;//描写先を裏画面に設定
	SetTransColor( 190 , 179 , 145 ) ;// 透過色を変更
	//グラフィックの読み込み
	LoadDivGraph( "File/system/suu.bmp" , 10 , 10 , 1 , 3 , 5 , no);
	LoadDivGraph( "File/system/emo.bmp" , 10 , 5 , 2 , 14 , 18 , emo);

	LoadDivGraph( "File/unit/00a.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[0][0]);
	LoadDivGraph( "File/unit/01a.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[1][0]);
	LoadDivGraph( "File/unit/02a.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[2][0]);
	LoadDivGraph( "File/unit/03a.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[3][0]);
	LoadDivGraph( "File/unit/04a.bmp" , 12 , 3 , 4 , 32 , 72 , unit_g[4][0]);
	LoadDivGraph( "File/unit/05a.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[5][0]);
	LoadDivGraph( "File/unit/06a.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[6][0]);
	LoadDivGraph( "File/unit/07a.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[7][0]);
	LoadDivGraph( "File/unit/08a.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[8][0]);
	LoadDivGraph( "File/unit/09a.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[9][0]);
	LoadDivGraph( "File/unit/10a.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[10][0]);
	LoadDivGraph( "File/unit/11a.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[11][0]);
	LoadDivGraph( "File/unit/12a.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[12][0]);
	LoadDivGraph( "File/unit/13a.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[13][0]);
	LoadDivGraph( "File/unit/14a.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[14][0]);
	LoadDivGraph( "File/unit/15a.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[15][0]);
	LoadDivGraph( "File/unit/16a.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[16][0]);
	LoadDivGraph( "File/unit/17a.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[17][0]);
	LoadDivGraph( "File/unit/18a.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[18][0]);
	LoadDivGraph( "File/unit/19a.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[19][0]);
	LoadDivGraph( "File/unit/20a.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[20][0]);
	LoadDivGraph( "File/unit/21a.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[21][0]);
	LoadDivGraph( "File/unit/22a.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[22][0]);
	LoadDivGraph( "File/unit/23a.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[23][0]);
	LoadDivGraph( "File/unit/24a.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[24][0]);
	LoadDivGraph( "File/unit/25a.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[25][0]);
	LoadDivGraph( "File/unit/26a.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[26][0]);
	LoadDivGraph( "File/unit/27a.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[27][0]);
	LoadDivGraph( "File/unit/00b.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[0][1]);
	LoadDivGraph( "File/unit/01b.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[1][1]);
	LoadDivGraph( "File/unit/02b.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[2][1]);
	LoadDivGraph( "File/unit/03b.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[3][1]);
	LoadDivGraph( "File/unit/04b.bmp" , 12 , 3 , 4 , 32 , 56 , unit_g[4][1]);
	LoadDivGraph( "File/unit/05b.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[5][1]);
	LoadDivGraph( "File/unit/06b.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[6][1]);
	LoadDivGraph( "File/unit/07b.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[7][1]);
	LoadDivGraph( "File/unit/08b.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[8][1]);
	LoadDivGraph( "File/unit/09b.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[9][1]);
	LoadDivGraph( "File/unit/10b.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[10][1]);
	LoadDivGraph( "File/unit/11b.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[11][1]);
	LoadDivGraph( "File/unit/12b.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[12][1]);
	LoadDivGraph( "File/unit/13b.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[13][1]);
	LoadDivGraph( "File/unit/14b.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[14][1]);
	LoadDivGraph( "File/unit/15b.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[15][1]);
	LoadDivGraph( "File/unit/16b.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[16][1]);
	LoadDivGraph( "File/unit/17b.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[17][1]);
	LoadDivGraph( "File/unit/18b.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[18][1]);
	LoadDivGraph( "File/unit/19b.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[19][1]);
	LoadDivGraph( "File/unit/20b.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[20][1]);
	LoadDivGraph( "File/unit/21b.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[21][1]);
	LoadDivGraph( "File/unit/22b.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[22][1]);
	LoadDivGraph( "File/unit/23b.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[23][1]);
	LoadDivGraph( "File/unit/24b.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[24][1]);
	LoadDivGraph( "File/unit/25b.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[25][1]);
	LoadDivGraph( "File/unit/26b.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[26][1]);
	LoadDivGraph( "File/unit/27b.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[27][1]);
	LoadDivGraph( "File/unit/00s.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[0][2]);
	LoadDivGraph( "File/unit/01s.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[1][2]);
	LoadDivGraph( "File/unit/02s.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[2][2]);
	LoadDivGraph( "File/unit/03s.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[3][2]);
	LoadDivGraph( "File/unit/04s.bmp" , 12 , 3 , 4 , 32 , 56 , unit_g[4][2]);
	LoadDivGraph( "File/unit/05s.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[5][2]);
	LoadDivGraph( "File/unit/06s.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[6][2]);
	LoadDivGraph( "File/unit/07s.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[7][2]);
	LoadDivGraph( "File/unit/08s.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[8][2]);
	LoadDivGraph( "File/unit/09s.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[9][2]);
	LoadDivGraph( "File/unit/10s.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[10][2]);
	LoadDivGraph( "File/unit/11s.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[11][2]);
	LoadDivGraph( "File/unit/12s.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[12][2]);
	LoadDivGraph( "File/unit/13s.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[13][2]);
	LoadDivGraph( "File/unit/14s.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[14][2]);
	LoadDivGraph( "File/unit/15s.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[15][2]);
	LoadDivGraph( "File/unit/16s.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[16][2]);
	LoadDivGraph( "File/unit/17s.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[17][2]);
	LoadDivGraph( "File/unit/18s.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[18][2]);
	LoadDivGraph( "File/unit/19s.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[19][2]);
	LoadDivGraph( "File/unit/20s.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[20][2]);
	LoadDivGraph( "File/unit/21s.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[21][2]);
	LoadDivGraph( "File/unit/22s.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[22][2]);
	LoadDivGraph( "File/unit/23s.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[23][2]);
	LoadDivGraph( "File/unit/24s.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[24][2]);
	LoadDivGraph( "File/unit/25s.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[25][2]);
	LoadDivGraph( "File/unit/26s.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[26][2]);
	LoadDivGraph( "File/unit/27s.bmp" , 12 , 3 , 4 , 16 , 16 , unit_g[27][2]);
	LoadDivGraph( "File/system/item.bmp" , 15 , 5 , 3 , 24 , 24 , item_g);

	LoadDivGraph( "File/magic/shot01.bmp" , 8 , 8 , 1 , 32 , 32 , magic_g[0]);



	LoadDivGraph( "File/unit/fire.bmp" , 4 , 4 , 1 , 16 , 11 , fire);
	LoadDivGraph( "File/system/narabi.bmp" , 6 , 3 , 2 , 18 , 24 , tairetu);
	ana=LoadGraph( "File/unit/ana.png" ) ;
	iwa=LoadGraph( "File/unit/iwa.png" ) ;
	saku=LoadGraph( "File/unit/saku.png" ) ;
	sys_g=LoadGraph( "File/system/sys.bmp" ) ;
	huki=LoadGraph( "File/system/huki.png" ) ;
	bamen[0]=LoadGraph( "File/system/bamen1.bmp" ) ;
	bamen[1]=LoadGraph( "File/system/bamen2.bmp" ) ;
	bamen[2]=LoadGraph( "File/system/bamen3.bmp" ) ;
	bamen[3]=LoadGraph( "File/system/bamen4.bmp" ) ;

	back[0]=LoadGraph( "File/system/back_0.jpg" ) ;
	back[1]=LoadGraph( "File/system/back_1.jpg" ) ;
	back[2]=LoadGraph( "File/system/back_2.jpg" ) ;
	back[3]=LoadGraph( "File/system/back_3.jpg" ) ;
	back[4]=LoadGraph( "File/system/back_4.jpg" ) ;
	back[5]=LoadGraph( "File/system/back_5.jpg" ) ;
	back[6]=LoadGraph( "File/system/back_6.jpg" ) ;
	back[7]=LoadGraph( "File/system/back_7.jpg" ) ;
	back[8]=LoadGraph( "File/system/back_8.jpg" ) ;
	back[9]=LoadGraph( "File/system/back_9.jpg" ) ;
	back[10]=LoadGraph( "File/system/back_10.jpg" ) ;
	world_map=LoadGraph( "File/system/map.bmp" ) ;
	se_no[0]=LoadSoundMem( "File/sound/bosu20.wav" ) ;
	se_no[1]=LoadSoundMem( "File/sound/bosu23.wav" ) ;
	se_no[2]=LoadSoundMem( "File/sound/coin06.wav" ) ;
	se_no[3]=LoadSoundMem( "File/sound/coin07.wav" ) ;
	se_no[4]=LoadSoundMem( "File/sound/cursor01.wav" ) ;
	se_no[5]=LoadSoundMem( "File/sound/cursor26.wav" ) ;
	se_no[6]=LoadSoundMem( "File/sound/eco00.wav" ) ;
	se_no[7]=LoadSoundMem( "File/sound/cursor04.wav" ) ;//取得
	se_no[8]=LoadSoundMem( "File/sound/fire02.wav" ) ;
	se_no[9]=LoadSoundMem( "File/sound/gun16.wav" ) ;
	se_no[10]=LoadSoundMem( "File/sound/hit_p09.wav" ) ;
	se_no[11]=LoadSoundMem( "File/sound/power03.wav" ) ;
	se_no[12]=LoadSoundMem( "File/sound/power20.wav" ) ;
	se_no[13]=LoadSoundMem( "File/sound/swing41.wav" ) ;
	se_no[14]=LoadSoundMem( "File/sound/pyoro65.wav" ) ;
	se_no[15]=LoadSoundMem( "File/sound/water02.wav" ) ;
	se_no[16]=LoadSoundMem( "File/sound/push48.wav" ) ;
	bgm[0]=LoadSoundMem( "File/music/syouri.mp3" ) ;
	bgm[1]=LoadSoundMem( "File/music/haiboku.mp3" ) ;

	ChangeVolumeSoundMem( 255 * 10 / 100, se_no[16]) ;

	f_a=CreateFontToHandle( "HGS行書体" , 32 , 3 ) ;
	f_t=CreateFontToHandle( "HGS行書体" , 110 , 6 ) ;//
	SetFontSize( 20 ) ;
	SetFontThickness( 6 ) ;
	siro=GetColor(255,255,255);
	kuro=GetColor(0,0,0);
	hai=GetColor(122,122,122);
	aka=GetColor(255,0,0);
	midori=GetColor(0,255,0);
	ao=GetColor(0,0,255);
	kougeki = GetColor(255,150,150);
	bougyo  = GetColor(150,150,255);
	kaihuku = GetColor(150,255,150);
	job_pow[0] = 8;job_def[0] = 10;job_spd[0] = 6;job_sta[0] =30;job_wei[0] =15;job_vit[0] =100;
	job_pow[1] = 9;job_def[1] = 9;job_spd[1] =10;job_sta[1] =33;job_wei[1] = 9;job_vit[1] =110;
	job_pow[2] =12;job_def[2] = 9;job_spd[2] = 9;job_sta[2] =33;job_wei[2] =10;job_vit[2] =120;
	job_pow[3] =10;job_def[3] =10;job_spd[3] =10;job_sta[3] =30;job_wei[3] =10;job_vit[3] =100;
	job_pow[4] =12;job_def[4] =10;job_spd[4] =10;job_sta[4] =40;job_wei[4] =15;job_vit[4] =120;
	job_pow[5] =10;job_def[5] =11;job_spd[5] = 9;job_sta[5] =30;job_wei[5] =11;job_vit[5] =100;
	job_pow[6] =11;job_def[6] =10;job_spd[6] =11;job_sta[6] =30;job_wei[6] = 9;job_vit[6] =100;
	job_pow[7] = 8;job_def[7] = 8;job_spd[7] = 9;job_sta[7] =27;job_wei[7] = 9;job_vit[7] = 90;
	job_pow[8] =14;job_def[8] =10;job_spd[8] =8;job_sta[8] =99;job_wei[8] =15;job_vit[8] =999;
	job_pow[9] =10;job_def[9] =12;job_spd[9] =9;job_sta[9] =30;job_wei[9] =10;job_vit[9] =100;
	job_pow[10]=12;job_def[10]=10;job_spd[10]=11;job_sta[10]=33;job_wei[10]=12;job_vit[10]=110;
	job_pow[11]=11;job_def[11]=12;job_spd[11]=15;job_sta[11]=30;job_wei[11]= 9;job_vit[11]=110;
	job_pow[12]=11;job_def[12]=12;job_spd[12]=11;job_sta[12]=33;job_wei[12]=10;job_vit[12]=100;
	job_pow[13]=12;job_def[13]=11;job_spd[13]=11;job_sta[13]=33;job_wei[13]=10;job_vit[13]=100;
	job_pow[14]=11;job_def[14]=11;job_spd[14]=10;job_sta[14]=30;job_wei[14]=10;job_vit[14]=110;
	job_pow[15]=10;job_def[15]= 8;job_spd[15]=11;job_sta[15]=40;job_wei[15]=10;job_vit[15]=150;
	job_pow[16]=12;job_def[16]=11;job_spd[16]=10;job_sta[16]=36;job_wei[16]=12;job_vit[16]=110;
	job_pow[17]=14;job_def[17]=13;job_spd[17]=11;job_sta[17]=40;job_wei[17]=15;job_vit[17]=130;//アロケル
	job_pow[18]=11;job_def[18]=10;job_spd[18]=10;job_sta[18]=36;job_wei[18]=10;job_vit[18]=110;
	job_pow[19]=15;job_def[19]=15;job_spd[19]=12;job_sta[19]=50;job_wei[19]=13;job_vit[19]=150;//魔王
	job_pow[20]=14;job_def[20]=14;job_spd[20]=11;job_sta[20]=40;job_wei[20]=13;job_vit[20]=130;//アミー
	job_pow[21]=13;job_def[21]=13;job_spd[21]=11;job_sta[21]=40;job_wei[21]=13;job_vit[21]=140;//フォルネウス
	job_pow[22]=13;job_def[22]=14;job_spd[22]=15;job_sta[22]=40;job_wei[22]=13;job_vit[22]=130;//ブネ
	job_pow[23]= 8;job_def[23]= 8;job_spd[23]= 8;job_sta[23]=24;job_wei[23]= 8;job_vit[23]= 80;
	job_pow[24]=11;job_def[24]=11;job_spd[24]=10;job_sta[24]=30;job_wei[24]=10;job_vit[24]=110;
	job_pow[25]=13;job_def[25]=13;job_spd[25]=12;job_sta[25]=36;job_wei[25]=11;job_vit[25]=120;
	job_pow[26]=11;job_def[26]=11;job_spd[26]=10;job_sta[26]=33;job_wei[26]=11;job_vit[26]=110;
	job_pow[27]=12;job_def[27]=12;job_spd[27]= 9;job_sta[27]=40;job_wei[27]=12;job_vit[27]=120;
	for(i=0;i<28;i++){
	job_pow[i]-=5;
	job_def[i]-=5;
	}
	butai_one[0]=5;//部隊１の兵種//重歩兵
	butai_two[0]=6;//部隊２の兵種//重騎兵
	butai_sirei[0]=24;//司令官の兵種

	re_start();
	title();

	if(ex_mode==1)eve_flag[99]=1;
	if(ex_mode==2){
		set_jinkei[1]=21;
		set_hyouhou[1][0]=37;
		set_hyouhou[1][1]=61;
		set_hyouhou[1][2]=62;
		set_hyouhou[1][3]=60;
		set_hyouhou[1][4]=64;
		set_hyouhou[1][5]=65;
		set_hyouhou[1][6]=66;
		set_hyouhou[1][7]=67;
		set_hyouhou[1][8]=63;
		eve_flag[98]=1;
	}

	ex_mode=0;
	if(hiduke>24){re_start();play_time=0;name_nyuuryoku();}
	if(play_time==0){
	if(eve_flag[99]==1)play_time=360000000;
	}

	time_count=GetNowCount();//時間経過計算用
	sekaitizu();

	DxLib_End() ;				// ＤＸライブラリ使用の終了処理

	return 0 ;				// ソフトの終了 
}
int re_start(){
	for(i=0;i<20;i++){
	get_jinkei[i]=0;
	get_item[i]=0;
	}
	for(i=0;i<30;i++){
	kuni_seiryoku[i]=0;
	kuni_henka[i]=0;
	}
	youhei_lv[0]=0;
	sinobi_lv[0]=0;
	vs_count=0;
	win_count=0;//勝利回数
	lost_count=0;//敗北回数
	esc_count=0;//逃走回数
	anihi_count=0;//撃破数
	perfe_count=0;//無傷数
	for(i=0;i<100;i++)
	eve_flag[i]=0;//イベントフラグ

	kuni_seiryoku[0] =1;
	kuni_yuukou[0] =   0;kuni_gundan[0] =   0;kuni_x[0] =255;kuni_y[0] =140;kuni_type[0] =24;strcpy_s(kuni_name[0],  "ロア");
	kuni_yuukou[1] =   0;kuni_gundan[1] = 700;kuni_x[1] = 20;kuni_y[1] = 20;kuni_type[1] =2 ;strcpy_s(kuni_name[1],  "永久凍土");
	kuni_yuukou[2] =   0;kuni_gundan[2] = 800;kuni_x[2] =115;kuni_y[2] = 35;kuni_type[2] =18;strcpy_s(kuni_name[2],  "竜の山");
	kuni_yuukou[3] = 750;kuni_gundan[3] = 300;kuni_x[3] = 70;kuni_y[3] = 90;kuni_type[3] =23;strcpy_s(kuni_name[3],  "ユルテム");
	kuni_yuukou[4] =   0;kuni_gundan[4] =1000;kuni_x[4] = 25;kuni_y[4] =180;kuni_type[4] =22;strcpy_s(kuni_name[4],  "双龍の峰");
	kuni_yuukou[5] = 250;kuni_gundan[5] = 500;kuni_x[5] = 75;kuni_y[5] =220;kuni_type[5] =5 ;strcpy_s(kuni_name[5],  "プド二");
	kuni_yuukou[6] = 250;kuni_gundan[6] =1000;kuni_x[6] =135;kuni_y[6] =155;kuni_type[6] =26;strcpy_s(kuni_name[6],  "ベア");
	kuni_yuukou[7] =   0;kuni_gundan[7] = 100;kuni_x[7] =190;kuni_y[7] =110;kuni_type[7] =1 ;strcpy_s(kuni_name[7],  "小鬼の巣窟");
	kuni_yuukou[8] =   0;kuni_gundan[8] = 200;kuni_x[8] =205;kuni_y[8] =180;kuni_type[8] =3 ;strcpy_s(kuni_name[8],  "ツィガフ");
	kuni_yuukou[9] = 750;kuni_gundan[9] = 200;kuni_x[9] =225;kuni_y[9] =240;kuni_type[9] =3 ;strcpy_s(kuni_name[9],  "ボロンカ");
	kuni_yuukou[10]=   0;kuni_gundan[10]= 500;kuni_x[10]=145;kuni_y[10]=300;kuni_type[10]=10;strcpy_s(kuni_name[10], "ローブルグ");
	kuni_yuukou[11]= 500;kuni_gundan[11]= 800;kuni_x[11]=220;kuni_y[11]=320;kuni_type[11]=26;strcpy_s(kuni_name[11], "カトマ");
	kuni_yuukou[12]=   0;kuni_gundan[12]=1000;kuni_x[12]=135;kuni_y[12]=365;kuni_type[12]=20;strcpy_s(kuni_name[12], "朱雀要塞");
	kuni_yuukou[13]=1000;kuni_gundan[13]= 100;kuni_x[13]=230;kuni_y[13]=380;kuni_type[13]=3 ;strcpy_s(kuni_name[13], "パネイル");
	kuni_yuukou[14]= 750;kuni_gundan[14]= 500;kuni_x[14]=275;kuni_y[14]= 40;kuni_type[14]=25;strcpy_s(kuni_name[14], "精霊の森");
	kuni_yuukou[15]=   0;kuni_gundan[15]=1000;kuni_x[15]=360;kuni_y[15]= 30;kuni_type[15]=17;strcpy_s(kuni_name[15], "魔神殿");
	kuni_yuukou[16]= 500;kuni_gundan[16]= 400;kuni_x[16]=295;kuni_y[16]=100;kuni_type[16]=6 ;strcpy_s(kuni_name[16], "スピア");
	kuni_yuukou[17]= 250;kuni_gundan[17]= 600;kuni_x[17]=355;kuni_y[17]=150;kuni_type[17]=5 ;strcpy_s(kuni_name[17], "バカダ");
	kuni_yuukou[18]=   0;kuni_gundan[18]= 300;kuni_x[18]=285;kuni_y[18]=200;kuni_type[18]=0 ;strcpy_s(kuni_name[18], "東の森");
	kuni_yuukou[19]= 250;kuni_gundan[19]= 900;kuni_x[19]=440;kuni_y[19]=160;kuni_type[19]=26;strcpy_s(kuni_name[19], "アントラ");
	kuni_yuukou[20]=   0;kuni_gundan[20]= 750;kuni_x[20]=405;kuni_y[20]=205;kuni_type[20]=26;strcpy_s(kuni_name[20], "テリザロ");
	kuni_yuukou[21]= 500;kuni_gundan[21]= 500;kuni_x[21]=375;kuni_y[21]=250;kuni_type[21]=3 ;strcpy_s(kuni_name[21], "クィンティン");
	kuni_yuukou[22]= 250;kuni_gundan[22]= 700;kuni_x[22]=410;kuni_y[22]=365;kuni_type[22]=16;strcpy_s(kuni_name[22], "バルバード");
	kuni_yuukou[23]= 500;kuni_gundan[23]= 800;kuni_x[23]=470;kuni_y[23]=220;kuni_type[23]=26;strcpy_s(kuni_name[23], "スバイツア");
	kuni_yuukou[24]= 250;kuni_gundan[24]= 300;kuni_x[24]=510;kuni_y[24]=250;kuni_type[24]=6 ;strcpy_s(kuni_name[24], "アロンダイ");
	kuni_yuukou[25]=   0;kuni_gundan[25]=1000;kuni_x[25]=540;kuni_y[25]=290;kuni_type[25]=19;strcpy_s(kuni_name[25], "深淵");
	kuni_yuukou[26]=   0;kuni_gundan[26]=1000;kuni_x[26]=535;kuni_y[26]=360;kuni_type[26]=27;strcpy_s(kuni_name[26], "冥王の塔");
	kuni_yuukou[27]=   0;kuni_gundan[27]= 600;kuni_x[27]=595;kuni_y[27]=255;kuni_type[27]=9 ;strcpy_s(kuni_name[27], "サイズヅ");
	kuni_yuukou[28]= 750;kuni_gundan[28]= 500;kuni_x[28]=495;kuni_y[28]=125;kuni_type[28]=11;strcpy_s(kuni_name[28], "コウガイ");
	kuni_yuukou[29]=   0;kuni_gundan[29]=1000;kuni_x[29]=600;kuni_y[29]=125;kuni_type[29]=21;strcpy_s(kuni_name[29], "海帝宮");
	//初期国データ
	minsyuu=500;//初期民衆
	sangyou=0;//初期産業
	kokuryoku=0;//初期国力
	money=100*10000;
	//初期戦術データ
	set_jinkei[0]=1;
	set_jinkei[1]=2;
	for(i=0;i<2;i++){
	set_hyouhou[i][0]=1;
	set_hyouhou[i][1]=2;
	set_hyouhou[i][2]=3;
	set_hyouhou[i][3]=4;
	set_hyouhou[i][4]=5;
	set_hyouhou[i][5]=57;
	set_hyouhou[i][6]=0;
	set_hyouhou[i][7]=0;
	set_hyouhou[i][8]=0;
	}

	get_jinkei[0]=1;
	get_jinkei[1]=1;
	get_jinkei[2]=1;
	get_hyouhou[0]=1;
	get_hyouhou[9]=1;
	get_hyouhou[19]=1;
	get_hyouhou[23]=1;
	get_hyouhou[24]=1;
	get_hyouhou[36]=1;
	for(i=0;i<50;i++){
	if(get_hyouhou[i]==1)flag_hyouhou[i]=1;
	}
	for(i=0;i<50;i++){
	get_hyouhou[i]=0;
	}

	get_hyouhou[0]=1;
	get_hyouhou[9]=1;
	get_hyouhou[19]=1;
	get_hyouhou[23]=1;
	get_hyouhou[24]=1;
	get_hyouhou[36]=1;
	hiduke=1;

	return 0;
}
int title(){

	PlayMusic( "File/music/naisei.mp3" , DX_PLAYTYPE_LOOP ) ;
	//セーブラベル読み込み

	//char hero_name[22];//主人公の名前
	//char save_name[3][22];//セーブデータの主人公名

	omake_load();//システムデータ読込

	for(A=0;A<3;A++){
	FILE *fp ;
	if(A==0)fopen_s( &fp,"File/save/save_01.sav" , "rb" ) ;
	else if(A==1)fopen_s( &fp,"File/save/save_02.sav" , "rb" ) ;
	else if(A==2)fopen_s( &fp,"File/save/save_03.sav" , "rb" ) ;
	// オープンできなかったらここで終了
	if( fp == NULL ) continue;
	//データの書き出し
	fread( &save_name[A], sizeof( char ) , 22 , fp );//主人公の名前
	fread( &save_syuu[A], sizeof( int ) , 1 , fp );//日付
	fread( &save_time[A], sizeof( int ) , 1 , fp );//プレイ時間
	//ファイルを閉じる
	fclose(fp);
	}

	A=GetRand(25);
	if(A==3)A=26;
	if(A==4)A=27;
	B=GetRand(25);
	if(B==3)B=26;
	if(B==4)B=27;

	while(1){
	GetMousePoint( &mou_x, &mou_y );
	if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
		if(mouse_left==0) mouse_left=1;
		else mouse_left=2;
	}else mouse_left=0;
	if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0){//マウス左押下
		if(mouse==0){
		A=GetRand(25);
		if(A==3)A=26;
		if(A==4)A=27;
		B=GetRand(25);
		if(B==3)B=26;
		if(B==4)B=27;
		}
		mouse=1;
	}else mouse=0;

	DrawGraph( 0, 0, world_map, TRUE ) ;
	DrawStringToHandle( 15 , 75 , "MasterCombat" ,kuro , f_t ) ;
	DrawStringToHandle( 10 , 70 , "MasterCombat" ,siro , f_t ) ;
	DrawStringToHandle( 246 , 271 , "New Game" ,kuro , f_a ) ;
	DrawStringToHandle( 245 , 270 , "New Game" ,siro , f_a ) ;
	DrawStringToHandle( 251 , 321 , "Continue" ,kuro , f_a ) ;
	DrawStringToHandle( 250 , 320 , "Continue" ,siro , f_a ) ;
	if(omake_mode==1){
	DrawStringToHandle( 237 , 371 , "Extra mode" ,kuro , f_a ) ;
	DrawStringToHandle( 236 , 370 , "Extra mode" ,siro , f_a ) ;
	DrawStringToHandle( 237 , 421 , "Omake mode" ,kuro , f_a ) ;
	DrawStringToHandle( 236 , 420 , "Omake mode" ,siro , f_a ) ;
	}

	if(mou_x>200 && mou_x<420){
		if(J/15%2==0)j=1;
		else if(J/15%4==1)j=0;
		else j=2;
		if(mou_y>240 && mou_y<300){//ニューゲーム
		DrawRotaGraph( 220 , 284 , 2 , 0 , unit_g[3][1][j+9] , TRUE ) ;
		DrawRotaGraph( 402 , 284 , 2 , 0 , unit_g[3][0][j+6] , TRUE ) ;
		if(mouse_left==1){
			PlaySoundMem( se_no[16] , DX_PLAYTYPE_BACK ) ;
			name_nyuuryoku();
			}
		}
		else if(mou_y>300 && mou_y<350){//ロードゲーム
		DrawRotaGraph( 220 , 334 , 2 , 0 , unit_g[3][1][j+9] , TRUE ) ;
		DrawRotaGraph( 402 , 334 , 2 , 0 , unit_g[3][0][j+6] , TRUE ) ;
		if(mouse_left==1){
			mouse_left=2;
			PlaySoundMem( se_no[16] , DX_PLAYTYPE_BACK ) ;
			naisei_load();
			}
		}
		else if(mou_y>350 && mou_y<400 && omake_mode==1){//エクス虎
		DrawRotaGraph( 220 , 384 , 2 , 0 , unit_g[A][1][j+9] , TRUE ) ;
		DrawRotaGraph( 402 , 384 , 2 , 0 , unit_g[A][0][j+6] , TRUE ) ;
		if(mouse_left==1){
			PlaySoundMem( se_no[16] , DX_PLAYTYPE_BACK ) ;
			ex_mode=1;
			for(i=0;i<50;i++){
			get_hyouhou[i]=1;
			flag_hyouhou[i]=1;
			}
			for(i=0;i<20;i++)get_jinkei[i]=1;
			name_nyuuryoku();
			}
		}
		else if(mou_y>400 && mou_y<450 && omake_mode==1 ){//おまけ
		DrawRotaGraph( 220 , 434 , 2 , 0 , unit_g[B][1][j+9] , TRUE ) ;
		DrawRotaGraph( 402 , 434 , 2 , 0 , unit_g[B][0][j+6] , TRUE ) ;
		if(mouse_left==1){
			PlaySoundMem( se_no[16] , DX_PLAYTYPE_BACK ) ;
			ex_mode=2;
			name_nyuuryoku();
			}
		}
	}
	if(strlen(hero_name)>1)break;
	J++;
	if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
	}
	ScreenFlip();
	}
	return 0;
}
int sentou_main(){//戦闘のメイン

	//部隊数がすくなすぎの場合
	if(gun_kazu[0]<9)gun_kazu[0]=9;
	//

	PlayMusic( "File/music/kaisi.mp3" , DX_PLAYTYPE_LOOP ) ;
		sentou_kaisi();
		for(i=0;i<2;i++){
		shot_tame[i]=0;
		gun_sindahuri[i]=0;
		meireihuka[i]=0;
		sirei_tame[i]=0;
		now_meirei[i]=1;
		now_time[i]=0;
		gun_sikikan[i]=0;
		gun_bom[i]=0;
		gun_change[i]=0;
		gun_jinkai[i]=0;
		}
		tenkou=0;

	//指揮官装備能力
	hei_pow[0][gun_kazu[0]]+=get_item[0]+get_item[0]/4;//武器
	hei_def[0][gun_kazu[0]]+=get_item[1]+get_item[1]/4;//防具
	if(eve_flag[13]==1) hei_kaz[0][gun_kazu[0]]+=20;//鳳凰の羽
	if(eve_flag[14]==1) hei_sta[0][gun_kazu[0]]+=20;//生命の水
	if(eve_flag[15]==1){
		hei_wei[0][gun_kazu[0]]+=2;//魔槍
		hei_spd[0][gun_kazu[0]]+=2;//
		hei_atari[A][i]+=15000;//
	}
	con_time=0;

	PlayMusic( "File/music/sentou.mp3" , DX_PLAYTYPE_LOOP ) ;

	//おまけモード補正

	while(1){

	con_time++;

	A=0;
	if(gun_change[A]!=0){//交代判定
	if(front_line[A]>=back_line[A]-5000 && gun_change[A]%3==1){
		sen_22();
		if(gun_change[A]>2)for(i=0;i<100;i++)hei_mov[A][i]=hei_mov[A][i]*3/2;
		}
	if(back_line[A]>=gun_backline[A] && gun_change[A]%3==2)sen_23();
	}
	A=1;
	if(gun_change[A]!=0){
	if(front_line[A]<=back_line[A]+5000 && gun_change[A]%3==1){
		sen_22();
		if(gun_change[A]>2)for(i=0;i<100;i++)hei_mov[A][i]=hei_mov[A][i]*3/2;
		}
	if(back_line[A]<=gun_backline[A] && gun_change[A]%3==2)sen_23();
	}

	for(A=0;A<2;A++){//統率回復判定
		if(sirei_tame[A]>0){
			sirei_tame[A]--;
			if(sirei_tame[A]%1000>120)hei_emo[A][gun_kazu[A]]=3;
			else if(sirei_tame[A]%1000>60)hei_emo[A][gun_kazu[A]]=4;
			else if(sirei_tame[A]%1000>0)hei_emo[A][gun_kazu[A]]=5;
			else{
			hei_emo[A][gun_kazu[A]]=0;
			sen_26();
			sirei_tame[A]=0;
			}
		}
	}
	for(A=0;A<2;A++){//投石判定
		if(shot_tame[A]>0){
			shot_tame[A]--;
			if(shot_tame[A]>120)hei_emo[A][gun_kazu[A]]=3;
			else if(shot_tame[A]>60)hei_emo[A][gun_kazu[A]]=4;
			else if(shot_tame[A]>0)hei_emo[A][gun_kazu[A]]=5;
			else{
			hei_emo[A][gun_kazu[A]]=0;
			sen_38();
			}
		}
	}

	for(A=0;A<2;A++){//命令不可判定
		if(meireihuka[A]>0){
		meireihuka[A]--;
		if(ikari[A]==1) hei_emo[A][gun_kazu[A]]=6;
		else if(meireihuka[A]>0)hei_emo[A][gun_kazu[A]]=2;
		else hei_emo[A][gun_kazu[A]]=0;
		}
	}

	for(A=0;A<2;A++)//死んだ振り判定
	if(gun_sindahuri[A]>0){
		gun_sindahuri[A]--;
		if(gun_sindahuri[A]==0)sen_33();
	}

	sentou_idou();//モラル、移動等計算
	if(kasoku==0 || con_time%3==0)sentou_byouga();//戦闘中の描画処理
	sentou_atari();//戦闘中の当たり判定
	fire_atari();//炎との当たり判定
	saku_atari();//柵との当たり判定
	ana_atari();//柵との当たり判定
	shot_main();//射撃判定

	//３倍速判定と描写処理
	if(kasoku==0 || con_time%3==0)ScreenFlip();

	if(meireihuka[1]<=0 && sirei_tame[1]<=0 && sirei_tame[1]<=0 && gun_jinkai[1]<=0 && now_time[0]!=0 && now_time[1]!=0 && gun_nokori[1]>0 && gun_nokori[0]!=0 && gun_nokori[1]!=0){
		sentou_ai();//敵ＡＩ処理
	}

	for(i=0;i<100;i++){
		if(hei_moral[0][i]>10000)hei_moral[0][i]=10000;
		else if(hei_moral[0][i]<0)hei_moral[0][i]=0;
		if(hei_moral[1][i]>10000)hei_moral[1][i]=10000;
		else if(hei_moral[1][i]<0)hei_moral[1][i]=0;
	}

	if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス押下判定
	if(mouse_on==0)kasoku=(kasoku+1)%2;
	mouse_on=1;
	}else{
	mouse_on=0;
	}

	if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//マウス押下判定
	A=0;
	if(mouse==0)sentou_command();
	}else{
	mouse=0;
	}


	A=GetMouseWheelRotVol();
	if(A>0)kasoku=1;
	else if(A<0)kasoku=0;

	now_time[0]++;
	now_time[1]++;

	//指揮官死亡判定
	for(A=0;A<2;A++)
		if(hei_kaz[A][gun_kazu[A]]<=0 && hei_esc[A][gun_kazu[A]]==0 && gun_sikikan[A]==0 && hei_toppa[A][gun_kazu[A]]==0){
		gun_sikikan[A]=1;
		gun_senjyutu[A][0]=1;gun_senrest[A][0]=10;
		gun_senjyutu[A][1]=2;gun_senrest[A][1]=10;
		gun_senjyutu[A][2]=3;gun_senrest[A][2]=10;
		gun_senjyutu[A][3]=4;gun_senrest[A][3]=1;
		gun_senjyutu[A][4]=5;gun_senrest[A][4]=10;
		gun_senjyutu[A][5]=0;gun_senrest[A][5]=10;
		gun_senjyutu[A][6]=0;gun_senrest[A][6]=10;
		gun_senjyutu[A][7]=0;gun_senrest[A][7]=10;
		gun_senjyutu[A][8]=0;gun_senrest[A][8]=10;
		if(A==1)AI_rest[4]=1;
	}

	if(gun_nokori[0]==0 || gun_nokori[1]==0){//戦闘終了判定
		kettyaku();
		break;
	}

	}
	return 0;
}
int sentou_kaisi(){//戦闘開始前の初期化

	for(j=0;j<2;j++)
	for(i=0;i<100;i++){
	hei_kaz[j][i]=0;//兵士の部隊数
	hei_sibou[j][i]=999;//兵士死亡フラグ
	hei_y[j][i]=-1000000;
	}
	gun_moral[1]=10000;
	gun_hirou[1]=0;
	gun_moral[0]=10000;
	gun_hirou[0]=0;
	hensei_no=0;
	gun_jinkei[0]=set_jinkei[0];
	moritami=0;
	if(VS_no==24 && eve_flag[9]==1){
		moritami=1;gun_kazu[0]+=20;
	}

	//敵性能代入
	A=1;
	VS_dai();
	A=0;jin_dai();
	A=1;jin_dai();

	for(A=0;A<2;A++){
		for(i=0;i<gun_kazu[A]+1;i++){
	if(i==gun_kazu[A]){//指揮官配置
			hei_x[A][i]=660000*(1-A*2)+A*640000;//兵士のＸ座標
			hei_y[A][i]=150000;//兵士のＹ座標
			}else{
			hei_x[A][i]=660000*(1-A*2)+A*640000;//兵士のＸ座標
			hei_y[A][i]=300000*i/(gun_kazu[A]-1);//兵士のＹ座標
			}
		}
	}

	for(t=0;t<120;t++){
		for(i=0;i<100;i++){
		hei_x[0][i]-=500;
		hei_x[1][i]+=500;
		}
	sentou_byouga();//戦闘中の描画処理
	DrawBox(-40+t*3,0,680-t*3,480,kuro,TRUE);
	ScreenFlip();
	}

	A=1;
	hukidasi();
	jin_dai();
	for(i=0;i<100;i++){
	hei_xnara[i]=hei_x[A][i];
	hei_ynara[i]=hei_y[A][i];
	hei_xnara2[i]=40000;
	hei_ynara2[i]=300000*i/(gun_kazu[A]-1);
	if(i==gun_kazu[A]) hei_ynara2[i]=150000;
	}
	narabi();
	jin_dai();



	A=0;
	//使用する陣形選ぶ
	gun_jinkei[A]=set_jinkei[0];
	jin_dai();


	for(i=0;i<100;i++){
	hei_xnara[i]=hei_x[A][i];
	hei_ynara[i]=hei_y[A][i];
	hei_xnara2[i]=600000;
	hei_ynara2[i]=300000*i/(gun_kazu[A]-1);
	if(i==gun_kazu[A]) hei_ynara2[i]=150000;
	}
	strcpy_s(sikikan_name[0], hero_name);
	narabi();
	jin_dai();
	jin_select();
	jin_dai();
	for(t=0;t<120;t++){
	sentou_byouga();//戦闘中の描画処理
	SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
	DrawBox( 120 , 98 , 520 , 278 ,GetColor(0,0,255) , TRUE ) ;
	SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;

	if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0 ){//マウス押下判定
	if(mouse==0)break;
	}else{
	mouse=0;
	}

		for(i=0;i<2;i++){
		if(i==0)siro=GetColor(0,0,0);
		else siro=GetColor(255,255,255);
		DrawFormatStringToHandle( 162-i , 110-i , siro , f_a , "%s" , sikikan_name[0] ) ;
		DrawFormatStringToHandle( 162-i , 154-i , siro , f_a , "%s" , jin_name[0] ) ;
		DrawFormatStringToHandle( 382-i , 154-i , siro , f_a , "%d人" , gun_kazu[0]*100+100 ) ;
		DrawFormatStringToHandle( 162-i , 198-i , siro , f_a , "%s" , sikikan_name[1] ) ;
		DrawFormatStringToHandle( 162-i , 242-i , siro , f_a , "%s" , jin_name[1] ) ;
		DrawFormatStringToHandle( 382-i , 242-i , siro , f_a , "%d人" , gun_kazu[1]*100+100 ) ;
		}

	ScreenFlip();
	}



	//戦術の代入
	for(i=0;i<9;i++){
	gun_senjyutu[0][i]=set_hyouhou[hensei_no][i];
	}
	kaisuu_set();

	A=0;
	if(gun_jinkei[A]==21)gun_kazu[A]-=4;
	hei_sort();
	if(gun_jinkei[A]==21)gun_kazu[A]+=4;
	A=1;
	if(gun_jinkei[A]==21)gun_kazu[A]-=4;
	hei_sort();
	if(gun_jinkei[A]==21)gun_kazu[A]+=4;

	if(eve_flag[99]==1)ex_wasure();//戦術忘却処理

	return 0;
}
int sentou_ai(){//戦闘時のＡＩ処理

	A=1;
	AI_kihon();

	switch (AI_no){
		case 1:AI_01();break;
		case 2:AI_02();break;
		case 3:AI_03();break;
		case 4:AI_04();break;
		case 5:AI_05();break;
		case 6:AI_06();break;
		case 7:AI_07();break;
		case 8:AI_08();break;
		case 9:AI_09();break;
		case 10:AI_10();break;
		case 11:AI_11();break;
		case 12:AI_12();break;
		case 13:AI_13();break;
		case 14:AI_14();break;
		case 15:AI_15();break;
		case 16:AI_16();break;
		case 17:AI_17();break;
		case 18:AI_18();break;
		case 19:AI_19();break;
		case 20:AI_20();break;
		case 21:AI_21();break;
		case 22:AI_22();break;
		case 23:AI_23();break;
	}
		return 0;
}
int sentou_command(){//戦闘中のコマンド選択

	mouse=1;

	while(1){

	GetMousePoint( &mou_x, &mou_y );

	if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//マウス左押下
		if(mouse==0){
			mouse=1;
			break;
		}
	}else mouse=0;

	sentou_byouga();//戦闘中の描画処理
	SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
	DrawBox( 160 , 10 , 480 , 410 ,GetColor(0,0,255) , TRUE ) ;
	if(mou_x>160 && mou_x<480 && mou_y>10 && mou_y <410) DrawBox( 170 , 19+(mou_y-14)/44*44 , 470 , 53+(mou_y-14)/44*44 ,GetColor(0,0,255) , TRUE ) ;
	SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;

	for(i=0;i<9;i++)command_mes();

		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0 && hatudou_kanou[A][(mou_y-14)/44]==0 && mou_x>160 && mou_x<480 && mou_y>10 && mou_y <410){//マウス左押下
			switch (gun_senjyutu[A][(mou_y-14)/44]){
			case 1:sen_01();break;
			case 2:sen_02();break;
			case 3:sen_03();break;
			case 4:sen_04();break;
			case 5:sen_05();break;
			case 6:sen_06();break;
			case 7:sen_07();break;
			case 8:sen_08();break;
			case 9:sen_09();break;
			case 10:sen_10();break;
			case 11:sen_11();break;
			case 12:sen_12();break;
			case 13:sen_13();break;
			case 14:sen_14();break;
			case 15:sen_15();break;
			case 16:sen_16();break;
			case 17:sen_17();break;
			case 18:sen_18();break;
			case 19:sen_19();break;
			case 20:sen_20();break;
			case 21:sen_21();break;
			case 22:sen_22();break;
			case 23:sen_23();break;
			case 24:sen_24();break;
			case 25:sen_25();break;
			case 26:sen_26();break;
			case 27:sen_27();break;
			case 28:sen_28();break;
			case 29:sen_29();break;
			case 30:sen_30();break;
			case 31:sen_31();break;
			case 32:sen_32();break;
			case 33:sen_33();break;
			case 34:sen_34();break;
			case 35:sen_35();break;
			case 36:sen_36();break;
			case 37:sen_37();break;
			case 38:sen_38();break;
			case 39:sen_39();break;
			case 40:sen_40();break;
			case 41:sen_41();break;
			case 42:sen_42();break;
			case 43:sen_43();break;
			case 44:sen_44();break;
			case 45:sen_45();break;
			case 46:sen_46();break;
			case 47:sen_47();break;
			case 48:sen_48();break;
			case 49:sen_49();break;
			case 50:sen_50();break;
			case 51:sen_51();break;
			case 52:sen_52();break;
			case 53:sen_53();break;
			case 54:sen_54();break;
			case 55:sen_55();break;
			case 56:sen_56();break;
			case 57:sen_57();break;
			case 58:sen_58();break;
			case 59:sen_59();break;
			case 60:sen_60();break;
			case 61:sen_61();break;
			case 62:sen_62();break;
			case 63:sen_63();break;
			case 64:sen_64();break;
			case 65:sen_65();break;
			case 66:sen_66();break;
			case 67:sen_67();break;
			}
			if(gun_senrest[A][(mou_y-14)/44]<10)gun_senrest[A][(mou_y-14)/44]--;
		break;
		}

	ScreenFlip();
	}

	return 0;
}
int sentou_byouga(){//戦闘中の描画処理

	jikan++;
	ClearDrawScreen();

	if(tenki>0)SetDrawBright( 155 , 155 , 155 ) ;

	DrawGraph( 0, 0, back[map], TRUE ) ;

	if(tenki>0)
	for(j=0;j<12;j++)//雨
		for(i=0;i<33;i++){
			xa=(i*20+j*10-ame)%660;
			if(xa<0)xa+=660;
			ya=(j*40+ame*2)%480;
			if(tenki==1)DrawLine(xa,ya,xa-10,ya+20,siro);
			else DrawCircle(xa,ya,3,siro,1);
		}
	if(tenki==1)ame+=2;
	if(tenki==2)ame+=2;

	//敵軍
	DrawBox( 314-gun_moral[1]*10/333 , 434 , 314  , 444 ,aka , TRUE ) ;
	DrawBox( 314-300+gun_hirou[1]/333 , 454 , 314 , 464 ,ao , TRUE ) ;
	//自軍
	DrawBox( 326 , 434 , 326+gun_moral[0]*10/333 , 444 ,aka , TRUE ) ;
	DrawBox( 326 , 454 , 326+300-gun_hirou[0]/333 , 464 ,ao , TRUE ) ;

	DrawGraph( 10, 430, sys_g, TRUE ) ;//長さ308
	DrawGraph( 10, 450, sys_g, TRUE ) ;
	DrawGraph( 630-308, 430, sys_g, TRUE ) ;
	DrawGraph( 630-308, 450, sys_g, TRUE ) ;
	//DrawGraph( 10, 430, unit_g[butai_one[1]][1][9+jikan/10%3], TRUE ) ;
	//DrawGraph( 10, 450, unit_g[butai_two[1]][1][9+jikan/10%3], TRUE ) ;
	//DrawGraph( 614, 430, unit_g[butai_one[0]][0][6+jikan/10%3], TRUE ) ;
	//DrawGraph( 614, 450, unit_g[butai_two[0]][0][6+jikan/10%3], TRUE ) ;
	for(i=0;i<100;i++)
	for(j=0;j<2;j++){
		hei_time[j][i]++;
		if(hei_kaz[j][i]<=0 || hei_sibou[j][i]>0) hei_sibou[j][i]++;
			c=9-hei_muk[j][i]*3;
			if(hei_time[j][i]/16%4==1)c+=1;
			else if(hei_time[j][i]/16%4==2)c+=2;
			else if(hei_time[j][i]/16%4==3)c+=1;
			if(hei_sibou[j][i]==0 && hei_toppa[j][i]==0){//正常常時
			if(hei_ana[j][i]>0)DrawRotaGraph(	hei_x[j][i]/1000,hei_y[j][i]/1000+115, 2, 0 ,ana, TRUE ) ;//落とし穴はまり
			DrawRotaGraph( hei_x[j][i]/1000 , hei_y[j][i]/1000+105-hei_jump[j][i]/10 , 2 , 0 , unit_g[hei_type[j][i]][j][c] , TRUE ) ;
			if(hei_emo[j][i]!=0)DrawRotaGraph( hei_x[j][i]/1000 , hei_y[j][i]/1000+86-hei_jump[j][i]/10 , 2 , 0 , emo[hei_emo[j][i]-1] , TRUE ) ;
			if(hei_hura[j][i]>0 && hei_sen[j][i]>0){//攻撃or防御命令により光
			SetDrawBlendMode( DX_BLENDMODE_ALPHA , hei_hura[j][i] ) ;
			if(hei_sen[j][i]<10)		SetDrawBright( 255 , 0 , 0 ) ;
			else if(hei_sen[j][i]<100)	SetDrawBright( 0 , 0 , 255 ) ;
			else if(hei_sen[j][i]>100)  SetDrawBright( 255 , 255 , 255 ) ;
			DrawRotaGraph( hei_x[j][i]/1000 , hei_y[j][i]/1000+105 , 2 , 0 , unit_g[hei_type[j][i]][2][c] , TRUE ) ;
			SetDrawBright( 255 , 255 , 255 ) ;
			if(tenki>0)SetDrawBright( 155 , 155 , 155 ) ;
			SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 0 ) ;
			}
		}else if(hei_sibou[j][i]<100 && hei_sibou[j][i]>0){//死亡
			if(hei_sibou[j][i]==1) PlaySoundMem( se_no[10] , DX_PLAYTYPE_BACK ) ;
			if(i==gun_kazu[j]){
				if(hei_sibou[j][i]==1 || hei_sibou[j][i]==2){
				A=j;
				hei_sibou[j][i]+=2;
					if(hei_type[j][i]!=8){
					strcpy_s(serihu, "グフッ‥");hukidasi();
					strcpy_s(serihu, "‥無念なり！");hukidasi();
					}else{
					strcpy_s(serihu, "ぐふぅ〜");hukidasi();
					strcpy_s(serihu, "むねんなりぃ");hukidasi();
					}
				}
				DrawRotaGraph( hei_x[j][i]/1000 , hei_y[j][i]/1000+105-hei_jump[j][i]/10 , 2 , 0 , unit_g[hei_type[j][i]][j][c] , TRUE ) ;
				continue;
			}
		if(hei_sibou[j][i]/3%4==0)c=1;
		else if(hei_sibou[j][i]/3%4==1)c=7;
		else if(hei_sibou[j][i]/3%4==2)c=4;
		else c=10;
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 60 ) ;
		DrawRotaGraph( hei_x[j][i]/1000+(1-j*2)*hei_sibou[j][i] , hei_y[j][i]/1000+105 , 2 , 0 , unit_g[hei_type[j][i]][j][c] , TRUE ) ;
		SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 0 ) ;
		}else if(hei_toppa[j][i]>0 && hei_toppa[j][i]<120){//兵突破
			if(hei_toppa[j][i]==1)PlaySoundMem( se_no[11] , DX_PLAYTYPE_BACK ) ;
			hei_toppa[j][i]++;
			if(hei_toppa[j][i]<=80){
			hei_jump[j][i]-=(hei_toppa[j][i]+19)%20*4-38;
			DrawRotaGraph( hei_x[j][i]/1000 , hei_y[j][i]/1000+105-hei_jump[j][i]/10 , 2 , 0 , unit_g[hei_type[j][i]][j][2] , TRUE ) ;
			}else{
			hei_jump[j][i]=0;
			if(j==0)hei_x[j][i]-=1000;
			else hei_x[j][i]+=1000;
			DrawRotaGraph( hei_x[j][i]/1000 , hei_y[j][i]/1000+105 , 2 , 0 , unit_g[hei_type[j][i]][j][j*3+6+hei_time[j][i]/10%3] , TRUE ) ;
			}
		}
	}

	for(j=0;j<2;j++)
		for(i=0;i<100;i++){
		if(hei_sibou[j][i]==0 && hei_toppa[j][i]==0 && hei_emo[j][i]!=0)//正常常時
		DrawRotaGraph( hei_x[j][i]/1000 , hei_y[j][i]/1000+86-hei_jump[j][i]/10 , 2 , 0 , emo[hei_emo[j][i]-1] , TRUE ) ;
	}


	//ダメージ描画
	for(i=0;i<1000;i++){
		if(dame_t[i]>0){
			if(dame_k[i]>999)	SetDrawBright( 255 , 0 , 0 ) ;
			else				SetDrawBright( 0 , 0 , 255 ) ;
			if(dame_k[i]%1000<10)DrawRotaGraph( dame_x[i] , dame_y[i]+105 , 2 , 0 , no[dame_k[i]%1000-1] , TRUE ) ;
			else DrawRotaGraph( dame_x[i] , dame_y[i]+105 , 2 , 0 , no[9] , TRUE ) ;
			if(dame_t[i]%2==0)if(dame_k[i]>999)dame_x[i]+=1;
			else	dame_x[i]-=1;
			dame_t[i]--;
		}
	}
	SetDrawBright( 255 , 255 , 255 ) ;
	//炎描写処理
	//	DrawGraph( 320, 240, fire[0], TRUE ) ;

	for(i=0;i<100;i++){
		if(fire_time[i]>0)		DrawRotaGraph( fire_x[i]/1000 , fire_y[i]/1000+105 , 2 , 0 , fire[fire_time[i]/10%4] , TRUE ) ;
		if(saku_tai[i]>0)DrawRotaGraph( saku_x[i]/1000 , saku_y[i]/1000+105 , 2 , 0 , saku , TRUE ) ;
	}

	if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}

	return 0;
}
int sentou_atari(){//戦闘中の当たり判定
	for(i=0;i<100;i++){//自軍と敵軍 || (dorura!=0 && hei_type[1][j]==4)
		if(hei_kaz[0][i]<=0 || hei_sibou[0][i]>0 || hei_toppa[0][i]>0 || hei_ren[0][i]==0 || (abs(hei_huki[0][i])>abs(hei_mov[0][i])*24+10000))continue;
		for(j=0;j<100;j++){
		if(hei_kaz[1][j]>0 &&
			hei_sibou[1][j]==0 &&
			hei_toppa[1][j]==0 &&
			hei_ren[1][j]>0 &&
			(abs(hei_huki[1][j])<=abs(hei_mov[1][j])*24+10000  || (dorura!=0 && hei_type[1][j]==4)) &&
			abs(hei_x[0][i]-hei_x[1][j])<hei_atari[0][i]+hei_atari[1][j] &&
			abs(hei_y[0][i]-hei_y[1][j])<30000+dorura*1200000){
			sentou_battle();//戦闘処理
			break;
			}
		}
	}
	return 0;
}
int shot_main(){

	for(i=0;i<100;i++)
		if(shot_time[i]==0){//着弾時間が０
		shot_time[i]=50;
		shot_vy[i]=-500;
		shot_x[i]=hei_x[0][i];
		shot_y[i]=hei_y[0][i];
		shot_vx[i]=-2000;
		shot_h[i]=0;
		}else{//着弾時間が０で無い
		shot_x[i]+=shot_vx[i];
		shot_h[i]+=shot_vy[i];
		shot_vy[i]+=20;
		shot_col[i]=0;
		shot_mu[i]=0;
		shot_time[i]--;//着弾時間−１
		DrawPixel( shot_x[i] , shot_y[i]+shot_h[i] , aka ) ;
		DrawRotaGraph( shot_x[i]/1000 , (shot_y[i]+shot_h[i])/1000+100 , 1 , 0 , magic_g[0][6] , TRUE ) ;
	}



	return 0;
}
void fire_atari(){

		for(i=0;i<100;i++){
		if(fire_time[i]<=0)continue;
			for(j=0;j<2;j++)for(c=0;c<100;c++)
				if(hei_kaz[j][c]>0 && hei_toppa[j][c]==0 && abs(hei_x[j][c]-fire_x[i])<hei_atari[j][c]+15000 && abs(hei_y[j][c]-fire_y[i])<30000 && abs(hei_huki[j][c])<10000){//当たりチェック
						if(hei_type[j][c]!=20 && hei_type[j][c]!=19 && hei_type[j][c]!=10 && hei_type[j][c]!=8 && hei_type[j][c]!=4){
						
						if(hei_x[j][c]-hei_huki[j][c]<fire_x[i]) hei_huki[j][c]-=30000;
						else  hei_huki[j][c]+=30000;

						hei_kaz[j][c]-=1;
						if(hei_type[j][c]==21 ||hei_type[j][c]==9) hei_kaz[j][c]-=2;//炎に弱い
						for(J=0;J<1000;J++){
						if(dame_t[J]>0)continue;
						dame_x[J]=hei_x[j][c]/1000+GetRand(14)-7;
						dame_y[J]=hei_y[j][c]/1000;
						dame_k[J]=1+1000-j*1000;
						if(hei_type[j][c]==21 ||hei_type[j][c]==9) dame_k[J]+=2;
						dame_t[J]=50;
						break;
						}
					}
			}
		}
	return;
}
void saku_atari(){
	for(i=0;i<100;i++){
	if(saku_tai[i]<=0)continue;
		for(j=0;j<2;j++)for(c=0;c<100;c++){
		if(hei_kaz[j][c]>0 && hei_ana[j][c]<=0 && hei_toppa[j][c]==0 && hei_sibou[j][c]==0 && abs(hei_x[j][c]-saku_x[i])<hei_atari[j][c]+15000 && abs(hei_y[j][c]-saku_y[i])<30000 && abs(hei_huki[j][c])<10000 && hei_type[j][c]!=8){//当たりチェック
			if(hei_sen[j][c]>0 && hei_sen[j][c]<10){
				saku_tai[i]-=hei_pow[j][c];
				if(hei_totu[j][c]==0){
					if(hei_moral[j][c]>=9000) saku_tai[i]-=GetRand(6);
					else if(hei_moral[j][c]>=7000) saku_tai[i]-=GetRand(5);
					else if(hei_moral[j][c]>=5000) saku_tai[i]-=GetRand(4);
					else if(hei_moral[j][c]>=3000) saku_tai[i]-=GetRand(3);
					else if(hei_moral[j][c]>=1000) saku_tai[i]-=GetRand(2);
					else saku_tai[i]-=GetRand(1);
					}else{
					if(hei_moral[j][c]>=9000) saku_tai[i]-=GetRand(3)+3;
					else if(hei_moral[j][c]>=7000) saku_tai[i]-=GetRand(3)+2;
					else if(hei_moral[j][c]>=5000) saku_tai[i]-=GetRand(2)+2;
					else if(hei_moral[j][c]>=3000) saku_tai[i]-=GetRand(2)+1;
					else if(hei_moral[j][c]>=1000) saku_tai[i]-=GetRand(1)+1;
					else saku_tai[i]-=GetRand(1);
					}
					}else{//攻撃状態では無い
					saku_tai[i]-=3;
					}

				if(hei_x[j][c]-hei_huki[j][c]<saku_x[i]) hei_huki[j][c]-=30000;
				else  hei_huki[j][c]+=30000;
			}
		}
	}
	return;
}
void ana_atari(){
	for(i=0;i<100;i++){
		if(ana_id[i]>0)
		for(j=0;j<2;j++)for(c=0;c<100;c++){
			if(hei_kaz[j][c]>0 && abs(hei_x[j][c]-ana_x[i])<hei_atari[j][c]+15000 && abs(hei_y[j][c]-ana_y[i])<30000 && ana_id[i]-1==j && hei_ana[j][c]<=0 && hei_type[j][c]!=4 && hei_type[j][c]!=17 && hei_type[j][c]!=19 && hei_type[j][c]!=20 && hei_type[j][c]!=21 && hei_type[j][c]!=22 && hei_type[j][c]!=8){//当たりチェック
			ana_id[i]=0;
			hei_ana[j][c]=300;
			}
		}
	}
	return;
}
int sentou_battle(){

	//xa,xb 0側の攻撃防御//ya,yb 1側の攻撃防御
	xa=hei_pow[0][i];
	xb=hei_def[0][i];
	ya=hei_pow[1][j];
	yb=hei_def[1][j];
	if(hei_sibou[0][gun_kazu[0]]>0){xa--;xb--;}
	if(hei_sibou[1][gun_kazu[1]]>0){ya--;yb--;}

	c=hei_sen[0][i];
	J=hei_sen[1][j];

	if(hei_down[0][i]>0) xa-=1;
	if(hei_down[1][j]>0) ya-=1;
	//向きによる補正
	if(hei_x[0][i]<=hei_x[1][j]){
	if(hei_muk[0][i]==1) {c=0;xb=0;}
	if(hei_muk[1][j]==0) {J=0;yb=0;}
	}else{
	if(hei_muk[0][i]==0) {c=0;xb=0;}
	if(hei_muk[1][j]==1) {J=0;yb=0;}
	}
	if(hei_ana[0][i]>0)c=0;
	if(hei_ana[1][j]>0)J=0;

	//モラルによる補正
	if(c>0 && c<100){
		if(hei_totu[0][i]==0){
		xa+=GetRand((hei_moral[0][i]+1000)/2000+1);
		xb+=GetRand(hei_moral[0][i]/2000+1);
		}else{
		xa+=GetRand((hei_moral[0][i]+5000)/4000)+(hei_moral[0][i]+3000)/4000;
		xb+=GetRand(hei_moral[0][i]/2000+1);
		}
	}else xb+=GetRand(hei_moral[0][i]/4000+1);

	if(J>0 && J<100){
		if(hei_totu[1][j]==0){
		ya+=GetRand((hei_moral[1][j]+1000)/2000+1);
		yb+=GetRand(hei_moral[1][j]/2000+1);
		}else{
		ya+=GetRand((hei_moral[1][j]+5000)/4000)+(hei_moral[1][j]+3000)/4000;
		yb+=GetRand(hei_moral[1][j]/2000+1);
		}
	}else yb+=GetRand(hei_moral[1][j]/4000+1);

	//天気による補正
	if(tenkou>0 && tenki==1){
	if(hei_type[1][j]==20){ya-=2;yb-=2;}//弱点
	else if(hei_type[1][j]==21){ya+=2;yb+=2;}//強い
	else if(hei_type[1][j]==10){ya--;yb--;}//将軍が弱い
	else if(hei_type[1][j]==9){ya++;yb++;}//将軍が強い
	}
	if(tenkou>0 && tenki==2){
	if(hei_type[1][j]==20){ya-=4;yb-=4;}//弱点
	else if(hei_type[1][j]==10){ya-=2;yb-=2;}//将軍が弱い
	}
	if(hei_ren[1][j]!=hei_ren[0][j]){
	hei_osi[0][i]=hei_wei[0][i]+hei_ren[1][j];
	hei_osi[1][j]=hei_wei[1][j]+hei_ren[0][i];
	}else{
	hei_osi[0][i]=hei_wei[0][i];
	hei_osi[1][j]=hei_wei[1][j];
	}

	//戦闘状態による補正
	if(c==0)xa=0;
	else if(c<10)xa+=c;
	else if(c<100){
		xa=0;
		xb+=c/10;
	}else if(c>=100) xa=0;
	if(c>9 && c<90)hei_osi[0][i]*=3;//兵士の押し
	else if(c==90)  hei_osi[0][i]*=15;//兵士の押し
	else if(c==0)  hei_osi[0][i]*=3;
	if(J==0){ya=0;}
	else if(J<10)ya+=J;
	else if(J<100){
		ya=0;
		yb+=J/10;
	}else if(J>=100) ya=0;
	if(J>9 && J<90)hei_osi[1][j]*=3;//兵士の押し
	else if(J==90)  hei_osi[1][j]*=15;//兵士の押し
	else if(J==0)  hei_osi[1][j]*=3;
	hei_vs[i]=1;
	//小数点ダメージ
	if(ya>0)hei_dame[0][i]+=GetRand(100);
	if(xa>0)hei_dame[1][j]+=GetRand(100);

	if(ya>0){//１側ダメージ計算
		J=ya-xb;
		if(J<0)J=0;
		if(hei_dame[0][i]>99){J++;hei_dame[0][i]-=100;}
		if(J>hei_kaz[0][i])J=hei_kaz[0][i];
		hei_kaz[0][i]-=J;
		for(c=0;c<1000;c++){
		if(J==0)break;
		if(dame_t[c]>0)continue;
		dame_x[c]=hei_x[0][i]/1000+10;
		dame_y[c]=hei_y[0][i]/1000;
		dame_k[c]=J+1000;
		dame_t[c]=50;
		break;
		}
	}
	if(xa>0){//２側ダメージ計算
		J=xa-yb;
		if(J<0)J=0;
		if(hei_dame[1][j]>99){J++;hei_dame[1][j]-=100;}
		if(J>hei_kaz[1][j])J=hei_kaz[1][j];
		hei_kaz[1][j]-=J;
		for(c=0;c<1000;c++){
		if(J==0)break;
		if(dame_t[c]>0)continue;
		dame_x[c]=hei_x[1][j]/1000-10;
		dame_y[c]=hei_y[1][j]/1000;
		dame_k[c]=J;
		dame_t[c]=50;
		break;
		}
	}
	xa=xa-yb;
	ya=ya-xb;
	if(xa<0)xa=0;
	if(ya<0)ya=0;

	xb=hei_osi[0][i]+hei_osi[1][j]+xa+ya;
	xa+=hei_osi[0][i];
	ya+=hei_osi[1][j];

	//吹き飛ばし計算
	hei_huki[0][i]+=(abs(hei_mov[0][i]*19)+abs(hei_mov[1][j]))*ya*10/xb;
	hei_huki[1][j]-=(abs(hei_mov[0][i])+abs(hei_mov[1][j]*19))*xa*10/xb;
	hei_ren[0][i]=0;
	hei_ren[1][j]=0;

	return 0;
}
int sentou_idou(){//戦闘中の移動判定

	for(j=0;j<2;j++)
	for(i=0;i<100;i++){//部隊の移動、モラルの計算
		if(hei_spd[j][i]<=0)hei_spd[j][i]=1;
		if(gun_jinkai[j]>0 && hei_toppa[j][i]==0 && hei_ana[j][i]<=0){
			if(hei_x[j][i]+hei_jin[j][i]<gun_frontline[j]+hei_spd[j][i]*50 && hei_x[j][i]+hei_jin[j][i]>=front_line[j]-hei_spd[j][i]*40)hei_mov[j][i]=0;
			else if(hei_x[j][i]+hei_jin[j][i]<gun_frontline[j])hei_mov[j][i]=hei_spd[j][i]*40;
			else hei_mov[j][i]=-hei_spd[j][i]*40;
			if(gun_jinkai[j]>1000){
			if(hei_x[j][i]+hei_jin[j][i]<gun_frontline[j]+hei_spd[j][i]*75 && hei_x[j][i]+hei_jin[j][i]>=front_line[j]-hei_spd[j][i]*75)hei_mov[j][i]=0;
			else if(hei_x[j][i]+hei_jin[j][i]<gun_frontline[j])hei_mov[j][i]=hei_spd[j][i]*60;
			else hei_mov[j][i]=-hei_spd[j][i]*60;
			}
		}

		if(hei_stop[j][i]<=0 && hei_sibou[j][i]==0 && hei_ana[j][i]<=0 && hei_toppa[j][i]==0){
			if(tenki!=2) hei_x[j][i]+=hei_mov[j][i]*4/3;
			else		hei_x[j][i]+=hei_mov[j][i]*4/6;
		}
		if(hei_ren[j][i]<100)hei_ren[j][i]++;

		if(hei_huki[j][i]!=0 && hei_sibou[j][i]==0 && hei_toppa[j][i]==0){
			if(hei_ana[j][i]<=0){
			hei_x[j][i]+=hei_huki[j][i]/24;
			hei_huki[j][i]-=hei_huki[j][i]/24;
			if(tenki==2)hei_huki[j][i]-=(hei_huki[j][i]+1)/24;
			}else{
			hei_huki[j][i]/=2;
			}
		}
		hei_stop[j][i]--;
		hei_moral[j][i]+=hei_syou[j][i];
		if(hei_sibou[j][gun_kazu[j]]>0 && hei_sibou[j][i]==0){
			hei_moral[j][i]-=5;//指揮官死亡によるモラル＆疲労変化
			hei_hirou[j][i]+=50;
		}
		if(abs(hei_mov[j][i])/hei_spd[j][i]>100)hei_hirou[j][i]+=(100-hei_sta[j][i])/2;
		else hei_hirou[j][i]+=(abs(hei_mov[j][i])/hei_spd[j][i]-hei_sta[j][i])/2;//移動による疲労変化

		if(hei_toppa[j][i]==0 && hei_sibou[j][i]==0 && hei_sen[j][i]==90 && con_time%3==0)hei_dame[j][i]+=1;//前列死守による生命力低下

		for(;hei_hirou[j][i]>100000;){
		hei_moral[j][i]-=20;
		hei_hirou[j][i]-=20;
		hei_dame[j][i]++;
		hei_totu[j][i]=0;
		hei_down[j][i]=300;
		}
		hei_down[j][i]--;
		hei_ana[j][i]--;
	}

	for(A=0;A<2;A++){
	gun_jinkai[A]--;
	if(gun_jinkai[A]==0 || gun_jinkai[A]==1000){sen_28();
		gun_jinkai[A]=0;
		}
	}

	for(j=0;j<2;j++)//自爆表示
		for(i=0;i<100;i++){
		if(hei_sibou[j][i]!=0)hei_bom[j][i]=0;
		if(hei_bom[j][i]>0)hei_emo[j][i]=10;
	}
	gun_bom[0]--;
	gun_bom[1]--;
	for(A=0;A<2;A++)
	if(gun_bom[A]==0){
			for(i=0;i<100;i++){
				if(hei_bom[A][i]!=0 && hei_sibou[A][i]==0 && hei_toppa[A][i]==0){
					hei_kaz[A][i]=0;
					for(j=0;j<100;j++){
						if(hei_kaz[(A+1)%2][j]>0 &&
						hei_sibou[(A+1)%2][j]==0 &&
						hei_toppa[(A+1)%2][j]==0 &&
						j != gun_kazu[(A+1)%2]   &&
						GetRand(4)==0      &&
						abs(hei_x[A][i]-hei_x[(A+1)%2][j])<64000 &&
						abs(hei_y[A][i]-hei_y[(A+1)%2][j])<64000){
						hei_kaz[(A+1)%2][j]=0;
						hei_bom[A][i]--;
						if(hei_bom[A][i]==0)break;
						}
					}
				}
			}
		}

	xa=0;ya=0;xb=0;yb=0;
	gun_moral[0]=0;gun_moral[1]=0;
	gun_hirou[0]=0;gun_hirou[1]=0;
	for(i=0;i<100;i++){//炎処理、モラル平均計算、突破判定、押し出され枠外判定
	if(hei_x[0][i]<16000  && hei_kaz[0][i]>0 && hei_toppa[0][i]==0){
		hei_toppa[0][i]=1;
		gun_toppa[0]++;
		for(j=0;j<100;j++){hei_moral[0][j]+=500;hei_moral[1][j]-=500;hei_hirou[0][j]-=5000;hei_hirou[1][j]+=5000;}
	}
	if(hei_x[1][i]>624000 && hei_kaz[1][i]>0 && hei_toppa[1][i]==0){
		hei_toppa[1][i]=1;
		gun_toppa[1]++;
		for(j=0;j<100;j++){hei_moral[0][j]-=500;hei_moral[1][j]+=500;hei_hirou[0][j]+=5000;hei_hirou[1][j]-=5000;}
	}
	if(hei_x[0][i]>624000 && hei_toppa[0][i]==0 && hei_kaz[0][i]>0){
	if(hei_sen[0][i]==100){hei_esc[0][i]=1;hei_kaz[0][i]=0;hei_sibou[0][i]=1000;}
	else{
		if(abs(hei_huki[0][i])>1000){
			hei_kaz[0][i]-=10;
			for(c=0;c<1000;c++){
			if(dame_t[c]>0)continue;
			dame_x[c]=hei_x[0][i]/1000-10;
			dame_y[c]=hei_y[0][i]/1000;
			dame_k[c]=1010;
			dame_t[c]=50;
			break;
			}
			//hei_moral[0][i]-=500;hei_hirou[0][i]+=500;
			}
		}
		hei_huki[0][i]=0;
		hei_x[0][i]=624000;
	}
	if(hei_x[1][i]<16000 && hei_toppa[1][i]==0 && hei_kaz[1][i]>0){
	if(hei_sen[1][i]==100){hei_esc[1][i]=1;hei_kaz[1][i]=0;hei_sibou[1][i]=1000;}
	else{
		if(abs(hei_huki[1][i])>1000){
			hei_kaz[1][i]-=10;
			for(c=0;c<1000;c++){
			if(dame_t[c]>0)continue;
			dame_x[c]=hei_x[1][i]/1000-10;
			dame_y[c]=hei_y[1][i]/1000;
			dame_k[c]=10;
			dame_t[c]=50;
			break;
			}
			//hei_moral[1][i]-=500;hei_hirou[1][i]+=500;
			}
		}
		hei_huki[1][i]=0;
		hei_x[1][i]=16000;
	}
	hei_vs[i]=0;
	fire_time[i]--;
	fire_x[i]+=fire_v[i];
	}
	//雨＆雪補正
	tenkou--;
	if(tenkou<=0)tenki=0;
	if(tenki!=0)
	for(j=0;j<2;j++)
		for(i=0;i<100;i++){
		fire_time[i]=0;
		hei_moral[j][i]-=15-tenki*5;
		if(gun_jinkei[j]==18 && tenki==1)hei_moral[j][i]+=5;
		if(tenki==2 && hei_kaz[j][i]>0 && hei_toppa[j][i]==0 && con_time%2==0) hei_dame[j][i]+=1;
		if((hei_type[j][i]==9 || hei_type[j][i]==21) && tenki==1){hei_moral[j][i]+=5;}//玄武種族
		if(hei_type[j][i]==10 || hei_type[j][i]==2)hei_moral[j][i]-=5;//朱雀種族
	}
	for(j=0;j<2;j++)
		for(i=0;i<100;i++){
			if(hei_moral[j][i]<0)hei_moral[j][i]=0;
			if(hei_moral[j][i]>10000) hei_moral[j][i]=10000;
			if(hei_hirou[j][i]<0) hei_hirou[j][i]=0;
	}
	//蓄積ダメージ
	for(j=0;j<2;j++)
		for(i=0;i<100;i++){
		if(hei_dame[j][i]>99 && hei_kaz[j][i]>0 && hei_toppa[j][i]==0)
		for(c=0;c<1000;c++){
		if(dame_t[c]>0)continue;
		dame_x[c]=hei_x[j][i]/1000+10*(1-j*2);
		dame_y[c]=hei_y[j][i]/1000;
		dame_k[c]=hei_dame[j][i]/100+1000*(1-j);
		dame_t[c]=50;
		hei_dame[j][i]%=100;
		hei_kaz[j][i]--;
		break;
		}
	}

	for(i=0;i<100;i++){
		if(hei_sibou[0][i]==0 && hei_toppa[0][i]==0){
		gun_moral[0]+=hei_moral[0][i];
		gun_hirou[0]+=hei_hirou[0][i];
		xa++;
		}
		if(hei_sibou[1][i]==0 && hei_toppa[1][i]==0){
		gun_moral[1]+=hei_moral[1][i];
		gun_hirou[1]+=hei_hirou[1][i];
		ya++;
		}
	}
	if(xa!=0){
		gun_moral[0]=gun_moral[0]/xa;
		gun_hirou[0]=gun_hirou[0]/xa;
		if(gun_hirou[0]>100000) gun_hirou[0]=100000;
	}
	if(ya!=0){
		gun_moral[1]=gun_moral[1]/ya;
		gun_hirou[1]=gun_hirou[1]/ya;
		if(gun_hirou[1]>100000) gun_hirou[1]=100000;
	}
	//ラインの計算
	xa=0;ya=0;xb=0;yb=0;
	front_line[0]=0;front_line[1]=0;back_line[0]=0;back_line[1]=0;
	for(i=0;i<100;i++){
		if(hei_sibou[0][i]==0  && hei_toppa[0][i]==0 && hei_retu[0][i]==0){
		front_line[0]+=hei_x[0][i];
		xa++;
		}else if(hei_sibou[0][i]==0 && hei_toppa[0][i]==0 && hei_retu[0][i]==1){
		back_line[0]+=hei_x[0][i];
		xb++;
		}
		if(hei_sibou[1][i]==0 && hei_toppa[1][i]==0 && hei_retu[1][i]==0){
		front_line[1]+=hei_x[1][i];
		ya++;
		}else if(hei_sibou[1][i]==0 && hei_toppa[1][i]==0 && hei_retu[1][i]==1){
		back_line[1]+=hei_x[1][i];
		yb++;
		}
	}
	if(xa!=0)front_line[0]=front_line[0]/xa;
	if(xb!=0)back_line[0]=back_line[0]/xb;
	if(ya!=0)front_line[1]=front_line[1]/ya;
	if(yb!=0)back_line[1]=back_line[1]/yb;

	for(j=0;j<2;j++)
	if((front_line[j]==0 || back_line[j]==0 )&& front_line[j]+back_line[j]>0){
		gun_retu[j]=1;
		for(i=0;i<100;i++)   hei_retu[j][i]=0;
		if(front_line[j]==0) front_line[j]=back_line[j];
		else				 back_line[j]=front_line[j];
	}else gun_retu[j]=2;
	//軍の残り兵数の計算
	gun_nokori[0]=0;gun_nokori[1]=0;
	for(j=0;j<2;j++)
		for(i=0;i<100;i++){
		if(hei_kaz[j][i]>0 && hei_toppa[j][i]==0) gun_nokori[j]++;
		}
	AI_ueyoku[0]=0;
	AI_sitayoku[0]=0;
	AI_ueyoku[1]=0;
	AI_sitayoku[1]=0;
	//上翼と下翼の人数チェック
	for(j=0;j<2;j++)
		for(i=0;i<100;i++){
		if(hei_sibou[j][i]!=0 || hei_toppa[j][i]!=0)continue;
		if(hei_y[j][i]<150000) AI_ueyoku[j]++;//上翼
		else AI_sitayoku[j]++;
	}
	return 0;
}
int sekai_byouga(){
	//各国の表示
	J++;
	DrawGraph( 0, 0, world_map, TRUE ) ;
	if(J/15%2==0)j=1;
	else if(J/15%4==1)j=0;
	else j=2;
	for(i=0;i<30;i++){
		if(kuni_seiryoku[i]>0){
			DrawRotaGraph( kuni_x[i] , kuni_y[i] , 2 , 0 , unit_g[kuni_type[i]][(kuni_seiryoku[i]-1)/2][j] , TRUE ) ;
			if(kuni_frash[i]!=0){//勢力変化でフラッシュ
			if(t<30)SetDrawBlendMode( DX_BLENDMODE_ALPHA , t*10 ) ;
			else    SetDrawBlendMode( DX_BLENDMODE_ALPHA , 600-t*10 ) ;
			if(kuni_frash[i]<3)			SetDrawBright( 0 , 0 , 255 ) ;
			else						SetDrawBright( 255 , 0 , 0 ) ;
			DrawRotaGraph( kuni_x[i] , kuni_y[i] , 2 , 0 , unit_g[kuni_type[i]][2][j] , TRUE ) ;
			SetDrawBright( 255 , 255 , 255 ) ;
			SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 0 ) ;
			}
		}
	}
	if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
	return 0;
}
int sekaitizu(){

	while(1){
	sekai_byouga();
		GetMousePoint( &mou_x, &mou_y );
		if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//マウス左押下
		if(mouse==0) naisei_command();
		}else mouse=0;
		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse_left==0){
			if(mouse_left==0)mouse_left=1;
			else mouse_left=2;
			}
		}else mouse_left=0;

		//イベントチェック
		if(eve_flag[1]==0){//開始イベント
		eve_01();
		eve_flag[1]=1;
		}
		if(eve_flag[6]==0 && kuni_seiryoku[1]==1){//氷の剣イベント
		eve_06();eve_flag[6]=1;
		}
		if(eve_flag[9]==0 && kuni_seiryoku[14]==2){//氷の剣イベント
		eve_09();eve_flag[9]=1;
		}
		if(eve_flag[10]==0 && (kuni_seiryoku[22]==1 || kuni_seiryoku[22]==2)){//氷の剣イベント
		eve_10();eve_flag[10]=1;
		}
		if(eve_flag[11]==0 && (kuni_seiryoku[28]==1 || kuni_seiryoku[28]==2)){//氷の剣イベント
		eve_11();eve_flag[11]=1;
		}
		if(eve_flag[12]==0 && kuni_seiryoku[4]==1 ){//氷の剣イベント
		eve_12();eve_flag[12]=1;
		}
		if(eve_flag[13]==0 && kuni_seiryoku[12]==1 ){//氷の剣イベント
		eve_13();eve_flag[13]=1;
		}
		if(eve_flag[14]==0 && kuni_seiryoku[29]==1 ){//氷の剣イベント
		eve_14();eve_flag[14]=1;
		}
		if(eve_flag[15]==0 && kuni_seiryoku[15]==1 ){//氷の剣イベント
		eve_15();eve_flag[15]=1;
		}
		if(eve_flag[16]==0 && kuni_seiryoku[4]==1 && kuni_seiryoku[12]==1 &&  kuni_seiryoku[15]==1 &&  kuni_seiryoku[29]==1){//氷の剣イベント
		eve_16();eve_flag[16]=1;
		}
		if(eve_flag[17]==0 && kokuryoku>=1000 && sangyou>=1000 &&  minsyuu>=1000){//氷の剣イベント
		eve_17();eve_flag[17]=1;
		kuni_type[18]=8;
		kuni_seiryoku[18]=4;
		}
		if(eve_flag[18]==0 && kuni_seiryoku[4]==1 && eve_flag[3]==1){//竜王イベント
		eve_18();eve_flag[18]=1;
		kuni_seiryoku[2]=4;
		}
		if(kuni_seiryoku[7]==1 && eve_flag[26]==hiduke){//竜王イベント
		eve_26();eve_flag[26]=0;
		kuni_seiryoku[7]=4;
		}

		if(kuni_seiryoku[25]==1){//深淵の王を倒したエンド
		eve_25();
		omake_mode=1;
		omake_save();
			if(eve_flag[98]==0){
			hiduke=200;
			naisei_save();
			DxLib_End() ;//DXライブラリの使用終了
			exit(1);//プログラムの終了
			}
		}

		if(eve_flag[98]==1){
			for(i=1;i<30;i++){
			kuni_seiryoku[i]=4;
			}
			hiduke=0;
		}

		if(hiduke>24){
		if(minsyuu<=0)eve_19();
		else if(kokuryoku<250) eve_20();
		else if(kokuryoku<500) eve_21();
		else if(kokuryoku<750) eve_22();
		else if(kokuryoku<1000 || minsyuu<1000) eve_23();
		else eve_24();
		hiduke=100;
		naisei_save();
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}



		//国発見チェック
		
		
		//0自国
		if(kuni_seiryoku[0]!=0 && kuni_seiryoku[0]<3){
		if(kuni_seiryoku[7]==0)kuni_seiryoku[7]=4;
		if(kuni_seiryoku[8]==0)kuni_seiryoku[8]=3;
		if(kuni_seiryoku[9]==0)kuni_seiryoku[9]=3;
		if(kuni_seiryoku[16]==0)kuni_seiryoku[16]=3;
		if(kuni_seiryoku[17]==0)kuni_seiryoku[17]=3;
		if(kuni_seiryoku[18]==0)kuni_seiryoku[18]=4;
		}
		//1無し
		//2-3 6 7
		if(kuni_seiryoku[2]!=0 && kuni_seiryoku[2]<3){
		if(kuni_seiryoku[3]==0)kuni_seiryoku[3]=3;
		if(kuni_seiryoku[6]==0)kuni_seiryoku[6]=3;
		if(kuni_seiryoku[7]==0)kuni_seiryoku[7]=4;
		}
		//3-1 2 3 4
		if(kuni_seiryoku[3]!=0 && kuni_seiryoku[3]<3){
		if(kuni_seiryoku[1]==0)kuni_seiryoku[1]=4;
		if(kuni_seiryoku[2]==0)kuni_seiryoku[2]=4;
		if(kuni_seiryoku[4]==0)kuni_seiryoku[4]=4;
		if(kuni_seiryoku[5]==0)kuni_seiryoku[5]=3;
		if(kuni_seiryoku[6]==0)kuni_seiryoku[6]=3;
		if(kuni_seiryoku[7]==0)kuni_seiryoku[7]=4;
		}
		//4-3 5
		if(kuni_seiryoku[4]!=0 && kuni_seiryoku[4]<3){
		if(kuni_seiryoku[3]==0)kuni_seiryoku[3]=3;
		if(kuni_seiryoku[5]==0)kuni_seiryoku[5]=3;
		}
		//5-4 6 10
		if(kuni_seiryoku[5]!=0 && kuni_seiryoku[5]<3){
		if(kuni_seiryoku[3]==0)kuni_seiryoku[4]=3;
		if(kuni_seiryoku[4]==0)kuni_seiryoku[4]=4;
		if(kuni_seiryoku[6]==0)kuni_seiryoku[6]=3;
		if(kuni_seiryoku[8]==0)kuni_seiryoku[4]=3;
		if(kuni_seiryoku[10]==0)kuni_seiryoku[10]=4;
		}
		//6-2 3 5 7
		if(kuni_seiryoku[6]!=0 && kuni_seiryoku[6]<3){
		if(kuni_seiryoku[2]==0)kuni_seiryoku[2]=4;
		if(kuni_seiryoku[3]==0)kuni_seiryoku[3]=3;
		if(kuni_seiryoku[5]==0)kuni_seiryoku[5]=3;
		if(kuni_seiryoku[7]==0)kuni_seiryoku[7]=4;
		if(kuni_seiryoku[8]==0)kuni_seiryoku[8]=3;
		}
		//7-2 6 8
		if(kuni_seiryoku[7]!=0 && kuni_seiryoku[7]<3){
		if(kuni_seiryoku[2]==0)kuni_seiryoku[2]=4;
		if(kuni_seiryoku[6]==0)kuni_seiryoku[6]=3;
		if(kuni_seiryoku[8]==0)kuni_seiryoku[8]=3;
		if(kuni_seiryoku[3]==0)kuni_seiryoku[3]=3;
		}
		//8-6 7 9
		if(kuni_seiryoku[8]!=0 && kuni_seiryoku[8]<3){
		if(kuni_seiryoku[5]==0)kuni_seiryoku[5]=3;
		if(kuni_seiryoku[6]==0)kuni_seiryoku[6]=3;
		if(kuni_seiryoku[7]==0)kuni_seiryoku[7]=4;
		if(kuni_seiryoku[9]==0)kuni_seiryoku[9]=3;
		}
		//9 8 10 11 18
		if(kuni_seiryoku[9]!=0 && kuni_seiryoku[9]<3){
		if(kuni_seiryoku[8]==0)kuni_seiryoku[8]=3;
		if(kuni_seiryoku[10]==0)kuni_seiryoku[10]=4;
		if(kuni_seiryoku[11]==0)kuni_seiryoku[11]=3;
		if(kuni_seiryoku[18]==0)kuni_seiryoku[18]=4;
		}
		//10-5 9 11
		if(kuni_seiryoku[10]!=0 && kuni_seiryoku[10]<3){
		if(kuni_seiryoku[5]==0)kuni_seiryoku[5]=3;
		if(kuni_seiryoku[9]==0)kuni_seiryoku[9]=3;
		if(kuni_seiryoku[11]==0)kuni_seiryoku[11]=3;
		if(kuni_seiryoku[12]==0)kuni_seiryoku[12]=4;
		if(kuni_seiryoku[13]==0)kuni_seiryoku[13]=3;
		}
		//11-9 10 12 13
		if(kuni_seiryoku[11]!=0 && kuni_seiryoku[11]<3){
		if(kuni_seiryoku[9]==0)kuni_seiryoku[9]=3;
		if(kuni_seiryoku[10]==0)kuni_seiryoku[10]=4;
		if(kuni_seiryoku[13]==0)kuni_seiryoku[13]=3;
		if(kuni_seiryoku[12]==0 && kuni_seiryoku[10]==1)kuni_seiryoku[12]=4;
		}
		//12無し
		//13-11 12 22
		if(kuni_seiryoku[13]!=0 && kuni_seiryoku[13]<3){
		if(kuni_seiryoku[10]==0)kuni_seiryoku[10]=4;
		if(kuni_seiryoku[11]==0)kuni_seiryoku[11]=3;
		if(kuni_seiryoku[22]==0)kuni_seiryoku[22]=3;
		if(kuni_seiryoku[12]==0 && kuni_seiryoku[10]==1)kuni_seiryoku[12]=4;
		}
		//14-15 16
		if(kuni_seiryoku[14]!=0 && kuni_seiryoku[14]<3){
		if(kuni_seiryoku[15]==0)kuni_seiryoku[15]=4;
		if(kuni_seiryoku[16]==0)kuni_seiryoku[16]=3;
		}
		//15無し
		//16 7 14 15 17
		if(kuni_seiryoku[16]!=0 && kuni_seiryoku[16]<3){
		if(kuni_seiryoku[7]==0)kuni_seiryoku[7]=4;
		if(kuni_seiryoku[14]==0)kuni_seiryoku[14]=3;
		if(kuni_seiryoku[17]==0)kuni_seiryoku[17]=3;
		}
		//17-16 18 19 20
		if(kuni_seiryoku[17]!=0 && kuni_seiryoku[17]<3){
		if(kuni_seiryoku[16]==0)kuni_seiryoku[16]=3;
		if(kuni_seiryoku[18]==0)kuni_seiryoku[18]=4;
		if(kuni_seiryoku[19]==0)kuni_seiryoku[19]=3;
		if(kuni_seiryoku[20]==0)kuni_seiryoku[20]=3;
		if(kuni_seiryoku[21]==0)kuni_seiryoku[21]=3;
		if(kuni_seiryoku[23]==0)kuni_seiryoku[23]=3;
		}
		//18無し
		//19-17 20 23 28
		if(kuni_seiryoku[19]!=0 && kuni_seiryoku[19]<3){
		if(kuni_seiryoku[17]==0)kuni_seiryoku[17]=3;
		if(kuni_seiryoku[20]==0)kuni_seiryoku[20]=3;
		if(kuni_seiryoku[23]==0)kuni_seiryoku[23]=3;
		if(kuni_seiryoku[24]==0)kuni_seiryoku[24]=3;
		if(kuni_seiryoku[28]==0)kuni_seiryoku[28]=3;
		}
		//20-17 19 21 23
		if(kuni_seiryoku[20]!=0 && kuni_seiryoku[20]<3){
		if(kuni_seiryoku[17]==0)kuni_seiryoku[17]=3;
		if(kuni_seiryoku[19]==0)kuni_seiryoku[19]=3;
		if(kuni_seiryoku[21]==0)kuni_seiryoku[21]=3;
		if(kuni_seiryoku[23]==0)kuni_seiryoku[23]=3;
		if(kuni_seiryoku[24]==0)kuni_seiryoku[24]=3;
		}
		//21-20 22
		if(kuni_seiryoku[21]!=0 && kuni_seiryoku[21]<3){
		if(kuni_seiryoku[17]==0)kuni_seiryoku[17]=3;
		if(kuni_seiryoku[20]==0)kuni_seiryoku[20]=3;
		if(kuni_seiryoku[22]==0)kuni_seiryoku[22]=3;
		if(kuni_seiryoku[24]==0)kuni_seiryoku[24]=3;
		}
		//22-13 21
		if(kuni_seiryoku[22]!=0 && kuni_seiryoku[22]<3){
		if(kuni_seiryoku[13]==0)kuni_seiryoku[13]=3;
		if(kuni_seiryoku[21]==0)kuni_seiryoku[21]=3;
		}
		//23-19 20 23 24
		if(kuni_seiryoku[23]!=0 && kuni_seiryoku[23]<3){
		if(kuni_seiryoku[17]==0)kuni_seiryoku[17]=3;
		if(kuni_seiryoku[19]==0)kuni_seiryoku[19]=3;
		if(kuni_seiryoku[20]==0)kuni_seiryoku[20]=3;
		if(kuni_seiryoku[23]==0)kuni_seiryoku[23]=3;
		if(kuni_seiryoku[24]==0)kuni_seiryoku[24]=3;
		}
		//24-23 26 27
		if(kuni_seiryoku[24]!=0 && kuni_seiryoku[24]<3){
		if(kuni_seiryoku[19]==0)kuni_seiryoku[19]=3;
		if(kuni_seiryoku[20]==0)kuni_seiryoku[20]=3;
		if(kuni_seiryoku[21]==0)kuni_seiryoku[21]=3;
		if(kuni_seiryoku[23]==0)kuni_seiryoku[23]=3;
		if(kuni_seiryoku[26]==0)kuni_seiryoku[26]=3;
		if(kuni_seiryoku[27]==0)kuni_seiryoku[27]=4;
		}
		//25無し
		//26無し
		//27-24 26 29
		if(kuni_seiryoku[27]!=0 && kuni_seiryoku[27]<3){
		if(kuni_seiryoku[24]==0)kuni_seiryoku[24]=3;
		if(kuni_seiryoku[26]==0)kuni_seiryoku[26]=3;
		if(kuni_seiryoku[29]==0)kuni_seiryoku[29]=4;
		}
		//28-19 29
		if(kuni_seiryoku[28]!=0 && kuni_seiryoku[28]<3){
		if(kuni_seiryoku[19]==0)kuni_seiryoku[19]=3;
		if(kuni_seiryoku[29]==0)kuni_seiryoku[29]=4;
		}
		//29-27 28
		if(kuni_seiryoku[29]!=0 && kuni_seiryoku[29]<3){
		if(kuni_seiryoku[27]==0)kuni_seiryoku[27]=4;
		if(kuni_seiryoku[28]==0)kuni_seiryoku[28]=3;
		}
		if(kuni_seiryoku[25]==0 && kuni_seiryoku[4]==1 && kuni_seiryoku[12]==1 && kuni_seiryoku[15]==1 && kuni_seiryoku[29]==1){
		kuni_seiryoku[25]=4;//冥府決戦
		}
		//勢力変化チェック
		c=0;
		for(i=0;i<30;i++){
			if(kuni_seiryoku[i]!=kuni_henka[i]){
				kuni_frash[i]=kuni_seiryoku[i];
				kuni_henka[i]=kuni_seiryoku[i];
				c=1;
			}
		}
		//勢力変化アニメ
				if(c==1){
			for(t=0;t<60;t++){
			sekai_byouga();
			ScreenFlip();
			}
			for(i=0;i<30;i++)kuni_frash[i]=0;
		}
		//国チェック
		for(c=0;c<30;c++){
			if(abs(mou_x-kuni_x[c])<20 && abs(mou_y-kuni_y[c])<20 && kuni_seiryoku[c]!=0){
				jyouhou_teki();
				if(mouse_left==1){
					if(c!=0) gaikou_command();
					else naisei_command();
					}
			}
		}
	ScreenFlip();
	}

	return 0;
}
int gaikou_command(){
	mouse_left=2;
	mouse=1;
	while(1){
	sekai_byouga();
	GetMousePoint( &mou_x, &mou_y );
	if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//マウス左押下
		if(mouse==0){
			PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
			break;
		}
	}else mouse=0;
	if(( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse_left==0)mouse_left=1;
			else mouse_left=2;
		}else mouse_left=0;
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		DrawBox( 180 , 110 , 460 , 300 ,ao , TRUE ) ;
		if(mou_x>180 && mou_x<460 && mou_y>110 && mou_y <244) DrawBox( 210 , 116+(mou_y-112)/44*44 , 430 , 156+(mou_y-112)/44*44 ,ao , TRUE ) ;
		SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;
		jyouhou_teki();
		DrawStringToHandle( 256 , 121 , "宣戦布告",kuro , f_a) ;
		if(kuni_seiryoku[c]>2)DrawStringToHandle( 255 , 120 , "宣戦布告",siro , f_a) ;
		else DrawStringToHandle( 255 , 120 , "宣戦布告",hai , f_a) ;
		DrawStringToHandle( 256 , 165 , "和平交渉",kuro , f_a) ;
		if(kuni_seiryoku[c]==3 && kuni_yuukou[c]<1000)DrawStringToHandle( 255 , 164 , "和平交渉",siro , f_a) ;
		else DrawStringToHandle( 255 , 164 , "和平交渉",hai , f_a) ;
		DrawStringToHandle( 256 , 209 , "同盟締結",kuro , f_a) ;
		if(kokuryoku-kuni_gundan[c]+kuni_yuukou[c]>750 && kuni_seiryoku[c]==3)DrawStringToHandle( 255 , 208 , "同盟締結",siro , f_a) ;
		else DrawStringToHandle( 255 , 208 , "同盟締結",hai , f_a) ;
		DrawStringToHandle( 201 , 253 , "資金",kuro , f_a) ;
		DrawStringToHandle( 200 , 252 , "資金",siro , f_a) ;
		VS_no=99;
		if(mou_x>180 && mou_x<460 && mou_y>110 && mou_y <244){
			switch((mou_y-112)/44){
			case 0:
			if(mouse_left==1 && kuni_seiryoku[c]<3)PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
			if(kuni_seiryoku[c]<3)break;
			koku_hen=-500;
			if(mouse_left==1){
				kuni_yuukou[c]-=500;
				if(kuni_yuukou[c]<0)kuni_yuukou[c]=0;
				PlaySoundMem( se_no[5] , DX_PLAYTYPE_BACK ) ;
				hukoku_dai();
			}
			break;
			case 1://和平交渉
			if(mouse_left==1 && (money+kane_hen<0 || kuni_seiryoku[c]!=3 || kuni_yuukou[c]>=1000))PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
			if(kuni_seiryoku[c]!=3 || kuni_yuukou[c]>=1000)break;
			koku_hen=250;
			if(1500+kuni_gundan[c]-kuni_yuukou[c]-kokuryoku<200)kane_hen=-10000;
			else kane_hen=-(1500+kuni_gundan[c]-kuni_yuukou[c]-kokuryoku)*50;
			if(mouse_left==1 && money+kane_hen>=0){
			money+=kane_hen;
			kuni_yuukou[c]+=250;
			PlaySoundMem( se_no[5] , DX_PLAYTYPE_BACK ) ;
			if(kuni_yuukou[c]>1000)kuni_yuukou[c]=1000;
			koku_hen=999;
			}
			break;
			case 2:
			if(kokuryoku-kuni_gundan[c]+kuni_yuukou[c]>750 && kuni_seiryoku[c]==3){
				koku_hen=10000;
				if(mouse_left==1){
				PlaySoundMem( se_no[5] , DX_PLAYTYPE_BACK ) ;
				kuni_seiryoku[c]=2;
				if(kuni_gundan[c]/250>kokuryoku/250)  kokuryoku+=60;
				if(kuni_gundan[c]/250==kokuryoku/250) kokuryoku+=40;
				else								  kokuryoku+=20;
				koku_hen=999;
				if(kokuryoku>1000)kokuryoku=1000;
				}
			}else if(mouse_left==1) PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
			break;
			}
		}
		if(VS_no!=99){
		break;
		}
		if(koku_hen==999)break;

	if(money>=1000000){
	DrawFormatStringToHandle( 278 , 253 , kuro , f_a, "%d" , money/1000000%10 ) ;
	DrawFormatStringToHandle( 277 , 252 , siro , f_a, "%d" , money/1000000%10 ) ;
	}
	if(money>=100000){
	DrawFormatStringToHandle( 298 , 253 , kuro , f_a, "%d" , money/100000%10 ) ;
	DrawFormatStringToHandle( 297 , 252 , siro , f_a, "%d" , money/100000%10 ) ;
	}
	DrawFormatStringToHandle( 318 , 253 , kuro , f_a, "%d" , money/10000%10 ) ;
	DrawFormatStringToHandle( 317 , 252 , siro , f_a, "%d" , money/10000%10 ) ;
	if(kane_hen!=0){
		DrawStringToHandle( 346 , 253 , "→"  ,kuro , f_a) ;
		DrawStringToHandle( 345 , 252 , "→"  ,siro , f_a) ;
		if(kane_hen>0 && money>=9999999);
		else if(kane_hen>0) siro=bougyo;
		else if(kane_hen<0) siro=kougeki;
		if(money+kane_hen>=1000000){
			DrawFormatStringToHandle( 388 , 253 , kuro , f_a, "%d" , (money+kane_hen)/1000000%10 ) ;
			DrawFormatStringToHandle( 387 , 252 , siro , f_a, "%d" , (money+kane_hen)/1000000%10 ) ;
		}
		if(money+kane_hen>=100000){
			DrawFormatStringToHandle( 408 , 253 , kuro , f_a, "%d" , (money+kane_hen)/100000%10 ) ;
			DrawFormatStringToHandle( 407 , 252 , siro , f_a, "%d" , (money+kane_hen)/100000%10 ) ;
		}
		if(money+kane_hen>=0){
			DrawFormatStringToHandle( 428 , 253 , kuro , f_a, "%d" , (money+kane_hen)/10000%10 ) ;
			DrawFormatStringToHandle( 427 , 252 , siro , f_a, "%d" , (money+kane_hen)/10000%10 ) ;
		}else{
			DrawStringToHandle( 428 , 253 , "0" ,aka , f_a) ;
			DrawStringToHandle( 427 , 252 , "0" ,siro , f_a) ;
		}
		siro=GetColor(255,255,255);
	}
	kane_hen=0;
	ScreenFlip();
	}
	mouse_left=2;
	mouse=1;
	return 0;
}
int hukoku_dai(){
	for(t=0;t<64;t++){
		SetDrawBright( 255-t*4 , 255-t*4 , 255-t*4 ) ;
		sekai_byouga();
		ScreenFlip();
	}
	VS_aite=c;
	VS_result=1;//1全滅勝利 2退却勝利 3生き残り勝利 4全滅敗北 5退却敗北 6生き残り敗北 7生き残り引き分け
	//同盟戦により関係悪化


	gun_kazu[0]=39+kokuryoku/50;

	if(eve_flag[10]==1)youhei_lv[0]+=2;
	if(eve_flag[11]==1)sinobi_lv[0]+=2;

	if(kuni_seiryoku[c]==2){
		for(i=0;i<30;i++){
		kuni_yuukou[t]-=250;
		if(kuni_yuukou[t]<0)kuni_yuukou[t]=0;
		}
	}
	switch(VS_aite){
	case 1://魔物★
	VS_no=23;
	map=0;
	sentou_main();
	switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		syouri_bonus();break;
		}
	break;
	case 2://ゴ王★２連戦
	VS_no=28;
	map=7;
	sentou_main();
		if(kuni_seiryoku[4]==4)eve_03();
		else if(eve_flag[3]==1)eve_04();
		else eve_02();
		if(VS_result<4 && B==1){//連戦チェック
		VS_no=38;
		gun_kazu[0]=gun_nokori[0]-1;
		sentou_main();
		switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		syouri_bonus();break;
		break;
		case 4://全滅敗北
		case 5://退却敗北
		case 6://残り敗北
		//死亡イベント
		break;
		case 7://引き分け
		break;}
		}
	break;
	case 3://じじ
	VS_no=21;map=0;
	sentou_main();
	switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		syouri_bonus();break;
		case 4://全滅敗北
		case 5://退却敗北
		case 6://残り敗北
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://引き分け
		kuni_seiryoku[VS_aite]=3;break;}
	break;
	case 4://魔龍★
	VS_no=33;map=4;
	sentou_main();
	switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		syouri_bonus();break;
		}
	break;
	case 5://重装
	VS_no=4;map=4;
	sentou_main();
	switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		syouri_bonus();break;
		case 4://全滅敗北
		case 5://退却敗北
		case 6://残り敗北
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://引き分け
		kuni_seiryoku[VS_aite]=3;break;}
	break;
	case 6://将軍３連戦
	VS_no=35;map=6;
	sentou_main();
	switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		break;
		case 4://全滅敗北
		case 5://退却敗北
		case 6://残り敗北
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://引き分け
		kuni_seiryoku[VS_aite]=3;break;}
	if(VS_result<4){//連戦チェック
		VS_no=30;
		gun_kazu[0]=gun_nokori[0]-1;
		sentou_main();
		switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		break;
		case 4://全滅敗北
		case 5://退却敗北
		case 6://残り敗北
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://引き分け
		kuni_seiryoku[VS_aite]=3;break;}
		if(VS_result<4){//連戦チェックその２
			VS_no=2;
			gun_kazu[0]=gun_nokori[0]-1;
			sentou_main();
			switch(VS_result){
			case 1://全滅勝利
			case 2://退却勝利
			case 3://残り勝利
			syouri_bonus();break;
			case 4://全滅敗北
			case 5://退却敗北
			case 6://残り敗北
			kuni_seiryoku[VS_aite]=3;money-=100000;break;
			case 7://引き分け
			kuni_seiryoku[VS_aite]=3;break;}
		}
	}
	break;
	case 7://ゴブ★
	VS_no=1;map=6;
	sentou_main();
	switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		syouri_bonus();
		eve_flag[26]=hiduke+3;break;}
	break;
	case 8://兵士
	VS_no=3;map=6;
	sentou_main();
	switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		syouri_bonus();break;
		case 4://全滅敗北
		case 5://退却敗北
		case 6://残り敗北
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://引き分け
		kuni_seiryoku[VS_aite]=3;break;}
	break;
	case 9://兵士
	VS_no=5;map=6;
	sentou_main();
	switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		syouri_bonus();break;
		case 4://全滅敗北
		case 5://退却敗北
		case 6://残り敗北
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://引き分け
		kuni_seiryoku[VS_aite]=3;break;}
	break;
	case 10://炎兵★
	VS_no=11;map=8;
	sentou_main();
	switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		syouri_bonus();break;}
	break;
	case 11://将軍２連戦
	VS_no=20;map=5;
	sentou_main();
	switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		break;
		case 4://全滅敗北
		case 5://退却敗北
		case 6://残り敗北
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://引き分け
		kuni_seiryoku[VS_aite]=3;break;}
	if(VS_result<4){
		VS_no=17;
		gun_kazu[0]=gun_nokori[0]-1;
		sentou_main();
		switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		syouri_bonus();break;
		case 4://全滅敗北
		case 5://退却敗北
		case 6://残り敗北
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://引き分け
		kuni_seiryoku[VS_aite]=3;break;}
	}
	break;
	case 12://魔炎★
	VS_no=25;map=8;
	sentou_main();
	switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		syouri_bonus();break;}
	break;
	case 13://兵士
	VS_no=31;map=1;
	sentou_main();
	switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		syouri_bonus();break;
		case 4://全滅敗北
		case 5://退却敗北
		case 6://残り敗北
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://引き分け
		kuni_seiryoku[VS_aite]=3;break;}
	break;
	case 14://族長２連戦
	VS_no=13;map=5;
	sentou_main();
	switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		break;
		case 4://全滅敗北
		case 5://退却敗北
		case 6://残り敗北
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://引き分け
		kuni_seiryoku[VS_aite]=3;break;}
	if(VS_result<4){//連戦チェック
		VS_no=22;
		gun_kazu[0]=gun_nokori[0]-1;
		sentou_main();
		switch(VS_result){
			case 1://全滅勝利
			case 2://退却勝利
			case 3://残り勝利
			syouri_bonus();break;
			case 4://全滅敗北
			case 5://退却敗北
			case 6://残り敗北
			kuni_seiryoku[VS_aite]=3;money-=100000;break;
			case 7://引き分け
			kuni_seiryoku[VS_aite]=3;break;}
	}
	break;
	case 15://魔戦★
	VS_no=24;map=2;
	sentou_main();
	switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		syouri_bonus();break;
		}
	break;
	case 16://騎兵
	VS_no=9;map=6;
	sentou_main();
	switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		syouri_bonus();break;
		case 4://全滅敗北
		case 5://退却敗北
		case 6://残り敗北
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://引き分け
		kuni_seiryoku[VS_aite]=3;break;}
	break;
	case 17://重装
	VS_no=14;map=5;
	sentou_main();
	switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		syouri_bonus();break;
		case 4://全滅敗北
		case 5://退却敗北
		case 6://残り敗北
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://引き分け
		kuni_seiryoku[VS_aite]=3;break;}
	break;
	case 18://ゼラ
	VS_no=36;map=6;
	if(kuni_type[18]==8)VS_no=37;
	sentou_main();
	switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		syouri_bonus();break;
		break;}
	break;
	case 19://将軍２連戦
	VS_no=10;map=2;
	sentou_main();
	switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		break;
		case 4://全滅敗北
		case 5://退却敗北
		case 6://残り敗北
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://引き分け
		kuni_seiryoku[VS_aite]=3;break;}
	if(VS_result<4){
		VS_no=18;
		gun_kazu[0]=gun_nokori[0]-1;
		sentou_main();
		switch(VS_result){
			case 1://全滅勝利
			case 2://退却勝利
			case 3://残り勝利
			syouri_bonus();break;
			case 4://全滅敗北
			case 5://退却敗北
			case 6://残り敗北
			kuni_seiryoku[VS_aite]=3;money-=100000;break;
			case 7://引き分け
			kuni_seiryoku[VS_aite]=3;break;}
	}
	break;
	case 20://将軍２連戦
	VS_no=19;map=2;
	sentou_main();
	switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		break;
		case 4://全滅敗北
		case 5://退却敗北
		case 6://残り敗北
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://引き分け
		kuni_seiryoku[VS_aite]=3;break;}
	if(VS_result<4){
		VS_no=12;
		gun_kazu[0]=gun_nokori[0]-1;
		sentou_main();
		switch(VS_result){
			case 1://全滅勝利
			case 2://退却勝利
			case 3://残り勝利
			syouri_bonus();break;
			case 4://全滅敗北
			case 5://退却敗北
			case 6://残り敗北
			kuni_seiryoku[VS_aite]=3;money-=100000;break;
			case 7://引き分け
			kuni_seiryoku[VS_aite]=3;break;}
	}
	break;
	case 21://兵士
	VS_no=7;map=6;
	sentou_main();
	switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		syouri_bonus();break;
		case 4://全滅敗北
		case 5://退却敗北
		case 6://残り敗北
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://引き分け
		kuni_seiryoku[VS_aite]=3;break;}
	break;
	case 22://戦士
	VS_no=6;map=1;
	sentou_main();
	switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		syouri_bonus();break;
		case 4://全滅敗北
		case 5://退却敗北
		case 6://残り敗北
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://引き分け
		kuni_seiryoku[VS_aite]=3;break;}
	break;
	case 23://将軍２連戦
	VS_no=8;map=2;
	sentou_main();
	switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		break;
		case 4://全滅敗北
		case 5://退却敗北
		case 6://残り敗北
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://引き分け
		kuni_seiryoku[VS_aite]=3;break;}
	if(VS_result<4){
		VS_no=29;
		gun_kazu[0]=gun_nokori[0]-1;
		sentou_main();
		switch(VS_result){
			case 1://全滅勝利
			case 2://退却勝利
			case 3://残り勝利
			syouri_bonus();break;
			case 4://全滅敗北
			case 5://退却敗北
			case 6://残り敗北
			kuni_seiryoku[VS_aite]=3;break;
			case 7://引き分け
			kuni_seiryoku[VS_aite]=3;break;}
	}
	break;
	case 24://騎兵
	VS_no=15;map=5;
	sentou_main();
	switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		syouri_bonus();break;
		case 4://全滅敗北
		case 5://退却敗北
		case 6://残り敗北
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://引き分け
		kuni_seiryoku[VS_aite]=3;break;}
	break;
	case 25://冥王★
	VS_no=34;map=10;
	sentou_main();
	switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		syouri_bonus();break;
		case 4://全滅敗北
		case 5://退却敗北
		case 6://残り敗北
		//死亡イベント
		break;
		case 7://引き分け
		break;}
	break;
	case 26://司教２連戦
	VS_no=26;map=3;
	sentou_main();
	switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		break;
		case 4://全滅敗北
		case 5://退却敗北
		case 6://残り敗北
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://引き分け
		kuni_seiryoku[VS_aite]=3;break;}
	if(VS_result<4){
		VS_no=27;
		gun_kazu[0]=gun_nokori[0]-1;
		sentou_main();
		switch(VS_result){
			case 1://全滅勝利
			case 2://退却勝利
			case 3://残り勝利
			syouri_bonus();break;
			case 4://全滅敗北
			case 5://退却敗北
			case 6://残り敗北
			kuni_seiryoku[VS_aite]=3;money-=100000;break;
			case 7://引き分け
			kuni_seiryoku[VS_aite]=3;break;}
	}
	break;
	case 27://海兵★
	VS_no=39;map=4;
	sentou_main();
	switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		syouri_bonus();break;}
	break;
	case 28://忍者
	VS_no=16;
	sentou_main();
	switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		syouri_bonus();break;
		case 4://全滅敗北
		case 5://退却敗北
		case 6://残り敗北
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://引き分け
		kuni_seiryoku[VS_aite]=3;break;}
	break;
	case 29://魔海★
	VS_no=32;map=4;
	sentou_main();
	switch(VS_result){
		case 1://全滅勝利
		case 2://退却勝利
		case 3://残り勝利
		syouri_bonus();break;}
	break;
	}
	hiduke++;//時間を進める
	if(B!=2 || VS_no!=28)for(t=0;t<60;t++){
		sekai_byouga();
		DrawBox(320+t*6,0,680,480,kuro,TRUE);
		DrawBox(-40,0,320-t*6,480,kuro,TRUE);
		ScreenFlip();
	}
	if(VS_no==38){
		if(VS_result<4){
		if(eve_flag[3]==1)eve_08();
		else eve_08();
		}else eve_05();
	}
	if(kokuryoku<0)kokuryoku=0;
	if(money<0)money=0;
	youhei_lv[0]=0;
	sinobi_lv[0]=0;
	PlayMusic( "File/music/naisei.mp3" , DX_PLAYTYPE_LOOP ) ;
	return 0;
}
int syouri_bonus(){
	if(kuni_seiryoku[VS_aite]==4){//魔物相手
		if(kokuryoku/250<=kuni_gundan[VS_aite]/250){
			kokuryoku+=60;
			minsyuu+=100;
		}else kokuryoku+=20;
		minsyuu+=100;
	}else{//人間相手
		if(kokuryoku/250<=kuni_gundan[VS_aite]/250){
			kokuryoku+=90;
			minsyuu+=50;
	}else kokuryoku+=30;
	minsyuu+=50;
	}
	if(kokuryoku>1000)kokuryoku=1000;
	if(kuni_seiryoku[VS_aite]!=4)money+=50000;//賠償金奪取
	kuni_seiryoku[VS_aite]=1;//勢力変化
	return 0;
}
int naisei_command(){
	mouse_left=2;
	mouse=1;
	while(1){
		GetMousePoint( &mou_x, &mou_y );
		if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//マウス左押下
			if(mouse==0){
				PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
				break;
			}
		}else mouse=0;
		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
		if(mouse_left==0) mouse_left=1;
		}else mouse_left=0;

		DrawGraph( 0, 0, world_map, TRUE ) ;
		//内政コマンドの表示
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		DrawBox( 60 , 54 , 280 , 410 ,ao , TRUE ) ;
		if(mou_x>60 && mou_x<280 && mou_y>58 && mou_y <410) DrawBox( 70 , 19+(mou_y-14)/44*44 , 270 , 53+(mou_y-14)/44*44 ,ao , TRUE ) ;
		jyouhou_kuni();
		DrawStringToHandle( 105 , 65      , "陣形編成" ,kuro , f_a ) ;
		DrawStringToHandle( 104 , 64      , "陣形編成" ,siro , f_a ) ;
		DrawStringToHandle( 105 , 65+44*1 , "戦術研究" ,kuro , f_a ) ;
		DrawStringToHandle( 104 , 64+44*1 , "戦術研究" ,siro , f_a ) ;
		DrawStringToHandle( 105 , 65+44*2 , "税金徴収" ,kuro , f_a ) ;
		DrawStringToHandle( 104 , 64+44*2 , "税金徴収" ,siro , f_a ) ;
		DrawStringToHandle( 105 , 65+44*3 , "工業振興" ,kuro , f_a ) ;
		DrawStringToHandle( 104 , 64+44*3 , "工業振興" ,siro , f_a ) ;
		DrawStringToHandle( 105 , 65+44*4 , "武器開発" ,kuro , f_a ) ;
		DrawStringToHandle( 104 , 64+44*4 , "武器開発" ,siro , f_a ) ;
		DrawStringToHandle( 105 , 65+44*5 , "傭兵雇用" ,kuro , f_a ) ;
		DrawStringToHandle( 104 , 64+44*5 , "傭兵雇用" ,siro , f_a ) ;
		DrawStringToHandle( 115 , 65+44*6 , "セーブ" ,kuro , f_a ) ;
		DrawStringToHandle( 114 , 64+44*6 , "セーブ" ,siro , f_a ) ;
		DrawStringToHandle( 115 , 65+44*7 , "ロード" ,kuro , f_a ) ;
		DrawStringToHandle( 114 , 64+44*7 , "ロード" ,siro , f_a ) ;
		if(mou_x>60 && mou_x<280 && mou_y>58 && mou_y <410){
			switch((mou_y-14)/44){
			case 1:
				DrawString( 315 , 65      , "陣形編成" ,kuro ) ;
				DrawString( 314 , 64      , "陣形編成" ,siro ) ;
				DrawString( 315 , 95      , "陣形と戦術を編成します" ,kuro ) ;
				DrawString( 314 , 94      , "陣形と戦術を編成します" ,siro ) ;
				DrawString( 315 , 125     , "" ,kuro ) ;
				DrawString( 314 , 124     , "" ,siro ) ;
				if(mouse_left==1){
					PlaySoundMem( se_no[16] , DX_PLAYTYPE_BACK ) ;
					mouse_left=2;
					naisei_butai();
				}
			break;
			case 2:
				DrawString( 315 , 65      , "戦術研究" ,kuro ) ;
				DrawString( 314 , 64      , "戦術研究" ,siro ) ;
				DrawString( 315 , 95      , "新戦術を研究します" ,kuro ) ;
				DrawString( 314 , 94      , "新戦術を研究します" ,siro ) ;
				DrawString( 315 , 125     , "" ,kuro ) ;
				DrawString( 314 , 124     , "" ,siro ) ;
				if(mouse_left==1){
					PlaySoundMem( se_no[16] , DX_PLAYTYPE_BACK ) ;
					mouse_left=2;
					naisei_senjyutu();
				}
				break;
			case 3:
				DrawString( 315 , 65      , "税金徴収" ,kuro ) ;
				DrawString( 314 , 64      , "税金徴収" ,siro ) ;
				DrawString( 315 , 95      , "民衆から税金を徴収します" ,kuro ) ;
				DrawString( 314 , 94      , "民衆から税金を徴収します" ,siro ) ;
				DrawString( 315 , 125     , "" ,kuro ) ;
				DrawString( 314 , 124     , "" ,siro ) ;
				if(mouse_left==1){
					PlaySoundMem( se_no[16] , DX_PLAYTYPE_BACK ) ;
					mouse_left=2;
					naisei_zeikin();
				}
				break;
			case 4:
				DrawString( 315 , 65      , "工業振興" ,kuro ) ;
				DrawString( 314 , 64      , "工業振興" ,siro ) ;
				DrawString( 315 , 95      , "工業を振興・援助し" ,kuro ) ;
				DrawString( 314 , 94      , "工業を振興・援助し" ,siro ) ;
				DrawString( 315 , 125     , "産業を発展させます" ,kuro ) ;
				DrawString( 314 , 124     , "産業を発展させます" ,siro ) ;
				if(mouse_left==1){
					PlaySoundMem( se_no[16] , DX_PLAYTYPE_BACK ) ;
					mouse_left=2;
					naisei_kougyou();
				}
				break;
			case 5:
				DrawString( 315 , 65      , "武器開発" ,kuro ) ;
				DrawString( 314 , 64      , "武器開発" ,siro ) ;
				DrawString( 315 , 95      , "皇帝が使用する装備を" ,kuro ) ;
				DrawString( 314 , 94      , "皇帝が使用する装備を" ,siro ) ;
				DrawString( 315 , 125     , "強化します" ,kuro ) ;
				DrawString( 314 , 124     , "強化します" ,siro ) ;
				if(mouse_left==1){
					PlaySoundMem( se_no[16] , DX_PLAYTYPE_BACK ) ;
					mouse_left=2;
					naisei_buki();
				}
				break;
			case 6:
				DrawString( 315 , 65      , "傭兵雇用" ,kuro ) ;
				DrawString( 314 , 64      , "傭兵雇用" ,siro ) ;
				DrawString( 315 , 95      , "賃金を払って傭兵部隊を" ,kuro ) ;
				DrawString( 314 , 94      , "賃金を払って傭兵部隊を" ,siro ) ;
				DrawString( 315 , 125     , "戦いに参加させます" ,kuro ) ;
				DrawString( 314 , 124     , "戦いに参加させます" ,siro ) ;
				if(mouse_left==1){
					PlaySoundMem( se_no[16] , DX_PLAYTYPE_BACK ) ;
					mouse_left=2;
					naisei_youhei();
				}
				break;
			case 7:
				DrawString( 315 , 65      , "セーブ" ,kuro ) ;
				DrawString( 314 , 64      , "セーブ" ,siro ) ;
				DrawString( 315 , 95      , "今の状態を記録します" ,kuro ) ;
				DrawString( 314 , 94      , "今の状態を記録します" ,siro ) ;
				DrawString( 315 , 125     , "" ,kuro ) ;
				DrawString( 314 , 124     , "" ,siro ) ;
				if(mouse_left==1){
					PlaySoundMem( se_no[16] , DX_PLAYTYPE_BACK ) ;
					mouse_left=2;
					naisei_save();
				}
				break;
			case 8:
				DrawString( 315 , 65      , "ロード" ,kuro ) ;
				DrawString( 314 , 64      , "ロード" ,siro ) ;
				DrawString( 315 , 95      , "記録を読込ます" ,kuro ) ;
				DrawString( 314 , 94      , "記録を読込ます" ,siro ) ;
				DrawString( 315 , 125     , "" ,kuro ) ;
				DrawString( 314 , 124     , "" ,siro ) ;
				if(mouse_left==1){
					PlaySoundMem( se_no[16] , DX_PLAYTYPE_BACK ) ;
					mouse_left=2;
					naisei_load();
				}
				break;
			}
		}
		ScreenFlip();
	}
	mouse=1;
	return 0;
}
int naisei_butai(){
	mouse=1;

	while(1){
		GetMousePoint( &mou_x, &mou_y );
		if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//マウス左押下
			if(mouse==0){
				PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
				break;
			}
		}else mouse=0;
		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
		if(mouse_left==0) mouse_left=1;
		}else mouse_left=0;

		DrawGraph( 0, 0, world_map, TRUE ) ;
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		DrawBox( 2 , 2 , 211 , 348 ,ao , TRUE ) ;
		DrawBox( 215 , 2 , 424 , 348 ,ao , TRUE ) ;
		DrawBox( 428 , 2 , 638 , 348 ,ao , TRUE ) ;
		DrawBox( 2 , 352 , 638 , 478 ,ao , TRUE ) ;
		SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;

		hensei_no=31;
		//色つきカーソル表示
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		if(mou_x>0 && mou_x<213){
			if(mou_y>35 && mou_y<65){DrawBox( 5 , 35 , 206 , 65 ,ao , TRUE ) ;hensei_no=0;}
			if(mou_y>80 && mou_y<350){DrawBox( 5 , 75+(mou_y-80)/30*30 , 206 , 105+(mou_y-80)/30*30 ,ao , TRUE ) ;hensei_no=1+(mou_y-80)/30;}
		}else if(mou_x>=213 && mou_x<426){
			if(mou_y>35 && mou_y<65){DrawBox( 218 , 35 , 419 , 65 ,ao , TRUE ) ;hensei_no=10;}
			if(mou_y>80 && mou_y<350){DrawBox( 218 , 75+(mou_y-80)/30*30 , 419 , 105+(mou_y-80)/30*30 ,ao , TRUE ) ;hensei_no=11+(mou_y-80)/30;}
		}
		SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;
		//名前等表示
		DrawString( 11 , 6 , "第一編成" , kuro );
		DrawString( 10 , 5 , "第一編成" , siro );
		DrawString( 11+213 , 6 , "第二編成" , kuro );
		DrawString( 10+213 , 5 , "第二編成" , siro );
		for(j=0;j<2;j++){
			MSN=set_jinkei[j];
			xa=30+j*213;
			ya=40;
			jinkei_name();
			for(i=0;i<9;i++){
			xa=30+j*213;
			ya=80+i*30;
			MSN=set_hyouhou[j][i];
			if(MSN==1 || MSN==6 || MSN==7 || MSN==8 || MSN==9 || MSN==11 || MSN==12 || MSN==56 || MSN==58 || MSN==4 || MSN==13 || MSN==14 || MSN==15 || MSN==16 || MSN==39 || MSN==36 || MSN==40 || MSN==41 || MSN==52 )siro=kougeki;
			else if(MSN==3 || MSN==17 || MSN==29 || MSN==18 || MSN==2 || MSN==57 || MSN==20 || MSN==19 || MSN==10 || MSN==21 || MSN==24 || MSN==25 || MSN==30 || MSN==27 || MSN==31 || MSN==50 || MSN==51)siro=bougyo;
			else if(MSN!=0)siro=kaihuku;
			if(( set_jinkei[j]==1 ||  set_jinkei[j]==8 || set_jinkei[j]==9 || set_jinkei[j]==10 || set_jinkei[j]==12 || set_jinkei[j]==13 || set_jinkei[j]==14 || set_jinkei[j]==17 || set_jinkei[j]==19 )
			&&(  MSN==6 || MSN==7 || MSN==13 || MSN==14 || MSN==17 || MSN==21 || MSN==24 || MSN==29 || MSN==32 || MSN==36 || MSN==49))
			siro=hai;

			hyouhou_name();
			if(B!=0){
				DrawFormatString( xa+146 , ya+1 , kuro , "%d" , B );
				DrawFormatString( xa+145 , ya   , siro , "%d" , B );
				}
			siro=GetColor(255,255,255);
			}
		}
		//説明表示
		if(hensei_no!=31){
		if(hensei_no==0)MSN=set_jinkei[0];
		else if(hensei_no==10)MSN=set_jinkei[1];
		else MSN=set_hyouhou[hensei_no/10][hensei_no%10-1];
		if(hensei_no%10==0) jinkei_setumei();
		else            hyouhou_setumei();
		}

		if(mou_y<360 && mou_x<426){
		if(mou_x<213) MSN=set_jinkei[0];
		else MSN=set_jinkei[1];
		jinkei_narabi();
		}

		if(mouse_left==1){
			mouse_left=2;
			if(hensei_no%10!=0 && mou_y>80 && mou_y<350){
				PlaySoundMem( se_no[16] , DX_PLAYTYPE_BACK ) ;
				hyouhou_select();
			}else if(mou_y>35 && mou_y<65){
				PlaySoundMem( se_no[16] , DX_PLAYTYPE_BACK ) ;
				jinkei_select();
			}
		}

		ScreenFlip();
		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
	}
	mouse=1;
	return 0;
}
int naisei_senjyutu(){
	mouse=1;
	while(1){
		GetMousePoint( &mou_x, &mou_y );
		if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//マウス左押下
			if(mouse==0){
				PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
				break;
			}
		}else mouse=0;
		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
		if(mouse_left==0) mouse_left=1;
		}else mouse_left=0;

		DrawGraph( 0, 0, world_map, TRUE ) ;
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		DrawBox( 2 , 2 , 638 , 348 ,ao , TRUE ) ;
		DrawBox( 2 , 352 , 638 , 478 ,ao , TRUE ) ;
		SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;

		//色つきカーソル表示
		A=mou_x/128*10;
		A+=(mou_y-30)/30;
		if(mou_y<=30 || mou_y>=330)A=99;
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		if(mou_y>30 && mou_y<330){
			DrawBox( A/10*128+5 , 25+A%10*30 , 123+A/10*128 , 55+A%10*30 ,ao , TRUE ) ;
		}
		SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;
		//名前等表示//51
		for(j=0;j<5;j++){
			for(i=0;i<10;i++){
			xa=5+j*128;
			ya=30+i*30;
			if(j*10+i<19)siro=kougeki;
			else if(j*10+i<36)siro=bougyo ;
			else siro=kaihuku;
			B=j*10+i;
			senjyutu_nedan();
			kane_hen=-50000;
			if(flag_hyouhou[j*10+i]==0){MSN=0;siro=GetColor(125,125,125);}
			else if(get_hyouhou[j*10+i]!=0)siro=GetColor(255,255,255);
			else if(kane_hen+money<0)siro=GetColor(125,125,125);
			hyouhou_name();
			siro=GetColor(255,255,255);
			}
		}
		//説明表示
		kane_hen=0;
		B=A;
		senjyutu_nedan();
		if(flag_hyouhou[A]==0)MSN=0;
		if(MSN!=0){
		hyouhou_setumei();
		}
		if(kane_hen!=0 && mouse_left==1){
			if(kane_hen+money>=0 && get_hyouhou[A]==0 && flag_hyouhou[A]==1){
			PlaySoundMem( se_no[7] , DX_PLAYTYPE_BACK ) ;
			money+=kane_hen;
			get_hyouhou[A]=1;
			}else{
			PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
			}
		mouse_left=2;
		}
		if(get_hyouhou[45]==1)flag_hyouhou[46]=1;
		if(get_hyouhou[46]==1)flag_hyouhou[47]=1;
		if(get_hyouhou[47]==1)flag_hyouhou[48]=1;
		if(get_hyouhou[48]==1)flag_hyouhou[49]=1;

		DrawStringToHandle( 321 , 361 , "資金",kuro , f_a) ;
		DrawStringToHandle( 320 , 360 , "資金",siro , f_a) ;
		if(money>=1000000){
		DrawFormatStringToHandle( 398 , 361 , kuro , f_a, "%d" , money/1000000%10 ) ;
		DrawFormatStringToHandle( 397 , 360 , siro , f_a, "%d" , money/1000000%10 ) ;
		}
		if(money>=100000){
		DrawFormatStringToHandle( 418 , 361 , kuro , f_a, "%d" , money/100000%10 ) ;
		DrawFormatStringToHandle( 417 , 360 , siro , f_a, "%d" , money/100000%10 ) ;
		}
		DrawFormatStringToHandle( 438 , 361 , kuro , f_a, "%d" , money/10000%10 ) ;
		DrawFormatStringToHandle( 437 , 360 , siro , f_a, "%d" , money/10000%10 ) ;

		if(kane_hen!=0){
			DrawStringToHandle( 466 , 361 , "→"  ,kuro , f_a) ;
			DrawStringToHandle( 465 , 360 , "→"  ,siro , f_a) ;
			if(kane_hen>0 && money>=9999999);
			else if(kane_hen>0) siro=bougyo;
			else if(kane_hen<0) siro=kougeki;
			if(money+kane_hen>=1000000){
				DrawFormatStringToHandle( 508 , 361 , kuro , f_a, "%d" , (money+kane_hen)/1000000%10 ) ;
				DrawFormatStringToHandle( 507 , 360 , siro , f_a, "%d" , (money+kane_hen)/1000000%10 ) ;
			}
			if(money+kane_hen>=100000){
				DrawFormatStringToHandle( 528 , 361 , kuro , f_a, "%d" , (money+kane_hen)/100000%10 ) ;
				DrawFormatStringToHandle( 527 , 360 , siro , f_a, "%d" , (money+kane_hen)/100000%10 ) ;
			}
			if(money+kane_hen>=0){
				DrawFormatStringToHandle( 548 , 361 , kuro , f_a, "%d" , (money+kane_hen)/10000%10 ) ;
				DrawFormatStringToHandle( 547 , 360 , siro , f_a, "%d" , (money+kane_hen)/10000%10 ) ;
			}else{
				DrawStringToHandle( 549 , 361 , "0" ,aka , f_a) ;
				DrawStringToHandle( 547 , 360 , "0" ,siro , f_a) ;
			}
		}

		ScreenFlip();
		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
	}
	mouse=1;
	return 0;
}
int senjyutu_nedan(){
			switch (B){
			case  0:MSN= 1;kane_hen=5*-10000;break;
			case  1:MSN= 6;kane_hen=5*-10000;break;
			case  2:MSN= 7;kane_hen=5*-10000;break;
			case  3:MSN= 8;kane_hen=10*-10000;break;
			case  4:MSN= 9;kane_hen=10*-10000;break;
			case  5:MSN=11;kane_hen=5*-10000;break;
			case  6:MSN=12;kane_hen=5*-10000;break;
			case  7:MSN=56;kane_hen=10*-10000;break;
			case  8:MSN=58;kane_hen=50*-10000;break;
			case  9:MSN= 4;kane_hen=30*-10000;break;
			case 10:MSN=13;kane_hen=15*-10000;break;
			case 11:MSN=14;kane_hen=15*-10000;break;
			case 12:MSN=15;kane_hen=15*-10000;break;//22
			case 13:MSN=16;kane_hen=15*-10000;break;//23
			case 14:MSN=39;kane_hen=15*-10000;break;
			case 15:MSN=36;kane_hen=30*-10000;break;//33
			case 16:MSN=40;kane_hen=30*-10000;break;
			case 17:MSN=41;kane_hen=30*-10000;break;
			case 18:MSN=52;kane_hen=50*-10000;break;
			case 19:MSN= 3;kane_hen=5*-10000;break;
			case 20:MSN=17;kane_hen=5*-10000;break;
			case 21:MSN=29;kane_hen=10*-10000;break;
			case 22:MSN=18;kane_hen=5*-10000;break;
			case 23:MSN= 2;kane_hen=5*-10000;break;
			case 24:MSN=57;kane_hen=5*-10000;break;
			case 25:MSN=20;kane_hen=10*-10000;break;
			case 26:MSN=19;kane_hen=10*-10000;break;
			case 27:MSN=10;kane_hen=10*-10000;break;
			case 28:MSN=21;kane_hen=5*-10000;break;
			case 29:MSN=24;kane_hen=10*-10000;break;//28
			case 30:MSN=25;kane_hen=15*-10000;break;
			case 31:MSN=30;kane_hen=20*-10000;break;
			case 32:MSN=27;kane_hen=15*-10000;break;
			case 33:MSN=31;kane_hen=20*-10000;break;
			case 34:MSN=50;kane_hen=15*-10000;break;
			case 35:MSN=51;kane_hen=20*-10000;break;
			case 36:MSN= 5;kane_hen=5*-10000;break;
			case 37:MSN=55;kane_hen=5*-10000;break;//26
			case 38:MSN=42;kane_hen=15*-10000;break;
			case 39:MSN=43;kane_hen=30*-10000;break;
			case 40:MSN=32;kane_hen=15*-10000;break;
			case 41:MSN=34;kane_hen=50*-10000;break;//38
			case 42:MSN=35;kane_hen=50*-10000;break;
			case 43:MSN=49;kane_hen=25*-10000;break;
			case 44:MSN=59;kane_hen=50*-10000;break;
			case 45:MSN=44;kane_hen=15*-10000;break;
			case 46:MSN=45;kane_hen=20*-10000;break;//53
			case 47:MSN=46;kane_hen=25*-10000;break;//54
			case 48:MSN=47;kane_hen=30*-10000;break;
			case 49:MSN=48;kane_hen=30*-10000;break;
	}
	return 0;
}
int naisei_zeikin(){

	mouse=1;
	while(1){
		GetMousePoint( &mou_x, &mou_y );
		if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//マウス左押下
			if(mouse==0){
				PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
				break;
			}
		}else mouse=0;
		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
		if(mouse_left==0) mouse_left=1;
		else mouse_left=2;
		}else mouse_left=0;
		DrawGraph( 0, 0, world_map, TRUE ) ;
		//内政コマンドの表示
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		DrawBox( 60 , 54 , 280 , 410 ,GetColor(0,0,255) , TRUE ) ;
		if(mou_x>60 && mou_x<280 && mou_y>58+88 && mou_y <190+88) DrawBox( 70 , 19+(mou_y-14)/44*44 , 270 , 53+(mou_y-14)/44*44 ,GetColor(0,0,255) , TRUE ) ;
		jyouhou_kuni();
		DrawStringToHandle( 135 , 65+44*2 , "軽い" ,kuro , f_a ) ;
		DrawStringToHandle( 134 , 64+44*2 , "軽い" ,siro , f_a ) ;
		DrawStringToHandle( 135 , 65+44*3 , "普通" ,kuro , f_a ) ;
		DrawStringToHandle( 134 , 64+44*3 , "普通" ,siro , f_a ) ;
		DrawStringToHandle( 135 , 65+44*4 , "重い" ,kuro , f_a ) ;
		DrawStringToHandle( 134 , 64+44*4 , "重い" ,siro , f_a ) ;
		c=1000;
		if(minsyuu>1000)c+=1000;
		else c+=minsyuu;
		if(sangyou>1000)c+=2000;
		else c+=sangyou*2;
		if(mou_x>60 && mou_x<280 && mou_y>58+88 && mou_y <190+88){
			switch((mou_y-14)/44){
			case 3:
			DrawString( 315 , 65      , "軽い税" ,kuro ) ;
			DrawString( 314 , 64      , "軽い税" ,siro ) ;
			DrawString( 315 , 95      , "普通の半分の税" ,kuro ) ;
			DrawString( 314 , 94      , "普通の半分の税" ,siro ) ;
			DrawString( 315 , 125     , "民衆が少し悪化します" ,kuro ) ;
			DrawString( 314 , 124     , "民衆が少し悪化します" ,siro ) ;
			if(minsyuu<100){
				kane_hen=minsyuu*c/4;
				min_hen=-minsyuu;
			}else{
				kane_hen=100*c/4;
				min_hen-=100;
			}
			break;
			case 4:
			DrawString( 315 , 65      , "普通税" ,kuro ) ;
			DrawString( 314 , 64      , "普通税" ,siro ) ;
			DrawString( 315 , 95      , "普通の税" ,kuro ) ;
			DrawString( 314 , 94      , "普通の税" ,siro ) ;
			DrawString( 315 , 125     , "民衆が悪化します" ,kuro ) ;
			DrawString( 314 , 124     , "民衆が悪化します" ,siro ) ;
			if(minsyuu<200){
				kane_hen=minsyuu*c/4;
				min_hen=-minsyuu;
			}else{
				kane_hen=200*c/4;
				min_hen-=200;
			}
			break;
			case 5:
			DrawString( 315 , 65      , "重い税" ,kuro ) ;
			DrawString( 314 , 64      , "重い税" ,siro ) ;
			DrawString( 315 , 95      , "普通の倍の税" ,kuro ) ;
			DrawString( 314 , 94      , "普通の倍の税" ,siro ) ;
			DrawString( 315 , 125     , "民衆が激しく悪化します" ,kuro ) ;
			DrawString( 314 , 124     , "民衆が激しく悪化します" ,siro ) ;
			if(minsyuu<400){
				kane_hen=minsyuu*c/4;
				min_hen=-minsyuu;
			}else{
				kane_hen=400*c/4;
				min_hen-=400;
			}
			break;
			}
			if(mouse_left==1){
				if(kane_hen!=0){
				money+=kane_hen;
				minsyuu+=min_hen;
				kane_hen=0;
				min_hen=0;
				PlaySoundMem( se_no[3] , DX_PLAYTYPE_BACK ) ;
				}else PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
			break;
			}
		}
		ScreenFlip();
	}
	mouse_left=2;
	mouse=1;

	return 0;
}
int naisei_kougyou(){
	mouse=1;
	while(1){
		GetMousePoint( &mou_x, &mou_y );
		if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//マウス左押下
			if(mouse==0){
				PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
				break;
			}
		}else mouse=0;
		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
		if(mouse_left==0) mouse_left=1;
		else  mouse_left=2;
		}else mouse_left=0;
		DrawGraph( 0, 0, world_map, TRUE ) ;
		//内政コマンドの表示
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		DrawBox( 60 , 54 , 280 , 410 ,GetColor(0,0,255) , TRUE ) ;
		if(mou_x>60 && mou_x<280 && mou_y>58+88 && mou_y <190+88) DrawBox( 70 , 19+(mou_y-14)/44*44 , 270 , 53+(mou_y-14)/44*44 ,GetColor(0,0,255) , TRUE ) ;
		jyouhou_kuni();
		DrawStringToHandle( 135 , 65+44*2 , "小額" ,kuro , f_a ) ;
		DrawStringToHandle( 134 , 64+44*2 , "小額" ,siro , f_a ) ;
		DrawStringToHandle( 135 , 65+44*3 , "普通" ,kuro , f_a ) ;
		DrawStringToHandle( 134 , 64+44*3 , "普通" ,siro , f_a ) ;
		DrawStringToHandle( 135 , 65+44*4 , "多額" ,kuro , f_a ) ;
		DrawStringToHandle( 134 , 64+44*4 , "多額" ,siro , f_a ) ;
		if(mou_x>60 && mou_x<280 && mou_y>58+88 && mou_y <190+88){
			switch((mou_y-14)/44){
			case 3:
			DrawString( 315 , 65      , "小額助成" ,kuro ) ;
			DrawString( 314 , 64      , "小額助成" ,siro ) ;
			DrawString( 315 , 95      , "普通の半分援助" ,kuro ) ;
			DrawString( 314 , 94      , "普通の半分援助" ,siro ) ;
			DrawString( 315 , 125     , "産業が少し発展します" ,kuro ) ;
			DrawString( 314 , 124     , "産業が少し発展します" ,siro ) ;
			if(money>=50000+sangyou*50 && sangyou<1000){
				kane_hen=-50000-sangyou*50;
				san_hen=50;
			}
			break;
			case 4:
			DrawString( 315 , 65      , "普通助成" ,kuro ) ;
			DrawString( 314 , 64      , "普通助成" ,siro ) ;
			DrawString( 315 , 95      , "普通の援助" ,kuro ) ;
			DrawString( 314 , 94      , "普通の援助" ,siro ) ;
			DrawString( 315 , 125     , "産業が発展します" ,kuro ) ;
			DrawString( 314 , 124     , "産業が発展します" ,siro ) ;
			if(money>=100000+sangyou*100 && sangyou<1000){
				kane_hen=-100000-sangyou*100;
				san_hen=100;
			}
			break;
			case 5:
			DrawString( 315 , 65      , "多額助成" ,kuro ) ;
			DrawString( 314 , 64      , "多額助成" ,siro ) ;
			DrawString( 315 , 95      , "普通の倍援助" ,kuro ) ;
			DrawString( 314 , 94      , "普通の倍援助" ,siro ) ;
			DrawString( 315 , 125     , "産業が著しく発展します" ,kuro ) ;
			DrawString( 314 , 124     , "産業が著しく発展します" ,siro ) ;
			if(money>=200000+sangyou*200 && sangyou<1000){
				kane_hen=-200000-sangyou*200;
				san_hen=200;
			}
			break;
			}
			if(mouse_left==1){
				if(san_hen!=0){
				sangyou+=san_hen;
				money+=kane_hen;
				san_hen=0;
				kane_hen=0;
				PlaySoundMem( se_no[7] , DX_PLAYTYPE_BACK ) ;
				}else{
				PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
				}
			break;
			}
		}
		ScreenFlip();
	}
	mouse_left=2;
	mouse=1;
	return 0;
}
int naisei_buki(){
	mouse=1;
	while(1){
		GetMousePoint( &mou_x, &mou_y );
		if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//マウス右押下
			if(mouse==0){
			PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
			break;
			}
		}else mouse=0;



		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
		if(mouse_left==0) mouse_left=1;
		else mouse_left=2;
		}else mouse_left=0;
		DrawGraph( 0, 0, world_map, TRUE ) ;
		//内政コマンドの表示
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		DrawBox( 60 , 54 , 280 , 410 ,GetColor(0,0,255) , TRUE ) ;
		if(mou_x>60 && mou_x<280 && mou_y>58+88 && mou_y <190+44) DrawBox( 70 , 19+(mou_y-14)/44*44 , 270 , 53+(mou_y-14)/44*44 ,ao , TRUE ) ;
		jyouhou_kuni();
		DrawStringToHandle( 105 , 65+44*2 , "武器強化" ,kuro , f_a ) ;
		DrawStringToHandle( 104 , 64+44*2 , "武器強化" ,siro , f_a ) ;
		DrawStringToHandle( 105 , 65+44*3 , "防具強化" ,kuro , f_a ) ;
		DrawStringToHandle( 104 , 64+44*3 , "防具強化" ,siro , f_a ) ;
		if(mou_x>60 && mou_x<280 && mou_y>58 && mou_y <410){
			//mouse_left=1;
			switch((mou_y-14)/44){//鋼鉄、銘工、魔銀、王者、竜鱗、北斗
			case 3:
				if(get_item[0]==0){
				DrawString( 315 , 65      , "鋼鉄の剣→銘工の剣" ,kuro ) ;
				DrawString( 314 , 64      , "鋼鉄の剣→銘工の剣" ,siro ) ;
				DrawString( 315 , 95      , "武器を改造します" ,kuro ) ;
				DrawString( 314 , 94      , "武器を改造します" ,siro ) ;
				if(sangyou<250){
					DrawString( 315 , 125      , "産業が足りません" ,kuro ) ;
					DrawString( 314 , 124      , "産業が足りません" ,siro ) ;
				}else kane_hen=-10000;
				}else if(get_item[0]==1){
				DrawString( 315 , 65      , "銘工の剣→銀霊の剣" ,kuro ) ;
				DrawString( 314 , 64      , "銘工の剣→銀霊の剣" ,siro ) ;
				DrawString( 315 , 95      , "武器を改造します" ,kuro ) ;
				DrawString( 314 , 94      , "武器を改造します" ,siro ) ;
				if(sangyou<500){
					DrawString( 315 , 125      , "産業が足りません" ,kuro ) ;
					DrawString( 314 , 124      , "産業が足りません" ,siro ) ;
				}else kane_hen=-10000;
				}else if(get_item[0]==2){
				DrawString( 315 , 65      , "銀霊の剣→諸王の刀" ,kuro ) ;
				DrawString( 314 , 64      , "銀霊の剣→諸王の刀" ,siro ) ;
				DrawString( 315 , 95      , "武器を改造します" ,kuro ) ;
				DrawString( 314 , 94      , "武器を改造します" ,siro ) ;
				if(sangyou<750){
					DrawString( 315 , 125      , "産業が足りません" ,kuro ) ;
					DrawString( 314 , 124      , "産業が足りません" ,siro ) ;
				}else kane_hen=-10000;
				}else if(get_item[0]==3){
				DrawString( 315 , 65      , "諸王の刀→竜鱗の剣" ,kuro ) ;
				DrawString( 314 , 64      , "諸王の刀→竜鱗の剣" ,siro ) ;
				DrawString( 315 , 95      , "武器を改造します" ,kuro ) ;
				DrawString( 314 , 94      , "武器を改造します" ,siro ) ;
				kane_hen=-20000;
				if(sangyou<1000){
				DrawString( 315 , 125      , "産業が足りません" ,kuro ) ;
				DrawString( 314 , 124      , "産業が足りません" ,siro ) ;
				kane_hen=0;
				}else if(get_item[2]>0){
				DrawString( 315 , 125     , "竜鱗が１つ必要です" ,kuro ) ;
				DrawString( 314 , 124     , "竜鱗が１つ必要です" ,siro ) ;
				}else{
				DrawString( 315 , 125     , "竜鱗がありません" ,kuro ) ;
				DrawString( 314 , 124     , "竜鱗がありません" ,siro ) ;
				kane_hen=0;
				}
				}else if(get_item[0]==4){
				DrawString( 315 , 65      , "竜鱗の剣" ,kuro ) ;
				DrawString( 314 , 64      , "竜鱗の剣" ,siro ) ;
				DrawString( 315 , 95      , "強化出来ません" ,kuro ) ;
				DrawString( 314 , 94      , "強化出来ません" ,siro ) ;
				}
				if((kane_hen==0 || money+kane_hen<0) && mouse_left==1){
				PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
				mouse_left=2;
				return 0;
				}
				if(kane_hen!=0 && money+kane_hen>=0 && mouse_left==1){
				money+=kane_hen;
				get_item[0]++;
				PlaySoundMem( se_no[7] , DX_PLAYTYPE_BACK ) ;
				if(kane_hen==-20000)get_item[2]--;
				mouse_left=2;
				return 0;
				}
			break;
			case 4:
				if(get_item[1]==0){
				DrawString( 315 , 65      , "鋼鉄の鎧→銘工の鎧" ,kuro ) ;
				DrawString( 314 , 64      , "鋼鉄の鎧→銘工の鎧" ,siro ) ;
				DrawString( 315 , 95      , "武器を改造します" ,kuro ) ;
				DrawString( 314 , 94      , "武器を改造します" ,siro ) ;
				if(sangyou<250){
					DrawString( 315 , 125      , "産業が足りません" ,kuro ) ;
					DrawString( 314 , 124      , "産業が足りません" ,siro ) ;
				}else kane_hen=-10000;
				}else if(get_item[1]==1){
				DrawString( 315 , 65      , "銘工の鎧→霊銀の鎧" ,kuro ) ;
				DrawString( 314 , 64      , "銘工の鎧→霊銀の鎧" ,siro ) ;
				DrawString( 315 , 95      , "武器を改造します" ,kuro ) ;
				DrawString( 314 , 94      , "武器を改造します" ,siro ) ;
				if(sangyou<500){
					DrawString( 315 , 125      , "産業が足りません" ,kuro ) ;
					DrawString( 314 , 124      , "産業が足りません" ,siro ) ;
				}else kane_hen=-10000;
				}else if(get_item[1]==2){
				DrawString( 315 , 65      , "霊銀の鎧→諸王の鎧" ,kuro ) ;
				DrawString( 314 , 64      , "霊銀の鎧→諸王の鎧" ,siro ) ;
				DrawString( 315 , 95      , "武器を改造します" ,kuro ) ;
				DrawString( 314 , 94      , "武器を改造します" ,siro ) ;
				if(sangyou<750){
					DrawString( 315 , 125      , "産業が足りません" ,kuro ) ;
					DrawString( 314 , 124      , "産業が足りません" ,siro ) ;
				}else kane_hen=-10000;
				}else if(get_item[1]==3){
				DrawString( 315 , 65      , "諸王の鎧→竜鱗の鎧" ,kuro ) ;
				DrawString( 314 , 64      , "諸王の鎧→竜鱗の鎧" ,siro ) ;
				DrawString( 315 , 95      , "武器を改造します" ,kuro ) ;
				DrawString( 314 , 94      , "武器を改造します" ,siro ) ;
				kane_hen=-20000;
				if(sangyou<1000){
				DrawString( 315 , 125      , "産業が足りません" ,kuro ) ;
				DrawString( 314 , 124      , "産業が足りません" ,siro ) ;
				kane_hen=0;
				}else if(get_item[2]>0){
				DrawString( 315 , 125     , "竜鱗が１つ必要です" ,kuro ) ;
				DrawString( 314 , 124     , "竜鱗が１つ必要です" ,siro ) ;
				}else{
				DrawString( 315 , 125     , "竜鱗がありません" ,kuro ) ;
				DrawString( 314 , 124     , "竜鱗がありません" ,siro ) ;
				kane_hen=0;
				}
				}else if(get_item[1]==4){
				DrawString( 315 , 65      , "竜鱗の鎧" ,kuro ) ;
				DrawString( 314 , 64      , "竜鱗の鎧" ,siro ) ;
				DrawString( 315 , 95      , "強化出来ません" ,kuro ) ;
				DrawString( 314 , 94      , "強化出来ません" ,siro ) ;
				}
				if((kane_hen==0 || money+kane_hen<0) && mouse_left==1){
				PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
				mouse_left=2;
				return 0;
				}
				if(kane_hen!=0 && money+kane_hen>=0 && mouse_left==1){
				money+=kane_hen;
				get_item[1]++;
				PlaySoundMem( se_no[7] , DX_PLAYTYPE_BACK ) ;
				if(kane_hen==-20000)get_item[2]--;
				mouse_left=2;
				return 0;
				}
			break;
			}
		}
		ScreenFlip();
	}
	mouse=1;
	return 0;
}
int naisei_youhei(){
	mouse=1;
	while(1){
		GetMousePoint( &mou_x, &mou_y );
		if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//マウス左押下
			if(mouse==0){
				PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
				break;
			}
		}else mouse=0;
		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
		if(mouse_left==0) mouse_left=1;
		}else mouse_left=0;

		DrawGraph( 0, 0, world_map, TRUE ) ;
		//内政コマンドの表示
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		DrawBox( 60 , 54 , 280 , 410 ,GetColor(0,0,255) , TRUE ) ;
		if(mou_x>60 && mou_x<280 && mou_y>58+88 && mou_y <190+44) DrawBox( 70 , 19+(mou_y-14)/44*44 , 270 , 53+(mou_y-14)/44*44 ,GetColor(0,0,255) , TRUE ) ;
		jyouhou_kuni();
		DrawStringToHandle( 105 , 65+44*2 , "戦士雇用" ,kuro , f_a ) ;
		DrawStringToHandle( 104 , 64+44*2 , "戦士雇用" ,siro , f_a ) ;
		DrawStringToHandle( 105 , 65+44*3 , "忍者雇用" ,kuro , f_a ) ;
		DrawStringToHandle( 104 , 64+44*3 , "忍者雇用" ,siro , f_a ) ;
		if(mou_x>60 && mou_x<280 && mou_y>58+88 && mou_y <190+44){
			switch((mou_y-14)/44){
			case 3:
			if(youhei_lv[0]==0){
				DrawString( 315 , 65      , "戦士雇用" ,kuro ) ;
				DrawString( 314 , 64      , "戦士雇用" ,siro ) ;
				DrawString( 315 , 95      , "戦士を十部隊雇います" ,kuro ) ;
				DrawString( 314 , 94      , "戦士を十部隊雇います" ,siro ) ;
				kane_hen=-50000;
				if(mouse_left==1){
					if(money>=50000){
						money-=50000;
						youhei_lv[0]=5;
						PlaySoundMem( se_no[7] , DX_PLAYTYPE_BACK ) ;
						}else{
						PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
						}
						mouse_left=2;
					return 0;
					}
				}else{
				DrawString( 315 , 65      , "戦士雇用" ,kuro ) ;
				DrawString( 314 , 64      , "戦士雇用" ,siro ) ;
				DrawString( 315 , 95      , "雇用済み" ,kuro ) ;
				DrawString( 314 , 94      , "雇用済み" ,siro ) ;
					if(mouse_left==1){
					mouse_left=2;
					PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
					return 0;
					}
				}
				break;
			case 4:
			if(sinobi_lv[0]==0){
				DrawString( 315 , 65      , "忍者雇用" ,kuro ) ;
				DrawString( 314 , 64      , "忍者雇用" ,siro ) ;
				DrawString( 315 , 95      , "忍者を十部隊雇います" ,kuro ) ;
				DrawString( 314 , 94      , "忍者を十部隊雇います" ,siro ) ;
				kane_hen=-50000;
				if(mouse_left==1){
					if(money>=50000){
						money-=50000;
						sinobi_lv[0]=5;
						PlaySoundMem( se_no[7] , DX_PLAYTYPE_BACK ) ;
						}else{
						PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
						}
				mouse_left=2;
				return 0;
				}
			}else{
				DrawString( 315 , 65      , "忍者雇用" ,kuro ) ;
				DrawString( 314 , 64      , "忍者雇用" ,siro ) ;
				DrawString( 315 , 95      , "雇用済み" ,kuro ) ;
				DrawString( 314 , 94      , "雇用済み" ,siro ) ;
				if(mouse_left==1){
					mouse_left=2;
					PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
					return 0;
					}
				}
			break;
			}
		}
		ScreenFlip();
	}
	mouse=1;
	return 0;
}
int naisei_save(){
	mouse=1;
	while(1){
		J++;
		GetMousePoint( &mou_x, &mou_y );
		if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//マウス左押下
			if(mouse==0){
				PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
				break;
			}
		}else mouse=0;
		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
		if(mouse_left==0) mouse_left=1;
		}else mouse_left=0;

		DrawGraph( 0, 0, world_map, TRUE ) ;
		//内政コマンドの表示
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		DrawBox( 60 , 54 , 580 , 170 ,ao , TRUE ) ;
		DrawBox( 60 , 174 , 580 , 290 ,ao , TRUE ) ;
		DrawBox( 60 , 294 , 580 , 410 ,ao , TRUE ) ;
		if(mou_x>60 && mou_x<580 && mou_y>54 && mou_y <410) DrawBox( 60 , 54+(mou_y-54)/120*120 , 580 , 170+(mou_y-54)/120*120 ,GetColor(0,0,255) , TRUE ) ;
		SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;
		DrawStringToHandle( 65 , 65 , "SAVE1" ,kuro , f_a ) ;
		DrawStringToHandle( 64 , 64 , "SAVE1" ,siro , f_a ) ;
		DrawStringToHandle( 65 , 65+120 , "SAVE2" ,kuro , f_a ) ;
		DrawStringToHandle( 64 , 64+120 , "SAVE2" ,siro , f_a ) ;
		DrawStringToHandle( 65 , 65+240 , "SAVE3" ,kuro , f_a ) ;
		DrawStringToHandle( 64 , 64+240 , "SAVE3" ,siro , f_a ) ;

		for(i=0;i<3;i++)
		if(save_name[i][0]==NULL){
		DrawStringToHandle( 261 , 101+i*120 , "NO DATA" ,kuro , f_a ) ;
		DrawStringToHandle( 260 , 100+i*120 , "NO DATA" ,siro , f_a ) ;
		}else{
		if(save_time[i]<360000000 || save_time[i]>720000000){
		if(J/15%2==0)j=10;
		else if(J/15%4==1)j=9;
		else j=11;
		}else{
		if(J/3%4==0)j=1;
		else if(J/3%4==1)j=7;
		else if(J/3%4==2)j=4;
		else j=10;
		}
		if(save_time[i]<720000000)	DrawRotaGraph( 90 , 114+i*120 , 2 , 0 , unit_g[24][0][j] , TRUE ) ;
		else						DrawRotaGraph( 90 , 114+i*120 , 2 , 0 , unit_g[8][0][j] , TRUE ) ;
		DrawStringToHandle( 121 , 101+i*120 , save_name[i] ,kuro , f_a ) ;
		DrawStringToHandle( 120 , 100+i*120 , save_name[i] ,siro , f_a ) ;
		//save_syuu
		if(save_syuu[i]==0){
		DrawStringToHandle( 121 , 131+i*120 ,"おまけモード", kuro , f_a) ;
		DrawStringToHandle( 120 , 130+i*120 ,"おまけモード", siro , f_a) ;
		}else if(save_syuu[i]%100==0){
		DrawStringToHandle( 121 , 131+i*120 ,"クリアデータ", kuro , f_a) ;
		DrawStringToHandle( 120 , 130+i*120 ,"クリアデータ", siro , f_a) ;
		}else if(save_syuu[i]%2==1){
		DrawFormatStringToHandle( 121 , 131+i*120 , kuro , f_a,"%d月前期" ,((save_syuu[i]-1)/2)%12+1) ;
		DrawFormatStringToHandle( 120 , 130+i*120 , siro , f_a,"%d月前期" ,((save_syuu[i]-1)/2)%12+1) ;
		}else{
		DrawFormatStringToHandle( 121 , 131+i*120 , kuro , f_a,"%d月後期" ,((save_syuu[i]-1)/2)%12+1) ;
		DrawFormatStringToHandle( 120 , 130+i*120 , siro , f_a,"%d月後期" ,((save_syuu[i]-1)/2)%12+1) ;
		}
		DrawStringToHandle( 501 , 101+i*120 , ":" ,kuro , f_a ) ;
		DrawStringToHandle( 500 , 100+i*120 , ":" ,siro , f_a ) ;
		if(save_time[i]>36000000){
			DrawFormatStringToHandle( 471 , 101+i*120 ,kuro , f_a , "%d" , save_time[i]/36000000%10 ) ;
			DrawFormatStringToHandle( 470 , 100+i*120 ,siro , f_a , "%d" , save_time[i]/36000000%10 ) ;
		}
		DrawFormatStringToHandle( 486 , 101+i*120 ,kuro , f_a , "%d" , save_time[i]/3600000%10 ) ;
		DrawFormatStringToHandle( 485 , 100+i*120 ,siro , f_a , "%d" , save_time[i]/3600000%10 ) ;
		DrawFormatStringToHandle( 516 , 101+i*120 ,kuro , f_a , "%d" , save_time[i]/600000%6 ) ;
		DrawFormatStringToHandle( 515 , 100+i*120 ,siro , f_a , "%d" , save_time[i]/600000%6 ) ;
		DrawFormatStringToHandle( 531 , 101+i*120 ,kuro , f_a , "%d" , save_time[i]/60000%10 ) ;
		DrawFormatStringToHandle( 530 , 100+i*120 ,siro , f_a , "%d" , save_time[i]/60000%10 ) ;
		//save_time
		}
		ScreenFlip();
		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		if(mou_x>60 && mou_x<580 && mou_y>54 && mou_y <410 && mouse_left==1){
			mouse_left=2;
			A=(mou_y-54)/120;
			strcpy_s(save_name[A],hero_name);//セーブデータのラベル
			save_syuu[A]=hiduke;//セーブデータの週
			play_time+=GetNowCount()-time_count;
			time_count=GetNowCount();//時間経過計算用
			save_time[A]=play_time;//セーブデータのプレイ時間
			PlaySoundMem( se_no[5] , DX_PLAYTYPE_BACK ) ;
			switch(A){
			case 0:data_save();break;
			case 1: data_save();break;
			case 2: data_save();break;
			}
		}
	}
	mouse=1;
	return 0;
}
int naisei_load(){
	mouse=1;
	while(1){
		J++;
		GetMousePoint( &mou_x, &mou_y );
		if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//マウス左押下
			if(mouse==0){
				PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
				break;
			}
		}else mouse=0;
		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
		if(mouse_left==0) mouse_left=1;
		}else mouse_left=0;

		DrawGraph( 0, 0, world_map, TRUE ) ;
		//内政コマンドの表示
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		DrawBox( 60 , 54 , 580 , 170 ,ao , TRUE ) ;
		DrawBox( 60 , 174 , 580 , 290 ,ao , TRUE ) ;
		DrawBox( 60 , 294 , 580 , 410 ,ao , TRUE ) ;
		if(mou_x>60 && mou_x<580 && mou_y>54 && mou_y <410) DrawBox( 60 , 54+(mou_y-54)/120*120 , 580 , 170+(mou_y-54)/120*120 ,GetColor(0,0,255) , TRUE ) ;
		SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;
		DrawStringToHandle( 65 , 65 , "LOAD1" ,kuro , f_a ) ;
		DrawStringToHandle( 64 , 64 , "LOAD1" ,siro , f_a ) ;
		DrawStringToHandle( 65 , 65+120 , "LOAD2" ,kuro , f_a ) ;
		DrawStringToHandle( 64 , 64+120 , "LOAD2" ,siro , f_a ) ;
		DrawStringToHandle( 65 , 65+240 , "LOAD3" ,kuro , f_a ) ;
		DrawStringToHandle( 64 , 64+240 , "LOAD3" ,siro , f_a ) ;

		for(i=0;i<3;i++)
		if(save_name[i][0]==NULL){
		DrawStringToHandle( 261 , 101+i*120 , "NO DATA" ,kuro , f_a ) ;
		DrawStringToHandle( 260 , 100+i*120 , "NO DATA" ,siro , f_a ) ;
		}else{

		if(save_time[i]<360000000 || save_time[i]>720000000){
		if(J/15%2==0)j=10;
		else if(J/15%4==1)j=9;
		else j=11;
		}else{
		if(J/3%4==0)j=1;
		else if(J/3%4==1)j=7;
		else if(J/3%4==2)j=4;
		else j=10;
		}
		if(save_time[i]<720000000)	DrawRotaGraph( 90 , 114+i*120 , 2 , 0 , unit_g[24][0][j] , TRUE ) ;
		else						DrawRotaGraph( 90 , 114+i*120 , 2 , 0 , unit_g[8][0][j] , TRUE ) ;

		DrawStringToHandle( 121 , 101+i*120 , save_name[i] ,kuro , f_a ) ;
		DrawStringToHandle( 120 , 100+i*120 , save_name[i] ,siro , f_a ) ;
		//save_syuu
		if(save_syuu[i]==0){
		DrawStringToHandle( 121 , 131+i*120 ,"おまけモード", kuro , f_a) ;
		DrawStringToHandle( 120 , 130+i*120 ,"おまけモード", siro , f_a) ;
		}else if(save_syuu[i]>24){
		DrawStringToHandle( 121 , 131+i*120 ,"クリアデータ", kuro , f_a) ;
		DrawStringToHandle( 120 , 130+i*120 ,"クリアデータ", siro , f_a) ;
		}else if(save_syuu[i]%2==1){
		DrawFormatStringToHandle( 121 , 131+i*120 , kuro , f_a,"%d月前期" ,((save_syuu[i]-1)/2)%12+1) ;
		DrawFormatStringToHandle( 120 , 130+i*120 , siro , f_a,"%d月前期" ,((save_syuu[i]-1)/2)%12+1) ;
		}else{
		DrawFormatStringToHandle( 121 , 131+i*120 , kuro , f_a,"%d月後期" ,((save_syuu[i]-1)/2)%12+1) ;
		DrawFormatStringToHandle( 120 , 130+i*120 , siro , f_a,"%d月後期" ,((save_syuu[i]-1)/2)%12+1) ;
		}
		DrawStringToHandle( 501 , 101+i*120 , ":" ,kuro , f_a ) ;
		DrawStringToHandle( 500 , 100+i*120 , ":" ,siro , f_a ) ;
		if(save_time[i]>36000000){
			DrawFormatStringToHandle( 471 , 101+i*120 ,kuro , f_a , "%d" , save_time[i]/36000000%10 ) ;
			DrawFormatStringToHandle( 470 , 100+i*120 ,siro , f_a , "%d" , save_time[i]/36000000%10 ) ;
		}
		DrawFormatStringToHandle( 486 , 101+i*120 ,kuro , f_a , "%d" , save_time[i]/3600000%10 ) ;
		DrawFormatStringToHandle( 485 , 100+i*120 ,siro , f_a , "%d" , save_time[i]/3600000%10 ) ;
		DrawFormatStringToHandle( 516 , 101+i*120 ,kuro , f_a , "%d" , save_time[i]/600000%6 ) ;
		DrawFormatStringToHandle( 515 , 100+i*120 ,siro , f_a , "%d" , save_time[i]/600000%6 ) ;
		DrawFormatStringToHandle( 531 , 101+i*120 ,kuro , f_a , "%d" , save_time[i]/60000%10 ) ;
		DrawFormatStringToHandle( 530 , 100+i*120 ,siro , f_a , "%d" , save_time[i]/60000%10 ) ;
		}
		ScreenFlip();
		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		if(mou_x>60 && mou_x<580 && mou_y>54 && mou_y <410 && mouse_left==1){
			mouse_left=2;
			A=(mou_y-54)/120;
			time_count=GetNowCount();//時間経過計算用
			if(save_name[A][0]!=NULL){
			PlaySoundMem( se_no[5] , DX_PLAYTYPE_BACK ) ;
				switch(A){
				case 0:data_load();break;
				case 1:data_load();break;
				case 2:data_load();break;
				}
			break;
			}else{
			PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
			}
		}
	}
	mouse=1;
	return 0;
}
int jinkei_select(){
	mouse=1;
	while(1){
		GetMousePoint( &mou_x, &mou_y );
		if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//マウス左押下
		if(mouse==0) break;
		}else mouse=0;
		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
		if(mouse_left==0) mouse_left=1;
		}else mouse_left=0;
		DrawGraph( 0, 0, world_map, TRUE ) ;
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		DrawBox( 2 , 2 , 424 , 348 ,ao , TRUE ) ;
		DrawBox( 428 , 2 , 638 , 348 ,ao , TRUE ) ;
		DrawBox( 2 , 352 , 638 , 478 ,ao , TRUE ) ;
		SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;
		//色つきカーソル表示
		A=mou_x/213*10;
		A+=(mou_y-30)/30;
		if(mou_y<=30 || mou_y>=330)A=99;
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		if(mou_y>30 && mou_y<330 && A<20){
			DrawBox( A/10*213+5 , 25+A%10*30 , 206+A/10*213 , 55+A%10*30 ,ao , TRUE ) ;
		}
		SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;
		//名前等表示//51
		for(i=0;i<20;i++){
			xa=30+i/10*213;
			ya=30+i%10*30;
			MSN=i+1;
			if(get_jinkei[i]==0){MSN=0;siro=GetColor(125,125,125);}
			jinkei_name();
			siro=GetColor(255,255,255);
		}
		//説明表示
		if(A<20 && get_jinkei[A]!=0){
		MSN=A+1;
		jinkei_setumei();
		jinkei_narabi();
		}else{
		MSN=0;
		}

		if(mouse_left==1){
			mouse_left=2;
			if(MSN!=0){
			set_jinkei[hensei_no/10]=MSN;
			break;
			}
		}

		ScreenFlip();
		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
	}
	mouse=1;
	return 0;
}
int hyouhou_select(){

	mouse=1;
	while(1){
		GetMousePoint( &mou_x, &mou_y );
		if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//マウス左押下
		if(mouse==0) break;
		}else mouse=0;
		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
		if(mouse_left==0) mouse_left=1;
		}else mouse_left=0;
		DrawGraph( 0, 0, world_map, TRUE ) ;
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		DrawBox( 2 , 2 , 638 , 348 ,ao , TRUE ) ;
		DrawBox( 2 , 352 , 638 , 478 ,ao , TRUE ) ;
		SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;
		//色つきカーソル表示
		A=mou_x/128*10;
		A+=(mou_y-30)/30;
		if(mou_y<=30 || mou_y>=330)A=99;
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		if(mou_y>30 && mou_y<330){
			DrawBox( A/10*128+5 , 25+A%10*30 , 123+A/10*128 , 55+A%10*30 ,ao , TRUE ) ;
		}
		SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;
		//名前等表示//51
		for(j=0;j<5;j++){
			for(i=0;i<10;i++){
			xa=5+j*128;
			ya=30+i*30;
			if(j*10+i<19)siro=kougeki;
			else if(j*10+i<36)siro=bougyo ;
			else siro=kaihuku;
			switch (j*10+i){
			case 0:MSN=1;break;
			case 1:MSN=6;break;
			case 2:MSN=7;break;
			case 3:MSN=8;break;
			case 4:MSN=9;break;
			case 5:MSN=11;break;
			case 6:MSN=12;break;
			case 7:MSN=56;break;
			case 8:MSN=58;break;
			case 9:MSN=4;break;
			case 10:MSN=13;break;
			case 11:MSN=14;break;
			case 12:MSN=15;break;//22
			case 13:MSN=16;break;//23
			case 14:MSN=39;break;
			case 15:MSN=36;break;//33
			case 16:MSN=40;break;
			case 17:MSN=41;break;
			case 18:MSN=52;break;
			case 19:MSN=3;break;
			case 20:MSN=17;break;
			case 21:MSN=29;break;
			case 22:MSN=18;break;
			case 23:MSN=2;break;
			case 24:MSN=57;break;
			case 25:MSN=20;break;
			case 26:MSN=19;break;
			case 27:MSN=10;break;
			case 28:MSN=21;break;
			case 29:MSN=24;break;//28
			case 30:MSN=25;break;
			case 31:MSN=30;break;
			case 32:MSN=27;break;
			case 33:MSN=31;break;
			case 34:MSN=50;break;
			case 35:MSN=51;break;
			case 36:MSN=5;break;
			case 37:MSN=55;break;//26
			case 38:MSN=42;break;
			case 39:MSN=43;break;
			case 40:MSN=32;break;
			case 41:MSN=34;break;//38
			case 42:MSN=35;break;
			case 43:MSN=49;break;
			case 44:MSN=59;break;
			case 45:MSN=44;break;
			case 46:MSN=45;break;//53
			case 47:MSN=46;break;//54
			case 48:MSN=47;break;
			case 49:MSN=48;break;
			}
			for(c=0;c<9;c++){
			if(set_hyouhou[hensei_no/10][c]==MSN)siro=GetColor(255,255,255);
			}
			if(get_hyouhou[j*10+i]==0){MSN=0;siro=GetColor(125,125,125);}
			if(( set_jinkei[hensei_no/10]==1 ||  set_jinkei[hensei_no/10]==8 || set_jinkei[hensei_no/10]==9 || set_jinkei[hensei_no/10]==10 || set_jinkei[hensei_no/10]==12 || set_jinkei[j]==13 || set_jinkei[hensei_no/10]==14 || set_jinkei[hensei_no/10]==17 || set_jinkei[hensei_no/10]==19 )
			&&(  MSN==6 || MSN==7 || MSN==13 || MSN==14 || MSN==17 || MSN==21 || MSN==24 || MSN==29 || MSN==32 || MSN==36 || MSN==49))
			siro=hai;
			hyouhou_name();
			siro=GetColor(255,255,255);
			}
		}
		//説明表示
		switch (A){
			case 0:MSN=1;break;
			case 1:MSN=6;break;
			case 2:MSN=7;break;
			case 3:MSN=8;break;
			case 4:MSN=9;break;
			case 5:MSN=11;break;
			case 6:MSN=12;break;
			case 7:MSN=56;break;
			case 8:MSN=58;break;
			case 9:MSN=4;break;
			case 10:MSN=13;break;
			case 11:MSN=14;break;
			case 12:MSN=15;break;//22
			case 13:MSN=16;break;//23
			case 14:MSN=39;break;
			case 15:MSN=36;break;//33
			case 16:MSN=40;break;
			case 17:MSN=41;break;
			case 18:MSN=52;break;
			case 19:MSN=3;break;
			case 20:MSN=17;break;
			case 21:MSN=29;break;
			case 22:MSN=18;break;
			case 23:MSN=2;break;
			case 24:MSN=57;break;
			case 25:MSN=20;break;
			case 26:MSN=19;break;
			case 27:MSN=10;break;
			case 28:MSN=21;break;
			case 29:MSN=24;break;//28
			case 30:MSN=25;break;
			case 31:MSN=30;break;
			case 32:MSN=27;break;
			case 33:MSN=31;break;
			case 34:MSN=50;break;
			case 35:MSN=51;break;
			case 36:MSN=5;break;
			case 37:MSN=55;break;//26
			case 38:MSN=42;break;
			case 39:MSN=43;break;
			case 40:MSN=32;break;
			case 41:MSN=34;break;//38
			case 42:MSN=35;break;
			case 43:MSN=49;break;
			case 44:MSN=59;break;
			case 45:MSN=44;break;
			case 46:MSN=45;break;//53
			case 47:MSN=46;break;//54
			case 48:MSN=47;break;
			case 49:MSN=48;break;
		}
		if(get_hyouhou[A]==0)MSN=0;
		if(MSN!=0){
		hyouhou_setumei();
		}

		if(mouse_left==1){
			mouse_left=2;
			for(c=0;c<9;c++)
			if(MSN==set_hyouhou[hensei_no/10][c]) set_hyouhou[hensei_no/10][c]=0;
			if(MSN!=0){
			set_hyouhou[hensei_no/10][hensei_no%10-1]=MSN;
			break;
			}
		}

		ScreenFlip();
		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
	}
	mouse=1;
	return 0;
}
int jinkei_name(){
		switch (MSN){
		case 0:strcpy_s(serihu, "―――――");break;
		case 1:strcpy_s(serihu, "縦列陣形");break;
		case 2:strcpy_s(serihu, "防壁の波陣");break;
		case 3:strcpy_s(serihu, "攻撃の波陣");break;
		case 4:strcpy_s(serihu, "上翼突破の陣");break;
		case 5:strcpy_s(serihu, "下翼突破の陣");break;
		case 6:strcpy_s(serihu, "中央突破の陣");break;
		case 7:strcpy_s(serihu, "三波状陣");break;
		case 8:strcpy_s(serihu, "疾風陣");break;
		case 9:strcpy_s(serihu, "背水の陣");break;
		case 10:strcpy_s(serihu, "強撃陣");break;
		case 11:strcpy_s(serihu, "波状盾の陣");break;
		case 12:strcpy_s(serihu, "虎穴陣");break;
		case 13:strcpy_s(serihu, "阿修羅道");break;
		case 14:strcpy_s(serihu, "十字陣");break;
		case 15:strcpy_s(serihu, "方陣");break;
		case 16:strcpy_s(serihu, "三点突破の陣");break;
		case 17:strcpy_s(serihu, "横列陣形");break;
		case 18:strcpy_s(serihu, "魚鱗の陣");break;
		case 19:strcpy_s(serihu, "竜渦の陣");break;
		case 20:strcpy_s(serihu, "天の翼");break;
		case 21:strcpy_s(serihu, "冥の翼");break;
		}
		DrawString( xa+1 , ya+1 , serihu , kuro );
		DrawString( xa   , ya   , serihu , siro );
	return 0;
}
int hyouhou_name(){
		B=0;
		switch (MSN){
		case 0:strcpy_s(serihu, "―――――");break;
		case 1:strcpy_s(serihu, "全軍前進");break;
		case 2:strcpy_s(serihu, "全軍後退");break;
		case 3:strcpy_s(serihu, "全軍防御");break;
		case 4:strcpy_s(serihu, "全軍突撃");B=1;break;
		case 5:strcpy_s(serihu, "全軍退却");break;
		case 6:strcpy_s(serihu, "前列前進");break;
		case 7:strcpy_s(serihu, "後列前進");break;
		case 8:strcpy_s(serihu, "速攻前進");B=4;break;
		case 9:strcpy_s(serihu, "強撃前進");B=4;break;
		case 10:strcpy_s(serihu, "後退攻撃");B=3;break;
		case 11:strcpy_s(serihu, "上翼攻撃");B=4;break;
		case 12:strcpy_s(serihu, "下翼攻撃");B=4;break;
		case 13:strcpy_s(serihu, "前列突撃");B=1;break;
		case 14:strcpy_s(serihu, "後列突撃");B=1;break;
		case 15:strcpy_s(serihu, "上翼突撃");B=1;break;
		case 16:strcpy_s(serihu, "下翼突撃");B=1;break;
		case 17:strcpy_s(serihu, "前列防御");break;
		case 18:strcpy_s(serihu, "全軍防御･強");B=1;break;
		case 19:strcpy_s(serihu, "後退防御");B=3;break;
		case 20:strcpy_s(serihu, "速攻後退");B=3;break;
		case 21:strcpy_s(serihu, "前列交代");break;
		case 22:strcpy_s(serihu, "※交代用１");break;
		case 23:strcpy_s(serihu, "※交代用２");break;
		case 24:strcpy_s(serihu, "速攻交代");B=3;break;
		case 25:strcpy_s(serihu, "統率回復･弱");B=3;break;
		case 26:strcpy_s(serihu, "※統率用");break;



		case 27:strcpy_s(serihu, "陣形回復");B=3;break;
		case 28:strcpy_s(serihu, "※陣形回復用");break;
		case 29:strcpy_s(serihu, "前列死守");B=2;break;
		case 30:strcpy_s(serihu, "統率回復･強");B=1;break;
		case 31:strcpy_s(serihu, "陣形回復･速");B=2;break;
		case 32:strcpy_s(serihu, "死んだフリ");B=1;break;
		case 33:strcpy_s(serihu, "※死にフリ用");break;
		case 34:strcpy_s(serihu, "雨ごい");B=1;break;
		case 35:strcpy_s(serihu, "冬将軍");B=1;break;
		case 36:strcpy_s(serihu, "分断作戦");B=1;break;
		case 37:strcpy_s(serihu, "投石部隊");B=1;break;
		case 38:strcpy_s(serihu, "※投石用");break;
		case 39:strcpy_s(serihu, "指揮官突撃");B=1;break;
		case 40:strcpy_s(serihu, "爆裂部隊");B=1;break;
		case 41:strcpy_s(serihu, "火攻め");B=1;break;
		case 42:strcpy_s(serihu, "おとり作戦");B=1;break;
		case 43:strcpy_s(serihu, "偽りの退却");B=1;break;
		case 44:strcpy_s(serihu, "情報操作L1");B=1;break;
		case 45:strcpy_s(serihu, "情報操作L2");B=1;break;
		case 46:strcpy_s(serihu, "情報操作L3");B=1;break;
		case 47:strcpy_s(serihu, "情報操作L4");B=1;break;
		case 48:strcpy_s(serihu, "情報操作L5");B=1;break;
		case 49:strcpy_s(serihu, "穴掘り作戦");B=1;break;
		case 50:strcpy_s(serihu, "防柵作戦");B=1;break;
		case 51:strcpy_s(serihu, "水際作戦");B=1;break;
		case 52:strcpy_s(serihu, "背火の計");B=1;break;



		case 53:strcpy_s(serihu, "投石攻撃西");B=1;break;
		case 54:strcpy_s(serihu, "投石攻撃東");B=1;break;
		case 55:strcpy_s(serihu, "速攻退却");B=4;break;
		case 56:strcpy_s(serihu, "全軍前進･強");B=1;break;
		case 57:strcpy_s(serihu, "全軍休息");B=4;break;
		case 58:strcpy_s(serihu, "戦場の風");B=1;break;
		case 59:strcpy_s(serihu, "地割れ作戦");B=1;break;
		case 60:strcpy_s(serihu, "ｽﾗｲﾑﾌｨｰﾊﾞｰ");B=1;break;
		case 61:strcpy_s(serihu, "信じる者達");B=2;break;
		case 62:strcpy_s(serihu, "生命回復");B=1;break;
		case 63:strcpy_s(serihu, "ナラクの風");B=1;break;
		case 64:strcpy_s(serihu, "大熱波");B=2;break;
		case 65:strcpy_s(serihu, "大あまごい");B=2;break;
		case 66:strcpy_s(serihu, "超高速デルタ");B=2;break;
		case 67:strcpy_s(serihu, "大地震");B=2;break;
		}
		DrawString( xa+1 , ya+1 , serihu , kuro );
		DrawString( xa   , ya   , serihu , siro );
	return 0;
}
int jinkei_setumei(){
		switch (MSN){
		case 0:
		strcpy_s(serihu, "――――――");
		strcpy_s(setu_1, "");
		strcpy_s(setu_2, "");break;
		case 1:
		strcpy_s(serihu, "縦列陣形");
		strcpy_s(setu_1, "戦力を一列に並べた基本的な陣形。");
		strcpy_s(setu_2, "全軍：踏ん張り＋");break;
		case 2:
		strcpy_s(serihu, "防壁の波陣");
		strcpy_s(setu_1, "前列が壁となり、後列を温存します。");
		strcpy_s(setu_2, "前列：防御力＋");break;
		case 3:
		strcpy_s(serihu, "攻撃の波陣");
		strcpy_s(setu_1, "前列が攻撃し、後列を温存します。");
		strcpy_s(setu_2, "前列：攻撃力＋");break;
		case 4:
		strcpy_s(serihu, "上翼突破の陣");
		strcpy_s(setu_1, "部隊を上翼に集中し突破を狙います。");
		strcpy_s(setu_2, "後列：踏ん張り＋");break;
		case 5:
		strcpy_s(serihu, "下翼突破の陣");
		strcpy_s(setu_1, "部隊を下翼に集中し突破を狙います。");
		strcpy_s(setu_2, "後列：踏ん張り＋");break;
		case 6:
		strcpy_s(serihu, "中央突破の陣");
		strcpy_s(setu_1, "部隊を中央に集中し突破を狙います。");
		strcpy_s(setu_2, "前列：踏ん張り＋");break;
		case 7:
		strcpy_s(serihu, "三波状陣");
		strcpy_s(setu_1, "部隊を三列に配置します。");
		strcpy_s(setu_2, "最前列：防御力＋　中前列：攻撃力＋　後列：移動力＋");break;
		case 8:
		strcpy_s(serihu, "疾風陣");
		strcpy_s(setu_1, "機動性を重視した陣形です。");
		strcpy_s(setu_2, "全軍：移動力＋");break;
		case 9:
		strcpy_s(serihu, "背水の陣");
		strcpy_s(setu_1, "戦場の死線ギリギリに部隊を配置します。");
		strcpy_s(setu_2, "全軍：攻撃力＋＋　移動力−−");break;
		case 10:
		strcpy_s(serihu, "強撃陣");
		strcpy_s(setu_1, "攻撃力を高めじりじりと進みます。");
		strcpy_s(setu_2, "全軍：攻撃力＋　移動力−");break;
		case 11:
		strcpy_s(serihu, "波状盾の陣");
		strcpy_s(setu_1, "最後列の指揮官を三層の壁で守ります。");
		strcpy_s(setu_2, "前列：防御力＋　指揮官：防御力＋＋");break;
		case 12:
		strcpy_s(serihu, "虎穴陣");
		strcpy_s(setu_1, "守りを第一に考えた陣形です。");
		strcpy_s(setu_2, "全軍：防御力＋　移動力−");break;
		case 13:
		strcpy_s(serihu, "阿修羅道");
		strcpy_s(setu_1, "指揮官が阿修羅の力を得ます。");
		strcpy_s(setu_2, "指揮官：全能力＋＋");break;
		case 14:
		strcpy_s(serihu, "十字陣");
		strcpy_s(setu_1, "十字に軍団を配置します。");
		strcpy_s(setu_2, "全軍：生命力＋");break;
		case 15:
		strcpy_s(serihu, "方陣");
		strcpy_s(setu_1, "全方向からの攻撃にそなえます。");
		strcpy_s(setu_2, "全軍：体力＋");break;
		case 16:
		strcpy_s(serihu, "三点突破の陣");
		strcpy_s(setu_1, "三箇所に部隊を集中し突破を狙います。");
		strcpy_s(setu_2, "後列：踏ん張り＋");break;
		case 17:
		strcpy_s(serihu, "横列陣形");
		strcpy_s(setu_1, "戦力を一列に並べた、変則的な陣形。");
		strcpy_s(setu_2, "全軍：踏ん張り＋");break;
		case 18:
		strcpy_s(serihu, "魚鱗の陣");
		strcpy_s(setu_1, "魚の様な形に部隊を配置します。");
		strcpy_s(setu_2, "全軍：雨に強くなる");break;
		case 19:
		strcpy_s(serihu, "竜渦の陣");
		strcpy_s(setu_1, "渦をまいたような陣形。");
		strcpy_s(setu_2, "全軍：防御力＋　踏ん張り＋　移動力＋");break;
		case 20:
		strcpy_s(serihu, "天の翼");
		strcpy_s(setu_1, "最強の陣形。");
		strcpy_s(setu_2, "全軍：防御力＋＋　移動力＋");break;
		case 21:
		strcpy_s(serihu, "冥の翼");
		strcpy_s(setu_1, "仕様です。");
		strcpy_s(setu_2, "全軍：攻撃力＋　踏ん張り＋");break;
		}

		DrawStringToHandle( 11 , 360+1 , serihu ,kuro , f_a ) ;
		DrawStringToHandle( 10 , 360 , serihu ,siro , f_a ) ;
		DrawString( 11 , 400+1 , setu_1 , kuro );
		DrawString( 10   , 400   , setu_1 , siro );
		DrawString( 11 , 435+1 , setu_2 , kuro );
		DrawString( 10   , 435   , setu_2 , siro );

	return 0;
}
int hyouhou_setumei(){
		switch (MSN){
		case 0:
		strcpy_s(serihu, "――――――");
		strcpy_s(setu_1, "");
		strcpy_s(setu_2, "");break;
		case 1:
		strcpy_s(serihu, "全軍前進");
		strcpy_s(setu_1, "前進して攻撃します。");
		strcpy_s(setu_2, "全軍：弱攻撃／モラル低下中");break;
		case 2:
		strcpy_s(serihu, "全軍後退");
		strcpy_s(setu_1, "後退してモラルを回復する。");
		strcpy_s(setu_2, "全軍：無防備／モラル回復大");
		break;
		case 3:
		strcpy_s(serihu, "全軍防御");
		strcpy_s(setu_1, "動きを止めて防御します。");
		strcpy_s(setu_2, "全軍：弱防御／モラル低下小");break;
		case 4:
		strcpy_s(serihu, "全軍突撃");
		strcpy_s(setu_1, "モラルを回復して突撃、敵軍のモラルを激減させます。");
		strcpy_s(setu_2, "全軍：中突撃／モラル低下大");break;
		case 5:
		strcpy_s(serihu, "全軍退却");
		strcpy_s(setu_1, "戦場から退却し、戦闘を終了させます。");
		strcpy_s(setu_2, "全軍：退却");break;
		case 6:
		strcpy_s(serihu, "前列前進");
		strcpy_s(setu_1, "前列部隊が前進します。");
		strcpy_s(setu_2, "前列：中攻撃／モラル低下中　後列：弱防御／モラル低下小");break;
		case 7:
		strcpy_s(serihu, "後列前進");
		strcpy_s(setu_1, "後列部隊が前進します。");
		strcpy_s(setu_2, "前列：弱防御／モラル低下小　後列：中攻撃／モラル低下中");break;
		case 8:
		strcpy_s(serihu, "速攻前進");
		strcpy_s(setu_1, "素早く前進します。");
		strcpy_s(setu_2, "前列：中攻撃／モラル低下中　後列：無防備／モラル回復大");break;
		case 9:
		strcpy_s(serihu, "強撃前進");
		strcpy_s(setu_1, "攻撃力を上げ、じりじり前進します。");
		strcpy_s(setu_2, "前列：強攻撃／モラル低下中　後列：無防備／モラル回復大");break;
		case 10:
		strcpy_s(serihu, "後退攻撃");
		strcpy_s(setu_1, "攻撃しながら後退します。");
		strcpy_s(setu_2, "全軍：中攻撃／モラル回復小");break;
		case 11:
		strcpy_s(serihu, "上翼攻撃");
		strcpy_s(setu_1, "上翼の部隊が攻撃します。");
		strcpy_s(setu_2, "上翼：強攻撃／モラル低下中　下翼：中防御／モラル低下小");break;
		case 12:
		strcpy_s(serihu, "下翼攻撃");
		strcpy_s(setu_1, "下翼の部隊が攻撃します。");
		strcpy_s(setu_2, "下翼：強攻撃／モラル低下中　上翼：中防御／モラル低下小");break;
		case 13:
		strcpy_s(serihu, "前列突撃");
		strcpy_s(setu_1, "前列部隊が突撃、敵軍のモラルを低下させます。");
		strcpy_s(setu_2, "前列：中突撃／モラル低下大　後列：弱防御／モラル低下小");break;
		case 14:
		strcpy_s(serihu, "後列突撃");
		strcpy_s(setu_1, "後列部隊が突撃、敵軍のモラルを低下させます。");
		strcpy_s(setu_2, "前列：弱防御／モラル低下小　後列：中突撃／モラル低下大");break;
		case 15:
		strcpy_s(serihu, "上翼突撃");
		strcpy_s(setu_1, "上翼部隊が突撃、敵軍のモラルを低下させます。");
		strcpy_s(setu_2, "上翼：強突撃／モラル低下大　下翼：中防御／モラル低下小");break;
		case 16:
		strcpy_s(serihu, "下翼突撃");
		strcpy_s(setu_1, "下翼部隊が突撃、敵軍のモラルを低下させます。");
		strcpy_s(setu_2, "下翼：強突撃／モラル低下大　上翼：中防御／モラル低下小");break;
		case 17:
		strcpy_s(serihu, "前列防御");
		strcpy_s(setu_1, "前列部隊が防御します。");
		strcpy_s(setu_2, "前列：中防御／モラル低下小　後列：無防備／モラル回復大");break;
		case 18:
		strcpy_s(serihu, "全軍防御･強");
		strcpy_s(setu_1, "動きを止めて強防御します。");
		strcpy_s(setu_2, "全軍：強防御／モラル低下小");break;
		case 19:
		strcpy_s(serihu, "後退防御");
		strcpy_s(setu_1, "防御しながら後退します。");
		strcpy_s(setu_2, "全軍：中防御／モラル回復小");break;
		case 20:
		strcpy_s(serihu, "速攻後退");
		strcpy_s(setu_1, "素早く後退します。");
		strcpy_s(setu_2, "全軍：無防備／モラル回復大");break;
		case 21:
		strcpy_s(serihu, "前列交代");
		strcpy_s(setu_1, "前列と後列が入れ替わります。");
		strcpy_s(setu_2, "");break;
		case 22:
		strcpy_s(serihu, "※交代用１");
		strcpy_s(setu_1, "");
		strcpy_s(setu_2, "");break;
		case 23:
		strcpy_s(serihu, "※交代用２");
		strcpy_s(setu_1, "");
		strcpy_s(setu_2, "");break;
		case 24:
		strcpy_s(serihu, "速攻交代");
		strcpy_s(setu_1, "前列と後列が素早く入れ替わります。");
		strcpy_s(setu_2, "");break;
		case 25:
		strcpy_s(serihu, "統率回復･弱");
		strcpy_s(setu_1, "一定時間後モラルと疲労を回復します。");
		strcpy_s(setu_2, "");break;
		case 26:
		strcpy_s(serihu, "※統率用");
		strcpy_s(setu_1, "");
		strcpy_s(setu_2, "");break;
		case 27:
		strcpy_s(serihu, "陣形回復");
		strcpy_s(setu_1, "陣形を回復し、モラルを完全に回復します。");
		strcpy_s(setu_2, "全軍：無防備／モラル回復小");break;
		case 28:
		strcpy_s(serihu, "※陣形回復用");
		strcpy_s(setu_1, "");
		strcpy_s(setu_2, "");break;
		case 29:
		strcpy_s(serihu, "前列死守");
		strcpy_s(setu_1, "前列部隊が命を削って防御します。");
		strcpy_s(setu_2, "前列：最強防御／モラル低下小　後列：無防備／モラル回復大");break;
		case 30:
		strcpy_s(serihu, "統率回復･強");
		strcpy_s(setu_1, "一定時間後モラルと疲労を大きく回復します。");
		strcpy_s(setu_2, "");break;
		case 31:
		strcpy_s(serihu, "陣形回復･速");
		strcpy_s(setu_1, "陣形を素早く回復し、モラルを完全に回復します。");
		strcpy_s(setu_2, "全軍：無防備／モラル回復小");break;
		case 32:
		strcpy_s(serihu, "死んだふり");
		strcpy_s(setu_1, "死んだふりをして敵軍を欺きます。");
		strcpy_s(setu_2, "");break;
		case 33:
		strcpy_s(serihu, "※死にフリ用");
		strcpy_s(setu_1, "");
		strcpy_s(setu_2, "");break;
		case 34:
		strcpy_s(serihu, "雨ごい");
		strcpy_s(setu_1, "嵐をよびます、両軍のモラルが低下します。");
		strcpy_s(setu_2, "");break;
		case 35:
		strcpy_s(serihu, "冬将軍");
		strcpy_s(setu_1, "吹雪をよびます、両軍のモラルと機動力が低下します。");
		strcpy_s(setu_2, "");break;
		case 36:
		strcpy_s(serihu, "分断作戦");
		strcpy_s(setu_1, "敵陣の中央に飛び込み、敵軍を分断します。");
		strcpy_s(setu_2, "");break;
		case 37:
		strcpy_s(serihu, "投石部隊");
		strcpy_s(setu_1, "投石で一定時間後、中央に攻撃します。");
		strcpy_s(setu_2, "");break;
		case 38:
		strcpy_s(serihu, "※投石用");
		strcpy_s(setu_1, "");
		strcpy_s(setu_2, "");break;
		case 39:
		strcpy_s(serihu, "指揮官突撃");
		strcpy_s(setu_1, "指揮官が突撃し、全軍のモラルを回復します。");
		strcpy_s(setu_2, "");break;
		case 40:
		strcpy_s(serihu, "爆裂部隊");
		strcpy_s(setu_1, "少数部隊が敵陣に飛び込み、自爆します。");
		strcpy_s(setu_2, "");break;
		case 41:
		strcpy_s(serihu, "火攻め");
		strcpy_s(setu_1, "火を放ちます。");
		strcpy_s(setu_2, "");break;
		case 42:
		strcpy_s(serihu, "おとり作戦");
		strcpy_s(setu_1, "指揮官が敵を怒らせ、敵の判断力を奪います。");
		strcpy_s(setu_2, "");break;
		case 43:
		strcpy_s(serihu, "偽りの退却");
		strcpy_s(setu_1, "逃げたふりをして敵のモラルを低下させます。");
		strcpy_s(setu_2, "");break;
		case 44:
		strcpy_s(serihu, "情報操作L1");
		strcpy_s(setu_1, "敵軍を混乱させ、命令を全軍前進にします。");
		strcpy_s(setu_2, "");break;
		case 45:
		strcpy_s(serihu, "情報操作L2");
		strcpy_s(setu_1, "敵軍を混乱させ、命令を全軍防御にします。");
		strcpy_s(setu_2, "");break;
		case 46:
		strcpy_s(serihu, "情報操作L3");
		strcpy_s(setu_1, "敵軍を混乱させ、命令を全軍休息にします。");
		strcpy_s(setu_2, "");break;
		case 47:
		strcpy_s(serihu, "情報操作L4");
		strcpy_s(setu_1, "敵軍を混乱させ、命令を全軍後退にします。");
		strcpy_s(setu_2, "");break;
		case 48:
		strcpy_s(serihu, "情報操作L5");
		strcpy_s(setu_1, "敵軍を混乱させ、命令を出させなくします。");
		strcpy_s(setu_2, "");break;
		case 49:
		strcpy_s(serihu, "穴掘り作戦");
		strcpy_s(setu_1, "後列部隊が落とし穴を掘ります。");
		strcpy_s(setu_2, "");break;
		case 50:
		strcpy_s(serihu, "防柵作戦");
		strcpy_s(setu_1, "柵を設置し、攻撃を防ぎます。");
		strcpy_s(setu_2, "");break;
		case 51:
		strcpy_s(serihu, "水際作戦");
		strcpy_s(setu_1, "最終ラインに柵を設置し、突破を防ぎます。");
		strcpy_s(setu_2, "");break;
		case 52:
		strcpy_s(serihu, "背火の計");
		strcpy_s(setu_1, "部隊最後尾に火を放ち、必死で攻撃します。");
		strcpy_s(setu_2, "");break;
		case 53:
		strcpy_s(serihu, "投石攻撃西");
		strcpy_s(setu_1, "");
		strcpy_s(setu_2, "");break;
		case 54:
		strcpy_s(serihu, "投石攻撃東");
		strcpy_s(setu_1, "");
		strcpy_s(setu_2, "");break;
		case 55:
		strcpy_s(serihu, "速攻退却");
		strcpy_s(setu_1, "素早く戦場から退却します。");
		strcpy_s(setu_2, "");break;
		case 56:
		strcpy_s(serihu, "全軍前進･強");
		strcpy_s(setu_1, "前進して攻撃します。");
		strcpy_s(setu_2, "全軍：強攻撃／モラル低下中");break;
		case 57:
		strcpy_s(serihu, "全軍休息");
		strcpy_s(setu_1, "動きを止めて休み、モラルを回復します。");
		strcpy_s(setu_2, "全軍：無防備／モラル回復大");break;
		case 58:
		strcpy_s(serihu, "戦場の風");
		strcpy_s(setu_1, "風を呼び、高速で前進します。");
		strcpy_s(setu_2, "");break;
		case 59:
		strcpy_s(serihu, "地割れ作戦");
		strcpy_s(setu_1, "前列部隊が落とし穴を掘ります。");
		strcpy_s(setu_2, "");break;
		case 60:
		strcpy_s(serihu, "ｽﾗｲﾑﾌｨｰﾊﾞｰ");
		strcpy_s(setu_1, "全部隊を復活させ能力を上げます");
		strcpy_s(setu_2, "");break;
		case 61:
		strcpy_s(serihu, "信じる者達");
		strcpy_s(setu_1, "敵陣に突っ込み自爆します");
		strcpy_s(setu_2, "");break;
		case 62:
		strcpy_s(serihu, "生命回復");
		strcpy_s(setu_1, "全軍の生命力とモラルと疲労を回復します");
		strcpy_s(setu_2, "");break;
		case 63:
		strcpy_s(serihu, "ナラクの風");
		strcpy_s(setu_1, "突撃の強化版");
		strcpy_s(setu_2, "");break;
		case 64:
		strcpy_s(serihu, "大熱波");
		strcpy_s(setu_1, "火攻めの強化版");
		strcpy_s(setu_2, "");break;
		case 65:
		strcpy_s(serihu, "大あまごい");
		strcpy_s(setu_1, "あまごいの強化版");
		strcpy_s(setu_2, "");break;
		case 66:
		strcpy_s(serihu, "超高速デルタ");
		strcpy_s(setu_1, "戦場の風の強化版");
		strcpy_s(setu_2, "");break;
		case 67:
		strcpy_s(serihu, "大地震");
		strcpy_s(setu_1, "地割れ作戦の強化版");
		strcpy_s(setu_2, "");break;
		}

		DrawStringToHandle( 11 , 360+1 , serihu ,kuro , f_a ) ;
		DrawStringToHandle( 10 , 360 , serihu ,siro , f_a ) ;
		DrawString( 11 , 400+1 , setu_1 , kuro );
		DrawString( 10   , 400   , setu_1 , siro );
		DrawString( 11 , 435+1 , setu_2 , kuro );
		DrawString( 10   , 435   , setu_2 , siro );
	return 0;
}
int jinkei_narabi(){
		switch (MSN){
		case 1://縦列陣形//
		for(i=0;i<17;i++)
		if(i==8)DrawRotaGraph( 530, 178,2,0,tairetu[0], TRUE ) ;
		else DrawRotaGraph( 530, 50+i*16,2,0,tairetu[1], TRUE ) ;
		break;
		case 2://防壁の波陣//
		for(i=0;i<9;i++)
		DrawRotaGraph( 460+i*6, 50+i*16,2,0,tairetu[1], TRUE ) ;
		for(i=0;i<8;i++)
		DrawRotaGraph( 508-i*6, 194+i*16,2,0,tairetu[4], TRUE ) ;
		for(i=0;i<9;i++)
		if(i!=3)DrawRotaGraph( 560+i*6, 50+i*16,2,0,tairetu[2], TRUE ) ;
		else    DrawRotaGraph( 560+i*6, 50+i*16,2,0,tairetu[0], TRUE ) ;
		for(i=0;i<8;i++)
		DrawRotaGraph( 608-i*6, 194+i*16,2,0,tairetu[5], TRUE ) ;
		break;
		case 3://攻撃の波陣//
		for(i=0;i<9;i++)
		DrawRotaGraph( 508-i*6, 50+i*16,2,0,tairetu[4], TRUE ) ;
		for(i=0;i<8;i++)
		DrawRotaGraph( 460+i*6, 194+i*16,2,0,tairetu[1], TRUE ) ;
		for(i=0;i<9;i++)
		DrawRotaGraph( 608-i*6, 50+i*16,2,0,tairetu[5], TRUE ) ;
		for(i=0;i<8;i++)
		if(i!=4)DrawRotaGraph( 560+i*6, 194+i*16,2,0,tairetu[2], TRUE ) ;
		else    DrawRotaGraph( 560+i*6, 194+i*16,2,0,tairetu[0], TRUE ) ;
		break;
		case 4://上翼突破の陣//下三分の位置
		for(i=0;i<9;i++)
		DrawRotaGraph( 460+i*6, 50+i*16,2,0,tairetu[1], TRUE ) ;
		for(i=0;i<8;i++)
		if(i==5)DrawRotaGraph( 508-i*6, 194+i*16,2,0,tairetu[3], TRUE ) ;
		else	DrawRotaGraph( 508-i*6, 194+i*16,2,0,tairetu[4], TRUE ) ;
		for(j=0;j<3;j++)for(i=0;i<4;i++)
		DrawRotaGraph( 516+i*6+j*35, 66+i*16,2,0,tairetu[2], TRUE ) ;
		break;
		case 5://下翼突破の陣//上三分の位置
		for(i=0;i<9;i++)
		if(i==2)DrawRotaGraph( 460+i*6, 50+i*16,2,0,tairetu[0], TRUE ) ;
		else DrawRotaGraph( 460+i*6, 50+i*16,2,0,tairetu[1], TRUE ) ;
		for(i=0;i<8;i++)
		DrawRotaGraph( 508-i*6, 194+i*16,2,0,tairetu[4], TRUE ) ;
		for(j=0;j<3;j++)for(i=0;i<4;i++)
		DrawRotaGraph( 540-i*6+j*35, 242+i*16,2,0,tairetu[5], TRUE ) ;
		break;
		case 6://中央突破の陣//下から５分の２
		for(i=0;i<9;i++)
		DrawRotaGraph( 560+i*6, 50+i*16,2,0,tairetu[2], TRUE ) ;
		for(i=0;i<8;i++)
		if(i==5)	DrawRotaGraph( 608-i*6, 194+i*16,2,0,tairetu[3], TRUE ) ;
		else		DrawRotaGraph( 608-i*6, 194+i*16,2,0,tairetu[5], TRUE ) ;
		for(i=0;i<4;i++)
		DrawRotaGraph( 460+72-i*24, 130+i*16,2,0,tairetu[4], TRUE ) ;
		for(i=0;i<4;i++)
		DrawRotaGraph( 460+i*24, 194+i*16,2,0,tairetu[1], TRUE ) ;
		break;
		case 7://三波状陣//上から１０分の１
		for(i=0;i<17;i++)
		DrawRotaGraph( 480, 50+i*16,2,0,tairetu[1], TRUE ) ;
		for(i=0;i<17;i++)
		DrawRotaGraph( 530, 50+i*16,2,0,tairetu[2], TRUE ) ;
		for(i=0;i<17;i++)
		if(i==1)DrawRotaGraph( 580, 50+i*16,2,0,tairetu[0], TRUE ) ;
		else	DrawRotaGraph( 580, 50+i*16,2,0,tairetu[2], TRUE ) ;
		break;
		case 8://疾風陣//上から５分の２
		for(i=0;i<9;i++)
		if(i==2)DrawRotaGraph( 600-i*16, 50+i*16,2,0,tairetu[3], TRUE ) ;
		else	DrawRotaGraph( 600-i*16, 50+i*16,2,0,tairetu[4], TRUE ) ;
		for(i=0;i<8;i++)
		DrawRotaGraph( 472+i*16, 194+i*16,2,0,tairetu[1], TRUE ) ;
		break;
		case 9://背水の陣//上から３分の１
		for(i=0;i<17;i++)
		if(i==6)DrawRotaGraph( 590, 50+i*16,2,0,tairetu[0], TRUE ) ;
		else DrawRotaGraph( 590, 50+i*16,2,0,tairetu[1], TRUE ) ;
		for(j=0;j<3;j++)for(i=0;i<3;i++)
		DrawRotaGraph( 480+i*30, 74-i*10+j*40,2,0,tairetu[4], TRUE ) ;
		for(j=0;j<3;j++)for(i=0;i<3;i++)
		DrawRotaGraph( 480+i*30, 222-i*10+j*40,2,0,tairetu[4], TRUE ) ;
		break;
		case 10://強撃陣//
		for(i=0;i<17;i++)
		DrawRotaGraph( 530, 50+i*16,2,0,tairetu[1], TRUE ) ;
		DrawRotaGraph( 580, 50+8*16,2,0,tairetu[0], TRUE ) ;
		break;
		case 11://波状盾の陣//
		for(i=0;i<9;i++)
		DrawRotaGraph( 460+i*6, 50+i*16,2,0,tairetu[1], TRUE ) ;
		for(i=0;i<8;i++)
		DrawRotaGraph( 508-i*6, 194+i*16,2,0,tairetu[4], TRUE ) ;
		for(i=1;i<9;i++)
		DrawRotaGraph( 510+i*6, 50+i*16,2,0,tairetu[2], TRUE ) ;
		for(i=0;i<7;i++)
		DrawRotaGraph( 558-i*6, 194+i*16,2,0,tairetu[5], TRUE ) ;
		for(i=7;i<9;i++)
		DrawRotaGraph( 648-i*6, 50+i*16,2,0,tairetu[5], TRUE ) ;
		DrawRotaGraph( 660-8*6, 58+8*16,2,0,tairetu[3], TRUE ) ;
		for(i=0;i<2;i++)
		DrawRotaGraph( 600+i*6, 194+i*16,2,0,tairetu[2], TRUE ) ;
		break;
		case 12://虎穴陣//
		for(i=0;i<9;i++)
		DrawRotaGraph( 472+i*16, 50+i*16,2,0,tairetu[1], TRUE ) ;
		for(i=0;i<8;i++)
		if(i==5)DrawRotaGraph( 600-i*16, 194+i*16,2,0,tairetu[3], TRUE ) ;
		else DrawRotaGraph( 600-i*16, 194+i*16,2,0,tairetu[4], TRUE ) ;
		break;
		case 13://阿修羅の道//
			for(j=0;j<3;j++){
				for(i=0;i<17;i++){
				if(i==6)i+=5;
				DrawRotaGraph( 480+j*50, 50+i*16,2,0,tairetu[1], TRUE ) ;
				}
			}
		DrawRotaGraph( 580, 50+8*16,2,0,tairetu[0], TRUE ) ;
		break;
		case 14://十字陣//
			for(i=0;i<17;i++){
				if(i!=8){
				DrawRotaGraph( 460+i*8, 50+i*16,2,0,tairetu[1], TRUE ) ;
				DrawRotaGraph( 588-i*8, 50+i*16,2,0,tairetu[4], TRUE ) ;
				}else{
				DrawRotaGraph( 588-8*8, 50+i*16,2,0,tairetu[0], TRUE ) ;
				}
			}
		break;
		case 15://方陣//
			for(i=0;i<9;i++){
			DrawRotaGraph( 545+i*6, 50+i*16,2,0,tairetu[2], TRUE ) ;
			DrawRotaGraph( 518-i*6, 50+i*16,2,0,tairetu[4], TRUE ) ;
			}
			for(i=0;i<8;i++){
			DrawRotaGraph( 593-i*6, 194+i*16,2,0,tairetu[5], TRUE ) ;
			DrawRotaGraph( 470+i*6, 194+i*16,2,0,tairetu[1], TRUE ) ;
			}
			DrawRotaGraph( 535, 50+8*16,2,0,tairetu[0], TRUE ) ;
		break;
		case 16://三点突破の陣//
			for(i=0;i<17;i++)
			DrawRotaGraph( 480, 50+i*16,2,0,tairetu[1], TRUE ) ;
			for(i=0;i<5;i++){
			DrawRotaGraph( 600-20*i, 50+2*16,2,0,tairetu[2], TRUE ) ;
			if(i!=0)DrawRotaGraph( 600-20*i, 50+8*16,2,0,tairetu[2], TRUE ) ;
			else	DrawRotaGraph( 600-20*i, 50+8*16,2,0,tairetu[0], TRUE ) ;
			DrawRotaGraph( 600-20*i, 50+14*16,2,0,tairetu[2], TRUE ) ;
			}
		break;
		case 17://横列陣形//
		for(i=0;i<9;i++)
			if(i==4)DrawRotaGraph( 610-20*i, 50+8*16,2,0,tairetu[0], TRUE ) ;
			else DrawRotaGraph( 610-20*i, 50+8*16,2,0,tairetu[1], TRUE ) ;
		break;
		case 18://魚鱗の陣//
			for(i=0;i<9;i++)
			DrawRotaGraph( 600-i*16, 50+i*16,2,0,tairetu[4], TRUE ) ;
			for(i=3;i<9;i++)
			DrawRotaGraph( 640-i*16, 50+i*16,2,0,tairetu[5], TRUE ) ;
			for(i=6;i<9;i++)
			DrawRotaGraph( 680-i*16, 50+i*16,2,0,tairetu[5], TRUE ) ;
			DrawRotaGraph( 610, 50+8*16,2,0,tairetu[0], TRUE ) ;
			for(i=0;i<2;i++)
			DrawRotaGraph( 552+i*16, 194+i*16,2,0,tairetu[2], TRUE ) ;
			for(i=0;i<5;i++)
			DrawRotaGraph( 512+i*16, 194+i*16,2,0,tairetu[2], TRUE ) ;
			for(i=0;i<8;i++)
			DrawRotaGraph( 472+i*16, 194+i*16,2,0,tairetu[1], TRUE ) ;
		break;
		case 19://竜渦の陣//128
			for(i=0,j=24;j>=-24;j-=4){
			DrawRotaGraph( 530+i, 50+(24-j)/4*16,2,0,tairetu[1], TRUE ) ;
			i+=j;
			}
			for(i=0,j=20;j>=-28;j-=4){
			DrawRotaGraph( 510+i, 102+(24-j)/4*16,2,0,tairetu[1], TRUE ) ;
			i-=j;
			}
			DrawRotaGraph( 534, 134,2,0,tairetu[1], TRUE ) ;
			DrawRotaGraph( 558, 150,2,0,tairetu[1], TRUE ) ;
			DrawRotaGraph( 530, 180,2,0,tairetu[0], TRUE ) ;
			DrawRotaGraph( 500, 210,2,0,tairetu[1], TRUE ) ;
			DrawRotaGraph( 520, 226,2,0,tairetu[1], TRUE ) ;
		break;
		case 20://天の翼//
		for(i=0;i<4;i++)
		DrawRotaGraph( 486-i*8, 50+i*16,2,0,tairetu[4], TRUE ) ;
		for(i=4;i<8;i++)
		DrawRotaGraph( 428+i*8, 50+i*16,2,0,tairetu[1], TRUE ) ;
		for(i=9;i<13;i++)
		DrawRotaGraph( 486-(i-9)*8, 50+i*16,2,0,tairetu[4], TRUE ) ;
		for(i=13;i<17;i++)
		DrawRotaGraph( 428+(i-9)*8, 50+i*16,2,0,tairetu[1], TRUE ) ;
		DrawRotaGraph( 523, 50+8*16,2,0,tairetu[0], TRUE ) ;
		for(i=0;i<9;i++)
		DrawRotaGraph( 608-i*6, 50+i*16,2,0,tairetu[5], TRUE ) ;
		for(i=0;i<8;i++)
		DrawRotaGraph( 560+i*6, 194+i*16,2,0,tairetu[2], TRUE ) ;
		break;
		}
	return 0;
}
int kaisuu_set(){

	for(i=0;i<9;i++){
		B=10;
		switch (gun_senjyutu[0][i]){
		case 0:break;//―――――
		case 1:break;//全軍前進
		case 2:break;//全軍後退
		case 3:break;//全軍防御
		case 4:B=1;break;//全軍突撃
		case 5:break;//全軍退却
		case 6:break;//前列前進
		case 7:break;//後列前進
		case 8:B=4;break;//速攻前進
		case 9:B=4;break;//強撃前進
		case 10:B=3;break;//後退攻撃
		case 11:B=4;break;//上翼攻撃
		case 12:B=4;break;//下翼攻撃
		case 13:B=1;break;//前列突撃
		case 14:B=1;break;//後列突撃
		case 15:B=1;break;//上翼突撃
		case 16:B=1;break;//下翼突撃
		case 17:break;//前列防御
		case 18:B=1;break;//全軍防御･強
		case 19:B=3;break;//後退防御
		case 20:B=3;break;//速攻後退
		case 21:break;//前列交代
		case 22:break;//※交代用１
		case 23:break;//※交代用２
		case 24:B=3;break;//速攻交代
		case 25:B=3;break;//統率回復･弱
		case 26:break;//※統率用
		case 27:B=3;break;//陣形回復
		case 28:break;//※陣形回復用
		case 29:B=2;break;//前列死守
		case 30:B=1;break;//統率回復･強
		case 31:B=2;break;//陣形回復･速
		case 32:B=1;break;//死んだフリ
		case 33:break;//※死にフリ用
		case 34:B=1;break;//雨ごい
		case 35:B=1;break;//冬将軍
		case 36:B=1;break;//分断作戦
		case 37:B=1;break;//投石部隊
		case 38:break;//※投石用
		case 39:B=1;break;//指揮官突撃
		case 40:B=1;break;//爆裂部隊
		case 41:B=1;break;//火攻め
		case 42:B=1;break;//おとり作戦
		case 43:B=1;break;//偽りの退却
		case 44:B=1;break;//情報操作L1
		case 45:B=1;break;//情報操作L2
		case 46:B=1;break;//情報操作L3
		case 47:B=1;break;//情報操作L4
		case 48:B=1;break;//情報操作L5
		case 49:B=1;break;//穴掘り作戦
		case 50:B=1;break;//防柵作戦
		case 51:B=1;break;//水際作戦
		case 52:B=1;break;//背火の計
		case 53:B=1;break;//投石攻撃西
		case 54:B=1;break;//投石攻撃東
		case 55:B=4;break;//速攻退却
		case 56:B=1;break;//全軍前進･強
		case 57:B=4;break;//全軍休息
		case 58:B=1;break;//戦場の風
		case 59:B=1;break;//地割れ作戦
		case 60:B=1;break;//ｽﾗｲﾑﾌｨｰﾊﾞｰ
		case 61:B=2;break;//信じる者達
		case 62:B=1;break;//生命回復
		case 63:B=1;break;//ナラクの風
		case 64:B=2;break;//大熱波
		case 65:B=2;break;//大あまごい
		case 66:B=2;break;//超高速デルタ
		case 67:B=2;break;//大地震
		}
		gun_senrest[0][i]=B;
	}
	return 0;
}
int data_save(){
	FILE *fp ;
	if(A==0)fopen_s( &fp,"File/save/save_01.sav" , "wb" ) ;
	else if(A==1)fopen_s( &fp,"File/save/save_02.sav" , "wb" ) ;
	else if(A==2)fopen_s( &fp,"File/save/save_03.sav" , "wb" ) ;
	// オープンできなかったらここで終了
	if( fp == NULL ) return 0;
	//データの書き出し
	fwrite( &hero_name, sizeof( char ) , 22 , fp );//主人公の名前
	fwrite( &hiduke, sizeof( int ) , 1 , fp );//日付
	fwrite( &play_time, sizeof( int ) , 1 , fp );//プレイ時間
	fwrite( &set_jinkei, sizeof( int ) , 2 , fp );//編成している陣形
	fwrite( &set_hyouhou[0], sizeof( int ) , 9 , fp );//編成している兵法
	fwrite( &set_hyouhou[1], sizeof( int ) , 9 , fp );//編成している兵法
	fwrite( &get_jinkei, sizeof( int ) , 20 , fp );//取得している兵法
	fwrite( &get_hyouhou, sizeof( int ) , 50 , fp );//所持している兵法
	fwrite( &flag_hyouhou, sizeof( int ) , 50 , fp );//兵法習得フラグ
	fwrite( &kuni_seiryoku, sizeof( int ) , 30 , fp );//国の勢力、０未発見、１自国、２同盟国、３敵国、４中立国
	fwrite( &kuni_yuukou, sizeof( int ) , 30 , fp );//国の友好値。
	fwrite( &kuni_gundan, sizeof( int ) , 30 , fp );//その国の軍団
	fwrite( &kuni_type, sizeof( int ) , 30 , fp );//その国の表示アイコン
	fwrite( &youhei_lv, sizeof( int ) , 2 , fp );
	fwrite( &sinobi_lv, sizeof( int ) , 2 , fp );
	fwrite( &money, sizeof( int ) , 1 , fp );//国庫の金
	fwrite( &minsyuu, sizeof( int ) , 1 , fp );//民衆の評価
	fwrite( &sangyou, sizeof( int ) , 1 , fp );//国の産業レベル
	fwrite( &kokuryoku, sizeof( int ) , 1 , fp );//国の国力レベル
	fwrite( &vs_count, sizeof( int ) , 1 , fp );
	fwrite( &win_count, sizeof( int ) , 1 , fp );//勝利回数
	fwrite( &lost_count, sizeof( int ) , 1 , fp );//敗北回数
	fwrite( &esc_count, sizeof( int ) , 1 , fp );//逃走回数
	fwrite( &anihi_count, sizeof( int ) , 1 , fp );//全滅回数
	fwrite( &perfe_count, sizeof( int ) , 1 , fp );//無傷勝利回数
	fwrite( &eve_flag, sizeof( int ) , 100 , fp );//イベントフラグ
	fwrite( &get_item, sizeof( int ) , 20 , fp );//取得アイテム
	//ファイルを閉じる
	fclose(fp);
	return 0;
}
int data_load(){
	FILE *fp ;
	if(A==0)fopen_s( &fp,"File/save/save_01.sav" , "rb" ) ;
	else if(A==1)fopen_s( &fp,"File/save/save_02.sav" , "rb" ) ;
	else if(A==2)fopen_s( &fp,"File/save/save_03.sav" , "rb" ) ;
	// オープンできなかったらここで終了
	if( fp == NULL ) return 0;
	//データの書き出し
	fread( &hero_name, sizeof( char ) , 22 , fp );//主人公の名前
	fread( &hiduke, sizeof( int ) , 1 , fp );//日付
	fread( &play_time, sizeof( int ) , 1 , fp );//プレイ時間
	fread( &set_jinkei, sizeof( int ) , 2 , fp );//編成している陣形
	fread( &set_hyouhou[0], sizeof( int ) , 9 , fp );//編成している兵法
	fread( &set_hyouhou[1], sizeof( int ) , 9 , fp );//編成している兵法
	fread( &get_jinkei, sizeof( int ) , 20 , fp );//取得している兵法
	fread( &get_hyouhou, sizeof( int ) , 50 , fp );//所持している兵法
	fread( &flag_hyouhou, sizeof( int ) , 50 , fp );//兵法習得フラグ
	fread( &kuni_seiryoku, sizeof( int ) , 30 , fp );//国の勢力、０未発見、１自国、２同盟国、３敵国、４中立国
	fread( &kuni_yuukou, sizeof( int ) , 30 , fp );//国の友好値。
	fread( &kuni_gundan, sizeof( int ) , 30 , fp );//その国の軍団
	fread( &kuni_type, sizeof( int ) , 30 , fp );//その国の表示アイコン
	fread( &youhei_lv, sizeof( int ) , 2 , fp );
	fread( &sinobi_lv, sizeof( int ) , 2 , fp );
	fread( &money, sizeof( int ) , 1 , fp );//国庫の金
	fread( &minsyuu, sizeof( int ) , 1 , fp );//民衆の評価
	fread( &sangyou, sizeof( int ) , 1 , fp );//国の産業レベル
	fread( &kokuryoku, sizeof( int ) , 1 , fp );//国の国力レベル
	fread( &vs_count, sizeof( int ) , 1 , fp );
	fread( &win_count, sizeof( int ) , 1 , fp );//勝利回数
	fread( &lost_count, sizeof( int ) , 1 , fp );//敗北回数
	fread( &esc_count, sizeof( int ) , 1 , fp );//逃走回数
	fread( &anihi_count, sizeof( int ) , 1 , fp );//全滅回数
	fread( &perfe_count, sizeof( int ) , 1 , fp );//無傷勝利回数
	fread( &eve_flag, sizeof( int ) , 100 , fp );//イベントフラグ
	fread( &get_item, sizeof( int ) , 20 , fp );//取得アイテム
	//ファイルを閉じる
	fclose(fp);
	for(i=0;i<30;i++){
	kuni_henka[i]=0;
	}
	return 0;
}
int jyouhou_kuni(){

	DrawBox( 300 , 180 , 580 , 410 ,ao , TRUE ) ;
	DrawBox( 300 , 54 , 580 , 160 ,ao , TRUE ) ;
	SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;
		if(hiduke==0){
		DrawStringToHandle( 321 , 197 ,"おまけ", kuro , f_a) ;
		DrawStringToHandle( 320 , 196 ,"おまけ", siro , f_a) ;
		}else if(hiduke%2==1){
		DrawFormatStringToHandle( 321 , 197 , kuro , f_a,"%d月前期" ,((hiduke-1)/2)%12+1) ;
		DrawFormatStringToHandle( 320 , 196 , siro , f_a,"%d月前期" ,((hiduke-1)/2)%12+1) ;
		}else{
		DrawFormatStringToHandle( 321 , 197 , kuro , f_a,"%d月後期" ,((hiduke-1)/2)%12+1) ;
		DrawFormatStringToHandle( 320 , 196 , siro , f_a,"%d月後期" ,((hiduke-1)/2)%12+1) ;
		}
	//国力//kokuryoku
	DrawStringToHandle( 321 , 241 , "国力",kuro , f_a) ;
	DrawStringToHandle( 320 , 240 , "国力",siro , f_a) ;
	if(kokuryoku>=1000){
	DrawStringToHandle( 396 , 241 , "最高",kuro , f_a) ;
	DrawStringToHandle( 395 , 240 , "最高",siro , f_a) ;
	}else if(kokuryoku>=750){
	DrawStringToHandle( 396 , 241 , "強大",kuro , f_a) ;
	DrawStringToHandle( 395 , 240 , "強大",siro , f_a) ;
	}else if(kokuryoku>=500){
	DrawStringToHandle( 396 , 241 , "中堅",kuro , f_a) ;
	DrawStringToHandle( 395 , 240 , "中堅",siro , f_a) ;
	}else if(kokuryoku>=250){
	DrawStringToHandle( 396 , 241 , "弱小",kuro , f_a) ;
	DrawStringToHandle( 395 , 240 , "弱小",siro , f_a) ;
	}else{
	DrawStringToHandle( 396 , 241 , "最低",kuro , f_a) ;
	DrawStringToHandle( 395 , 240 , "最低",siro , f_a) ;
	}
	//産業//sangyou
	DrawStringToHandle( 321 , 285 , "産業",kuro , f_a) ;
	DrawStringToHandle( 320 , 284 , "産業",siro , f_a) ;
	if(sangyou>=1000){
	DrawStringToHandle( 396 , 285 , "最高",kuro , f_a) ;
	DrawStringToHandle( 395 , 284 , "最高",siro , f_a) ;
	}else if(sangyou>=750){
	DrawStringToHandle( 396 , 285 , "充実",kuro , f_a) ;
	DrawStringToHandle( 395 , 284 , "充実",siro , f_a) ;
	}else if(sangyou>=500){
	DrawStringToHandle( 396 , 285 , "普通",kuro , f_a) ;
	DrawStringToHandle( 395 , 284 , "普通",siro , f_a) ;
	}else if(sangyou>=250){
	DrawStringToHandle( 396 , 285 , "不足",kuro , f_a) ;
	DrawStringToHandle( 395 , 284 , "不足",siro , f_a) ;
	}else{
	DrawStringToHandle( 396 , 285 , "最低",kuro , f_a) ;
	DrawStringToHandle( 395 , 284 , "最低",siro , f_a) ;
	}
	//民衆//minsyuu
	DrawStringToHandle( 321 , 329 , "民衆",kuro , f_a) ;
	DrawStringToHandle( 320 , 328 , "民衆",siro , f_a) ;
	if(minsyuu>=1000){
	DrawStringToHandle( 396 , 329 , "最高",kuro , f_a) ;
	DrawStringToHandle( 395 , 328 , "最高",siro , f_a) ;
	}else if(minsyuu>=800){
	DrawStringToHandle( 396 , 329 , "幸福",kuro , f_a) ;
	DrawStringToHandle( 395 , 328 , "幸福",siro , f_a) ;
	}else if(minsyuu>=600){
	DrawStringToHandle( 396 , 329 , "満足",kuro , f_a) ;
	DrawStringToHandle( 395 , 328 , "満足",siro , f_a) ;
	}else if(minsyuu>=400){
	DrawStringToHandle( 396 , 329 , "普通",kuro , f_a) ;
	DrawStringToHandle( 395 , 328 , "普通",siro , f_a) ;
	}else if(minsyuu>=200){
	DrawStringToHandle( 396 , 329 , "不満",kuro , f_a) ;
	DrawStringToHandle( 395 , 328 , "不満",siro , f_a) ;
	}else if(minsyuu>=1){
	DrawStringToHandle( 396 , 329 , "不幸",kuro , f_a) ;
	DrawStringToHandle( 395 , 328 , "不幸",siro , f_a) ;
	}else{
	DrawStringToHandle( 396 , 329 , "最低",kuro , f_a) ;
	DrawStringToHandle( 395 , 328 , "最低",siro , f_a) ;
	}
	//国庫??万金//money
	DrawStringToHandle( 321 , 373 , "資金",kuro , f_a) ;
	DrawStringToHandle( 320 , 372 , "資金",siro , f_a) ;
	if(money>=1000000){
	DrawFormatStringToHandle( 398 , 373 , kuro , f_a, "%d" , money/1000000%10 ) ;
	DrawFormatStringToHandle( 397 , 372 , siro , f_a, "%d" , money/1000000%10 ) ;
	}
	if(money>=100000){
	DrawFormatStringToHandle( 418 , 373 , kuro , f_a, "%d" , money/100000%10 ) ;
	DrawFormatStringToHandle( 417 , 372 , siro , f_a, "%d" , money/100000%10 ) ;
	}
	DrawFormatStringToHandle( 438 , 373 , kuro , f_a, "%d" , money/10000%10 ) ;
	DrawFormatStringToHandle( 437 , 372 , siro , f_a, "%d" , money/10000%10 ) ;
	//産業
	if(san_hen!=0){
		DrawStringToHandle( 466 , 285 , "→"  ,kuro , f_a) ;
		DrawStringToHandle( 465 , 284 , "→"  ,siro , f_a) ;
		if(san_hen>0 && sangyou>=1000);
		else if(san_hen>0) siro=bougyo;
		else if(san_hen<0) siro=kougeki;
		if(sangyou+san_hen>=1000){
		DrawStringToHandle( 506 , 285 , "最高",kuro , f_a) ;
		DrawStringToHandle( 505 , 284 , "最高",siro , f_a) ;
		}else if(sangyou+san_hen>=750){
		DrawStringToHandle( 506 , 285 , "充実",kuro , f_a) ;
		DrawStringToHandle( 505 , 284 , "充実",siro , f_a) ;
		}else if(sangyou+san_hen>=500){
		DrawStringToHandle( 506 , 285 , "普通",kuro , f_a) ;
		DrawStringToHandle( 505 , 284 , "普通",siro , f_a) ;
		}else if(sangyou+san_hen>=250){
		DrawStringToHandle( 506 , 285 , "不足",kuro , f_a) ;
		DrawStringToHandle( 505 , 284 , "不足",siro , f_a) ;
		}else{
		DrawStringToHandle( 506 , 285 , "最低",kuro , f_a) ;
		DrawStringToHandle( 505 , 284 , "最低",siro , f_a) ;
		}
		siro=GetColor(255,255,255);
	}
	if(min_hen!=0){//民衆変化表示
		DrawStringToHandle( 466 , 329 , "→"  ,kuro , f_a) ;
		DrawStringToHandle( 465 , 328 , "→"  ,siro , f_a) ;
		if(min_hen>0 && money>=1000);
		else if(min_hen>0) siro=bougyo;
		else if(min_hen<0) siro=kougeki;
	if(minsyuu+min_hen>=1000){
	DrawStringToHandle( 506 , 329 , "最高",kuro , f_a) ;
	DrawStringToHandle( 505 , 328 , "最高",siro , f_a) ;
	}else if(minsyuu+min_hen>=800){
	DrawStringToHandle( 506 , 329 , "幸福",kuro , f_a) ;
	DrawStringToHandle( 505 , 328 , "幸福",siro , f_a) ;
	}else if(minsyuu+min_hen>=600){
	DrawStringToHandle( 506 , 329 , "満足",kuro , f_a) ;
	DrawStringToHandle( 505 , 328 , "満足",siro , f_a) ;
	}else if(minsyuu+min_hen>=400){
	DrawStringToHandle( 506 , 329 , "普通",kuro , f_a) ;
	DrawStringToHandle( 505 , 328 , "普通",siro , f_a) ;
	}else if(minsyuu+min_hen>=200){
	DrawStringToHandle( 506 , 329 , "不満",kuro , f_a) ;
	DrawStringToHandle( 505 , 328 , "不満",siro , f_a) ;
	}else if(minsyuu+min_hen>=1){
	DrawStringToHandle( 506 , 329 , "不幸",kuro , f_a) ;
	DrawStringToHandle( 505 , 328 , "不幸",siro , f_a) ;
	}else{
	DrawStringToHandle( 506 , 329 , "最低",kuro , f_a) ;
	DrawStringToHandle( 505 , 328 , "最低",siro , f_a) ;
	}
		siro=GetColor(255,255,255);
	}
	if(kane_hen!=0){
		DrawStringToHandle( 466 , 373 , "→"  ,kuro , f_a) ;
		DrawStringToHandle( 465 , 372 , "→"  ,siro , f_a) ;
		if(kane_hen>0 && money>=9999999);
		else if(kane_hen>0) siro=bougyo;
		else if(kane_hen<0) siro=kougeki;
		if(money+kane_hen>=1000000){
			DrawFormatStringToHandle( 508 , 373 , kuro , f_a, "%d" , (money+kane_hen)/1000000%10 ) ;
			DrawFormatStringToHandle( 507 , 372 , siro , f_a, "%d" , (money+kane_hen)/1000000%10 ) ;
		}
		if(money+kane_hen>=100000){
			DrawFormatStringToHandle( 528 , 373 , kuro , f_a, "%d" , (money+kane_hen)/100000%10 ) ;
			DrawFormatStringToHandle( 527 , 372 , siro , f_a, "%d" , (money+kane_hen)/100000%10 ) ;
		}
		if(money+kane_hen>=0){
			DrawFormatStringToHandle( 548 , 373 , kuro , f_a, "%d" , (money+kane_hen)/10000%10 ) ;
			DrawFormatStringToHandle( 547 , 372 , siro , f_a, "%d" , (money+kane_hen)/10000%10 ) ;
		}else{
			DrawStringToHandle( 548 , 373 , "0" ,aka , f_a) ;
			DrawStringToHandle( 547 , 372 , "0" ,siro , f_a) ;
		}
		siro=GetColor(255,255,255);
	}
	san_hen=0;
	min_hen=0;
	kane_hen=0;
	if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
	DxLib_End() ;//DXライブラリの使用終了
	exit(1);//プログラムの終了
	}

	return 0;
}
int jyouhou_teki(){


	SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
	DrawBox( 180 , 330 , 460 , 460 ,ao , TRUE ) ;
	SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;

	//kuni_seiryoku[i]=1+GetRand(1);//0いない、１青、２赤
	//kuni_yuukou[i]=GetRand(1000);//国の友好値。
	//kuni_gundan[i]=GetRand(1000);//その国の軍団。
	//kuni_type[i]=GetRand(27);
	//kuni_kokuryoku[i]=GetRand(1000);

	if(J/15%2==0)j=1;
	else if(J/15%4==1)j=0;
	else j=2;
	DrawRotaGraph( 212 , 354 , 2 , 0 , unit_g[kuni_type[c]][(kuni_seiryoku[c]-1)/2][j] , TRUE ) ;
	//国力//kokuryoku
	DrawStringToHandle( 241 , 341 , kuni_name[c],kuro , f_a) ;
	DrawStringToHandle( 240 , 340 , kuni_name[c],siro , f_a) ;
	DrawStringToHandle( 201 , 381 , "国力",kuro , f_a) ;
	DrawStringToHandle( 200 , 380 , "国力",siro , f_a) ;
	if(c==0)kuni_gundan[c]=kokuryoku;
	if(kuni_gundan[c]>=1000){
	DrawStringToHandle( 276 , 381 , "最高",kuro , f_a) ;
	DrawStringToHandle( 275 , 380 , "最高",siro , f_a) ;
	}else if(kuni_gundan[c]>=750){
	DrawStringToHandle( 276 , 381 , "強大",kuro , f_a) ;
	DrawStringToHandle( 275 , 380 , "強大",siro , f_a) ;
	}else if(kuni_gundan[c]>=500){
	DrawStringToHandle( 276 , 381 , "中堅",kuro , f_a) ;
	DrawStringToHandle( 275 , 380 , "中堅",siro , f_a) ;
	}else if(kuni_gundan[c]>=250){
	DrawStringToHandle( 276 , 381 , "弱小",kuro , f_a) ;
	DrawStringToHandle( 275 , 380 , "弱小",siro , f_a) ;
	}else{
	DrawStringToHandle( 276 , 381 , "最低",kuro , f_a) ;
	DrawStringToHandle( 275 , 380 , "最低",siro , f_a) ;
	}
	DrawStringToHandle( 201 , 421 , "関係",kuro , f_a) ;
	DrawStringToHandle( 200 , 420 , "関係",siro , f_a) ;
	if(kuni_seiryoku[c]==1){
		if(c!=0){
		DrawStringToHandle( 276 , 421 , "領国",kuro , f_a) ;
		DrawStringToHandle( 275 , 420 , "領国",siro , f_a) ;
		}else{
		DrawStringToHandle( 276 , 421 , "本国",kuro , f_a) ;
		DrawStringToHandle( 275 , 420 , "本国",siro , f_a) ;
		}
	}else if(kuni_seiryoku[c]==2){
	DrawStringToHandle( 276 , 421 , "同盟",kuro , f_a) ;
	DrawStringToHandle( 275 , 420 , "同盟",siro , f_a) ;
	}else if(kuni_yuukou[c]>=1000){
	DrawStringToHandle( 276 , 421 , "最高",kuro , f_a) ;
	DrawStringToHandle( 275 , 420 , "最高",siro , f_a) ;
	}else if(kuni_yuukou[c]>=750){
	DrawStringToHandle( 276 , 421 , "友好",kuro , f_a) ;
	DrawStringToHandle( 275 , 420 , "友好",siro , f_a) ;
	}else if(kuni_yuukou[c]>=500){
	DrawStringToHandle( 276 , 421 , "普通",kuro , f_a) ;
	DrawStringToHandle( 275 , 420 , "普通",siro , f_a) ;
	}else if(kuni_yuukou[c]>=250){
	DrawStringToHandle( 276 , 421 , "険悪",kuro , f_a) ;
	DrawStringToHandle( 275 , 420 , "険悪",siro , f_a) ;
	}else{
	DrawStringToHandle( 276 , 421 , "最低",kuro , f_a) ;
	DrawStringToHandle( 275 , 420 , "最低",siro , f_a) ;
	}
	if(koku_hen!=0){
		DrawStringToHandle( 346 , 421 , "→"  ,kuro , f_a) ;
		DrawStringToHandle( 345 , 420 , "→"  ,siro , f_a) ;
		if(koku_hen>0 && kuni_yuukou[c]>=1000 && koku_hen!=10000);
		else if(koku_hen>0) siro=bougyo;
		else if(koku_hen<0) siro=kougeki;
		if(koku_hen==10000){
		DrawStringToHandle( 386 , 421 , "同盟",kuro , f_a) ;
		DrawStringToHandle( 385 , 420 , "同盟",siro , f_a) ;
	}else if(kuni_yuukou[c]+koku_hen>=1000){
		DrawStringToHandle( 386 , 421 , "最高",kuro , f_a) ;
		DrawStringToHandle( 385 , 420 , "最高",siro , f_a) ;
	}else if(kuni_yuukou[c]+koku_hen>=750){
		DrawStringToHandle( 386 , 421 , "友好",kuro , f_a) ;
		DrawStringToHandle( 385 , 420 , "友好",siro , f_a) ;
	}else if(kuni_yuukou[c]+koku_hen>=500){
		DrawStringToHandle( 386 , 421 , "普通",kuro , f_a) ;
		DrawStringToHandle( 385 , 420 , "普通",siro , f_a) ;
	}else if(kuni_yuukou[c]+koku_hen>=250){
		DrawStringToHandle( 386 , 421 , "険悪",kuro , f_a) ;
		DrawStringToHandle( 385 , 420 , "険悪",siro , f_a) ;
	}else{
		DrawStringToHandle( 386 , 421 , "最低",kuro , f_a) ;
		DrawStringToHandle( 385 , 420 , "最低",siro , f_a) ;
	}
	siro=GetColor(255,255,255);
	}
	
	koku_hen=0;
	

	if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
	DxLib_End() ;//DXライブラリの使用終了
	exit(1);//プログラムの終了
	}

	return 0;
}
int name_nyuuryoku(){

	for(c=0;c<14;c++)
	for(i=0;i<213;i++){
	strcpy_s(moji_set[c][i], "　");
	}

	for(c=0;c<15;c++)
	moji_load();

	while(1){
		GetMousePoint( &mou_x, &mou_y );
		if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//マウス左押下
		if(mouse==0) mouse=1;
		else mouse=2;
		}else mouse=0;
		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
		if(mouse_left==0) mouse_left=1;
		else mouse_left=2;
		}else mouse_left=0;
		DrawGraph( 0, 0, world_map, TRUE ) ;
		//枠を表示
		waku(180,38,460,88);
		waku(64,108,584,460);
		//カーソルを表示
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 180 ) ;
		if(mou_x>71 && mou_x<480 && mou_y>119 && mou_y<408)DrawBox( mou_x/24*24 , mou_y/24*24 , mou_x/24*24+24 , mou_y/24*24+24 ,ao , TRUE ) ;
		if(mou_x>490 && mou_x<580 && mou_y>110 && mou_y<444)DrawBox( 490 , 109+(mou_y-108)/24*24 , 580 , 131+(mou_y-108)/24*24 ,ao , TRUE ) ;
		DrawBox( 490 , 109+name_set*24 , 580 , 131+name_set*24 ,ao , TRUE ) ;
		SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;
		//文字一覧を表示
		for(j=0;j<12;j++)
		for(i=0;i<17;i++){
			A=i+j*17;
			DrawString( 74+i*24 , 124+j*24 , moji_set[name_set][A],kuro);
			if(    (name_set==4 && (A==0 || A==11 || A==48 || A==55 || A==89 || A==113))//あいうえおか
				|| (name_set==5 && (A==64 || A==200))//きく
				|| (name_set==6 && (A==17 || A==98))//けこ
				|| (name_set==7 && (A==9 || A==78))//さし
				|| (name_set==8 && (A==171 || A==194))//すせ
				|| (name_set==9 && (A==85 || A==158))//そた
				|| (name_set==10&& (A==19 || A==88 || A==96 || A==141))//ちつてと
				|| (name_set==11&& (A==14 || A==19 || A==32 || A==39 || A==46 || A==119 || A==170))//なにねのはひふ
				|| (name_set==12&& (A==17 || A==44 || A==114 || A==133 || A==143 || A==150 || A==163 || A==176 || A==185))//へほまみむめもやゆ
				|| (name_set==13&& (A==3 || A==34 || A==48 || A==93 || A==98 || A==122 || A==137))//よらりるれろわ
				)DrawString( 74+i*24 , 124+j*24 , moji_set[name_set][A],aka);
		}

		//文字セット選択
		DrawString( 492 , 110      ,"ひらがな",kuro);
		DrawString( 492 , 110+24*1 ,"カタカナ",kuro);
		DrawString( 492 , 110+24*2 ,"英数字",kuro);
		DrawString( 492 , 110+24*3 ,"記号",kuro);
		DrawString( 492 , 110+24*4 ,"漢字あか",kuro);
		DrawString( 492 , 110+24*5 ,"漢字かく",kuro);
		DrawString( 492 , 110+24*6 ,"漢字くこ",kuro);
		DrawString( 492 , 110+24*7 ,"漢字こし",kuro);
		DrawString( 492 , 110+24*8 ,"漢字しせ",kuro);
		DrawString( 492 , 110+24*9 ,"漢字せた",kuro);
		DrawString( 492 , 110+24*10,"漢字たと",kuro);
		DrawString( 492 , 110+24*11,"漢字とふ",kuro);
		DrawString( 492 , 110+24*12,"漢字ふゆ",kuro);
		DrawString( 492 , 110+24*13,"漢字ゆわ",kuro);
		//上に名前とアイコンを表示24*
		DrawRotaGraph( 205 , 62 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;
		DrawFormatString( 230 , 50 , kuro,hero_name,A);

		A=(mou_x-72)/24+(mou_y-120)/24*17;

		if(mou_x>490 && mou_x<580 && mou_y>110 && mou_y<444 && mouse_left==1)name_set=(mou_y-108)/24;
		else if(mou_x>71 && mou_x<480 && mou_y>119 && mou_y<408 && mouse_left==1 && strlen(hero_name)<20){
			strcat_s(hero_name, moji_set[name_set][A]);
			PlaySoundMem( se_no[16] , DX_PLAYTYPE_BACK ) ;
		}
		if(mouse==1){
			PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
			hero_name[strlen(hero_name)-1]=NULL;
			hero_name[strlen(hero_name)-1]=NULL;
		}
		if(strlen(hero_name)<20){
		DrawString( 230+int(strlen(hero_name))/2*21 , 50 ,"＿",kuro);
		}

			if(mou_x>84 && mou_x<410 && mou_y>410 && mou_y<480){
			SetDrawBlendMode( DX_BLENDMODE_ALPHA , 180 ) ;
			DrawBox( 84 , 410 , 480 , 450 ,ao , TRUE ) ;
			SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;
			if(mouse_left==1)break;
			}
		DrawString( 256 , 420 ,"決定",kuro);

		//終了確認
		ScreenFlip();
		DrawBox(0,0,640,480,kuro,TRUE);
		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
	}

	if(strlen(hero_name)<2)PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
	else	PlaySoundMem( se_no[5] , DX_PLAYTYPE_BACK ) ;



	return 0;
}
int moji_load(){
	FILE *fp ;
	if(c==0)fopen_s( &fp,"File/mojiban/moji_01.txt" , "r" ) ;
	else if(c==1)fopen_s( &fp,"File/mojiban/moji_02.txt" , "r" ) ;
	else if(c==2)fopen_s( &fp,"File/mojiban/moji_03.txt" , "r" ) ;
	else if(c==3)fopen_s( &fp,"File/mojiban/moji_04.txt" , "r" ) ;
	else if(c==4)fopen_s( &fp,"File/mojiban/moji_05.txt" , "r" ) ;
	else if(c==5)fopen_s( &fp,"File/mojiban/moji_06.txt" , "r" ) ;
	else if(c==6)fopen_s( &fp,"File/mojiban/moji_07.txt" , "r" ) ;
	else if(c==7)fopen_s( &fp,"File/mojiban/moji_08.txt" , "r" ) ;
	else if(c==8)fopen_s( &fp,"File/mojiban/moji_09.txt" , "r" ) ;
	else if(c==9)fopen_s( &fp,"File/mojiban/moji_10.txt" , "r" ) ;
	else if(c==10)fopen_s( &fp,"File/mojiban/moji_11.txt" , "r" ) ;
	else if(c==11)fopen_s( &fp,"File/mojiban/moji_12.txt" , "r" ) ;
	else if(c==12)fopen_s( &fp,"File/mojiban/moji_13.txt" , "r" ) ;
	else if(c==13)fopen_s( &fp,"File/mojiban/moji_14.txt" , "r" ) ;
	else if(c==14)fopen_s( &fp,"名前初期.txt" , "r" ) ;
	// オープンできなかったらここで終了
	if( fp == NULL ) return 0;
	//データの書き出し
	if(c!=14){
	for(i=0;i<204;i++)fread( &moji_set[c][i], sizeof( char ) , 2 , fp );//文字読み込み
	}else{
	fscanf_s(fp,"%20s\n",hero_name);
	}

	//ファイルを閉じる
	fclose(fp);
	return 0;
}
int omake_main(){
	omake_load();
	//能力初期化
	gun_kazu[0]=29;
	butai_one[0]=0;//部隊１の兵種//重装備兵
	butai_two[0]=0;//部隊２の兵種//騎兵
	butai_sirei[0]=8;//司令官の兵種//将軍
	set_hyouhou[0][0]=1;
	set_hyouhou[0][1]=2;
	set_hyouhou[0][2]=3;
	set_hyouhou[0][3]=4;
	set_hyouhou[0][4]=5;
	while(1){
	for(i=0;i<100;i++){
	A=GetRand(499);//さらに半分
		 if(A<10)	ran_gundan[i]=1 ;//ゴブ1.0%
	else if(A<20)	ran_gundan[i]=3 ;//兵士1.0%
	else if(A<23)	ran_gundan[i]=23;//じい0.3%
	else if(A<26)	ran_gundan[i]=2 ;//オガ0.3%
	else if(A<29)	ran_gundan[i]=7 ;//信者0.3%
	else if(A<32)	ran_gundan[i]=9 ;//海兵0.3%
	else if(A<35)	ran_gundan[i]=10;//炎兵0.3%
	else if(A<38)	ran_gundan[i]=18;//ゴ王0.3%
	else if(A<41)	ran_gundan[i]=27;//教皇0.3%
	else if(A<44)	ran_gundan[i]=26;//将軍0.3%
	else if(A<47)	ran_gundan[i]=14;//魔兵0.3%
	else if(A<49)	ran_gundan[i]=17;//戦将0.2%
	else if(A<51)	ran_gundan[i]=20;//炎将0.2%
	else if(A<53)	ran_gundan[i]=21;//海将0.2%
	else if(A<55)	ran_gundan[i]=22;//竜将0.2%
	else if(A<56)	ran_gundan[i]=19;//魔王0.1%
	else 			ran_gundan[i]=0 ;//ゼラ残％
	}
	c=GetRand(3)+64;
	set_hyouhou[0][8]=c;
	set_hyouhou[1][8]=c;
	if(GetRand(4)==0){//
	set_hyouhou[0][8]=55;
	set_hyouhou[1][8]=55;
	}else if(GetRand(2)==0){//生命回復
	set_hyouhou[0][8]=62;
	set_hyouhou[1][8]=62;
	}else if(GetRand(15)==0){//スライムフィーバー
	set_hyouhou[0][8]=60;
	set_hyouhou[1][8]=60;
	}
	set_hyouhou[0][5]=8+GetRand(4);//攻撃系　速攻　強撃　上翼　下翼　攻強
	if(set_hyouhou[0][5]==10)set_hyouhou[0][5]=56;
	set_hyouhou[0][6]=18+GetRand(4);//防御系　全休　防強　後攻　後防　速後
	if(set_hyouhou[0][6]==21)		 set_hyouhou[0][6]=10;
	else	if(set_hyouhou[0][6]==22)set_hyouhou[0][6]=57;
	set_hyouhou[0][7]=44+GetRand(4);//特殊系　情報操作Ｌ１〜５

	//陣形
	set_jinkei[0]=GetRand(19)+1;
	//イベントとか
	VS_no=GetRand(36)+1;//戦闘相手を決める//21戦目にうぃっち//37ういっち、34深淵の王
	if(VS_no==34)VS_no=38;
	if(VS_no==37)VS_no=39;
	if(omake_rensen==60)VS_no=37;
	map=9;
	sentou_main();
	gun_kazu[0]=gun_nokori[0]-1;//自軍団数計算
	omake_rensen+=60;//敵軍団増殖
	//セーブ
	omake_save();
		if(VS_result>3 || omake_rensen>100){//最初から
		gun_kazu[0]=29;
		omake_rensen=0;
		}
	}

	return 0;
}
int omake_save(){
	FILE *fp ;
	fopen_s( &fp,"File/save/save_sys.sav" , "wb" ) ;
	// オープンできなかったらここで終了
	if( fp == NULL ) return 0;
	//データの書き出し
	fwrite( &omake_mode, sizeof( int ) , 1 , fp );//イベントフラグ
	//ファイルを閉じる
	fclose(fp);
	return 0;
}
int omake_load(){
	FILE *fp ;
	fopen_s( &fp,"File/save/save_sys.sav" , "rb" ) ;
	// オープンできなかったらここで終了
	if( fp == NULL ) return 0;
	//データの書き出し
	fread( &omake_mode, sizeof( int ) , 1 , fp );//イベントフラグ
	fclose(fp);
	for(i=0;i<30;i++){
	kuni_henka[i]=0;
	}
	return 0;
}
int waku(int xa,int ya,int xb,int yb){

	DrawBox( xa , ya ,xb   ,  yb   , GetColor(  42 ,  42 ,  42 ) , TRUE) ;//影の部分
	DrawBox( xa , ya   ,xb-4 ,  yb-4 , GetColor( 225 , 205 , 172 ) , TRUE) ;//塗りつぶし部分
	DrawBox( xa , ya   ,xb-2 ,  yb-2 , GetColor(  82 ,  45 ,  20 ) , FALSE) ;//濃い目の茶枠
	DrawBox( xa , ya   ,xb-3 ,  yb-3 , GetColor( 175 , 135 ,  92 ) , FALSE) ;//薄い茶枠
	DrawPixel( xb-1-3 , yb-3         , GetColor( 135 ,  95 ,  60 ) ) ;//ドット

	return 0;
}
int waku_2(int xa,int ya,int xb,int yb){

	DrawBox( xa , ya ,xb   ,  yb   , GetColor(  42 ,  42 ,  42 ) , TRUE) ;//影の部分
	DrawBox( xa , ya   ,xb-4 ,  yb-4 , GetColor( 172 , 172 , 172 ) , TRUE) ;//塗りつぶし部分
	DrawBox( xa , ya   ,xb-2 ,  yb-2 , GetColor(  45 ,  45 ,  45 ) , FALSE) ;//濃い目の茶枠
	DrawBox( xa , ya   ,xb-3 ,  yb-3 , GetColor( 135 , 135 , 132 ) , FALSE) ;//薄い茶枠
	DrawPixel( xb-1-3 , yb-3         , GetColor(  60 ,  60 ,  60 ) ) ;//ドット

	return 0;
}
//陣形初期化
int jin_01(){
	//縦列陣形
	for(i=0;i<gun_kazu[A]+1;i++){
	//兵種Ａ
	if(i==gun_kazu[A]){//指揮官配置
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=560000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=150000;//兵士のＹ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_x[A][i]=(i%2*10000+550000)*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=300000*i/(gun_kazu[A]-1);//兵士のＹ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else{
		c=butai_two[A];
		hei_dai();
		hei_x[A][i]=(i%2*10000+550000)*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=300000*i/(gun_kazu[A]-1);//兵士のＹ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_jin[A][i]=(555000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}
	return 0;
}
int jin_02(){
	//防壁の波陣
	for(i=0;i<gun_kazu[A]+1;i++){
	//兵種Ａ
	if(i==gun_kazu[A]){//指揮官配置
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=600000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=80000;//兵士のＹ座標
		hei_retu[A][i]=1;//兵士の隊列 0,前列
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=300000*i/(gun_kazu[A]/2-1);//兵士のＹ座標
		hei_x[A][i]=(500000-abs(150000-hei_y[A][i])/3)*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=300000*(i-gun_kazu[A]/2)/(gun_kazu[A]/2+gun_kazu[A]%2-1);//兵士のＹ座標
		hei_x[A][i]=(600000-abs(150000-hei_y[A][i])/3)*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=1;//兵士の隊列 0,前列
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_jin[A][i]=(475000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}

	return 0;
}
int jin_03(){
	//攻撃の波陣
	for(i=0;i<gun_kazu[A]+1;i++){
	//兵種Ａ
	if(i==gun_kazu[A]){//指揮官配置
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=600000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=220000;//兵士のＹ座標
		hei_retu[A][i]=1;//兵士の隊列 0,前列
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=300000*i/(gun_kazu[A]/2-1);//兵士のＹ座標
		hei_x[A][i]=(550000+abs(150000-hei_y[A][i])/3)*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=1;//兵士の隊列 0,前列
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=300000*(i-gun_kazu[A]/2)/(gun_kazu[A]/2+gun_kazu[A]%2-1);//兵士のＹ座標
		hei_x[A][i]=(450000+abs(150000-hei_y[A][i])/3)*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_jin[A][i]=(475000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}


	return 0;
}
int jin_04(){
	//上翼突撃の陣
	for(i=0;i<gun_kazu[A]+1;i++){
	//兵種Ａ
	if(i==gun_kazu[A]){//指揮官配置
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=510000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=250000;//兵士のＹ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=240000*i/(gun_kazu[A]/2-1);//兵士のＹ座標
		hei_x[A][i]=(520000-abs(150000-hei_y[A][i])/3)*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else if(i<gun_kazu[A]*2/3){
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=240000+60000*(i+1-gun_kazu[A]/2)/(gun_kazu[A]/6+gun_kazu[A]%2);//兵士のＹ座標
		hei_x[A][i]=(520000-abs(150000-hei_y[A][i])/3)*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=300000*(i-gun_kazu[A]*2/3)/(gun_kazu[A]/3+gun_kazu[A]%2);//兵士のＹ座標
		hei_x[A][i]=(530000+hei_y[A][i]/100001*100000/4)*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=hei_y[A][i]%100001;
		hei_retu[A][i]=1;//兵士の隊列 0,前列
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_jin[A][i]=(495000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}
	return 0;
}
int jin_05(){
	//下翼突撃の陣
	for(i=0;i<gun_kazu[A]+1;i++){
	//兵種Ａ
	if(i==gun_kazu[A]){//指揮官配置
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=510000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=50000;//兵士のＹ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=60000+240000*i/(gun_kazu[A]/2-1);//兵士のＹ座標
		hei_x[A][i]=(520000-abs(150000-hei_y[A][i])/3)*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else if(i<gun_kazu[A]*2/3){
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=60000*(i-gun_kazu[A]/2)/(gun_kazu[A]/6+gun_kazu[A]%2);//兵士のＹ座標
		hei_x[A][i]=(520000-abs(150000-hei_y[A][i])/3)*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=300000*(i-gun_kazu[A]*2/3)/(gun_kazu[A]/3+gun_kazu[A]%2);//兵士のＹ座標
		hei_x[A][i]=(530000+(hei_y[A][i]/100001*100000)/4)*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=hei_y[A][i]%100001+200000;
		hei_retu[A][i]=1;//兵士の隊列 0,前列
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_jin[A][i]=(495000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}
	return 0;
}
int jin_06(){
	//中央突破の陣
	for(i=0;i<gun_kazu[A]+1;i++){
	//兵種Ａ
	if(i==gun_kazu[A]){//指揮官配置
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=580000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=200000;//兵士のＹ座標
		hei_retu[A][i]=1;//兵士の隊列 0,後列
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=240000*i/(gun_kazu[A]/2-1);//兵士のＹ座標
		if(hei_y[A][i]>120000)hei_y[A][i]+=60000;
		hei_x[A][i]=(600000-abs(150000-hei_y[A][i])/3)*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=1;//兵士の隊列 1,後列
		}else if(i<gun_kazu[A]*5/6){
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=100000+100000*(i-gun_kazu[A]/2)/(gun_kazu[A]/3-1+gun_kazu[A]%2);//兵士のＹ座標
		hei_x[A][i]=(490000+abs(150000-hei_y[A][i])*3/2)*(1-A*2)+A*640000;//兵士のＸ座標
		if(i%3==0) hei_y[A][i]=(hei_y[A][i]-150000)*3/2+150000;
		else if(i%3==1) hei_y[A][i]=(hei_y[A][i]-150000)+150000;
		else  hei_y[A][i]=(hei_y[A][i]-150000)/2+150000;
		hei_x[A][i]-=(1-A*2)*(i%3)*50000;
		if(i%3>0)hei_x[A][i]+=(1-A*2)*10000;
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=120000+60000*(i-gun_kazu[A]*5/6)/(gun_kazu[A]/6+gun_kazu[A]%2);//兵士のＹ座標
		hei_x[A][i]=(600000-abs(150000-hei_y[A][i])/3)*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=1;//兵士の隊列 0,前列
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_jin[A][i]=(523000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}
	return 0;
}
int jin_07(){
	//三波状陣
	for(i=0;i<gun_kazu[A]+1;i++){
	//兵種Ａ
	if(i==gun_kazu[A]){//指揮官配置
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=600000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=30000;//兵士のＹ座標
		hei_retu[A][i]=1;//兵士の隊列 0,前列
		}else if(i<gun_kazu[A]/3){//最前列
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=10000+280000*i/(gun_kazu[A]/3-1);//兵士のＹ座標
		hei_x[A][i]=520000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else if(i<gun_kazu[A]*2/3){//中列
		if(i<gun_kazu[A]/2)c=butai_one[A];
		else c=butai_two[A];
		hei_dai();
		if(gun_kazu[A]%3==2)	hei_y[A][i]=10000+280000*(i-gun_kazu[A]/3)/(gun_kazu[A]/3);//兵士のＹ座標
		else				   hei_y[A][i]=10000+280000*(i-gun_kazu[A]/3)/(gun_kazu[A]/3-1);//兵士のＹ座標
		hei_x[A][i]=560000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=1;//兵士の隊列 0,前列
		}else{//最後尾
		c=butai_two[A];
		hei_dai();
		if(gun_kazu[A]%3==0) hei_y[A][i]=10000+280000*(i-gun_kazu[A]*2/3)/(gun_kazu[A]/3-1);//兵士のＹ座標
		else					hei_y[A][i]=10000+280000*(i-gun_kazu[A]*2/3)/(gun_kazu[A]/3);//兵士のＹ座標
		hei_x[A][i]=600000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=1;//兵士の隊列 0,前列
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_jin[A][i]=(520000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}
	return 0;
}
int jin_08(){
	//疾風陣
	for(i=0;i<gun_kazu[A]+1;i++){
	//兵種Ａ
	if(i==gun_kazu[A]){//指揮官配置
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=550000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=50000;//兵士のＹ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=300000*i/(gun_kazu[A]/2-1);//兵士のＹ座標
		hei_x[A][i]=(450000+abs(hei_y[A][i]-150000))*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=300000*(i-gun_kazu[A]/2)/(gun_kazu[A]/2-1+gun_kazu[A]%2);//兵士のＹ座標
		hei_x[A][i]=(450000+abs(hei_y[A][i]-150000))*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_jin[A][i]=(525000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}
	return 0;
}
int jin_09(){
	//背水の陣
	for(i=0;i<gun_kazu[A]+1;i++){
	//兵種Ａ
	if(i==gun_kazu[A]){//指揮官配置
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=600000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=90000;//兵士のＹ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=300000*i/(gun_kazu[A]/2-1);//兵士のＹ座標
		hei_x[A][i]=600000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=260000*(i-gun_kazu[A]/2)/(gun_kazu[A]/2-1+gun_kazu[A]%2);//兵士のＹ座標
		if(hei_y[A][i]>129999) hei_y[A][i]+=40000;
		hei_x[A][i]=(570000-20000*(i%3))*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_jin[A][i]=(582000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}
	return 0;
}
int jin_10(){
	//強撃陣
	for(i=0;i<gun_kazu[A]+1;i++){
	//兵種Ａ
	if(i==gun_kazu[A]){//指揮官配置
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=600000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=150000;//兵士のＹ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_x[A][i]=575000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=300000*i/(gun_kazu[A]/2-1);//兵士のＹ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else{
		c=butai_two[A];
		hei_dai();
		hei_x[A][i]=565000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=300000*(i-gun_kazu[A]/2)/(gun_kazu[A]/2-1+gun_kazu[A]%2);//兵士のＹ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_jin[A][i]=(570000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}

	return 0;
}
int jin_11(){
	//波状盾の陣
	for(i=0;i<gun_kazu[A]+1;i++){
	//兵種Ａ
	if(i==gun_kazu[A]){//指揮官配置
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=600000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=150000;//兵士のＹ座標
		hei_retu[A][i]=1;//兵士の隊列 0,前列
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=300000*i/(gun_kazu[A]/2-1);//兵士のＹ座標
		hei_x[A][i]=(500000-abs(150000-hei_y[A][i])/3)*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else if(i<gun_kazu[A]*5/6+gun_kazu[A]%2){
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=10000+280000*(i-gun_kazu[A]/2)/(gun_kazu[A]/3-1+gun_kazu[A]%2);//兵士のＹ座標
		hei_x[A][i]=(560000-abs(150000-hei_y[A][i])/3)*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=1;//兵士の隊列 0,前列
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=135000+30000*(i-gun_kazu[A]*5/6-gun_kazu[A]%2)/(gun_kazu[A]/6-1);//兵士のＹ座標
		hei_x[A][i]=(580000+abs(150000-hei_y[A][i]))*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=1;//兵士の隊列 0,前列
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_jin[A][i]=(495000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}
	return 0;
}
int jin_12(){
	//虎穴陣
	for(i=0;i<gun_kazu[A]+1;i++){
	//兵種Ａ
	if(i==gun_kazu[A]){//指揮官配置
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=500000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=250000;//兵士のＹ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else if(i<gun_kazu[A]/2){
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=300000*i/(gun_kazu[A]);//兵士のＹ座標
		hei_x[A][i]=(600000-abs(hei_y[A][i]-150000))*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else{
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=300000*i/(gun_kazu[A]-1);//兵士のＹ座標
		hei_x[A][i]=(600000-abs(hei_y[A][i]-150000))*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_jin[A][i]=(525000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}

	return 0;
}
int jin_13(){
	//阿修羅道
	for(i=0;i<gun_kazu[A]+1;i++){
	//兵種Ａ
	if(i==gun_kazu[A]){//指揮官配置
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=600000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=150000;//兵士のＹ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		hei_wei[A][i]+=2;
		hei_pow[A][i]+=2;
		hei_def[A][i]+=2;
		hei_spd[A][i]+=2;
		hei_sta[A][i]+=2;
		hei_kaz[A][i]+=20;
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=120000*i/(gun_kazu[A]/2-1);//兵士のＹ座標
		if(i%3==0)			hei_x[A][i]=(600000)*(1-A*2)+A*640000;//兵士のＸ座標
		else	if(i%3==1)	hei_x[A][i]=(560000)*(1-A*2)+A*640000;//兵士のＸ座標
		else				hei_x[A][i]=(520000)*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=180000+120000*(i-gun_kazu[A]/2)/(gun_kazu[A]/2-1+gun_kazu[A]%2);//兵士のＹ座標
		if(i%3==0)			hei_x[A][i]=(600000)*(1-A*2)+A*640000;//兵士のＸ座標
		else	if(i%3==1)	hei_x[A][i]=(560000)*(1-A*2)+A*640000;//兵士のＸ座標
		else				hei_x[A][i]=(520000)*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_jin[A][i]=(560000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}
	return 0;
}
int jin_14(){
	//十字陣
	for(i=0;i<gun_kazu[A]+1;i++){
	//兵種Ａ
	if(i==gun_kazu[A]){//指揮官配置
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=525000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=150000;//兵士のＹ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=300000*i/(gun_kazu[A]/2-1);//兵士のＹ座標
		hei_x[A][i]=(450000+hei_y[A][i]/2)*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=300000*(i-gun_kazu[A]/2)/(gun_kazu[A]/2-1+gun_kazu[A]%2);//兵士のＹ座標
		hei_x[A][i]=(600000-hei_y[A][i]/2)*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_jin[A][i]=(525000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}
	return 0;
}
int jin_15(){
	//方陣
	for(i=0;i<gun_kazu[A]+1;i++){
	//兵種Ａ
	if(i==gun_kazu[A]){//指揮官配置
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=525000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=150000;//兵士のＹ座標
		hei_retu[A][i]=1;//兵士の隊列 0,前列
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=300000*i/(gun_kazu[A]/2-1);//兵士のＹ座標
		hei_x[A][i]=(450000+abs(150000-hei_y[A][i])/2)*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=300000*(i-gun_kazu[A]/2)/(gun_kazu[A]/2-1+gun_kazu[A]%2);//兵士のＹ座標
		hei_x[A][i]=(600000-abs(150000-hei_y[A][i])/2)*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=1;//兵士の隊列 0,前列
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_jin[A][i]=(487500*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}
	return 0;
}
int jin_16(){
	//三点突破の陣
	for(i=0;i<gun_kazu[A]+1;i++){
	//兵種Ａ
	if(i==gun_kazu[A]){//指揮官配置
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=600000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=150000;//兵士のＹ座標
		hei_retu[A][i]=1;//兵士の隊列 0,前列
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=300000*i/(gun_kazu[A]/2-1);//兵士のＹ座標
		hei_x[A][i]=(540000)*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=130000*(i%3)+20000;//兵士のＹ座標
		hei_x[A][i]=(550000+50000*(i-gun_kazu[A]/2)/(gun_kazu[A]/2-1+gun_kazu[A]%2))*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=1;//兵士の隊列 0,前列
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_jin[A][i]=(540000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}
	return 0;
}
int jin_17(){
	//横列陣形
	for(i=0;i<gun_kazu[A]+1;i++){
	//兵種Ａ
	if(i==gun_kazu[A]){//指揮官配置
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=510000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=150000;//兵士のＹ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=(i%2*10000+145000);//兵士のＸ座標
		hei_x[A][i]=(420000+180000*i/(gun_kazu[A]-1))*(1-A*2)+A*640000;//兵士のＹ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=(i%2*10000+145000);//兵士のＸ座標
		hei_x[A][i]=(420000+180000*i/(gun_kazu[A]-1+gun_kazu[A]%2))*(1-A*2)+A*640000;//兵士のＹ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_jin[A][i]=(510000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}
	return 0;
}
int jin_18(){
	//魚鱗の陣
	for(i=0;i<gun_kazu[A]+1;i++){
	//兵種Ａ
	if(i==gun_kazu[A]){//指揮官配置
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=610000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=150000;//兵士のＹ座標
		hei_retu[A][i]=1;//兵士の隊列 0,前列
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=300000*i/(gun_kazu[A]/2-1);//兵士のＹ座標
		hei_x[A][i]=(450000+abs(150000-hei_y[A][i]))*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else if(i<gun_kazu[A]*5/6){
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=40000+220000*(i-gun_kazu[A]/2)/(gun_kazu[A]/3-1+gun_kazu[A]%2);//兵士のＹ座標
		hei_x[A][i]=(490000+abs(150000-hei_y[A][i]))*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=1;//兵士の隊列 0,前列
		}else {
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=100000+100000*(i-gun_kazu[A]*5/6)/(gun_kazu[A]/6-1+gun_kazu[A]%2);//兵士のＹ座標
		hei_x[A][i]=(530000+abs(150000-hei_y[A][i]))*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=1;//兵士の隊列 0,前列
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_jin[A][i]=(525000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}
	return 0;
}
int jin_19(){
	//竜渦の陣
	for(i=0;i<gun_kazu[A]+1;i++){
	//兵種Ａ
	if(i==gun_kazu[A]){//指揮官配置
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=470000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=150000;//兵士のＹ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=150000+int((150000-250000*i/(gun_kazu[A]-1))*(sin(PI/2+6*PI*i/(gun_kazu[A]-1))));//兵士のＹ座標
		hei_x[A][i]=(480000+int((150000-250000*i/(gun_kazu[A]-1))*(cos(PI/2+6*PI*i/(gun_kazu[A]-1)))))*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=150000+int((150000-250000*(i-gun_kazu[A]/2)/(gun_kazu[A]-1))*(sin(PI/2+6*PI*i/(gun_kazu[A]-1+gun_kazu[A]%2))));//兵士のＹ座標
		hei_x[A][i]=(480000+int((150000-250000*(i-gun_kazu[A]/2)/(gun_kazu[A]-1))*(cos(PI/2+6*PI*i/(gun_kazu[A]-1+gun_kazu[A]%2)))))*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_jin[A][i]=(480000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}

	return 0;
}
int jin_20(){
	//天の翼
	for(i=0;i<gun_kazu[A]+1;i++){
	//兵種Ａ
	if(i==gun_kazu[A]){//指揮官配置
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=540000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=150000;//兵士のＹ座標
		hei_retu[A][i]=1;//兵士の隊列 0,前列
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=280000*i/(gun_kazu[A]/2-1);//兵士のＹ座標
		hei_x[A][i]=(450000+abs(70000-hei_y[A][i]%140000))*(1-A*2)+A*640000;//兵士のＸ座標
		if(hei_y[A][i]>140000)hei_y[A][i]+=20000;
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=280000*(i-gun_kazu[A]/2)/(gun_kazu[A]/2+gun_kazu[A]%2-1);//兵士のＹ座標
		if(hei_y[A][i]>140000)hei_y[A][i]+=20000;
		hei_x[A][i]=(540000+abs(150000-hei_y[A][i])/2)*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=1;//兵士の隊列 0,前列
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_jin[A][i]=(492000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}


	return 0;
}
int jin_21(){

	//基本７０＋５体

	//冥の翼、魔王専用
	for(i=0;i<gun_kazu[A]+1;i++){
	//兵種Ａ
	if(i==gun_kazu[A]){//指揮官配置
		c=19;
		hei_dai();
		hei_x[A][i]=540000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=150000;//兵士のＹ座標
		hei_retu[A][i]=1;//兵士の隊列 0,前列
		}else if(i==gun_kazu[A]-4){
		c=21;//ヴェパール
		hei_dai();
		hei_x[A][i]=500000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=75000;//兵士のＹ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else if(i==gun_kazu[A]-3){
		c=20;//フェルネクス
		hei_dai();
		hei_x[A][i]=500000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=225000;//兵士のＹ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else if(i==gun_kazu[A]-2){
		c=22;//ヴォーラグ
		hei_dai();
		hei_x[A][i]=580000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=190000;//兵士のＹ座標
		hei_retu[A][i]=1;//兵士の隊列 0,前列
		}else if(i==gun_kazu[A]-1){
		c=17;//イリゴス
		hei_dai();
		hei_x[A][i]=580000*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]=110000;//兵士のＹ座標
		hei_retu[A][i]=1;//兵士の隊列 0,前列
		}else if(i<(gun_kazu[A]-4)/6*2){//兵種Ａ
		c=9;
		hei_dai();//部隊１
		hei_y[A][i]=140000*i/((gun_kazu[A]-4)/6*2-1);//兵士のＹ座標
		hei_x[A][i]=(450000+abs(70000-hei_y[A][i]))*(1-A*2)+A*640000;//兵士のＸ座標
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}else if(i<(gun_kazu[A]-4)/6*3){//兵種
		if(i-(gun_kazu[A]-4)/6*2<(gun_kazu[A]-4)/12)c=4;
		else c=14;
		hei_dai();//部隊２
		hei_y[A][i]=120000*(i-(gun_kazu[A]-4)/6*2)/((gun_kazu[A]-4)/6-1);//兵士のＹ座標
		hei_x[A][i]=(620000-hei_y[A][i]/2)*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]+=20000;
		hei_retu[A][i]=1;//兵士の隊列 0,前列
		}else if(i<(gun_kazu[A]-4)/6*4){//兵種竜軍団
		if(i-(gun_kazu[A]-4)/6*3>(gun_kazu[A]-4)/12)c=4;
		else c=14;
		hei_dai();//部隊３
		hei_y[A][i]=120000*(i-(gun_kazu[A]-4)/6*3)/((gun_kazu[A]-4)/6-1);//兵士のＹ座標
		hei_x[A][i]=(560000+hei_y[A][i]/2)*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]+=170000;
		hei_retu[A][i]=1;//兵士の隊列 0,前列
		}else{//兵種
		c=10;
		hei_dai();//部隊４
		hei_y[A][i]=140000*(i-(gun_kazu[A]-4)/6*4)/((gun_kazu[A]-4)/6*2);//兵士のＹ座標
		hei_x[A][i]=(450000+abs(70000-hei_y[A][i]))*(1-A*2)+A*640000;//兵士のＸ座標
		hei_y[A][i]+=160000;
		hei_retu[A][i]=0;//兵士の隊列 0,前列
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_jin[A][i]=(525000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}

	return 0;
}
//戦術効果
int sen_01(){
	flag_hyouhou[0]=1;
	if(hei_type[A][gun_kazu[A]]==8)strcpy_s(serihu, "すすむよ〜");
	else strcpy_s(serihu, "全軍前進");
	hukidasi();now_meirei[A]=1;now_time[A]=0;
	for(i=0;i<100;i++){
		hei_sen[A][i]=2;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-5;//兵士のモラル時間変化量
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_02(){
	flag_hyouhou[23]=1;
	if(hei_type[A][gun_kazu[A]]==8)strcpy_s(serihu, "ほえ〜");
	else strcpy_s(serihu, "全軍後退");hukidasi();now_meirei[A]=2;now_time[A]=0;

	for(i=0;i<100;i++){
		hei_sen[A][i]=0;//兵士の戦闘状態
		hei_muk[A][i]=A;//兵士の向き
		hei_syou[A][i]=12;//兵士のモラル時間変化量
		hei_mov[A][i]=-hei_spd[A][i]*(A*2-1)*30;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	return 0;
}
int sen_03(){
	flag_hyouhou[19]=1;
	if(hei_type[A][gun_kazu[A]]==8)strcpy_s(serihu, "ふにゅ〜");
	else strcpy_s(serihu, "全軍防御");hukidasi();now_meirei[A]=3;now_time[A]=0;

	for(i=0;i<100;i++){
		hei_sen[A][i]=40;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-1;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_04(){
	flag_hyouhou[9]=1;
	if(hei_type[A][gun_kazu[A]]==8)strcpy_s(serihu, "いっくぞ〜!!!");
	else strcpy_s(serihu, "全軍突撃");hukidasi();now_meirei[A]=4;now_time[A]=0;

	for(i=0;i<100;i++){
		hei_sen[A][i]=3;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-7;//兵士のモラル時間変化量
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_moral[A][i]+=6000;
		hei_hirou[A][i]+=25000;
		hei_totu[A][i]=1;
		hei_down[A][i]/=2;
	}
	for(t=0;t<60;t++){
			for(i=0;i<100;i++){
			hei_jump[A][i]+=19-t%20*2;
			}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}
	for(i=0;i<100;i++){
		hei_emo[A][i]=1;
	}
	PlaySoundMem( se_no[13] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<60;t++){
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}
	for(i=0;i<100;i++){
		hei_emo[A][i]=0;
		if(GetRand(1)==0){
		hei_emo[(A+1)%2][i]=8;
		hei_down[(A+1)%2][i]=300;
		}
		hei_moral[(A+1)%2][i]-=4000;
	}
	PlaySoundMem( se_no[14] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<60;t++){
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
return 0;
}
int sen_05(){
	flag_hyouhou[36]=1;
	if(hei_type[A][gun_kazu[A]]==8)strcpy_s(serihu, "うえ〜ん");
	else strcpy_s(serihu, "全軍退却");hukidasi();now_meirei[A]=5;now_time[A]=0;

	for(i=0;i<100;i++){
		hei_sen[A][i]=100;//兵士の戦闘状態
		hei_muk[A][i]=A;//兵士の向き
		hei_syou[A][i]=0;//兵士のモラル時間変化量
		hei_mov[A][i]=-hei_spd[A][i]*(A*2-1)*45;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
return 0;
}
int sen_06(){
	flag_hyouhou[1]=1;
	strcpy_s(serihu, "前列前進");hukidasi();now_meirei[A]=6;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_retu[A][i]==0){//前列の状態
		hei_sen[A][i]=3;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-5;//兵士のモラル時間変化量
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		}else{
		hei_sen[A][i]=40;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-1;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		}
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_07(){
	flag_hyouhou[2]=1;
	strcpy_s(serihu, "後列前進");hukidasi();now_meirei[A]=7;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_retu[A][i]==1){//前列の状態
		hei_sen[A][i]=3;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-5;//兵士のモラル時間変化量
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		}else{
		hei_sen[A][i]=40;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-1;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		}
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
return 0;
}
int sen_08(){
	flag_hyouhou[3]=1;
	strcpy_s(serihu, "速攻前進");hukidasi();now_meirei[A]=8;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_retu[A][i]==0){
		hei_sen[A][i]=3;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-5;//兵士のモラル時間変化量
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*75;//兵士の移動速度
		}else{
		hei_sen[A][i]=0;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=12;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		}
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
return 0;
}
int sen_09(){
	flag_hyouhou[4]=1;
	strcpy_s(serihu, "強撃前進");hukidasi();now_meirei[A]=9;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_retu[A][i]==0){
		hei_sen[A][i]=4;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-5;//兵士のモラル時間変化量
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*25;//兵士の移動速度
		}else{
		hei_sen[A][i]=0;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=12;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		}
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
return 0;
}
int sen_10(){
	flag_hyouhou[27]=1;
	strcpy_s(serihu, "後退攻撃");hukidasi();now_meirei[A]=10;now_time[A]=0;

	for(i=0;i<100;i++){
		hei_sen[A][i]=4;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=4;//兵士のモラル時間変化量
		hei_mov[A][i]=-hei_spd[A][i]*(A*2-1)*10;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
return 0;
}
int sen_11(){
	flag_hyouhou[5]=1;
	strcpy_s(serihu, "上翼攻撃");hukidasi();now_meirei[A]=11;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_y[A][i]<150000){
		hei_sen[A][i]=4;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-5;//兵士のモラル時間変化量
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		}else{
		hei_sen[A][i]=50;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-2;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		}
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
return 0;
}
int sen_12(){
	flag_hyouhou[6]=1;
	strcpy_s(serihu, "下翼攻撃");hukidasi();now_meirei[A]=12;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_y[A][i]>=150000){
		hei_sen[A][i]=4;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-5;//兵士のモラル時間変化量
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		}else{
		hei_sen[A][i]=50;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-2;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		}
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
return 0;
}
int sen_13(){
	flag_hyouhou[10]=1;
	strcpy_s(serihu, "前列突撃");hukidasi();now_meirei[A]=13;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_retu[A][i]==0){
		hei_sen[A][i]=3;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-7;//兵士のモラル時間変化量
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_moral[A][i]+=5000;
		hei_hirou[A][i]+=25000;
		hei_totu[A][i]=1;
		hei_down[A][i]/=2;
		}else{
		hei_sen[A][i]=40;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-1;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		hei_totu[A][i]=0;
		}
	}

	for(t=0;t<60;t++){
			for(i=0;i<100;i++){
			if(hei_retu[A][i]==0)hei_jump[A][i]+=19-t%20*2;
			}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}
	for(i=0;i<100;i++){
		if(hei_retu[A][i]==0)hei_emo[A][i]=1;
	}
	PlaySoundMem( se_no[13] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<60;t++){
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}
	for(i=0;i<100;i++){
		hei_emo[A][i]=0;
		if(GetRand(2)==0){
		hei_emo[(A+1)%2][i]=8;
		hei_down[(A+1)%2][i]=300;
		}
		hei_moral[(A+1)%2][i]-=2500;
	}
	PlaySoundMem( se_no[14] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<60;t++){
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_14(){
	flag_hyouhou[11]=1;
	strcpy_s(serihu, "後列突撃");hukidasi();now_meirei[A]=14;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_retu[A][i]==1){
		hei_sen[A][i]=3;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-7;//兵士のモラル時間変化量
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_moral[A][i]+=5000;
		hei_hirou[A][i]+=25000;
		hei_totu[A][i]=1;
		hei_down[A][i]/=2;
		}else{
		hei_sen[A][i]=40;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-1;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		hei_totu[A][i]=0;
		}
	}

	for(t=0;t<60;t++){
			for(i=0;i<100;i++){
			if(hei_retu[A][i]==1)hei_jump[A][i]+=19-t%20*2;
			}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	for(i=0;i<100;i++){
		if(hei_retu[A][i]==1)hei_emo[A][i]=1;
	}
	PlaySoundMem( se_no[13] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<60;t++){
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}
	for(i=0;i<100;i++){
		hei_emo[A][i]=0;
		if(GetRand(2)==0){
		hei_emo[(A+1)%2][i]=8;
		hei_down[(A+1)%2][i]=300;
		}
		hei_moral[(A+1)%2][i]-=2500;
	}
	PlaySoundMem( se_no[14] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<60;t++){
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
return 0;
}
int sen_15(){
	flag_hyouhou[12]=1;
	strcpy_s(serihu, "上翼突撃");hukidasi();now_meirei[A]=15;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_y[A][i]<150000){
		hei_sen[A][i]=4;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-7;//兵士のモラル時間変化量
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_moral[A][i]+=5000;
		hei_hirou[A][i]+=25000;
		hei_totu[A][i]=1;
		hei_down[A][i]/=2;
		}else{
		hei_sen[A][i]=50;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-2;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		hei_totu[A][i]=0;
		}
	}

	for(t=0;t<60;t++){
			for(i=0;i<100;i++){
			if(hei_y[A][i]<150000)hei_jump[A][i]+=19-t%20*2;
			}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	for(i=0;i<100;i++){
		if(hei_y[A][i]<150000)hei_emo[A][i]=1;
	}
	PlaySoundMem( se_no[13] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<60;t++){
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}
	for(i=0;i<100;i++){
		hei_emo[A][i]=0;
		if(GetRand(2)==0){
		hei_emo[(A+1)%2][i]=8;
		hei_down[(A+1)%2][i]=300;
		}
		hei_moral[(A+1)%2][i]-=2500;
	}
	PlaySoundMem( se_no[14] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<60;t++){
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
return 0;
}
int sen_16(){
	flag_hyouhou[13]=1;
	strcpy_s(serihu, "下翼突撃");hukidasi();now_meirei[A]=16;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_y[A][i]>=150000){
		hei_sen[A][i]=3;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-7;//兵士のモラル時間変化量
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_moral[A][i]+=5000;
		hei_hirou[A][i]+=25000;
		hei_totu[A][i]=1;
		hei_down[A][i]/=2;
		}else{
		hei_sen[A][i]=50;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-2;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		hei_totu[A][i]=0;
		}
	}

	for(t=0;t<60;t++){
			for(i=0;i<100;i++){
			if(hei_y[A][i]>=150000)hei_jump[A][i]+=19-t%20*2;
			}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	for(i=0;i<100;i++){
		if(hei_y[A][i]>=150000)hei_emo[A][i]=1;
	}
	PlaySoundMem( se_no[13] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<60;t++){
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}
	for(i=0;i<100;i++){
		hei_emo[A][i]=0;
		if(GetRand(2)==0){
		hei_emo[(A+1)%2][i]=8;
		hei_down[(A+1)%2][i]=300;
		}
		hei_moral[(A+1)%2][i]-=2500;
	}
	PlaySoundMem( se_no[14] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<60;t++){
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
return 0;
}
int sen_17(){
	flag_hyouhou[20]=1;
	strcpy_s(serihu, "前列防御");hukidasi();now_meirei[A]=17;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_retu[A][i]==0){//前列の状態
		hei_sen[A][i]=50;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-1;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		}else{
		hei_sen[A][i]=0;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=12;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		}
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_18(){
	flag_hyouhou[22]=1;
	strcpy_s(serihu, "全軍防御・強");hukidasi();now_meirei[A]=18;now_time[A]=0;

	for(i=0;i<100;i++){
		hei_sen[A][i]=60;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-3;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
return 0;
}
int sen_19(){
	flag_hyouhou[26]=1;
	strcpy_s(serihu, "後退防御");hukidasi();now_meirei[A]=19;now_time[A]=0;

	for(i=0;i<100;i++){
		hei_sen[A][i]=50;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=5;//兵士のモラル時間変化量
		hei_mov[A][i]=-hei_spd[A][i]*(A*2-1)*10;;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_20(){
	flag_hyouhou[25]=1;
	strcpy_s(serihu, "速攻後退");hukidasi();now_meirei[A]=20;now_time[A]=0;

	for(i=0;i<100;i++){
		hei_sen[A][i]=0;//兵士の戦闘状態
		hei_muk[A][i]=A;//兵士の向き
		hei_syou[A][i]=12;//兵士のモラル時間変化量
		hei_mov[A][i]=-hei_spd[A][i]*(A*2-1)*45;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
return 0;
}
int sen_21(){
	flag_hyouhou[28]=1;
	strcpy_s(serihu, "前列交代");hukidasi();now_meirei[A]=21;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_retu[A][i]==0){
		hei_sen[A][i]=50;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-1;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		}else{
		hei_sen[A][i]=3;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=0;//兵士のモラル時間変化量
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		}
		hei_totu[A][i]=0;
	}

	hikari();
	sirei_tame[A]=0;gun_jinkai[A]=0;
	gun_backline[A]=back_line[A];
	gun_change[A]=1;
	return 0;
}
int sen_22(){

	now_meirei[A]=22;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_retu[A][i]==0){//元前列、後退させる
		hei_sen[A][i]=0;//兵士の戦闘状態
		hei_muk[A][i]=A;//兵士の向き
		hei_syou[A][i]=12;//兵士のモラル時間変化量
		hei_mov[A][i]=-hei_spd[A][i]*(A*2-1)*40;//兵士の移動速度
		hei_retu[A][i]=1;
		}else{//元後列防御させる
		hei_sen[A][i]=50;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=4;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		hei_retu[A][i]=0;
		}
		hei_totu[A][i]=0;
	}

	gun_change[A]++;
	return 0;
}
int sen_23(){

	now_meirei[A]=23;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_retu[A][i]==0){//現前列、攻撃させる
		hei_sen[A][i]=3;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-5;//兵士のモラル時間変化量
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		}else{//現後列待機させる
		hei_sen[A][i]=0;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=12;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		}
		hei_totu[A][i]=0;
	}
	gun_change[A]=0;
return 0;
}
int sen_24(){
	flag_hyouhou[29]=1;
	strcpy_s(serihu, "速攻交代");hukidasi();now_meirei[A]=24;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_retu[A][i]==0){
		hei_sen[A][i]=50;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-1;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		}else{
		hei_sen[A][i]=3;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=0;//兵士のモラル時間変化量
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		}
		hei_totu[A][i]=0;
	}

	hikari();
	sirei_tame[A]=0;gun_jinkai[A]=0;
	gun_backline[A]=back_line[A];
	gun_change[A]=4;
return 0;
}
int sen_25(){
	flag_hyouhou[30]=1;
	strcpy_s(serihu, "統率回復・弱");hukidasi();
	gun_change[A]=0;gun_jinkai[A]=0;
	sirei_tame[A]=180;

return 0;
}
int sen_26(){

	//統率回復発動
	for(i=0;i<100;i++){
		hei_moral[A][i]+=1000+sirei_tame[A];//兵士の押し
		hei_hirou[A][i]-=10000+sirei_tame[A]*10;//兵士の押し
		hei_sen[A][i]+=200;
		hei_down[A][i]/=2;
	}
	hikari();
	for(i=0;i<100;i++){
		hei_emo[A][i]=9;
	}
	PlaySoundMem( se_no[12] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<50;t++){
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}
	for(i=0;i<100;i++){
		hei_sen[A][i]-=200;
		hei_emo[A][i]=0;
	}
	return 0;
}
int sen_27(){
	flag_hyouhou[32]=1;
	strcpy_s(serihu, "陣形回復");hukidasi();now_meirei[A]=27;now_time[A]=0;

	for(i=0;i<100;i++){
		hei_sen[A][i]=0;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=6;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;
	gun_frontline[A]=front_line[A];
	gun_jinkai[A]=360;
return 0;
}
int sen_28(){
	now_meirei[A]=28;now_time[A]=0;
	//陣形回復完了
	for(i=0;i<100;i++){
		hei_sen[A][i]=200;//兵士の戦闘状態
		hei_moral[A][i]=10000;//兵士のモラル
		hei_retu[A][i]=hei_retu_syoki[A][i];
		hei_totu[A][i]=0;
		hei_down[A][i]=0;
	}
		hikari();
	for(i=0;i<100;i++){
		hei_sen[A][i]=40;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-1;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		hei_emo[A][i]=9;
	}
	PlaySoundMem( se_no[12] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<50;t++){
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}
	for(i=0;i<100;i++) hei_emo[A][i]=0;
	hikari();
	return 0;
}
int sen_29(){
	flag_hyouhou[21]=1;
	strcpy_s(serihu, "前列死守");hukidasi();now_meirei[A]=30;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_retu[A][i]==0){//前列の状態
		hei_sen[A][i]=90;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-3;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		}else{
		hei_sen[A][i]=0;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=12;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		}
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;

return 0;
}
int sen_30(){
	flag_hyouhou[31]=1;
	strcpy_s(serihu, "統率回復・強");hukidasi();
	gun_change[A]=0;gun_jinkai[A]=0;
	sirei_tame[A]=1180;
	return 0;
}
int sen_31(){
	flag_hyouhou[33]=1;
	strcpy_s(serihu, "陣形回復・速");hukidasi();now_meirei[A]=32;now_time[A]=0;

	for(i=0;i<100;i++){
		hei_sen[A][i]=0;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=4;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		hei_totu[A][i]=0;
	}
		sirei_tame[A]=0;gun_change[A]=0;
		gun_frontline[A]=front_line[A];
		gun_jinkai[A]=1300;
return 0;
}
int sen_32(){
	flag_hyouhou[40]=1;
	now_meirei[A]=32;now_time[A]=0;
	//死んだフリ
	for(i=0;i<100;i++){
		if((hei_retu[A][i]==0 || i==gun_kazu[A]) && hei_toppa[A][i]==0 && hei_sibou[A][i]==0){
			hei_sibou[A][i]=1;
			hei_sen[A][i]=0;//兵士の戦闘状態
			hei_muk[A][i]=A;//兵士の向き
			hei_syou[A][i]=0;//兵士のモラル時間変化量
			hei_mov[A][i]=0;//兵士の移動速度
		}
		else{
		hei_sen[A][i]=0;//兵士の戦闘状態
		hei_muk[A][i]=A;//兵士の向き
		hei_syou[A][i]=12;//兵士のモラル時間変化量
		hei_mov[A][i]=-hei_spd[A][i]*(A*2-1)*40;//兵士の移動速度
		}
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;

	gun_frontline[A]=front_line[A];

	gun_sindahuri[A]=300;
	return 0;
}
int sen_33(){

	for(i=0;i<100;i++)if(hei_kaz[A][i]>0)hei_sibou[A][i]=0;
		strcpy_s(serihu, "奇策の兵法");hukidasi();now_meirei[A]=33;now_time[A]=0;
		strcpy_s(serihu, "死んだフリ作戦");hukidasi();

	for(i=0;i<100;i++){
		if((1-A*2)*hei_x[(A+1)%2][i]-(1-A*2)*gun_frontline[A]>0){
		hei_emo[(A+1)%2][i]=8;
		hei_down[(A+1)%2][i]=300;
		hei_moral[(A+1)%2][i]-=3000;
		}
	}
	PlaySoundMem( se_no[14] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<50;t++){
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	for(i=0;i<100;i++){
		hei_sen[A][i]=3;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-5;//兵士のモラル時間変化量
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_totu[A][i]=0;
		hei_retu[A][i]=hei_retu_syoki[A][i];
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();

return 0;
}
int sen_34(){
	flag_hyouhou[41]=1;
	now_meirei[A]=34;now_time[A]=0;
	for(t=0;t<60;t++){
			for(i=0;i<100;i++){
			hei_jump[A][i]+=19-t%20*2;
			}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

		strcpy_s(serihu, "あまごい");hukidasi();
		strcpy_s(serihu, "わっしょい");hukidasi();
		strcpy_s(serihu, "あまごい");hukidasi();
		strcpy_s(serihu, "わっしょい");hukidasi();

	tenkou=300;
	tenki=1;

	for(i=0;i<100;i++){
		hei_sen[A][i]=40;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-1;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	PlaySoundMem( se_no[15] , DX_PLAYTYPE_BACK ) ;
	hikari();
	return 0;
}
int sen_35(){
	flag_hyouhou[42]=1;
	now_meirei[A]=35;now_time[A]=0;
	for(t=0;t<60;t++){
			for(i=0;i<100;i++){
			hei_jump[A][i]+=19-t%20*2;
			}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

		strcpy_s(serihu, "ゆきだる");hukidasi();
		strcpy_s(serihu, "まっしょい");hukidasi();
		strcpy_s(serihu, "ゆきだる");hukidasi();
		strcpy_s(serihu, "まっしょい");hukidasi();

	tenkou=600;
	tenki=2;

	for(i=0;i<100;i++){
		hei_sen[A][i]=40;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-1;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_36(){
	flag_hyouhou[15]=1;
	strcpy_s(serihu, "分断作戦");hukidasi();now_meirei[A]=36;now_time[A]=0;

	for(i=0;i<100;i++){
	hei_t1[A][i]=hei_x[A][i];
	hei_t2[A][i]=(front_line[(A+1)%2]+back_line[(A+1)%2])/2;
	}

	for(t=0;t<101;t++){
			for(i=0;i<100;i++){
			if(hei_retu[A][i]==1 || hei_sibou[A][i]!=0 || hei_toppa[A][i]!=0)continue;
			hei_jump[A][i]+=50-t;
			hei_x[A][i]=(hei_t2[A][i]*t+hei_t1[A][i]*(100-t))/100;
			}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	for(i=0;i<100;i++){

		if(hei_x[(A+1)%2][i]*2*(1-A*2)>(front_line[(A+1)%2]+back_line[(A+1)%2])*(1-A*2)){
		hei_emo[(A+1)%2][i]=8;
		hei_down[(A+1)%2][i]=300;
		hei_moral[(A+1)%2][i]-=3000;
		}
	}

	for(t=0;t<50;t++){
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	for(i=0;i<100;i++) hei_emo[(A+1)%2][i]=0;

	for(i=0;i<100;i++){
		hei_sen[A][i]=3;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-5;//兵士のモラル時間変化量
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
	}
	hikari();
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	return 0;
}
int sen_37(){
	strcpy_s(serihu, "投石用意");hukidasi();
	gun_change[A]=0;gun_jinkai[A]=0;
	shot_line[A]=320;
	shot_tame[A]=180;

return 0;
}
int sen_38(){

	strcpy_s(serihu, "発射");hukidasi();
	for(t=0;t<50;t++){
		sentou_byouga();
		for(i=0;i<7;i++)
		DrawGraph( shot_line[A]-20, i*48-210+t*6, iwa, TRUE ) ;
		ScreenFlip();
	}
	PlaySoundMem( se_no[9] , DX_PLAYTYPE_BACK ) ;

	for(j=0;j<2;j++)
		for(i=0;i<100;i++){
			if(hei_x[j][i]>shot_line[A]*1000-36000 && hei_x[j][i]<shot_line[A]*1000+36000 && GetRand(1)==0 && i!= gun_kazu[j]){
			for(c=0;c<1000;c++){
			if(dame_t[c]>0)continue;
			dame_x[c]=hei_x[j][i]/1000-10;
			dame_y[c]=hei_y[j][i]/1000;
			dame_k[c]=hei_kaz[j][i]+(1-j)*1000;
			dame_t[c]=50;
			break;
			}
			hei_kaz[j][i]=0;
		}
	}
	return 0;
}
int sen_39(){
	flag_hyouhou[14]=1;
	strcpy_s(serihu, "指揮官突撃");hukidasi();now_meirei[A]=39;now_time[A]=0;

	for(i=0;i<100;i++){
		if(i==gun_kazu[A]){
		hei_sen[A][i]=5;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-5;//兵士のモラル時間変化量
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*75;//兵士の移動速度
		hei_moral[A][i]+=10000;
		hei_hirou[A][i]-=100000;
		hei_totu[A][i]=1;
		hei_down[A][i]=0;
		}else{
		hei_sen[A][i]=40;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=4;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		hei_totu[A][i]=0;
		}
	}

	for(t=0;t<60;t++){
			hei_jump[A][gun_kazu[A]]+=19-t%20*2;
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	hei_emo[A][gun_kazu[A]]=1;

	PlaySoundMem( se_no[13] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<60;t++){
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_40(){
	flag_hyouhou[16]=1;
	strcpy_s(serihu, "爆裂部隊");hukidasi();now_meirei[A]=40;now_time[A]=0;

	for(i=0;i<100;i++){
	hei_t1[A][i]=hei_x[A][i];
	hei_t2[A][i]=front_line[(A+1)%2];
	}

	for(t=0;t<101;t++){
			j=0;
			for(i=0;i<100;i++){
			if(hei_retu[A][i]==1 || i== gun_kazu[A] || hei_sibou[A][i]!=0 || hei_toppa[A][i]!=0)continue;
			j++;
			if(j%3!=1)continue;
			hei_jump[A][i]+=25-t/2;
			hei_x[A][i]=(hei_t2[A][i]*t+hei_t1[A][i]*(100-t))/100;
			}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	for(i=0;i<100;i++){
			hei_sen[A][i]=50;//兵士の戦闘状態
			hei_muk[A][i]=1-A;//兵士の向き
			hei_syou[A][i]=-2;//兵士のモラル時間変化量
			hei_mov[A][i]=0;//兵士の移動速度
			hei_totu[A][i]=0;
			hei_jump[A][i]=0;
	}
	j=0;
	for(i=0;i<100;i++){
		if(i!=gun_kazu[A] && hei_retu[A][i]==0 && hei_sibou[A][i]==0 && hei_toppa[A][i]==0){
			j++;
			if(j%3!=1)continue;
			hei_bom[A][i]=2;
			hei_sen[A][i]=4;//兵士の戦闘状態
			hei_muk[A][i]=1-A;//兵士の向き
			hei_syou[A][i]=-5;//兵士のモラル時間変化量
			hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		}
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	gun_bom[A]=300;
	hikari();
	return 0;
}
int sen_41(){
	flag_hyouhou[17]=1;
	strcpy_s(serihu, "火攻め");
	hukidasi();now_meirei[A]=41;now_time[A]=0;

	for(t=0;t<50;t++){
		for(i=0;i<100;i++){
		hei_x[A][i]+=(1-A*2)*750;
		}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	PlaySoundMem( se_no[8] , DX_PLAYTYPE_BACK ) ;
	for(i=A*50;i<25+A*50;i++){
	fire_time[i]=300;//火消滅までの時間
	fire_x[i]=front_line[A]+(A*2-1)*20000;//火の座標
	fire_y[i]=i%50%25*12500;//火の座標
	fire_v[i]=(A*2-1)*100;//火の移動速度
	}

	for(i=0;i<100;i++){
		hei_sen[A][i]=40;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-1;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();

	return 0;
}
int sen_42(){
	flag_hyouhou[38]=1;
	strcpy_s(serihu, "おとり作戦");hukidasi();now_meirei[A]=42;now_time[A]=0;
	meireihuka[(A+1)%2]=600;//命令不可能状態
	ikari[(A+1)%2]=1;//怒り表示用

	hei_muk[A][gun_kazu[A]]=1-A;
	for(t=0;t<200;t++){
		if(hei_x[A][gun_kazu[A]]<front_line[(A+1)%2]+60000 && A==0) break;
		if(hei_x[A][gun_kazu[A]]>front_line[(A+1)%2]-60000 && A==1) break;
		hei_x[A][gun_kazu[A]]+=1500*(A*2-1);
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	for(t=0;t<60;t++){
		hei_jump[A][gun_kazu[A]]+=38-t%20*4;
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	strcpy_s(serihu, "おまえのかーちゃん");hukidasi();now_meirei[A]=42;now_time[A]=0;
	strcpy_s(serihu, "で〜　　　");hukidasi();
	strcpy_s(serihu, "で〜べ　　");hukidasi();
	strcpy_s(serihu, "で〜べそ〜");hukidasi();

	A=(A+1)%2;
	strcpy_s(serihu, "うぬぬぬぬぬぬ");hukidasi();
	strcpy_s(serihu, "ふざけた真似を");hukidasi();
	A=(A+1)%2;
	strcpy_s(serihu, "私が町長です");hukidasi();
	A=(A+1)%2;
	hei_emo[A][gun_kazu[A]]=6;
	for(t=0;t<60;t++){
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}
	hei_emo[A][gun_kazu[A]]=0;
	strcpy_s(serihu, "馬鹿にしやがって");hukidasi();
	sen_04();
	A=(A+1)%2;


	for(i=0;i<100;i++){
		if(i!=gun_kazu[A]){
		hei_sen[A][i]=40;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-1;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		}else{
		hei_sen[A][i]=0;//兵士の戦闘状態
		hei_muk[A][i]=A;//兵士の向き
		hei_syou[A][i]=12;//兵士のモラル時間変化量
		hei_mov[A][i]=-hei_spd[A][i]*(A*2-1)*40;//兵士の移動速度
		}
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();

	return 0;
}
int sen_43(){
	flag_hyouhou[39]=1;
	strcpy_s(serihu, "てっ‥‥");hukidasi();now_meirei[A]=43;now_time[A]=0;
	strcpy_s(serihu, "撤退だ〜");hukidasi();
	for(i=0;i<100;i++)hei_t2[A][i]=hei_x[A][i];
	for(i=0;i<100;i++)hei_muk[A][i]=A;

	for(t=0;t<60;t++){
		sentou_byouga();//戦闘中の描画処理
		for(i=0;i<100;i++)
		hei_x[A][i]-=(A*2-1)*11000;
		ScreenFlip();
	}
	A=(A+1)%2;
	strcpy_s(serihu, "敵が逃げていく‥‥");hukidasi();
	strcpy_s(serihu, "我が軍の勝利だ！");hukidasi();
	for(t=0;t<60;t++){
			for(i=0;i<100;i++){
			hei_jump[A][i]+=19-t%20*2;
			}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}
	A=(A+1)%2;


	for(i=0;i<100;i++)hei_muk[A][i]=1-A;

	for(i=0;i<100;i++){
	hei_t1[A][i]=hei_x[A][i];
	}

	for(t=0;t<121;t++){
			for(i=0;i<100;i++){
			hei_jump[A][i]+=60-t;
			hei_x[A][i]=(hei_t2[A][i]*t+hei_t1[A][i]*(120-t))/120;
			}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}


	A=(A+1)%2;
	strcpy_s(serihu, "戻ってきただと！？");hukidasi();

	A=(A+1)%2;
	for(i=0;i<100;i++){
		hei_emo[(A+1)%2][i]=8;
		hei_down[(A+1)%2][i]=900;
		hei_moral[(A+1)%2][i]-=3000;
	}
	PlaySoundMem( se_no[14] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<60;t++){
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	for(i=0;i<100;i++){
		hei_sen[A][i]=2;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-5;//兵士のモラル時間変化量
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();

return 0;
}
int sen_44(){
	flag_hyouhou[45]=1;
	strcpy_s(serihu, "情報操作Ｌ１");hukidasi();now_meirei[A]=44;now_time[A]=0;
	meireihuka[(A+1)%2]=240;//命令不可能状態
	ikari[(A+1)%2]=0;//怒り表示用
	for(i=0;i<100;i++){
	hei_t1[A][i]=hei_x[A][i];
	hei_t2[A][i]=(front_line[(A+1)%2]+back_line[(A+1)%2])/2;
	}

	for(t=0;t<121;t++){
			for(i=0,j=0;i<100;i++){
			if(hei_kaz[A][i]<=0 || hei_toppa[A][i]!=0 || hei_sibou[A][i]!=0 || hei_retu[A][i]==1) continue;
			hei_jump[A][i]+=60-t;
			hei_x[A][i]=(hei_t2[A][i]*t+hei_t1[A][i]*(120-t))/120;
			j++;
			if(j==2)break;
			}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	for(i=0,j=0;i<100;i++){
		if(hei_kaz[A][i]<=0 || hei_toppa[A][i]!=0 || hei_sibou[A][i]!=0 || hei_retu[A][i]==1) continue;
		hei_kaz[A][i]=0;
		hei_sibou[A][i]=999;
		j++;
		if(j==2)break;
	}

	A=(A+1)%2;
	sen_01();
	A=(A+1)%2;
	for(i=0;i<100;i++){
		hei_sen[A][i]=40;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-1;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();

return 0;
}
int sen_45(){
	flag_hyouhou[46]=1;
	strcpy_s(serihu, "情報操作Ｌ２");hukidasi();now_meirei[A]=45;now_time[A]=0;
	meireihuka[(A+1)%2]=240;//命令不可能状態
	ikari[(A+1)%2]=0;//怒り表示用
	for(i=0;i<100;i++){
	hei_t1[A][i]=hei_x[A][i];
	hei_t2[A][i]=(front_line[(A+1)%2]+back_line[(A+1)%2])/2;
	}

	for(t=0;t<121;t++){
			for(i=0,j=0;i<100;i++){
			if(hei_kaz[A][i]<=0 || hei_toppa[A][i]!=0 || hei_sibou[A][i]!=0 || hei_retu[A][i]==1) continue;
			hei_jump[A][i]+=60-t;
			hei_x[A][i]=(hei_t2[A][i]*t+hei_t1[A][i]*(120-t))/120;
			j++;
			if(j==3)break;
			}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	for(i=0,j=0;i<100;i++){
		if(hei_kaz[A][i]<=0 || hei_toppa[A][i]!=0 || hei_sibou[A][i]!=0 || hei_retu[A][i]==1) continue;
		hei_kaz[A][i]=0;
		hei_sibou[A][i]=999;
		j++;
		if(j==3)break;
	}

	A=(A+1)%2;
	sen_03();
	A=(A+1)%2;
	for(i=0;i<100;i++){
		hei_sen[A][i]=40;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-1;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();


	return 0;
}
int sen_46(){
	flag_hyouhou[47]=1;
	strcpy_s(serihu, "情報操作Ｌ３");hukidasi();now_meirei[A]=46;now_time[A]=0;
	meireihuka[(A+1)%2]=240;//命令不可能状態
	ikari[(A+1)%2]=0;//怒り表示用
	for(i=0;i<100;i++){
	hei_t1[A][i]=hei_x[A][i];
	hei_t2[A][i]=(front_line[(A+1)%2]+back_line[(A+1)%2])/2;
	}

	for(t=0;t<121;t++){
			for(i=0,j=0;i<100;i++){
			if(hei_kaz[A][i]<=0 || hei_toppa[A][i]!=0 || hei_sibou[A][i]!=0 || hei_retu[A][i]==1) continue;
			hei_jump[A][i]+=60-t;
			hei_x[A][i]=(hei_t2[A][i]*t+hei_t1[A][i]*(120-t))/120;
			j++;
			if(j==4)break;
			}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	for(i=0,j=0;i<100;i++){
		if(hei_kaz[A][i]<=0 || hei_toppa[A][i]!=0 || hei_sibou[A][i]!=0 || hei_retu[A][i]==1) continue;
		hei_kaz[A][i]=0;
		hei_sibou[A][i]=999;
		j++;
		if(j==4)break;
	}

	A=(A+1)%2;
	sen_57();
	A=(A+1)%2;
	for(i=0;i<100;i++){
		hei_sen[A][i]=40;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-1;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();

return 0;
}
int sen_47(){
	flag_hyouhou[48]=1;
	strcpy_s(serihu, "情報操作Ｌ４");hukidasi();now_meirei[A]=47;now_time[A]=0;
	meireihuka[(A+1)%2]=240;//命令不可能状態
	ikari[(A+1)%2]=0;//怒り表示用
	for(i=0;i<100;i++){
	hei_t1[A][i]=hei_x[A][i];
	hei_t2[A][i]=(front_line[(A+1)%2]+back_line[(A+1)%2])/2;
	}

	for(t=0;t<121;t++){
			for(i=0,j=0;i<100;i++){
			if(hei_kaz[A][i]<=0 || hei_toppa[A][i]!=0 || hei_sibou[A][i]!=0 || hei_retu[A][i]==1) continue;
			hei_jump[A][i]+=60-t;
			hei_x[A][i]=(hei_t2[A][i]*t+hei_t1[A][i]*(120-t))/120;
			j++;
			if(j==5)break;
			}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	for(i=0,j=0;i<100;i++){
		if(hei_kaz[A][i]<=0 || hei_toppa[A][i]!=0 || hei_sibou[A][i]!=0 || hei_retu[A][i]==1) continue;
		hei_kaz[A][i]=0;
		hei_sibou[A][i]=999;
		j++;
		if(j==5)break;
	}

	A=(A+1)%2;
	sen_02();
	A=(A+1)%2;
	for(i=0;i<100;i++){
		hei_sen[A][i]=40;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-1;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();

	return 0;
}
int sen_48(){
	flag_hyouhou[49]=1;
	strcpy_s(serihu, "情報操作Ｌ５");hukidasi();now_meirei[A]=48;now_time[A]=0;
	if(meireihuka[(A+1)%2]<0)meireihuka[(A+1)%2]=240;//命令不可能状態
	else					 meireihuka[(A+1)%2]+=240;//命令不可能状態
	ikari[(A+1)%2]=0;//怒り表示用
	for(i=0;i<100;i++){
	hei_t1[A][i]=hei_x[A][i];
	hei_t2[A][i]=(front_line[(A+1)%2]+back_line[(A+1)%2])/2;
	}

	for(t=0;t<121;t++){
			for(i=0,j=0;i<100;i++){
			if(hei_kaz[A][i]<=0 || hei_toppa[A][i]!=0 || hei_sibou[A][i]!=0 || hei_retu[A][i]==1) continue;
			hei_jump[A][i]+=60-t;
			hei_x[A][i]=(hei_t2[A][i]*t+hei_t1[A][i]*(120-t))/120;
			j++;
			if(j==1)break;
			}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	for(i=0,j=0;i<100;i++){
		if(hei_kaz[A][i]<=0 || hei_toppa[A][i]!=0 || hei_sibou[A][i]!=0 || hei_retu[A][i]==1) continue;
		hei_kaz[A][i]=0;
		hei_sibou[A][i]=999;
		j++;
		if(j==1)break;
	}

	for(i=0;i<100;i++){
		hei_sen[A][i]=40;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-1;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	hikari();
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	return 0;
}
int sen_49(){
	flag_hyouhou[43]=1;
	strcpy_s(serihu, "穴掘り作戦");hukidasi();now_meirei[A]=49;now_time[A]=0;

	for(t=0;t<60;t++){
		if(t%12==0)	PlaySoundMem( se_no[0] , DX_PLAYTYPE_BACK ) ;
		if(t%3==0)for(i=0;i<100;i++){
		if(hei_retu[A][i]==0)continue;
		hei_muk[A][i]++;
		hei_muk[A][i]%=4;
		hei_jump[A][i]-=5;
		}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	for(t=0;t<10;t++){
		for(i=0;i<100;i++){
		if(hei_retu[A][i]==0)continue;
		hei_jump[A][i]+=10;
		}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	for(i=0+A*50;i<20+A*50;i++){
	ana_id[i]=2-A;//設置した部隊
	ana_x[i]=back_line[A];//落とし穴の座標
	ana_y[i]=i%25*15000;//落とし穴の座標
	}

	for(i=0;i<100;i++){
		hei_sen[A][i]=0;//兵士の戦闘状態
		hei_muk[A][i]=A;//兵士の向き
		hei_syou[A][i]=12;//兵士のモラル時間変化量
		hei_mov[A][i]=-hei_spd[A][i]*(A*2-1)*30;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	return 0;
}
int sen_50(){
	flag_hyouhou[34]=1;
	strcpy_s(serihu, "防柵作戦");hukidasi();now_meirei[A]=50;now_time[A]=0;
	for(t=0;t<50;t++){
		for(i=0;i<100;i++){
		hei_x[A][i]+=(1-A*2)*750;
		}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	for(i=A*50;i<25+A*50;i++){
	saku_tai[i]=100;//柵の耐久性
	saku_x[i]=front_line[A]+(A*2-1)*20000;//柵の座標
	saku_y[i]=i%25*12500-500000;//柵の座標
	}

	for(t=0;t<50;t++){
	for(i=A*50;i<50+A*50;i++){
		if(i==25 || i==75 )break;
		saku_y[i]+=10000;//柵の座標
		}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	for(i=0;i<100;i++){
		hei_sen[A][i]=40;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-1;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	hikari();
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	return 0;
}
int sen_51(){
	flag_hyouhou[35]=1;
	strcpy_s(serihu, "水際作戦");hukidasi();now_meirei[A]=51;now_time[A]=0;

	for(i=A*50+25;i<50+A*50;i++){
	saku_tai[i]=100;//柵の耐久性
	saku_x[i]=40000+(1-A)*560000;//柵の座標
	saku_y[i]=i%25*12500-500000;//柵の座標
	}

	for(t=0;t<50;t++){
	for(i=A*50+25;i<50+A*50;i++){
		saku_y[i]+=10000;//柵の座標
		}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	for(i=0;i<100;i++){
		hei_sen[A][i]=40;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-1;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	hikari();
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	return 0;
}
int sen_52(){
	flag_hyouhou[18]=1;
	strcpy_s(serihu, "背火の計");hukidasi();now_meirei[A]=52;now_time[A]=0;

	if(A==0)xa=0;
	else xa=640000;

	for(i=A*50+25;i<50+A*50;i++){
	fire_time[i]=600;//火消滅までの時間
	fire_x[i]=back_line[A]+(1-A*2)*32000;//火の座標
	fire_y[i]=i%25*12500;//火の座標
	fire_v[i]=(A*2-1)*200;//火の移動速度
	}
	PlaySoundMem( se_no[8] , DX_PLAYTYPE_BACK ) ;

	for(t=0;t<60;t++){
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	for(i=0;i<100;i++){
		hei_sen[A][i]=4;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-5;//兵士のモラル時間変化量
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*25;
		hei_totu[A][i]=0;
	}
	hikari();
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	return 0;
}
int sen_53(){
	strcpy_s(serihu, "投石用意");hukidasi();//左
	gun_change[A]=0;gun_jinkai[A]=0;
	shot_line[A]=120;
	shot_tame[A]=180;
	return 0;
}
int sen_54(){
	strcpy_s(serihu, "投石用意");hukidasi();//右
	gun_change[A]=0;gun_jinkai[A]=0;
	shot_line[A]=520;
	shot_tame[A]=180;
	return 0;
}
int sen_55(){
	flag_hyouhou[37]=1;
	strcpy_s(serihu, "速攻退却");hukidasi();now_meirei[A]=55;now_time[A]=0;
	for(i=0;i<100;i++){
		hei_sen[A][i]=100;//兵士の戦闘状態
		hei_muk[A][i]=A;//兵士の向き
		hei_syou[A][i]=0;//兵士のモラル時間変化量
		hei_mov[A][i]=-hei_spd[A][i]*(A*2-1)*100;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	return 0;
}
int sen_56(){
	flag_hyouhou[7]=1;
	strcpy_s(serihu, "全軍前進・強");hukidasi();now_meirei[A]=56;now_time[A]=0;
	for(i=0;i<100;i++){
		hei_sen[A][i]=4;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-6;//兵士のモラル時間変化量
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_57(){
	flag_hyouhou[24]=1;
	if(hei_type[A][gun_kazu[A]]==8)strcpy_s(serihu, "うとうと");
	else strcpy_s(serihu, "全軍休息");hukidasi();now_meirei[A]=57;now_time[A]=0;

	for(i=0;i<100;i++){
		hei_sen[A][i]=0;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=12;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_58(){
	flag_hyouhou[8]=1;
	strcpy_s(serihu, "戦場の・・・・");hukidasi();
	strcpy_s(serihu, "風が来る!!!");hukidasi();

	PlaySoundMem( se_no[6] , DX_PLAYTYPE_BACK ) ;
	now_meirei[A]=58;now_time[A]=0;
	for(i=0;i<100;i++){
		fire_v[i]=(A*2-1)*abs(fire_v[i])*4;//火の移動速度
		fire_time[i]/=2;
	}
	for(i=0;i<100;i++){
		hei_sen[A][i]=3;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-5;//兵士のモラル時間変化量
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*90;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_59(){
	flag_hyouhou[44]=1;
	strcpy_s(serihu, "地割れ作戦");
	hukidasi();now_meirei[A]=59;now_time[A]=0;
	for(t=0;t<63;t++){
			if(t%12==0)	PlaySoundMem( se_no[1] , DX_PLAYTYPE_BACK ) ;
			for(i=0;i<100;i++){
			if(hei_retu[A][i]==1)continue;
			hei_jump[A][i]+=(4-t%9)*25;
			}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	for(i=25+A*50;i<45+A*50;i++){
	ana_id[i]=2-A;//設置した部隊
	ana_x[i]=front_line[A];//落とし穴の座標
	ana_y[i]=i%25*15000;//落とし穴の座標
	}

	for(i=0;i<100;i++){
		hei_sen[A][i]=0;//兵士の戦闘状態
		hei_muk[A][i]=A;//兵士の向き
		hei_syou[A][i]=12;//兵士のモラル時間変化量
		hei_mov[A][i]=-hei_spd[A][i]*(A*2-1)*30;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	return 0;
}
int sen_60(){

	strcpy_s(serihu, "すらいむふぃ〜ば〜");hukidasi();
	strcpy_s(serihu, "しるものきたれ〜!!!");hukidasi();

	now_meirei[A]=60;now_time[A]=0;

	for(t=0;t<gun_kazu[A];t++){
		if(hei_kaz[A][t]<=0 && hei_sibou[A][t]!=0 && hei_esc[A][t]==0){
		hei_sibou[A][t]=0;
		}
		hei_moral[A][t]=10000;
		hei_hirou[A][t]=0;
		hei_totu[A][t]=0;
		hei_down[A][t]=0;
		hei_kaz[A][t]=100;
		hei_pow[A][t]+=3;
		hei_hura[A][t]=255;
		hei_sen[A][t]=200;
		PlaySoundMem( se_no[2] , DX_PLAYTYPE_BACK ) ;
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}
	
	for(i=0;i<gun_kazu[A];i++){
	hei_hura[A][i]=0;
	}

	for(i=0;i<100;i++){
		hei_sen[A][i]=2;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-5;//兵士のモラル時間変化量
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_61(){
	strcpy_s(serihu, "信じる者達");hukidasi();now_meirei[A]=61;now_time[A]=0;

	for(i=0;i<100;i++){
	hei_t1[A][i]=hei_x[A][i];
	hei_t2[A][i]=front_line[(A+1)%2];
	}

	for(t=0;t<101;t++){
			j=0;
			for(i=0;i<100;i++){
			if(hei_retu[A][i]==1 || i== gun_kazu[A] || hei_sibou[A][i]!=0 || hei_toppa[A][i]!=0)continue;
			j++;
			if(j%4!=1)continue;
			hei_x[A][i]=(hei_t2[A][i]*t+hei_t1[A][i]*(100-t))/100;
			}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	for(i=0;i<100;i++){
			hei_sen[A][i]=50;//兵士の戦闘状態
			hei_muk[A][i]=1-A;//兵士の向き
			hei_syou[A][i]=-2;//兵士のモラル時間変化量
			hei_mov[A][i]=0;//兵士の移動速度
			hei_totu[A][i]=0;
			hei_jump[A][i]=0;
	}
	j=0;
	for(i=0;i<100;i++){
		if(i!=gun_kazu[A] && hei_retu[A][i]==0 && hei_sibou[A][i]==0 && hei_toppa[A][i]==0){
			j++;
			if(j%4!=1)continue;
			hei_bom[A][i]=2;
			hei_sen[A][i]=4;//兵士の戦闘状態
			hei_muk[A][i]=1-A;//兵士の向き
			hei_syou[A][i]=-5;//兵士のモラル時間変化量
			hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		}
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	gun_bom[A]=300;
	hikari();
	return 0;
}
int sen_62(){
	if(hei_type[A][gun_kazu[A]]==8){
		strcpy_s(serihu, "いたいのとんでけ〜");
	}else strcpy_s(serihu, "生命回復");

	hukidasi();
	now_meirei[A]=62;now_time[A]=0;
	for(i=0;i<100;i++){
		if(hei_kaz[A][i]>0 && hei_toppa[A][i]==0 && hei_esc[A][i]==0){
		if(hei_kaz[A][i]<100)hei_kaz[A][i]=100;
		hei_sen[A][i]=200;
		}else{
		hei_sen[A][i]=0;
		}
	}
	hikari();

	for(i=0;i<100;i++){
		if(hei_kaz[A][i]>0 && hei_toppa[A][i]==0 && hei_esc[A][i]==0){
		hei_emo[A][i]=7;//兵士の押し
		}
	}
	PlaySoundMem( se_no[12] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<60;t++){
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}
	for(i=0;i<100;i++)hei_emo[A][i]=0;//兵士の押し

	for(i=0;i<100;i++){
		hei_sen[A][i]=2;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-5;//兵士のモラル時間変化量
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_moral[A][i]+=5000;
		hei_hirou[A][i]-=50000;
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_63(){

	strcpy_s(serihu, "ナラクの風");hukidasi();now_meirei[A]=4;now_time[A]=0;

	for(i=0;i<100;i++){
		hei_sen[A][i]=4;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-12;//兵士のモラル時間変化量
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*75;//兵士の移動速度
		hei_moral[A][i]=10000;
		hei_hirou[A][i]=0;
		hei_totu[A][i]=1;
		hei_down[A][i]/=2;
	}

	for(t=0;t<60;t++){
			for(i=0;i<100;i++){
			hei_jump[A][i]+=19-t%20*2;
			}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	for(i=0;i<100;i++){
		hei_emo[A][i]=1;
	}
	PlaySoundMem( se_no[13] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<60;t++){
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}
	for(i=0;i<100;i++){
		hei_emo[(A+1)%2][i]=8;
		hei_down[(A+1)%2][i]=300;
		hei_moral[(A+1)%2][i]=0;
	}
	PlaySoundMem( se_no[14] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<60;t++){
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_64(){

	if(hei_type[A][gun_kazu[A]]==8){
		strcpy_s(serihu, "もえちゃえ〜");
	}else strcpy_s(serihu, "大熱波");

	hukidasi();now_meirei[A]=41;now_time[A]=0;

	for(t=0;t<50;t++){
		for(i=0;i<100;i++){
		hei_x[A][i]+=(1-A*2)*750;
		}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	if(hei_type[A][gun_kazu[A]]==8){
		strcpy_s(serihu, "ふぁいや!!!");
		hukidasi();
	}

	PlaySoundMem( se_no[8] , DX_PLAYTYPE_BACK ) ;

	for(i=A*50;i<25+A*50;i++){
	fire_time[i]=300;//火消滅までの時間
	fire_x[i]=front_line[A];//火の座標
	fire_y[i]=i%50%25*12500;//火の座標
	fire_v[i]=(A*2-1)*200;//火の移動速度
	}

	for(i=0;i<100;i++){
		hei_sen[A][i]=40;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-1;//兵士のモラル時間変化量
		hei_mov[A][i]=0;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();

	return 0;
}
int sen_65(){
	now_meirei[A]=34;now_time[A]=0;
	for(t=0;t<60;t++){
			for(i=0;i<100;i++){
			hei_jump[A][i]+=19-t%20*2;
			}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	if(hei_type[A][gun_kazu[A]]==8){
		strcpy_s(serihu, "おおあまごい");hukidasi();
		strcpy_s(serihu, "わっちょい");hukidasi();
		strcpy_s(serihu, "おおあまごい");hukidasi();
		strcpy_s(serihu, "わっちょい");hukidasi();
	}else{
		strcpy_s(serihu, "おおあまごい");hukidasi();
		strcpy_s(serihu, "わっしょい");hukidasi();
		strcpy_s(serihu, "おおあまごい");hukidasi();
		strcpy_s(serihu, "わっしょい");hukidasi();
	}

	tenkou=600;
	tenki=1;

	for(i=0;i<100;i++){
		hei_sen[A][i]=2;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-5;//兵士のモラル時間変化量
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	PlaySoundMem( se_no[15] , DX_PLAYTYPE_BACK ) ;
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
return 0;
}
int sen_66(){

	if(hei_type[A][gun_kazu[A]]==8) strcpy_s(serihu, "ちょーさんかく");
	else strcpy_s(serihu, "超高速デルタ");
	hukidasi();


	now_meirei[A]=58;now_time[A]=0;
	for(i=0;i<100;i++){
		fire_v[i]=(A*2-1)*abs(fire_v[i])*8;//火の移動速度
		fire_time[i]/=4;
	}
	for(i=0;i<100;i++){
		hei_sen[A][i]=5;
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-5;//兵士のモラル時間変化量
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*(100+abs(50-hei_y[A][i]/3000));//兵士の移動速度
		hei_totu[A][i]=0;
	}
	PlaySoundMem( se_no[6] , DX_PLAYTYPE_BACK ) ;
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_67(){

	if(hei_type[A][gun_kazu[A]]==8){
		strcpy_s(serihu, "どんどんどどん");
		hukidasi();
		strcpy_s(serihu, "どんどどん");
	}else strcpy_s(serihu, "大地震");
	hukidasi();now_meirei[A]=59;now_time[A]=0;
	for(t=0;t<63;t++){
		if(t%12==0)	PlaySoundMem( se_no[1] , DX_PLAYTYPE_BACK ) ;
			for(i=0;i<100;i++){
			if(hei_retu[A][i]==1)continue;
			hei_jump[A][i]+=(4-t%9)*25;
			}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}

	for(i=0;i<100;i++){
	hei_ana[(A+1)%2][i]=180;
	}

	for(i=0;i<100;i++){
		hei_sen[A][i]=2;//兵士の戦闘状態
		hei_muk[A][i]=1-A;//兵士の向き
		hei_syou[A][i]=-5;//兵士のモラル時間変化量
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//兵士の移動速度
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
//ＡＩ
int AI_kihon(){

	//交戦チェック
	if(front_line[0]<=back_line[0])c=0;else c=1;//なら前列前
	if(front_line[1]>=back_line[1])J=0;else J=1;//なら前列前
	//ラインチェック
	if(c==0)AI_line[0]=front_line[0];
	else	AI_line[0]=back_line[0];
	if(J==0)AI_line[1]=front_line[1];
	else	AI_line[1]=back_line[1];
	//分断チェック
	if(front_line[0]<front_line[1] && front_line[0]>back_line[1] && now_meirei[0]==36) AI_bundan=1;
	else AI_bundan=0;
	//最後尾チェック
	AI_saikoubi[0]=0;
	AI_saikoubi[1]=640000;
	for(i=0;i<100;i++){
	if(hei_sibou[0][i]==0 && hei_toppa[0][i]==0 && AI_saikoubi[0]<hei_x[0][i] && hei_retu[0][i]==0) AI_saikoubi[0]=hei_x[0][i];
	if(hei_sibou[1][i]==0 && hei_toppa[1][i]==0 && AI_saikoubi[1]>hei_x[1][i] && hei_retu[1][i]==0) AI_saikoubi[1]=hei_x[1][i];
	}


	//モラル計算
	xa=0;ya=0;AI_moral[0]=0,AI_hirou[0]=0;AI_moral[1]=1,AI_hirou[1]=1;
	for(i=0;i<100;i++){
		if(hei_sibou[0][i]==0 && hei_toppa[0][i]==0 && (hei_retu[0][i]==c || abs(front_line[0]-back_line[0])<=16000)){
		AI_moral[0]+=hei_moral[0][i];
		AI_hirou[0]+=hei_hirou[0][i];
		xa++;
		}
		if(hei_sibou[1][i]==0 && hei_toppa[1][i]==0 && (hei_retu[1][i]==J || abs(front_line[1]-back_line[1])<=16000)){
		AI_moral[1]+=hei_moral[1][i];
		AI_hirou[1]+=hei_hirou[1][i];
		ya++;
		}
	}
	if(xa!=0){
		AI_moral[0]=AI_moral[0]/xa;
		AI_hirou[0]=AI_hirou[0]/xa;
		if(gun_hirou[0]>100000) AI_hirou[0]=100000;
	}
	if(ya!=0){
		AI_moral[1]=AI_moral[1]/ya;
		AI_hirou[1]=AI_hirou[1]/ya;
		if(gun_hirou[1]>100000) AI_hirou[1]=100000;
	}

	//ダメージ計算
	//使用中の戦術による攻撃力計算 交戦部隊のモラル平均計算＆突撃修正
	AIsentou_check();//xa-自軍 ya-敵軍

	A=1;
	return 0;
}
int AIsentou_check(){

	//○○オンリーの場合　そのまま
	//攻撃＆防御の場合　攻撃と判断
	//指揮官のみ攻撃の場合、攻撃と判断
	xa=0;xb=0;ya=0;yb=0;
	for(i=0;i<100;i++){
	if(hei_sen[0][i]==0 || hei_sibou[0][i]!=0 || hei_toppa[0][i]!=0)continue;
	else if(hei_sen[0][i]<10)xa=hei_sen[0][i];
	else if(hei_sen[0][i]<100) xb=hei_sen[0][i]/10;
	}
	if(xa>0) xb=0;
	for(i=0;i<100;i++){
	if(hei_sen[1][i]==0 || hei_sibou[1][i]!=0 || hei_toppa[1][i]!=0)continue;
	else if(hei_sen[1][i]<10)ya=hei_sen[1][i];
	else if(hei_sen[1][i]<100) yb=hei_sen[1][i]/10;
	}
	if(ya>0) yb=0;

	if(xa==0 && xb==0)gun_sentou[0]=0;//戦闘状態チェック
	else if(xb==0) gun_sentou[0]=1;
	else  gun_sentou[0]=2;
	if(ya==0 && yb==0)gun_sentou[1]=0;
	else if(yb==0) gun_sentou[1]=1;
	else  gun_sentou[1]=2;
	//攻撃ダウン効果の計算//全員ダウンしていたら−１
	if(xa>0)for(i=0;i<100;i++){
	if(hei_kaz[0][i]<=0 || hei_sibou[0][i]>0 || hei_toppa[0][i]!=0) continue;
	if(hei_down[0][i]<=0) break;
	if(i==99)xa--;
	}
	if(ya>0)for(i=0;i<100;i++){
	if(hei_kaz[1][i]<=0 || hei_sibou[1][i]>0 || hei_toppa[1][i]!=0) continue;
	if(hei_down[1][i]<=0) break;
	if(i==99)ya--;
	}
	//陣形による修正計算//
	if(gun_jinkei[0]==2) xb++;//防＋１と判断
	else if(gun_jinkei[0]==3 && ya>0) xa++;//攻＋１と判断
	else if(gun_jinkei[0]==7) if(xa==0)xb++;else xa++;//攻撃時攻＋１、防御時防＋１と判断
	else if(gun_jinkei[0]==9 && ya>0) xa+=2;//攻＋２と判断
	else if(gun_jinkei[0]==10 && ya>0) xa++;//攻＋１と判断
	else if(gun_jinkei[0]==12) xb++;//防＋１と判断
	else if(gun_jinkei[0]==19) xb++;//防＋１と判断
	else if(gun_jinkei[0]==20) xb++;//防＋１と判断
	else if(gun_jinkei[0]==21 && ya>0) xa++;//攻＋１と判断
	if(gun_jinkei[1]==2) yb++;//防＋１と判断
	else if(gun_jinkei[1]==3 && ya>0) ya++;//攻＋１と判断
	else if(gun_jinkei[1]==7) if(ya==0)yb++;else ya++;//攻撃時攻＋１、防御時防＋１と判断
	else if(gun_jinkei[1]==9 && ya>0) ya+=2;//攻＋２と判断
	else if(gun_jinkei[1]==10 && ya>0) ya++;//攻＋１と判断
	else if(gun_jinkei[1]==12) yb++;//防＋１と判断
	else if(gun_jinkei[1]==19) yb++;//防＋１と判断
	else if(gun_jinkei[1]==20) yb++;//防＋１と判断
	else if(gun_jinkei[1]==21 && ya>0) ya++;//攻＋１と判断
	//部隊能力による修正計算//平均で判断、切り捨て
	if(xa!=0)xa+=(job_pow[butai_one[0]]+job_pow[butai_two[0]])/2;//兵士の基本攻撃力
	xb+=(job_def[butai_one[0]]+job_def[butai_two[0]])/2;//兵士の基本防御力
	if(ya!=0)ya+=(job_pow[butai_one[1]]+job_pow[butai_two[1]])/2;//兵士の基本防御力
	yb+=(job_def[butai_one[1]]+job_def[butai_two[1]])/2;//兵士の基本防御力

	AI_damemin[0]=0;AI_damemax[0]=0;
	AI_damemin[1]=0;AI_damemax[1]=0;

	//最小ダメージ＆最低ダメージ基本計算
	if(now_meirei[1]==4 || now_meirei[1]==13 || now_meirei[1]==14 || now_meirei[1]==15 || now_meirei[1]==16){
		AI_damemin[0]=ya-xb-(AI_moral[0]/2000+1)+(AI_moral[1]+3000)/4000;
		AI_damemax[0]=ya-xb+(AI_moral[1]+1000)/2000+1;
		}else{
		AI_damemin[0]=ya-xb-(AI_moral[0]/2000+1);
		AI_damemax[0]=ya-xb+(AI_moral[1]+1000)/2000+1;
	}

	if(now_meirei[0]==4 || now_meirei[0]==13 || now_meirei[0]==14 || now_meirei[0]==15 || now_meirei[0]==16){
		AI_damemin[1]=xa-yb-(AI_moral[1]/2000+1)+(AI_moral[0]+3000)/4000;
		AI_damemax[1]=xa-yb+(AI_moral[0]+1000)/2000+1;
		}else{
		AI_damemin[1]=xa-yb-(AI_moral[1]/2000+1);
		AI_damemax[1]=xa-yb+(AI_moral[0]+1000)/2000+1;
	}

	for(A=0;A<2;A++){
	if(AI_damemax[A]<0)AI_damemax[A]=0;
	if(AI_damemin[A]<0)AI_damemin[A]=0;
	}
	AI_dame[0]=0;
	AI_dame[1]=0;
	//最大ダメージと最小ダメージから平均を求める
	if(ya>0)AI_dame[0]=(AI_damemin[0]+AI_damemax[0])*5;
	if(xa>0)AI_dame[1]=(AI_damemin[1]+AI_damemax[1])*5;

	return 0;
}
int AI_01(){

	//指揮官死亡時
	if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//火攻め対応
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//突撃使用判定
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//統率回復使用判定
	if(AI_rest[4]==0 && now_time[1]>60 && AI_rest[30]>0){
	sen_30();
	AI_rest[30]--;
	return 0;
	}
	//突撃続行処理
	if(now_meirei[1]==4 && AI_moral[1]>2000) return 0;
	//全軍前進から強撃前進へ移行
	if(now_meirei[1]==1 && AI_line[1]>AI_line[0]-60000 && AI_rest[9]>0 && now_time[1]>10) {sen_09();AI_rest[9]--;return 0;}

	if(AI_rest[9]>0 && AI_line[1]>AI_line[0]-60000)A_meirei=9;//攻撃
	else A_meirei=1;

	if(AI_rest[57]>0 && front_line[1]<320*1000)B_meirei=57;//後退
	else if(AI_rest[19]>0) B_meirei=19;
	else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_02(){

	//指揮官死亡時
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//火攻め対応
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//前列交代続行
	if(now_meirei[1]==24 || now_meirei[1]==21 || now_meirei[1]==22) return 0;
	//突撃使用判定
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//前列突撃使用判定
	if(AI_rest[13]>0 && AI_rest[4]<=0 && AI_moral[1]<4000 && gun_retu[1]==2){
	sen_13();
	AI_rest[13]--;
	return 0;
	}
	//分断対応,無し
	if(AI_bundan==1){
		if(AI_rest[24]>0) sen_24();
		else			  sen_21();
		AI_rest[24]--;
		return 0;
	}
	//突撃続行
	if(now_meirei[1]==4 && AI_moral[1]>4000) return 0;
	//後列温存
	if(con_time==60 && gun_retu[1]==2) sen_06();
	//モラル差がすごく大きくなると交代する
	if(front_line[1]>back_line[1]+64000 && gun_moral[1]-AI_moral[1]>2000){
		if(AI_rest[24]>0){
			sen_24();AI_rest[24]--;
		}
		else sen_21();
		return 0;
	}
	if(front_line[1]>back_line[1]+64000 && gun_retu[1]==2)A_meirei=6;//攻撃
	else A_meirei=1;

	if(front_line[1]>back_line[1]+64000 && gun_moral[1]-AI_moral[1]>1000){//後退
		if(AI_rest[24]>0)B_meirei=24;
		else B_meirei=21;
	}else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_03(){

	//攻撃の波陣
	//指揮官死亡時
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//火攻め対応
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//前列交代続行
	if(now_meirei[1]==24 || now_meirei[1]==21 || now_meirei[1]==22) return 0;
	//突撃使用判定
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//後列突撃使用判定
	if(AI_rest[14]>0 && AI_rest[4]<=0 && AI_moral[1]<4000 && gun_retu[1]==0){
	sen_14();
	AI_rest[14]--;
	return 0;
	}
	//分断作戦、交代直後
	if(now_meirei[1]==21 && gun_retu[1]==0 && AI_rest[36]>0 && now_time[1]==120){
		sen_36();
		AI_rest[36]--;
		return 0;
	}
	//分断対応
	if(AI_bundan==1){
		sen_21();
		return 0;
	}
	//突撃続行
	if(now_meirei[1]==4 && AI_moral[1]>4000) return 0;
	//後列温存
	if(con_time==60) if(AI_rest[9]>0){sen_09();AI_rest[0]--;}else sen_01();
	//モラル差が大きくなると交代する
	if(front_line[1]>back_line[1]+64000 && gun_moral[1]-AI_moral[1]>2000){
		sen_21();
		return 0;
	}

	if(front_line[1]>back_line[1]+64000 && AI_rest[9]>0)A_meirei=9;//攻撃
	else A_meirei=1;

	if(front_line[1]>back_line[1]+64000 && gun_moral[1]-AI_moral[1]>1000){//後退
		if(AI_rest[24]>0)B_meirei=24;
		else B_meirei=21;
	}else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_04(){

	//上翼突破の陣

	//指揮官死亡時
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//火攻め対応
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//突撃使用判定
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//上翼突撃使用判定
	if(AI_rest[15]>0 && AI_rest[4]<=0 && AI_moral[1]<4000 && AI_ueyoku[1]>0){
	sen_15();
	AI_rest[15]--;
	return 0;
	}
	//分断対応
	if(AI_bundan==1 && back_line[1]>60000 && AI_rest[55]>3){//分断対応
		sen_55();//速攻退却
		AI_rest[55]--;
		return 0;
	}
	if(now_meirei[1]==55 && back_line[1]>60000 && AI_bundan==1){
		return 0;
	}
	//突撃続行
	if((now_meirei[1]==4 || now_meirei[1]==15)&& AI_moral[1]>4000) return 0;

	//統率回復・弱
	if(now_time[1]==60 && AI_rest[25]>AI_rest[4]+AI_rest[15]){
		sen_25();
		AI_rest[25]--;
	}
	//前列前進から上翼攻撃へシフト
	if(now_meirei[1]==1 && AI_line[1]>AI_line[0]-60000 && AI_rest[11]>0 && AI_ueyoku[1]>0  && now_time[1]>10) {sen_11();AI_rest[11]--;}

	if(AI_line[1]>AI_line[0]-60000 && AI_rest[11]>0 && AI_ueyoku[1]>0 )A_meirei=11;
	else A_meirei=1;
	if(AI_rest[20]>0)B_meirei=20;
	else B_meirei=2;

	AI_VScheck();
	return 0;
}
int AI_05(){

	//下翼突破の陣

	//指揮官死亡時
	if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//火攻め対応
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//突撃使用判定
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//下翼突撃使用判定
	if(AI_rest[16]>0 && AI_rest[4]<=0 && AI_moral[1]<4000 && AI_sitayoku[1]>0){
	sen_16();
	AI_rest[16]--;
	return 0;
	}
	//分断対応
	if(AI_bundan==1 && back_line[1]>60000 && AI_rest[55]>3){//分断対応
		sen_55();//速攻退却
		AI_rest[55]--;
		return 0;
	}
	if(now_meirei[1]==55 && back_line[1]>60000 && AI_bundan==1){
		return 0;
	}
	//突撃続行
	if((now_meirei[1]==4 || now_meirei[1]==16)&& AI_moral[1]>4000) return 0;

	//防柵作戦
	if(AI_rest[50]>0 && AI_line[1]>hei_x[1][gun_kazu[1]]+100000){
		sen_50();
		AI_rest[50]--;
	}
	//防柵作戦後は全軍前進
	if(now_meirei[1]==50) sen_01();

	//前列前進から下翼攻撃へシフト
	if(now_meirei[1]==1 && AI_line[1]>AI_line[0]-60000 && AI_rest[12]>0 && AI_sitayoku[1]>AI_ueyoku[1] && now_time[1]>10) {sen_12();AI_rest[12]--;}

	//下翼突破終了全軍前進へシフト
	if((now_meirei[1]==12 || now_meirei[1]==16) && AI_sitayoku[1]<AI_ueyoku[1] && now_time[1]>10) sen_01();


	if(AI_line[1]>AI_line[0]-60000 && AI_rest[12]>0 && AI_sitayoku[1]>AI_ueyoku[1] )A_meirei=12;
	else A_meirei=1;
	if(AI_rest[10]>0)B_meirei=10;
	else B_meirei=2;

	AI_VScheck();
	
	return 0;
}
int AI_06(){

	//中央突破
	//19;3;//後退防御
	//31;2;//陣形回復・速
	//36;1;//分断作戦
	//14;1;//後列突撃

	//指揮官死亡時
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//火攻め対応
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//突撃使用判定
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//後列突撃使用判定
	if(AI_rest[14]>0 && AI_rest[4]<=0 && AI_moral[1]<4000 && gun_retu[1]==0){
	sen_14();
	AI_rest[14]--;
	return 0;
	}
	//分断作戦使用判定
	if(AI_rest[36]>0){
	AI_rest[36]--;
	sen_36();
	return 0;
	}
	//突撃続行処理
	if(now_meirei[1]==4 && AI_moral[1]>2000) return 0;

	A_meirei=1;//攻撃

	if(AI_rest[31]>0) B_meirei=31;//陣形回復・速
	else if(AI_rest[19]>0) B_meirei=19;//後退
	else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_07(){

	//三波状陣
	//7;10;//後列前進
	//27;3;//陣形回復
	//14;1;//後列突撃
	//31;2;//陣形回復・速

	//指揮官死亡時
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//火攻め対応
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//突撃使用判定
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//後列突撃使用判定
	if(AI_rest[14]>0 && AI_rest[4]<=0 && AI_moral[1]<4000 && gun_retu[1]==0){
	sen_14();
	AI_rest[14]--;
	return 0;
	}
	//突撃続行処理
	if(now_meirei[1]==4 && AI_moral[1]>2000) return 0;
	//最初に後列前進
	if(now_time[1]<95 && now_time[1]>90 && now_meirei[1]!=7 && gun_retu[1]==0){sen_07();return 0;}
	//陣形回復後は後列前進
	if(now_meirei[1]==28 && gun_retu[1]==0){sen_07();return 0;}
	//後列攻撃続行
	if(front_line[1]>back_line[1] && now_meirei[1]==7)return 0;

	if(gun_retu[1]==0)A_meirei=7;//攻撃
	else A_meirei=1;

	if(AI_rest[31]>0)B_meirei=31;//後退
	else if(AI_rest[27]>0) B_meirei=27;
	else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_08(){

	//疾風陣
	//20;3;//速攻後退
	//8;4;//速攻前進
	//9;4;//強撃前進
	//25;3;//統率回復・弱

	//指揮官死亡時
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//火攻め対応
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//突撃使用判定
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//統率回復・弱使用判定
	if(gun_hirou[1]>10000 && gun_moral[1]<9000 && AI_rest[25]>AI_rest[4]*2){
	sen_25();
	AI_rest[25]--;
	return 0;
	}
	//突撃続行処理
	if(now_meirei[1]==4 && AI_moral[1]>2000) return 0;
	//速攻前進
	if(con_time==2){ sen_08();AI_rest[8]--;return 0;}
	//全軍前進から強撃前進へ移行
	if(now_meirei[1]==1 && AI_line[1]>AI_line[0]-60000 && AI_rest[9]>0 && now_time[1]>10) {sen_09();AI_rest[9]--;return 0;}

	if(AI_rest[9]>0 && AI_line[1]>AI_line[0]-120000)A_meirei=9;
	else if(AI_rest[8]>0)A_meirei=8;//攻撃
	else A_meirei=1;

	if(AI_rest[20]>0) B_meirei=20;//後退
	else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_09(){

	//AI09;背水の陣
	//57;4;//全軍休息
	//19;3;//後退防御
	//8;4;//速攻前進
	//51;1;//水際作戦

	//指揮官死亡時
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//火攻め対応
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//突撃使用判定
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//突撃続行処理
	if(now_meirei[1]==4 && AI_moral[1]>2000) return 0;
	//水際作戦
	if(front_line[1]>front_line[0]-60000 && front_line[1]<120000 && AI_rest[51]>0){
	sen_51();
	AI_rest[51]--;
	}
	if(now_meirei[1]==51){
	sen_01();
	return 0;
	}

	if(AI_rest[8]<=0)A_meirei=1;//攻撃
	else A_meirei=8;

	if(AI_rest[19]>0)B_meirei=19;//後退
	else if(AI_rest[57]>0) B_meirei=57;
	else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_10(){

	//AI10;強撃陣
	//10;4;//後退攻撃
	//8;1;//速攻前進
	//9;3;//強撃前進
	//27;1;//陣形回復

	//指揮官死亡時
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//火攻め対応
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//突撃使用判定
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//突撃続行処理
	if(now_meirei[1]==4 && AI_moral[1]>2000) return 0;
	//全軍前進から強撃前進へ移行
	if(now_meirei[1]==1 && AI_line[1]>AI_line[0]-60000 && AI_rest[9]>0 && now_time[1]>10) {sen_09();AI_rest[9]--;return 0;}
	//最初に速攻前進
	if(con_time<10 && AI_rest[8]==4){sen_08();AI_rest[8]--;return 0;}

	if(AI_rest[9]>0 && AI_line[1]>AI_line[0]-60000)A_meirei=9;//攻撃
	else if(AI_rest[8]>0)A_meirei=8;//攻撃
	else A_meirei=1;

	if(AI_rest[27]>0 && (front_line[1]<120*1000 || front_line[1]<AI_line[0]-1800000))B_meirei=27;//陣形回復
	else if(AI_rest[10]>0) B_meirei=10;//後退攻撃
	else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_11(){

	//AI11;波状盾の陣
	//21;10;//前列交代
	//6;10;//前列前進
	//8;4;//速攻前進
	//39;1;//指揮官突撃

	//指揮官死亡時
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//火攻め対応
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//前列交代続行
	if(now_meirei[1]==24 || now_meirei[1]==21 || now_meirei[1]==22) return 0;
	//突撃使用判定
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//分断対応
	if(AI_bundan==1){
		sen_21();
		return 0;
	}
	//突撃続行処理
	if(now_meirei[1]==4 && AI_moral[1]>2000) return 0;
	//指揮官突撃続行処理
	if(now_meirei[1]==39 && gun_moral[1]<hei_moral[1][gun_kazu[1]]) return 0;

	//モラル差がすごく大きくなると交代する
	if(front_line[1]>back_line[1]+64000 && gun_moral[1]-AI_moral[1]>2000){
		sen_21();
		return 0;
	}
	//最初に前列前進
	if(con_time<10 && now_meirei[1]==1){
		if(AI_rest[8]>0)sen_08();
		else sen_06();
		AI_rest[8]--;
		return 0;
	}

	if(front_line[1]>back_line[1]+64000 && AI_rest[8]>0)A_meirei=8;//攻撃
	else if(front_line[1]>back_line[1]+64000 && gun_retu[1]==2)A_meirei=6;
	else A_meirei=1;

	if(front_line[1]>back_line[1]+64000 && gun_moral[1]-AI_moral[1]>2000){//後退
		B_meirei=21;
	}else if(AI_rest[39]>0)B_meirei=39;
	else B_meirei=2;
	AI_VScheck();

	return 0;
}
int AI_12(){

	//AI12;虎穴陣
	//19;3;//後退防御
	//8;4;//速攻前進
	//9;4;//強撃前進
	//31;2;//陣形回復・速
	//59;2;//大地震

	//指揮官死亡時
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//火攻め対応
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//突撃使用判定
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	if(AI_rest[59]>0){sen_67();AI_rest[59]--;return 0;}//大地震
	sen_04();AI_rest[4]--;return 0;
	}
	//大地震
	if(AI_rest[59]>AI_rest[4] && AI_moral[1]>=8000 && AI_line[1]>AI_line[0]-60000){
	sen_67();
	AI_rest[59]--;
	return 0;
	}
	//突撃続行
	if(now_meirei[1]==4 && AI_moral[1]>4000) return 0;
	//速攻前進
	if(con_time<10 && now_meirei[1]==1 && AI_rest[8]>0){ sen_08();AI_rest[8]--;return 0;}

	if(AI_rest[9]>0 && AI_line[1]>AI_line[0]-60000)A_meirei=9;//攻撃
	else if(AI_rest[8]>0)A_meirei=8;//攻撃
	else A_meirei=1;

	if(AI_rest[31]>0 && (front_line[1]<120*1000 || front_line[1]<AI_line[0]-1800000))B_meirei=31;//陣形回復・速
	else if(AI_rest[19]>0) B_meirei=19;//後退防御
	else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_13(){

	//AI13;阿修羅陣
	//57;4;//全軍休息
	//41;2;//大熱波
	//8;4;//強撃前進
	//30;1;//統率回復・強
	//39;1;//指揮官突撃

	//指揮官死亡時
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//火攻め対応
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//突撃使用判定
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//統率回復・強使用判定
	if(AI_rest[4]==0 && now_time[1]>60 && AI_rest[30]>0){
	sen_30();
	AI_rest[30]--;
	return 0;
	}
	//突撃続行処理
	if(now_meirei[1]==4 && AI_moral[1]>2000) return 0;
	//指揮官突撃続行処理
	if(now_meirei[1]==39){
		if(AI_moral[1]>hei_moral[1][gun_kazu[1]])
		if(AI_rest[8]>0)sen_08();//速攻前進
		else sen_01();
		return 0;
	}
	//最初に速攻前進
	if(con_time<10 && now_meirei[1]==1 && AI_rest[8]>0){ sen_08();AI_rest[8]--;return 0;}
	//大熱波後休息
	if(now_meirei[1]==41 && AI_rest[57]>0){
	sen_57();
	return 0;
	}

	if(AI_rest[8]>0)A_meirei=8;//速攻前進
	else A_meirei=1;

	if(AI_rest[39]>0 && AI_rest[41]<2)B_meirei=39;//指揮官突撃
	else if(AI_rest[41]>0) B_meirei=64;//大熱波
	else if(AI_rest[57]>0) B_meirei=57;
	else B_meirei=2;

	AI_VScheck();


	return 0;
}
int AI_14(){

	//AI14;十字陣
	//44;1;//情報操作L1
	//45;1;//情報操作L2
	//27;3;//陣形回復
	//9;4;//強撃前進
	//61;2;//信じる者達

	//指揮官死亡時
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//火攻め対応
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//情報操作
	if(now_meirei[1]==61 && gun_bom[1]<240 && AI_rest[45]+AI_rest[44]>0){
	if(AI_rest[45]>0){sen_45();AI_rest[45]--;}
	else if(AI_rest[44]>0){sen_44();AI_rest[44]--;}
	return 0;
	}
	if(gun_bom[1]>0)return 0;//自爆続行判定

	//突撃使用判定
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//突撃続行処理
	if(now_meirei[1]==4 && AI_moral[1]>2000) return 0;
	//信じる者たち
	if(now_meirei[1]!=61 && AI_rest[61]>0 && gun_bom[1]<=0 && con_time%400==0){
	AI_rest[61]--;
	sen_61();
	return 0;
	}

	if(AI_rest[8]>0 && AI_rest[61]<0)A_meirei=8;//攻撃
	else A_meirei=1;

	if(AI_rest[27]>0 && front_line[1]<320*1000)B_meirei=57;//後退
	else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_15(){

	// 6;1;//前列前進
	//21;3;//前列交代
	//43;3;//偽りの撤退
	//25;1;//統率回復・弱

	//前列交代続行
	if(now_meirei[1]==24 || now_meirei[1]==21 || now_meirei[1]==22) return 0;
	//指揮官死亡時
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//火攻め対応
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//突撃使用判定
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//分断対応
	if(AI_bundan==1){
		sen_21();
		return 0;
	}
	//統率回復・弱使用判定
	if(gun_moral[1]<9000 && AI_rest[25]>AI_rest[4]*2){
	sen_25();
	AI_rest[25]--;
	return 0;
	}
	//突撃続行処理
	if(now_meirei[1]==4 && AI_moral[1]>2000) return 0;
	//モラル差がすごく大きくなると交代する
	if(front_line[1]>back_line[1]+16000 && gun_moral[1]-AI_moral[1]>2000){
		sen_21();
		return 0;
	}
	//偽りの撤退＆前列前進
	if(con_time>600 && AI_rest[43]>0){
	sen_43();
	AI_rest[43]--;
	return 0;
	}
	if(now_meirei[1]==43){sen_06();return 0;}

	if(con_time>50 && con_time<60 && now_meirei[1]==1){
	sen_06();
	return 0;
	}

	if(front_line[1]>back_line[1]+64000 && gun_retu[1]==2)A_meirei=6;//攻撃
	else A_meirei=1;

	if(front_line[1]>back_line[1]+64000 && gun_moral[1]-AI_moral[1]>2000)B_meirei=21;//交代
	else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_16(){

	//AI16;三点突破の陣
	//24;3;//速攻交代
	//8;4;//速攻前進
	//13;1;//前列突撃
	//30;1;//統率回復・強

	//指揮官死亡時
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//火攻め対応
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//前列交代続行
	if(now_meirei[1]==24 || now_meirei[1]==21 || now_meirei[1]==22) return 0;
	//突撃使用判定
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//前列突撃使用判定
	if(AI_rest[13]>0 && AI_rest[4]<=0 && AI_moral[1]<4000 && gun_retu[1]==2){
	sen_13();
	AI_rest[13]--;
	return 0;
	}
	//統率回復使用判定
	if(AI_rest[4]==0 && now_time[1]>60 && AI_rest[30]>0){
	sen_30();
	AI_rest[30]--;
	return 0;
	}
	//突撃続行
	if(now_meirei[1]==4 && AI_moral[1]>4000) return 0;
	//後列温存
	if(con_time<10 && now_meirei[1]!=8){sen_08();AI_rest[8]--;}
	//モラル差がすごく大きくなると交代する
	if(front_line[1]>back_line[1]+16000 && gun_moral[1]-AI_moral[1]>2000 && AI_rest[24]>0){
		sen_24();
		AI_rest[24]--;
		return 0;
	}

	if((front_line[1]>back_line[1]+16000 || gun_retu[1]==1) && AI_rest[8]>0)A_meirei=8;//攻撃
	else A_meirei=1;

	if(front_line[1]>back_line[1]+16000 && gun_moral[1]-AI_moral[1]>2000 && AI_rest[24]>0){//後退
		B_meirei=24;
	}else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_17(){

	//指揮官死亡時
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//火攻め対応
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//突撃使用判定
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//突撃続行処理
	if(now_meirei[1]==4 && AI_moral[1]>2000) return 0;

	A_meirei=1;

	B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_18(){

	//AI18;魚鱗の陣
	//13;1;//前列突撃
	//21;10;//前列交代
	//8;4;//速攻前進
	//9;4;//強撃前進
	//34;2;//大雨ごい

	//指揮官死亡時
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//火攻め対応
	if(fire_time[0]>0 || fire_time[50]>0){
	if(AI_rest[34]>0){sen_65();AI_rest[34]--;}
	else if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//前列交代続行
	if(now_meirei[1]==24 || now_meirei[1]==21 || now_meirei[1]==22) return 0;
	//突撃使用判定
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	if(AI_rest[34]>0 && tenkou<=0){sen_65();AI_rest[34]--;return 0;}
	sen_04();AI_rest[4]--;return 0;
	}
	//前列突撃使用判定
	if(AI_rest[13]>0 && AI_rest[4]<=0 && AI_moral[1]<4000 && gun_retu[1]==2){
	if(AI_rest[34]>0 && tenkou<=0){sen_65();AI_rest[34]--;return 0;}
	sen_13();
	AI_rest[13]--;
	return 0;
	}
	//分断対応
	if(front_line[1]-640000>front_line[0] && back_line[1]<front_line[0]){
		sen_21();
		return 0;
	}
	//突撃続行
	if(now_meirei[1]==4 && AI_moral[1]>4000) return 0;

	//後列温存
	if(con_time<10 && now_meirei[1]!=8){
		sen_08();
		AI_rest[8]--;
	}
	//時間経過で交代後に雨ごい
	if(con_time>5400-AI_rest[34]*1800 && now_meirei[1]==23 && AI_rest[34]>0 && tenkou<=0){
	AI_rest[34]--;
	sen_65();
	return 0;
	}
	//モラル差がすごく大きくなると交代する
	if(front_line[1]>back_line[1]+64000 && gun_moral[1]-AI_moral[1]>2000){
		sen_21();
		return 0;
	}
	//強撃前進へ移行
	if((now_meirei[1]==1 || now_meirei[1]==8 || now_meirei[1]==23) && AI_line[1]>AI_line[0]-60000 && AI_rest[9]>0 && now_time[1]>10) {sen_09();AI_rest[9]--;return 0;}


	if((front_line[1]>back_line[1]+64000 || gun_retu[1]==1) && AI_rest[8]>0)A_meirei=8;//攻撃
	else if((front_line[1]>back_line[1]+16000 || gun_retu[1]==1) && AI_rest[9]>0)A_meirei=9;//攻撃
	else A_meirei=1;

	if(front_line[1]>back_line[1]+64000 && gun_moral[1]-AI_moral[1]>2000){//後退
		B_meirei=21;
	}else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_19(){

	//AI19;疾風陣
	//10;3;//後退攻撃
	//8;4;//速攻前進
	//25;1;//統率回復・弱
	//58;2;//超高速デルタ
	//30;1;//統率回復・強
	AI_kihon();

	A=1;
	//指揮官死亡時
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//火攻め対応
	if(fire_time[0]>0){
	if(now_meirei[1]!=58 && AI_rest[58]>0){sen_66();AI_rest[58]--;}
	return 0;
	}
	//突撃使用判定
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//統率回復使用判定
	if(AI_rest[4]==0 && now_time[1]>60 && AI_rest[30]>0){
	sen_30();
	AI_rest[30]--;
	return 0;
	}
	//統率回復使用判定
	if(AI_rest[25]>0 && gun_hirou[1]>20000){
	sen_25();
	AI_rest[25]--;
	return 0;
	}
	//突撃続行処理
	if(now_meirei[1]==4 && AI_moral[1]>2000) return 0;
	//最初に速攻前進
	if(con_time<10 && now_meirei[1]==1){sen_08();AI_rest[8]--;}

	if(con_time>3600*3-3600*AI_rest[58])A_meirei=66;
	if(AI_rest[8]>0)A_meirei=8;//攻撃
	else A_meirei=1;

	if(AI_rest[10]>0) B_meirei=10;
	else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_20(){

	//AI20;冥の翼
	//AI_rest[9]=4;//強撃前進
	//AI_rest[39]=1;//指揮官突撃
	//AI_rest[24]=2;//速攻交代
	//AI_rest[30]=1;//統率回復・強
	//AI_rest[41]=1;//大熱波
	//AI_rest[58]=1;//大地震
	//AI_rest[34]=1;//大雨ごい
	//AI_rest[59]=1;//超高速デルタ
	AI_kihon();

	//指揮官死亡時
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//AI_rest[41]=1;//大熱波。背火攻撃対抗＋将軍死亡。64
	//AI_rest[59]=1;//大地震。戦場の風対抗＋将軍死亡。67
	//AI_rest[34]=1;//大雨ごい。冬将軍対抗＋将軍死亡。65
	//AI_rest[58]=1;//超高速デルタ。火攻め対抗。＋将軍死亡。66
	if(hei_kaz[1][gun_kazu[A]-4]<10 && hei_kaz[1][gun_kazu[A]-4]>0 && AI_rest[34]>0){//ヴェパール
		sen_65();
		AI_rest[34]--;
		return 0;
	}
	if(hei_kaz[1][gun_kazu[A]-3]<10 && hei_kaz[1][gun_kazu[A]-3]>0 && AI_rest[41]>0){//フェルネクス
		sen_64();
		AI_rest[41]--;
		return 0;
	}
	if(hei_kaz[1][gun_kazu[A]-2]<10 && hei_kaz[1][gun_kazu[A]-2]>0 && AI_rest[58]>0){//ヴォーラグ
		sen_66();
		AI_rest[58]--;
		return 0;
	}
	if(hei_kaz[1][gun_kazu[A]-1]<10 && hei_kaz[1][gun_kazu[A]-1]>0 && AI_rest[59]>0){//イリゴス
		sen_67();
		AI_rest[59]--;
		return 0;
	}
	//大熱波対応
	if(fire_time[50]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//火攻め対応
	if(fire_time[0]>0){
	if(AI_rest[58]>0){sen_66();AI_rest[58]--;}
	else if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20 && now_meirei[1]!=59)sen_02();
	return 0;
	}
	//背火の陣対抗
	if(fire_time[25]>0 && AI_rest[41]>0){
	sen_64();
	AI_rest[41]--;
	return 0;
	}
	//前列交代続行
	if(now_meirei[1]==24 || now_meirei[1]==21 || now_meirei[1]==22) return 0;
	//冬将軍対抗
	if(tenkou>0 && tenki==2 && AI_rest[34]>0){
	sen_65();
	AI_rest[34]--;
	return 0;
	}
	//戦場の風対抗
	if(now_meirei[0]==58 && AI_rest[59]>0){
	sen_67();
	AI_rest[59]--;
	return 0;
	}
	//突撃使用判定
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_63();AI_rest[4]--;return 0;
	}
	//統率回復使用判定
	if(AI_rest[4]==0 && now_time[1]>120 && AI_rest[30]>0){
	sen_30();
	AI_rest[30]--;
	return 0;
	}
	//分断対応
	if(AI_bundan==1){
		if(AI_rest[24]>0) sen_24();
		else			  sen_21();
		AI_rest[24]--;
		return 0;
	}
	//突撃続行
	if(now_meirei[1]==4 && AI_moral[1]>4000) return 0;
	//後列温存
	if(con_time==150 && gun_retu[1]==2){sen_09();AI_rest[9]--;}
	//指揮官突撃続行処理
	if(now_meirei[1]==39 && gun_moral[1]<hei_moral[1][gun_kazu[1]]) return 0;
	else if(now_meirei[1]==39){
	if(front_line[1]>back_line[1]+16000 && gun_retu[1]==2 && AI_rest[9]>0){sen_09();AI_rest[9]--;}//攻撃
	else sen_01();
	return 0;
	}
	//モラル差がすごく大きくなると交代する
	if(front_line[1]>back_line[1]+64000 && gun_moral[1]-AI_moral[1]>2000 && front_line[1]>180*1000){
		if(AI_rest[24]>0){
			sen_24();AI_rest[24]--;
		}
		else sen_21();
		return 0;
	}

	if(front_line[1]>back_line[1]+64000 && gun_retu[1]==2 && AI_rest[9]>0)A_meirei=9;//攻撃
	A_meirei=1;

	if(front_line[1]>back_line[1]+64000 && gun_moral[1]-AI_moral[1]>1000){//後退
		if(AI_rest[24]>0)B_meirei=24;
		else B_meirei=21;
	}else if(AI_rest[39]>0)B_meirei=39;
	else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_21(){

	//AI21;縦列陣形
	//篭城用

	AI_kihon();
	if(gun_sikikan[1]==1){
		AI_no=1;
		return 0;
	}
	//指揮官死亡でＡＩ01に
	

	//柵の設置
	if(AI_rest[50]>0){
		sen_50();
		for(i=A*50;i<25+A*50;i++){
		saku_tai[i]=1500;//柵の耐久性
		}
		AI_rest[50]--;
	}
	//投石攻撃
	if(AI_rest[37]>0 && shot_tame[1]<=0 && con_time>5400-AI_rest[37]*600){
	if(abs(AI_rest[50]%4)==0){strcpy_s(serihu, "直撃させろ!!");shot_line[A]=front_line[0]/1000;}
	else if(abs(AI_rest[50])%4==1){strcpy_s(serihu, "後を狙え!!");shot_line[A]=front_line[0]/1000+100;}
	else if(abs(AI_rest[50])%4==2){strcpy_s(serihu, "前を狙え!!");shot_line[A]=front_line[0]/1000-100;}
	else if(abs(AI_rest[50])%4==3){strcpy_s(serihu, "柵を守れ!!");shot_line[A]=160;}
	hukidasi();
	AI_rest[50]-=GetRand(2)+1;
	if(shot_line[A]<160)shot_line[1]=160;
	shot_tame[1]=180;
	AI_rest[37]--;
	return 0;
	}

	//柵が破壊されたらAI01に
	if(saku_tai[50]<=0 || saku_tai[74]<=0 || saku_tai[62]<=0 || (AI_rest[37]<=0 && shot_tame[1]<=0)){
	if(AI_rest[37]==0) strcpy_s(serihu, "これで打ち止めか");
	else if(saku_tai[50]<=0)strcpy_s(serihu, "柵が破壊されただと");
	hukidasi();
	strcpy_s(serihu, "応戦する!!!");
	hukidasi();
		for(i=A*50;i<25+A*50;i++){
		saku_tai[i]=0;//柵の耐久性
		}
	AI_no=1;
	return 0;
	}

	return 0;
}
int AI_22(){

	//AI22;ぐるぐるの陣
	//41;2;//大熱波
	//59;2;//大地震
	//62;2;//自己再生
	//60;1;//スライムフィーバー

	xa=0;
	for(i=0;i<gun_kazu[A];i++){
	if(hei_sibou[A][i]!=0)xa++;
	}

	//指揮官の体力が５００以下で退却
	if(hei_kaz[A][gun_kazu[A]]<500 && hei_type[A][gun_kazu[A]]!=0){
		if(now_meirei[1]!=5)sen_05();
		return 0;
	}
	//指揮官死亡時
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//火攻め対応
	if(fire_time[0]>0 || fire_time[50]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//突撃使用判定
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//突撃続行処理
	if(now_meirei[1]==4 && AI_moral[1]>2000) return 0;
	//何れかの部隊の生命が２５切ると生命回復。
	if(AI_rest[62]>0)for(i=0;i<gun_kazu[A];i++){
		if(hei_kaz[A][i]<=25 && hei_toppa[A][i]==0 && hei_esc[A][i]==0){
		sen_62();
		AI_rest[62]--;
		return 0;
		}
	}
	//生存数が半分以下になるとスライムフィーバー
	if(AI_rest[60]>0 && xa>gun_kazu[A]/2){
		sen_60();
		AI_rest[60]--;
		return 0;
	}
	//どんどん、スライムフィーバー発動後とで一回づつ。接近時使用。
	if(now_meirei[1]==1 && AI_line[1]>AI_line[0]-60000 && AI_rest[59]>AI_rest[60]) {sen_67();AI_rest[59]--;return 0;}

	A_meirei=1;

	if(AI_rest[41]>AI_rest[60])B_meirei=64;
	else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_23(){

	//8;4;//速攻前進
	//4;1;//全軍突撃
	//41;2;//大熱波
	//39;1;//指揮官突撃
	//57;4;//全軍休息
	//gun_senjyutu[A][5]=19;gun_senrest[A][5]=3;//後退防御
	//gun_senjyutu[A][6]=10;gun_senrest[A][6]=3;//後退攻撃


	//指揮官死亡時
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//突撃使用判定
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//突撃続行処理
	if(now_meirei[1]==4 && AI_moral[1]>2000) return 0;
	//最初に速攻前進
	if(now_meirei[1]==1 && con_time<10) {sen_08();AI_rest[8]--;return 0;}
	//
	if(now_meirei[1]==41){sen_57();AI_rest[57]--;return 0;}
	//指揮官突撃続行処理
	if(now_meirei[1]==39 && 1000<hei_moral[1][gun_kazu[1]]) return 0;

	if(AI_rest[8]>0)A_meirei=8;//速攻前進
	else A_meirei=1;

	if(AI_rest[39]>0) B_meirei=39;//
	else if(AI_rest[41]>0) B_meirei=41;//
	else if(AI_rest[19]>0) B_meirei=19;//
	else if(AI_rest[10]>0)B_meirei=10;//
	else if(AI_rest[57]>0)B_meirei=20;//休息
	else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_VScheck(){

	A=1;
	//◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇
	//自軍ｖｓ敵軍判定
	//◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇
	//■■■■無防備VS無防備or後退攻撃or後退防御
	if(gun_sentou[0]==0 && (gun_sentou[1]==0 || now_meirei[1]==10 || now_meirei[1]==19)){
		if(AI_moral[1]>ko_moralA || AI_saikoubi[1]<ko_lineC)AI_kougeki();//攻撃
		return 0;
	}
	//■■■■無防備VS攻撃
	if(gun_sentou[0]==0 && gun_sentou[1]==1){
		if(AI_moral[1]<ko_moralE && AI_saikoubi[1]>ko_lineA) AI_koutai();//後退
		return 0;
	}
	//■■■■無防備VS防御
	if(gun_sentou[0]==0 && gun_sentou[1]==2){
		if(AI_moral[1]<ko_moralE && AI_saikoubi[1]>ko_lineA) AI_koutai();//後退
		else AI_kougeki();//攻撃
		return 0;
	}
	//■■■■攻撃VS無防備
	if(gun_sentou[0]==1 && gun_sentou[1]==0){
		if(AI_moral[1]>ko_moralB || AI_saikoubi[1]<ko_lineB) AI_kougeki();//攻撃
		return 0;//続行
	}
	//■■■■攻撃VS後退攻撃or後退防御
	if(gun_sentou[0]==1 && (now_meirei[1]==10 || now_meirei[1]==19)){
		if(AI_moral[1]>ko_moralA || AI_saikoubi[1]<ko_lineC) AI_kougeki();//攻撃
		return 0;//続行
	}
	//■■■■攻撃VS防御
	if(gun_sentou[0]==1 && gun_sentou[1]==2){
		if(AI_moral[1]>AI_moral[0]+ko_moralD || AI_saikoubi[1]<ko_lineB) AI_kougeki();//攻撃
		else if(AI_moral[1]<ko_moralE && AI_saikoubi[1]>ko_lineA) AI_koutai();//後退
		else if(AI_moral[1]<ko_moralE) AI_kougeki();
		return 0;//続行
	}
	//■■■■攻撃VS攻撃
	if(gun_sentou[0]==1 && gun_sentou[1]==1){
		if(AI_dame[0]+ko_vsA>=AI_dame[1] || gun_moral[1]>ko_moralC || AI_saikoubi[1]<ko_lineA) return 0;//続行
		else AI_koutai();//後退
		return 0;
	}
	//■■■■防御VS無防備or後退攻撃
	if(gun_sentou[0]==2 && (gun_sentou[1]==0 || now_meirei[1]==10 || now_meirei[1]==19)){
		if(AI_moral[1]>ko_moralA || AI_saikoubi[1]<ko_lineC) AI_kougeki();//攻撃
		return 0;//続行
	}
	//■■■■防御対防御
	if(gun_sentou[0]==2 && gun_sentou[1]==2){
		if(AI_moral[1]>AI_moral[0+ko_moralD] || AI_saikoubi[1]<ko_lineA) AI_kougeki();//攻撃
		else AI_koutai();//後退
		return 0;
	}
	//■■■■防御対攻撃
	if(gun_sentou[0]==2 && gun_sentou[1]==1){
		if(AI_dame[0]>=ko_vsB || AI_moral[1]>ko_moralC || AI_saikoubi[1]<ko_lineA || gun_moral[1]>ko_moralB) return 0;//続行
		else AI_koutai();//後退
		return 0;
	}
	return 0;
}
int AI_kougeki(){

	switch(A_meirei){
	case 1:sen_01();break;//全軍前進
	case 6:sen_06();break;//前列前進
	case 7:sen_07();break;//後列前進
	case 8:sen_08();AI_rest[8]--;break;//速攻前進
	case 9:sen_09();AI_rest[9]--;break;//強撃前進
	case 11:sen_11();AI_rest[11]--;break;//上翼攻撃
	case 12:sen_12();AI_rest[12]--;break;//下翼攻撃
	case 56:sen_56();AI_rest[56]--;break;//全軍前進・強
	case 66:sen_66();AI_rest[58]--;break;//超高速デルタ
	}

	return 0;
	}
int AI_koutai(){

	switch(B_meirei){
	case 2:sen_02();break;//全軍後退
	case 10:sen_10();AI_rest[10]--;break;//後退攻撃
	case 19:sen_19();AI_rest[19]--;break;//後退防御
	case 20:sen_20();AI_rest[20]--;break;//速攻後退
	case 21:sen_21();AI_rest[21]--;break;//前列交代
	case 24:sen_24();AI_rest[24]--;break;//速攻交代
	case 27:sen_27();AI_rest[27]--;break;//陣形回復
	case 31:sen_31();AI_rest[31]--;break;//陣形回復・速
	case 39:sen_39();AI_rest[39]--;break;//指揮官突撃
	case 36:sen_36();AI_rest[36]--;break;//分断作戦
	case 41:sen_41();AI_rest[41]--;break;//火攻め
	case 49:sen_49();AI_rest[49]--;break;//穴掘り作戦
	case 64:sen_64();AI_rest[41]--;break;//大熱波
	case 57:sen_57();AI_rest[57]--;break;//全軍休息
	}

	return 0;
	}
//戦闘前の敵性能代入
int VS_dai(){

	for(i=0;i<63;i++){
	AI_rest[i]=0;
	}
	AI_rest[4]=1;
	gun_senjyutu[A][0]=1;gun_senrest[A][0]=10;
	gun_senjyutu[A][1]=2;gun_senrest[A][1]=10;
	gun_senjyutu[A][2]=3;gun_senrest[A][2]=10;
	gun_senjyutu[A][3]=4;gun_senrest[A][3]=1;
	gun_senjyutu[A][4]=5;gun_senrest[A][4]=10;
	gun_senjyutu[A][5]=0;gun_senrest[A][5]=10;
	gun_senjyutu[A][6]=0;gun_senrest[A][6]=10;
	gun_senjyutu[A][7]=0;gun_senrest[A][7]=10;
	gun_senjyutu[A][8]=0;gun_senrest[A][8]=10;
	youhei_lv[1]=0;
	sinobi_lv[1]=0;

	switch (VS_no){
		case 1: VS_01();break;
		case 2: VS_02();break;
		case 3: VS_03();break;
		case 4: VS_04();break;
		case 5: VS_05();break;
		case 6: VS_06();break;
		case 7: VS_07();break;
		case 8: VS_08();break;
		case 9: VS_09();break;
		case 10: VS_10();break;
		case 11: VS_11();break;
		case 12: VS_12();break;
		case 13: VS_13();break;
		case 14: VS_14();break;
		case 15: VS_15();break;
		case 16: VS_16();break;
		case 17: VS_17();break;
		case 18: VS_18();break;
		case 19: VS_19();break;
		case 20: VS_20();break;
		case 21: VS_21();break;
		case 22: VS_22();break;
		case 23: VS_23();break;
		case 24: VS_24();break;
		case 25: VS_25();break;
		case 26: VS_26();break;
		case 27: VS_27();break;
		case 28: VS_28();break;
		case 29: VS_29();break;
		case 30: VS_30();break;
		case 31: VS_31();break;
		case 32: VS_32();break;
		case 33: VS_33();break;
		case 34: VS_34();break;
		case 35: VS_35();break;
		case 36: VS_36();break;
		case 37: VS_37();break;
		case 38: VS_38();break;
		case 39: VS_39();break;
	}

	return 0;
}
int VS_01(){
	strcpy_s(sikikan_name[A], "小鬼王ゴブキング");
	//使用する戦術
	//使用する陣形
	gun_jinkei[A]=1;//縦列陣形
	//使用するＡＩ
	AI_no=1;
	//敵軍
	gun_kazu[A]=40-1;
	butai_one[A]=1;//部隊１の兵種//ゴブリン兵
	butai_two[A]=1;//部隊２の兵種//ゴブリン兵
	butai_sirei[A]=18;//司令官の兵種//ゴブリン王
	return 0;
}
int VS_02(){
	strcpy_s(sikikan_name[A], "神将グレィト");
	//使用する戦術
	gun_senjyutu[A][5]=19;gun_senrest[A][5]=3;//後退防御
	gun_senjyutu[A][6]=30;gun_senrest[A][6]=1;//統率回復・強
	gun_senjyutu[A][7]=57;gun_senrest[A][7]=4;//全軍休息
	gun_senjyutu[A][8]=8;gun_senrest[A][8]=4;//強撃前進
	AI_rest[19]=3;
	AI_rest[30]=1;
	AI_rest[57]=3;
	AI_rest[8]=4;
	//使用する陣形
	gun_jinkei[A]=1;//縦列陣形
	//使用するＡＩ
	AI_no=1;
	//部隊数と兵種
	youhei_lv[1]=7;
	sinobi_lv[1]=7;
	gun_kazu[A]=60-1;
	butai_one[A]=5;//部隊１の兵種//オーガ兵
	butai_two[A]=6;//部隊２の兵種//ゴブリン兵
	butai_sirei[A]=26;//司令官の兵種//ゴブリン王
	
	return 0;
}
int VS_03(){
	strcpy_s(sikikan_name[A], "鉄壁のブロクス");
	//使用する戦術
	gun_senjyutu[A][5]=6;gun_senrest[A][5]=10;//前列前進
	gun_senjyutu[A][6]=21;gun_senrest[A][6]=10;//前列交代
	//使用する陣形
	gun_jinkei[A]=2;//防壁
	//使用するＡＩ
	AI_no=2;
	//部隊数と兵種
	gun_kazu[A]=40-1;
	butai_one[A]=5;//部隊１の兵種//ゴブリン兵
	butai_two[A]=3;//部隊２の兵種//ゴブリン兵
	butai_sirei[A]=26;//司令官の兵種//ゴブリン王
	return 0;
}
int VS_04(){
	strcpy_s(sikikan_name[A], "双璧のスラック");
	//使用する戦術
	gun_senjyutu[A][5]=6;gun_senrest[A][5]=10;//前列前進
	gun_senjyutu[A][6]=21;gun_senrest[A][6]=10;//前列交代
	gun_senjyutu[A][7]=24;gun_senrest[A][7]=3;//速攻交代
	gun_senjyutu[A][8]=13;gun_senrest[A][8]=1;//前列突撃
	AI_rest[24]=3;
	AI_rest[13]=1;
	//使用する陣形
	gun_jinkei[A]=2;//防壁
	//使用するＡＩ
	AI_no=2;
	//部隊数と兵種
	gun_kazu[A]=50-1;
	butai_one[A]=5;//部隊１の兵種//重装備兵
	butai_two[A]=5;//部隊２の兵種//騎兵
	butai_sirei[A]=26;//司令官の兵種//将軍
	
	return 0;
}
int VS_05(){
	strcpy_s(sikikan_name[A], "攻撃のアラン");
	//使用する戦術
	gun_senjyutu[A][5]=9;gun_senrest[A][5]=3;//強撃前進
	gun_senjyutu[A][6]=21;gun_senrest[A][6]=10;//前列交代
	AI_rest[9]=3;
	//使用する陣形
	gun_jinkei[A]=3;//防壁
	//使用するＡＩ
	AI_no=3;
	//部隊数と兵種
	gun_kazu[A]=40-1;
	butai_one[A]=6;//部隊１の兵種//重装備兵
	butai_two[A]=3;//部隊２の兵種//騎兵
	butai_sirei[A]=26;//司令官の兵種//将軍
	
	return 0;
}
int VS_06(){
	strcpy_s(sikikan_name[A], "飛翔のガリン");
	//使用する戦術
	gun_senjyutu[A][5]=9;gun_senrest[A][5]=4;//強撃前進
	gun_senjyutu[A][6]=21;gun_senrest[A][6]=0;//前列交代
	gun_senjyutu[A][7]=36;gun_senrest[A][7]=1;//分断作戦
	gun_senjyutu[A][8]=14;gun_senrest[A][8]=1;//後列突撃
	AI_rest[9]=3;
	AI_rest[36]=1;
	AI_rest[14]=1;
	//使用する陣形
	gun_jinkei[A]=3;//攻撃
	//使用するＡＩ
	AI_no=3;
	//部隊数と兵種
	youhei_lv[1]=10;
	gun_kazu[A]=50-1;
	butai_one[A]=3;//部隊１の兵種//重装備兵
	butai_two[A]=3;//部隊２の兵種//騎兵
	butai_sirei[A]=26;//司令官の兵種//将軍
	
	return 0;
}
int VS_07(){
	strcpy_s(sikikan_name[A], "突破のムニトラ");
	//使用する戦術
	gun_senjyutu[A][4]=55;gun_senrest[A][4]=4;//速攻退却
	AI_rest[55]=4;
	//使用する陣形
	gun_jinkei[A]=4;//上翼
	//使用するＡＩ
	AI_no=4;
	//部隊数と兵種
	gun_kazu[A]=60-1;
	butai_one[A]=3;//部隊１の兵種//重装備兵
	butai_two[A]=3;//部隊２の兵種//騎兵
	butai_sirei[A]=26;//司令官の兵種//将軍
	
	return 0;
}
int VS_08(){
	strcpy_s(sikikan_name[A], "猛攻のストラトス");
	//使用する戦術
	gun_senjyutu[A][4]=55;gun_senrest[A][4]=4;//速攻退却
	gun_senjyutu[A][5]=11;gun_senrest[A][5]=4;//上翼攻撃
	gun_senjyutu[A][6]=25;gun_senrest[A][6]=3;//統率回復・弱
	gun_senjyutu[A][7]=20;gun_senrest[A][7]=4;//速攻後退
	gun_senjyutu[A][8]=15;gun_senrest[A][8]=1;//上翼突撃
	AI_rest[55]=4;
	AI_rest[11]=4;
	AI_rest[25]=3;
	AI_rest[20]=4;
	AI_rest[15]=1;
	//使用する陣形
	gun_jinkei[A]=4;//上翼
	//使用するＡＩ
	AI_no=4;
	//部隊数と兵種
	youhei_lv[1]=5;
	gun_kazu[A]=48-1;
	butai_one[A]=5;//部隊１の兵種//重装備兵
	butai_two[A]=6;//部隊２の兵種//騎兵
	butai_sirei[A]=26;//司令官の兵種//将軍
	
	return 0;
}
int VS_09(){
	strcpy_s(sikikan_name[A], "集中のラゴル");
	//使用する戦術
	gun_senjyutu[A][4]=55;gun_senrest[A][4]=4;
	gun_senjyutu[A][5]=12;gun_senrest[A][5]=4;//下翼攻撃
	AI_rest[12]=4;
	AI_rest[55]=4;
	//使用する陣形
	gun_jinkei[A]=5;//下翼
	//使用するＡＩ
	AI_no=5;
	//部隊数と兵種
	gun_kazu[A]=44-1;
	butai_one[A]=3;//部隊１の兵種//重装備兵
	butai_two[A]=6;//部隊２の兵種//騎兵
	butai_sirei[A]=26;//司令官の兵種//将軍
	
	return 0;
}
int VS_10(){
	strcpy_s(sikikan_name[A], "防衛のユリーザ");
	//使用する戦術
	gun_senjyutu[A][4]=55;gun_senrest[A][4]=4;
	gun_senjyutu[A][5]=12;gun_senrest[A][5]=4;//下翼攻撃
	gun_senjyutu[A][6]=50;gun_senrest[A][6]=1;//防柵作戦
	gun_senjyutu[A][7]=10;gun_senrest[A][7]=3;//後退攻撃
	gun_senjyutu[A][8]=16;gun_senrest[A][8]=1;//下翼突撃
	AI_rest[55]=4;
	AI_rest[12]=4;
	AI_rest[50]=1;
	AI_rest[10]=3;
	AI_rest[16]=1;
	//使用する陣形
	gun_jinkei[A]=5;//下翼
	//使用するＡＩ
	AI_no=5;
	//部隊数と兵種
	sinobi_lv[1]=5;
	gun_kazu[A]=46-1;
	butai_one[A]=5;//部隊１の兵種//重装備兵
	butai_two[A]=6;//部隊２の兵種//騎兵
	butai_sirei[A]=26;//司令官の兵種//将軍
	return 0;
}
int VS_11(){
	strcpy_s(sikikan_name[A], "深淵の魔炎軍");
	//使用する戦術
	gun_senjyutu[A][5]=19;gun_senrest[A][5]=3;//後退防御
	AI_rest[19]=3;
	//使用する陣形
	gun_jinkei[A]=6;//中央突破
	//使用するＡＩ
	AI_no=6;
	//部隊数と兵種
	gun_kazu[A]=45-1;
	butai_one[A]=10;//部隊１の兵種//重装備兵
	butai_two[A]=10;//部隊２の兵種//騎兵
	butai_sirei[A]=10;//司令官の兵種//将軍
	return 0;
}
int VS_12(){
	strcpy_s(sikikan_name[A], "智将ゴリアレフ");
	//使用する戦術
	gun_senjyutu[A][5]=19;gun_senrest[A][5]=3;//後退防御
	gun_senjyutu[A][6]=31;gun_senrest[A][6]=2;//陣形回復・速
	gun_senjyutu[A][7]=36;gun_senrest[A][7]=1;//分断作戦
	gun_senjyutu[A][8]=14;gun_senrest[A][8]=1;//後列突撃
	AI_rest[19]=3;
	AI_rest[31]=2;
	AI_rest[36]=1;
	AI_rest[14]=1;
	//使用する陣形
	gun_jinkei[A]=6;//中央突破その２
	//使用するＡＩ
	AI_no=6;
	//部隊数と兵種
	sinobi_lv[1]=5;
	gun_kazu[A]=54-1;
	butai_one[A]=5;//部隊１の兵種//重装備兵
	butai_two[A]=6;//部隊２の兵種//騎兵
	butai_sirei[A]=26;//司令官の兵種//将軍
	return 0;
}
int VS_13(){
	strcpy_s(sikikan_name[A], "妖精長エリス");
	//使用する戦術
	gun_senjyutu[A][5]=7;gun_senrest[A][5]=10;//後列前進
	gun_senjyutu[A][6]=27;gun_senrest[A][6]=3;//陣形回復
	AI_rest[27]=3;
	//使用する陣形
	gun_jinkei[A]=7;//下翼
	//使用するＡＩ
	AI_no=7;
	//部隊数と兵種
	gun_kazu[A]=45-1;
	butai_one[A]=12;//部隊１の兵種//重装備兵
	butai_two[A]=12;//部隊２の兵種//騎兵
	butai_sirei[A]=13;//司令官の兵種//将軍
	return 0;
}
int VS_14(){
	strcpy_s(sikikan_name[A], "波動のツカオ");
	//使用する戦術
	gun_senjyutu[A][5]=7;gun_senrest[A][5]=10;//後列前進
	gun_senjyutu[A][6]=27;gun_senrest[A][6]=3;//陣形回復
	gun_senjyutu[A][7]=14;gun_senrest[A][7]=1;//後列突撃
	gun_senjyutu[A][8]=31;gun_senrest[A][8]=2;//陣形回復・速
	AI_rest[27]=3;
	AI_rest[14]=1;
	AI_rest[31]=2;
	//使用する陣形
	gun_jinkei[A]=7;//下翼
	//使用するＡＩ
	AI_no=7;
	//部隊数と兵種
	gun_kazu[A]=50-1;
	butai_one[A]=5;//部隊１の兵種//重装備兵
	butai_two[A]=5;//部隊２の兵種//騎兵
	butai_sirei[A]=26;//司令官の兵種//将軍
	return 0;
}
int VS_15(){
	strcpy_s(sikikan_name[A], "疾風のセイザー");
	//使用する戦術
	gun_senjyutu[A][5]=20;gun_senrest[A][5]=3;//速攻後退
	gun_senjyutu[A][6]=8;gun_senrest[A][6]=4;//速攻前進
	AI_rest[20]=3;
	AI_rest[8]=4;
	//使用する陣形
	gun_jinkei[A]=8;//下翼
	//使用するＡＩ
	AI_no=8;
	//部隊数と兵種
	gun_kazu[A]=45-1;
	butai_one[A]=6;//部隊１の兵種//重装備兵
	butai_two[A]=6;//部隊２の兵種//騎兵
	butai_sirei[A]=26;//司令官の兵種//将軍
	return 0;
}
int VS_16(){
	strcpy_s(sikikan_name[A], "忍頭サルライヤ");
	//使用する戦術
	gun_senjyutu[A][5]=20;gun_senrest[A][5]=3;//速攻後退
	gun_senjyutu[A][6]=8;gun_senrest[A][6]=4;//速攻前進
	gun_senjyutu[A][7]=9;gun_senrest[A][7]=4;//強撃前進
	gun_senjyutu[A][8]=25;gun_senrest[A][8]=3;//統率回復・弱
	AI_rest[20]=3;
	AI_rest[8]=4;
	AI_rest[9]=4;
	AI_rest[25]=3;
	//使用する陣形
	gun_jinkei[A]=8;//下翼
	//使用するＡＩ
	AI_no=8;
	//部隊数と兵種
	sinobi_lv[1]=10;
	gun_kazu[A]=45-1;
	butai_one[A]=3;//部隊１の兵種//重装備兵
	butai_two[A]=3;//部隊２の兵種//騎兵
	butai_sirei[A]=26;//司令官の兵種//将軍
	return 0;
}
int VS_17(){
	strcpy_s(sikikan_name[A], "破壊のモロモン");
	//使用する戦術
	gun_senjyutu[A][5]=57;gun_senrest[A][5]=4;//全軍休息
	AI_rest[57]=4;
	//使用する陣形
	gun_jinkei[A]=9;//下翼
	//使用するＡＩ
	AI_no=9;
	//部隊数と兵種
	gun_kazu[A]=55-1;
	butai_one[A]=6;//部隊１の兵種//重装備兵
	butai_two[A]=6;//部隊２の兵種//騎兵
	butai_sirei[A]=26;//司令官の兵種//将軍
	return 0;
}
int VS_18(){
	strcpy_s(sikikan_name[A], "猛将スマーグ");
	//使用する戦術
	gun_senjyutu[A][5]=57;gun_senrest[A][5]=4;//全軍休息
	gun_senjyutu[A][6]=19;gun_senrest[A][6]=3;//後退防御
	gun_senjyutu[A][7]=8;gun_senrest[A][7]=4;//速攻前進
	gun_senjyutu[A][8]=51;gun_senrest[A][8]=1;//水際作戦
	AI_rest[57]=4;
	AI_rest[19]=3;
	AI_rest[8]=4;
	AI_rest[51]=1;
	//使用する陣形
	gun_jinkei[A]=9;//下翼
	//使用するＡＩ
	AI_no=9;
	//部隊数と兵種
	youhei_lv[1]=5;
	gun_kazu[A]=58-1;
	butai_one[A]=5;//部隊１の兵種//重装備兵
	butai_two[A]=6;//部隊２の兵種//騎兵
	butai_sirei[A]=26;//司令官の兵種//将軍
	return 0;
}
int VS_19(){
	strcpy_s(sikikan_name[A], "殲滅のアラス");
	//使用する戦術
	gun_senjyutu[A][5]=10;gun_senrest[A][5]=4;//後退攻撃
	gun_senjyutu[A][6]=8;gun_senrest[A][6]=1;//速攻前進
	AI_rest[10]=3;
	AI_rest[8]=4;
	//使用する陣形
	gun_jinkei[A]=10;//下翼
	//使用するＡＩ
	AI_no=10;
	//部隊数と兵種
	youhei_lv[1]=5;
	gun_kazu[A]=50-1;
	butai_one[A]=5;//部隊１の兵種//重装備兵
	butai_two[A]=6;//部隊２の兵種//騎兵
	butai_sirei[A]=26;//司令官の兵種//将軍
	return 0;
}
int VS_20(){
	strcpy_s(sikikan_name[A], "蹂躙のウェイブ");
	//使用する戦術
	gun_senjyutu[A][5]=10;gun_senrest[A][5]=4;//後退攻撃
	gun_senjyutu[A][6]=8;gun_senrest[A][6]=1;//速攻前進
	gun_senjyutu[A][7]=9;gun_senrest[A][7]=3;//強撃前進
	gun_senjyutu[A][8]=27;gun_senrest[A][8]=1;//陣形回復
	AI_rest[10]=3;
	AI_rest[8]=4;
	AI_rest[9]=4;
	AI_rest[27]=3;
	//使用する陣形
	gun_jinkei[A]=10;//下翼
	//使用するＡＩ
	AI_no=10;
	//部隊数と兵種
	gun_kazu[A]=55-1;
	butai_one[A]=6;//部隊１の兵種//重装備兵
	butai_two[A]=6;//部隊２の兵種//騎兵
	butai_sirei[A]=26;//司令官の兵種//将軍
	return 0;
}
int VS_21(){
	strcpy_s(sikikan_name[A], "町長ドラント");
	//使用する戦術
	gun_senjyutu[A][5]=21;gun_senrest[A][5]=10;//前列交代
	gun_senjyutu[A][6]=6;gun_senrest[A][6]=10;//前列前進
	//使用する陣形
	gun_jinkei[A]=11;//下翼
	//使用するＡＩ
	AI_no=11;
	//部隊数と兵種
	gun_kazu[A]=45-1;
	butai_one[A]=3;//部隊１の兵種//重装備兵
	butai_two[A]=3;//部隊２の兵種//騎兵
	butai_sirei[A]=23;//司令官の兵種//将軍
	return 0;
}
int VS_22(){
	strcpy_s(sikikan_name[A], "族長エルウィ");
	//使用する戦術
	gun_senjyutu[A][5]=21;gun_senrest[A][5]=10;//前列交代
	gun_senjyutu[A][6]=6;gun_senrest[A][6]=10;//前列前進
	gun_senjyutu[A][7]=8;gun_senrest[A][7]=4;//速攻前進
	gun_senjyutu[A][8]=39;gun_senrest[A][8]=1;//指揮官突撃
	AI_rest[8]=4;
	AI_rest[39]=1;
	//使用する陣形
	gun_jinkei[A]=11;//下翼
	//使用するＡＩ
	AI_no=11;
	//部隊数と兵種
	gun_kazu[A]=45-1;
	butai_one[A]=12;//部隊１の兵種//重装備兵
	butai_two[A]=13;//部隊２の兵種//騎兵
	butai_sirei[A]=25;//司令官の兵種//将軍
	return 0;
}
int VS_23(){
	strcpy_s(sikikan_name[A], "氷の巨人タイダーン");
	//使用する戦術
	gun_senjyutu[A][5]=8;gun_senrest[A][5]=4;//速攻前進
	AI_rest[8]=4;
	//部隊数と兵種
	gun_jinkei[A]=12;
	AI_no=12;
	gun_kazu[A]=45-1;
	butai_one[A]=2;//部隊１の兵種//重装備兵
	butai_two[A]=2;//部隊２の兵種//騎兵
	butai_sirei[A]=2;//司令官の兵種//将軍
	return 0;
}
int VS_24(){
	strcpy_s(sikikan_name[A], "魔戦将イリゴス");
	//使用する戦術
	gun_senjyutu[A][4]=19;gun_senrest[A][4]=3;//後退防御
	gun_senjyutu[A][5]=8;gun_senrest[A][5]=4;//速攻前進
	gun_senjyutu[A][6]=9;gun_senrest[A][6]=4;//強撃前進
	gun_senjyutu[A][7]=31;gun_senrest[A][7]=2;//陣形回復・速
	gun_senjyutu[A][8]=67;gun_senrest[A][8]=2;//大地震
	AI_rest[19]=3;
	AI_rest[8]=4;
	AI_rest[9]=4;
	AI_rest[31]=2;
	AI_rest[59]=2;
	//使用する陣形
	gun_jinkei[A]=12;//下翼
	//使用するＡＩ
	AI_no=12;
	//部隊数と兵種
	gun_kazu[A]=65-1;
	butai_one[A]=14;//部隊１の兵種//重装備兵
	butai_two[A]=14;//部隊２の兵種//騎兵
	butai_sirei[A]=17;//司令官の兵種//将軍
	//ボスフラグ
	boss=1;

	return 0;
}
int VS_25(){
	strcpy_s(sikikan_name[A], "魔炎将フェルネクス");
	//使用する戦術
	gun_senjyutu[A][4]=57;gun_senrest[A][4]=4;//後退防御
	gun_senjyutu[A][5]=64;gun_senrest[A][5]=2;//大熱波
	gun_senjyutu[A][6]=8;gun_senrest[A][6]=4;//強撃前進
	gun_senjyutu[A][7]=30;gun_senrest[A][7]=1;//統率回復・強
	gun_senjyutu[A][8]=39;gun_senrest[A][8]=1;//指揮官突撃
	AI_rest[57]=4;
	AI_rest[41]=2;
	AI_rest[8]=4;
	AI_rest[30]=1;
	AI_rest[39]=1;
	//使用する陣形
	gun_jinkei[A]=13;//下翼
	//使用するＡＩ
	AI_no=13;
	//部隊数と兵種
	gun_kazu[A]=55-1;
	butai_one[A]=10;//部隊１の兵種//重装備兵
	butai_two[A]=10;//部隊２の兵種//騎兵
	butai_sirei[A]=20;//司令官の兵種//将軍
	boss=1;
	return 0;
}
int VS_26(){
	strcpy_s(sikikan_name[A], "冥教司祭アンナ");
	//使用する戦術
	gun_senjyutu[A][8]=61;gun_senrest[A][8]=3;//信じる者達
	AI_rest[61]=2;
	//使用する陣形
	gun_jinkei[A]=14;//下翼
	//使用するＡＩ
	AI_no=14;
	//部隊数と兵種
	gun_kazu[A]=80-1;
	butai_one[A]=7;//部隊１の兵種//重装備兵
	butai_two[A]=7;//部隊２の兵種//騎兵
	butai_sirei[A]=27;//司令官の兵種//将軍
	return 0;
}
int VS_27(){
	strcpy_s(sikikan_name[A], "冥教法王テリウス");
	//使用する戦術
	gun_senjyutu[A][4]=44;gun_senrest[A][4]=1;//情報操作L4
	gun_senjyutu[A][5]=45;gun_senrest[A][5]=1;//情報操作L2
	gun_senjyutu[A][6]=57;gun_senrest[A][6]=4;//全軍休息
	gun_senjyutu[A][7]=8;gun_senrest[A][7]=4;//速攻前進
	gun_senjyutu[A][8]=61;gun_senrest[A][8]=3;//信じる者達
	AI_rest[44]=1;
	AI_rest[45]=1;
	AI_rest[57]=4;
	AI_rest[8]=4;
	AI_rest[61]=2;
	//使用する陣形
	gun_jinkei[A]=14;//下翼
	//使用するＡＩ
	AI_no=14;
	//部隊数と兵種
	gun_kazu[A]=100-1;
	butai_one[A]=7;//部隊１の兵種//重装備兵
	butai_two[A]=7;//部隊２の兵種//騎兵
	butai_sirei[A]=27;//司令官の兵種//将軍
	return 0;
}
int VS_28(){
	strcpy_s(sikikan_name[A], "怪傑鬼将ドビン");
	//使用する戦術
	gun_senjyutu[A][5]=6;gun_senrest[A][5]=10;//前列前進
	gun_senjyutu[A][6]=21;gun_senrest[A][6]=10;//前列交代
	AI_rest[41]=1;
	//使用する陣形
	gun_jinkei[A]=15;//下翼
	//使用するＡＩ
	AI_no=15;
	//部隊数と兵種
	gun_kazu[A]=65-1;
	butai_one[A]=1;//部隊１の兵種//重装備兵
	butai_two[A]=1;//部隊２の兵種//騎兵
	butai_sirei[A]=18;//司令官の兵種//将軍
	return 0;
}
int VS_29(){
	strcpy_s(sikikan_name[A], "策将トーフ");
	//使用する戦術
	gun_senjyutu[A][5]=6;gun_senrest[A][5]=10;//前列前進
	gun_senjyutu[A][6]=21;gun_senrest[A][6]=10;//前列交代
	gun_senjyutu[A][7]=43;gun_senrest[A][7]=1;//偽りの撤退
	gun_senjyutu[A][8]=25;gun_senrest[A][8]=3;//統率回復・弱
	AI_rest[43]=1;
	AI_rest[25]=3;
	//使用する陣形
	gun_jinkei[A]=15;//下翼
	//使用するＡＩ
	AI_no=15;
	//部隊数と兵種
	sinobi_lv[1]=5;
	gun_kazu[A]=56-1;
	butai_one[A]=5;//部隊１の兵種//重装備兵
	butai_two[A]=6;//部隊２の兵種//騎兵
	butai_sirei[A]=26;//司令官の兵種//将軍
	return 0;
}
int VS_30(){
	strcpy_s(sikikan_name[A], "鉄槌のネイムフ");
	//使用する戦術
	gun_senjyutu[A][5]=24;gun_senrest[A][5]=3;//速攻交代
	gun_senjyutu[A][6]=8;gun_senrest[A][6]=4;//速攻前進
	gun_senjyutu[A][7]=13;gun_senrest[A][7]=1;//前列突撃
	gun_senjyutu[A][8]=30;gun_senrest[A][8]=1;//統率回復・強

	AI_rest[24]=3;
	AI_rest[8]=4;
	AI_rest[13]=1;
	AI_rest[30]=1;
	//使用する陣形
	gun_jinkei[A]=16;//下翼
	//使用するＡＩ
	AI_no=16;
	//部隊数と兵種
	butai_one[A]=3;//部隊１の兵種//重装備兵
	butai_two[A]=6;//部隊２の兵種//騎兵
	butai_sirei[A]=26;//司令官の兵種//将軍
	return 0;
}
int VS_31(){
	strcpy_s(sikikan_name[A], "横向きのヨーコ");
	//使用する戦術
	//使用する陣形
	gun_jinkei[A]=17;//下翼
	//使用するＡＩ
	AI_no=17;
	//部隊数と兵種
	gun_kazu[A]=55-1;
	butai_one[A]=3;//部隊１の兵種//重装備兵
	butai_two[A]=3;//部隊２の兵種//騎兵
	butai_sirei[A]=26;//司令官の兵種//将軍
	return 0;
}
int VS_32(){
	strcpy_s(sikikan_name[A], "魔海将ヴェパール");
	//使用する戦術
	gun_senjyutu[A][4]=13;gun_senrest[A][4]=1;//前列突撃
	gun_senjyutu[A][5]=21;gun_senrest[A][5]=10;//前列交代
	gun_senjyutu[A][6]=8;gun_senrest[A][6]=4;//速攻前進
	gun_senjyutu[A][7]=9;gun_senrest[A][7]=4;//強撃前進
	gun_senjyutu[A][8]=65;gun_senrest[A][8]=2;//大雨ごい
	AI_rest[9]=4;
	AI_rest[8]=3;
	AI_rest[34]=2;
	AI_rest[13]=1;
	//使用する陣形
	gun_jinkei[A]=18;//下翼
	//使用するＡＩ
	AI_no=18;
	//部隊数と兵種
	gun_kazu[A]=55-1;
	butai_one[A]=9;//部隊１の兵種//重装備兵
	butai_two[A]=9;//部隊２の兵種//騎兵
	butai_sirei[A]=21;//司令官の兵種//将軍
	boss=1;
	return 0;
}
int VS_33(){
	strcpy_s(sikikan_name[A], "魔龍将ヴォーリク");
	//使用する戦術
	gun_senjyutu[A][5]=10;gun_senrest[A][5]=3;//後退攻撃
	gun_senjyutu[A][5]=8;gun_senrest[A][5]=4;//速攻前進
	gun_senjyutu[A][6]=25;gun_senrest[A][6]=1;//統率回復・弱
	gun_senjyutu[A][7]=66;gun_senrest[A][7]=2;//超高速
	gun_senjyutu[A][8]=30;gun_senrest[A][8]=1;//統率回復・強
	AI_rest[10]=3;
	AI_rest[8]=4;
	AI_rest[25]=1;
	AI_rest[58]=2;
	AI_rest[30]=1;
	//使用する陣形
	gun_jinkei[A]=8;//下翼
	//使用するＡＩ
	AI_no=19;
	//部隊数と兵種
	gun_kazu[A]=55-1;
	butai_one[A]=14;//部隊１の兵種//重装備兵
	butai_two[A]=14;//部隊２の兵種//騎兵
	butai_sirei[A]=22;//司令官の兵種//将軍
	boss=1;
	return 0;
}
int VS_34(){
	strcpy_s(sikikan_name[A], "深淵の魔王");
	//使用する戦術
	gun_senjyutu[A][3]=63;gun_senrest[A][3]=1;//後列突撃
	gun_senjyutu[A][4]=9;gun_senrest[A][4]=4;//強撃前進
	gun_senjyutu[A][5]=21;gun_senrest[A][5]=10;//前列交代
	gun_senjyutu[A][6]=39;gun_senrest[A][6]=1;//指揮官突撃
	gun_senjyutu[A][7]=24;gun_senrest[A][7]=2;//速攻交代
	gun_senjyutu[A][8]=30;gun_senrest[A][8]=1;//統率回復・強
	AI_rest[9]=4;//強撃前進
	AI_rest[39]=1;//指揮官突撃
	AI_rest[24]=2;//速攻後退
	AI_rest[30]=1;//統率回復・強
	AI_rest[41]=1;//大熱波
	AI_rest[58]=1;//大地震
	AI_rest[34]=1;//大雨ごい
	AI_rest[59]=1;//超高速デルタ
	//使用する陣形
	gun_jinkei[A]=21;//下翼
	//使用するＡＩ
	AI_no=20;
	//部隊数と兵種
	gun_kazu[A]=60-1;
	butai_one[A]=20;//部隊１の兵種//重装備兵
	butai_two[A]=21;//部隊２の兵種//騎兵
	butai_sirei[A]=19;//司令官の兵種//将軍
	boss=1;
	return 0;
}
int VS_35(){
	strcpy_s(sikikan_name[A], "篭城のコメテオ");
	//使用する戦術
	gun_senjyutu[A][5]=50;gun_senrest[A][5]=1;//防柵作戦
	gun_senjyutu[A][5]=37;gun_senrest[A][5]=9;//投石攻撃
	AI_rest[50]=1;//防柵作戦
	AI_rest[37]=9;//投石攻撃
	//使用する陣形
	gun_jinkei[A]=1;//下翼
	//使用するＡＩ
	AI_no=21;
	//部隊数と兵種
	gun_kazu[A]=40-1;
	butai_one[A]=3;//部隊１の兵種//重装備兵
	butai_two[A]=3;//部隊２の兵種//騎兵
	butai_sirei[A]=26;//司令官の兵種//将軍
	return 0;
}
int VS_36(){
	strcpy_s(sikikan_name[A], "粘液軍団ゼラルー");
	//使用する戦術
	gun_senjyutu[A][7]=62;gun_senrest[A][7]=1;//自己再生
	AI_rest[62]=1;
	//使用する陣形
	gun_jinkei[A]=1;//縦列陣形
	//使用するＡＩ
	AI_no=22;
	//部隊数と兵種
	gun_kazu[A]=40-1;
	butai_one[A]=0;//部隊１の兵種//重装備兵
	butai_two[A]=0;//部隊２の兵種//騎兵
	butai_sirei[A]=0;//司令官の兵種//将軍
	return 0;
}
int VS_37(){
	strcpy_s(sikikan_name[A], "うぃっちさん");
	//使用する戦術
	gun_senjyutu[A][5]=64;gun_senrest[A][5]=2;//大熱波
	gun_senjyutu[A][6]=67;gun_senrest[A][6]=2;//大地震
	gun_senjyutu[A][7]=62;gun_senrest[A][7]=1;//自己再生
	gun_senjyutu[A][8]=60;gun_senrest[A][8]=1;//スライムフィーバー
	AI_rest[41]=2;
	AI_rest[59]=2;
	AI_rest[62]=1;
	AI_rest[60]=1;
	//使用する陣形
	gun_jinkei[A]=19;//下翼
	//使用するＡＩ
	AI_no=22;
	//部隊数と兵種
	gun_kazu[A]=50-1;
	butai_one[A]=0;//部隊１の兵種//重装備兵
	butai_two[A]=0;//部隊２の兵種//騎兵
	butai_sirei[A]=8;//司令官の兵種//将軍
	return 0;
}
int VS_38(){
	strcpy_s(sikikan_name[A], "龍皇ドルーラ");
	//使用する戦術
	gun_senjyutu[A][1]=57;gun_senrest[A][5]=4;//全軍休息
	gun_senjyutu[A][2]=8;gun_senrest[A][6]=4;//速攻前進
	gun_senjyutu[A][3]=4;gun_senrest[A][7]=1;//全軍突撃
	gun_senjyutu[A][4]=20;gun_senrest[A][8]=3;//
	gun_senjyutu[A][5]=19;gun_senrest[A][5]=3;//後退防御
	gun_senjyutu[A][6]=10;gun_senrest[A][6]=3;//後退攻撃
	gun_senjyutu[A][7]=41;gun_senrest[A][7]=2;//大熱波
	gun_senjyutu[A][8]=39;gun_senrest[A][8]=1;//指揮官突撃
	AI_rest[57]=4;
	AI_rest[8]=4;
	AI_rest[20]=3;
	AI_rest[19]=3;
	AI_rest[10]=3;
	AI_rest[41]=2;
	AI_rest[39]=1;
	//使用する陣形
	gun_jinkei[A]=1;//縦列陣形
	//使用するＡＩ
	AI_no=23;
	//部隊数と兵種
	gun_kazu[A]=10-1;
	butai_one[A]=0;//部隊１の兵種//ゴブリン
	butai_two[A]=0;//部隊２の兵種//ゴブリン
	butai_sirei[A]=4;//司令官の兵種//将軍
	boss=1;
	dorura=1;
	return 0;
}
int VS_39(){
	strcpy_s(sikikan_name[A], "深淵の魔海兵");
	//使用する戦術
	gun_senjyutu[A][4]=13;gun_senrest[A][4]=1;//前列突撃
	gun_senjyutu[A][5]=21;gun_senrest[A][5]=10;//前列交代
	gun_senjyutu[A][7]=34;gun_senrest[A][7]=1;//雨ごい
	gun_senjyutu[A][6]=8;gun_senrest[A][6]=4;//速攻前進
	AI_rest[13]=1;
	AI_rest[8]=4;
	//使用する陣形
	gun_jinkei[A]=18;//下翼
	//使用するＡＩ
	AI_no=18;
	//部隊数と兵種
	gun_kazu[A]=45-1;
	butai_one[A]=9;//部隊１の兵種//重装備兵
	butai_two[A]=9;//部隊２の兵種//騎兵
	butai_sirei[A]=9;//司令官の兵種//将軍
	boss=1;
	return 0;
}
//イベント
//占領イベント等
//00番
int eve_00(){
	strcpy_s(event_tolk[0][0], "");//訪問側
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//主側
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*5;//時間
	A=0;//分岐判定用
	mouse=1;

	for(t=0;t<J;){//台詞を喋らせる
	//グラフィック等固定部分
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse==0)
			if(t>=90 && t<=J-90)t=(t-90)/120*120+210;
			else if(mouse==0 && t<90  && A==0)t=90;
			else if(mouse==0 && t>J-90 && A==0)t=J;
			mouse=1;
		}else mouse=0;
		if(t/15%2==0)j=1;
		else if(t/15%4==1)j=0;
		else j=2;
		if(t==J-90){
		strcpy_s(event_tolk[0][0], "");//訪問側
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//主側
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//場面表示
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//動かない人表示
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//歩いてくる人表示
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//歩いてた人停止
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//歩いてた人停止
	//台詞
	if(t==90)strcpy_s(event_tolk[0][0], "陛下、出撃の準備が完了しました");
	if(t==90+120*1)strcpy_s(event_tolk[1][0], "うむ");
	if(t==90+120*2)strcpy_s(event_tolk[1][1], "そうだね");
	if(t==90+120*3){
		strcpy_s(setu_1, "初めて聞いた");//B=1
		strcpy_s(setu_2, "勿論知っている");//B=2
		eve_bunki();
	}
	if(t==90+120*4){
		strcpy_s(event_tolk[0][0], "さすが陛下");//B=1
		strcpy_s(event_tolk[0][1], "天才ですね");//B=2
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
//01番、ゲーム開始時
int eve_01(){
	strcpy_s(event_tolk[0][0], "");//訪問側
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//主側
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*2;//時間
	A=0;//分岐判定用
	mouse=1;

	for(t=0;t<J;){//台詞を喋らせる
	//グラフィック等固定部分
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse==0)
			if(t>=90 && t<=J-90)t=(t-90)/120*120+210;
			else if(mouse==0 && t<90  && A==0)t=90;
			else if(mouse==0 && t>J-90 && A==0)t=J;
			mouse=1;
		}else mouse=0;
		if(t/15%2==0)j=1;
		else if(t/15%4==1)j=0;
		else j=2;
		if(t==J-90){
		strcpy_s(event_tolk[0][0], "");//訪問側
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//主側
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//場面表示
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//動かない人表示
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//歩いてくる人表示
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//歩いてた人停止
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//歩いてた人停止
	//台詞
		if(t==90){
			strcpy_s(event_tolk[0][0], "陛下、出撃の準備が完了しました");
			strcpy_s(event_tolk[0][1], "ご命令を");
		}
		if(t==210){
			strcpy_s(event_tolk[1][0], "うむ");
		}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
//02番、竜の山(その１)立ち去るor殺す
int eve_02(){
	strcpy_s(event_tolk[0][0], "");//訪問側
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//主側
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*5;//時間
	A=0;//分岐判定用
	mouse=1;

	for(t=0;t<J;){//台詞を喋らせる
	//グラフィック等固定部分
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse==0)
			if(t>=90 && t<=J-90)t=(t-90)/120*120+210;
			else if(mouse==0 && t<90  && A==0)t=90;
			else if(mouse==0 && t>J-90 && A==0)t=J;
			mouse=1;
		}else mouse=0;
		if(t/15%2==0)j=1;
		else if(t/15%4==1)j=0;
		else j=2;
		if(t==J-90){
		strcpy_s(event_tolk[0][0], "");//訪問側
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//主側
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0,world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[1] , TRUE ) ;//場面表示
		DrawRotaGraph( 320 , 180 , 2 , 0 , unit_g[4][1][1] , TRUE ) ;//動かない竜王表示
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[24][0][j+3] , TRUE ) ;//歩いてくる王表示
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[24][0][j] , TRUE ) ;//歩いてた王帰る
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[24][0][4] , TRUE ) ;//歩いてた王停止
	//台詞
	if(t==90){
		strcpy_s(event_tolk[1][0], "ここは我の縄張りだ");
	}
	if(t==90+120*1)strcpy_s(event_tolk[1][0], "去れ人間");
	if(t==90+120*2){
		strcpy_s(setu_1, "戦いを挑む");//B=1
		strcpy_s(setu_2, "立ち去る");//B=2
		eve_bunki();
		if(B==2){
			t+=240;
			strcpy_s(event_tolk[1][0], "");
		}
	}
	if(t==90+120*3){
		strcpy_s(event_tolk[1][0], "身の程を知らんようだな");//B=1
	}
	if(t==90+120*4){
		strcpy_s(event_tolk[1][0], "返り討ちにしてくれるわ");//B=1
	}
	if(t==90+120*5 && B==1) break;
	//
	syaberi();
	ScreenFlip();
	}
	if(B==1)for(t=0;t<60;t++){
		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		DrawGraph( 0, 0,world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[1] , TRUE ) ;//場面表示
		DrawRotaGraph( 320 , 180 , 2 , 0 , unit_g[4][1][1] , TRUE ) ;//動かない竜王表示
		DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[24][0][4] , TRUE ) ;//歩いてた王停止
		for(i=0;i<5;i++){
		DrawBox(0       ,i*96,t*20,i*96+48,kuro,TRUE);
		DrawBox(640-t*20,i*96+48,640,i*96+96,kuro,TRUE);
		}
		ScreenFlip();
	}


	return 0;
}
//03番、竜の山(その２)話をするor殺す
int eve_03(){
	strcpy_s(event_tolk[0][0], "");//訪問側
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//主側
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*5;//時間
	A=0;//分岐判定用
	mouse=1;

	for(t=0;t<J;){//台詞を喋らせる
	//グラフィック等固定部分
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse==0)
			if(t>=90 && t<=J-90)t=(t-90)/120*120+210;
			else if(mouse==0 && t<90  && A==0)t=90;
			else if(mouse==0 && t>J-90 && A==0)t=J;
			mouse=1;
		}else mouse=0;
		if(t/15%2==0)j=1;
		else if(t/15%4==1)j=0;
		else j=2;
		if(t==J-90){
		strcpy_s(event_tolk[0][0], "");//訪問側
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//主側
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0,world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[1] , TRUE ) ;//場面表示
		DrawRotaGraph( 320 , 180 , 2 , 0 , unit_g[4][1][1] , TRUE ) ;//動かない竜王表示
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[24][0][j+3] , TRUE ) ;//歩いてくる王表示
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[24][0][j] , TRUE ) ;//歩いてた王帰る
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[24][0][4] , TRUE ) ;//歩いてた王停止
	//台詞
	if(t==90){
		strcpy_s(event_tolk[1][0], "ここは我の縄張りだ");
	}
	if(t==90+120*1)strcpy_s(event_tolk[1][0], "去れ人間");
	if(t==90+120*2){
		strcpy_s(setu_1, "戦いを挑む");//B=1
		strcpy_s(setu_2, "協力を頼む");//B=2
		eve_bunki();
	}
	if(t==90+120*3){
		if(B==1)strcpy_s(event_tolk[1][0], "身の程を知らんようだな");//B=1
		else{
			strcpy_s(event_tolk[1][0], "深淵の魔龍将か・・・");//B=1
			strcpy_s(event_tolk[1][1], "我が縄張りを荒らす彼の魔物には");//B=1
			strcpy_s(event_tolk[1][2], "我も困っていた所");//B=1
		}
	}
	if(t==90+120*4){
		if(B==1)strcpy_s(event_tolk[1][0], "返り討ちにしてくれるわ");//B=1
		else{
			kuni_seiryoku[2]=2;
			eve_flag[3]=1;
			strcpy_s(event_tolk[1][0], "よかろう、奴との戦では我を呼べ");//B=1
			strcpy_s(event_tolk[1][1], "");//B=1
			strcpy_s(event_tolk[1][2], "");//B=1
		}
	}
	if(t==90+120*5 && B==1) break;
	//
	syaberi();
	ScreenFlip();
	}
	if(B==1)for(t=0;t<60;t++){
		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		DrawGraph( 0, 0,world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[1] , TRUE ) ;//場面表示
		DrawRotaGraph( 320 , 180 , 2 , 0 , unit_g[4][1][1] , TRUE ) ;//動かない竜王表示
		DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[24][0][4] , TRUE ) ;//歩いてた王停止
		for(i=0;i<5;i++){
		DrawBox(0       ,i*96,t*20,i*96+48,kuro,TRUE);
		DrawBox(640-t*20,i*96+48,640,i*96+96,kuro,TRUE);
		}
		ScreenFlip();
	}


	return 0;
}
//04番、竜の山(その３)立ち去るor殺す
int eve_04(){
	strcpy_s(event_tolk[0][0], "");//訪問側
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//主側
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*5;//時間
	A=0;//分岐判定用
	mouse=1;

	for(t=0;t<J;){//台詞を喋らせる
	//グラフィック等固定部分
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse==0)
			if(t>=90 && t<=J-90)t=(t-90)/120*120+210;
			else if(mouse==0 && t<90  && A==0)t=90;
			else if(mouse==0 && t>J-90 && A==0)t=J;
			mouse=1;
		}else mouse=0;
		if(t/15%2==0)j=1;
		else if(t/15%4==1)j=0;
		else j=2;
		if(t==J-90){
		strcpy_s(event_tolk[0][0], "");//訪問側
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//主側
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0,world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[1] , TRUE ) ;//場面表示
		DrawRotaGraph( 320 , 180 , 2 , 0 , unit_g[4][1][1] , TRUE ) ;//動かない竜王表示
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[24][0][j+3] , TRUE ) ;//歩いてくる王表示
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[24][0][j] , TRUE ) ;//歩いてた王帰る
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[24][0][4] , TRUE ) ;//歩いてた王停止
	//台詞
	if(t==90){
		strcpy_s(event_tolk[1][0], "久しいな、我に何か用か？");
	}
	if(t==90+120*1){
		strcpy_s(event_tolk[0][0], "町を襲うのを止めるんだ");
	}
	if(t==90+120*2){
		strcpy_s(event_tolk[1][0], "人を喰らうは竜の定め");
		strcpy_s(event_tolk[1][1], "止める事は出来ん");
	}
	if(t==90+120*3){
		strcpy_s(event_tolk[1][0], "どうしても止めさせたいならば");
		strcpy_s(event_tolk[1][1], "我を殺せ");
		strcpy_s(event_tolk[0][0], "");
	}
	if(t==90+120*4){
		strcpy_s(setu_1, "戦いを挑む");//B=1
		strcpy_s(setu_2, "立ち去る");//B=2
		eve_bunki();
		if(B==2){
			strcpy_s(event_tolk[1][0], "");
		}
	}
	if(t==90+120*5 && B==1) break;
	//
	syaberi();
	ScreenFlip();
	}
	if(B==1)for(t=0;t<60;t++){
		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		DrawGraph( 0, 0,world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[1] , TRUE ) ;//場面表示
		DrawRotaGraph( 320 , 180 , 2 , 0 , unit_g[4][1][1] , TRUE ) ;//動かない竜王表示
		DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[24][0][4] , TRUE ) ;//歩いてた王停止
		for(i=0;i<5;i++){
		DrawBox(0       ,i*96,t*20,i*96+48,kuro,TRUE);
		DrawBox(640-t*20,i*96+48,640,i*96+96,kuro,TRUE);
		}
		ScreenFlip();
	}


	return 0;
}
//05番、竜の山で全滅、ゲームオーバー
int eve_05(){
	strcpy_s(event_tolk[0][0], "");//訪問側
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//主側
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*5;//時間
	A=0;//分岐判定用
	mouse=1;

	for(t=90;t<J;){//台詞を喋らせる
	//グラフィック等固定部分
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse==0)
			if(t>=90 && t<=J-90)t=(t-90)/120*120+210;
			else if(mouse==0 && t<90  && A==0)t=90;
			else if(mouse==0 && t>J-90 && A==0)t=J;
			mouse=1;
		}else mouse=0;
		if(t/15%2==0)j=1;
		else if(t/15%4==1)j=0;
		else j=2;
		if(t==J-90){
		strcpy_s(event_tolk[0][0], "");//訪問側
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//主側
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0,world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[1] , TRUE ) ;//場面表示
		DrawRotaGraph( 320 , 180 , 2 , 0 , unit_g[4][1][1] , TRUE ) ;//動かない竜王表示
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[24][0][j+3] , TRUE ) ;//歩いてくる王表示
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[24][0][j] , TRUE ) ;//歩いてた王帰る
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[24][0][4] , TRUE ) ;//歩いてた王停止
	//台詞
	if(t==90){
		strcpy_s(event_tolk[1][0], "これまでのようだな");
	}
	if(t==90+120*1){
		strcpy_s(event_tolk[1][0], "地獄で後悔するといい");
	}
	if(t==90+120*2){
		strcpy_s(event_tolk[0][0], "うわー");
	}
	if(t==90+120*3) break;
	//
	syaberi();
	ScreenFlip();
	}
	for(t=0;t<60;t++){
		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		DrawGraph( 0, 0,world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[1] , TRUE ) ;//場面表示
		DrawRotaGraph( 320 , 180 , 2 , 0 , unit_g[4][1][1] , TRUE ) ;//動かない竜王表示
		DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[24][0][4] , TRUE ) ;//歩いてた王停止
		for(i=0;i<5;i++){
		DrawBox(0       ,i*96,t*20,i*96+48,kuro,TRUE);
		DrawBox(640-t*20,i*96+48,640,i*96+96,kuro,TRUE);
		}
		ScreenFlip();
	}

	DxLib_End() ;//DXライブラリの使用終了
	exit(1);//プログラムの終了

	return 0;
}
//06番、０１占領、氷の剣イベント（永久凍土
int eve_06(){
	strcpy_s(event_tolk[0][0], "");//訪問側
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//主側
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*1;//時間
	A=0;//分岐判定用
	mouse=1;

	for(t=0;t<J;){//台詞を喋らせる
	//グラフィック等固定部分
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse==0)
			if(t>=90 && t<=J-90)t=(t-90)/120*120+210;
			else if(mouse==0 && t<90  && A==0)t=90;
			else if(mouse==0 && t>J-90 && A==0)t=J;
			mouse=1;
		}else mouse=0;
		if(t/15%2==0)j=1;
		else if(t/15%4==1)j=0;
		else j=2;
		if(t==J-90){
		strcpy_s(event_tolk[0][0], "");//訪問側
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//主側
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0,world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[2] , TRUE ) ;//場面表示
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 210 ) ;
		if(t<=90)DrawRotaGraph( 320 , 180 , 2 , 0 , item_g[12] , TRUE ) ;//氷の剣表示
		SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[24][0][j+3] , TRUE ) ;//歩いてくる王表示
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[24][0][j] , TRUE ) ;//歩いてた王帰る
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[24][0][4] , TRUE ) ;//歩いてた王停止
	//台詞
	if(t==90){
		strcpy_s(event_tolk[0][0], "念願の氷の剣を手に入れたぞ");
	}
	syaberi();
	ScreenFlip();
	}
	get_hyouhou[42]=1;
	flag_hyouhou[42]=1;

	return 0;
}
//07番、０２占領、竜王殺しイベント、竜麟獲得（竜の山
int eve_07(){
	strcpy_s(event_tolk[0][0], "");//訪問側
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//主側
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*4;//時間
	A=0;//分岐判定用
	mouse=1;

	for(t=90;t<J;){//台詞を喋らせる
	//グラフィック等固定部分
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse==0)
			if(t>=90 && t<=J-90)t=(t-90)/120*120+210;
			else if(mouse==0 && t<90  && A==0)t=90;
			else if(mouse==0 && t>J-90 && A==0)t=J;
			mouse=1;
		}else mouse=0;
		if(t/15%2==0)j=1;
		else if(t/15%4==1)j=0;
		else j=2;
		if(t==J-90){
		strcpy_s(event_tolk[0][0], "");//訪問側
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//主側
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0,world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[1] , TRUE ) ;//場面表示
		if(t<=90+120*2)DrawRotaGraph( 320 , 180 , 2 , 0 , unit_g[4][1][1] , TRUE ) ;//動かない竜王表示
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[24][0][j+3] , TRUE ) ;//歩いてくる王表示
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[24][0][j] , TRUE ) ;//歩いてた王帰る
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[24][0][4] , TRUE ) ;//歩いてた王停止
	//台詞
	if(t==90){
		strcpy_s(event_tolk[1][0], "まさか人間如きに遅れをとるとは");
	}
	if(t==90+120*1)strcpy_s(event_tolk[0][0], "止めだ");
	if(t==90+120*2){
		strcpy_s(event_tolk[1][0], "ぐおー");//B=1
	}
	if(t==90+120*3){
		strcpy_s(event_tolk[0][0], "竜鱗か");//B=1
		strcpy_s(event_tolk[1][0], "");//B=1
	}
	syaberi();
	ScreenFlip();
	}
	get_item[2]++;
	return 0;
}
//08番、０２占領、竜王殺しイベントその２、竜麟獲得（竜の山
int eve_08(){
	strcpy_s(event_tolk[0][0], "");//訪問側
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//主側
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*4;//時間
	A=0;//分岐判定用
	mouse=1;

	for(t=90;t<J;){//台詞を喋らせる
	//グラフィック等固定部分
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse==0)
			if(t>=90 && t<=J-90)t=(t-90)/120*120+210;
			else if(mouse==0 && t<90  && A==0)t=90;
			else if(mouse==0 && t>J-90 && A==0)t=J;
			mouse=1;
		}else mouse=0;
		if(t/15%2==0)j=1;
		else if(t/15%4==1)j=0;
		else j=2;
		if(t==J-90){
		strcpy_s(event_tolk[0][0], "");//訪問側
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//主側
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0,world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[1] , TRUE ) ;//場面表示
		if(t<=90+120*2)DrawRotaGraph( 320 , 180 , 2 , 0 , unit_g[4][1][1] , TRUE ) ;//動かない竜王表示
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[24][0][j+3] , TRUE ) ;//歩いてくる王表示
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[24][0][j] , TRUE ) ;//歩いてた王帰る
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[24][0][4] , TRUE ) ;//歩いてた王停止
	//台詞
	if(t==90){
		strcpy_s(event_tolk[1][0], "これも定めか");
	}
	if(t==90+120*1)strcpy_s(event_tolk[0][0], "止めだ");
	if(t==90+120*2){
		strcpy_s(event_tolk[1][0], "ぐおー");//B=1
	}
	if(t==90+120*3){
		strcpy_s(event_tolk[0][0], "竜鱗か");//B=1
		strcpy_s(event_tolk[1][0], "");//B=1
	}
	syaberi();
	ScreenFlip();
	}
	get_item[2]++;
	return 0;
}
//報告系
//09番、１４同盟、妖精と会見。魔戦将の話
int eve_09(){
	strcpy_s(event_tolk[0][0], "");//訪問側
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//主側
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*7;//時間
	A=0;//分岐判定用
	mouse=1;
	for(t=0;t<J;){//台詞を喋らせる
	//グラフィック等固定部分
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse==0)
			if(t>=90 && t<=J-90)t=(t-90)/120*120+210;
			else if(mouse==0 && t<90  && A==0)t=90;
			else if(mouse==0 && t>J-90 && A==0)t=J;
			mouse=1;
		}else mouse=0;
		if(t/15%2==0)j=1;
		else if(t/15%4==1)j=0;
		else j=2;
		if(t==J-90){
		strcpy_s(event_tolk[0][0], "");//訪問側
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//主側
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//場面表示
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//動かない人表示
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[25][0][j+3] , TRUE ) ;//歩いてくる人表示
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[25][0][j] , TRUE ) ;//歩いてた人停止
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[25][0][4] , TRUE ) ;//歩いてた人停止
	//台詞
	if(t==90){
		strcpy_s(event_tolk[0][0], "初めまして陛下");
		strcpy_s(event_tolk[0][1], "族長のエルウィでございます");
	}
	if(t==90+120*1){
		strcpy_s(event_tolk[0][0], "最近魔神殿から邪悪な気配を");
		strcpy_s(event_tolk[0][1], "感じます");
		strcpy_s(event_tolk[0][2], "深淵の門が開きかけているのです");
	}
	if(t==90+120*2){
		strcpy_s(event_tolk[1][0], "それは一大事だ");//B=1
	}
	if(t==90+120*3){
		strcpy_s(event_tolk[0][0], "幸い彼の者の力はまだ弱く");
		strcpy_s(event_tolk[0][1], "十分対抗する事が出来ます");
		strcpy_s(event_tolk[0][2], "");
	}
	if(t==90+120*4){
		strcpy_s(event_tolk[1][0], "ならば今の内に叩いておくか");
		strcpy_s(event_tolk[1][1], "");
	}
	if(t==90+120*5){
		strcpy_s(event_tolk[0][0], "魔神殿へ攻め込む際は我らが");//B=1
		strcpy_s(event_tolk[0][1], "協力いたします");//B=2
	}
	if(t==90+120*6){
		strcpy_s(event_tolk[1][0], "うむ");//B=1
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
//11番、２２占領or同盟、傭兵の町//バルバード
int eve_10(){
	strcpy_s(event_tolk[0][0], "");//訪問側
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//主側
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*1;//時間
	A=0;//分岐判定用
	mouse=1;
	for(t=0;t<J;){//台詞を喋らせる
	//グラフィック等固定部分
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse==0)
			if(t>=90 && t<=J-90)t=(t-90)/120*120+210;
			else if(mouse==0 && t<90  && A==0)t=90;
			else if(mouse==0 && t>J-90 && A==0)t=J;
			mouse=1;
		}else mouse=0;
		if(t/15%2==0)j=1;
		else if(t/15%4==1)j=0;
		else j=2;
		if(t==J-90){
		strcpy_s(event_tolk[0][0], "");//訪問側
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//主側
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//場面表示
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//動かない人表示
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//歩いてくる人表示
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//歩いてた人停止
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//歩いてた人停止
	//台詞
	if(t==90){
		strcpy_s(event_tolk[0][0], "戦士ギルド本部を抑えました");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
//15番、２８占領or同盟、忍の町//コウガイ
int eve_11(){
	strcpy_s(event_tolk[0][0], "");//訪問側
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//主側
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*1;//時間
	A=0;//分岐判定用
	mouse=1;
	for(t=0;t<J;){//台詞を喋らせる
	//グラフィック等固定部分
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse==0)
			if(t>=90 && t<=J-90)t=(t-90)/120*120+210;
			else if(mouse==0 && t<90  && A==0)t=90;
			else if(mouse==0 && t>J-90 && A==0)t=J;
			mouse=1;
		}else mouse=0;
		if(t/15%2==0)j=1;
		else if(t/15%4==1)j=0;
		else j=2;
		if(t==J-90){
		strcpy_s(event_tolk[0][0], "");//訪問側
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//主側
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//場面表示
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//動かない人表示
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//歩いてくる人表示
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//歩いてた人停止
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//歩いてた人停止
	//台詞
	if(t==90){
		strcpy_s(event_tolk[0][0], "忍びの里を抑えました");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
//18番、０４占領、魔龍将撃退、竜麟(双竜の峰
int eve_12(){
	strcpy_s(event_tolk[0][0], "");//訪問側
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//主側
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*2;//時間
	A=0;//分岐判定用
	mouse=1;
	for(t=0;t<J;){//台詞を喋らせる
	//グラフィック等固定部分
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse==0)
			if(t>=90 && t<=J-90)t=(t-90)/120*120+210;
			else if(mouse==0 && t<90  && A==0)t=90;
			else if(mouse==0 && t>J-90 && A==0)t=J;
			mouse=1;
		}else mouse=0;
		if(t/15%2==0)j=1;
		else if(t/15%4==1)j=0;
		else j=2;
		if(t==J-90){
		strcpy_s(event_tolk[0][0], "");//訪問側
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//主側
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//場面表示
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//動かない人表示
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//歩いてくる人表示
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//歩いてた人停止
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//歩いてた人停止
	//台詞
	if(t==90){
		strcpy_s(event_tolk[0][0], "双竜の峰で宝を発見しました");
	}
	if(t==90+120){
		strcpy_s(event_tolk[1][0], "竜鱗か");
	}
	//
	syaberi();
	ScreenFlip();
	}
	get_item[2]++;
	return 0;
}
//19番、１２占領、魔炎将撃退、鳳凰の羽（朱雀要塞
int eve_13(){
	strcpy_s(event_tolk[0][0], "");//訪問側
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//主側
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*2;//時間
	A=0;//分岐判定用
	mouse=1;
	for(t=0;t<J;){//台詞を喋らせる
	//グラフィック等固定部分
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse==0)
			if(t>=90 && t<=J-90)t=(t-90)/120*120+210;
			else if(mouse==0 && t<90  && A==0)t=90;
			else if(mouse==0 && t>J-90 && A==0)t=J;
			mouse=1;
		}else mouse=0;
		if(t/15%2==0)j=1;
		else if(t/15%4==1)j=0;
		else j=2;
		if(t==J-90){
		strcpy_s(event_tolk[0][0], "");//訪問側
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//主側
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//場面表示
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//動かない人表示
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//歩いてくる人表示
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//歩いてた人停止
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//歩いてた人停止
	//台詞
	if(t==90){
		strcpy_s(event_tolk[0][0], "朱雀要塞で宝を発見しました");
	}
	if(t==90+120){
		strcpy_s(event_tolk[1][0], "鳳凰の羽か");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
//20番、２９占領、魔海将撃退　生命の雫。（海帝宮
int eve_14(){
	strcpy_s(event_tolk[0][0], "");//訪問側
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//主側
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*2;//時間
	A=0;//分岐判定用
	mouse=1;
	for(t=0;t<J;){//台詞を喋らせる
	//グラフィック等固定部分
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse==0)
			if(t>=90 && t<=J-90)t=(t-90)/120*120+210;
			else if(mouse==0 && t<90  && A==0)t=90;
			else if(mouse==0 && t>J-90 && A==0)t=J;
			mouse=1;
		}else mouse=0;
		if(t/15%2==0)j=1;
		else if(t/15%4==1)j=0;
		else j=2;
		if(t==J-90){
		strcpy_s(event_tolk[0][0], "");//訪問側
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//主側
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//場面表示
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//動かない人表示
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//歩いてくる人表示
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//歩いてた人停止
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//歩いてた人停止
	//台詞
	if(t==90){
		strcpy_s(event_tolk[0][0], "海帝宮で宝を発見しました");
	}
	if(t==90+120){
		strcpy_s(event_tolk[1][0], "生命の雫か");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
//21番、１５占領、魔戦将撃退、魔槍（魔神殿
int eve_15(){
	strcpy_s(event_tolk[0][0], "");//訪問側
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//主側
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*2;//時間
	A=0;//分岐判定用
	mouse=1;
	for(t=0;t<J;){//台詞を喋らせる
	//グラフィック等固定部分
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse==0)
			if(t>=90 && t<=J-90)t=(t-90)/120*120+210;
			else if(mouse==0 && t<90  && A==0)t=90;
			else if(mouse==0 && t>J-90 && A==0)t=J;
			mouse=1;
		}else mouse=0;
		if(t/15%2==0)j=1;
		else if(t/15%4==1)j=0;
		else j=2;
		if(t==J-90){
		strcpy_s(event_tolk[0][0], "");//訪問側
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//主側
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//場面表示
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//動かない人表示
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//歩いてくる人表示
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//歩いてた人停止
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//歩いてた人停止
	//台詞
	if(t==90){
		strcpy_s(event_tolk[0][0], "魔神殿で宝を発見しました");
	}
	if(t==90+120){
		strcpy_s(event_tolk[1][0], "魔槍か");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
//16番、４魔将撃退、深淵出現。
int eve_16(){



	strcpy_s(event_tolk[0][0], "");//訪問側
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//主側
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120;//時間
	A=0;//分岐判定用
	mouse=1;
	for(t=0;t<J;){//台詞を喋らせる
	//グラフィック等固定部分
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse==0)
			if(t>=90 && t<=J-90)t=(t-90)/120*120+210;
			else if(mouse==0 && t<90  && A==0)t=90;
			else if(mouse==0 && t>J-90 && A==0)t=J;
			mouse=1;
		}else mouse=0;
		if(t/15%2==0)j=1;
		else if(t/15%4==1)j=0;
		else j=2;
		if(t==J-90){
		strcpy_s(event_tolk[0][0], "");//訪問側
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//主側
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//場面表示
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//動かない人表示
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//歩いてくる人表示
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//歩いてた人停止
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//歩いてた人停止
	//台詞
	if(t==90){
		strcpy_s(event_tolk[0][0], "深淵への門を発見しました");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
//17番、うぃっち出現(産業、国力、民衆が最高
int eve_17(){
	strcpy_s(event_tolk[0][0], "");//訪問側
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//主側
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120;//時間
	A=0;//分岐判定用
	mouse=1;
	for(t=0;t<J;){//台詞を喋らせる
	//グラフィック等固定部分
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse==0)
			if(t>=90 && t<=J-90)t=(t-90)/120*120+210;
			else if(mouse==0 && t<90  && A==0)t=90;
			else if(mouse==0 && t>J-90 && A==0)t=J;
			mouse=1;
		}else mouse=0;
		if(t/15%2==0)j=1;
		else if(t/15%4==1)j=0;
		else j=2;
		if(t==J-90){
		strcpy_s(event_tolk[0][0], "");//訪問側
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//主側
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//場面表示
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//動かない人表示
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//歩いてくる人表示
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//歩いてた人停止
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//歩いてた人停止
	//台詞
	if(t==90){
		strcpy_s(event_tolk[0][0], "東の森に魔女がいるそうです");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
//18番、竜が街を襲っています
int eve_18(){
	strcpy_s(event_tolk[0][0], "");//訪問側
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//主側
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120;//時間
	A=0;//分岐判定用
	mouse=1;
	for(t=0;t<J;){//台詞を喋らせる
	//グラフィック等固定部分
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse==0)
			if(t>=90 && t<=J-90)t=(t-90)/120*120+210;
			else if(mouse==0 && t<90  && A==0)t=90;
			else if(mouse==0 && t>J-90 && A==0)t=J;
			mouse=1;
		}else mouse=0;
		if(t/15%2==0)j=1;
		else if(t/15%4==1)j=0;
		else j=2;
		if(t==J-90){
		strcpy_s(event_tolk[0][0], "");//訪問側
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//主側
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//場面表示
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//動かない人表示
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//歩いてくる人表示
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//歩いてた人停止
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//歩いてた人停止
	//台詞
	if(t==90){
		strcpy_s(event_tolk[0][0], "ドルーラが街を襲っています");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
//19番、蜂起した民衆が城を囲んでいます
int eve_19(){
	strcpy_s(event_tolk[0][0], "");//訪問側
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//主側
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*2;//時間
	A=0;//分岐判定用
	mouse=1;
	for(t=0;t<J-90;){//台詞を喋らせる
	//グラフィック等固定部分
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse==0)
			if(t>=90 && t<=J-90)t=(t-90)/120*120+210;
			else if(mouse==0 && t<90  && A==0)t=90;
			else if(mouse==0 && t>J-90 && A==0)t=J;
			mouse=1;
		}else mouse=0;
		if(t/15%2==0)j=1;
		else if(t/15%4==1)j=0;
		else j=2;
		if(t==J-90){
		strcpy_s(event_tolk[0][0], "");//訪問側
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//主側
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//場面表示
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//動かない人表示
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//歩いてくる人表示
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//歩いてた人停止
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//歩いてた人停止
	//台詞
	if(t==90){
		strcpy_s(event_tolk[0][0], "民衆が王城を囲んでいます");
		strcpy_s(event_tolk[0][1], "もう逃げられません");
	}
	if(t==90+120){
		strcpy_s(event_tolk[1][0], "なんと言う事だ");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
int eve_20(){
	strcpy_s(event_tolk[0][0], "");//訪問側
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//主側
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*2;//時間
	A=0;//分岐判定用
	mouse=1;
	for(t=0;t<J-90;){//台詞を喋らせる
	//グラフィック等固定部分
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse==0)
			if(t>=90 && t<=J-90)t=(t-90)/120*120+210;
			else if(mouse==0 && t<90  && A==0)t=90;
			else if(mouse==0 && t>J-90 && A==0)t=J;
			mouse=1;
		}else mouse=0;
		if(t/15%2==0)j=1;
		else if(t/15%4==1)j=0;
		else j=2;
		if(t==J-90){
		strcpy_s(event_tolk[0][0], "");//訪問側
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//主側
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//場面表示
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//動かない人表示
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//歩いてくる人表示
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//歩いてた人停止
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//歩いてた人停止
	//台詞
	if(t==90){
		strcpy_s(event_tolk[0][0], "敵軍が王城を囲んでいます");
		strcpy_s(event_tolk[0][1], "もう逃げられません");
	}
	if(t==90+120){
		strcpy_s(event_tolk[1][0], "なんと言う事だ");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
int eve_21(){
	strcpy_s(event_tolk[0][0], "");//訪問側
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//主側
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*2;//時間
	A=0;//分岐判定用
	mouse=1;
	for(t=0;t<J-90;){//台詞を喋らせる
	//グラフィック等固定部分
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse==0)
			if(t>=90 && t<=J-90)t=(t-90)/120*120+210;
			else if(mouse==0 && t<90  && A==0)t=90;
			else if(mouse==0 && t>J-90 && A==0)t=J;
			mouse=1;
		}else mouse=0;
		if(t/15%2==0)j=1;
		else if(t/15%4==1)j=0;
		else j=2;
		if(t==J-90){
		strcpy_s(event_tolk[0][0], "");//訪問側
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//主側
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//場面表示
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//動かない人表示
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//歩いてくる人表示
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//歩いてた人停止
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//歩いてた人停止
	//台詞
	if(t==90){
		strcpy_s(event_tolk[0][0], "我が国の戦力では");
		strcpy_s(event_tolk[0][1], "もう戦い続ける事は出来ません");
		strcpy_s(event_tolk[0][2], "大国の軍門に下りましょう");
	}
	if(t==90+120){
		strcpy_s(event_tolk[1][0], "仕方が無い、そうしよう");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
int eve_22(){
	strcpy_s(event_tolk[0][0], "");//訪問側
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//主側
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*2;//時間
	A=0;//分岐判定用
	mouse=1;
	for(t=0;t<J-90;){//台詞を喋らせる
	//グラフィック等固定部分
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse==0)
			if(t>=90 && t<=J-90)t=(t-90)/120*120+210;
			else if(mouse==0 && t<90  && A==0)t=90;
			else if(mouse==0 && t>J-90 && A==0)t=J;
			mouse=1;
		}else mouse=0;
		if(t/15%2==0)j=1;
		else if(t/15%4==1)j=0;
		else j=2;
		if(t==J-90){
		strcpy_s(event_tolk[0][0], "");//訪問側
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//主側
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//場面表示
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//動かない人表示
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//歩いてくる人表示
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//歩いてた人停止
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//歩いてた人停止
	//台詞
	if(t==90){
		strcpy_s(event_tolk[0][0], "乱世はまだまだ続きます");
		strcpy_s(event_tolk[0][1], "覇権をつかむため頑張りましょう");
		strcpy_s(event_tolk[0][2], "");
	}
	if(t==90+120){
		strcpy_s(event_tolk[1][0], "うむ、次の戦いへ赴くぞ");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
int eve_23(){
	strcpy_s(event_tolk[0][0], "");//訪問側
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//主側
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*2;//時間
	A=0;//分岐判定用
	mouse=1;
	for(t=0;t<J-90;){//台詞を喋らせる
	//グラフィック等固定部分
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse==0)
			if(t>=90 && t<=J-90)t=(t-90)/120*120+210;
			else if(mouse==0 && t<90  && A==0)t=90;
			else if(mouse==0 && t>J-90 && A==0)t=J;
			mouse=1;
		}else mouse=0;
		if(t/15%2==0)j=1;
		else if(t/15%4==1)j=0;
		else j=2;
		if(t==J-90){
		strcpy_s(event_tolk[0][0], "");//訪問側
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//主側
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//場面表示
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//動かない人表示
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//歩いてくる人表示
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//歩いてた人停止
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//歩いてた人停止
	//台詞
	if(t==90){
		strcpy_s(event_tolk[0][0], "我が国は以前と比べかなりの");
		strcpy_s(event_tolk[0][1], "大国となりました");
		strcpy_s(event_tolk[0][2], "これも陛下の手腕あってこそ");
	}
	if(t==90+120){
		strcpy_s(event_tolk[1][0], "この調子で大陸統一を目指すぞ");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
int eve_24(){
	strcpy_s(event_tolk[0][0], "");//訪問側
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//主側
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*3;//時間
	A=0;//分岐判定用
	mouse=1;
	for(t=0;t<J-90;){//台詞を喋らせる
	//グラフィック等固定部分
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse==0)
			if(t>=90 && t<=J-90)t=(t-90)/120*120+210;
			else if(mouse==0 && t<90  && A==0)t=90;
			else if(mouse==0 && t>J-90 && A==0)t=J;
			mouse=1;
		}else mouse=0;
		if(t/15%2==0)j=1;
		else if(t/15%4==1)j=0;
		else j=2;
		if(t==J-90){
		strcpy_s(event_tolk[0][0], "");//訪問側
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//主側
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//場面表示
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//動かない人表示
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//歩いてくる人表示
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//歩いてた人停止
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//歩いてた人停止
	//台詞
	if(t==90){
		strcpy_s(event_tolk[0][0], "陛下の偉業は永遠に");
		strcpy_s(event_tolk[0][1], "語りつがれるでしょう");
		strcpy_s(event_tolk[0][2], "");
	}
	if(t==90+120){
		strcpy_s(event_tolk[0][0], "民衆が大広間で待っています");
		strcpy_s(event_tolk[0][1], "いきましょう");
		strcpy_s(event_tolk[0][2], "");
	}
	if(t==90+240){
		strcpy_s(event_tolk[1][0], "よし、いくか");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
int eve_25(){
	strcpy_s(event_tolk[0][0], "");//訪問側
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//主側
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*4;//時間
	A=0;//分岐判定用
	mouse=1;
	for(t=0;t<J-90;){//台詞を喋らせる
	//グラフィック等固定部分
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse==0)
			if(t>=90 && t<=J-90)t=(t-90)/120*120+210;
			else if(mouse==0 && t<90  && A==0)t=90;
			else if(mouse==0 && t>J-90 && A==0)t=J;
			mouse=1;
		}else mouse=0;
		if(t/15%2==0)j=1;
		else if(t/15%4==1)j=0;
		else j=2;
		if(t==J-90){
		strcpy_s(event_tolk[0][0], "");//訪問側
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//主側
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[3] , TRUE ) ;//場面表示
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[19][1][1] , TRUE ) ;//動かない人表示
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[24][0][j+3] , TRUE ) ;//歩いてくる人表示
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[24][0][j] , TRUE ) ;//歩いてた人停止
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[24][0][4] , TRUE ) ;//歩いてた人停止
	//台詞
	if(t==90){
		strcpy_s(event_tolk[0][0], "深淵の王よ");
		strcpy_s(event_tolk[0][1], "貴様の命運もこれまでだ");
		strcpy_s(event_tolk[0][2], "");
	}
	if(t==90+120){
		strcpy_s(event_tolk[1][0], "認めぬ、認めぬぞ");
		strcpy_s(event_tolk[1][1], "人間如きに私が負けるなど");
		strcpy_s(event_tolk[1][2], "");
	}
	if(t==90+240){
		strcpy_s(event_tolk[0][0], "喰らえ");
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
	}
	if(t==90+360){
		strcpy_s(event_tolk[1][0], "うおー");
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
int eve_26(){
	strcpy_s(event_tolk[0][0], "");//訪問側
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//主側
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120;//時間
	A=0;//分岐判定用
	mouse=1;
	for(t=0;t<J;){//台詞を喋らせる
	//グラフィック等固定部分
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC押下かエラーで終了
		DxLib_End() ;//DXライブラリの使用終了
		exit(1);//プログラムの終了
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//マウス左押下
			if(mouse==0)
			if(t>=90 && t<=J-90)t=(t-90)/120*120+210;
			else if(mouse==0 && t<90  && A==0)t=90;
			else if(mouse==0 && t>J-90 && A==0)t=J;
			mouse=1;
		}else mouse=0;
		if(t/15%2==0)j=1;
		else if(t/15%4==1)j=0;
		else j=2;
		if(t==J-90){
		strcpy_s(event_tolk[0][0], "");//訪問側
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//主側
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//背景表示
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//場面表示
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//動かない人表示
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//歩いてくる人表示
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//歩いてた人停止
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//歩いてた人停止
	//台詞
	if(t==90){
		strcpy_s(event_tolk[0][0], "小鬼の巣窟にゴブリンが");
		strcpy_s(event_tolk[0][1], "またあらわれました");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
int eve_bunki(){//イベント分岐

	A=1;
	B=0;
	SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
	DrawBox( 160 , 170 , 480 , 270 , ao , TRUE ) ;
	if(mou_x>160 && mou_x<480){
		if(mou_y>170 && mou_y<220)		{DrawBox( 170 , 175 , 470 , 215 ,ao , TRUE ) ;B=1;}
		else if(mou_y>=220 && mou_y<270){DrawBox( 170 , 225 , 470 , 265 ,ao , TRUE ) ;B=2;}
	}
	SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;
	DrawStringToHandle( 180+1 , 180+1 , setu_1 ,kuro , f_a ) ;
	DrawStringToHandle( 180   , 180   , setu_1 ,siro , f_a ) ;
	DrawStringToHandle( 180+1 , 230+1 , setu_2 ,kuro , f_a ) ;
	DrawStringToHandle( 180   , 230   , setu_2 ,siro , f_a ) ;
	if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0 ){//マウス左押下
		if(B!=0 && mouse==0){t+=120;A=0;mouse=1;return 0;}
		mouse=1;
	}else mouse=0;

	B=0;
	return 0;
}
//兵種による能力代入
int hei_dai(){
	hei_pow[A][i]=job_pow[c];//兵士の基本攻撃力
	hei_def[A][i]=job_def[c];//兵士の基本防御力
	hei_wei[A][i]=job_wei[c];//兵士の基本踏ん張り
	hei_spd[A][i]=job_spd[c];//兵士の基本機動力
	hei_sta[A][i]=job_sta[c];//兵士の基本スタミナ
	hei_type[A][i]=c;//兵士の兵種
	hei_kaz[A][i]=job_vit[c];//兵士の部隊数
	hei_sibou[A][i]=0;//兵士死亡フラグ
	hei_muk[A][i]=1-A;//兵士の向き
	hei_jyo[A][i]=0;//兵士の状態異常
	hei_moral[A][i]=10000;//兵士の士気
	hei_jump[A][i]=0;
	hei_syou[A][i]=-5;//兵士のモラル時間変化量
	hei_stop[A][i]=0;//兵士の一時停止時間
	hei_sen[A][i]=2;//兵士の戦闘状態
	hei_emo[A][i]=0;//噴出し表示フラグ用
	hei_esc[A][i]=0;//逃走数
	hei_ana[A][i]=0;
	hei_huki[A][i]=0;
	hei_totu[A][i]=0;
	hei_down[A][i]=0;
	hei_hirou[A][i]=0;
	hei_toppa[A][i]=0;
	hei_dame[A][i]=0;
	hei_atari[A][i]=15000;
	hei_bom[A][i]=0;
	if(hei_type[A][i]==4)hei_atari[A][i]=30000;
	return 0;
}
int hei_sort(){

	for(i=0;i<gun_kazu[A];i++){
		for(j=0;j<gun_kazu[A]-i-1;j++){
			if(hei_y[A][j]>hei_y[A][j+1]){//後にくる方が小さいなら交換
			xa=hei_x[A][j];
			hei_x[A][j]=hei_x[A][j+1];
			hei_x[A][j+1]=xa;

			xa=hei_y[A][j];
			hei_y[A][j]=hei_y[A][j+1];
			hei_y[A][j+1]=xa;

			xa=hei_retu[A][j];
			hei_retu[A][j]=hei_retu[A][j+1];
			hei_retu[A][j+1]=xa;
			
			xa=hei_mov[A][j];
			hei_mov[A][j]=hei_mov[A][j+1];
			hei_mov[A][j+1]=xa;
			
			xa=hei_jin[A][j];
			hei_jin[A][j]=hei_jin[A][j+1];
			hei_jin[A][j+1]=xa;

			xa=hei_retu_syoki[A][j];
			hei_retu_syoki[A][j]=hei_retu_syoki[A][j+1];
			hei_retu_syoki[A][j+1]=xa;

			xa=hei_pow[A][j];
			hei_pow[A][j]=hei_pow[A][j+1];
			hei_pow[A][j+1]=xa;

			xa=hei_def[A][j];
			hei_def[A][j]=hei_def[A][j+1];
			hei_def[A][j+1]=xa;

			xa=hei_wei[A][j];
			hei_wei[A][j]=hei_wei[A][j+1];
			hei_wei[A][j+1]=xa;

			xa=hei_spd[A][j];
			hei_spd[A][j]=hei_spd[A][j+1];
			hei_spd[A][j+1]=xa;

			xa=hei_sta[A][j];
			hei_sta[A][j]=hei_sta[A][j+1];
			hei_sta[A][j+1]=xa;

			xa=hei_type[A][j];
			hei_type[A][j]=hei_type[A][j+1];
			hei_type[A][j+1]=xa;

			xa=hei_kaz[A][j];
			hei_kaz[A][j]=hei_kaz[A][j+1];
			hei_kaz[A][j+1]=xa;

			xa=hei_atari[A][j];
			hei_atari[A][j]=hei_atari[A][j+1];
			hei_atari[A][j+1]=xa;
			}
		}
	}

	return 0;
}
int hikari(){

	for(i=0;i<100;i++){
	hei_emo[(A+1)%2][i]=0;
	hei_emo[A][i]=0;
	}

	for(t=0;t<50;t++){
		for(i=0;i<100;i++){
		if(t<25)hei_hura[A][i]+=10;
		else	hei_hura[A][i]-=10;
				hei_jump[A][i]=0;
		}
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
	}
	return 0;
}
int hukidasi(){

	if(hei_sibou[A][gun_kazu[A]]>100 || hei_toppa[A][gun_kazu[A]]!=0) return 0;
	serihu_long2 = int(strlen( serihu )) ;
	serihu_long = GetDrawStringWidth( serihu , serihu_long2 ) ;

	for(t=0;t<50;t++){
		sentou_byouga();//戦闘中の描画処理
		xa=hei_x[A][gun_kazu[A]]/1000-8-A*16;
		ya=hei_y[A][gun_kazu[A]]/1000+70;
		if(xa<600-serihu_long){
		waku(xa,ya-10,xa+serihu_long+10,ya+19);
		DrawGraph( hei_x[A][gun_kazu[A]]/1000-8-A*16, hei_y[A][gun_kazu[A]]/1000+70, huki, TRUE ) ;//長さ308
		DrawString( xa+4 , ya-6 , serihu , GetColor(0,0,0) );
		}else{
		waku(xa-serihu_long+18,ya-10,xa+30,ya+19);
		DrawGraph( hei_x[A][gun_kazu[A]]/1000-8-A*16, hei_y[A][gun_kazu[A]]/1000+70, huki, TRUE ) ;//長さ308
		DrawString( xa-serihu_long+22 , ya-6 , serihu , GetColor(0,0,0) );
		}
		ScreenFlip();
	}

	return 0;
}
int syaberi(){

	if(event_tolk[0][0][0]!=NULL){
	waku(150,280,490,360);
	DrawRotaGraph( 300 , 280 , 1 , PI , huki , TRUE ) ;
	DrawString( 160 , 285 , event_tolk[0][0] ,kuro ) ;
	DrawString( 160 , 310 , event_tolk[0][1] ,kuro ) ;
	DrawString( 160 , 335 , event_tolk[0][2] ,kuro ) ;
	}
	if(event_tolk[1][0][0]!=NULL){
	waku(150,40,490,120);
	DrawRotaGraph( 300 , 116 , 1 , 0 , huki , TRUE ) ;
	DrawString( 160 , 45 , event_tolk[1][0] ,kuro ) ;
	DrawString( 160 , 70 , event_tolk[1][1] ,kuro ) ;
	DrawString( 160 , 95 , event_tolk[1][2] ,kuro ) ;
	}
	return 0;
}
int command_mes(){
		hatudou_kanou[A][i]=0;
		switch (gun_senjyutu[A][i]){
		case 0:strcpy_s(serihu, "――――――");hatudou_kanou[A][i]=1;break;
		case 1:strcpy_s(serihu, "全軍前進");break;
		case 2:strcpy_s(serihu, "全軍後退");break;
		case 3:strcpy_s(serihu, "全軍防御");break;
		case 4:strcpy_s(serihu, "全軍突撃");break;
		case 5:strcpy_s(serihu, "全軍退却");break;
		case 6:strcpy_s(serihu, "前列前進");if(gun_retu[A]==1)hatudou_kanou[A][i]=1;break;
		case 7:strcpy_s(serihu, "後列前進");if(gun_retu[A]==1)hatudou_kanou[A][i]=1;break;
		case 8:strcpy_s(serihu, "速攻前進");break;
		case 9:strcpy_s(serihu, "強撃前進");break;
		case 10:strcpy_s(serihu, "後退攻撃");break;
		case 11:strcpy_s(serihu, "上翼攻撃");break;
		case 12:strcpy_s(serihu, "下翼攻撃");break;
		case 13:strcpy_s(serihu, "前列突撃");if(gun_retu[A]==1)hatudou_kanou[A][i]=1;break;
		case 14:strcpy_s(serihu, "後列突撃");if(gun_retu[A]==1)hatudou_kanou[A][i]=1;break;
		case 15:strcpy_s(serihu, "上翼突撃");break;
		case 16:strcpy_s(serihu, "下翼突撃");break;
		case 17:strcpy_s(serihu, "前列防御");if(gun_retu[A]==1)hatudou_kanou[A][i]=1;break;
		case 18:strcpy_s(serihu, "全軍防御・強");break;
		case 19:strcpy_s(serihu, "後退防御");break;
		case 20:strcpy_s(serihu, "速攻後退");break;
		case 21:strcpy_s(serihu, "前列交代");if(gun_retu[A]==1)hatudou_kanou[A][i]=1;break;
		case 22:strcpy_s(serihu, "※交代用１");break;
		case 23:strcpy_s(serihu, "※交代用２");break;
		case 24:strcpy_s(serihu, "速攻交代");if(gun_retu[A]==1)hatudou_kanou[A][i]=1;break;
		case 25:strcpy_s(serihu, "統率回復・弱");break;



		case 26:strcpy_s(serihu, "※統率用");break;
		case 27:strcpy_s(serihu, "陣形回復");break;
		case 28:strcpy_s(serihu, "※陣形回復用");break;
		case 29:strcpy_s(serihu, "前列死守");if(gun_retu[A]==1)hatudou_kanou[A][i]=1;break;
		case 30:strcpy_s(serihu, "統率回復・強");break;
		case 31:strcpy_s(serihu, "陣形回復・速");break;
		case 32:strcpy_s(serihu, "死んだフリ");if(gun_retu[A]==1)hatudou_kanou[A][i]=1;break;
		case 33:strcpy_s(serihu, "※死にフリ用");break;
		case 34:strcpy_s(serihu, "雨ごい");break;
		case 35:strcpy_s(serihu, "冬将軍");break;
		case 36:strcpy_s(serihu, "分断作戦");if(gun_retu[A]==1)hatudou_kanou[A][i]=1;break;
		case 37:strcpy_s(serihu, "投石部隊");break;
		case 38:strcpy_s(serihu, "※投石用");break;
		case 39:strcpy_s(serihu, "指揮官突撃");break;
		case 40:strcpy_s(serihu, "爆裂部隊");break;
		case 41:strcpy_s(serihu, "火攻め");break;
		case 42:strcpy_s(serihu, "おとり作戦");break;
		case 43:strcpy_s(serihu, "偽りの退却");break;
		case 44:strcpy_s(serihu, "情報操作Ｌ１");break;
		case 45:strcpy_s(serihu, "情報操作Ｌ２");break;
		case 46:strcpy_s(serihu, "情報操作Ｌ３");break;
		case 47:strcpy_s(serihu, "情報操作Ｌ４");break;
		case 48:strcpy_s(serihu, "情報操作Ｌ５");break;
		case 49:strcpy_s(serihu, "穴掘り作戦");if(gun_retu[A]==1)hatudou_kanou[A][i]=1;break;
		case 50:strcpy_s(serihu, "防柵作戦");break;
		case 51:strcpy_s(serihu, "水際作戦");break;
		case 52:strcpy_s(serihu, "背火の計");break;
		case 53:strcpy_s(serihu, "投石攻撃・西");break;
		case 54:strcpy_s(serihu, "投石攻撃・東");break;
		case 55:strcpy_s(serihu, "速攻退却");break;
		case 56:strcpy_s(serihu, "全軍前進・強");break;
		case 57:strcpy_s(serihu, "全軍休息");break;
		case 58:strcpy_s(serihu, "戦場の風");break;
		case 59:strcpy_s(serihu, "地割れ作戦");break;
		case 60:strcpy_s(serihu, "ｽﾗｲﾑﾌｨｰﾊﾞｰ");break;
		case 61:strcpy_s(serihu, "信じる者達");break;
		case 62:strcpy_s(serihu, "生命回復");break;
		case 63:strcpy_s(serihu, "ナラクの風");break;
		case 64:strcpy_s(serihu, "大熱波");break;
		case 65:strcpy_s(serihu, "大あまごい");break;
		case 66:strcpy_s(serihu, "超高速デルタ");break;
		case 67:strcpy_s(serihu, "大地震");break;
		}
		if(hei_kaz[A][gun_kazu[A]]<=0 && gun_senjyutu[A][i]>5) hatudou_kanou[A][i]=1;
		if(gun_senrest[A][i]==0 || meireihuka[A]>0) hatudou_kanou[A][i]=1;

		DrawStringToHandle( 181 , 21+i*44 , serihu ,kuro , f_a ) ;
		if(gun_senrest[A][i]<10)DrawFormatStringToHandle( 431 , 21+i*44 , kuro , f_a , "%d" , gun_senrest[A][i] ) ;
		if(hatudou_kanou[A][i]==0){
			DrawStringToHandle( 180 , 20+i*44 , serihu ,siro , f_a ) ;
			if(gun_senrest[A][i]<10)DrawFormatStringToHandle( 430 , 20+i*44 , siro , f_a , "%d" , gun_senrest[A][i] ) ;
		}else{
			DrawStringToHandle( 180 , 20+i*44 , serihu ,hai , f_a ) ;
			if(gun_senrest[A][i]<10)DrawFormatStringToHandle( 430 , 20+i*44 , hai , f_a , "%d" , gun_senrest[A][i] ) ;
		}

	return 0;
	}
int jinkei_mes(){
		switch (set_jinkei[i]){
		case 0:strcpy_s(serihu, "――――――");break;
		case 1:strcpy_s(serihu, "縦列陣形");break;
		case 2:strcpy_s(serihu, "防壁の波陣");break;
		case 3:strcpy_s(serihu, "攻撃の波陣");break;
		case 4:strcpy_s(serihu, "上翼突破の陣");break;
		case 5:strcpy_s(serihu, "下翼突破の陣");break;
		case 6:strcpy_s(serihu, "中央突破の陣");break;
		case 7:strcpy_s(serihu, "三波状陣");break;
		case 8:strcpy_s(serihu, "疾風陣");break;
		case 9:strcpy_s(serihu, "背水の陣");break;
		case 10:strcpy_s(serihu, "強撃陣");break;
		case 11:strcpy_s(serihu, "波状盾の陣");break;
		case 12:strcpy_s(serihu, "虎穴陣");break;
		case 13:strcpy_s(serihu, "阿修羅道");break;
		case 14:strcpy_s(serihu, "十字陣");break;
		case 15:strcpy_s(serihu, "方陣");break;
		case 16:strcpy_s(serihu, "三点突破の陣");break;
		case 17:strcpy_s(serihu, "横列陣形");break;
		case 18:strcpy_s(serihu, "魚鱗の陣");break;
		case 19:strcpy_s(serihu, "竜渦の陣");break;
		case 20:strcpy_s(serihu, "天の翼");break;
		case 21:strcpy_s(serihu, "冥の翼");break;
		}

		DrawStringToHandle( 181 , 109+i*44 , serihu ,kuro , f_a ) ;
		DrawStringToHandle( 180 , 108+i*44 , serihu ,siro , f_a ) ;

	return 0;
	}
int jin_dai(){
		switch (gun_jinkei[A]){
		case 1:jin_01();strcpy_s(serihu, "縦列陣形");break;
		case 2:jin_02();strcpy_s(serihu, "防壁の波陣");break;
		case 3:jin_03();strcpy_s(serihu, "攻撃の波陣");break;
		case 4:jin_04();strcpy_s(serihu, "上翼突破の陣");break;
		case 5:jin_05();strcpy_s(serihu, "下翼突破の陣");break;
		case 6:jin_06();strcpy_s(serihu, "中央突破の陣");break;
		case 7:jin_07();strcpy_s(serihu, "三波状陣");break;
		case 8:jin_08();strcpy_s(serihu, "疾風陣");break;
		case 9:jin_09();strcpy_s(serihu, "背水の陣");break;
		case 10:jin_10();strcpy_s(serihu, "強撃陣");break;
		case 11:jin_11();strcpy_s(serihu, "波状盾の陣");break;
		case 12:jin_12();strcpy_s(serihu, "虎穴陣");break;
		case 13:jin_13();strcpy_s(serihu, "阿修羅道");break;
		case 14:jin_14();strcpy_s(serihu, "十字陣");break;
		case 15:jin_15();strcpy_s(serihu, "方陣");break;
		case 16:jin_16();strcpy_s(serihu, "三点突破の陣");break;
		case 17:jin_17();strcpy_s(serihu, "横列陣形");break;
		case 18:jin_18();strcpy_s(serihu, "魚鱗の陣");break;
		case 19:
			jin_19();
			if(A==0)strcpy_s(serihu, "竜渦の陣");
			else strcpy_s(serihu, "ぐるぐる陣");
			break;
		case 20:jin_20();strcpy_s(serihu, "天の翼");break;
		case 21:jin_21();strcpy_s(serihu, "冥の翼");break;
		}
		strcpy_s(jin_name[A], serihu);
		if(youhei_lv[A]>gun_kazu[A]/4)youhei_lv[A]=gun_kazu[A]/4;
		if(sinobi_lv[A]>gun_kazu[A]/4)sinobi_lv[A]=gun_kazu[A]/4;
		//エルフ増援用
		if(moritami==1 && A==0)for(i=0;i<100;i++){
		if(i==gun_kazu[A]/2-5){c=25;hei_dai();}
		else if(i>gun_kazu[A]/2-11 && i<gun_kazu[A]/2){c=13;hei_dai();}
		else if(i>gun_kazu[A]-11 && i<gun_kazu[A]){c=12;hei_dai();}
		}
		//傭兵増援用
		if(youhei_lv[A]>0)for(i=0;i<100;i++){
		if(i>=0 && i<youhei_lv[A]){c=16;hei_dai();}
		else if(i>=gun_kazu[A]/2 && i<gun_kazu[A]/2+youhei_lv[A]){c=16;hei_dai();}
		}
		//忍者増援用
		if(sinobi_lv[A]>0) if(moritami==0){
			for(i=0;i<100;i++){
			if(i>gun_kazu[A]/2-1-sinobi_lv[A] && i<gun_kazu[A]/2){c=11;hei_dai();}
			else if(i>gun_kazu[A]-1-sinobi_lv[A] && i<gun_kazu[A]){c=11;hei_dai();}
			}
		}else{
			for(i=0;i<100;i++){
			if(i>gun_kazu[A]/2-11-sinobi_lv[A] && i<gun_kazu[A]/2-10){c=11;hei_dai();}
			else if(i>gun_kazu[A]-11-sinobi_lv[A] && i<gun_kazu[A]-10){c=11;hei_dai();}
			}
		}
		//ドルーラー用
		if((VS_no==33 && eve_flag[3]==1 && A==0)||(hei_type[A][gun_kazu[A]]==4)){
		hei_type[A][gun_kazu[A]]=4;
		hei_pow[A][gun_kazu[A]]=17-5-A*5+5;
		hei_def[A][gun_kazu[A]]=10-5;
		hei_wei[A][gun_kazu[A]]=100+A*300;//兵士の基本踏ん張り
		hei_spd[A][gun_kazu[A]]=20;//兵士の基本機動力
		hei_sta[A][gun_kazu[A]]=99;//兵士の基本スタミナ
		hei_kaz[A][gun_kazu[A]]=2000;//兵士の部隊数
		}
		//陣形修正用
		if(gun_jinkei[A]==1)for(i=0;i<100;i++){//縦列陣形
		hei_wei[A][i]++;
		}
		if(gun_jinkei[A]==2)for(i=0;i<100;i++){//防壁の波陣
		if(hei_retu[A][i]==0)hei_def[A][i]++;
		}
		if(gun_jinkei[A]==3)for(i=0;i<100;i++){//攻撃の波陣
		if(hei_retu[A][i]==0)hei_pow[A][i]++;
		}
		if(gun_jinkei[A]==4)for(i=0;i<100;i++){//陣
		if(i>gun_kazu[A]*2/3)hei_wei[A][i]+=2;
		}
		if(gun_jinkei[A]==5)for(i=0;i<100;i++){//陣
		if(i>gun_kazu[A]*2/3)hei_wei[A][i]+=2;
		}
		if(gun_jinkei[A]==6)for(i=0;i<100;i++){//陣
		if(i>gun_kazu[A]/2 && i<gun_kazu[A]*5/6)hei_wei[A][i]+=2;
		}
		if(gun_jinkei[A]==7)for(i=0;i<100;i++){//陣
		if(i<gun_kazu[A]/3)hei_def[A][i]++;//兵士の基本攻撃力
		else if(i<gun_kazu[A]/3*2)hei_pow[A][i]++;//兵士の基本防御力
		else hei_spd[A][i]++;//兵士の基本機動力
		}
		if(gun_jinkei[A]==8)for(i=0;i<100;i++){//疾風陣
		hei_spd[A][i]+=2;//兵士の基本機動力
		}
		if(gun_jinkei[A]==9)for(i=0;i<100;i++){//背水の陣
		hei_pow[A][i]+=2;//兵士の基本攻撃力
		hei_spd[A][i]=5;//兵士の基本機動力
		}
		if(gun_jinkei[A]==10)for(i=0;i<100;i++){//強撃陣
		hei_pow[A][i]++;//兵士の基本攻撃力
		hei_spd[A][i]-=3;//兵士の基本機動力
		}
		if(gun_jinkei[A]==11)for(i=0;i<100;i++){//波状盾の陣
		if(hei_retu[A][i]==0)hei_def[A][i]++;
		if(i==gun_kazu[A])hei_def[A][i]+=2;
		}
		if(gun_jinkei[A]==12)for(i=0;i<100;i++){//虎穴陣
		hei_def[A][i]++;//兵士の基本防御力
		hei_spd[A][i]-=3;//兵士の基本機動力
		}
		if(gun_jinkei[A]==14)for(i=0;i<100;i++){//陣
		if(hei_kaz[A][i]>0)hei_kaz[A][i]+=10;//兵士の部隊数
		}
		if(gun_jinkei[A]==15)for(i=0;i<100;i++){//陣
		hei_sta[A][i]+=2;//兵士の基本スタミナ
		}
		if(gun_jinkei[A]==16)for(i=0;i<100;i++){//陣
		if(hei_retu[A][i]==1)hei_wei[A][i]+=2;//兵士の基本踏ん張り
		}
		if(gun_jinkei[A]==17)for(i=0;i<100;i++){//陣
		hei_wei[A][i]++;//兵士の基本踏ん張り
		}
		if(gun_jinkei[A]==19)for(i=0;i<100;i++){//陣
		hei_def[A][i]+=1;//兵士の基本防御力
		hei_wei[A][i]+=2;//兵士の基本踏ん張り
		hei_spd[A][i]+=2;//兵士の基本機動力
		}
		if(gun_jinkei[A]==20)for(i=0;i<100;i++){//陣
		hei_def[A][i]+=2;//兵士の基本防御力
		hei_spd[A][i]+=2;//兵士の基本機動力
		}
		if(gun_jinkei[A]==21)for(i=0;i<100;i++){//陣
		hei_pow[A][i]++;//兵士の基本攻撃力
		hei_wei[A][i]+=2;//兵士の基本踏ん張り
		}

		for(i=0;i<100;i++)hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//速度代入

		return 0;
}
int jin_select(){

	while(1){

	GetMousePoint( &mou_x, &mou_y );

	if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//マウス左押下
	if(mouse==0) break;
	}else mouse=0;

	sentou_byouga();//戦闘中の描画処理
	SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
	DrawBox( 160 , 98 , 480 , 190 , ao , TRUE ) ;
	if(mou_x>160 && mou_x<480 && mou_y>102 && mou_y <190) DrawBox( 170 , 19+(mou_y-14)/44*44 , 470 , 53+(mou_y-14)/44*44 ,ao , TRUE ) ;
	SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;

	for(i=0;i<2;i++)jinkei_mes();

		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0 && mou_x>160 && mou_x<480 && mou_y>102 && mou_y <190){//マウス左押下
			gun_jinkei[A]=set_jinkei[(mou_y-14-88)/44];
			hensei_no=(mou_y-14-88)/44;
			for(i=0;i<100;i++){
			hei_xnara2[i]=hei_x[A][i];
			hei_ynara2[i]=hei_y[A][i];
			}
			jin_dai();
			for(i=0;i<100;i++){
			hei_xnara[i]=hei_x[A][i];
			hei_ynara[i]=hei_y[A][i];
			}
			hyouji=1;
			narabi();
			jin_dai();
			hyouji=0;
		}
	ScreenFlip();
	}
	mouse=1;


	return 0;
}
int narabi(){
	for(t=0;t<ANIME+1;t++){
		for(i=0;i<100;i++){
		hei_x[A][i]=(hei_xnara[i]*t+hei_xnara2[i]*(ANIME-t))/ANIME;
		hei_y[A][i]=(hei_ynara[i]*t+hei_ynara2[i]*(ANIME-t))/ANIME;
		}
	sentou_byouga();//戦闘中の描画処理
	if(hyouji==1){
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		DrawBox( 160 , 98 , 480 , 190 ,ao , TRUE ) ;
		if(mou_x>160 && mou_x<480 && mou_y>98 && mou_y <278) DrawBox( 170 , 19+(mou_y-14)/44*44 , 470 , 53+(mou_y-14)/44*44 ,ao , TRUE ) ;
		SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;
		for(i=0;i<2;i++)jinkei_mes();
	}
	ScreenFlip();
	}
	return 0;
}
int kettyaku(){
		StopMusic();
		//生き残り数チェック
		gun_nokori[0]=0;xa=0;//生き残り数-退却数
		gun_nokori[1]=0;ya=0;//生き残り数-退却数
		xb=0;yb=0;//c=-1全滅 c=0 退却　c>0 生存
		//生き残り対決or○○全滅or○○退却
		for(i=0;i<gun_kazu[0]+1;i++){
		if(hei_kaz[0][i]>0 || hei_toppa[0][i]>0)gun_nokori[0]++;
		if(hei_esc[0][i]!=0)xa++;
		}
		for(i=0;i<gun_kazu[1]+1;i++){
		if(hei_kaz[1][i]>0  || hei_toppa[1][i]>0)gun_nokori[1]++;
		if(hei_esc[1][i]!=0)ya++;
		}
		if(gun_nokori[0]==0 && xa==0)xb=-1;//自軍全滅
		else if(gun_nokori[0]==0 && xa>0)xb=0;//自軍退却
		else xb=gun_nokori[0];//生き残り対決

		if(gun_nokori[1]==0 && ya==0)yb=-1;//敵軍全滅
		else if(gun_nokori[1]==0 && ya>0)yb=0;//敵軍退却
		else yb=gun_nokori[1];//生き残り対決

	for(j=0;j<2;j++)for(i=0;i<100;i++){
		hei_emo[j][i]=0;
		hei_ana[j][i]=0;
		fire_time[i]=0;
		saku_tai[i]=0;
		}
		tenki=0;
		for(t=0;t<120;t++){
		for(j=0;j<2;j++)for(i=0;i<100;i++)if(hei_kaz[j][i]>0) hei_x[j][i]+=(j*2-1)*6000;
		sentou_byouga();//戦闘中の描画処理
		ScreenFlip();
		}

		hei_x[0][gun_kazu[0]]=660000;
		hei_y[0][gun_kazu[0]]=150000;
		hei_kaz[0][gun_kazu[0]]=100;
		hei_toppa[0][gun_kazu[0]]=0;
		hei_sibou[0][gun_kazu[0]]=0;
		hei_muk[0][gun_kazu[0]]=1;
		hei_x[1][gun_kazu[1]]=-20000;
		hei_y[1][gun_kazu[1]]=150000;
		hei_kaz[1][gun_kazu[1]]=100;
		hei_toppa[1][gun_kazu[1]]=0;
		hei_sibou[1][gun_kazu[1]]=0;
		hei_muk[1][gun_kazu[1]]=0;

		for(t=0;t<60;t++){
		hei_x[0][gun_kazu[0]]-=4000;
		hei_x[1][gun_kazu[1]]+=4000;
		sentou_byouga();//戦闘中の描画処理
		c=9+hei_time[0][gun_kazu[0]]/10%3-1*3;
		DrawRotaGraph( hei_x[0][gun_kazu[0]]/1000+32 , hei_y[0][gun_kazu[0]]/1000+105-12 , 2 , 0 , unit_g[butai_one[0]][0][c] , TRUE ) ;
		DrawRotaGraph( hei_x[0][gun_kazu[0]]/1000+32 , hei_y[0][gun_kazu[0]]/1000+105+12 , 2 , 0 , unit_g[butai_two[0]][0][c] , TRUE ) ;
		c=9+hei_time[1][gun_kazu[1]]/10%3;
		DrawRotaGraph( hei_x[1][gun_kazu[1]]/1000-32 , hei_y[1][gun_kazu[1]]/1000+105-12 , 2 , 0 , unit_g[butai_one[1]][1][c] , TRUE ) ;
		DrawRotaGraph( hei_x[1][gun_kazu[1]]/1000-32 , hei_y[1][gun_kazu[1]]/1000+105+12 , 2 , 0 , unit_g[butai_two[1]][1][c] , TRUE ) ;
		ScreenFlip();
		}

		VS_result=1;
		if(xb==-1 && yb==-1)	{strcpy_s(serihu, "両軍全滅");strcpy_s(syouri, "引き分け‥");VS_result=7;}
		else if(xb==-1)			{strcpy_s(serihu, "自軍全滅");strcpy_s(syouri, "敗北‥");VS_result=4;}
		else if(yb==-1)			{strcpy_s(serihu, "敵軍全滅");strcpy_s(syouri, "勝利!!");VS_result=1;}
		else if(xb==0 && yb==0)	{strcpy_s(serihu, "両軍退却");strcpy_s(syouri, "引き分け‥");VS_result=7;}
		else if(xb==0)			{strcpy_s(serihu, "自軍退却");strcpy_s(syouri, "敗北‥");VS_result=5;}
		else if(yb==0)			{strcpy_s(serihu, "敵軍退却");strcpy_s(syouri, "勝利!!");VS_result=2;}
		else {
		strcpy_s(serihu, "生き残り対決");
		if(xb==yb){strcpy_s(syouri, "引き分け‥");VS_result=7;}
		else if(xb>yb){strcpy_s(syouri, "勝利!!");VS_result=3;}
		else{strcpy_s(syouri, "敗北‥");VS_result=6;}
		}

		mouse=1;
		for(t=0;t<360;t++){
		sentou_byouga();//戦闘中の描画処理
		c=9+hei_time[0][gun_kazu[0]]/10%3-1*3;
		DrawRotaGraph( hei_x[0][gun_kazu[0]]/1000+32 , hei_y[0][gun_kazu[0]]/1000+105-12 , 2 , 0 , unit_g[butai_one[0]][0][c] , TRUE ) ;
		DrawRotaGraph( hei_x[0][gun_kazu[0]]/1000+32 , hei_y[0][gun_kazu[0]]/1000+105+12 , 2 , 0 , unit_g[butai_two[0]][0][c] , TRUE ) ;
		c=9+hei_time[1][gun_kazu[1]]/10%3;
		DrawRotaGraph( hei_x[1][gun_kazu[1]]/1000-32 , hei_y[1][gun_kazu[1]]/1000+105-12 , 2 , 0 , unit_g[butai_one[1]][1][c] , TRUE ) ;
		DrawRotaGraph( hei_x[1][gun_kazu[1]]/1000-32 , hei_y[1][gun_kazu[1]]/1000+105+12 , 2 , 0 , unit_g[butai_two[1]][1][c] , TRUE ) ;
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		DrawBox( 80 , 98 , 560 , 190 ,GetColor(0,0,255) , TRUE ) ;
		SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;
		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0 ){
			if(mouse==0){
			t=t/120*120+120;
			mouse=1;
			}
		}else{
		mouse=0;
		}
		if(t>=240 && (gun_nokori[0]<=0 || gun_nokori[1]<=0))break;
		if(t<120){
		serihu_long2 = int(strlen( serihu )) ;
		serihu_long = GetDrawStringWidth( serihu , serihu_long2 ) ;
		}else{
		serihu_long2 = int(strlen( syouri )) ;
		serihu_long = GetDrawStringWidth( syouri , serihu_long2 ) ;
		}
		for(i=0;i<2;i++){

		if(t==240 && VS_result==3)PlaySoundMem( bgm[0] , DX_PLAYTYPE_BACK ) ;
		if(t==240 && VS_result==6)PlaySoundMem( bgm[1] , DX_PLAYTYPE_BACK ) ;
		if(t==120 && (VS_result==1 || VS_result==2))PlaySoundMem( bgm[0] , DX_PLAYTYPE_BACK ) ;
		if(t==120 && (VS_result==4 || VS_result==5))PlaySoundMem( bgm[1] , DX_PLAYTYPE_BACK ) ;


		if(i==0)siro=GetColor(0,0,0);
		else siro=GetColor(255,255,255);
			if(t<120)DrawStringToHandle( 320-i-serihu_long*2/3 , 132-i , serihu ,siro , f_a ) ;//結果表示１
			else if(gun_nokori[0]>0 && gun_nokori[1]>0){
				if(t<240){
					DrawStringToHandle( 122-i , 110-i , sikikan_name[0] ,siro , f_a ) ;//生き残り表示
					DrawStringToHandle( 122-i , 154-i , sikikan_name[1] ,siro , f_a ) ;//生き残り表示
					DrawFormatStringToHandle( 422-i , 110-i , siro , f_a , "%d人" , gun_nokori[0]*100 ) ;
					DrawFormatStringToHandle( 422-i , 154-i , siro , f_a , "%d人" , gun_nokori[1]*100 ) ;
				}else{
				DrawStringToHandle( 320-i-serihu_long*2/3 , 132-i , syouri ,siro , f_a ) ;//結果表示２
				}
			}else DrawStringToHandle( 320-i-serihu_long*2/3 , 132-i , syouri ,siro , f_a ) ;//結果表示２
		}
			ScreenFlip();
		}
		//戦闘経験
		vs_count++;
		if(VS_result==5)esc_count++;//退却数
		if(VS_result<4){
		win_count++;//勝利回数
		perfe_count+=gun_nokori[0]*100/(gun_kazu[0]+1);
		anihi_count+=((gun_kazu[1]+1+ya)-gun_nokori[1])*100/(gun_kazu[1]+1);
		}else if(VS_result<7)lost_count++;//敗北数
		//vs_count++;
		//win_count++;//勝利回数
		//lost_count++;//敗北数
		//esc_count++;//退却数
		//perfe_count;//生存率合計
		//anihi_count;//撃破率合計
		int p=0;
		if(eve_flag[99]==1)p=100;

		//退却戦術取得
		if(esc_count>0 && get_hyouhou[37]==0 && p==0){
			strcpy_s(syouri, "防御の兵法");strcpy_s(serihu, "速攻退却を会得した");get_hyouhou[37]=1;
			t=0;hirameki();p=1;
		}
		if(esc_count>2 && get_hyouhou[39]==0  && p==0){
			strcpy_s(syouri, "奇策の兵法");strcpy_s(serihu, "偽りの撤退を会得した");get_hyouhou[39]=1;
			t=0;hirameki();p=1;
		}
		//軍神戦術
		if(VS_no==24 && VS_result<4  && p!=100){
		strcpy_s(syouri, "軍神の兵法");get_hyouhou[44]=1;
		strcpy_s(serihu, "地割れ作戦を会得した");t=0;hirameki();
		}
		if(VS_no==25 && VS_result<4  && p!=100){
		strcpy_s(syouri, "軍神の兵法");get_hyouhou[18]=1;
		strcpy_s(serihu, "背火の計を会得した");t=0;hirameki();
		}
		if(VS_no==32 && VS_result<4  && p!=100){
		strcpy_s(syouri, "軍神の兵法");get_hyouhou[41]=1;
		strcpy_s(serihu, "雨ごいを会得した");t=0;hirameki();
		}
		if(VS_no==33 && VS_result<4  && p!=100){
		strcpy_s(syouri, "軍神の兵法");get_hyouhou[8]=1;
		strcpy_s(serihu, "戦場の風を会得した");t=0;hirameki();
		}
		//anihi_count;//撃破率合計
		if(anihi_count>=200 && get_hyouhou[16]==0 && p==0){
			strcpy_s(syouri, "猛将の兵法");get_hyouhou[16]=1;
			strcpy_s(serihu, "爆裂部隊を会得した");
			t=0;hirameki();p=1;
		}
		if(anihi_count>=400 && get_hyouhou[38]==0 && p==0){
			strcpy_s(syouri, "奇策の兵法");get_hyouhou[38]=1;
			strcpy_s(serihu, "おとり作戦を会得した");
			t=0;hirameki();p=1;
		}
		if(anihi_count>=600 && get_hyouhou[40]==0 && p==0){
			strcpy_s(syouri, "奇策の兵法");get_hyouhou[40]=1;
			strcpy_s(serihu, "死んだふりを会得した");
			t=0;hirameki();p=1;
		}
		if(anihi_count>=800 && get_hyouhou[15]==0 && p==0){
			strcpy_s(syouri, "猛将の兵法");get_hyouhou[15]=1;
			strcpy_s(serihu, "分断作戦を会得した");
			t=0;hirameki();p=1;
		}
		if(anihi_count>=1000 && get_hyouhou[14]==0 && p==0){
			strcpy_s(syouri, "猛将の兵法");get_hyouhou[14]=1;
			strcpy_s(serihu, "指揮官突撃を会得した");
			t=0;hirameki();p=1;
		}
		if(anihi_count>=1200 && get_hyouhou[17]==0 && p==0){
			strcpy_s(syouri, "猛将の兵法");get_hyouhou[17]=1;
			strcpy_s(serihu, "火攻めを会得した");
			t=0;hirameki();p=1;
		}
		//perfe_count;//生存率合計
		if(perfe_count>=100 && get_hyouhou[29]==0 && p==0){
			strcpy_s(syouri, "鉄壁の兵法");get_hyouhou[29]=1;
			strcpy_s(serihu, "速攻交代を会得した");
			t=0;hirameki();p=1;
		}
		if(perfe_count>=300 && get_hyouhou[31]==0 && p==0){
			strcpy_s(syouri, "鉄壁の兵法");get_hyouhou[31]=1;
			strcpy_s(serihu, "統率回復・強を会得した");
			t=0;hirameki();p=1;
		}
		if(perfe_count>=500 && get_hyouhou[34]==0 && p==0){
			strcpy_s(syouri, "鉄壁の兵法");get_hyouhou[34]=1;
			strcpy_s(serihu, "防柵作戦を会得した");
			t=0;hirameki();p=1;
		}
		if(perfe_count>=700 && get_hyouhou[21]==0 && p==0){
			strcpy_s(syouri, "鉄壁の兵法");get_hyouhou[21]=1;
			strcpy_s(serihu, "前列死守を会得した");
			t=0;hirameki();p=1;
		}
		if(perfe_count>=900 && get_hyouhou[33]==0 && p==0){
			strcpy_s(syouri, "鉄壁の兵法");get_hyouhou[33]=1;
			strcpy_s(serihu, "陣形回復・速を会得した");
			t=0;hirameki();p=1;
		}
		if(perfe_count>=1100 && get_hyouhou[43]==0 && p==0){
			strcpy_s(syouri, "奇策の兵法");get_hyouhou[43]=1;
			strcpy_s(serihu, "穴掘り作戦を会得した");
			t=0;hirameki();p=1;
		}
		//ランダム取得
		if(p==0){//
			t=120;
			if(6-get_hyouhou[1]-get_hyouhou[2]-get_hyouhou[5]-get_hyouhou[6]-get_hyouhou[20]-get_hyouhou[28]==0 && win_count%3==1)win_count++;
			if(win_count%3==2 && 7-get_hyouhou[3]-get_hyouhou[4]-get_hyouhou[7]-get_hyouhou[22]-get_hyouhou[25]-get_hyouhou[26]-get_hyouhou[27]==0)win_count++;
			if(win_count%3==0 && 6-get_hyouhou[10]-get_hyouhou[11]-get_hyouhou[12]-get_hyouhou[13]-get_hyouhou[30]-get_hyouhou[32]==0)win_count++;

			if(win_count%3==1 && 6-get_hyouhou[1]-get_hyouhou[2]-get_hyouhou[5]-get_hyouhou[6]-get_hyouhou[20]-get_hyouhou[28]>0){//1,2,5,6,20,28
			c=6-get_hyouhou[1]-get_hyouhou[2]-get_hyouhou[5]-get_hyouhou[6]-get_hyouhou[20]-get_hyouhou[28];
			c=GetRand(c-1);
			if(get_hyouhou[1]==0  && c==0){
			strcpy_s(syouri, "攻撃の兵法");strcpy_s(serihu, "前列前進を会得した");get_hyouhou[1]=1;}//1
			else if(get_hyouhou[2]==0  && c==1-get_hyouhou[1]){
			strcpy_s(syouri, "攻撃の兵法");strcpy_s(serihu, "後列前進を会得した");get_hyouhou[2]=1;}//2
			else if(get_hyouhou[5]==0  && c==2-get_hyouhou[1]-get_hyouhou[2]){
			strcpy_s(syouri, "攻撃の兵法");strcpy_s(serihu, "上翼攻撃を会得した");get_hyouhou[5]=1;}//5
			else if(get_hyouhou[6]==0  && c==3-get_hyouhou[1]-get_hyouhou[2]-get_hyouhou[5]){
			strcpy_s(syouri, "攻撃の兵法");strcpy_s(serihu, "下翼攻撃を会得した");get_hyouhou[6]=1;}//6
			else if(get_hyouhou[20]==0 && c==4-get_hyouhou[1]-get_hyouhou[2]-get_hyouhou[5]-get_hyouhou[6]){
			strcpy_s(syouri, "防御の兵法");strcpy_s(serihu, "前列防御を会得した");get_hyouhou[20]=1;}//20
			else if(get_hyouhou[28]==0 && c==5-get_hyouhou[1]-get_hyouhou[2]-get_hyouhou[5]-get_hyouhou[6]-get_hyouhou[20]){
			strcpy_s(syouri, "防御の兵法");strcpy_s(serihu, "前列交代を会得した");get_hyouhou[28]=1;}//28
			hirameki();
			}else if(win_count%3==2 && 7-get_hyouhou[3]-get_hyouhou[4]-get_hyouhou[7]-get_hyouhou[22]-get_hyouhou[25]-get_hyouhou[26]-get_hyouhou[27]>0){//3,4,7,25,26,27
			c=7-get_hyouhou[3]-get_hyouhou[4]-get_hyouhou[7]-get_hyouhou[22]-get_hyouhou[25]-get_hyouhou[26]-get_hyouhou[27];
			c=GetRand(c-1);
			if(get_hyouhou[3]==0 && c==0){
			strcpy_s(syouri, "攻撃の兵法");strcpy_s(serihu, "速攻前進を会得した");get_hyouhou[3]=1;}//3
			else if(get_hyouhou[4]==0 && c==1-get_hyouhou[3]){
			strcpy_s(syouri, "攻撃の兵法");strcpy_s(serihu, "強撃前進を会得した");get_hyouhou[4]=1;}//4
			else if(get_hyouhou[7]==0 && c==2-get_hyouhou[3]-get_hyouhou[4]){
			strcpy_s(syouri, "攻撃の兵法");strcpy_s(serihu, "全軍前進・強を会得した");get_hyouhou[7]=1;}//7
			else if(get_hyouhou[22]==0 && c==3-get_hyouhou[3]-get_hyouhou[4]-get_hyouhou[7]){
			strcpy_s(syouri, "防御の兵法");strcpy_s(serihu, "全軍防御・強を会得した");get_hyouhou[22]=1;}//22
			else if(get_hyouhou[25]==0 && c==4-get_hyouhou[3]-get_hyouhou[4]-get_hyouhou[7]-get_hyouhou[22]){
			strcpy_s(syouri, "防御の兵法");strcpy_s(serihu, "速攻後退を会得した");get_hyouhou[25]=1;}//25
			else if(get_hyouhou[26]==0 && c==5-get_hyouhou[3]-get_hyouhou[4]-get_hyouhou[7]-get_hyouhou[25]-get_hyouhou[22]){
			strcpy_s(syouri, "防御の兵法");strcpy_s(serihu, "後退防御を会得した");get_hyouhou[26]=1;}//26
			else if(get_hyouhou[27]==0 && c==6-get_hyouhou[3]-get_hyouhou[4]-get_hyouhou[7]-get_hyouhou[25]-get_hyouhou[26]-get_hyouhou[22]){
			strcpy_s(syouri, "防御の兵法");strcpy_s(serihu, "後退攻撃を会得した");get_hyouhou[27]=1;}//27
			hirameki();
			}else if(win_count%3==0 && 6-get_hyouhou[10]-get_hyouhou[11]-get_hyouhou[12]-get_hyouhou[13]-get_hyouhou[30]-get_hyouhou[32]>0){//10,11,12,13,25,27
			c=6-get_hyouhou[10]-get_hyouhou[11]-get_hyouhou[12]-get_hyouhou[13]-get_hyouhou[30]-get_hyouhou[32];
			c=GetRand(c-1);
			if(get_hyouhou[10]==0 && c==0){
			strcpy_s(syouri, "攻撃の兵法");strcpy_s(serihu, "前列突撃を会得した");get_hyouhou[10]=1;}//10
			else if(get_hyouhou[11]==0 && c==1-get_hyouhou[10]){
			strcpy_s(syouri, "攻撃の兵法");strcpy_s(serihu, "後列突撃を会得した");get_hyouhou[11]=1;}//11
			else if(get_hyouhou[12]==0 && c==2-get_hyouhou[10]-get_hyouhou[11]){
			strcpy_s(syouri, "攻撃の兵法");strcpy_s(serihu, "上翼突撃を会得した");get_hyouhou[12]=1;}//12
			else if(get_hyouhou[13]==0 && c==3-get_hyouhou[10]-get_hyouhou[11]-get_hyouhou[12]){
			strcpy_s(syouri, "攻撃の兵法");strcpy_s(serihu, "下翼突撃を会得した");get_hyouhou[13]=1;}//13
			else if(get_hyouhou[30]==0 && c==4-get_hyouhou[10]-get_hyouhou[11]-get_hyouhou[12]-get_hyouhou[13]){
			strcpy_s(syouri, "防御の兵法");strcpy_s(serihu, "統率回復・弱を会得した");get_hyouhou[30]=1;}//30
			else if(get_hyouhou[32]==0 && c==5-get_hyouhou[10]-get_hyouhou[11]-get_hyouhou[12]-get_hyouhou[13]-get_hyouhou[30]){
			strcpy_s(syouri, "防御の兵法");strcpy_s(serihu, "陣形回復を会得した");get_hyouhou[32]=1;}//32
			hirameki();
			}
		}
		//陣形取得
		if(VS_result<4 && p!=100){
		if(gun_jinkei[1]==4 && get_jinkei[3]==0){
		strcpy_s(syouri, "攻撃の兵法");get_jinkei[3]=1;
		strcpy_s(serihu, "上翼突破の陣を会得した");t=120;hirameki();
		}
		if(gun_jinkei[1]==5 && get_jinkei[4]==0 && p!=100){
		strcpy_s(syouri, "攻撃の兵法");get_jinkei[4]=1;
		strcpy_s(serihu, "下翼突破の陣を会得した");t=120;hirameki();
		}
		if(gun_jinkei[1]==6 && get_jinkei[5]==0 && p!=100){
		strcpy_s(syouri, "攻撃の兵法");get_jinkei[5]=1;
		strcpy_s(serihu, "中央突破の陣を会得した");t=120;hirameki();
		}
		if(gun_jinkei[1]==7 && get_jinkei[6]==0 && p!=100){
		strcpy_s(syouri, "防御の兵法");get_jinkei[6]=1;
		strcpy_s(serihu, "三波状陣を会得した");t=120;hirameki();
		}
		if(gun_jinkei[1]==8 && get_jinkei[7]==0 && p!=100){
		strcpy_s(syouri, "攻撃の兵法");get_jinkei[7]=1;
		strcpy_s(serihu, "疾風陣を会得した");t=120;hirameki();
		}
		if(gun_jinkei[1]==11 && get_jinkei[10]==0 && p!=100){
		strcpy_s(syouri, "防御の兵法");get_jinkei[10]=1;
		strcpy_s(serihu, "波状盾の陣を会得した");t=120;hirameki();
		}
		if(gun_jinkei[1]==13 && get_jinkei[12]==0 && p!=100){
		strcpy_s(syouri, "猛将の兵法");get_jinkei[12]=1;
		strcpy_s(serihu, "阿修羅道を会得した");t=0;hirameki();
		}
		if(gun_jinkei[1]==14 && get_jinkei[13]==0 && p!=100){
		strcpy_s(syouri, "防御の兵法");get_jinkei[13]=1;
		strcpy_s(serihu, "十字陣を会得した");t=120;hirameki();
		}
		if(gun_jinkei[1]==15 && get_jinkei[14]==0 && p!=100){
		strcpy_s(syouri, "防御の兵法");get_jinkei[14]=1;
		strcpy_s(serihu, "方陣を会得した");t=120;hirameki();
		}
		if(gun_jinkei[1]==18 && get_jinkei[17]==0 && p!=100){
		strcpy_s(syouri, "鉄壁の兵法");get_jinkei[17]=1;
		strcpy_s(serihu, "魚鱗の陣を会得した");t=120;hirameki();
		}
		//上級陣形
		if(perfe_count>500 && get_jinkei[11]==0 && p!=100){
		strcpy_s(syouri, "鉄壁の兵法");get_jinkei[11]=1;
		strcpy_s(serihu, "虎穴陣を会得した");t=0;hirameki();
		}
		if(perfe_count>1000 && get_jinkei[15]==0 && p!=100){
		strcpy_s(syouri, "鉄壁の兵法");get_jinkei[15]=1;
		strcpy_s(serihu, "三点突破の陣を会得した");t=0;hirameki();
		}
		if(perfe_count>2000 && get_jinkei[19]==0 && p!=100){
		strcpy_s(syouri, "軍神の兵法");get_jinkei[19]=1;
		strcpy_s(serihu, "天の翼を会得した");t=0;hirameki();
		}
		if(anihi_count>500 && get_jinkei[9]==0 && p!=100){
		strcpy_s(syouri, "猛将の兵法");get_jinkei[9]=1;
		strcpy_s(serihu, "強撃陣を会得した");t=0;hirameki();
		}
		if(anihi_count>1000 && get_jinkei[8]==0 && p!=100){
		strcpy_s(syouri, "猛将の兵法");get_jinkei[8]=1;
		strcpy_s(serihu, "背水の陣を会得した");t=0;hirameki();
		}
		if(anihi_count>2000 && get_jinkei[18]==0 && p!=100){
		strcpy_s(syouri, "軍神の兵法");get_jinkei[18]=1;
		strcpy_s(serihu, "竜渦の陣を会得した");t=0;hirameki();
		}
		if(VS_no==37 && VS_result<4 && p!=100){
		strcpy_s(syouri, "奇策の兵法");get_jinkei[16]=1;
		strcpy_s(serihu, "横列陣形を会得した");t=0;hirameki();
		}
		}
		//戦術フラグ判定
		for(i=0;i<50;i++){
		if(get_hyouhou[i]==1)flag_hyouhou[i]=1;
		}
		//ブラックアウト
		for(t=0;t<64;t++){
			SetDrawBright( 255-t*4 , 255-t*4 , 255-t*4 ) ;
			sentou_byouga();//戦闘中の描画処理
			SetDrawBright( 255-t*4 , 255-t*4 , 255-t*4 ) ;
			c=9+hei_time[0][gun_kazu[0]]/10%3-1*3;
			DrawRotaGraph( hei_x[0][gun_kazu[0]]/1000+32 , hei_y[0][gun_kazu[0]]/1000+105-12 , 2 , 0 , unit_g[butai_one[0]][0][c] , TRUE ) ;
			DrawRotaGraph( hei_x[0][gun_kazu[0]]/1000+32 , hei_y[0][gun_kazu[0]]/1000+105+12 , 2 , 0 , unit_g[butai_two[0]][0][c] , TRUE ) ;
			c=9+hei_time[1][gun_kazu[1]]/10%3;
			DrawRotaGraph( hei_x[1][gun_kazu[1]]/1000-32 , hei_y[1][gun_kazu[1]]/1000+105-12 , 2 , 0 , unit_g[butai_one[1]][1][c] , TRUE ) ;
			DrawRotaGraph( hei_x[1][gun_kazu[1]]/1000-32 , hei_y[1][gun_kazu[1]]/1000+105+12 , 2 , 0 , unit_g[butai_two[1]][1][c] , TRUE ) ;
			ScreenFlip();
		}
		SetDrawBright( 255 , 255, 255 ) ;
		dorura=0;
		if(eve_flag[98]==1){//超戦術設置
		set_jinkei[1]=21;
		set_hyouhou[1][0]=37;
		set_hyouhou[1][1]=61;
		set_hyouhou[1][2]=62;
		set_hyouhou[1][3]=60;
		set_hyouhou[1][4]=64;
		set_hyouhou[1][5]=65;
		set_hyouhou[1][6]=66;
		set_hyouhou[1][7]=67;
		set_hyouhou[1][8]=63;
		}


		return 0;
}
int hirameki(){

	for(;t<240;t++){
		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0 ){
			if(mouse==0){
			t=t/120*120+120;
			mouse=1;
			}
		}else{
		mouse=0;
		}
		if(t==120)PlaySoundMem( se_no[7] , DX_PLAYTYPE_BACK ) ;
		sentou_byouga();//戦闘中の描画処理
		c=9+hei_time[0][gun_kazu[0]]/10%3-1*3;
		DrawRotaGraph( hei_x[0][gun_kazu[0]]/1000+32 , hei_y[0][gun_kazu[0]]/1000+105-12 , 2 , 0 , unit_g[butai_one[0]][0][c] , TRUE ) ;
		DrawRotaGraph( hei_x[0][gun_kazu[0]]/1000+32 , hei_y[0][gun_kazu[0]]/1000+105+12 , 2 , 0 , unit_g[butai_two[0]][0][c] , TRUE ) ;
		c=9+hei_time[1][gun_kazu[1]]/10%3;
		DrawRotaGraph( hei_x[1][gun_kazu[1]]/1000-32 , hei_y[1][gun_kazu[1]]/1000+105-12 , 2 , 0 , unit_g[butai_one[1]][1][c] , TRUE ) ;
		DrawRotaGraph( hei_x[1][gun_kazu[1]]/1000-32 , hei_y[1][gun_kazu[1]]/1000+105+12 , 2 , 0 , unit_g[butai_two[1]][1][c] , TRUE ) ;
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		DrawBox( 80 , 98 , 560 , 190 ,GetColor(0,0,255) , TRUE ) ;
		SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;
		if(t<120){
		DrawStringToHandle( 122+1 , 132+1 , "なんと!!"       , kuro , f_a) ;
		DrawStringToHandle( 122   , 132   , "なんと!!"       , siro , f_a) ;
		}else{
		DrawFormatStringToHandle( 122+1 , 108+1 , kuro , f_a , "%s" , syouri) ;
		DrawFormatStringToHandle( 122   , 108   , siro , f_a , "%s" , syouri) ;
		DrawFormatStringToHandle( 122+1 , 152+1 , kuro , f_a , "%s" , serihu) ;
		DrawFormatStringToHandle( 122   , 152   , siro , f_a , "%s" , serihu) ;
		}
		ScreenFlip();
	}
	return 0;
}
int ex_wasure(){
	//エクストラでの忘れ判定
	for(i=0;i<9;i++){
	switch (set_hyouhou[hensei_no][i]){
		//case 1 :get_hyouhou[0]=0;break;
		//case 6 :get_hyouhou[1]=0;break;
		//case 7 :get_hyouhou[2]=0;break;
		case 8 :get_hyouhou[3]=0;break;
		case 9 :get_hyouhou[4]=0;break;
		case 11:get_hyouhou[5]=0;break;
		case 12:get_hyouhou[6]=0;break;
		case 56:get_hyouhou[7]=0;break;
		case 58:get_hyouhou[8]=0;break;
		case 4 :get_hyouhou[9]=0;break;
		case 13:get_hyouhou[10]=0;break;
		case 14:get_hyouhou[11]=0;break;
		case 15:get_hyouhou[12]=0;break;//22
		case 16:get_hyouhou[13]=0;break;//23
		case 39:get_hyouhou[14]=0;break;
		case 36:get_hyouhou[15]=0;break;//33
		case 40:get_hyouhou[16]=0;break;
		case 41:get_hyouhou[17]=0;break;
		case 52:get_hyouhou[18]=0;break;
		//case 3 :get_hyouhou[19]=0;break;
		//case 17:get_hyouhou[20]=0;break;
		case 29:get_hyouhou[21]=0;break;
		case 18:get_hyouhou[22]=0;break;
		//case 2 :get_hyouhou[23]=0;break;
		case 57:get_hyouhou[24]=0;break;
		case 20:get_hyouhou[25]=0;break;
		case 19:get_hyouhou[26]=0;break;
		case 10:get_hyouhou[27]=0;break;
		//case 21:get_hyouhou[28]=0;break;
		case 24:get_hyouhou[29]=0;break;//28
		case 25:get_hyouhou[30]=0;break;
		case 30:get_hyouhou[31]=0;break;
		case 27:get_hyouhou[32]=0;break;
		case 31:get_hyouhou[33]=0;break;
		case 50:get_hyouhou[34]=0;break;
		case 51:get_hyouhou[35]=0;break;
		//case 5 :get_hyouhou[36]=0;break;
		case 55:get_hyouhou[37]=0;break;//26
		case 42:get_hyouhou[38]=0;break;
		case 43:get_hyouhou[39]=0;break;
		case 32:get_hyouhou[40]=0;break;
		case 34:get_hyouhou[41]=0;break;//38
		case 35:get_hyouhou[42]=0;break;
		case 49:get_hyouhou[43]=0;break;
		case 59:get_hyouhou[44]=0;break;
		case 44:get_hyouhou[45]=0;break;
		case 45:get_hyouhou[46]=0;break;//53
		case 46:get_hyouhou[47]=0;break;//54
		case 47:get_hyouhou[48]=0;break;
		case 48:get_hyouhou[49]=0;break;
		}
	//解除判定
	}
	A=(hensei_no+1)%2;
	B=hensei_no;

	for(i=0;i<9;i++){
		if(set_hyouhou[B][i]==1 || set_hyouhou[B][i]==2 ||set_hyouhou[B][i]==3 ||set_hyouhou[B][i]==5 ||set_hyouhou[B][i]==6 ||set_hyouhou[B][i]==7 ||set_hyouhou[B][i]==17 ||set_hyouhou[B][i]==21)continue;
		for(j=0;j<9;j++){
			if(set_hyouhou[A][j]==set_hyouhou[B][i])set_hyouhou[A][j]=0;
		}
		set_hyouhou[B][i]=0;
	}

	//陣形忘れ判定
	if(set_jinkei[hensei_no]!=1)get_jinkei[set_jinkei[hensei_no]-1]=0;
	if(set_jinkei[(hensei_no+1)%2]==set_jinkei[hensei_no])set_jinkei[(hensei_no+1)%2]=1;
	set_jinkei[hensei_no]=1;

	return 0;
}
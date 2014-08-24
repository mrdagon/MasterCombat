#include "SLG.h"

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance,LPSTR lpCmdLine, int nCmdShow )
{
	SetMainWindowText( "MasterCombat 1.01" ) ;//�E�B���h�E�^�C�g���ύX
	SetWindowIconID( 101 ) ;
	ChangeWindowMode( TRUE ) ;//�E�B���h�E���[�h�ɕύX
	SetGraphMode( 640 , 480 ,16) ;
	SetScreenMemToVramFlag( FALSE ) ;//�u�������g�p���Ȃ�
	SetOutApplicationLogValidFlag( FALSE ) ;//���O�o�͂��Ȃ�
	if( DxLib_Init() == -1 )return -1 ;//�c�w���C�u�������������� �G���[���N�����璼���ɏI��
	SetDrawScreen( DX_SCREEN_BACK ) ;//�`�ʐ�𗠉�ʂɐݒ�
	SetTransColor( 190 , 179 , 145 ) ;// ���ߐF��ύX
	//�O���t�B�b�N�̓ǂݍ���
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
	se_no[7]=LoadSoundMem( "File/sound/cursor04.wav" ) ;//�擾
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

	f_a=CreateFontToHandle( "HGS�s����" , 32 , 3 ) ;
	f_t=CreateFontToHandle( "HGS�s����" , 110 , 6 ) ;//
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
	job_pow[17]=14;job_def[17]=13;job_spd[17]=11;job_sta[17]=40;job_wei[17]=15;job_vit[17]=130;//�A���P��
	job_pow[18]=11;job_def[18]=10;job_spd[18]=10;job_sta[18]=36;job_wei[18]=10;job_vit[18]=110;
	job_pow[19]=15;job_def[19]=15;job_spd[19]=12;job_sta[19]=50;job_wei[19]=13;job_vit[19]=150;//����
	job_pow[20]=14;job_def[20]=14;job_spd[20]=11;job_sta[20]=40;job_wei[20]=13;job_vit[20]=130;//�A�~�[
	job_pow[21]=13;job_def[21]=13;job_spd[21]=11;job_sta[21]=40;job_wei[21]=13;job_vit[21]=140;//�t�H���l�E�X
	job_pow[22]=13;job_def[22]=14;job_spd[22]=15;job_sta[22]=40;job_wei[22]=13;job_vit[22]=130;//�u�l
	job_pow[23]= 8;job_def[23]= 8;job_spd[23]= 8;job_sta[23]=24;job_wei[23]= 8;job_vit[23]= 80;
	job_pow[24]=11;job_def[24]=11;job_spd[24]=10;job_sta[24]=30;job_wei[24]=10;job_vit[24]=110;
	job_pow[25]=13;job_def[25]=13;job_spd[25]=12;job_sta[25]=36;job_wei[25]=11;job_vit[25]=120;
	job_pow[26]=11;job_def[26]=11;job_spd[26]=10;job_sta[26]=33;job_wei[26]=11;job_vit[26]=110;
	job_pow[27]=12;job_def[27]=12;job_spd[27]= 9;job_sta[27]=40;job_wei[27]=12;job_vit[27]=120;
	for(i=0;i<28;i++){
	job_pow[i]-=5;
	job_def[i]-=5;
	}
	butai_one[0]=5;//�����P�̕���//�d����
	butai_two[0]=6;//�����Q�̕���//�d�R��
	butai_sirei[0]=24;//�i�ߊ��̕���

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

	time_count=GetNowCount();//���Ԍo�ߌv�Z�p
	sekaitizu();

	DxLib_End() ;				// �c�w���C�u�����g�p�̏I������

	return 0 ;				// �\�t�g�̏I�� 
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
	win_count=0;//������
	lost_count=0;//�s�k��
	esc_count=0;//������
	anihi_count=0;//���j��
	perfe_count=0;//������
	for(i=0;i<100;i++)
	eve_flag[i]=0;//�C�x���g�t���O

	kuni_seiryoku[0] =1;
	kuni_yuukou[0] =   0;kuni_gundan[0] =   0;kuni_x[0] =255;kuni_y[0] =140;kuni_type[0] =24;strcpy_s(kuni_name[0],  "���A");
	kuni_yuukou[1] =   0;kuni_gundan[1] = 700;kuni_x[1] = 20;kuni_y[1] = 20;kuni_type[1] =2 ;strcpy_s(kuni_name[1],  "�i�v���y");
	kuni_yuukou[2] =   0;kuni_gundan[2] = 800;kuni_x[2] =115;kuni_y[2] = 35;kuni_type[2] =18;strcpy_s(kuni_name[2],  "���̎R");
	kuni_yuukou[3] = 750;kuni_gundan[3] = 300;kuni_x[3] = 70;kuni_y[3] = 90;kuni_type[3] =23;strcpy_s(kuni_name[3],  "�����e��");
	kuni_yuukou[4] =   0;kuni_gundan[4] =1000;kuni_x[4] = 25;kuni_y[4] =180;kuni_type[4] =22;strcpy_s(kuni_name[4],  "�o���̕�");
	kuni_yuukou[5] = 250;kuni_gundan[5] = 500;kuni_x[5] = 75;kuni_y[5] =220;kuni_type[5] =5 ;strcpy_s(kuni_name[5],  "�v�h��");
	kuni_yuukou[6] = 250;kuni_gundan[6] =1000;kuni_x[6] =135;kuni_y[6] =155;kuni_type[6] =26;strcpy_s(kuni_name[6],  "�x�A");
	kuni_yuukou[7] =   0;kuni_gundan[7] = 100;kuni_x[7] =190;kuni_y[7] =110;kuni_type[7] =1 ;strcpy_s(kuni_name[7],  "���S�̑��A");
	kuni_yuukou[8] =   0;kuni_gundan[8] = 200;kuni_x[8] =205;kuni_y[8] =180;kuni_type[8] =3 ;strcpy_s(kuni_name[8],  "�c�B�K�t");
	kuni_yuukou[9] = 750;kuni_gundan[9] = 200;kuni_x[9] =225;kuni_y[9] =240;kuni_type[9] =3 ;strcpy_s(kuni_name[9],  "�{�����J");
	kuni_yuukou[10]=   0;kuni_gundan[10]= 500;kuni_x[10]=145;kuni_y[10]=300;kuni_type[10]=10;strcpy_s(kuni_name[10], "���[�u���O");
	kuni_yuukou[11]= 500;kuni_gundan[11]= 800;kuni_x[11]=220;kuni_y[11]=320;kuni_type[11]=26;strcpy_s(kuni_name[11], "�J�g�}");
	kuni_yuukou[12]=   0;kuni_gundan[12]=1000;kuni_x[12]=135;kuni_y[12]=365;kuni_type[12]=20;strcpy_s(kuni_name[12], "�鐝�v��");
	kuni_yuukou[13]=1000;kuni_gundan[13]= 100;kuni_x[13]=230;kuni_y[13]=380;kuni_type[13]=3 ;strcpy_s(kuni_name[13], "�p�l�C��");
	kuni_yuukou[14]= 750;kuni_gundan[14]= 500;kuni_x[14]=275;kuni_y[14]= 40;kuni_type[14]=25;strcpy_s(kuni_name[14], "����̐X");
	kuni_yuukou[15]=   0;kuni_gundan[15]=1000;kuni_x[15]=360;kuni_y[15]= 30;kuni_type[15]=17;strcpy_s(kuni_name[15], "���_�a");
	kuni_yuukou[16]= 500;kuni_gundan[16]= 400;kuni_x[16]=295;kuni_y[16]=100;kuni_type[16]=6 ;strcpy_s(kuni_name[16], "�X�s�A");
	kuni_yuukou[17]= 250;kuni_gundan[17]= 600;kuni_x[17]=355;kuni_y[17]=150;kuni_type[17]=5 ;strcpy_s(kuni_name[17], "�o�J�_");
	kuni_yuukou[18]=   0;kuni_gundan[18]= 300;kuni_x[18]=285;kuni_y[18]=200;kuni_type[18]=0 ;strcpy_s(kuni_name[18], "���̐X");
	kuni_yuukou[19]= 250;kuni_gundan[19]= 900;kuni_x[19]=440;kuni_y[19]=160;kuni_type[19]=26;strcpy_s(kuni_name[19], "�A���g��");
	kuni_yuukou[20]=   0;kuni_gundan[20]= 750;kuni_x[20]=405;kuni_y[20]=205;kuni_type[20]=26;strcpy_s(kuni_name[20], "�e���U��");
	kuni_yuukou[21]= 500;kuni_gundan[21]= 500;kuni_x[21]=375;kuni_y[21]=250;kuni_type[21]=3 ;strcpy_s(kuni_name[21], "�N�B���e�B��");
	kuni_yuukou[22]= 250;kuni_gundan[22]= 700;kuni_x[22]=410;kuni_y[22]=365;kuni_type[22]=16;strcpy_s(kuni_name[22], "�o���o�[�h");
	kuni_yuukou[23]= 500;kuni_gundan[23]= 800;kuni_x[23]=470;kuni_y[23]=220;kuni_type[23]=26;strcpy_s(kuni_name[23], "�X�o�C�c�A");
	kuni_yuukou[24]= 250;kuni_gundan[24]= 300;kuni_x[24]=510;kuni_y[24]=250;kuni_type[24]=6 ;strcpy_s(kuni_name[24], "�A�����_�C");
	kuni_yuukou[25]=   0;kuni_gundan[25]=1000;kuni_x[25]=540;kuni_y[25]=290;kuni_type[25]=19;strcpy_s(kuni_name[25], "�[��");
	kuni_yuukou[26]=   0;kuni_gundan[26]=1000;kuni_x[26]=535;kuni_y[26]=360;kuni_type[26]=27;strcpy_s(kuni_name[26], "�����̓�");
	kuni_yuukou[27]=   0;kuni_gundan[27]= 600;kuni_x[27]=595;kuni_y[27]=255;kuni_type[27]=9 ;strcpy_s(kuni_name[27], "�T�C�Y�d");
	kuni_yuukou[28]= 750;kuni_gundan[28]= 500;kuni_x[28]=495;kuni_y[28]=125;kuni_type[28]=11;strcpy_s(kuni_name[28], "�R�E�K�C");
	kuni_yuukou[29]=   0;kuni_gundan[29]=1000;kuni_x[29]=600;kuni_y[29]=125;kuni_type[29]=21;strcpy_s(kuni_name[29], "�C��{");
	//�������f�[�^
	minsyuu=500;//�������O
	sangyou=0;//�����Y��
	kokuryoku=0;//��������
	money=100*10000;
	//������p�f�[�^
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
	//�Z�[�u���x���ǂݍ���

	//char hero_name[22];//��l���̖��O
	//char save_name[3][22];//�Z�[�u�f�[�^�̎�l����

	omake_load();//�V�X�e���f�[�^�Ǎ�

	for(A=0;A<3;A++){
	FILE *fp ;
	if(A==0)fopen_s( &fp,"File/save/save_01.sav" , "rb" ) ;
	else if(A==1)fopen_s( &fp,"File/save/save_02.sav" , "rb" ) ;
	else if(A==2)fopen_s( &fp,"File/save/save_03.sav" , "rb" ) ;
	// �I�[�v���ł��Ȃ������炱���ŏI��
	if( fp == NULL ) continue;
	//�f�[�^�̏����o��
	fread( &save_name[A], sizeof( char ) , 22 , fp );//��l���̖��O
	fread( &save_syuu[A], sizeof( int ) , 1 , fp );//���t
	fread( &save_time[A], sizeof( int ) , 1 , fp );//�v���C����
	//�t�@�C�������
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
	if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
		if(mouse_left==0) mouse_left=1;
		else mouse_left=2;
	}else mouse_left=0;
	if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0){//�}�E�X������
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
		if(mou_y>240 && mou_y<300){//�j���[�Q�[��
		DrawRotaGraph( 220 , 284 , 2 , 0 , unit_g[3][1][j+9] , TRUE ) ;
		DrawRotaGraph( 402 , 284 , 2 , 0 , unit_g[3][0][j+6] , TRUE ) ;
		if(mouse_left==1){
			PlaySoundMem( se_no[16] , DX_PLAYTYPE_BACK ) ;
			name_nyuuryoku();
			}
		}
		else if(mou_y>300 && mou_y<350){//���[�h�Q�[��
		DrawRotaGraph( 220 , 334 , 2 , 0 , unit_g[3][1][j+9] , TRUE ) ;
		DrawRotaGraph( 402 , 334 , 2 , 0 , unit_g[3][0][j+6] , TRUE ) ;
		if(mouse_left==1){
			mouse_left=2;
			PlaySoundMem( se_no[16] , DX_PLAYTYPE_BACK ) ;
			naisei_load();
			}
		}
		else if(mou_y>350 && mou_y<400 && omake_mode==1){//�G�N�X��
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
		else if(mou_y>400 && mou_y<450 && omake_mode==1 ){//���܂�
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
	if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
	}
	ScreenFlip();
	}
	return 0;
}
int sentou_main(){//�퓬�̃��C��

	//�������������Ȃ����̏ꍇ
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

	//�w���������\��
	hei_pow[0][gun_kazu[0]]+=get_item[0]+get_item[0]/4;//����
	hei_def[0][gun_kazu[0]]+=get_item[1]+get_item[1]/4;//�h��
	if(eve_flag[13]==1) hei_kaz[0][gun_kazu[0]]+=20;//�P���̉H
	if(eve_flag[14]==1) hei_sta[0][gun_kazu[0]]+=20;//�����̐�
	if(eve_flag[15]==1){
		hei_wei[0][gun_kazu[0]]+=2;//����
		hei_spd[0][gun_kazu[0]]+=2;//
		hei_atari[A][i]+=15000;//
	}
	con_time=0;

	PlayMusic( "File/music/sentou.mp3" , DX_PLAYTYPE_LOOP ) ;

	//���܂����[�h�␳

	while(1){

	con_time++;

	A=0;
	if(gun_change[A]!=0){//��㔻��
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

	for(A=0;A<2;A++){//�����񕜔���
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
	for(A=0;A<2;A++){//���Δ���
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

	for(A=0;A<2;A++){//���ߕs����
		if(meireihuka[A]>0){
		meireihuka[A]--;
		if(ikari[A]==1) hei_emo[A][gun_kazu[A]]=6;
		else if(meireihuka[A]>0)hei_emo[A][gun_kazu[A]]=2;
		else hei_emo[A][gun_kazu[A]]=0;
		}
	}

	for(A=0;A<2;A++)//���񂾐U�蔻��
	if(gun_sindahuri[A]>0){
		gun_sindahuri[A]--;
		if(gun_sindahuri[A]==0)sen_33();
	}

	sentou_idou();//�������A�ړ����v�Z
	if(kasoku==0 || con_time%3==0)sentou_byouga();//�퓬���̕`�揈��
	sentou_atari();//�퓬���̓����蔻��
	fire_atari();//���Ƃ̓����蔻��
	saku_atari();//��Ƃ̓����蔻��
	ana_atari();//��Ƃ̓����蔻��
	shot_main();//�ˌ�����

	//�R�{������ƕ`�ʏ���
	if(kasoku==0 || con_time%3==0)ScreenFlip();

	if(meireihuka[1]<=0 && sirei_tame[1]<=0 && sirei_tame[1]<=0 && gun_jinkai[1]<=0 && now_time[0]!=0 && now_time[1]!=0 && gun_nokori[1]>0 && gun_nokori[0]!=0 && gun_nokori[1]!=0){
		sentou_ai();//�G�`�h����
	}

	for(i=0;i<100;i++){
		if(hei_moral[0][i]>10000)hei_moral[0][i]=10000;
		else if(hei_moral[0][i]<0)hei_moral[0][i]=0;
		if(hei_moral[1][i]>10000)hei_moral[1][i]=10000;
		else if(hei_moral[1][i]<0)hei_moral[1][i]=0;
	}

	if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X��������
	if(mouse_on==0)kasoku=(kasoku+1)%2;
	mouse_on=1;
	}else{
	mouse_on=0;
	}

	if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//�}�E�X��������
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

	//�w�������S����
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

	if(gun_nokori[0]==0 || gun_nokori[1]==0){//�퓬�I������
		kettyaku();
		break;
	}

	}
	return 0;
}
int sentou_kaisi(){//�퓬�J�n�O�̏�����

	for(j=0;j<2;j++)
	for(i=0;i<100;i++){
	hei_kaz[j][i]=0;//���m�̕�����
	hei_sibou[j][i]=999;//���m���S�t���O
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

	//�G���\���
	A=1;
	VS_dai();
	A=0;jin_dai();
	A=1;jin_dai();

	for(A=0;A<2;A++){
		for(i=0;i<gun_kazu[A]+1;i++){
	if(i==gun_kazu[A]){//�w�����z�u
			hei_x[A][i]=660000*(1-A*2)+A*640000;//���m�̂w���W
			hei_y[A][i]=150000;//���m�̂x���W
			}else{
			hei_x[A][i]=660000*(1-A*2)+A*640000;//���m�̂w���W
			hei_y[A][i]=300000*i/(gun_kazu[A]-1);//���m�̂x���W
			}
		}
	}

	for(t=0;t<120;t++){
		for(i=0;i<100;i++){
		hei_x[0][i]-=500;
		hei_x[1][i]+=500;
		}
	sentou_byouga();//�퓬���̕`�揈��
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
	//�g�p����w�`�I��
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
	sentou_byouga();//�퓬���̕`�揈��
	SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
	DrawBox( 120 , 98 , 520 , 278 ,GetColor(0,0,255) , TRUE ) ;
	SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;

	if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0 ){//�}�E�X��������
	if(mouse==0)break;
	}else{
	mouse=0;
	}

		for(i=0;i<2;i++){
		if(i==0)siro=GetColor(0,0,0);
		else siro=GetColor(255,255,255);
		DrawFormatStringToHandle( 162-i , 110-i , siro , f_a , "%s" , sikikan_name[0] ) ;
		DrawFormatStringToHandle( 162-i , 154-i , siro , f_a , "%s" , jin_name[0] ) ;
		DrawFormatStringToHandle( 382-i , 154-i , siro , f_a , "%d�l" , gun_kazu[0]*100+100 ) ;
		DrawFormatStringToHandle( 162-i , 198-i , siro , f_a , "%s" , sikikan_name[1] ) ;
		DrawFormatStringToHandle( 162-i , 242-i , siro , f_a , "%s" , jin_name[1] ) ;
		DrawFormatStringToHandle( 382-i , 242-i , siro , f_a , "%d�l" , gun_kazu[1]*100+100 ) ;
		}

	ScreenFlip();
	}



	//��p�̑��
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

	if(eve_flag[99]==1)ex_wasure();//��p�Y�p����

	return 0;
}
int sentou_ai(){//�퓬���̂`�h����

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
int sentou_command(){//�퓬���̃R�}���h�I��

	mouse=1;

	while(1){

	GetMousePoint( &mou_x, &mou_y );

	if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//�}�E�X������
		if(mouse==0){
			mouse=1;
			break;
		}
	}else mouse=0;

	sentou_byouga();//�퓬���̕`�揈��
	SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
	DrawBox( 160 , 10 , 480 , 410 ,GetColor(0,0,255) , TRUE ) ;
	if(mou_x>160 && mou_x<480 && mou_y>10 && mou_y <410) DrawBox( 170 , 19+(mou_y-14)/44*44 , 470 , 53+(mou_y-14)/44*44 ,GetColor(0,0,255) , TRUE ) ;
	SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;

	for(i=0;i<9;i++)command_mes();

		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0 && hatudou_kanou[A][(mou_y-14)/44]==0 && mou_x>160 && mou_x<480 && mou_y>10 && mou_y <410){//�}�E�X������
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
int sentou_byouga(){//�퓬���̕`�揈��

	jikan++;
	ClearDrawScreen();

	if(tenki>0)SetDrawBright( 155 , 155 , 155 ) ;

	DrawGraph( 0, 0, back[map], TRUE ) ;

	if(tenki>0)
	for(j=0;j<12;j++)//�J
		for(i=0;i<33;i++){
			xa=(i*20+j*10-ame)%660;
			if(xa<0)xa+=660;
			ya=(j*40+ame*2)%480;
			if(tenki==1)DrawLine(xa,ya,xa-10,ya+20,siro);
			else DrawCircle(xa,ya,3,siro,1);
		}
	if(tenki==1)ame+=2;
	if(tenki==2)ame+=2;

	//�G�R
	DrawBox( 314-gun_moral[1]*10/333 , 434 , 314  , 444 ,aka , TRUE ) ;
	DrawBox( 314-300+gun_hirou[1]/333 , 454 , 314 , 464 ,ao , TRUE ) ;
	//���R
	DrawBox( 326 , 434 , 326+gun_moral[0]*10/333 , 444 ,aka , TRUE ) ;
	DrawBox( 326 , 454 , 326+300-gun_hirou[0]/333 , 464 ,ao , TRUE ) ;

	DrawGraph( 10, 430, sys_g, TRUE ) ;//����308
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
			if(hei_sibou[j][i]==0 && hei_toppa[j][i]==0){//����펞
			if(hei_ana[j][i]>0)DrawRotaGraph(	hei_x[j][i]/1000,hei_y[j][i]/1000+115, 2, 0 ,ana, TRUE ) ;//���Ƃ����͂܂�
			DrawRotaGraph( hei_x[j][i]/1000 , hei_y[j][i]/1000+105-hei_jump[j][i]/10 , 2 , 0 , unit_g[hei_type[j][i]][j][c] , TRUE ) ;
			if(hei_emo[j][i]!=0)DrawRotaGraph( hei_x[j][i]/1000 , hei_y[j][i]/1000+86-hei_jump[j][i]/10 , 2 , 0 , emo[hei_emo[j][i]-1] , TRUE ) ;
			if(hei_hura[j][i]>0 && hei_sen[j][i]>0){//�U��or�h�䖽�߂ɂ���
			SetDrawBlendMode( DX_BLENDMODE_ALPHA , hei_hura[j][i] ) ;
			if(hei_sen[j][i]<10)		SetDrawBright( 255 , 0 , 0 ) ;
			else if(hei_sen[j][i]<100)	SetDrawBright( 0 , 0 , 255 ) ;
			else if(hei_sen[j][i]>100)  SetDrawBright( 255 , 255 , 255 ) ;
			DrawRotaGraph( hei_x[j][i]/1000 , hei_y[j][i]/1000+105 , 2 , 0 , unit_g[hei_type[j][i]][2][c] , TRUE ) ;
			SetDrawBright( 255 , 255 , 255 ) ;
			if(tenki>0)SetDrawBright( 155 , 155 , 155 ) ;
			SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 0 ) ;
			}
		}else if(hei_sibou[j][i]<100 && hei_sibou[j][i]>0){//���S
			if(hei_sibou[j][i]==1) PlaySoundMem( se_no[10] , DX_PLAYTYPE_BACK ) ;
			if(i==gun_kazu[j]){
				if(hei_sibou[j][i]==1 || hei_sibou[j][i]==2){
				A=j;
				hei_sibou[j][i]+=2;
					if(hei_type[j][i]!=8){
					strcpy_s(serihu, "�O�t�b�d");hukidasi();
					strcpy_s(serihu, "�d���O�Ȃ�I");hukidasi();
					}else{
					strcpy_s(serihu, "���ӂ��`");hukidasi();
					strcpy_s(serihu, "�ނ˂�Ȃ股");hukidasi();
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
		}else if(hei_toppa[j][i]>0 && hei_toppa[j][i]<120){//���˔j
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
		if(hei_sibou[j][i]==0 && hei_toppa[j][i]==0 && hei_emo[j][i]!=0)//����펞
		DrawRotaGraph( hei_x[j][i]/1000 , hei_y[j][i]/1000+86-hei_jump[j][i]/10 , 2 , 0 , emo[hei_emo[j][i]-1] , TRUE ) ;
	}


	//�_���[�W�`��
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
	//���`�ʏ���
	//	DrawGraph( 320, 240, fire[0], TRUE ) ;

	for(i=0;i<100;i++){
		if(fire_time[i]>0)		DrawRotaGraph( fire_x[i]/1000 , fire_y[i]/1000+105 , 2 , 0 , fire[fire_time[i]/10%4] , TRUE ) ;
		if(saku_tai[i]>0)DrawRotaGraph( saku_x[i]/1000 , saku_y[i]/1000+105 , 2 , 0 , saku , TRUE ) ;
	}

	if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}

	return 0;
}
int sentou_atari(){//�퓬���̓����蔻��
	for(i=0;i<100;i++){//���R�ƓG�R || (dorura!=0 && hei_type[1][j]==4)
		if(hei_kaz[0][i]<=0 || hei_sibou[0][i]>0 || hei_toppa[0][i]>0 || hei_ren[0][i]==0 || (abs(hei_huki[0][i])>abs(hei_mov[0][i])*24+10000))continue;
		for(j=0;j<100;j++){
		if(hei_kaz[1][j]>0 &&
			hei_sibou[1][j]==0 &&
			hei_toppa[1][j]==0 &&
			hei_ren[1][j]>0 &&
			(abs(hei_huki[1][j])<=abs(hei_mov[1][j])*24+10000  || (dorura!=0 && hei_type[1][j]==4)) &&
			abs(hei_x[0][i]-hei_x[1][j])<hei_atari[0][i]+hei_atari[1][j] &&
			abs(hei_y[0][i]-hei_y[1][j])<30000+dorura*1200000){
			sentou_battle();//�퓬����
			break;
			}
		}
	}
	return 0;
}
int shot_main(){

	for(i=0;i<100;i++)
		if(shot_time[i]==0){//���e���Ԃ��O
		shot_time[i]=50;
		shot_vy[i]=-500;
		shot_x[i]=hei_x[0][i];
		shot_y[i]=hei_y[0][i];
		shot_vx[i]=-2000;
		shot_h[i]=0;
		}else{//���e���Ԃ��O�Ŗ���
		shot_x[i]+=shot_vx[i];
		shot_h[i]+=shot_vy[i];
		shot_vy[i]+=20;
		shot_col[i]=0;
		shot_mu[i]=0;
		shot_time[i]--;//���e���ԁ|�P
		DrawPixel( shot_x[i] , shot_y[i]+shot_h[i] , aka ) ;
		DrawRotaGraph( shot_x[i]/1000 , (shot_y[i]+shot_h[i])/1000+100 , 1 , 0 , magic_g[0][6] , TRUE ) ;
	}



	return 0;
}
void fire_atari(){

		for(i=0;i<100;i++){
		if(fire_time[i]<=0)continue;
			for(j=0;j<2;j++)for(c=0;c<100;c++)
				if(hei_kaz[j][c]>0 && hei_toppa[j][c]==0 && abs(hei_x[j][c]-fire_x[i])<hei_atari[j][c]+15000 && abs(hei_y[j][c]-fire_y[i])<30000 && abs(hei_huki[j][c])<10000){//������`�F�b�N
						if(hei_type[j][c]!=20 && hei_type[j][c]!=19 && hei_type[j][c]!=10 && hei_type[j][c]!=8 && hei_type[j][c]!=4){
						
						if(hei_x[j][c]-hei_huki[j][c]<fire_x[i]) hei_huki[j][c]-=30000;
						else  hei_huki[j][c]+=30000;

						hei_kaz[j][c]-=1;
						if(hei_type[j][c]==21 ||hei_type[j][c]==9) hei_kaz[j][c]-=2;//���Ɏア
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
		if(hei_kaz[j][c]>0 && hei_ana[j][c]<=0 && hei_toppa[j][c]==0 && hei_sibou[j][c]==0 && abs(hei_x[j][c]-saku_x[i])<hei_atari[j][c]+15000 && abs(hei_y[j][c]-saku_y[i])<30000 && abs(hei_huki[j][c])<10000 && hei_type[j][c]!=8){//������`�F�b�N
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
					}else{//�U����Ԃł͖���
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
			if(hei_kaz[j][c]>0 && abs(hei_x[j][c]-ana_x[i])<hei_atari[j][c]+15000 && abs(hei_y[j][c]-ana_y[i])<30000 && ana_id[i]-1==j && hei_ana[j][c]<=0 && hei_type[j][c]!=4 && hei_type[j][c]!=17 && hei_type[j][c]!=19 && hei_type[j][c]!=20 && hei_type[j][c]!=21 && hei_type[j][c]!=22 && hei_type[j][c]!=8){//������`�F�b�N
			ana_id[i]=0;
			hei_ana[j][c]=300;
			}
		}
	}
	return;
}
int sentou_battle(){

	//xa,xb 0���̍U���h��//ya,yb 1���̍U���h��
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
	//�����ɂ��␳
	if(hei_x[0][i]<=hei_x[1][j]){
	if(hei_muk[0][i]==1) {c=0;xb=0;}
	if(hei_muk[1][j]==0) {J=0;yb=0;}
	}else{
	if(hei_muk[0][i]==0) {c=0;xb=0;}
	if(hei_muk[1][j]==1) {J=0;yb=0;}
	}
	if(hei_ana[0][i]>0)c=0;
	if(hei_ana[1][j]>0)J=0;

	//�������ɂ��␳
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

	//�V�C�ɂ��␳
	if(tenkou>0 && tenki==1){
	if(hei_type[1][j]==20){ya-=2;yb-=2;}//��_
	else if(hei_type[1][j]==21){ya+=2;yb+=2;}//����
	else if(hei_type[1][j]==10){ya--;yb--;}//���R���ア
	else if(hei_type[1][j]==9){ya++;yb++;}//���R������
	}
	if(tenkou>0 && tenki==2){
	if(hei_type[1][j]==20){ya-=4;yb-=4;}//��_
	else if(hei_type[1][j]==10){ya-=2;yb-=2;}//���R���ア
	}
	if(hei_ren[1][j]!=hei_ren[0][j]){
	hei_osi[0][i]=hei_wei[0][i]+hei_ren[1][j];
	hei_osi[1][j]=hei_wei[1][j]+hei_ren[0][i];
	}else{
	hei_osi[0][i]=hei_wei[0][i];
	hei_osi[1][j]=hei_wei[1][j];
	}

	//�퓬��Ԃɂ��␳
	if(c==0)xa=0;
	else if(c<10)xa+=c;
	else if(c<100){
		xa=0;
		xb+=c/10;
	}else if(c>=100) xa=0;
	if(c>9 && c<90)hei_osi[0][i]*=3;//���m�̉���
	else if(c==90)  hei_osi[0][i]*=15;//���m�̉���
	else if(c==0)  hei_osi[0][i]*=3;
	if(J==0){ya=0;}
	else if(J<10)ya+=J;
	else if(J<100){
		ya=0;
		yb+=J/10;
	}else if(J>=100) ya=0;
	if(J>9 && J<90)hei_osi[1][j]*=3;//���m�̉���
	else if(J==90)  hei_osi[1][j]*=15;//���m�̉���
	else if(J==0)  hei_osi[1][j]*=3;
	hei_vs[i]=1;
	//�����_�_���[�W
	if(ya>0)hei_dame[0][i]+=GetRand(100);
	if(xa>0)hei_dame[1][j]+=GetRand(100);

	if(ya>0){//�P���_���[�W�v�Z
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
	if(xa>0){//�Q���_���[�W�v�Z
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

	//������΂��v�Z
	hei_huki[0][i]+=(abs(hei_mov[0][i]*19)+abs(hei_mov[1][j]))*ya*10/xb;
	hei_huki[1][j]-=(abs(hei_mov[0][i])+abs(hei_mov[1][j]*19))*xa*10/xb;
	hei_ren[0][i]=0;
	hei_ren[1][j]=0;

	return 0;
}
int sentou_idou(){//�퓬���̈ړ�����

	for(j=0;j<2;j++)
	for(i=0;i<100;i++){//�����̈ړ��A�������̌v�Z
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
			hei_moral[j][i]-=5;//�w�������S�ɂ�郂��������J�ω�
			hei_hirou[j][i]+=50;
		}
		if(abs(hei_mov[j][i])/hei_spd[j][i]>100)hei_hirou[j][i]+=(100-hei_sta[j][i])/2;
		else hei_hirou[j][i]+=(abs(hei_mov[j][i])/hei_spd[j][i]-hei_sta[j][i])/2;//�ړ��ɂ���J�ω�

		if(hei_toppa[j][i]==0 && hei_sibou[j][i]==0 && hei_sen[j][i]==90 && con_time%3==0)hei_dame[j][i]+=1;//�O�񎀎�ɂ�鐶���͒ቺ

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

	for(j=0;j<2;j++)//�����\��
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
	for(i=0;i<100;i++){//�������A���������όv�Z�A�˔j����A�����o����g�O����
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
	//�J����␳
	tenkou--;
	if(tenkou<=0)tenki=0;
	if(tenki!=0)
	for(j=0;j<2;j++)
		for(i=0;i<100;i++){
		fire_time[i]=0;
		hei_moral[j][i]-=15-tenki*5;
		if(gun_jinkei[j]==18 && tenki==1)hei_moral[j][i]+=5;
		if(tenki==2 && hei_kaz[j][i]>0 && hei_toppa[j][i]==0 && con_time%2==0) hei_dame[j][i]+=1;
		if((hei_type[j][i]==9 || hei_type[j][i]==21) && tenki==1){hei_moral[j][i]+=5;}//�����푰
		if(hei_type[j][i]==10 || hei_type[j][i]==2)hei_moral[j][i]-=5;//�鐝�푰
	}
	for(j=0;j<2;j++)
		for(i=0;i<100;i++){
			if(hei_moral[j][i]<0)hei_moral[j][i]=0;
			if(hei_moral[j][i]>10000) hei_moral[j][i]=10000;
			if(hei_hirou[j][i]<0) hei_hirou[j][i]=0;
	}
	//�~�σ_���[�W
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
	//���C���̌v�Z
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
	//�R�̎c�蕺���̌v�Z
	gun_nokori[0]=0;gun_nokori[1]=0;
	for(j=0;j<2;j++)
		for(i=0;i<100;i++){
		if(hei_kaz[j][i]>0 && hei_toppa[j][i]==0) gun_nokori[j]++;
		}
	AI_ueyoku[0]=0;
	AI_sitayoku[0]=0;
	AI_ueyoku[1]=0;
	AI_sitayoku[1]=0;
	//�㗃�Ɖ����̐l���`�F�b�N
	for(j=0;j<2;j++)
		for(i=0;i<100;i++){
		if(hei_sibou[j][i]!=0 || hei_toppa[j][i]!=0)continue;
		if(hei_y[j][i]<150000) AI_ueyoku[j]++;//�㗃
		else AI_sitayoku[j]++;
	}
	return 0;
}
int sekai_byouga(){
	//�e���̕\��
	J++;
	DrawGraph( 0, 0, world_map, TRUE ) ;
	if(J/15%2==0)j=1;
	else if(J/15%4==1)j=0;
	else j=2;
	for(i=0;i<30;i++){
		if(kuni_seiryoku[i]>0){
			DrawRotaGraph( kuni_x[i] , kuni_y[i] , 2 , 0 , unit_g[kuni_type[i]][(kuni_seiryoku[i]-1)/2][j] , TRUE ) ;
			if(kuni_frash[i]!=0){//���͕ω��Ńt���b�V��
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
	if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
	return 0;
}
int sekaitizu(){

	while(1){
	sekai_byouga();
		GetMousePoint( &mou_x, &mou_y );
		if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//�}�E�X������
		if(mouse==0) naisei_command();
		}else mouse=0;
		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
			if(mouse_left==0){
			if(mouse_left==0)mouse_left=1;
			else mouse_left=2;
			}
		}else mouse_left=0;

		//�C�x���g�`�F�b�N
		if(eve_flag[1]==0){//�J�n�C�x���g
		eve_01();
		eve_flag[1]=1;
		}
		if(eve_flag[6]==0 && kuni_seiryoku[1]==1){//�X�̌��C�x���g
		eve_06();eve_flag[6]=1;
		}
		if(eve_flag[9]==0 && kuni_seiryoku[14]==2){//�X�̌��C�x���g
		eve_09();eve_flag[9]=1;
		}
		if(eve_flag[10]==0 && (kuni_seiryoku[22]==1 || kuni_seiryoku[22]==2)){//�X�̌��C�x���g
		eve_10();eve_flag[10]=1;
		}
		if(eve_flag[11]==0 && (kuni_seiryoku[28]==1 || kuni_seiryoku[28]==2)){//�X�̌��C�x���g
		eve_11();eve_flag[11]=1;
		}
		if(eve_flag[12]==0 && kuni_seiryoku[4]==1 ){//�X�̌��C�x���g
		eve_12();eve_flag[12]=1;
		}
		if(eve_flag[13]==0 && kuni_seiryoku[12]==1 ){//�X�̌��C�x���g
		eve_13();eve_flag[13]=1;
		}
		if(eve_flag[14]==0 && kuni_seiryoku[29]==1 ){//�X�̌��C�x���g
		eve_14();eve_flag[14]=1;
		}
		if(eve_flag[15]==0 && kuni_seiryoku[15]==1 ){//�X�̌��C�x���g
		eve_15();eve_flag[15]=1;
		}
		if(eve_flag[16]==0 && kuni_seiryoku[4]==1 && kuni_seiryoku[12]==1 &&  kuni_seiryoku[15]==1 &&  kuni_seiryoku[29]==1){//�X�̌��C�x���g
		eve_16();eve_flag[16]=1;
		}
		if(eve_flag[17]==0 && kokuryoku>=1000 && sangyou>=1000 &&  minsyuu>=1000){//�X�̌��C�x���g
		eve_17();eve_flag[17]=1;
		kuni_type[18]=8;
		kuni_seiryoku[18]=4;
		}
		if(eve_flag[18]==0 && kuni_seiryoku[4]==1 && eve_flag[3]==1){//�����C�x���g
		eve_18();eve_flag[18]=1;
		kuni_seiryoku[2]=4;
		}
		if(kuni_seiryoku[7]==1 && eve_flag[26]==hiduke){//�����C�x���g
		eve_26();eve_flag[26]=0;
		kuni_seiryoku[7]=4;
		}

		if(kuni_seiryoku[25]==1){//�[���̉���|�����G���h
		eve_25();
		omake_mode=1;
		omake_save();
			if(eve_flag[98]==0){
			hiduke=200;
			naisei_save();
			DxLib_End() ;//DX���C�u�����̎g�p�I��
			exit(1);//�v���O�����̏I��
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
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}



		//�������`�F�b�N
		
		
		//0����
		if(kuni_seiryoku[0]!=0 && kuni_seiryoku[0]<3){
		if(kuni_seiryoku[7]==0)kuni_seiryoku[7]=4;
		if(kuni_seiryoku[8]==0)kuni_seiryoku[8]=3;
		if(kuni_seiryoku[9]==0)kuni_seiryoku[9]=3;
		if(kuni_seiryoku[16]==0)kuni_seiryoku[16]=3;
		if(kuni_seiryoku[17]==0)kuni_seiryoku[17]=3;
		if(kuni_seiryoku[18]==0)kuni_seiryoku[18]=4;
		}
		//1����
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
		//12����
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
		//15����
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
		//18����
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
		//25����
		//26����
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
		kuni_seiryoku[25]=4;//���{����
		}
		//���͕ω��`�F�b�N
		c=0;
		for(i=0;i<30;i++){
			if(kuni_seiryoku[i]!=kuni_henka[i]){
				kuni_frash[i]=kuni_seiryoku[i];
				kuni_henka[i]=kuni_seiryoku[i];
				c=1;
			}
		}
		//���͕ω��A�j��
				if(c==1){
			for(t=0;t<60;t++){
			sekai_byouga();
			ScreenFlip();
			}
			for(i=0;i<30;i++)kuni_frash[i]=0;
		}
		//���`�F�b�N
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
	if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//�}�E�X������
		if(mouse==0){
			PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
			break;
		}
	}else mouse=0;
	if(( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
			if(mouse_left==0)mouse_left=1;
			else mouse_left=2;
		}else mouse_left=0;
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		DrawBox( 180 , 110 , 460 , 300 ,ao , TRUE ) ;
		if(mou_x>180 && mou_x<460 && mou_y>110 && mou_y <244) DrawBox( 210 , 116+(mou_y-112)/44*44 , 430 , 156+(mou_y-112)/44*44 ,ao , TRUE ) ;
		SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;
		jyouhou_teki();
		DrawStringToHandle( 256 , 121 , "���z��",kuro , f_a) ;
		if(kuni_seiryoku[c]>2)DrawStringToHandle( 255 , 120 , "���z��",siro , f_a) ;
		else DrawStringToHandle( 255 , 120 , "���z��",hai , f_a) ;
		DrawStringToHandle( 256 , 165 , "�a������",kuro , f_a) ;
		if(kuni_seiryoku[c]==3 && kuni_yuukou[c]<1000)DrawStringToHandle( 255 , 164 , "�a������",siro , f_a) ;
		else DrawStringToHandle( 255 , 164 , "�a������",hai , f_a) ;
		DrawStringToHandle( 256 , 209 , "��������",kuro , f_a) ;
		if(kokuryoku-kuni_gundan[c]+kuni_yuukou[c]>750 && kuni_seiryoku[c]==3)DrawStringToHandle( 255 , 208 , "��������",siro , f_a) ;
		else DrawStringToHandle( 255 , 208 , "��������",hai , f_a) ;
		DrawStringToHandle( 201 , 253 , "����",kuro , f_a) ;
		DrawStringToHandle( 200 , 252 , "����",siro , f_a) ;
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
			case 1://�a������
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
		DrawStringToHandle( 346 , 253 , "��"  ,kuro , f_a) ;
		DrawStringToHandle( 345 , 252 , "��"  ,siro , f_a) ;
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
	VS_result=1;//1�S�ŏ��� 2�ދp���� 3�����c�菟�� 4�S�Ŕs�k 5�ދp�s�k 6�����c��s�k 7�����c���������
	//������ɂ��֌W����


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
	case 1://������
	VS_no=23;
	map=0;
	sentou_main();
	switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		syouri_bonus();break;
		}
	break;
	case 2://�S�����Q�A��
	VS_no=28;
	map=7;
	sentou_main();
		if(kuni_seiryoku[4]==4)eve_03();
		else if(eve_flag[3]==1)eve_04();
		else eve_02();
		if(VS_result<4 && B==1){//�A��`�F�b�N
		VS_no=38;
		gun_kazu[0]=gun_nokori[0]-1;
		sentou_main();
		switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		syouri_bonus();break;
		break;
		case 4://�S�Ŕs�k
		case 5://�ދp�s�k
		case 6://�c��s�k
		//���S�C�x���g
		break;
		case 7://��������
		break;}
		}
	break;
	case 3://����
	VS_no=21;map=0;
	sentou_main();
	switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		syouri_bonus();break;
		case 4://�S�Ŕs�k
		case 5://�ދp�s�k
		case 6://�c��s�k
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://��������
		kuni_seiryoku[VS_aite]=3;break;}
	break;
	case 4://������
	VS_no=33;map=4;
	sentou_main();
	switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		syouri_bonus();break;
		}
	break;
	case 5://�d��
	VS_no=4;map=4;
	sentou_main();
	switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		syouri_bonus();break;
		case 4://�S�Ŕs�k
		case 5://�ދp�s�k
		case 6://�c��s�k
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://��������
		kuni_seiryoku[VS_aite]=3;break;}
	break;
	case 6://���R�R�A��
	VS_no=35;map=6;
	sentou_main();
	switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		break;
		case 4://�S�Ŕs�k
		case 5://�ދp�s�k
		case 6://�c��s�k
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://��������
		kuni_seiryoku[VS_aite]=3;break;}
	if(VS_result<4){//�A��`�F�b�N
		VS_no=30;
		gun_kazu[0]=gun_nokori[0]-1;
		sentou_main();
		switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		break;
		case 4://�S�Ŕs�k
		case 5://�ދp�s�k
		case 6://�c��s�k
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://��������
		kuni_seiryoku[VS_aite]=3;break;}
		if(VS_result<4){//�A��`�F�b�N���̂Q
			VS_no=2;
			gun_kazu[0]=gun_nokori[0]-1;
			sentou_main();
			switch(VS_result){
			case 1://�S�ŏ���
			case 2://�ދp����
			case 3://�c�菟��
			syouri_bonus();break;
			case 4://�S�Ŕs�k
			case 5://�ދp�s�k
			case 6://�c��s�k
			kuni_seiryoku[VS_aite]=3;money-=100000;break;
			case 7://��������
			kuni_seiryoku[VS_aite]=3;break;}
		}
	}
	break;
	case 7://�S�u��
	VS_no=1;map=6;
	sentou_main();
	switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		syouri_bonus();
		eve_flag[26]=hiduke+3;break;}
	break;
	case 8://���m
	VS_no=3;map=6;
	sentou_main();
	switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		syouri_bonus();break;
		case 4://�S�Ŕs�k
		case 5://�ދp�s�k
		case 6://�c��s�k
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://��������
		kuni_seiryoku[VS_aite]=3;break;}
	break;
	case 9://���m
	VS_no=5;map=6;
	sentou_main();
	switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		syouri_bonus();break;
		case 4://�S�Ŕs�k
		case 5://�ދp�s�k
		case 6://�c��s�k
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://��������
		kuni_seiryoku[VS_aite]=3;break;}
	break;
	case 10://������
	VS_no=11;map=8;
	sentou_main();
	switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		syouri_bonus();break;}
	break;
	case 11://���R�Q�A��
	VS_no=20;map=5;
	sentou_main();
	switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		break;
		case 4://�S�Ŕs�k
		case 5://�ދp�s�k
		case 6://�c��s�k
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://��������
		kuni_seiryoku[VS_aite]=3;break;}
	if(VS_result<4){
		VS_no=17;
		gun_kazu[0]=gun_nokori[0]-1;
		sentou_main();
		switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		syouri_bonus();break;
		case 4://�S�Ŕs�k
		case 5://�ދp�s�k
		case 6://�c��s�k
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://��������
		kuni_seiryoku[VS_aite]=3;break;}
	}
	break;
	case 12://������
	VS_no=25;map=8;
	sentou_main();
	switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		syouri_bonus();break;}
	break;
	case 13://���m
	VS_no=31;map=1;
	sentou_main();
	switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		syouri_bonus();break;
		case 4://�S�Ŕs�k
		case 5://�ދp�s�k
		case 6://�c��s�k
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://��������
		kuni_seiryoku[VS_aite]=3;break;}
	break;
	case 14://�����Q�A��
	VS_no=13;map=5;
	sentou_main();
	switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		break;
		case 4://�S�Ŕs�k
		case 5://�ދp�s�k
		case 6://�c��s�k
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://��������
		kuni_seiryoku[VS_aite]=3;break;}
	if(VS_result<4){//�A��`�F�b�N
		VS_no=22;
		gun_kazu[0]=gun_nokori[0]-1;
		sentou_main();
		switch(VS_result){
			case 1://�S�ŏ���
			case 2://�ދp����
			case 3://�c�菟��
			syouri_bonus();break;
			case 4://�S�Ŕs�k
			case 5://�ދp�s�k
			case 6://�c��s�k
			kuni_seiryoku[VS_aite]=3;money-=100000;break;
			case 7://��������
			kuni_seiryoku[VS_aite]=3;break;}
	}
	break;
	case 15://���큚
	VS_no=24;map=2;
	sentou_main();
	switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		syouri_bonus();break;
		}
	break;
	case 16://�R��
	VS_no=9;map=6;
	sentou_main();
	switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		syouri_bonus();break;
		case 4://�S�Ŕs�k
		case 5://�ދp�s�k
		case 6://�c��s�k
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://��������
		kuni_seiryoku[VS_aite]=3;break;}
	break;
	case 17://�d��
	VS_no=14;map=5;
	sentou_main();
	switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		syouri_bonus();break;
		case 4://�S�Ŕs�k
		case 5://�ދp�s�k
		case 6://�c��s�k
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://��������
		kuni_seiryoku[VS_aite]=3;break;}
	break;
	case 18://�[��
	VS_no=36;map=6;
	if(kuni_type[18]==8)VS_no=37;
	sentou_main();
	switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		syouri_bonus();break;
		break;}
	break;
	case 19://���R�Q�A��
	VS_no=10;map=2;
	sentou_main();
	switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		break;
		case 4://�S�Ŕs�k
		case 5://�ދp�s�k
		case 6://�c��s�k
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://��������
		kuni_seiryoku[VS_aite]=3;break;}
	if(VS_result<4){
		VS_no=18;
		gun_kazu[0]=gun_nokori[0]-1;
		sentou_main();
		switch(VS_result){
			case 1://�S�ŏ���
			case 2://�ދp����
			case 3://�c�菟��
			syouri_bonus();break;
			case 4://�S�Ŕs�k
			case 5://�ދp�s�k
			case 6://�c��s�k
			kuni_seiryoku[VS_aite]=3;money-=100000;break;
			case 7://��������
			kuni_seiryoku[VS_aite]=3;break;}
	}
	break;
	case 20://���R�Q�A��
	VS_no=19;map=2;
	sentou_main();
	switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		break;
		case 4://�S�Ŕs�k
		case 5://�ދp�s�k
		case 6://�c��s�k
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://��������
		kuni_seiryoku[VS_aite]=3;break;}
	if(VS_result<4){
		VS_no=12;
		gun_kazu[0]=gun_nokori[0]-1;
		sentou_main();
		switch(VS_result){
			case 1://�S�ŏ���
			case 2://�ދp����
			case 3://�c�菟��
			syouri_bonus();break;
			case 4://�S�Ŕs�k
			case 5://�ދp�s�k
			case 6://�c��s�k
			kuni_seiryoku[VS_aite]=3;money-=100000;break;
			case 7://��������
			kuni_seiryoku[VS_aite]=3;break;}
	}
	break;
	case 21://���m
	VS_no=7;map=6;
	sentou_main();
	switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		syouri_bonus();break;
		case 4://�S�Ŕs�k
		case 5://�ދp�s�k
		case 6://�c��s�k
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://��������
		kuni_seiryoku[VS_aite]=3;break;}
	break;
	case 22://��m
	VS_no=6;map=1;
	sentou_main();
	switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		syouri_bonus();break;
		case 4://�S�Ŕs�k
		case 5://�ދp�s�k
		case 6://�c��s�k
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://��������
		kuni_seiryoku[VS_aite]=3;break;}
	break;
	case 23://���R�Q�A��
	VS_no=8;map=2;
	sentou_main();
	switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		break;
		case 4://�S�Ŕs�k
		case 5://�ދp�s�k
		case 6://�c��s�k
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://��������
		kuni_seiryoku[VS_aite]=3;break;}
	if(VS_result<4){
		VS_no=29;
		gun_kazu[0]=gun_nokori[0]-1;
		sentou_main();
		switch(VS_result){
			case 1://�S�ŏ���
			case 2://�ދp����
			case 3://�c�菟��
			syouri_bonus();break;
			case 4://�S�Ŕs�k
			case 5://�ދp�s�k
			case 6://�c��s�k
			kuni_seiryoku[VS_aite]=3;break;
			case 7://��������
			kuni_seiryoku[VS_aite]=3;break;}
	}
	break;
	case 24://�R��
	VS_no=15;map=5;
	sentou_main();
	switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		syouri_bonus();break;
		case 4://�S�Ŕs�k
		case 5://�ދp�s�k
		case 6://�c��s�k
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://��������
		kuni_seiryoku[VS_aite]=3;break;}
	break;
	case 25://������
	VS_no=34;map=10;
	sentou_main();
	switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		syouri_bonus();break;
		case 4://�S�Ŕs�k
		case 5://�ދp�s�k
		case 6://�c��s�k
		//���S�C�x���g
		break;
		case 7://��������
		break;}
	break;
	case 26://�i���Q�A��
	VS_no=26;map=3;
	sentou_main();
	switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		break;
		case 4://�S�Ŕs�k
		case 5://�ދp�s�k
		case 6://�c��s�k
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://��������
		kuni_seiryoku[VS_aite]=3;break;}
	if(VS_result<4){
		VS_no=27;
		gun_kazu[0]=gun_nokori[0]-1;
		sentou_main();
		switch(VS_result){
			case 1://�S�ŏ���
			case 2://�ދp����
			case 3://�c�菟��
			syouri_bonus();break;
			case 4://�S�Ŕs�k
			case 5://�ދp�s�k
			case 6://�c��s�k
			kuni_seiryoku[VS_aite]=3;money-=100000;break;
			case 7://��������
			kuni_seiryoku[VS_aite]=3;break;}
	}
	break;
	case 27://�C����
	VS_no=39;map=4;
	sentou_main();
	switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		syouri_bonus();break;}
	break;
	case 28://�E��
	VS_no=16;
	sentou_main();
	switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		syouri_bonus();break;
		case 4://�S�Ŕs�k
		case 5://�ދp�s�k
		case 6://�c��s�k
		kuni_seiryoku[VS_aite]=3;money-=100000;break;
		case 7://��������
		kuni_seiryoku[VS_aite]=3;break;}
	break;
	case 29://���C��
	VS_no=32;map=4;
	sentou_main();
	switch(VS_result){
		case 1://�S�ŏ���
		case 2://�ދp����
		case 3://�c�菟��
		syouri_bonus();break;}
	break;
	}
	hiduke++;//���Ԃ�i�߂�
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
	if(kuni_seiryoku[VS_aite]==4){//��������
		if(kokuryoku/250<=kuni_gundan[VS_aite]/250){
			kokuryoku+=60;
			minsyuu+=100;
		}else kokuryoku+=20;
		minsyuu+=100;
	}else{//�l�ԑ���
		if(kokuryoku/250<=kuni_gundan[VS_aite]/250){
			kokuryoku+=90;
			minsyuu+=50;
	}else kokuryoku+=30;
	minsyuu+=50;
	}
	if(kokuryoku>1000)kokuryoku=1000;
	if(kuni_seiryoku[VS_aite]!=4)money+=50000;//�������D��
	kuni_seiryoku[VS_aite]=1;//���͕ω�
	return 0;
}
int naisei_command(){
	mouse_left=2;
	mouse=1;
	while(1){
		GetMousePoint( &mou_x, &mou_y );
		if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//�}�E�X������
			if(mouse==0){
				PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
				break;
			}
		}else mouse=0;
		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
		if(mouse_left==0) mouse_left=1;
		}else mouse_left=0;

		DrawGraph( 0, 0, world_map, TRUE ) ;
		//�����R�}���h�̕\��
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		DrawBox( 60 , 54 , 280 , 410 ,ao , TRUE ) ;
		if(mou_x>60 && mou_x<280 && mou_y>58 && mou_y <410) DrawBox( 70 , 19+(mou_y-14)/44*44 , 270 , 53+(mou_y-14)/44*44 ,ao , TRUE ) ;
		jyouhou_kuni();
		DrawStringToHandle( 105 , 65      , "�w�`�Ґ�" ,kuro , f_a ) ;
		DrawStringToHandle( 104 , 64      , "�w�`�Ґ�" ,siro , f_a ) ;
		DrawStringToHandle( 105 , 65+44*1 , "��p����" ,kuro , f_a ) ;
		DrawStringToHandle( 104 , 64+44*1 , "��p����" ,siro , f_a ) ;
		DrawStringToHandle( 105 , 65+44*2 , "�ŋ�����" ,kuro , f_a ) ;
		DrawStringToHandle( 104 , 64+44*2 , "�ŋ�����" ,siro , f_a ) ;
		DrawStringToHandle( 105 , 65+44*3 , "�H�ƐU��" ,kuro , f_a ) ;
		DrawStringToHandle( 104 , 64+44*3 , "�H�ƐU��" ,siro , f_a ) ;
		DrawStringToHandle( 105 , 65+44*4 , "����J��" ,kuro , f_a ) ;
		DrawStringToHandle( 104 , 64+44*4 , "����J��" ,siro , f_a ) ;
		DrawStringToHandle( 105 , 65+44*5 , "�b���ٗp" ,kuro , f_a ) ;
		DrawStringToHandle( 104 , 64+44*5 , "�b���ٗp" ,siro , f_a ) ;
		DrawStringToHandle( 115 , 65+44*6 , "�Z�[�u" ,kuro , f_a ) ;
		DrawStringToHandle( 114 , 64+44*6 , "�Z�[�u" ,siro , f_a ) ;
		DrawStringToHandle( 115 , 65+44*7 , "���[�h" ,kuro , f_a ) ;
		DrawStringToHandle( 114 , 64+44*7 , "���[�h" ,siro , f_a ) ;
		if(mou_x>60 && mou_x<280 && mou_y>58 && mou_y <410){
			switch((mou_y-14)/44){
			case 1:
				DrawString( 315 , 65      , "�w�`�Ґ�" ,kuro ) ;
				DrawString( 314 , 64      , "�w�`�Ґ�" ,siro ) ;
				DrawString( 315 , 95      , "�w�`�Ɛ�p��Ґ����܂�" ,kuro ) ;
				DrawString( 314 , 94      , "�w�`�Ɛ�p��Ґ����܂�" ,siro ) ;
				DrawString( 315 , 125     , "" ,kuro ) ;
				DrawString( 314 , 124     , "" ,siro ) ;
				if(mouse_left==1){
					PlaySoundMem( se_no[16] , DX_PLAYTYPE_BACK ) ;
					mouse_left=2;
					naisei_butai();
				}
			break;
			case 2:
				DrawString( 315 , 65      , "��p����" ,kuro ) ;
				DrawString( 314 , 64      , "��p����" ,siro ) ;
				DrawString( 315 , 95      , "�V��p���������܂�" ,kuro ) ;
				DrawString( 314 , 94      , "�V��p���������܂�" ,siro ) ;
				DrawString( 315 , 125     , "" ,kuro ) ;
				DrawString( 314 , 124     , "" ,siro ) ;
				if(mouse_left==1){
					PlaySoundMem( se_no[16] , DX_PLAYTYPE_BACK ) ;
					mouse_left=2;
					naisei_senjyutu();
				}
				break;
			case 3:
				DrawString( 315 , 65      , "�ŋ�����" ,kuro ) ;
				DrawString( 314 , 64      , "�ŋ�����" ,siro ) ;
				DrawString( 315 , 95      , "���O����ŋ��𒥎����܂�" ,kuro ) ;
				DrawString( 314 , 94      , "���O����ŋ��𒥎����܂�" ,siro ) ;
				DrawString( 315 , 125     , "" ,kuro ) ;
				DrawString( 314 , 124     , "" ,siro ) ;
				if(mouse_left==1){
					PlaySoundMem( se_no[16] , DX_PLAYTYPE_BACK ) ;
					mouse_left=2;
					naisei_zeikin();
				}
				break;
			case 4:
				DrawString( 315 , 65      , "�H�ƐU��" ,kuro ) ;
				DrawString( 314 , 64      , "�H�ƐU��" ,siro ) ;
				DrawString( 315 , 95      , "�H�Ƃ�U���E������" ,kuro ) ;
				DrawString( 314 , 94      , "�H�Ƃ�U���E������" ,siro ) ;
				DrawString( 315 , 125     , "�Y�Ƃ𔭓W�����܂�" ,kuro ) ;
				DrawString( 314 , 124     , "�Y�Ƃ𔭓W�����܂�" ,siro ) ;
				if(mouse_left==1){
					PlaySoundMem( se_no[16] , DX_PLAYTYPE_BACK ) ;
					mouse_left=2;
					naisei_kougyou();
				}
				break;
			case 5:
				DrawString( 315 , 65      , "����J��" ,kuro ) ;
				DrawString( 314 , 64      , "����J��" ,siro ) ;
				DrawString( 315 , 95      , "�c�邪�g�p���鑕����" ,kuro ) ;
				DrawString( 314 , 94      , "�c�邪�g�p���鑕����" ,siro ) ;
				DrawString( 315 , 125     , "�������܂�" ,kuro ) ;
				DrawString( 314 , 124     , "�������܂�" ,siro ) ;
				if(mouse_left==1){
					PlaySoundMem( se_no[16] , DX_PLAYTYPE_BACK ) ;
					mouse_left=2;
					naisei_buki();
				}
				break;
			case 6:
				DrawString( 315 , 65      , "�b���ٗp" ,kuro ) ;
				DrawString( 314 , 64      , "�b���ٗp" ,siro ) ;
				DrawString( 315 , 95      , "�����𕥂��ėb��������" ,kuro ) ;
				DrawString( 314 , 94      , "�����𕥂��ėb��������" ,siro ) ;
				DrawString( 315 , 125     , "�킢�ɎQ�������܂�" ,kuro ) ;
				DrawString( 314 , 124     , "�킢�ɎQ�������܂�" ,siro ) ;
				if(mouse_left==1){
					PlaySoundMem( se_no[16] , DX_PLAYTYPE_BACK ) ;
					mouse_left=2;
					naisei_youhei();
				}
				break;
			case 7:
				DrawString( 315 , 65      , "�Z�[�u" ,kuro ) ;
				DrawString( 314 , 64      , "�Z�[�u" ,siro ) ;
				DrawString( 315 , 95      , "���̏�Ԃ��L�^���܂�" ,kuro ) ;
				DrawString( 314 , 94      , "���̏�Ԃ��L�^���܂�" ,siro ) ;
				DrawString( 315 , 125     , "" ,kuro ) ;
				DrawString( 314 , 124     , "" ,siro ) ;
				if(mouse_left==1){
					PlaySoundMem( se_no[16] , DX_PLAYTYPE_BACK ) ;
					mouse_left=2;
					naisei_save();
				}
				break;
			case 8:
				DrawString( 315 , 65      , "���[�h" ,kuro ) ;
				DrawString( 314 , 64      , "���[�h" ,siro ) ;
				DrawString( 315 , 95      , "�L�^��Ǎ��܂�" ,kuro ) ;
				DrawString( 314 , 94      , "�L�^��Ǎ��܂�" ,siro ) ;
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
		if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//�}�E�X������
			if(mouse==0){
				PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
				break;
			}
		}else mouse=0;
		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
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
		//�F���J�[�\���\��
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		if(mou_x>0 && mou_x<213){
			if(mou_y>35 && mou_y<65){DrawBox( 5 , 35 , 206 , 65 ,ao , TRUE ) ;hensei_no=0;}
			if(mou_y>80 && mou_y<350){DrawBox( 5 , 75+(mou_y-80)/30*30 , 206 , 105+(mou_y-80)/30*30 ,ao , TRUE ) ;hensei_no=1+(mou_y-80)/30;}
		}else if(mou_x>=213 && mou_x<426){
			if(mou_y>35 && mou_y<65){DrawBox( 218 , 35 , 419 , 65 ,ao , TRUE ) ;hensei_no=10;}
			if(mou_y>80 && mou_y<350){DrawBox( 218 , 75+(mou_y-80)/30*30 , 419 , 105+(mou_y-80)/30*30 ,ao , TRUE ) ;hensei_no=11+(mou_y-80)/30;}
		}
		SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;
		//���O���\��
		DrawString( 11 , 6 , "���Ґ�" , kuro );
		DrawString( 10 , 5 , "���Ґ�" , siro );
		DrawString( 11+213 , 6 , "���Ґ�" , kuro );
		DrawString( 10+213 , 5 , "���Ґ�" , siro );
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
		//�����\��
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
		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
	}
	mouse=1;
	return 0;
}
int naisei_senjyutu(){
	mouse=1;
	while(1){
		GetMousePoint( &mou_x, &mou_y );
		if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//�}�E�X������
			if(mouse==0){
				PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
				break;
			}
		}else mouse=0;
		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
		if(mouse_left==0) mouse_left=1;
		}else mouse_left=0;

		DrawGraph( 0, 0, world_map, TRUE ) ;
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		DrawBox( 2 , 2 , 638 , 348 ,ao , TRUE ) ;
		DrawBox( 2 , 352 , 638 , 478 ,ao , TRUE ) ;
		SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;

		//�F���J�[�\���\��
		A=mou_x/128*10;
		A+=(mou_y-30)/30;
		if(mou_y<=30 || mou_y>=330)A=99;
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		if(mou_y>30 && mou_y<330){
			DrawBox( A/10*128+5 , 25+A%10*30 , 123+A/10*128 , 55+A%10*30 ,ao , TRUE ) ;
		}
		SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;
		//���O���\��//51
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
		//�����\��
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

		DrawStringToHandle( 321 , 361 , "����",kuro , f_a) ;
		DrawStringToHandle( 320 , 360 , "����",siro , f_a) ;
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
			DrawStringToHandle( 466 , 361 , "��"  ,kuro , f_a) ;
			DrawStringToHandle( 465 , 360 , "��"  ,siro , f_a) ;
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
		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
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
		if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//�}�E�X������
			if(mouse==0){
				PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
				break;
			}
		}else mouse=0;
		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
		if(mouse_left==0) mouse_left=1;
		else mouse_left=2;
		}else mouse_left=0;
		DrawGraph( 0, 0, world_map, TRUE ) ;
		//�����R�}���h�̕\��
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		DrawBox( 60 , 54 , 280 , 410 ,GetColor(0,0,255) , TRUE ) ;
		if(mou_x>60 && mou_x<280 && mou_y>58+88 && mou_y <190+88) DrawBox( 70 , 19+(mou_y-14)/44*44 , 270 , 53+(mou_y-14)/44*44 ,GetColor(0,0,255) , TRUE ) ;
		jyouhou_kuni();
		DrawStringToHandle( 135 , 65+44*2 , "�y��" ,kuro , f_a ) ;
		DrawStringToHandle( 134 , 64+44*2 , "�y��" ,siro , f_a ) ;
		DrawStringToHandle( 135 , 65+44*3 , "����" ,kuro , f_a ) ;
		DrawStringToHandle( 134 , 64+44*3 , "����" ,siro , f_a ) ;
		DrawStringToHandle( 135 , 65+44*4 , "�d��" ,kuro , f_a ) ;
		DrawStringToHandle( 134 , 64+44*4 , "�d��" ,siro , f_a ) ;
		c=1000;
		if(minsyuu>1000)c+=1000;
		else c+=minsyuu;
		if(sangyou>1000)c+=2000;
		else c+=sangyou*2;
		if(mou_x>60 && mou_x<280 && mou_y>58+88 && mou_y <190+88){
			switch((mou_y-14)/44){
			case 3:
			DrawString( 315 , 65      , "�y����" ,kuro ) ;
			DrawString( 314 , 64      , "�y����" ,siro ) ;
			DrawString( 315 , 95      , "���ʂ̔����̐�" ,kuro ) ;
			DrawString( 314 , 94      , "���ʂ̔����̐�" ,siro ) ;
			DrawString( 315 , 125     , "���O�������������܂�" ,kuro ) ;
			DrawString( 314 , 124     , "���O�������������܂�" ,siro ) ;
			if(minsyuu<100){
				kane_hen=minsyuu*c/4;
				min_hen=-minsyuu;
			}else{
				kane_hen=100*c/4;
				min_hen-=100;
			}
			break;
			case 4:
			DrawString( 315 , 65      , "���ʐ�" ,kuro ) ;
			DrawString( 314 , 64      , "���ʐ�" ,siro ) ;
			DrawString( 315 , 95      , "���ʂ̐�" ,kuro ) ;
			DrawString( 314 , 94      , "���ʂ̐�" ,siro ) ;
			DrawString( 315 , 125     , "���O���������܂�" ,kuro ) ;
			DrawString( 314 , 124     , "���O���������܂�" ,siro ) ;
			if(minsyuu<200){
				kane_hen=minsyuu*c/4;
				min_hen=-minsyuu;
			}else{
				kane_hen=200*c/4;
				min_hen-=200;
			}
			break;
			case 5:
			DrawString( 315 , 65      , "�d����" ,kuro ) ;
			DrawString( 314 , 64      , "�d����" ,siro ) ;
			DrawString( 315 , 95      , "���ʂ̔{�̐�" ,kuro ) ;
			DrawString( 314 , 94      , "���ʂ̔{�̐�" ,siro ) ;
			DrawString( 315 , 125     , "���O���������������܂�" ,kuro ) ;
			DrawString( 314 , 124     , "���O���������������܂�" ,siro ) ;
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
		if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//�}�E�X������
			if(mouse==0){
				PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
				break;
			}
		}else mouse=0;
		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
		if(mouse_left==0) mouse_left=1;
		else  mouse_left=2;
		}else mouse_left=0;
		DrawGraph( 0, 0, world_map, TRUE ) ;
		//�����R�}���h�̕\��
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		DrawBox( 60 , 54 , 280 , 410 ,GetColor(0,0,255) , TRUE ) ;
		if(mou_x>60 && mou_x<280 && mou_y>58+88 && mou_y <190+88) DrawBox( 70 , 19+(mou_y-14)/44*44 , 270 , 53+(mou_y-14)/44*44 ,GetColor(0,0,255) , TRUE ) ;
		jyouhou_kuni();
		DrawStringToHandle( 135 , 65+44*2 , "���z" ,kuro , f_a ) ;
		DrawStringToHandle( 134 , 64+44*2 , "���z" ,siro , f_a ) ;
		DrawStringToHandle( 135 , 65+44*3 , "����" ,kuro , f_a ) ;
		DrawStringToHandle( 134 , 64+44*3 , "����" ,siro , f_a ) ;
		DrawStringToHandle( 135 , 65+44*4 , "���z" ,kuro , f_a ) ;
		DrawStringToHandle( 134 , 64+44*4 , "���z" ,siro , f_a ) ;
		if(mou_x>60 && mou_x<280 && mou_y>58+88 && mou_y <190+88){
			switch((mou_y-14)/44){
			case 3:
			DrawString( 315 , 65      , "���z����" ,kuro ) ;
			DrawString( 314 , 64      , "���z����" ,siro ) ;
			DrawString( 315 , 95      , "���ʂ̔�������" ,kuro ) ;
			DrawString( 314 , 94      , "���ʂ̔�������" ,siro ) ;
			DrawString( 315 , 125     , "�Y�Ƃ��������W���܂�" ,kuro ) ;
			DrawString( 314 , 124     , "�Y�Ƃ��������W���܂�" ,siro ) ;
			if(money>=50000+sangyou*50 && sangyou<1000){
				kane_hen=-50000-sangyou*50;
				san_hen=50;
			}
			break;
			case 4:
			DrawString( 315 , 65      , "���ʏ���" ,kuro ) ;
			DrawString( 314 , 64      , "���ʏ���" ,siro ) ;
			DrawString( 315 , 95      , "���ʂ̉���" ,kuro ) ;
			DrawString( 314 , 94      , "���ʂ̉���" ,siro ) ;
			DrawString( 315 , 125     , "�Y�Ƃ����W���܂�" ,kuro ) ;
			DrawString( 314 , 124     , "�Y�Ƃ����W���܂�" ,siro ) ;
			if(money>=100000+sangyou*100 && sangyou<1000){
				kane_hen=-100000-sangyou*100;
				san_hen=100;
			}
			break;
			case 5:
			DrawString( 315 , 65      , "���z����" ,kuro ) ;
			DrawString( 314 , 64      , "���z����" ,siro ) ;
			DrawString( 315 , 95      , "���ʂ̔{����" ,kuro ) ;
			DrawString( 314 , 94      , "���ʂ̔{����" ,siro ) ;
			DrawString( 315 , 125     , "�Y�Ƃ����������W���܂�" ,kuro ) ;
			DrawString( 314 , 124     , "�Y�Ƃ����������W���܂�" ,siro ) ;
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
		if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//�}�E�X�E����
			if(mouse==0){
			PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
			break;
			}
		}else mouse=0;



		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
		if(mouse_left==0) mouse_left=1;
		else mouse_left=2;
		}else mouse_left=0;
		DrawGraph( 0, 0, world_map, TRUE ) ;
		//�����R�}���h�̕\��
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		DrawBox( 60 , 54 , 280 , 410 ,GetColor(0,0,255) , TRUE ) ;
		if(mou_x>60 && mou_x<280 && mou_y>58+88 && mou_y <190+44) DrawBox( 70 , 19+(mou_y-14)/44*44 , 270 , 53+(mou_y-14)/44*44 ,ao , TRUE ) ;
		jyouhou_kuni();
		DrawStringToHandle( 105 , 65+44*2 , "���틭��" ,kuro , f_a ) ;
		DrawStringToHandle( 104 , 64+44*2 , "���틭��" ,siro , f_a ) ;
		DrawStringToHandle( 105 , 65+44*3 , "�h���" ,kuro , f_a ) ;
		DrawStringToHandle( 104 , 64+44*3 , "�h���" ,siro , f_a ) ;
		if(mou_x>60 && mou_x<280 && mou_y>58 && mou_y <410){
			//mouse_left=1;
			switch((mou_y-14)/44){//�|�S�A���H�A����A���ҁA���؁A�k�l
			case 3:
				if(get_item[0]==0){
				DrawString( 315 , 65      , "�|�S�̌������H�̌�" ,kuro ) ;
				DrawString( 314 , 64      , "�|�S�̌������H�̌�" ,siro ) ;
				DrawString( 315 , 95      , "������������܂�" ,kuro ) ;
				DrawString( 314 , 94      , "������������܂�" ,siro ) ;
				if(sangyou<250){
					DrawString( 315 , 125      , "�Y�Ƃ�����܂���" ,kuro ) ;
					DrawString( 314 , 124      , "�Y�Ƃ�����܂���" ,siro ) ;
				}else kane_hen=-10000;
				}else if(get_item[0]==1){
				DrawString( 315 , 65      , "���H�̌������̌�" ,kuro ) ;
				DrawString( 314 , 64      , "���H�̌������̌�" ,siro ) ;
				DrawString( 315 , 95      , "������������܂�" ,kuro ) ;
				DrawString( 314 , 94      , "������������܂�" ,siro ) ;
				if(sangyou<500){
					DrawString( 315 , 125      , "�Y�Ƃ�����܂���" ,kuro ) ;
					DrawString( 314 , 124      , "�Y�Ƃ�����܂���" ,siro ) ;
				}else kane_hen=-10000;
				}else if(get_item[0]==2){
				DrawString( 315 , 65      , "���̌��������̓�" ,kuro ) ;
				DrawString( 314 , 64      , "���̌��������̓�" ,siro ) ;
				DrawString( 315 , 95      , "������������܂�" ,kuro ) ;
				DrawString( 314 , 94      , "������������܂�" ,siro ) ;
				if(sangyou<750){
					DrawString( 315 , 125      , "�Y�Ƃ�����܂���" ,kuro ) ;
					DrawString( 314 , 124      , "�Y�Ƃ�����܂���" ,siro ) ;
				}else kane_hen=-10000;
				}else if(get_item[0]==3){
				DrawString( 315 , 65      , "�����̓������؂̌�" ,kuro ) ;
				DrawString( 314 , 64      , "�����̓������؂̌�" ,siro ) ;
				DrawString( 315 , 95      , "������������܂�" ,kuro ) ;
				DrawString( 314 , 94      , "������������܂�" ,siro ) ;
				kane_hen=-20000;
				if(sangyou<1000){
				DrawString( 315 , 125      , "�Y�Ƃ�����܂���" ,kuro ) ;
				DrawString( 314 , 124      , "�Y�Ƃ�����܂���" ,siro ) ;
				kane_hen=0;
				}else if(get_item[2]>0){
				DrawString( 315 , 125     , "���؂��P�K�v�ł�" ,kuro ) ;
				DrawString( 314 , 124     , "���؂��P�K�v�ł�" ,siro ) ;
				}else{
				DrawString( 315 , 125     , "���؂�����܂���" ,kuro ) ;
				DrawString( 314 , 124     , "���؂�����܂���" ,siro ) ;
				kane_hen=0;
				}
				}else if(get_item[0]==4){
				DrawString( 315 , 65      , "���؂̌�" ,kuro ) ;
				DrawString( 314 , 64      , "���؂̌�" ,siro ) ;
				DrawString( 315 , 95      , "�����o���܂���" ,kuro ) ;
				DrawString( 314 , 94      , "�����o���܂���" ,siro ) ;
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
				DrawString( 315 , 65      , "�|�S�̊Z�����H�̊Z" ,kuro ) ;
				DrawString( 314 , 64      , "�|�S�̊Z�����H�̊Z" ,siro ) ;
				DrawString( 315 , 95      , "������������܂�" ,kuro ) ;
				DrawString( 314 , 94      , "������������܂�" ,siro ) ;
				if(sangyou<250){
					DrawString( 315 , 125      , "�Y�Ƃ�����܂���" ,kuro ) ;
					DrawString( 314 , 124      , "�Y�Ƃ�����܂���" ,siro ) ;
				}else kane_hen=-10000;
				}else if(get_item[1]==1){
				DrawString( 315 , 65      , "���H�̊Z�����̊Z" ,kuro ) ;
				DrawString( 314 , 64      , "���H�̊Z�����̊Z" ,siro ) ;
				DrawString( 315 , 95      , "������������܂�" ,kuro ) ;
				DrawString( 314 , 94      , "������������܂�" ,siro ) ;
				if(sangyou<500){
					DrawString( 315 , 125      , "�Y�Ƃ�����܂���" ,kuro ) ;
					DrawString( 314 , 124      , "�Y�Ƃ�����܂���" ,siro ) ;
				}else kane_hen=-10000;
				}else if(get_item[1]==2){
				DrawString( 315 , 65      , "���̊Z�������̊Z" ,kuro ) ;
				DrawString( 314 , 64      , "���̊Z�������̊Z" ,siro ) ;
				DrawString( 315 , 95      , "������������܂�" ,kuro ) ;
				DrawString( 314 , 94      , "������������܂�" ,siro ) ;
				if(sangyou<750){
					DrawString( 315 , 125      , "�Y�Ƃ�����܂���" ,kuro ) ;
					DrawString( 314 , 124      , "�Y�Ƃ�����܂���" ,siro ) ;
				}else kane_hen=-10000;
				}else if(get_item[1]==3){
				DrawString( 315 , 65      , "�����̊Z�����؂̊Z" ,kuro ) ;
				DrawString( 314 , 64      , "�����̊Z�����؂̊Z" ,siro ) ;
				DrawString( 315 , 95      , "������������܂�" ,kuro ) ;
				DrawString( 314 , 94      , "������������܂�" ,siro ) ;
				kane_hen=-20000;
				if(sangyou<1000){
				DrawString( 315 , 125      , "�Y�Ƃ�����܂���" ,kuro ) ;
				DrawString( 314 , 124      , "�Y�Ƃ�����܂���" ,siro ) ;
				kane_hen=0;
				}else if(get_item[2]>0){
				DrawString( 315 , 125     , "���؂��P�K�v�ł�" ,kuro ) ;
				DrawString( 314 , 124     , "���؂��P�K�v�ł�" ,siro ) ;
				}else{
				DrawString( 315 , 125     , "���؂�����܂���" ,kuro ) ;
				DrawString( 314 , 124     , "���؂�����܂���" ,siro ) ;
				kane_hen=0;
				}
				}else if(get_item[1]==4){
				DrawString( 315 , 65      , "���؂̊Z" ,kuro ) ;
				DrawString( 314 , 64      , "���؂̊Z" ,siro ) ;
				DrawString( 315 , 95      , "�����o���܂���" ,kuro ) ;
				DrawString( 314 , 94      , "�����o���܂���" ,siro ) ;
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
		if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//�}�E�X������
			if(mouse==0){
				PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
				break;
			}
		}else mouse=0;
		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
		if(mouse_left==0) mouse_left=1;
		}else mouse_left=0;

		DrawGraph( 0, 0, world_map, TRUE ) ;
		//�����R�}���h�̕\��
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		DrawBox( 60 , 54 , 280 , 410 ,GetColor(0,0,255) , TRUE ) ;
		if(mou_x>60 && mou_x<280 && mou_y>58+88 && mou_y <190+44) DrawBox( 70 , 19+(mou_y-14)/44*44 , 270 , 53+(mou_y-14)/44*44 ,GetColor(0,0,255) , TRUE ) ;
		jyouhou_kuni();
		DrawStringToHandle( 105 , 65+44*2 , "��m�ٗp" ,kuro , f_a ) ;
		DrawStringToHandle( 104 , 64+44*2 , "��m�ٗp" ,siro , f_a ) ;
		DrawStringToHandle( 105 , 65+44*3 , "�E�Ҍٗp" ,kuro , f_a ) ;
		DrawStringToHandle( 104 , 64+44*3 , "�E�Ҍٗp" ,siro , f_a ) ;
		if(mou_x>60 && mou_x<280 && mou_y>58+88 && mou_y <190+44){
			switch((mou_y-14)/44){
			case 3:
			if(youhei_lv[0]==0){
				DrawString( 315 , 65      , "��m�ٗp" ,kuro ) ;
				DrawString( 314 , 64      , "��m�ٗp" ,siro ) ;
				DrawString( 315 , 95      , "��m���\�����ق��܂�" ,kuro ) ;
				DrawString( 314 , 94      , "��m���\�����ق��܂�" ,siro ) ;
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
				DrawString( 315 , 65      , "��m�ٗp" ,kuro ) ;
				DrawString( 314 , 64      , "��m�ٗp" ,siro ) ;
				DrawString( 315 , 95      , "�ٗp�ς�" ,kuro ) ;
				DrawString( 314 , 94      , "�ٗp�ς�" ,siro ) ;
					if(mouse_left==1){
					mouse_left=2;
					PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
					return 0;
					}
				}
				break;
			case 4:
			if(sinobi_lv[0]==0){
				DrawString( 315 , 65      , "�E�Ҍٗp" ,kuro ) ;
				DrawString( 314 , 64      , "�E�Ҍٗp" ,siro ) ;
				DrawString( 315 , 95      , "�E�҂��\�����ق��܂�" ,kuro ) ;
				DrawString( 314 , 94      , "�E�҂��\�����ق��܂�" ,siro ) ;
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
				DrawString( 315 , 65      , "�E�Ҍٗp" ,kuro ) ;
				DrawString( 314 , 64      , "�E�Ҍٗp" ,siro ) ;
				DrawString( 315 , 95      , "�ٗp�ς�" ,kuro ) ;
				DrawString( 314 , 94      , "�ٗp�ς�" ,siro ) ;
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
		if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//�}�E�X������
			if(mouse==0){
				PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
				break;
			}
		}else mouse=0;
		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
		if(mouse_left==0) mouse_left=1;
		}else mouse_left=0;

		DrawGraph( 0, 0, world_map, TRUE ) ;
		//�����R�}���h�̕\��
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
		DrawStringToHandle( 121 , 131+i*120 ,"���܂����[�h", kuro , f_a) ;
		DrawStringToHandle( 120 , 130+i*120 ,"���܂����[�h", siro , f_a) ;
		}else if(save_syuu[i]%100==0){
		DrawStringToHandle( 121 , 131+i*120 ,"�N���A�f�[�^", kuro , f_a) ;
		DrawStringToHandle( 120 , 130+i*120 ,"�N���A�f�[�^", siro , f_a) ;
		}else if(save_syuu[i]%2==1){
		DrawFormatStringToHandle( 121 , 131+i*120 , kuro , f_a,"%d���O��" ,((save_syuu[i]-1)/2)%12+1) ;
		DrawFormatStringToHandle( 120 , 130+i*120 , siro , f_a,"%d���O��" ,((save_syuu[i]-1)/2)%12+1) ;
		}else{
		DrawFormatStringToHandle( 121 , 131+i*120 , kuro , f_a,"%d�����" ,((save_syuu[i]-1)/2)%12+1) ;
		DrawFormatStringToHandle( 120 , 130+i*120 , siro , f_a,"%d�����" ,((save_syuu[i]-1)/2)%12+1) ;
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
		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		if(mou_x>60 && mou_x<580 && mou_y>54 && mou_y <410 && mouse_left==1){
			mouse_left=2;
			A=(mou_y-54)/120;
			strcpy_s(save_name[A],hero_name);//�Z�[�u�f�[�^�̃��x��
			save_syuu[A]=hiduke;//�Z�[�u�f�[�^�̏T
			play_time+=GetNowCount()-time_count;
			time_count=GetNowCount();//���Ԍo�ߌv�Z�p
			save_time[A]=play_time;//�Z�[�u�f�[�^�̃v���C����
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
		if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//�}�E�X������
			if(mouse==0){
				PlaySoundMem( se_no[4] , DX_PLAYTYPE_BACK ) ;
				break;
			}
		}else mouse=0;
		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
		if(mouse_left==0) mouse_left=1;
		}else mouse_left=0;

		DrawGraph( 0, 0, world_map, TRUE ) ;
		//�����R�}���h�̕\��
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
		DrawStringToHandle( 121 , 131+i*120 ,"���܂����[�h", kuro , f_a) ;
		DrawStringToHandle( 120 , 130+i*120 ,"���܂����[�h", siro , f_a) ;
		}else if(save_syuu[i]>24){
		DrawStringToHandle( 121 , 131+i*120 ,"�N���A�f�[�^", kuro , f_a) ;
		DrawStringToHandle( 120 , 130+i*120 ,"�N���A�f�[�^", siro , f_a) ;
		}else if(save_syuu[i]%2==1){
		DrawFormatStringToHandle( 121 , 131+i*120 , kuro , f_a,"%d���O��" ,((save_syuu[i]-1)/2)%12+1) ;
		DrawFormatStringToHandle( 120 , 130+i*120 , siro , f_a,"%d���O��" ,((save_syuu[i]-1)/2)%12+1) ;
		}else{
		DrawFormatStringToHandle( 121 , 131+i*120 , kuro , f_a,"%d�����" ,((save_syuu[i]-1)/2)%12+1) ;
		DrawFormatStringToHandle( 120 , 130+i*120 , siro , f_a,"%d�����" ,((save_syuu[i]-1)/2)%12+1) ;
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
		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		if(mou_x>60 && mou_x<580 && mou_y>54 && mou_y <410 && mouse_left==1){
			mouse_left=2;
			A=(mou_y-54)/120;
			time_count=GetNowCount();//���Ԍo�ߌv�Z�p
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
		if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//�}�E�X������
		if(mouse==0) break;
		}else mouse=0;
		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
		if(mouse_left==0) mouse_left=1;
		}else mouse_left=0;
		DrawGraph( 0, 0, world_map, TRUE ) ;
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		DrawBox( 2 , 2 , 424 , 348 ,ao , TRUE ) ;
		DrawBox( 428 , 2 , 638 , 348 ,ao , TRUE ) ;
		DrawBox( 2 , 352 , 638 , 478 ,ao , TRUE ) ;
		SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;
		//�F���J�[�\���\��
		A=mou_x/213*10;
		A+=(mou_y-30)/30;
		if(mou_y<=30 || mou_y>=330)A=99;
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		if(mou_y>30 && mou_y<330 && A<20){
			DrawBox( A/10*213+5 , 25+A%10*30 , 206+A/10*213 , 55+A%10*30 ,ao , TRUE ) ;
		}
		SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;
		//���O���\��//51
		for(i=0;i<20;i++){
			xa=30+i/10*213;
			ya=30+i%10*30;
			MSN=i+1;
			if(get_jinkei[i]==0){MSN=0;siro=GetColor(125,125,125);}
			jinkei_name();
			siro=GetColor(255,255,255);
		}
		//�����\��
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
		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
	}
	mouse=1;
	return 0;
}
int hyouhou_select(){

	mouse=1;
	while(1){
		GetMousePoint( &mou_x, &mou_y );
		if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//�}�E�X������
		if(mouse==0) break;
		}else mouse=0;
		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
		if(mouse_left==0) mouse_left=1;
		}else mouse_left=0;
		DrawGraph( 0, 0, world_map, TRUE ) ;
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		DrawBox( 2 , 2 , 638 , 348 ,ao , TRUE ) ;
		DrawBox( 2 , 352 , 638 , 478 ,ao , TRUE ) ;
		SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;
		//�F���J�[�\���\��
		A=mou_x/128*10;
		A+=(mou_y-30)/30;
		if(mou_y<=30 || mou_y>=330)A=99;
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
		if(mou_y>30 && mou_y<330){
			DrawBox( A/10*128+5 , 25+A%10*30 , 123+A/10*128 , 55+A%10*30 ,ao , TRUE ) ;
		}
		SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;
		//���O���\��//51
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
		//�����\��
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
		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
	}
	mouse=1;
	return 0;
}
int jinkei_name(){
		switch (MSN){
		case 0:strcpy_s(serihu, "�\�\�\�\�\");break;
		case 1:strcpy_s(serihu, "�c��w�`");break;
		case 2:strcpy_s(serihu, "�h�ǂ̔g�w");break;
		case 3:strcpy_s(serihu, "�U���̔g�w");break;
		case 4:strcpy_s(serihu, "�㗃�˔j�̐w");break;
		case 5:strcpy_s(serihu, "�����˔j�̐w");break;
		case 6:strcpy_s(serihu, "�����˔j�̐w");break;
		case 7:strcpy_s(serihu, "�O�g��w");break;
		case 8:strcpy_s(serihu, "�����w");break;
		case 9:strcpy_s(serihu, "�w���̐w");break;
		case 10:strcpy_s(serihu, "�����w");break;
		case 11:strcpy_s(serihu, "�g�󏂂̐w");break;
		case 12:strcpy_s(serihu, "�Ռ��w");break;
		case 13:strcpy_s(serihu, "���C����");break;
		case 14:strcpy_s(serihu, "�\���w");break;
		case 15:strcpy_s(serihu, "���w");break;
		case 16:strcpy_s(serihu, "�O�_�˔j�̐w");break;
		case 17:strcpy_s(serihu, "����w�`");break;
		case 18:strcpy_s(serihu, "���؂̐w");break;
		case 19:strcpy_s(serihu, "���Q�̐w");break;
		case 20:strcpy_s(serihu, "�V�̗�");break;
		case 21:strcpy_s(serihu, "���̗�");break;
		}
		DrawString( xa+1 , ya+1 , serihu , kuro );
		DrawString( xa   , ya   , serihu , siro );
	return 0;
}
int hyouhou_name(){
		B=0;
		switch (MSN){
		case 0:strcpy_s(serihu, "�\�\�\�\�\");break;
		case 1:strcpy_s(serihu, "�S�R�O�i");break;
		case 2:strcpy_s(serihu, "�S�R���");break;
		case 3:strcpy_s(serihu, "�S�R�h��");break;
		case 4:strcpy_s(serihu, "�S�R�ˌ�");B=1;break;
		case 5:strcpy_s(serihu, "�S�R�ދp");break;
		case 6:strcpy_s(serihu, "�O��O�i");break;
		case 7:strcpy_s(serihu, "���O�i");break;
		case 8:strcpy_s(serihu, "���U�O�i");B=4;break;
		case 9:strcpy_s(serihu, "�����O�i");B=4;break;
		case 10:strcpy_s(serihu, "��ލU��");B=3;break;
		case 11:strcpy_s(serihu, "�㗃�U��");B=4;break;
		case 12:strcpy_s(serihu, "�����U��");B=4;break;
		case 13:strcpy_s(serihu, "�O��ˌ�");B=1;break;
		case 14:strcpy_s(serihu, "���ˌ�");B=1;break;
		case 15:strcpy_s(serihu, "�㗃�ˌ�");B=1;break;
		case 16:strcpy_s(serihu, "�����ˌ�");B=1;break;
		case 17:strcpy_s(serihu, "�O��h��");break;
		case 18:strcpy_s(serihu, "�S�R�h�䥋�");B=1;break;
		case 19:strcpy_s(serihu, "��ޖh��");B=3;break;
		case 20:strcpy_s(serihu, "���U���");B=3;break;
		case 21:strcpy_s(serihu, "�O����");break;
		case 22:strcpy_s(serihu, "�����p�P");break;
		case 23:strcpy_s(serihu, "�����p�Q");break;
		case 24:strcpy_s(serihu, "���U���");B=3;break;
		case 25:strcpy_s(serihu, "�����񕜥��");B=3;break;
		case 26:strcpy_s(serihu, "�������p");break;



		case 27:strcpy_s(serihu, "�w�`��");B=3;break;
		case 28:strcpy_s(serihu, "���w�`�񕜗p");break;
		case 29:strcpy_s(serihu, "�O�񎀎�");B=2;break;
		case 30:strcpy_s(serihu, "�����񕜥��");B=1;break;
		case 31:strcpy_s(serihu, "�w�`�񕜥��");B=2;break;
		case 32:strcpy_s(serihu, "���񂾃t��");B=1;break;
		case 33:strcpy_s(serihu, "�����Ƀt���p");break;
		case 34:strcpy_s(serihu, "�J����");B=1;break;
		case 35:strcpy_s(serihu, "�~���R");B=1;break;
		case 36:strcpy_s(serihu, "���f���");B=1;break;
		case 37:strcpy_s(serihu, "���Ε���");B=1;break;
		case 38:strcpy_s(serihu, "�����Ηp");break;
		case 39:strcpy_s(serihu, "�w�����ˌ�");B=1;break;
		case 40:strcpy_s(serihu, "��������");B=1;break;
		case 41:strcpy_s(serihu, "�΍U��");B=1;break;
		case 42:strcpy_s(serihu, "���Ƃ���");B=1;break;
		case 43:strcpy_s(serihu, "�U��̑ދp");B=1;break;
		case 44:strcpy_s(serihu, "��񑀍�L1");B=1;break;
		case 45:strcpy_s(serihu, "��񑀍�L2");B=1;break;
		case 46:strcpy_s(serihu, "��񑀍�L3");B=1;break;
		case 47:strcpy_s(serihu, "��񑀍�L4");B=1;break;
		case 48:strcpy_s(serihu, "��񑀍�L5");B=1;break;
		case 49:strcpy_s(serihu, "���@����");B=1;break;
		case 50:strcpy_s(serihu, "�h����");B=1;break;
		case 51:strcpy_s(serihu, "���ۍ��");B=1;break;
		case 52:strcpy_s(serihu, "�w�΂̌v");B=1;break;



		case 53:strcpy_s(serihu, "���΍U����");B=1;break;
		case 54:strcpy_s(serihu, "���΍U����");B=1;break;
		case 55:strcpy_s(serihu, "���U�ދp");B=4;break;
		case 56:strcpy_s(serihu, "�S�R�O�i���");B=1;break;
		case 57:strcpy_s(serihu, "�S�R�x��");B=4;break;
		case 58:strcpy_s(serihu, "���̕�");B=1;break;
		case 59:strcpy_s(serihu, "�n������");B=1;break;
		case 60:strcpy_s(serihu, "�ײ�̨��ް");B=1;break;
		case 61:strcpy_s(serihu, "�M����ҒB");B=2;break;
		case 62:strcpy_s(serihu, "������");B=1;break;
		case 63:strcpy_s(serihu, "�i���N�̕�");B=1;break;
		case 64:strcpy_s(serihu, "��M�g");B=2;break;
		case 65:strcpy_s(serihu, "�傠�܂���");B=2;break;
		case 66:strcpy_s(serihu, "�������f���^");B=2;break;
		case 67:strcpy_s(serihu, "��n�k");B=2;break;
		}
		DrawString( xa+1 , ya+1 , serihu , kuro );
		DrawString( xa   , ya   , serihu , siro );
	return 0;
}
int jinkei_setumei(){
		switch (MSN){
		case 0:
		strcpy_s(serihu, "�\�\�\�\�\�\");
		strcpy_s(setu_1, "");
		strcpy_s(setu_2, "");break;
		case 1:
		strcpy_s(serihu, "�c��w�`");
		strcpy_s(setu_1, "��͂����ɕ��ׂ���{�I�Ȑw�`�B");
		strcpy_s(setu_2, "�S�R�F���񒣂�{");break;
		case 2:
		strcpy_s(serihu, "�h�ǂ̔g�w");
		strcpy_s(setu_1, "�O�񂪕ǂƂȂ�A�����������܂��B");
		strcpy_s(setu_2, "�O��F�h��́{");break;
		case 3:
		strcpy_s(serihu, "�U���̔g�w");
		strcpy_s(setu_1, "�O�񂪍U�����A�����������܂��B");
		strcpy_s(setu_2, "�O��F�U���́{");break;
		case 4:
		strcpy_s(serihu, "�㗃�˔j�̐w");
		strcpy_s(setu_1, "�������㗃�ɏW�����˔j��_���܂��B");
		strcpy_s(setu_2, "���F���񒣂�{");break;
		case 5:
		strcpy_s(serihu, "�����˔j�̐w");
		strcpy_s(setu_1, "�����������ɏW�����˔j��_���܂��B");
		strcpy_s(setu_2, "���F���񒣂�{");break;
		case 6:
		strcpy_s(serihu, "�����˔j�̐w");
		strcpy_s(setu_1, "�����𒆉��ɏW�����˔j��_���܂��B");
		strcpy_s(setu_2, "�O��F���񒣂�{");break;
		case 7:
		strcpy_s(serihu, "�O�g��w");
		strcpy_s(setu_1, "�������O��ɔz�u���܂��B");
		strcpy_s(setu_2, "�őO��F�h��́{�@���O��F�U���́{�@���F�ړ��́{");break;
		case 8:
		strcpy_s(serihu, "�����w");
		strcpy_s(setu_1, "�@�������d�������w�`�ł��B");
		strcpy_s(setu_2, "�S�R�F�ړ��́{");break;
		case 9:
		strcpy_s(serihu, "�w���̐w");
		strcpy_s(setu_1, "���̎����M���M���ɕ�����z�u���܂��B");
		strcpy_s(setu_2, "�S�R�F�U���́{�{�@�ړ��́|�|");break;
		case 10:
		strcpy_s(serihu, "�����w");
		strcpy_s(setu_1, "�U���͂����߂��肶��Ɛi�݂܂��B");
		strcpy_s(setu_2, "�S�R�F�U���́{�@�ړ��́|");break;
		case 11:
		strcpy_s(serihu, "�g�󏂂̐w");
		strcpy_s(setu_1, "�Ō��̎w�������O�w�̕ǂŎ��܂��B");
		strcpy_s(setu_2, "�O��F�h��́{�@�w�����F�h��́{�{");break;
		case 12:
		strcpy_s(serihu, "�Ռ��w");
		strcpy_s(setu_1, "������ɍl�����w�`�ł��B");
		strcpy_s(setu_2, "�S�R�F�h��́{�@�ړ��́|");break;
		case 13:
		strcpy_s(serihu, "���C����");
		strcpy_s(setu_1, "�w���������C���̗͂𓾂܂��B");
		strcpy_s(setu_2, "�w�����F�S�\�́{�{");break;
		case 14:
		strcpy_s(serihu, "�\���w");
		strcpy_s(setu_1, "�\���ɌR�c��z�u���܂��B");
		strcpy_s(setu_2, "�S�R�F�����́{");break;
		case 15:
		strcpy_s(serihu, "���w");
		strcpy_s(setu_1, "�S��������̍U���ɂ��Ȃ��܂��B");
		strcpy_s(setu_2, "�S�R�F�̗́{");break;
		case 16:
		strcpy_s(serihu, "�O�_�˔j�̐w");
		strcpy_s(setu_1, "�O�ӏ��ɕ������W�����˔j��_���܂��B");
		strcpy_s(setu_2, "���F���񒣂�{");break;
		case 17:
		strcpy_s(serihu, "����w�`");
		strcpy_s(setu_1, "��͂����ɕ��ׂ��A�ϑ��I�Ȑw�`�B");
		strcpy_s(setu_2, "�S�R�F���񒣂�{");break;
		case 18:
		strcpy_s(serihu, "���؂̐w");
		strcpy_s(setu_1, "���̗l�Ȍ`�ɕ�����z�u���܂��B");
		strcpy_s(setu_2, "�S�R�F�J�ɋ����Ȃ�");break;
		case 19:
		strcpy_s(serihu, "���Q�̐w");
		strcpy_s(setu_1, "�Q���܂����悤�Ȑw�`�B");
		strcpy_s(setu_2, "�S�R�F�h��́{�@���񒣂�{�@�ړ��́{");break;
		case 20:
		strcpy_s(serihu, "�V�̗�");
		strcpy_s(setu_1, "�ŋ��̐w�`�B");
		strcpy_s(setu_2, "�S�R�F�h��́{�{�@�ړ��́{");break;
		case 21:
		strcpy_s(serihu, "���̗�");
		strcpy_s(setu_1, "�d�l�ł��B");
		strcpy_s(setu_2, "�S�R�F�U���́{�@���񒣂�{");break;
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
		strcpy_s(serihu, "�\�\�\�\�\�\");
		strcpy_s(setu_1, "");
		strcpy_s(setu_2, "");break;
		case 1:
		strcpy_s(serihu, "�S�R�O�i");
		strcpy_s(setu_1, "�O�i���čU�����܂��B");
		strcpy_s(setu_2, "�S�R�F��U���^�������ቺ��");break;
		case 2:
		strcpy_s(serihu, "�S�R���");
		strcpy_s(setu_1, "��ނ��ă��������񕜂���B");
		strcpy_s(setu_2, "�S�R�F���h���^�������񕜑�");
		break;
		case 3:
		strcpy_s(serihu, "�S�R�h��");
		strcpy_s(setu_1, "�������~�߂Ėh�䂵�܂��B");
		strcpy_s(setu_2, "�S�R�F��h��^�������ቺ��");break;
		case 4:
		strcpy_s(serihu, "�S�R�ˌ�");
		strcpy_s(setu_1, "���������񕜂��ēˌ��A�G�R�̃����������������܂��B");
		strcpy_s(setu_2, "�S�R�F���ˌ��^�������ቺ��");break;
		case 5:
		strcpy_s(serihu, "�S�R�ދp");
		strcpy_s(setu_1, "��ꂩ��ދp���A�퓬���I�������܂��B");
		strcpy_s(setu_2, "�S�R�F�ދp");break;
		case 6:
		strcpy_s(serihu, "�O��O�i");
		strcpy_s(setu_1, "�O�񕔑����O�i���܂��B");
		strcpy_s(setu_2, "�O��F���U���^�������ቺ���@���F��h��^�������ቺ��");break;
		case 7:
		strcpy_s(serihu, "���O�i");
		strcpy_s(setu_1, "��񕔑����O�i���܂��B");
		strcpy_s(setu_2, "�O��F��h��^�������ቺ���@���F���U���^�������ቺ��");break;
		case 8:
		strcpy_s(serihu, "���U�O�i");
		strcpy_s(setu_1, "�f�����O�i���܂��B");
		strcpy_s(setu_2, "�O��F���U���^�������ቺ���@���F���h���^�������񕜑�");break;
		case 9:
		strcpy_s(serihu, "�����O�i");
		strcpy_s(setu_1, "�U���͂��グ�A���肶��O�i���܂��B");
		strcpy_s(setu_2, "�O��F���U���^�������ቺ���@���F���h���^�������񕜑�");break;
		case 10:
		strcpy_s(serihu, "��ލU��");
		strcpy_s(setu_1, "�U�����Ȃ����ނ��܂��B");
		strcpy_s(setu_2, "�S�R�F���U���^�������񕜏�");break;
		case 11:
		strcpy_s(serihu, "�㗃�U��");
		strcpy_s(setu_1, "�㗃�̕������U�����܂��B");
		strcpy_s(setu_2, "�㗃�F���U���^�������ቺ���@�����F���h��^�������ቺ��");break;
		case 12:
		strcpy_s(serihu, "�����U��");
		strcpy_s(setu_1, "�����̕������U�����܂��B");
		strcpy_s(setu_2, "�����F���U���^�������ቺ���@�㗃�F���h��^�������ቺ��");break;
		case 13:
		strcpy_s(serihu, "�O��ˌ�");
		strcpy_s(setu_1, "�O�񕔑����ˌ��A�G�R�̃�������ቺ�����܂��B");
		strcpy_s(setu_2, "�O��F���ˌ��^�������ቺ��@���F��h��^�������ቺ��");break;
		case 14:
		strcpy_s(serihu, "���ˌ�");
		strcpy_s(setu_1, "��񕔑����ˌ��A�G�R�̃�������ቺ�����܂��B");
		strcpy_s(setu_2, "�O��F��h��^�������ቺ���@���F���ˌ��^�������ቺ��");break;
		case 15:
		strcpy_s(serihu, "�㗃�ˌ�");
		strcpy_s(setu_1, "�㗃�������ˌ��A�G�R�̃�������ቺ�����܂��B");
		strcpy_s(setu_2, "�㗃�F���ˌ��^�������ቺ��@�����F���h��^�������ቺ��");break;
		case 16:
		strcpy_s(serihu, "�����ˌ�");
		strcpy_s(setu_1, "�����������ˌ��A�G�R�̃�������ቺ�����܂��B");
		strcpy_s(setu_2, "�����F���ˌ��^�������ቺ��@�㗃�F���h��^�������ቺ��");break;
		case 17:
		strcpy_s(serihu, "�O��h��");
		strcpy_s(setu_1, "�O�񕔑����h�䂵�܂��B");
		strcpy_s(setu_2, "�O��F���h��^�������ቺ���@���F���h���^�������񕜑�");break;
		case 18:
		strcpy_s(serihu, "�S�R�h�䥋�");
		strcpy_s(setu_1, "�������~�߂ċ��h�䂵�܂��B");
		strcpy_s(setu_2, "�S�R�F���h��^�������ቺ��");break;
		case 19:
		strcpy_s(serihu, "��ޖh��");
		strcpy_s(setu_1, "�h�䂵�Ȃ����ނ��܂��B");
		strcpy_s(setu_2, "�S�R�F���h��^�������񕜏�");break;
		case 20:
		strcpy_s(serihu, "���U���");
		strcpy_s(setu_1, "�f������ނ��܂��B");
		strcpy_s(setu_2, "�S�R�F���h���^�������񕜑�");break;
		case 21:
		strcpy_s(serihu, "�O����");
		strcpy_s(setu_1, "�O��ƌ�񂪓���ւ��܂��B");
		strcpy_s(setu_2, "");break;
		case 22:
		strcpy_s(serihu, "�����p�P");
		strcpy_s(setu_1, "");
		strcpy_s(setu_2, "");break;
		case 23:
		strcpy_s(serihu, "�����p�Q");
		strcpy_s(setu_1, "");
		strcpy_s(setu_2, "");break;
		case 24:
		strcpy_s(serihu, "���U���");
		strcpy_s(setu_1, "�O��ƌ�񂪑f��������ւ��܂��B");
		strcpy_s(setu_2, "");break;
		case 25:
		strcpy_s(serihu, "�����񕜥��");
		strcpy_s(setu_1, "��莞�Ԍヂ�����Ɣ�J���񕜂��܂��B");
		strcpy_s(setu_2, "");break;
		case 26:
		strcpy_s(serihu, "�������p");
		strcpy_s(setu_1, "");
		strcpy_s(setu_2, "");break;
		case 27:
		strcpy_s(serihu, "�w�`��");
		strcpy_s(setu_1, "�w�`���񕜂��A�����������S�ɉ񕜂��܂��B");
		strcpy_s(setu_2, "�S�R�F���h���^�������񕜏�");break;
		case 28:
		strcpy_s(serihu, "���w�`�񕜗p");
		strcpy_s(setu_1, "");
		strcpy_s(setu_2, "");break;
		case 29:
		strcpy_s(serihu, "�O�񎀎�");
		strcpy_s(setu_1, "�O�񕔑�����������Ėh�䂵�܂��B");
		strcpy_s(setu_2, "�O��F�ŋ��h��^�������ቺ���@���F���h���^�������񕜑�");break;
		case 30:
		strcpy_s(serihu, "�����񕜥��");
		strcpy_s(setu_1, "��莞�Ԍヂ�����Ɣ�J��傫���񕜂��܂��B");
		strcpy_s(setu_2, "");break;
		case 31:
		strcpy_s(serihu, "�w�`�񕜥��");
		strcpy_s(setu_1, "�w�`��f�����񕜂��A�����������S�ɉ񕜂��܂��B");
		strcpy_s(setu_2, "�S�R�F���h���^�������񕜏�");break;
		case 32:
		strcpy_s(serihu, "���񂾂ӂ�");
		strcpy_s(setu_1, "���񂾂ӂ�����ēG�R���\���܂��B");
		strcpy_s(setu_2, "");break;
		case 33:
		strcpy_s(serihu, "�����Ƀt���p");
		strcpy_s(setu_1, "");
		strcpy_s(setu_2, "");break;
		case 34:
		strcpy_s(serihu, "�J����");
		strcpy_s(setu_1, "������т܂��A���R�̃��������ቺ���܂��B");
		strcpy_s(setu_2, "");break;
		case 35:
		strcpy_s(serihu, "�~���R");
		strcpy_s(setu_1, "�������т܂��A���R�̃������Ƌ@���͂��ቺ���܂��B");
		strcpy_s(setu_2, "");break;
		case 36:
		strcpy_s(serihu, "���f���");
		strcpy_s(setu_1, "�G�w�̒����ɔ�э��݁A�G�R�𕪒f���܂��B");
		strcpy_s(setu_2, "");break;
		case 37:
		strcpy_s(serihu, "���Ε���");
		strcpy_s(setu_1, "���΂ň�莞�Ԍ�A�����ɍU�����܂��B");
		strcpy_s(setu_2, "");break;
		case 38:
		strcpy_s(serihu, "�����Ηp");
		strcpy_s(setu_1, "");
		strcpy_s(setu_2, "");break;
		case 39:
		strcpy_s(serihu, "�w�����ˌ�");
		strcpy_s(setu_1, "�w�������ˌ����A�S�R�̃��������񕜂��܂��B");
		strcpy_s(setu_2, "");break;
		case 40:
		strcpy_s(serihu, "��������");
		strcpy_s(setu_1, "�����������G�w�ɔ�э��݁A�������܂��B");
		strcpy_s(setu_2, "");break;
		case 41:
		strcpy_s(serihu, "�΍U��");
		strcpy_s(setu_1, "�΂�����܂��B");
		strcpy_s(setu_2, "");break;
		case 42:
		strcpy_s(serihu, "���Ƃ���");
		strcpy_s(setu_1, "�w�������G��{�点�A�G�̔��f�͂�D���܂��B");
		strcpy_s(setu_2, "");break;
		case 43:
		strcpy_s(serihu, "�U��̑ދp");
		strcpy_s(setu_1, "�������ӂ�����ēG�̃�������ቺ�����܂��B");
		strcpy_s(setu_2, "");break;
		case 44:
		strcpy_s(serihu, "��񑀍�L1");
		strcpy_s(setu_1, "�G�R�����������A���߂�S�R�O�i�ɂ��܂��B");
		strcpy_s(setu_2, "");break;
		case 45:
		strcpy_s(serihu, "��񑀍�L2");
		strcpy_s(setu_1, "�G�R�����������A���߂�S�R�h��ɂ��܂��B");
		strcpy_s(setu_2, "");break;
		case 46:
		strcpy_s(serihu, "��񑀍�L3");
		strcpy_s(setu_1, "�G�R�����������A���߂�S�R�x���ɂ��܂��B");
		strcpy_s(setu_2, "");break;
		case 47:
		strcpy_s(serihu, "��񑀍�L4");
		strcpy_s(setu_1, "�G�R�����������A���߂�S�R��ނɂ��܂��B");
		strcpy_s(setu_2, "");break;
		case 48:
		strcpy_s(serihu, "��񑀍�L5");
		strcpy_s(setu_1, "�G�R�����������A���߂��o�����Ȃ����܂��B");
		strcpy_s(setu_2, "");break;
		case 49:
		strcpy_s(serihu, "���@����");
		strcpy_s(setu_1, "��񕔑������Ƃ������@��܂��B");
		strcpy_s(setu_2, "");break;
		case 50:
		strcpy_s(serihu, "�h����");
		strcpy_s(setu_1, "���ݒu���A�U����h���܂��B");
		strcpy_s(setu_2, "");break;
		case 51:
		strcpy_s(serihu, "���ۍ��");
		strcpy_s(setu_1, "�ŏI���C���ɍ��ݒu���A�˔j��h���܂��B");
		strcpy_s(setu_2, "");break;
		case 52:
		strcpy_s(serihu, "�w�΂̌v");
		strcpy_s(setu_1, "�����Ō���ɉ΂�����A�K���ōU�����܂��B");
		strcpy_s(setu_2, "");break;
		case 53:
		strcpy_s(serihu, "���΍U����");
		strcpy_s(setu_1, "");
		strcpy_s(setu_2, "");break;
		case 54:
		strcpy_s(serihu, "���΍U����");
		strcpy_s(setu_1, "");
		strcpy_s(setu_2, "");break;
		case 55:
		strcpy_s(serihu, "���U�ދp");
		strcpy_s(setu_1, "�f������ꂩ��ދp���܂��B");
		strcpy_s(setu_2, "");break;
		case 56:
		strcpy_s(serihu, "�S�R�O�i���");
		strcpy_s(setu_1, "�O�i���čU�����܂��B");
		strcpy_s(setu_2, "�S�R�F���U���^�������ቺ��");break;
		case 57:
		strcpy_s(serihu, "�S�R�x��");
		strcpy_s(setu_1, "�������~�߂ċx�݁A���������񕜂��܂��B");
		strcpy_s(setu_2, "�S�R�F���h���^�������񕜑�");break;
		case 58:
		strcpy_s(serihu, "���̕�");
		strcpy_s(setu_1, "�����ĂсA�����őO�i���܂��B");
		strcpy_s(setu_2, "");break;
		case 59:
		strcpy_s(serihu, "�n������");
		strcpy_s(setu_1, "�O�񕔑������Ƃ������@��܂��B");
		strcpy_s(setu_2, "");break;
		case 60:
		strcpy_s(serihu, "�ײ�̨��ް");
		strcpy_s(setu_1, "�S�����𕜊������\�͂��グ�܂�");
		strcpy_s(setu_2, "");break;
		case 61:
		strcpy_s(serihu, "�M����ҒB");
		strcpy_s(setu_1, "�G�w�ɓ˂����ݎ������܂�");
		strcpy_s(setu_2, "");break;
		case 62:
		strcpy_s(serihu, "������");
		strcpy_s(setu_1, "�S�R�̐����͂ƃ������Ɣ�J���񕜂��܂�");
		strcpy_s(setu_2, "");break;
		case 63:
		strcpy_s(serihu, "�i���N�̕�");
		strcpy_s(setu_1, "�ˌ��̋�����");
		strcpy_s(setu_2, "");break;
		case 64:
		strcpy_s(serihu, "��M�g");
		strcpy_s(setu_1, "�΍U�߂̋�����");
		strcpy_s(setu_2, "");break;
		case 65:
		strcpy_s(serihu, "�傠�܂���");
		strcpy_s(setu_1, "���܂����̋�����");
		strcpy_s(setu_2, "");break;
		case 66:
		strcpy_s(serihu, "�������f���^");
		strcpy_s(setu_1, "���̕��̋�����");
		strcpy_s(setu_2, "");break;
		case 67:
		strcpy_s(serihu, "��n�k");
		strcpy_s(setu_1, "�n������̋�����");
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
		case 1://�c��w�`//
		for(i=0;i<17;i++)
		if(i==8)DrawRotaGraph( 530, 178,2,0,tairetu[0], TRUE ) ;
		else DrawRotaGraph( 530, 50+i*16,2,0,tairetu[1], TRUE ) ;
		break;
		case 2://�h�ǂ̔g�w//
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
		case 3://�U���̔g�w//
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
		case 4://�㗃�˔j�̐w//���O���̈ʒu
		for(i=0;i<9;i++)
		DrawRotaGraph( 460+i*6, 50+i*16,2,0,tairetu[1], TRUE ) ;
		for(i=0;i<8;i++)
		if(i==5)DrawRotaGraph( 508-i*6, 194+i*16,2,0,tairetu[3], TRUE ) ;
		else	DrawRotaGraph( 508-i*6, 194+i*16,2,0,tairetu[4], TRUE ) ;
		for(j=0;j<3;j++)for(i=0;i<4;i++)
		DrawRotaGraph( 516+i*6+j*35, 66+i*16,2,0,tairetu[2], TRUE ) ;
		break;
		case 5://�����˔j�̐w//��O���̈ʒu
		for(i=0;i<9;i++)
		if(i==2)DrawRotaGraph( 460+i*6, 50+i*16,2,0,tairetu[0], TRUE ) ;
		else DrawRotaGraph( 460+i*6, 50+i*16,2,0,tairetu[1], TRUE ) ;
		for(i=0;i<8;i++)
		DrawRotaGraph( 508-i*6, 194+i*16,2,0,tairetu[4], TRUE ) ;
		for(j=0;j<3;j++)for(i=0;i<4;i++)
		DrawRotaGraph( 540-i*6+j*35, 242+i*16,2,0,tairetu[5], TRUE ) ;
		break;
		case 6://�����˔j�̐w//������T���̂Q
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
		case 7://�O�g��w//�ォ��P�O���̂P
		for(i=0;i<17;i++)
		DrawRotaGraph( 480, 50+i*16,2,0,tairetu[1], TRUE ) ;
		for(i=0;i<17;i++)
		DrawRotaGraph( 530, 50+i*16,2,0,tairetu[2], TRUE ) ;
		for(i=0;i<17;i++)
		if(i==1)DrawRotaGraph( 580, 50+i*16,2,0,tairetu[0], TRUE ) ;
		else	DrawRotaGraph( 580, 50+i*16,2,0,tairetu[2], TRUE ) ;
		break;
		case 8://�����w//�ォ��T���̂Q
		for(i=0;i<9;i++)
		if(i==2)DrawRotaGraph( 600-i*16, 50+i*16,2,0,tairetu[3], TRUE ) ;
		else	DrawRotaGraph( 600-i*16, 50+i*16,2,0,tairetu[4], TRUE ) ;
		for(i=0;i<8;i++)
		DrawRotaGraph( 472+i*16, 194+i*16,2,0,tairetu[1], TRUE ) ;
		break;
		case 9://�w���̐w//�ォ��R���̂P
		for(i=0;i<17;i++)
		if(i==6)DrawRotaGraph( 590, 50+i*16,2,0,tairetu[0], TRUE ) ;
		else DrawRotaGraph( 590, 50+i*16,2,0,tairetu[1], TRUE ) ;
		for(j=0;j<3;j++)for(i=0;i<3;i++)
		DrawRotaGraph( 480+i*30, 74-i*10+j*40,2,0,tairetu[4], TRUE ) ;
		for(j=0;j<3;j++)for(i=0;i<3;i++)
		DrawRotaGraph( 480+i*30, 222-i*10+j*40,2,0,tairetu[4], TRUE ) ;
		break;
		case 10://�����w//
		for(i=0;i<17;i++)
		DrawRotaGraph( 530, 50+i*16,2,0,tairetu[1], TRUE ) ;
		DrawRotaGraph( 580, 50+8*16,2,0,tairetu[0], TRUE ) ;
		break;
		case 11://�g�󏂂̐w//
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
		case 12://�Ռ��w//
		for(i=0;i<9;i++)
		DrawRotaGraph( 472+i*16, 50+i*16,2,0,tairetu[1], TRUE ) ;
		for(i=0;i<8;i++)
		if(i==5)DrawRotaGraph( 600-i*16, 194+i*16,2,0,tairetu[3], TRUE ) ;
		else DrawRotaGraph( 600-i*16, 194+i*16,2,0,tairetu[4], TRUE ) ;
		break;
		case 13://���C���̓�//
			for(j=0;j<3;j++){
				for(i=0;i<17;i++){
				if(i==6)i+=5;
				DrawRotaGraph( 480+j*50, 50+i*16,2,0,tairetu[1], TRUE ) ;
				}
			}
		DrawRotaGraph( 580, 50+8*16,2,0,tairetu[0], TRUE ) ;
		break;
		case 14://�\���w//
			for(i=0;i<17;i++){
				if(i!=8){
				DrawRotaGraph( 460+i*8, 50+i*16,2,0,tairetu[1], TRUE ) ;
				DrawRotaGraph( 588-i*8, 50+i*16,2,0,tairetu[4], TRUE ) ;
				}else{
				DrawRotaGraph( 588-8*8, 50+i*16,2,0,tairetu[0], TRUE ) ;
				}
			}
		break;
		case 15://���w//
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
		case 16://�O�_�˔j�̐w//
			for(i=0;i<17;i++)
			DrawRotaGraph( 480, 50+i*16,2,0,tairetu[1], TRUE ) ;
			for(i=0;i<5;i++){
			DrawRotaGraph( 600-20*i, 50+2*16,2,0,tairetu[2], TRUE ) ;
			if(i!=0)DrawRotaGraph( 600-20*i, 50+8*16,2,0,tairetu[2], TRUE ) ;
			else	DrawRotaGraph( 600-20*i, 50+8*16,2,0,tairetu[0], TRUE ) ;
			DrawRotaGraph( 600-20*i, 50+14*16,2,0,tairetu[2], TRUE ) ;
			}
		break;
		case 17://����w�`//
		for(i=0;i<9;i++)
			if(i==4)DrawRotaGraph( 610-20*i, 50+8*16,2,0,tairetu[0], TRUE ) ;
			else DrawRotaGraph( 610-20*i, 50+8*16,2,0,tairetu[1], TRUE ) ;
		break;
		case 18://���؂̐w//
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
		case 19://���Q�̐w//128
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
		case 20://�V�̗�//
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
		case 0:break;//�\�\�\�\�\
		case 1:break;//�S�R�O�i
		case 2:break;//�S�R���
		case 3:break;//�S�R�h��
		case 4:B=1;break;//�S�R�ˌ�
		case 5:break;//�S�R�ދp
		case 6:break;//�O��O�i
		case 7:break;//���O�i
		case 8:B=4;break;//���U�O�i
		case 9:B=4;break;//�����O�i
		case 10:B=3;break;//��ލU��
		case 11:B=4;break;//�㗃�U��
		case 12:B=4;break;//�����U��
		case 13:B=1;break;//�O��ˌ�
		case 14:B=1;break;//���ˌ�
		case 15:B=1;break;//�㗃�ˌ�
		case 16:B=1;break;//�����ˌ�
		case 17:break;//�O��h��
		case 18:B=1;break;//�S�R�h�䥋�
		case 19:B=3;break;//��ޖh��
		case 20:B=3;break;//���U���
		case 21:break;//�O����
		case 22:break;//�����p�P
		case 23:break;//�����p�Q
		case 24:B=3;break;//���U���
		case 25:B=3;break;//�����񕜥��
		case 26:break;//�������p
		case 27:B=3;break;//�w�`��
		case 28:break;//���w�`�񕜗p
		case 29:B=2;break;//�O�񎀎�
		case 30:B=1;break;//�����񕜥��
		case 31:B=2;break;//�w�`�񕜥��
		case 32:B=1;break;//���񂾃t��
		case 33:break;//�����Ƀt���p
		case 34:B=1;break;//�J����
		case 35:B=1;break;//�~���R
		case 36:B=1;break;//���f���
		case 37:B=1;break;//���Ε���
		case 38:break;//�����Ηp
		case 39:B=1;break;//�w�����ˌ�
		case 40:B=1;break;//��������
		case 41:B=1;break;//�΍U��
		case 42:B=1;break;//���Ƃ���
		case 43:B=1;break;//�U��̑ދp
		case 44:B=1;break;//��񑀍�L1
		case 45:B=1;break;//��񑀍�L2
		case 46:B=1;break;//��񑀍�L3
		case 47:B=1;break;//��񑀍�L4
		case 48:B=1;break;//��񑀍�L5
		case 49:B=1;break;//���@����
		case 50:B=1;break;//�h����
		case 51:B=1;break;//���ۍ��
		case 52:B=1;break;//�w�΂̌v
		case 53:B=1;break;//���΍U����
		case 54:B=1;break;//���΍U����
		case 55:B=4;break;//���U�ދp
		case 56:B=1;break;//�S�R�O�i���
		case 57:B=4;break;//�S�R�x��
		case 58:B=1;break;//���̕�
		case 59:B=1;break;//�n������
		case 60:B=1;break;//�ײ�̨��ް
		case 61:B=2;break;//�M����ҒB
		case 62:B=1;break;//������
		case 63:B=1;break;//�i���N�̕�
		case 64:B=2;break;//��M�g
		case 65:B=2;break;//�傠�܂���
		case 66:B=2;break;//�������f���^
		case 67:B=2;break;//��n�k
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
	// �I�[�v���ł��Ȃ������炱���ŏI��
	if( fp == NULL ) return 0;
	//�f�[�^�̏����o��
	fwrite( &hero_name, sizeof( char ) , 22 , fp );//��l���̖��O
	fwrite( &hiduke, sizeof( int ) , 1 , fp );//���t
	fwrite( &play_time, sizeof( int ) , 1 , fp );//�v���C����
	fwrite( &set_jinkei, sizeof( int ) , 2 , fp );//�Ґ����Ă���w�`
	fwrite( &set_hyouhou[0], sizeof( int ) , 9 , fp );//�Ґ����Ă��镺�@
	fwrite( &set_hyouhou[1], sizeof( int ) , 9 , fp );//�Ґ����Ă��镺�@
	fwrite( &get_jinkei, sizeof( int ) , 20 , fp );//�擾���Ă��镺�@
	fwrite( &get_hyouhou, sizeof( int ) , 50 , fp );//�������Ă��镺�@
	fwrite( &flag_hyouhou, sizeof( int ) , 50 , fp );//���@�K���t���O
	fwrite( &kuni_seiryoku, sizeof( int ) , 30 , fp );//���̐��́A�O�������A�P�����A�Q�������A�R�G���A�S������
	fwrite( &kuni_yuukou, sizeof( int ) , 30 , fp );//���̗F�D�l�B
	fwrite( &kuni_gundan, sizeof( int ) , 30 , fp );//���̍��̌R�c
	fwrite( &kuni_type, sizeof( int ) , 30 , fp );//���̍��̕\���A�C�R��
	fwrite( &youhei_lv, sizeof( int ) , 2 , fp );
	fwrite( &sinobi_lv, sizeof( int ) , 2 , fp );
	fwrite( &money, sizeof( int ) , 1 , fp );//���ɂ̋�
	fwrite( &minsyuu, sizeof( int ) , 1 , fp );//���O�̕]��
	fwrite( &sangyou, sizeof( int ) , 1 , fp );//���̎Y�ƃ��x��
	fwrite( &kokuryoku, sizeof( int ) , 1 , fp );//���̍��̓��x��
	fwrite( &vs_count, sizeof( int ) , 1 , fp );
	fwrite( &win_count, sizeof( int ) , 1 , fp );//������
	fwrite( &lost_count, sizeof( int ) , 1 , fp );//�s�k��
	fwrite( &esc_count, sizeof( int ) , 1 , fp );//������
	fwrite( &anihi_count, sizeof( int ) , 1 , fp );//�S�ŉ�
	fwrite( &perfe_count, sizeof( int ) , 1 , fp );//����������
	fwrite( &eve_flag, sizeof( int ) , 100 , fp );//�C�x���g�t���O
	fwrite( &get_item, sizeof( int ) , 20 , fp );//�擾�A�C�e��
	//�t�@�C�������
	fclose(fp);
	return 0;
}
int data_load(){
	FILE *fp ;
	if(A==0)fopen_s( &fp,"File/save/save_01.sav" , "rb" ) ;
	else if(A==1)fopen_s( &fp,"File/save/save_02.sav" , "rb" ) ;
	else if(A==2)fopen_s( &fp,"File/save/save_03.sav" , "rb" ) ;
	// �I�[�v���ł��Ȃ������炱���ŏI��
	if( fp == NULL ) return 0;
	//�f�[�^�̏����o��
	fread( &hero_name, sizeof( char ) , 22 , fp );//��l���̖��O
	fread( &hiduke, sizeof( int ) , 1 , fp );//���t
	fread( &play_time, sizeof( int ) , 1 , fp );//�v���C����
	fread( &set_jinkei, sizeof( int ) , 2 , fp );//�Ґ����Ă���w�`
	fread( &set_hyouhou[0], sizeof( int ) , 9 , fp );//�Ґ����Ă��镺�@
	fread( &set_hyouhou[1], sizeof( int ) , 9 , fp );//�Ґ����Ă��镺�@
	fread( &get_jinkei, sizeof( int ) , 20 , fp );//�擾���Ă��镺�@
	fread( &get_hyouhou, sizeof( int ) , 50 , fp );//�������Ă��镺�@
	fread( &flag_hyouhou, sizeof( int ) , 50 , fp );//���@�K���t���O
	fread( &kuni_seiryoku, sizeof( int ) , 30 , fp );//���̐��́A�O�������A�P�����A�Q�������A�R�G���A�S������
	fread( &kuni_yuukou, sizeof( int ) , 30 , fp );//���̗F�D�l�B
	fread( &kuni_gundan, sizeof( int ) , 30 , fp );//���̍��̌R�c
	fread( &kuni_type, sizeof( int ) , 30 , fp );//���̍��̕\���A�C�R��
	fread( &youhei_lv, sizeof( int ) , 2 , fp );
	fread( &sinobi_lv, sizeof( int ) , 2 , fp );
	fread( &money, sizeof( int ) , 1 , fp );//���ɂ̋�
	fread( &minsyuu, sizeof( int ) , 1 , fp );//���O�̕]��
	fread( &sangyou, sizeof( int ) , 1 , fp );//���̎Y�ƃ��x��
	fread( &kokuryoku, sizeof( int ) , 1 , fp );//���̍��̓��x��
	fread( &vs_count, sizeof( int ) , 1 , fp );
	fread( &win_count, sizeof( int ) , 1 , fp );//������
	fread( &lost_count, sizeof( int ) , 1 , fp );//�s�k��
	fread( &esc_count, sizeof( int ) , 1 , fp );//������
	fread( &anihi_count, sizeof( int ) , 1 , fp );//�S�ŉ�
	fread( &perfe_count, sizeof( int ) , 1 , fp );//����������
	fread( &eve_flag, sizeof( int ) , 100 , fp );//�C�x���g�t���O
	fread( &get_item, sizeof( int ) , 20 , fp );//�擾�A�C�e��
	//�t�@�C�������
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
		DrawStringToHandle( 321 , 197 ,"���܂�", kuro , f_a) ;
		DrawStringToHandle( 320 , 196 ,"���܂�", siro , f_a) ;
		}else if(hiduke%2==1){
		DrawFormatStringToHandle( 321 , 197 , kuro , f_a,"%d���O��" ,((hiduke-1)/2)%12+1) ;
		DrawFormatStringToHandle( 320 , 196 , siro , f_a,"%d���O��" ,((hiduke-1)/2)%12+1) ;
		}else{
		DrawFormatStringToHandle( 321 , 197 , kuro , f_a,"%d�����" ,((hiduke-1)/2)%12+1) ;
		DrawFormatStringToHandle( 320 , 196 , siro , f_a,"%d�����" ,((hiduke-1)/2)%12+1) ;
		}
	//����//kokuryoku
	DrawStringToHandle( 321 , 241 , "����",kuro , f_a) ;
	DrawStringToHandle( 320 , 240 , "����",siro , f_a) ;
	if(kokuryoku>=1000){
	DrawStringToHandle( 396 , 241 , "�ō�",kuro , f_a) ;
	DrawStringToHandle( 395 , 240 , "�ō�",siro , f_a) ;
	}else if(kokuryoku>=750){
	DrawStringToHandle( 396 , 241 , "����",kuro , f_a) ;
	DrawStringToHandle( 395 , 240 , "����",siro , f_a) ;
	}else if(kokuryoku>=500){
	DrawStringToHandle( 396 , 241 , "����",kuro , f_a) ;
	DrawStringToHandle( 395 , 240 , "����",siro , f_a) ;
	}else if(kokuryoku>=250){
	DrawStringToHandle( 396 , 241 , "�㏬",kuro , f_a) ;
	DrawStringToHandle( 395 , 240 , "�㏬",siro , f_a) ;
	}else{
	DrawStringToHandle( 396 , 241 , "�Œ�",kuro , f_a) ;
	DrawStringToHandle( 395 , 240 , "�Œ�",siro , f_a) ;
	}
	//�Y��//sangyou
	DrawStringToHandle( 321 , 285 , "�Y��",kuro , f_a) ;
	DrawStringToHandle( 320 , 284 , "�Y��",siro , f_a) ;
	if(sangyou>=1000){
	DrawStringToHandle( 396 , 285 , "�ō�",kuro , f_a) ;
	DrawStringToHandle( 395 , 284 , "�ō�",siro , f_a) ;
	}else if(sangyou>=750){
	DrawStringToHandle( 396 , 285 , "�[��",kuro , f_a) ;
	DrawStringToHandle( 395 , 284 , "�[��",siro , f_a) ;
	}else if(sangyou>=500){
	DrawStringToHandle( 396 , 285 , "����",kuro , f_a) ;
	DrawStringToHandle( 395 , 284 , "����",siro , f_a) ;
	}else if(sangyou>=250){
	DrawStringToHandle( 396 , 285 , "�s��",kuro , f_a) ;
	DrawStringToHandle( 395 , 284 , "�s��",siro , f_a) ;
	}else{
	DrawStringToHandle( 396 , 285 , "�Œ�",kuro , f_a) ;
	DrawStringToHandle( 395 , 284 , "�Œ�",siro , f_a) ;
	}
	//���O//minsyuu
	DrawStringToHandle( 321 , 329 , "���O",kuro , f_a) ;
	DrawStringToHandle( 320 , 328 , "���O",siro , f_a) ;
	if(minsyuu>=1000){
	DrawStringToHandle( 396 , 329 , "�ō�",kuro , f_a) ;
	DrawStringToHandle( 395 , 328 , "�ō�",siro , f_a) ;
	}else if(minsyuu>=800){
	DrawStringToHandle( 396 , 329 , "�K��",kuro , f_a) ;
	DrawStringToHandle( 395 , 328 , "�K��",siro , f_a) ;
	}else if(minsyuu>=600){
	DrawStringToHandle( 396 , 329 , "����",kuro , f_a) ;
	DrawStringToHandle( 395 , 328 , "����",siro , f_a) ;
	}else if(minsyuu>=400){
	DrawStringToHandle( 396 , 329 , "����",kuro , f_a) ;
	DrawStringToHandle( 395 , 328 , "����",siro , f_a) ;
	}else if(minsyuu>=200){
	DrawStringToHandle( 396 , 329 , "�s��",kuro , f_a) ;
	DrawStringToHandle( 395 , 328 , "�s��",siro , f_a) ;
	}else if(minsyuu>=1){
	DrawStringToHandle( 396 , 329 , "�s�K",kuro , f_a) ;
	DrawStringToHandle( 395 , 328 , "�s�K",siro , f_a) ;
	}else{
	DrawStringToHandle( 396 , 329 , "�Œ�",kuro , f_a) ;
	DrawStringToHandle( 395 , 328 , "�Œ�",siro , f_a) ;
	}
	//����??����//money
	DrawStringToHandle( 321 , 373 , "����",kuro , f_a) ;
	DrawStringToHandle( 320 , 372 , "����",siro , f_a) ;
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
	//�Y��
	if(san_hen!=0){
		DrawStringToHandle( 466 , 285 , "��"  ,kuro , f_a) ;
		DrawStringToHandle( 465 , 284 , "��"  ,siro , f_a) ;
		if(san_hen>0 && sangyou>=1000);
		else if(san_hen>0) siro=bougyo;
		else if(san_hen<0) siro=kougeki;
		if(sangyou+san_hen>=1000){
		DrawStringToHandle( 506 , 285 , "�ō�",kuro , f_a) ;
		DrawStringToHandle( 505 , 284 , "�ō�",siro , f_a) ;
		}else if(sangyou+san_hen>=750){
		DrawStringToHandle( 506 , 285 , "�[��",kuro , f_a) ;
		DrawStringToHandle( 505 , 284 , "�[��",siro , f_a) ;
		}else if(sangyou+san_hen>=500){
		DrawStringToHandle( 506 , 285 , "����",kuro , f_a) ;
		DrawStringToHandle( 505 , 284 , "����",siro , f_a) ;
		}else if(sangyou+san_hen>=250){
		DrawStringToHandle( 506 , 285 , "�s��",kuro , f_a) ;
		DrawStringToHandle( 505 , 284 , "�s��",siro , f_a) ;
		}else{
		DrawStringToHandle( 506 , 285 , "�Œ�",kuro , f_a) ;
		DrawStringToHandle( 505 , 284 , "�Œ�",siro , f_a) ;
		}
		siro=GetColor(255,255,255);
	}
	if(min_hen!=0){//���O�ω��\��
		DrawStringToHandle( 466 , 329 , "��"  ,kuro , f_a) ;
		DrawStringToHandle( 465 , 328 , "��"  ,siro , f_a) ;
		if(min_hen>0 && money>=1000);
		else if(min_hen>0) siro=bougyo;
		else if(min_hen<0) siro=kougeki;
	if(minsyuu+min_hen>=1000){
	DrawStringToHandle( 506 , 329 , "�ō�",kuro , f_a) ;
	DrawStringToHandle( 505 , 328 , "�ō�",siro , f_a) ;
	}else if(minsyuu+min_hen>=800){
	DrawStringToHandle( 506 , 329 , "�K��",kuro , f_a) ;
	DrawStringToHandle( 505 , 328 , "�K��",siro , f_a) ;
	}else if(minsyuu+min_hen>=600){
	DrawStringToHandle( 506 , 329 , "����",kuro , f_a) ;
	DrawStringToHandle( 505 , 328 , "����",siro , f_a) ;
	}else if(minsyuu+min_hen>=400){
	DrawStringToHandle( 506 , 329 , "����",kuro , f_a) ;
	DrawStringToHandle( 505 , 328 , "����",siro , f_a) ;
	}else if(minsyuu+min_hen>=200){
	DrawStringToHandle( 506 , 329 , "�s��",kuro , f_a) ;
	DrawStringToHandle( 505 , 328 , "�s��",siro , f_a) ;
	}else if(minsyuu+min_hen>=1){
	DrawStringToHandle( 506 , 329 , "�s�K",kuro , f_a) ;
	DrawStringToHandle( 505 , 328 , "�s�K",siro , f_a) ;
	}else{
	DrawStringToHandle( 506 , 329 , "�Œ�",kuro , f_a) ;
	DrawStringToHandle( 505 , 328 , "�Œ�",siro , f_a) ;
	}
		siro=GetColor(255,255,255);
	}
	if(kane_hen!=0){
		DrawStringToHandle( 466 , 373 , "��"  ,kuro , f_a) ;
		DrawStringToHandle( 465 , 372 , "��"  ,siro , f_a) ;
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
	if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
	DxLib_End() ;//DX���C�u�����̎g�p�I��
	exit(1);//�v���O�����̏I��
	}

	return 0;
}
int jyouhou_teki(){


	SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
	DrawBox( 180 , 330 , 460 , 460 ,ao , TRUE ) ;
	SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;

	//kuni_seiryoku[i]=1+GetRand(1);//0���Ȃ��A�P�A�Q��
	//kuni_yuukou[i]=GetRand(1000);//���̗F�D�l�B
	//kuni_gundan[i]=GetRand(1000);//���̍��̌R�c�B
	//kuni_type[i]=GetRand(27);
	//kuni_kokuryoku[i]=GetRand(1000);

	if(J/15%2==0)j=1;
	else if(J/15%4==1)j=0;
	else j=2;
	DrawRotaGraph( 212 , 354 , 2 , 0 , unit_g[kuni_type[c]][(kuni_seiryoku[c]-1)/2][j] , TRUE ) ;
	//����//kokuryoku
	DrawStringToHandle( 241 , 341 , kuni_name[c],kuro , f_a) ;
	DrawStringToHandle( 240 , 340 , kuni_name[c],siro , f_a) ;
	DrawStringToHandle( 201 , 381 , "����",kuro , f_a) ;
	DrawStringToHandle( 200 , 380 , "����",siro , f_a) ;
	if(c==0)kuni_gundan[c]=kokuryoku;
	if(kuni_gundan[c]>=1000){
	DrawStringToHandle( 276 , 381 , "�ō�",kuro , f_a) ;
	DrawStringToHandle( 275 , 380 , "�ō�",siro , f_a) ;
	}else if(kuni_gundan[c]>=750){
	DrawStringToHandle( 276 , 381 , "����",kuro , f_a) ;
	DrawStringToHandle( 275 , 380 , "����",siro , f_a) ;
	}else if(kuni_gundan[c]>=500){
	DrawStringToHandle( 276 , 381 , "����",kuro , f_a) ;
	DrawStringToHandle( 275 , 380 , "����",siro , f_a) ;
	}else if(kuni_gundan[c]>=250){
	DrawStringToHandle( 276 , 381 , "�㏬",kuro , f_a) ;
	DrawStringToHandle( 275 , 380 , "�㏬",siro , f_a) ;
	}else{
	DrawStringToHandle( 276 , 381 , "�Œ�",kuro , f_a) ;
	DrawStringToHandle( 275 , 380 , "�Œ�",siro , f_a) ;
	}
	DrawStringToHandle( 201 , 421 , "�֌W",kuro , f_a) ;
	DrawStringToHandle( 200 , 420 , "�֌W",siro , f_a) ;
	if(kuni_seiryoku[c]==1){
		if(c!=0){
		DrawStringToHandle( 276 , 421 , "�̍�",kuro , f_a) ;
		DrawStringToHandle( 275 , 420 , "�̍�",siro , f_a) ;
		}else{
		DrawStringToHandle( 276 , 421 , "�{��",kuro , f_a) ;
		DrawStringToHandle( 275 , 420 , "�{��",siro , f_a) ;
		}
	}else if(kuni_seiryoku[c]==2){
	DrawStringToHandle( 276 , 421 , "����",kuro , f_a) ;
	DrawStringToHandle( 275 , 420 , "����",siro , f_a) ;
	}else if(kuni_yuukou[c]>=1000){
	DrawStringToHandle( 276 , 421 , "�ō�",kuro , f_a) ;
	DrawStringToHandle( 275 , 420 , "�ō�",siro , f_a) ;
	}else if(kuni_yuukou[c]>=750){
	DrawStringToHandle( 276 , 421 , "�F�D",kuro , f_a) ;
	DrawStringToHandle( 275 , 420 , "�F�D",siro , f_a) ;
	}else if(kuni_yuukou[c]>=500){
	DrawStringToHandle( 276 , 421 , "����",kuro , f_a) ;
	DrawStringToHandle( 275 , 420 , "����",siro , f_a) ;
	}else if(kuni_yuukou[c]>=250){
	DrawStringToHandle( 276 , 421 , "����",kuro , f_a) ;
	DrawStringToHandle( 275 , 420 , "����",siro , f_a) ;
	}else{
	DrawStringToHandle( 276 , 421 , "�Œ�",kuro , f_a) ;
	DrawStringToHandle( 275 , 420 , "�Œ�",siro , f_a) ;
	}
	if(koku_hen!=0){
		DrawStringToHandle( 346 , 421 , "��"  ,kuro , f_a) ;
		DrawStringToHandle( 345 , 420 , "��"  ,siro , f_a) ;
		if(koku_hen>0 && kuni_yuukou[c]>=1000 && koku_hen!=10000);
		else if(koku_hen>0) siro=bougyo;
		else if(koku_hen<0) siro=kougeki;
		if(koku_hen==10000){
		DrawStringToHandle( 386 , 421 , "����",kuro , f_a) ;
		DrawStringToHandle( 385 , 420 , "����",siro , f_a) ;
	}else if(kuni_yuukou[c]+koku_hen>=1000){
		DrawStringToHandle( 386 , 421 , "�ō�",kuro , f_a) ;
		DrawStringToHandle( 385 , 420 , "�ō�",siro , f_a) ;
	}else if(kuni_yuukou[c]+koku_hen>=750){
		DrawStringToHandle( 386 , 421 , "�F�D",kuro , f_a) ;
		DrawStringToHandle( 385 , 420 , "�F�D",siro , f_a) ;
	}else if(kuni_yuukou[c]+koku_hen>=500){
		DrawStringToHandle( 386 , 421 , "����",kuro , f_a) ;
		DrawStringToHandle( 385 , 420 , "����",siro , f_a) ;
	}else if(kuni_yuukou[c]+koku_hen>=250){
		DrawStringToHandle( 386 , 421 , "����",kuro , f_a) ;
		DrawStringToHandle( 385 , 420 , "����",siro , f_a) ;
	}else{
		DrawStringToHandle( 386 , 421 , "�Œ�",kuro , f_a) ;
		DrawStringToHandle( 385 , 420 , "�Œ�",siro , f_a) ;
	}
	siro=GetColor(255,255,255);
	}
	
	koku_hen=0;
	

	if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
	DxLib_End() ;//DX���C�u�����̎g�p�I��
	exit(1);//�v���O�����̏I��
	}

	return 0;
}
int name_nyuuryoku(){

	for(c=0;c<14;c++)
	for(i=0;i<213;i++){
	strcpy_s(moji_set[c][i], "�@");
	}

	for(c=0;c<15;c++)
	moji_load();

	while(1){
		GetMousePoint( &mou_x, &mou_y );
		if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//�}�E�X������
		if(mouse==0) mouse=1;
		else mouse=2;
		}else mouse=0;
		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
		if(mouse_left==0) mouse_left=1;
		else mouse_left=2;
		}else mouse_left=0;
		DrawGraph( 0, 0, world_map, TRUE ) ;
		//�g��\��
		waku(180,38,460,88);
		waku(64,108,584,460);
		//�J�[�\����\��
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 180 ) ;
		if(mou_x>71 && mou_x<480 && mou_y>119 && mou_y<408)DrawBox( mou_x/24*24 , mou_y/24*24 , mou_x/24*24+24 , mou_y/24*24+24 ,ao , TRUE ) ;
		if(mou_x>490 && mou_x<580 && mou_y>110 && mou_y<444)DrawBox( 490 , 109+(mou_y-108)/24*24 , 580 , 131+(mou_y-108)/24*24 ,ao , TRUE ) ;
		DrawBox( 490 , 109+name_set*24 , 580 , 131+name_set*24 ,ao , TRUE ) ;
		SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;
		//�����ꗗ��\��
		for(j=0;j<12;j++)
		for(i=0;i<17;i++){
			A=i+j*17;
			DrawString( 74+i*24 , 124+j*24 , moji_set[name_set][A],kuro);
			if(    (name_set==4 && (A==0 || A==11 || A==48 || A==55 || A==89 || A==113))//������������
				|| (name_set==5 && (A==64 || A==200))//����
				|| (name_set==6 && (A==17 || A==98))//����
				|| (name_set==7 && (A==9 || A==78))//����
				|| (name_set==8 && (A==171 || A==194))//����
				|| (name_set==9 && (A==85 || A==158))//����
				|| (name_set==10&& (A==19 || A==88 || A==96 || A==141))//���Ă�
				|| (name_set==11&& (A==14 || A==19 || A==32 || A==39 || A==46 || A==119 || A==170))//�Ȃɂ˂̂͂Ђ�
				|| (name_set==12&& (A==17 || A==44 || A==114 || A==133 || A==143 || A==150 || A==163 || A==176 || A==185))//�ւق܂݂ނ߂����
				|| (name_set==13&& (A==3 || A==34 || A==48 || A==93 || A==98 || A==122 || A==137))//��������
				)DrawString( 74+i*24 , 124+j*24 , moji_set[name_set][A],aka);
		}

		//�����Z�b�g�I��
		DrawString( 492 , 110      ,"�Ђ炪��",kuro);
		DrawString( 492 , 110+24*1 ,"�J�^�J�i",kuro);
		DrawString( 492 , 110+24*2 ,"�p����",kuro);
		DrawString( 492 , 110+24*3 ,"�L��",kuro);
		DrawString( 492 , 110+24*4 ,"��������",kuro);
		DrawString( 492 , 110+24*5 ,"��������",kuro);
		DrawString( 492 , 110+24*6 ,"��������",kuro);
		DrawString( 492 , 110+24*7 ,"��������",kuro);
		DrawString( 492 , 110+24*8 ,"��������",kuro);
		DrawString( 492 , 110+24*9 ,"��������",kuro);
		DrawString( 492 , 110+24*10,"��������",kuro);
		DrawString( 492 , 110+24*11,"�����Ƃ�",kuro);
		DrawString( 492 , 110+24*12,"�����ӂ�",kuro);
		DrawString( 492 , 110+24*13,"�������",kuro);
		//��ɖ��O�ƃA�C�R����\��24*
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
		DrawString( 230+int(strlen(hero_name))/2*21 , 50 ,"�Q",kuro);
		}

			if(mou_x>84 && mou_x<410 && mou_y>410 && mou_y<480){
			SetDrawBlendMode( DX_BLENDMODE_ALPHA , 180 ) ;
			DrawBox( 84 , 410 , 480 , 450 ,ao , TRUE ) ;
			SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;
			if(mouse_left==1)break;
			}
		DrawString( 256 , 420 ,"����",kuro);

		//�I���m�F
		ScreenFlip();
		DrawBox(0,0,640,480,kuro,TRUE);
		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
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
	else if(c==14)fopen_s( &fp,"���O����.txt" , "r" ) ;
	// �I�[�v���ł��Ȃ������炱���ŏI��
	if( fp == NULL ) return 0;
	//�f�[�^�̏����o��
	if(c!=14){
	for(i=0;i<204;i++)fread( &moji_set[c][i], sizeof( char ) , 2 , fp );//�����ǂݍ���
	}else{
	fscanf_s(fp,"%20s\n",hero_name);
	}

	//�t�@�C�������
	fclose(fp);
	return 0;
}
int omake_main(){
	omake_load();
	//�\�͏�����
	gun_kazu[0]=29;
	butai_one[0]=0;//�����P�̕���//�d������
	butai_two[0]=0;//�����Q�̕���//�R��
	butai_sirei[0]=8;//�i�ߊ��̕���//���R
	set_hyouhou[0][0]=1;
	set_hyouhou[0][1]=2;
	set_hyouhou[0][2]=3;
	set_hyouhou[0][3]=4;
	set_hyouhou[0][4]=5;
	while(1){
	for(i=0;i<100;i++){
	A=GetRand(499);//����ɔ���
		 if(A<10)	ran_gundan[i]=1 ;//�S�u1.0%
	else if(A<20)	ran_gundan[i]=3 ;//���m1.0%
	else if(A<23)	ran_gundan[i]=23;//����0.3%
	else if(A<26)	ran_gundan[i]=2 ;//�I�K0.3%
	else if(A<29)	ran_gundan[i]=7 ;//�M��0.3%
	else if(A<32)	ran_gundan[i]=9 ;//�C��0.3%
	else if(A<35)	ran_gundan[i]=10;//����0.3%
	else if(A<38)	ran_gundan[i]=18;//�S��0.3%
	else if(A<41)	ran_gundan[i]=27;//���c0.3%
	else if(A<44)	ran_gundan[i]=26;//���R0.3%
	else if(A<47)	ran_gundan[i]=14;//����0.3%
	else if(A<49)	ran_gundan[i]=17;//�폫0.2%
	else if(A<51)	ran_gundan[i]=20;//����0.2%
	else if(A<53)	ran_gundan[i]=21;//�C��0.2%
	else if(A<55)	ran_gundan[i]=22;//����0.2%
	else if(A<56)	ran_gundan[i]=19;//����0.1%
	else 			ran_gundan[i]=0 ;//�[���c��
	}
	c=GetRand(3)+64;
	set_hyouhou[0][8]=c;
	set_hyouhou[1][8]=c;
	if(GetRand(4)==0){//
	set_hyouhou[0][8]=55;
	set_hyouhou[1][8]=55;
	}else if(GetRand(2)==0){//������
	set_hyouhou[0][8]=62;
	set_hyouhou[1][8]=62;
	}else if(GetRand(15)==0){//�X���C���t�B�[�o�[
	set_hyouhou[0][8]=60;
	set_hyouhou[1][8]=60;
	}
	set_hyouhou[0][5]=8+GetRand(4);//�U���n�@���U�@�����@�㗃�@�����@�U��
	if(set_hyouhou[0][5]==10)set_hyouhou[0][5]=56;
	set_hyouhou[0][6]=18+GetRand(4);//�h��n�@�S�x�@�h���@��U�@��h�@����
	if(set_hyouhou[0][6]==21)		 set_hyouhou[0][6]=10;
	else	if(set_hyouhou[0][6]==22)set_hyouhou[0][6]=57;
	set_hyouhou[0][7]=44+GetRand(4);//����n�@��񑀍�k�P�`�T

	//�w�`
	set_jinkei[0]=GetRand(19)+1;
	//�C�x���g�Ƃ�
	VS_no=GetRand(36)+1;//�퓬��������߂�//21��ڂɂ�������//37���������A34�[���̉�
	if(VS_no==34)VS_no=38;
	if(VS_no==37)VS_no=39;
	if(omake_rensen==60)VS_no=37;
	map=9;
	sentou_main();
	gun_kazu[0]=gun_nokori[0]-1;//���R�c���v�Z
	omake_rensen+=60;//�G�R�c���B
	//�Z�[�u
	omake_save();
		if(VS_result>3 || omake_rensen>100){//�ŏ�����
		gun_kazu[0]=29;
		omake_rensen=0;
		}
	}

	return 0;
}
int omake_save(){
	FILE *fp ;
	fopen_s( &fp,"File/save/save_sys.sav" , "wb" ) ;
	// �I�[�v���ł��Ȃ������炱���ŏI��
	if( fp == NULL ) return 0;
	//�f�[�^�̏����o��
	fwrite( &omake_mode, sizeof( int ) , 1 , fp );//�C�x���g�t���O
	//�t�@�C�������
	fclose(fp);
	return 0;
}
int omake_load(){
	FILE *fp ;
	fopen_s( &fp,"File/save/save_sys.sav" , "rb" ) ;
	// �I�[�v���ł��Ȃ������炱���ŏI��
	if( fp == NULL ) return 0;
	//�f�[�^�̏����o��
	fread( &omake_mode, sizeof( int ) , 1 , fp );//�C�x���g�t���O
	fclose(fp);
	for(i=0;i<30;i++){
	kuni_henka[i]=0;
	}
	return 0;
}
int waku(int xa,int ya,int xb,int yb){

	DrawBox( xa , ya ,xb   ,  yb   , GetColor(  42 ,  42 ,  42 ) , TRUE) ;//�e�̕���
	DrawBox( xa , ya   ,xb-4 ,  yb-4 , GetColor( 225 , 205 , 172 ) , TRUE) ;//�h��Ԃ�����
	DrawBox( xa , ya   ,xb-2 ,  yb-2 , GetColor(  82 ,  45 ,  20 ) , FALSE) ;//�Z���ڂ̒��g
	DrawBox( xa , ya   ,xb-3 ,  yb-3 , GetColor( 175 , 135 ,  92 ) , FALSE) ;//�������g
	DrawPixel( xb-1-3 , yb-3         , GetColor( 135 ,  95 ,  60 ) ) ;//�h�b�g

	return 0;
}
int waku_2(int xa,int ya,int xb,int yb){

	DrawBox( xa , ya ,xb   ,  yb   , GetColor(  42 ,  42 ,  42 ) , TRUE) ;//�e�̕���
	DrawBox( xa , ya   ,xb-4 ,  yb-4 , GetColor( 172 , 172 , 172 ) , TRUE) ;//�h��Ԃ�����
	DrawBox( xa , ya   ,xb-2 ,  yb-2 , GetColor(  45 ,  45 ,  45 ) , FALSE) ;//�Z���ڂ̒��g
	DrawBox( xa , ya   ,xb-3 ,  yb-3 , GetColor( 135 , 135 , 132 ) , FALSE) ;//�������g
	DrawPixel( xb-1-3 , yb-3         , GetColor(  60 ,  60 ,  60 ) ) ;//�h�b�g

	return 0;
}
//�w�`������
int jin_01(){
	//�c��w�`
	for(i=0;i<gun_kazu[A]+1;i++){
	//����`
	if(i==gun_kazu[A]){//�w�����z�u
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=560000*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=150000;//���m�̂x���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_x[A][i]=(i%2*10000+550000)*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=300000*i/(gun_kazu[A]-1);//���m�̂x���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else{
		c=butai_two[A];
		hei_dai();
		hei_x[A][i]=(i%2*10000+550000)*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=300000*i/(gun_kazu[A]-1);//���m�̂x���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_jin[A][i]=(555000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}
	return 0;
}
int jin_02(){
	//�h�ǂ̔g�w
	for(i=0;i<gun_kazu[A]+1;i++){
	//����`
	if(i==gun_kazu[A]){//�w�����z�u
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=600000*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=80000;//���m�̂x���W
		hei_retu[A][i]=1;//���m�̑��� 0,�O��
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=300000*i/(gun_kazu[A]/2-1);//���m�̂x���W
		hei_x[A][i]=(500000-abs(150000-hei_y[A][i])/3)*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=300000*(i-gun_kazu[A]/2)/(gun_kazu[A]/2+gun_kazu[A]%2-1);//���m�̂x���W
		hei_x[A][i]=(600000-abs(150000-hei_y[A][i])/3)*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=1;//���m�̑��� 0,�O��
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_jin[A][i]=(475000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}

	return 0;
}
int jin_03(){
	//�U���̔g�w
	for(i=0;i<gun_kazu[A]+1;i++){
	//����`
	if(i==gun_kazu[A]){//�w�����z�u
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=600000*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=220000;//���m�̂x���W
		hei_retu[A][i]=1;//���m�̑��� 0,�O��
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=300000*i/(gun_kazu[A]/2-1);//���m�̂x���W
		hei_x[A][i]=(550000+abs(150000-hei_y[A][i])/3)*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=1;//���m�̑��� 0,�O��
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=300000*(i-gun_kazu[A]/2)/(gun_kazu[A]/2+gun_kazu[A]%2-1);//���m�̂x���W
		hei_x[A][i]=(450000+abs(150000-hei_y[A][i])/3)*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_jin[A][i]=(475000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}


	return 0;
}
int jin_04(){
	//�㗃�ˌ��̐w
	for(i=0;i<gun_kazu[A]+1;i++){
	//����`
	if(i==gun_kazu[A]){//�w�����z�u
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=510000*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=250000;//���m�̂x���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=240000*i/(gun_kazu[A]/2-1);//���m�̂x���W
		hei_x[A][i]=(520000-abs(150000-hei_y[A][i])/3)*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else if(i<gun_kazu[A]*2/3){
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=240000+60000*(i+1-gun_kazu[A]/2)/(gun_kazu[A]/6+gun_kazu[A]%2);//���m�̂x���W
		hei_x[A][i]=(520000-abs(150000-hei_y[A][i])/3)*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=300000*(i-gun_kazu[A]*2/3)/(gun_kazu[A]/3+gun_kazu[A]%2);//���m�̂x���W
		hei_x[A][i]=(530000+hei_y[A][i]/100001*100000/4)*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=hei_y[A][i]%100001;
		hei_retu[A][i]=1;//���m�̑��� 0,�O��
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_jin[A][i]=(495000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}
	return 0;
}
int jin_05(){
	//�����ˌ��̐w
	for(i=0;i<gun_kazu[A]+1;i++){
	//����`
	if(i==gun_kazu[A]){//�w�����z�u
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=510000*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=50000;//���m�̂x���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=60000+240000*i/(gun_kazu[A]/2-1);//���m�̂x���W
		hei_x[A][i]=(520000-abs(150000-hei_y[A][i])/3)*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else if(i<gun_kazu[A]*2/3){
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=60000*(i-gun_kazu[A]/2)/(gun_kazu[A]/6+gun_kazu[A]%2);//���m�̂x���W
		hei_x[A][i]=(520000-abs(150000-hei_y[A][i])/3)*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=300000*(i-gun_kazu[A]*2/3)/(gun_kazu[A]/3+gun_kazu[A]%2);//���m�̂x���W
		hei_x[A][i]=(530000+(hei_y[A][i]/100001*100000)/4)*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=hei_y[A][i]%100001+200000;
		hei_retu[A][i]=1;//���m�̑��� 0,�O��
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_jin[A][i]=(495000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}
	return 0;
}
int jin_06(){
	//�����˔j�̐w
	for(i=0;i<gun_kazu[A]+1;i++){
	//����`
	if(i==gun_kazu[A]){//�w�����z�u
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=580000*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=200000;//���m�̂x���W
		hei_retu[A][i]=1;//���m�̑��� 0,���
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=240000*i/(gun_kazu[A]/2-1);//���m�̂x���W
		if(hei_y[A][i]>120000)hei_y[A][i]+=60000;
		hei_x[A][i]=(600000-abs(150000-hei_y[A][i])/3)*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=1;//���m�̑��� 1,���
		}else if(i<gun_kazu[A]*5/6){
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=100000+100000*(i-gun_kazu[A]/2)/(gun_kazu[A]/3-1+gun_kazu[A]%2);//���m�̂x���W
		hei_x[A][i]=(490000+abs(150000-hei_y[A][i])*3/2)*(1-A*2)+A*640000;//���m�̂w���W
		if(i%3==0) hei_y[A][i]=(hei_y[A][i]-150000)*3/2+150000;
		else if(i%3==1) hei_y[A][i]=(hei_y[A][i]-150000)+150000;
		else  hei_y[A][i]=(hei_y[A][i]-150000)/2+150000;
		hei_x[A][i]-=(1-A*2)*(i%3)*50000;
		if(i%3>0)hei_x[A][i]+=(1-A*2)*10000;
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=120000+60000*(i-gun_kazu[A]*5/6)/(gun_kazu[A]/6+gun_kazu[A]%2);//���m�̂x���W
		hei_x[A][i]=(600000-abs(150000-hei_y[A][i])/3)*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=1;//���m�̑��� 0,�O��
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_jin[A][i]=(523000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}
	return 0;
}
int jin_07(){
	//�O�g��w
	for(i=0;i<gun_kazu[A]+1;i++){
	//����`
	if(i==gun_kazu[A]){//�w�����z�u
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=600000*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=30000;//���m�̂x���W
		hei_retu[A][i]=1;//���m�̑��� 0,�O��
		}else if(i<gun_kazu[A]/3){//�őO��
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=10000+280000*i/(gun_kazu[A]/3-1);//���m�̂x���W
		hei_x[A][i]=520000*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else if(i<gun_kazu[A]*2/3){//����
		if(i<gun_kazu[A]/2)c=butai_one[A];
		else c=butai_two[A];
		hei_dai();
		if(gun_kazu[A]%3==2)	hei_y[A][i]=10000+280000*(i-gun_kazu[A]/3)/(gun_kazu[A]/3);//���m�̂x���W
		else				   hei_y[A][i]=10000+280000*(i-gun_kazu[A]/3)/(gun_kazu[A]/3-1);//���m�̂x���W
		hei_x[A][i]=560000*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=1;//���m�̑��� 0,�O��
		}else{//�Ō��
		c=butai_two[A];
		hei_dai();
		if(gun_kazu[A]%3==0) hei_y[A][i]=10000+280000*(i-gun_kazu[A]*2/3)/(gun_kazu[A]/3-1);//���m�̂x���W
		else					hei_y[A][i]=10000+280000*(i-gun_kazu[A]*2/3)/(gun_kazu[A]/3);//���m�̂x���W
		hei_x[A][i]=600000*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=1;//���m�̑��� 0,�O��
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_jin[A][i]=(520000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}
	return 0;
}
int jin_08(){
	//�����w
	for(i=0;i<gun_kazu[A]+1;i++){
	//����`
	if(i==gun_kazu[A]){//�w�����z�u
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=550000*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=50000;//���m�̂x���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=300000*i/(gun_kazu[A]/2-1);//���m�̂x���W
		hei_x[A][i]=(450000+abs(hei_y[A][i]-150000))*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=300000*(i-gun_kazu[A]/2)/(gun_kazu[A]/2-1+gun_kazu[A]%2);//���m�̂x���W
		hei_x[A][i]=(450000+abs(hei_y[A][i]-150000))*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_jin[A][i]=(525000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}
	return 0;
}
int jin_09(){
	//�w���̐w
	for(i=0;i<gun_kazu[A]+1;i++){
	//����`
	if(i==gun_kazu[A]){//�w�����z�u
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=600000*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=90000;//���m�̂x���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=300000*i/(gun_kazu[A]/2-1);//���m�̂x���W
		hei_x[A][i]=600000*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=260000*(i-gun_kazu[A]/2)/(gun_kazu[A]/2-1+gun_kazu[A]%2);//���m�̂x���W
		if(hei_y[A][i]>129999) hei_y[A][i]+=40000;
		hei_x[A][i]=(570000-20000*(i%3))*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_jin[A][i]=(582000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}
	return 0;
}
int jin_10(){
	//�����w
	for(i=0;i<gun_kazu[A]+1;i++){
	//����`
	if(i==gun_kazu[A]){//�w�����z�u
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=600000*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=150000;//���m�̂x���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_x[A][i]=575000*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=300000*i/(gun_kazu[A]/2-1);//���m�̂x���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else{
		c=butai_two[A];
		hei_dai();
		hei_x[A][i]=565000*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=300000*(i-gun_kazu[A]/2)/(gun_kazu[A]/2-1+gun_kazu[A]%2);//���m�̂x���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_jin[A][i]=(570000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}

	return 0;
}
int jin_11(){
	//�g�󏂂̐w
	for(i=0;i<gun_kazu[A]+1;i++){
	//����`
	if(i==gun_kazu[A]){//�w�����z�u
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=600000*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=150000;//���m�̂x���W
		hei_retu[A][i]=1;//���m�̑��� 0,�O��
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=300000*i/(gun_kazu[A]/2-1);//���m�̂x���W
		hei_x[A][i]=(500000-abs(150000-hei_y[A][i])/3)*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else if(i<gun_kazu[A]*5/6+gun_kazu[A]%2){
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=10000+280000*(i-gun_kazu[A]/2)/(gun_kazu[A]/3-1+gun_kazu[A]%2);//���m�̂x���W
		hei_x[A][i]=(560000-abs(150000-hei_y[A][i])/3)*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=1;//���m�̑��� 0,�O��
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=135000+30000*(i-gun_kazu[A]*5/6-gun_kazu[A]%2)/(gun_kazu[A]/6-1);//���m�̂x���W
		hei_x[A][i]=(580000+abs(150000-hei_y[A][i]))*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=1;//���m�̑��� 0,�O��
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_jin[A][i]=(495000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}
	return 0;
}
int jin_12(){
	//�Ռ��w
	for(i=0;i<gun_kazu[A]+1;i++){
	//����`
	if(i==gun_kazu[A]){//�w�����z�u
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=500000*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=250000;//���m�̂x���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else if(i<gun_kazu[A]/2){
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=300000*i/(gun_kazu[A]);//���m�̂x���W
		hei_x[A][i]=(600000-abs(hei_y[A][i]-150000))*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else{
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=300000*i/(gun_kazu[A]-1);//���m�̂x���W
		hei_x[A][i]=(600000-abs(hei_y[A][i]-150000))*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_jin[A][i]=(525000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}

	return 0;
}
int jin_13(){
	//���C����
	for(i=0;i<gun_kazu[A]+1;i++){
	//����`
	if(i==gun_kazu[A]){//�w�����z�u
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=600000*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=150000;//���m�̂x���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		hei_wei[A][i]+=2;
		hei_pow[A][i]+=2;
		hei_def[A][i]+=2;
		hei_spd[A][i]+=2;
		hei_sta[A][i]+=2;
		hei_kaz[A][i]+=20;
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=120000*i/(gun_kazu[A]/2-1);//���m�̂x���W
		if(i%3==0)			hei_x[A][i]=(600000)*(1-A*2)+A*640000;//���m�̂w���W
		else	if(i%3==1)	hei_x[A][i]=(560000)*(1-A*2)+A*640000;//���m�̂w���W
		else				hei_x[A][i]=(520000)*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=180000+120000*(i-gun_kazu[A]/2)/(gun_kazu[A]/2-1+gun_kazu[A]%2);//���m�̂x���W
		if(i%3==0)			hei_x[A][i]=(600000)*(1-A*2)+A*640000;//���m�̂w���W
		else	if(i%3==1)	hei_x[A][i]=(560000)*(1-A*2)+A*640000;//���m�̂w���W
		else				hei_x[A][i]=(520000)*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_jin[A][i]=(560000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}
	return 0;
}
int jin_14(){
	//�\���w
	for(i=0;i<gun_kazu[A]+1;i++){
	//����`
	if(i==gun_kazu[A]){//�w�����z�u
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=525000*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=150000;//���m�̂x���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=300000*i/(gun_kazu[A]/2-1);//���m�̂x���W
		hei_x[A][i]=(450000+hei_y[A][i]/2)*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=300000*(i-gun_kazu[A]/2)/(gun_kazu[A]/2-1+gun_kazu[A]%2);//���m�̂x���W
		hei_x[A][i]=(600000-hei_y[A][i]/2)*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_jin[A][i]=(525000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}
	return 0;
}
int jin_15(){
	//���w
	for(i=0;i<gun_kazu[A]+1;i++){
	//����`
	if(i==gun_kazu[A]){//�w�����z�u
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=525000*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=150000;//���m�̂x���W
		hei_retu[A][i]=1;//���m�̑��� 0,�O��
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=300000*i/(gun_kazu[A]/2-1);//���m�̂x���W
		hei_x[A][i]=(450000+abs(150000-hei_y[A][i])/2)*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=300000*(i-gun_kazu[A]/2)/(gun_kazu[A]/2-1+gun_kazu[A]%2);//���m�̂x���W
		hei_x[A][i]=(600000-abs(150000-hei_y[A][i])/2)*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=1;//���m�̑��� 0,�O��
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_jin[A][i]=(487500*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}
	return 0;
}
int jin_16(){
	//�O�_�˔j�̐w
	for(i=0;i<gun_kazu[A]+1;i++){
	//����`
	if(i==gun_kazu[A]){//�w�����z�u
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=600000*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=150000;//���m�̂x���W
		hei_retu[A][i]=1;//���m�̑��� 0,�O��
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=300000*i/(gun_kazu[A]/2-1);//���m�̂x���W
		hei_x[A][i]=(540000)*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=130000*(i%3)+20000;//���m�̂x���W
		hei_x[A][i]=(550000+50000*(i-gun_kazu[A]/2)/(gun_kazu[A]/2-1+gun_kazu[A]%2))*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=1;//���m�̑��� 0,�O��
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_jin[A][i]=(540000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}
	return 0;
}
int jin_17(){
	//����w�`
	for(i=0;i<gun_kazu[A]+1;i++){
	//����`
	if(i==gun_kazu[A]){//�w�����z�u
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=510000*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=150000;//���m�̂x���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=(i%2*10000+145000);//���m�̂w���W
		hei_x[A][i]=(420000+180000*i/(gun_kazu[A]-1))*(1-A*2)+A*640000;//���m�̂x���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=(i%2*10000+145000);//���m�̂w���W
		hei_x[A][i]=(420000+180000*i/(gun_kazu[A]-1+gun_kazu[A]%2))*(1-A*2)+A*640000;//���m�̂x���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_jin[A][i]=(510000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}
	return 0;
}
int jin_18(){
	//���؂̐w
	for(i=0;i<gun_kazu[A]+1;i++){
	//����`
	if(i==gun_kazu[A]){//�w�����z�u
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=610000*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=150000;//���m�̂x���W
		hei_retu[A][i]=1;//���m�̑��� 0,�O��
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=300000*i/(gun_kazu[A]/2-1);//���m�̂x���W
		hei_x[A][i]=(450000+abs(150000-hei_y[A][i]))*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else if(i<gun_kazu[A]*5/6){
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=40000+220000*(i-gun_kazu[A]/2)/(gun_kazu[A]/3-1+gun_kazu[A]%2);//���m�̂x���W
		hei_x[A][i]=(490000+abs(150000-hei_y[A][i]))*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=1;//���m�̑��� 0,�O��
		}else {
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=100000+100000*(i-gun_kazu[A]*5/6)/(gun_kazu[A]/6-1+gun_kazu[A]%2);//���m�̂x���W
		hei_x[A][i]=(530000+abs(150000-hei_y[A][i]))*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=1;//���m�̑��� 0,�O��
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_jin[A][i]=(525000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}
	return 0;
}
int jin_19(){
	//���Q�̐w
	for(i=0;i<gun_kazu[A]+1;i++){
	//����`
	if(i==gun_kazu[A]){//�w�����z�u
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=470000*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=150000;//���m�̂x���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=150000+int((150000-250000*i/(gun_kazu[A]-1))*(sin(PI/2+6*PI*i/(gun_kazu[A]-1))));//���m�̂x���W
		hei_x[A][i]=(480000+int((150000-250000*i/(gun_kazu[A]-1))*(cos(PI/2+6*PI*i/(gun_kazu[A]-1)))))*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=150000+int((150000-250000*(i-gun_kazu[A]/2)/(gun_kazu[A]-1))*(sin(PI/2+6*PI*i/(gun_kazu[A]-1+gun_kazu[A]%2))));//���m�̂x���W
		hei_x[A][i]=(480000+int((150000-250000*(i-gun_kazu[A]/2)/(gun_kazu[A]-1))*(cos(PI/2+6*PI*i/(gun_kazu[A]-1+gun_kazu[A]%2)))))*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_jin[A][i]=(480000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}

	return 0;
}
int jin_20(){
	//�V�̗�
	for(i=0;i<gun_kazu[A]+1;i++){
	//����`
	if(i==gun_kazu[A]){//�w�����z�u
		c=butai_sirei[A];
		hei_dai();
		hei_x[A][i]=540000*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=150000;//���m�̂x���W
		hei_retu[A][i]=1;//���m�̑��� 0,�O��
		}else if(i<gun_kazu[A]/2){
		c=butai_one[A];
		hei_dai();
		hei_y[A][i]=280000*i/(gun_kazu[A]/2-1);//���m�̂x���W
		hei_x[A][i]=(450000+abs(70000-hei_y[A][i]%140000))*(1-A*2)+A*640000;//���m�̂w���W
		if(hei_y[A][i]>140000)hei_y[A][i]+=20000;
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else{
		c=butai_two[A];
		hei_dai();
		hei_y[A][i]=280000*(i-gun_kazu[A]/2)/(gun_kazu[A]/2+gun_kazu[A]%2-1);//���m�̂x���W
		if(hei_y[A][i]>140000)hei_y[A][i]+=20000;
		hei_x[A][i]=(540000+abs(150000-hei_y[A][i])/2)*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=1;//���m�̑��� 0,�O��
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_jin[A][i]=(492000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}


	return 0;
}
int jin_21(){

	//��{�V�O�{�T��

	//���̗��A������p
	for(i=0;i<gun_kazu[A]+1;i++){
	//����`
	if(i==gun_kazu[A]){//�w�����z�u
		c=19;
		hei_dai();
		hei_x[A][i]=540000*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=150000;//���m�̂x���W
		hei_retu[A][i]=1;//���m�̑��� 0,�O��
		}else if(i==gun_kazu[A]-4){
		c=21;//���F�p�[��
		hei_dai();
		hei_x[A][i]=500000*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=75000;//���m�̂x���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else if(i==gun_kazu[A]-3){
		c=20;//�t�F���l�N�X
		hei_dai();
		hei_x[A][i]=500000*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=225000;//���m�̂x���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else if(i==gun_kazu[A]-2){
		c=22;//���H�[���O
		hei_dai();
		hei_x[A][i]=580000*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=190000;//���m�̂x���W
		hei_retu[A][i]=1;//���m�̑��� 0,�O��
		}else if(i==gun_kazu[A]-1){
		c=17;//�C���S�X
		hei_dai();
		hei_x[A][i]=580000*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]=110000;//���m�̂x���W
		hei_retu[A][i]=1;//���m�̑��� 0,�O��
		}else if(i<(gun_kazu[A]-4)/6*2){//����`
		c=9;
		hei_dai();//�����P
		hei_y[A][i]=140000*i/((gun_kazu[A]-4)/6*2-1);//���m�̂x���W
		hei_x[A][i]=(450000+abs(70000-hei_y[A][i]))*(1-A*2)+A*640000;//���m�̂w���W
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}else if(i<(gun_kazu[A]-4)/6*3){//����
		if(i-(gun_kazu[A]-4)/6*2<(gun_kazu[A]-4)/12)c=4;
		else c=14;
		hei_dai();//�����Q
		hei_y[A][i]=120000*(i-(gun_kazu[A]-4)/6*2)/((gun_kazu[A]-4)/6-1);//���m�̂x���W
		hei_x[A][i]=(620000-hei_y[A][i]/2)*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]+=20000;
		hei_retu[A][i]=1;//���m�̑��� 0,�O��
		}else if(i<(gun_kazu[A]-4)/6*4){//���헳�R�c
		if(i-(gun_kazu[A]-4)/6*3>(gun_kazu[A]-4)/12)c=4;
		else c=14;
		hei_dai();//�����R
		hei_y[A][i]=120000*(i-(gun_kazu[A]-4)/6*3)/((gun_kazu[A]-4)/6-1);//���m�̂x���W
		hei_x[A][i]=(560000+hei_y[A][i]/2)*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]+=170000;
		hei_retu[A][i]=1;//���m�̑��� 0,�O��
		}else{//����
		c=10;
		hei_dai();//�����S
		hei_y[A][i]=140000*(i-(gun_kazu[A]-4)/6*4)/((gun_kazu[A]-4)/6*2);//���m�̂x���W
		hei_x[A][i]=(450000+abs(70000-hei_y[A][i]))*(1-A*2)+A*640000;//���m�̂w���W
		hei_y[A][i]+=160000;
		hei_retu[A][i]=0;//���m�̑��� 0,�O��
		}
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_jin[A][i]=(525000*(1-A*2)+A*640000)-hei_x[A][i];
		hei_retu_syoki[A][i]=hei_retu[A][i];
	}

	return 0;
}
//��p����
int sen_01(){
	flag_hyouhou[0]=1;
	if(hei_type[A][gun_kazu[A]]==8)strcpy_s(serihu, "�����ނ�`");
	else strcpy_s(serihu, "�S�R�O�i");
	hukidasi();now_meirei[A]=1;now_time[A]=0;
	for(i=0;i<100;i++){
		hei_sen[A][i]=2;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-5;//���m�̃��������ԕω���
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_02(){
	flag_hyouhou[23]=1;
	if(hei_type[A][gun_kazu[A]]==8)strcpy_s(serihu, "�ق��`");
	else strcpy_s(serihu, "�S�R���");hukidasi();now_meirei[A]=2;now_time[A]=0;

	for(i=0;i<100;i++){
		hei_sen[A][i]=0;//���m�̐퓬���
		hei_muk[A][i]=A;//���m�̌���
		hei_syou[A][i]=12;//���m�̃��������ԕω���
		hei_mov[A][i]=-hei_spd[A][i]*(A*2-1)*30;//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	return 0;
}
int sen_03(){
	flag_hyouhou[19]=1;
	if(hei_type[A][gun_kazu[A]]==8)strcpy_s(serihu, "�ӂɂ�`");
	else strcpy_s(serihu, "�S�R�h��");hukidasi();now_meirei[A]=3;now_time[A]=0;

	for(i=0;i<100;i++){
		hei_sen[A][i]=40;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-1;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_04(){
	flag_hyouhou[9]=1;
	if(hei_type[A][gun_kazu[A]]==8)strcpy_s(serihu, "���������`!!!");
	else strcpy_s(serihu, "�S�R�ˌ�");hukidasi();now_meirei[A]=4;now_time[A]=0;

	for(i=0;i<100;i++){
		hei_sen[A][i]=3;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-7;//���m�̃��������ԕω���
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_moral[A][i]+=6000;
		hei_hirou[A][i]+=25000;
		hei_totu[A][i]=1;
		hei_down[A][i]/=2;
	}
	for(t=0;t<60;t++){
			for(i=0;i<100;i++){
			hei_jump[A][i]+=19-t%20*2;
			}
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}
	for(i=0;i<100;i++){
		hei_emo[A][i]=1;
	}
	PlaySoundMem( se_no[13] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<60;t++){
		sentou_byouga();//�퓬���̕`�揈��
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
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
return 0;
}
int sen_05(){
	flag_hyouhou[36]=1;
	if(hei_type[A][gun_kazu[A]]==8)strcpy_s(serihu, "�����`��");
	else strcpy_s(serihu, "�S�R�ދp");hukidasi();now_meirei[A]=5;now_time[A]=0;

	for(i=0;i<100;i++){
		hei_sen[A][i]=100;//���m�̐퓬���
		hei_muk[A][i]=A;//���m�̌���
		hei_syou[A][i]=0;//���m�̃��������ԕω���
		hei_mov[A][i]=-hei_spd[A][i]*(A*2-1)*45;//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
return 0;
}
int sen_06(){
	flag_hyouhou[1]=1;
	strcpy_s(serihu, "�O��O�i");hukidasi();now_meirei[A]=6;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_retu[A][i]==0){//�O��̏��
		hei_sen[A][i]=3;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-5;//���m�̃��������ԕω���
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		}else{
		hei_sen[A][i]=40;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-1;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		}
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_07(){
	flag_hyouhou[2]=1;
	strcpy_s(serihu, "���O�i");hukidasi();now_meirei[A]=7;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_retu[A][i]==1){//�O��̏��
		hei_sen[A][i]=3;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-5;//���m�̃��������ԕω���
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		}else{
		hei_sen[A][i]=40;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-1;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		}
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
return 0;
}
int sen_08(){
	flag_hyouhou[3]=1;
	strcpy_s(serihu, "���U�O�i");hukidasi();now_meirei[A]=8;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_retu[A][i]==0){
		hei_sen[A][i]=3;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-5;//���m�̃��������ԕω���
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*75;//���m�̈ړ����x
		}else{
		hei_sen[A][i]=0;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=12;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		}
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
return 0;
}
int sen_09(){
	flag_hyouhou[4]=1;
	strcpy_s(serihu, "�����O�i");hukidasi();now_meirei[A]=9;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_retu[A][i]==0){
		hei_sen[A][i]=4;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-5;//���m�̃��������ԕω���
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*25;//���m�̈ړ����x
		}else{
		hei_sen[A][i]=0;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=12;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		}
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
return 0;
}
int sen_10(){
	flag_hyouhou[27]=1;
	strcpy_s(serihu, "��ލU��");hukidasi();now_meirei[A]=10;now_time[A]=0;

	for(i=0;i<100;i++){
		hei_sen[A][i]=4;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=4;//���m�̃��������ԕω���
		hei_mov[A][i]=-hei_spd[A][i]*(A*2-1)*10;//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
return 0;
}
int sen_11(){
	flag_hyouhou[5]=1;
	strcpy_s(serihu, "�㗃�U��");hukidasi();now_meirei[A]=11;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_y[A][i]<150000){
		hei_sen[A][i]=4;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-5;//���m�̃��������ԕω���
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		}else{
		hei_sen[A][i]=50;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-2;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		}
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
return 0;
}
int sen_12(){
	flag_hyouhou[6]=1;
	strcpy_s(serihu, "�����U��");hukidasi();now_meirei[A]=12;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_y[A][i]>=150000){
		hei_sen[A][i]=4;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-5;//���m�̃��������ԕω���
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		}else{
		hei_sen[A][i]=50;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-2;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		}
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
return 0;
}
int sen_13(){
	flag_hyouhou[10]=1;
	strcpy_s(serihu, "�O��ˌ�");hukidasi();now_meirei[A]=13;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_retu[A][i]==0){
		hei_sen[A][i]=3;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-7;//���m�̃��������ԕω���
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_moral[A][i]+=5000;
		hei_hirou[A][i]+=25000;
		hei_totu[A][i]=1;
		hei_down[A][i]/=2;
		}else{
		hei_sen[A][i]=40;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-1;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		hei_totu[A][i]=0;
		}
	}

	for(t=0;t<60;t++){
			for(i=0;i<100;i++){
			if(hei_retu[A][i]==0)hei_jump[A][i]+=19-t%20*2;
			}
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}
	for(i=0;i<100;i++){
		if(hei_retu[A][i]==0)hei_emo[A][i]=1;
	}
	PlaySoundMem( se_no[13] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<60;t++){
		sentou_byouga();//�퓬���̕`�揈��
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
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_14(){
	flag_hyouhou[11]=1;
	strcpy_s(serihu, "���ˌ�");hukidasi();now_meirei[A]=14;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_retu[A][i]==1){
		hei_sen[A][i]=3;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-7;//���m�̃��������ԕω���
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_moral[A][i]+=5000;
		hei_hirou[A][i]+=25000;
		hei_totu[A][i]=1;
		hei_down[A][i]/=2;
		}else{
		hei_sen[A][i]=40;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-1;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		hei_totu[A][i]=0;
		}
	}

	for(t=0;t<60;t++){
			for(i=0;i<100;i++){
			if(hei_retu[A][i]==1)hei_jump[A][i]+=19-t%20*2;
			}
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}

	for(i=0;i<100;i++){
		if(hei_retu[A][i]==1)hei_emo[A][i]=1;
	}
	PlaySoundMem( se_no[13] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<60;t++){
		sentou_byouga();//�퓬���̕`�揈��
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
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
return 0;
}
int sen_15(){
	flag_hyouhou[12]=1;
	strcpy_s(serihu, "�㗃�ˌ�");hukidasi();now_meirei[A]=15;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_y[A][i]<150000){
		hei_sen[A][i]=4;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-7;//���m�̃��������ԕω���
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_moral[A][i]+=5000;
		hei_hirou[A][i]+=25000;
		hei_totu[A][i]=1;
		hei_down[A][i]/=2;
		}else{
		hei_sen[A][i]=50;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-2;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		hei_totu[A][i]=0;
		}
	}

	for(t=0;t<60;t++){
			for(i=0;i<100;i++){
			if(hei_y[A][i]<150000)hei_jump[A][i]+=19-t%20*2;
			}
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}

	for(i=0;i<100;i++){
		if(hei_y[A][i]<150000)hei_emo[A][i]=1;
	}
	PlaySoundMem( se_no[13] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<60;t++){
		sentou_byouga();//�퓬���̕`�揈��
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
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}

	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
return 0;
}
int sen_16(){
	flag_hyouhou[13]=1;
	strcpy_s(serihu, "�����ˌ�");hukidasi();now_meirei[A]=16;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_y[A][i]>=150000){
		hei_sen[A][i]=3;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-7;//���m�̃��������ԕω���
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_moral[A][i]+=5000;
		hei_hirou[A][i]+=25000;
		hei_totu[A][i]=1;
		hei_down[A][i]/=2;
		}else{
		hei_sen[A][i]=50;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-2;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		hei_totu[A][i]=0;
		}
	}

	for(t=0;t<60;t++){
			for(i=0;i<100;i++){
			if(hei_y[A][i]>=150000)hei_jump[A][i]+=19-t%20*2;
			}
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}

	for(i=0;i<100;i++){
		if(hei_y[A][i]>=150000)hei_emo[A][i]=1;
	}
	PlaySoundMem( se_no[13] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<60;t++){
		sentou_byouga();//�퓬���̕`�揈��
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
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
return 0;
}
int sen_17(){
	flag_hyouhou[20]=1;
	strcpy_s(serihu, "�O��h��");hukidasi();now_meirei[A]=17;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_retu[A][i]==0){//�O��̏��
		hei_sen[A][i]=50;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-1;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		}else{
		hei_sen[A][i]=0;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=12;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		}
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_18(){
	flag_hyouhou[22]=1;
	strcpy_s(serihu, "�S�R�h��E��");hukidasi();now_meirei[A]=18;now_time[A]=0;

	for(i=0;i<100;i++){
		hei_sen[A][i]=60;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-3;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
return 0;
}
int sen_19(){
	flag_hyouhou[26]=1;
	strcpy_s(serihu, "��ޖh��");hukidasi();now_meirei[A]=19;now_time[A]=0;

	for(i=0;i<100;i++){
		hei_sen[A][i]=50;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=5;//���m�̃��������ԕω���
		hei_mov[A][i]=-hei_spd[A][i]*(A*2-1)*10;;//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_20(){
	flag_hyouhou[25]=1;
	strcpy_s(serihu, "���U���");hukidasi();now_meirei[A]=20;now_time[A]=0;

	for(i=0;i<100;i++){
		hei_sen[A][i]=0;//���m�̐퓬���
		hei_muk[A][i]=A;//���m�̌���
		hei_syou[A][i]=12;//���m�̃��������ԕω���
		hei_mov[A][i]=-hei_spd[A][i]*(A*2-1)*45;//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
return 0;
}
int sen_21(){
	flag_hyouhou[28]=1;
	strcpy_s(serihu, "�O����");hukidasi();now_meirei[A]=21;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_retu[A][i]==0){
		hei_sen[A][i]=50;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-1;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		}else{
		hei_sen[A][i]=3;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=0;//���m�̃��������ԕω���
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
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
		if(hei_retu[A][i]==0){//���O��A��ނ�����
		hei_sen[A][i]=0;//���m�̐퓬���
		hei_muk[A][i]=A;//���m�̌���
		hei_syou[A][i]=12;//���m�̃��������ԕω���
		hei_mov[A][i]=-hei_spd[A][i]*(A*2-1)*40;//���m�̈ړ����x
		hei_retu[A][i]=1;
		}else{//�����h�䂳����
		hei_sen[A][i]=50;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=4;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
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
		if(hei_retu[A][i]==0){//���O��A�U��������
		hei_sen[A][i]=3;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-5;//���m�̃��������ԕω���
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		}else{//�����ҋ@������
		hei_sen[A][i]=0;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=12;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		}
		hei_totu[A][i]=0;
	}
	gun_change[A]=0;
return 0;
}
int sen_24(){
	flag_hyouhou[29]=1;
	strcpy_s(serihu, "���U���");hukidasi();now_meirei[A]=24;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_retu[A][i]==0){
		hei_sen[A][i]=50;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-1;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		}else{
		hei_sen[A][i]=3;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=0;//���m�̃��������ԕω���
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
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
	strcpy_s(serihu, "�����񕜁E��");hukidasi();
	gun_change[A]=0;gun_jinkai[A]=0;
	sirei_tame[A]=180;

return 0;
}
int sen_26(){

	//�����񕜔���
	for(i=0;i<100;i++){
		hei_moral[A][i]+=1000+sirei_tame[A];//���m�̉���
		hei_hirou[A][i]-=10000+sirei_tame[A]*10;//���m�̉���
		hei_sen[A][i]+=200;
		hei_down[A][i]/=2;
	}
	hikari();
	for(i=0;i<100;i++){
		hei_emo[A][i]=9;
	}
	PlaySoundMem( se_no[12] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<50;t++){
		sentou_byouga();//�퓬���̕`�揈��
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
	strcpy_s(serihu, "�w�`��");hukidasi();now_meirei[A]=27;now_time[A]=0;

	for(i=0;i<100;i++){
		hei_sen[A][i]=0;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=6;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;
	gun_frontline[A]=front_line[A];
	gun_jinkai[A]=360;
return 0;
}
int sen_28(){
	now_meirei[A]=28;now_time[A]=0;
	//�w�`�񕜊���
	for(i=0;i<100;i++){
		hei_sen[A][i]=200;//���m�̐퓬���
		hei_moral[A][i]=10000;//���m�̃�����
		hei_retu[A][i]=hei_retu_syoki[A][i];
		hei_totu[A][i]=0;
		hei_down[A][i]=0;
	}
		hikari();
	for(i=0;i<100;i++){
		hei_sen[A][i]=40;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-1;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		hei_emo[A][i]=9;
	}
	PlaySoundMem( se_no[12] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<50;t++){
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}
	for(i=0;i<100;i++) hei_emo[A][i]=0;
	hikari();
	return 0;
}
int sen_29(){
	flag_hyouhou[21]=1;
	strcpy_s(serihu, "�O�񎀎�");hukidasi();now_meirei[A]=30;now_time[A]=0;

	for(i=0;i<100;i++){
		if(hei_retu[A][i]==0){//�O��̏��
		hei_sen[A][i]=90;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-3;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		}else{
		hei_sen[A][i]=0;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=12;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
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
	strcpy_s(serihu, "�����񕜁E��");hukidasi();
	gun_change[A]=0;gun_jinkai[A]=0;
	sirei_tame[A]=1180;
	return 0;
}
int sen_31(){
	flag_hyouhou[33]=1;
	strcpy_s(serihu, "�w�`�񕜁E��");hukidasi();now_meirei[A]=32;now_time[A]=0;

	for(i=0;i<100;i++){
		hei_sen[A][i]=0;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=4;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
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
	//���񂾃t��
	for(i=0;i<100;i++){
		if((hei_retu[A][i]==0 || i==gun_kazu[A]) && hei_toppa[A][i]==0 && hei_sibou[A][i]==0){
			hei_sibou[A][i]=1;
			hei_sen[A][i]=0;//���m�̐퓬���
			hei_muk[A][i]=A;//���m�̌���
			hei_syou[A][i]=0;//���m�̃��������ԕω���
			hei_mov[A][i]=0;//���m�̈ړ����x
		}
		else{
		hei_sen[A][i]=0;//���m�̐퓬���
		hei_muk[A][i]=A;//���m�̌���
		hei_syou[A][i]=12;//���m�̃��������ԕω���
		hei_mov[A][i]=-hei_spd[A][i]*(A*2-1)*40;//���m�̈ړ����x
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
		strcpy_s(serihu, "���̕��@");hukidasi();now_meirei[A]=33;now_time[A]=0;
		strcpy_s(serihu, "���񂾃t�����");hukidasi();

	for(i=0;i<100;i++){
		if((1-A*2)*hei_x[(A+1)%2][i]-(1-A*2)*gun_frontline[A]>0){
		hei_emo[(A+1)%2][i]=8;
		hei_down[(A+1)%2][i]=300;
		hei_moral[(A+1)%2][i]-=3000;
		}
	}
	PlaySoundMem( se_no[14] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<50;t++){
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}

	for(i=0;i<100;i++){
		hei_sen[A][i]=3;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-5;//���m�̃��������ԕω���
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
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
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}

		strcpy_s(serihu, "���܂���");hukidasi();
		strcpy_s(serihu, "������傢");hukidasi();
		strcpy_s(serihu, "���܂���");hukidasi();
		strcpy_s(serihu, "������傢");hukidasi();

	tenkou=300;
	tenki=1;

	for(i=0;i<100;i++){
		hei_sen[A][i]=40;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-1;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
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
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}

		strcpy_s(serihu, "�䂫����");hukidasi();
		strcpy_s(serihu, "�܂����傢");hukidasi();
		strcpy_s(serihu, "�䂫����");hukidasi();
		strcpy_s(serihu, "�܂����傢");hukidasi();

	tenkou=600;
	tenki=2;

	for(i=0;i<100;i++){
		hei_sen[A][i]=40;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-1;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_36(){
	flag_hyouhou[15]=1;
	strcpy_s(serihu, "���f���");hukidasi();now_meirei[A]=36;now_time[A]=0;

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
		sentou_byouga();//�퓬���̕`�揈��
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
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}

	for(i=0;i<100;i++) hei_emo[(A+1)%2][i]=0;

	for(i=0;i<100;i++){
		hei_sen[A][i]=3;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-5;//���m�̃��������ԕω���
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
	}
	hikari();
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	return 0;
}
int sen_37(){
	strcpy_s(serihu, "���Ηp��");hukidasi();
	gun_change[A]=0;gun_jinkai[A]=0;
	shot_line[A]=320;
	shot_tame[A]=180;

return 0;
}
int sen_38(){

	strcpy_s(serihu, "����");hukidasi();
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
	strcpy_s(serihu, "�w�����ˌ�");hukidasi();now_meirei[A]=39;now_time[A]=0;

	for(i=0;i<100;i++){
		if(i==gun_kazu[A]){
		hei_sen[A][i]=5;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-5;//���m�̃��������ԕω���
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*75;//���m�̈ړ����x
		hei_moral[A][i]+=10000;
		hei_hirou[A][i]-=100000;
		hei_totu[A][i]=1;
		hei_down[A][i]=0;
		}else{
		hei_sen[A][i]=40;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=4;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		hei_totu[A][i]=0;
		}
	}

	for(t=0;t<60;t++){
			hei_jump[A][gun_kazu[A]]+=19-t%20*2;
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}

	hei_emo[A][gun_kazu[A]]=1;

	PlaySoundMem( se_no[13] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<60;t++){
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_40(){
	flag_hyouhou[16]=1;
	strcpy_s(serihu, "��������");hukidasi();now_meirei[A]=40;now_time[A]=0;

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
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}

	for(i=0;i<100;i++){
			hei_sen[A][i]=50;//���m�̐퓬���
			hei_muk[A][i]=1-A;//���m�̌���
			hei_syou[A][i]=-2;//���m�̃��������ԕω���
			hei_mov[A][i]=0;//���m�̈ړ����x
			hei_totu[A][i]=0;
			hei_jump[A][i]=0;
	}
	j=0;
	for(i=0;i<100;i++){
		if(i!=gun_kazu[A] && hei_retu[A][i]==0 && hei_sibou[A][i]==0 && hei_toppa[A][i]==0){
			j++;
			if(j%3!=1)continue;
			hei_bom[A][i]=2;
			hei_sen[A][i]=4;//���m�̐퓬���
			hei_muk[A][i]=1-A;//���m�̌���
			hei_syou[A][i]=-5;//���m�̃��������ԕω���
			hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		}
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	gun_bom[A]=300;
	hikari();
	return 0;
}
int sen_41(){
	flag_hyouhou[17]=1;
	strcpy_s(serihu, "�΍U��");
	hukidasi();now_meirei[A]=41;now_time[A]=0;

	for(t=0;t<50;t++){
		for(i=0;i<100;i++){
		hei_x[A][i]+=(1-A*2)*750;
		}
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}

	PlaySoundMem( se_no[8] , DX_PLAYTYPE_BACK ) ;
	for(i=A*50;i<25+A*50;i++){
	fire_time[i]=300;//�Ώ��ł܂ł̎���
	fire_x[i]=front_line[A]+(A*2-1)*20000;//�΂̍��W
	fire_y[i]=i%50%25*12500;//�΂̍��W
	fire_v[i]=(A*2-1)*100;//�΂̈ړ����x
	}

	for(i=0;i<100;i++){
		hei_sen[A][i]=40;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-1;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();

	return 0;
}
int sen_42(){
	flag_hyouhou[38]=1;
	strcpy_s(serihu, "���Ƃ���");hukidasi();now_meirei[A]=42;now_time[A]=0;
	meireihuka[(A+1)%2]=600;//���ߕs�\���
	ikari[(A+1)%2]=1;//�{��\���p

	hei_muk[A][gun_kazu[A]]=1-A;
	for(t=0;t<200;t++){
		if(hei_x[A][gun_kazu[A]]<front_line[(A+1)%2]+60000 && A==0) break;
		if(hei_x[A][gun_kazu[A]]>front_line[(A+1)%2]-60000 && A==1) break;
		hei_x[A][gun_kazu[A]]+=1500*(A*2-1);
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}

	for(t=0;t<60;t++){
		hei_jump[A][gun_kazu[A]]+=38-t%20*4;
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}

	strcpy_s(serihu, "���܂��̂��[�����");hukidasi();now_meirei[A]=42;now_time[A]=0;
	strcpy_s(serihu, "�Ł`�@�@�@");hukidasi();
	strcpy_s(serihu, "�Ł`�ׁ@�@");hukidasi();
	strcpy_s(serihu, "�Ł`�ׂ��`");hukidasi();

	A=(A+1)%2;
	strcpy_s(serihu, "���ʂʂʂʂʂ�");hukidasi();
	strcpy_s(serihu, "�ӂ������^����");hukidasi();
	A=(A+1)%2;
	strcpy_s(serihu, "���������ł�");hukidasi();
	A=(A+1)%2;
	hei_emo[A][gun_kazu[A]]=6;
	for(t=0;t<60;t++){
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}
	hei_emo[A][gun_kazu[A]]=0;
	strcpy_s(serihu, "�n���ɂ��₪����");hukidasi();
	sen_04();
	A=(A+1)%2;


	for(i=0;i<100;i++){
		if(i!=gun_kazu[A]){
		hei_sen[A][i]=40;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-1;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		}else{
		hei_sen[A][i]=0;//���m�̐퓬���
		hei_muk[A][i]=A;//���m�̌���
		hei_syou[A][i]=12;//���m�̃��������ԕω���
		hei_mov[A][i]=-hei_spd[A][i]*(A*2-1)*40;//���m�̈ړ����x
		}
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();

	return 0;
}
int sen_43(){
	flag_hyouhou[39]=1;
	strcpy_s(serihu, "�Ă��d�d");hukidasi();now_meirei[A]=43;now_time[A]=0;
	strcpy_s(serihu, "�P�ނ��`");hukidasi();
	for(i=0;i<100;i++)hei_t2[A][i]=hei_x[A][i];
	for(i=0;i<100;i++)hei_muk[A][i]=A;

	for(t=0;t<60;t++){
		sentou_byouga();//�퓬���̕`�揈��
		for(i=0;i<100;i++)
		hei_x[A][i]-=(A*2-1)*11000;
		ScreenFlip();
	}
	A=(A+1)%2;
	strcpy_s(serihu, "�G�������Ă����d�d");hukidasi();
	strcpy_s(serihu, "�䂪�R�̏������I");hukidasi();
	for(t=0;t<60;t++){
			for(i=0;i<100;i++){
			hei_jump[A][i]+=19-t%20*2;
			}
		sentou_byouga();//�퓬���̕`�揈��
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
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}


	A=(A+1)%2;
	strcpy_s(serihu, "�߂��Ă������ƁI�H");hukidasi();

	A=(A+1)%2;
	for(i=0;i<100;i++){
		hei_emo[(A+1)%2][i]=8;
		hei_down[(A+1)%2][i]=900;
		hei_moral[(A+1)%2][i]-=3000;
	}
	PlaySoundMem( se_no[14] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<60;t++){
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}

	for(i=0;i<100;i++){
		hei_sen[A][i]=2;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-5;//���m�̃��������ԕω���
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();

return 0;
}
int sen_44(){
	flag_hyouhou[45]=1;
	strcpy_s(serihu, "��񑀍�k�P");hukidasi();now_meirei[A]=44;now_time[A]=0;
	meireihuka[(A+1)%2]=240;//���ߕs�\���
	ikari[(A+1)%2]=0;//�{��\���p
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
		sentou_byouga();//�퓬���̕`�揈��
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
		hei_sen[A][i]=40;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-1;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();

return 0;
}
int sen_45(){
	flag_hyouhou[46]=1;
	strcpy_s(serihu, "��񑀍�k�Q");hukidasi();now_meirei[A]=45;now_time[A]=0;
	meireihuka[(A+1)%2]=240;//���ߕs�\���
	ikari[(A+1)%2]=0;//�{��\���p
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
		sentou_byouga();//�퓬���̕`�揈��
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
		hei_sen[A][i]=40;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-1;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();


	return 0;
}
int sen_46(){
	flag_hyouhou[47]=1;
	strcpy_s(serihu, "��񑀍�k�R");hukidasi();now_meirei[A]=46;now_time[A]=0;
	meireihuka[(A+1)%2]=240;//���ߕs�\���
	ikari[(A+1)%2]=0;//�{��\���p
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
		sentou_byouga();//�퓬���̕`�揈��
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
		hei_sen[A][i]=40;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-1;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();

return 0;
}
int sen_47(){
	flag_hyouhou[48]=1;
	strcpy_s(serihu, "��񑀍�k�S");hukidasi();now_meirei[A]=47;now_time[A]=0;
	meireihuka[(A+1)%2]=240;//���ߕs�\���
	ikari[(A+1)%2]=0;//�{��\���p
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
		sentou_byouga();//�퓬���̕`�揈��
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
		hei_sen[A][i]=40;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-1;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();

	return 0;
}
int sen_48(){
	flag_hyouhou[49]=1;
	strcpy_s(serihu, "��񑀍�k�T");hukidasi();now_meirei[A]=48;now_time[A]=0;
	if(meireihuka[(A+1)%2]<0)meireihuka[(A+1)%2]=240;//���ߕs�\���
	else					 meireihuka[(A+1)%2]+=240;//���ߕs�\���
	ikari[(A+1)%2]=0;//�{��\���p
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
		sentou_byouga();//�퓬���̕`�揈��
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
		hei_sen[A][i]=40;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-1;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	hikari();
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	return 0;
}
int sen_49(){
	flag_hyouhou[43]=1;
	strcpy_s(serihu, "���@����");hukidasi();now_meirei[A]=49;now_time[A]=0;

	for(t=0;t<60;t++){
		if(t%12==0)	PlaySoundMem( se_no[0] , DX_PLAYTYPE_BACK ) ;
		if(t%3==0)for(i=0;i<100;i++){
		if(hei_retu[A][i]==0)continue;
		hei_muk[A][i]++;
		hei_muk[A][i]%=4;
		hei_jump[A][i]-=5;
		}
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}

	for(t=0;t<10;t++){
		for(i=0;i<100;i++){
		if(hei_retu[A][i]==0)continue;
		hei_jump[A][i]+=10;
		}
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}

	for(i=0+A*50;i<20+A*50;i++){
	ana_id[i]=2-A;//�ݒu��������
	ana_x[i]=back_line[A];//���Ƃ����̍��W
	ana_y[i]=i%25*15000;//���Ƃ����̍��W
	}

	for(i=0;i<100;i++){
		hei_sen[A][i]=0;//���m�̐퓬���
		hei_muk[A][i]=A;//���m�̌���
		hei_syou[A][i]=12;//���m�̃��������ԕω���
		hei_mov[A][i]=-hei_spd[A][i]*(A*2-1)*30;//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	return 0;
}
int sen_50(){
	flag_hyouhou[34]=1;
	strcpy_s(serihu, "�h����");hukidasi();now_meirei[A]=50;now_time[A]=0;
	for(t=0;t<50;t++){
		for(i=0;i<100;i++){
		hei_x[A][i]+=(1-A*2)*750;
		}
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}

	for(i=A*50;i<25+A*50;i++){
	saku_tai[i]=100;//��̑ϋv��
	saku_x[i]=front_line[A]+(A*2-1)*20000;//��̍��W
	saku_y[i]=i%25*12500-500000;//��̍��W
	}

	for(t=0;t<50;t++){
	for(i=A*50;i<50+A*50;i++){
		if(i==25 || i==75 )break;
		saku_y[i]+=10000;//��̍��W
		}
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}

	for(i=0;i<100;i++){
		hei_sen[A][i]=40;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-1;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	hikari();
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	return 0;
}
int sen_51(){
	flag_hyouhou[35]=1;
	strcpy_s(serihu, "���ۍ��");hukidasi();now_meirei[A]=51;now_time[A]=0;

	for(i=A*50+25;i<50+A*50;i++){
	saku_tai[i]=100;//��̑ϋv��
	saku_x[i]=40000+(1-A)*560000;//��̍��W
	saku_y[i]=i%25*12500-500000;//��̍��W
	}

	for(t=0;t<50;t++){
	for(i=A*50+25;i<50+A*50;i++){
		saku_y[i]+=10000;//��̍��W
		}
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}

	for(i=0;i<100;i++){
		hei_sen[A][i]=40;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-1;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	hikari();
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	return 0;
}
int sen_52(){
	flag_hyouhou[18]=1;
	strcpy_s(serihu, "�w�΂̌v");hukidasi();now_meirei[A]=52;now_time[A]=0;

	if(A==0)xa=0;
	else xa=640000;

	for(i=A*50+25;i<50+A*50;i++){
	fire_time[i]=600;//�Ώ��ł܂ł̎���
	fire_x[i]=back_line[A]+(1-A*2)*32000;//�΂̍��W
	fire_y[i]=i%25*12500;//�΂̍��W
	fire_v[i]=(A*2-1)*200;//�΂̈ړ����x
	}
	PlaySoundMem( se_no[8] , DX_PLAYTYPE_BACK ) ;

	for(t=0;t<60;t++){
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}

	for(i=0;i<100;i++){
		hei_sen[A][i]=4;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-5;//���m�̃��������ԕω���
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*25;
		hei_totu[A][i]=0;
	}
	hikari();
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	return 0;
}
int sen_53(){
	strcpy_s(serihu, "���Ηp��");hukidasi();//��
	gun_change[A]=0;gun_jinkai[A]=0;
	shot_line[A]=120;
	shot_tame[A]=180;
	return 0;
}
int sen_54(){
	strcpy_s(serihu, "���Ηp��");hukidasi();//�E
	gun_change[A]=0;gun_jinkai[A]=0;
	shot_line[A]=520;
	shot_tame[A]=180;
	return 0;
}
int sen_55(){
	flag_hyouhou[37]=1;
	strcpy_s(serihu, "���U�ދp");hukidasi();now_meirei[A]=55;now_time[A]=0;
	for(i=0;i<100;i++){
		hei_sen[A][i]=100;//���m�̐퓬���
		hei_muk[A][i]=A;//���m�̌���
		hei_syou[A][i]=0;//���m�̃��������ԕω���
		hei_mov[A][i]=-hei_spd[A][i]*(A*2-1)*100;//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	return 0;
}
int sen_56(){
	flag_hyouhou[7]=1;
	strcpy_s(serihu, "�S�R�O�i�E��");hukidasi();now_meirei[A]=56;now_time[A]=0;
	for(i=0;i<100;i++){
		hei_sen[A][i]=4;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-6;//���m�̃��������ԕω���
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_57(){
	flag_hyouhou[24]=1;
	if(hei_type[A][gun_kazu[A]]==8)strcpy_s(serihu, "���Ƃ���");
	else strcpy_s(serihu, "�S�R�x��");hukidasi();now_meirei[A]=57;now_time[A]=0;

	for(i=0;i<100;i++){
		hei_sen[A][i]=0;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=12;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_58(){
	flag_hyouhou[8]=1;
	strcpy_s(serihu, "���́E�E�E�E");hukidasi();
	strcpy_s(serihu, "��������!!!");hukidasi();

	PlaySoundMem( se_no[6] , DX_PLAYTYPE_BACK ) ;
	now_meirei[A]=58;now_time[A]=0;
	for(i=0;i<100;i++){
		fire_v[i]=(A*2-1)*abs(fire_v[i])*4;//�΂̈ړ����x
		fire_time[i]/=2;
	}
	for(i=0;i<100;i++){
		hei_sen[A][i]=3;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-5;//���m�̃��������ԕω���
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*90;//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_59(){
	flag_hyouhou[44]=1;
	strcpy_s(serihu, "�n������");
	hukidasi();now_meirei[A]=59;now_time[A]=0;
	for(t=0;t<63;t++){
			if(t%12==0)	PlaySoundMem( se_no[1] , DX_PLAYTYPE_BACK ) ;
			for(i=0;i<100;i++){
			if(hei_retu[A][i]==1)continue;
			hei_jump[A][i]+=(4-t%9)*25;
			}
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}

	for(i=25+A*50;i<45+A*50;i++){
	ana_id[i]=2-A;//�ݒu��������
	ana_x[i]=front_line[A];//���Ƃ����̍��W
	ana_y[i]=i%25*15000;//���Ƃ����̍��W
	}

	for(i=0;i<100;i++){
		hei_sen[A][i]=0;//���m�̐퓬���
		hei_muk[A][i]=A;//���m�̌���
		hei_syou[A][i]=12;//���m�̃��������ԕω���
		hei_mov[A][i]=-hei_spd[A][i]*(A*2-1)*30;//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	return 0;
}
int sen_60(){

	strcpy_s(serihu, "���炢�ނӂ��`�΁`");hukidasi();
	strcpy_s(serihu, "������̂�����`!!!");hukidasi();

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
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}
	
	for(i=0;i<gun_kazu[A];i++){
	hei_hura[A][i]=0;
	}

	for(i=0;i<100;i++){
		hei_sen[A][i]=2;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-5;//���m�̃��������ԕω���
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_61(){
	strcpy_s(serihu, "�M����ҒB");hukidasi();now_meirei[A]=61;now_time[A]=0;

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
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}

	for(i=0;i<100;i++){
			hei_sen[A][i]=50;//���m�̐퓬���
			hei_muk[A][i]=1-A;//���m�̌���
			hei_syou[A][i]=-2;//���m�̃��������ԕω���
			hei_mov[A][i]=0;//���m�̈ړ����x
			hei_totu[A][i]=0;
			hei_jump[A][i]=0;
	}
	j=0;
	for(i=0;i<100;i++){
		if(i!=gun_kazu[A] && hei_retu[A][i]==0 && hei_sibou[A][i]==0 && hei_toppa[A][i]==0){
			j++;
			if(j%4!=1)continue;
			hei_bom[A][i]=2;
			hei_sen[A][i]=4;//���m�̐퓬���
			hei_muk[A][i]=1-A;//���m�̌���
			hei_syou[A][i]=-5;//���m�̃��������ԕω���
			hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		}
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	gun_bom[A]=300;
	hikari();
	return 0;
}
int sen_62(){
	if(hei_type[A][gun_kazu[A]]==8){
		strcpy_s(serihu, "�������̂Ƃ�ł��`");
	}else strcpy_s(serihu, "������");

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
		hei_emo[A][i]=7;//���m�̉���
		}
	}
	PlaySoundMem( se_no[12] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<60;t++){
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}
	for(i=0;i<100;i++)hei_emo[A][i]=0;//���m�̉���

	for(i=0;i<100;i++){
		hei_sen[A][i]=2;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-5;//���m�̃��������ԕω���
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_moral[A][i]+=5000;
		hei_hirou[A][i]-=50000;
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_63(){

	strcpy_s(serihu, "�i���N�̕�");hukidasi();now_meirei[A]=4;now_time[A]=0;

	for(i=0;i<100;i++){
		hei_sen[A][i]=4;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-12;//���m�̃��������ԕω���
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*75;//���m�̈ړ����x
		hei_moral[A][i]=10000;
		hei_hirou[A][i]=0;
		hei_totu[A][i]=1;
		hei_down[A][i]/=2;
	}

	for(t=0;t<60;t++){
			for(i=0;i<100;i++){
			hei_jump[A][i]+=19-t%20*2;
			}
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}

	for(i=0;i<100;i++){
		hei_emo[A][i]=1;
	}
	PlaySoundMem( se_no[13] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<60;t++){
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}
	for(i=0;i<100;i++){
		hei_emo[(A+1)%2][i]=8;
		hei_down[(A+1)%2][i]=300;
		hei_moral[(A+1)%2][i]=0;
	}
	PlaySoundMem( se_no[14] , DX_PLAYTYPE_BACK ) ;
	for(t=0;t<60;t++){
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_64(){

	if(hei_type[A][gun_kazu[A]]==8){
		strcpy_s(serihu, "�������Ⴆ�`");
	}else strcpy_s(serihu, "��M�g");

	hukidasi();now_meirei[A]=41;now_time[A]=0;

	for(t=0;t<50;t++){
		for(i=0;i<100;i++){
		hei_x[A][i]+=(1-A*2)*750;
		}
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}

	if(hei_type[A][gun_kazu[A]]==8){
		strcpy_s(serihu, "�ӂ�����!!!");
		hukidasi();
	}

	PlaySoundMem( se_no[8] , DX_PLAYTYPE_BACK ) ;

	for(i=A*50;i<25+A*50;i++){
	fire_time[i]=300;//�Ώ��ł܂ł̎���
	fire_x[i]=front_line[A];//�΂̍��W
	fire_y[i]=i%50%25*12500;//�΂̍��W
	fire_v[i]=(A*2-1)*200;//�΂̈ړ����x
	}

	for(i=0;i<100;i++){
		hei_sen[A][i]=40;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-1;//���m�̃��������ԕω���
		hei_mov[A][i]=0;//���m�̈ړ����x
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
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}

	if(hei_type[A][gun_kazu[A]]==8){
		strcpy_s(serihu, "�������܂���");hukidasi();
		strcpy_s(serihu, "������傢");hukidasi();
		strcpy_s(serihu, "�������܂���");hukidasi();
		strcpy_s(serihu, "������傢");hukidasi();
	}else{
		strcpy_s(serihu, "�������܂���");hukidasi();
		strcpy_s(serihu, "������傢");hukidasi();
		strcpy_s(serihu, "�������܂���");hukidasi();
		strcpy_s(serihu, "������傢");hukidasi();
	}

	tenkou=600;
	tenki=1;

	for(i=0;i<100;i++){
		hei_sen[A][i]=2;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-5;//���m�̃��������ԕω���
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	PlaySoundMem( se_no[15] , DX_PLAYTYPE_BACK ) ;
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
return 0;
}
int sen_66(){

	if(hei_type[A][gun_kazu[A]]==8) strcpy_s(serihu, "����[���񂩂�");
	else strcpy_s(serihu, "�������f���^");
	hukidasi();


	now_meirei[A]=58;now_time[A]=0;
	for(i=0;i<100;i++){
		fire_v[i]=(A*2-1)*abs(fire_v[i])*8;//�΂̈ړ����x
		fire_time[i]/=4;
	}
	for(i=0;i<100;i++){
		hei_sen[A][i]=5;
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-5;//���m�̃��������ԕω���
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*(100+abs(50-hei_y[A][i]/3000));//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	PlaySoundMem( se_no[6] , DX_PLAYTYPE_BACK ) ;
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
int sen_67(){

	if(hei_type[A][gun_kazu[A]]==8){
		strcpy_s(serihu, "�ǂ�ǂ�ǂǂ�");
		hukidasi();
		strcpy_s(serihu, "�ǂ�ǂǂ�");
	}else strcpy_s(serihu, "��n�k");
	hukidasi();now_meirei[A]=59;now_time[A]=0;
	for(t=0;t<63;t++){
		if(t%12==0)	PlaySoundMem( se_no[1] , DX_PLAYTYPE_BACK ) ;
			for(i=0;i<100;i++){
			if(hei_retu[A][i]==1)continue;
			hei_jump[A][i]+=(4-t%9)*25;
			}
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}

	for(i=0;i<100;i++){
	hei_ana[(A+1)%2][i]=180;
	}

	for(i=0;i<100;i++){
		hei_sen[A][i]=2;//���m�̐퓬���
		hei_muk[A][i]=1-A;//���m�̌���
		hei_syou[A][i]=-5;//���m�̃��������ԕω���
		hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���m�̈ړ����x
		hei_totu[A][i]=0;
	}
	sirei_tame[A]=0;gun_change[A]=0;gun_jinkai[A]=0;
	hikari();
	return 0;
}
//�`�h
int AI_kihon(){

	//���`�F�b�N
	if(front_line[0]<=back_line[0])c=0;else c=1;//�Ȃ�O��O
	if(front_line[1]>=back_line[1])J=0;else J=1;//�Ȃ�O��O
	//���C���`�F�b�N
	if(c==0)AI_line[0]=front_line[0];
	else	AI_line[0]=back_line[0];
	if(J==0)AI_line[1]=front_line[1];
	else	AI_line[1]=back_line[1];
	//���f�`�F�b�N
	if(front_line[0]<front_line[1] && front_line[0]>back_line[1] && now_meirei[0]==36) AI_bundan=1;
	else AI_bundan=0;
	//�Ō���`�F�b�N
	AI_saikoubi[0]=0;
	AI_saikoubi[1]=640000;
	for(i=0;i<100;i++){
	if(hei_sibou[0][i]==0 && hei_toppa[0][i]==0 && AI_saikoubi[0]<hei_x[0][i] && hei_retu[0][i]==0) AI_saikoubi[0]=hei_x[0][i];
	if(hei_sibou[1][i]==0 && hei_toppa[1][i]==0 && AI_saikoubi[1]>hei_x[1][i] && hei_retu[1][i]==0) AI_saikoubi[1]=hei_x[1][i];
	}


	//�������v�Z
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

	//�_���[�W�v�Z
	//�g�p���̐�p�ɂ��U���͌v�Z ��핔���̃��������όv�Z���ˌ��C��
	AIsentou_check();//xa-���R ya-�G�R

	A=1;
	return 0;
}
int AIsentou_check(){

	//�����I�����[�̏ꍇ�@���̂܂�
	//�U�����h��̏ꍇ�@�U���Ɣ��f
	//�w�����̂ݍU���̏ꍇ�A�U���Ɣ��f
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

	if(xa==0 && xb==0)gun_sentou[0]=0;//�퓬��ԃ`�F�b�N
	else if(xb==0) gun_sentou[0]=1;
	else  gun_sentou[0]=2;
	if(ya==0 && yb==0)gun_sentou[1]=0;
	else if(yb==0) gun_sentou[1]=1;
	else  gun_sentou[1]=2;
	//�U���_�E�����ʂ̌v�Z//�S���_�E�����Ă�����|�P
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
	//�w�`�ɂ��C���v�Z//
	if(gun_jinkei[0]==2) xb++;//�h�{�P�Ɣ��f
	else if(gun_jinkei[0]==3 && ya>0) xa++;//�U�{�P�Ɣ��f
	else if(gun_jinkei[0]==7) if(xa==0)xb++;else xa++;//�U�����U�{�P�A�h�䎞�h�{�P�Ɣ��f
	else if(gun_jinkei[0]==9 && ya>0) xa+=2;//�U�{�Q�Ɣ��f
	else if(gun_jinkei[0]==10 && ya>0) xa++;//�U�{�P�Ɣ��f
	else if(gun_jinkei[0]==12) xb++;//�h�{�P�Ɣ��f
	else if(gun_jinkei[0]==19) xb++;//�h�{�P�Ɣ��f
	else if(gun_jinkei[0]==20) xb++;//�h�{�P�Ɣ��f
	else if(gun_jinkei[0]==21 && ya>0) xa++;//�U�{�P�Ɣ��f
	if(gun_jinkei[1]==2) yb++;//�h�{�P�Ɣ��f
	else if(gun_jinkei[1]==3 && ya>0) ya++;//�U�{�P�Ɣ��f
	else if(gun_jinkei[1]==7) if(ya==0)yb++;else ya++;//�U�����U�{�P�A�h�䎞�h�{�P�Ɣ��f
	else if(gun_jinkei[1]==9 && ya>0) ya+=2;//�U�{�Q�Ɣ��f
	else if(gun_jinkei[1]==10 && ya>0) ya++;//�U�{�P�Ɣ��f
	else if(gun_jinkei[1]==12) yb++;//�h�{�P�Ɣ��f
	else if(gun_jinkei[1]==19) yb++;//�h�{�P�Ɣ��f
	else if(gun_jinkei[1]==20) yb++;//�h�{�P�Ɣ��f
	else if(gun_jinkei[1]==21 && ya>0) ya++;//�U�{�P�Ɣ��f
	//�����\�͂ɂ��C���v�Z//���ςŔ��f�A�؂�̂�
	if(xa!=0)xa+=(job_pow[butai_one[0]]+job_pow[butai_two[0]])/2;//���m�̊�{�U����
	xb+=(job_def[butai_one[0]]+job_def[butai_two[0]])/2;//���m�̊�{�h���
	if(ya!=0)ya+=(job_pow[butai_one[1]]+job_pow[butai_two[1]])/2;//���m�̊�{�h���
	yb+=(job_def[butai_one[1]]+job_def[butai_two[1]])/2;//���m�̊�{�h���

	AI_damemin[0]=0;AI_damemax[0]=0;
	AI_damemin[1]=0;AI_damemax[1]=0;

	//�ŏ��_���[�W���Œ�_���[�W��{�v�Z
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
	//�ő�_���[�W�ƍŏ��_���[�W���畽�ς����߂�
	if(ya>0)AI_dame[0]=(AI_damemin[0]+AI_damemax[0])*5;
	if(xa>0)AI_dame[1]=(AI_damemin[1]+AI_damemax[1])*5;

	return 0;
}
int AI_01(){

	//�w�������S��
	if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//�΍U�ߑΉ�
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//�ˌ��g�p����
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//�����񕜎g�p����
	if(AI_rest[4]==0 && now_time[1]>60 && AI_rest[30]>0){
	sen_30();
	AI_rest[30]--;
	return 0;
	}
	//�ˌ����s����
	if(now_meirei[1]==4 && AI_moral[1]>2000) return 0;
	//�S�R�O�i���狭���O�i�ֈڍs
	if(now_meirei[1]==1 && AI_line[1]>AI_line[0]-60000 && AI_rest[9]>0 && now_time[1]>10) {sen_09();AI_rest[9]--;return 0;}

	if(AI_rest[9]>0 && AI_line[1]>AI_line[0]-60000)A_meirei=9;//�U��
	else A_meirei=1;

	if(AI_rest[57]>0 && front_line[1]<320*1000)B_meirei=57;//���
	else if(AI_rest[19]>0) B_meirei=19;
	else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_02(){

	//�w�������S��
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//�΍U�ߑΉ�
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//�O���㑱�s
	if(now_meirei[1]==24 || now_meirei[1]==21 || now_meirei[1]==22) return 0;
	//�ˌ��g�p����
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//�O��ˌ��g�p����
	if(AI_rest[13]>0 && AI_rest[4]<=0 && AI_moral[1]<4000 && gun_retu[1]==2){
	sen_13();
	AI_rest[13]--;
	return 0;
	}
	//���f�Ή�,����
	if(AI_bundan==1){
		if(AI_rest[24]>0) sen_24();
		else			  sen_21();
		AI_rest[24]--;
		return 0;
	}
	//�ˌ����s
	if(now_meirei[1]==4 && AI_moral[1]>4000) return 0;
	//��񉷑�
	if(con_time==60 && gun_retu[1]==2) sen_06();
	//�����������������傫���Ȃ�ƌ�シ��
	if(front_line[1]>back_line[1]+64000 && gun_moral[1]-AI_moral[1]>2000){
		if(AI_rest[24]>0){
			sen_24();AI_rest[24]--;
		}
		else sen_21();
		return 0;
	}
	if(front_line[1]>back_line[1]+64000 && gun_retu[1]==2)A_meirei=6;//�U��
	else A_meirei=1;

	if(front_line[1]>back_line[1]+64000 && gun_moral[1]-AI_moral[1]>1000){//���
		if(AI_rest[24]>0)B_meirei=24;
		else B_meirei=21;
	}else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_03(){

	//�U���̔g�w
	//�w�������S��
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//�΍U�ߑΉ�
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//�O���㑱�s
	if(now_meirei[1]==24 || now_meirei[1]==21 || now_meirei[1]==22) return 0;
	//�ˌ��g�p����
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//���ˌ��g�p����
	if(AI_rest[14]>0 && AI_rest[4]<=0 && AI_moral[1]<4000 && gun_retu[1]==0){
	sen_14();
	AI_rest[14]--;
	return 0;
	}
	//���f���A��㒼��
	if(now_meirei[1]==21 && gun_retu[1]==0 && AI_rest[36]>0 && now_time[1]==120){
		sen_36();
		AI_rest[36]--;
		return 0;
	}
	//���f�Ή�
	if(AI_bundan==1){
		sen_21();
		return 0;
	}
	//�ˌ����s
	if(now_meirei[1]==4 && AI_moral[1]>4000) return 0;
	//��񉷑�
	if(con_time==60) if(AI_rest[9]>0){sen_09();AI_rest[0]--;}else sen_01();
	//�����������傫���Ȃ�ƌ�シ��
	if(front_line[1]>back_line[1]+64000 && gun_moral[1]-AI_moral[1]>2000){
		sen_21();
		return 0;
	}

	if(front_line[1]>back_line[1]+64000 && AI_rest[9]>0)A_meirei=9;//�U��
	else A_meirei=1;

	if(front_line[1]>back_line[1]+64000 && gun_moral[1]-AI_moral[1]>1000){//���
		if(AI_rest[24]>0)B_meirei=24;
		else B_meirei=21;
	}else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_04(){

	//�㗃�˔j�̐w

	//�w�������S��
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//�΍U�ߑΉ�
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//�ˌ��g�p����
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//�㗃�ˌ��g�p����
	if(AI_rest[15]>0 && AI_rest[4]<=0 && AI_moral[1]<4000 && AI_ueyoku[1]>0){
	sen_15();
	AI_rest[15]--;
	return 0;
	}
	//���f�Ή�
	if(AI_bundan==1 && back_line[1]>60000 && AI_rest[55]>3){//���f�Ή�
		sen_55();//���U�ދp
		AI_rest[55]--;
		return 0;
	}
	if(now_meirei[1]==55 && back_line[1]>60000 && AI_bundan==1){
		return 0;
	}
	//�ˌ����s
	if((now_meirei[1]==4 || now_meirei[1]==15)&& AI_moral[1]>4000) return 0;

	//�����񕜁E��
	if(now_time[1]==60 && AI_rest[25]>AI_rest[4]+AI_rest[15]){
		sen_25();
		AI_rest[25]--;
	}
	//�O��O�i����㗃�U���փV�t�g
	if(now_meirei[1]==1 && AI_line[1]>AI_line[0]-60000 && AI_rest[11]>0 && AI_ueyoku[1]>0  && now_time[1]>10) {sen_11();AI_rest[11]--;}

	if(AI_line[1]>AI_line[0]-60000 && AI_rest[11]>0 && AI_ueyoku[1]>0 )A_meirei=11;
	else A_meirei=1;
	if(AI_rest[20]>0)B_meirei=20;
	else B_meirei=2;

	AI_VScheck();
	return 0;
}
int AI_05(){

	//�����˔j�̐w

	//�w�������S��
	if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//�΍U�ߑΉ�
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//�ˌ��g�p����
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//�����ˌ��g�p����
	if(AI_rest[16]>0 && AI_rest[4]<=0 && AI_moral[1]<4000 && AI_sitayoku[1]>0){
	sen_16();
	AI_rest[16]--;
	return 0;
	}
	//���f�Ή�
	if(AI_bundan==1 && back_line[1]>60000 && AI_rest[55]>3){//���f�Ή�
		sen_55();//���U�ދp
		AI_rest[55]--;
		return 0;
	}
	if(now_meirei[1]==55 && back_line[1]>60000 && AI_bundan==1){
		return 0;
	}
	//�ˌ����s
	if((now_meirei[1]==4 || now_meirei[1]==16)&& AI_moral[1]>4000) return 0;

	//�h����
	if(AI_rest[50]>0 && AI_line[1]>hei_x[1][gun_kazu[1]]+100000){
		sen_50();
		AI_rest[50]--;
	}
	//�h�����͑S�R�O�i
	if(now_meirei[1]==50) sen_01();

	//�O��O�i���牺���U���փV�t�g
	if(now_meirei[1]==1 && AI_line[1]>AI_line[0]-60000 && AI_rest[12]>0 && AI_sitayoku[1]>AI_ueyoku[1] && now_time[1]>10) {sen_12();AI_rest[12]--;}

	//�����˔j�I���S�R�O�i�փV�t�g
	if((now_meirei[1]==12 || now_meirei[1]==16) && AI_sitayoku[1]<AI_ueyoku[1] && now_time[1]>10) sen_01();


	if(AI_line[1]>AI_line[0]-60000 && AI_rest[12]>0 && AI_sitayoku[1]>AI_ueyoku[1] )A_meirei=12;
	else A_meirei=1;
	if(AI_rest[10]>0)B_meirei=10;
	else B_meirei=2;

	AI_VScheck();
	
	return 0;
}
int AI_06(){

	//�����˔j
	//19;3;//��ޖh��
	//31;2;//�w�`�񕜁E��
	//36;1;//���f���
	//14;1;//���ˌ�

	//�w�������S��
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//�΍U�ߑΉ�
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//�ˌ��g�p����
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//���ˌ��g�p����
	if(AI_rest[14]>0 && AI_rest[4]<=0 && AI_moral[1]<4000 && gun_retu[1]==0){
	sen_14();
	AI_rest[14]--;
	return 0;
	}
	//���f���g�p����
	if(AI_rest[36]>0){
	AI_rest[36]--;
	sen_36();
	return 0;
	}
	//�ˌ����s����
	if(now_meirei[1]==4 && AI_moral[1]>2000) return 0;

	A_meirei=1;//�U��

	if(AI_rest[31]>0) B_meirei=31;//�w�`�񕜁E��
	else if(AI_rest[19]>0) B_meirei=19;//���
	else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_07(){

	//�O�g��w
	//7;10;//���O�i
	//27;3;//�w�`��
	//14;1;//���ˌ�
	//31;2;//�w�`�񕜁E��

	//�w�������S��
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//�΍U�ߑΉ�
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//�ˌ��g�p����
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//���ˌ��g�p����
	if(AI_rest[14]>0 && AI_rest[4]<=0 && AI_moral[1]<4000 && gun_retu[1]==0){
	sen_14();
	AI_rest[14]--;
	return 0;
	}
	//�ˌ����s����
	if(now_meirei[1]==4 && AI_moral[1]>2000) return 0;
	//�ŏ��Ɍ��O�i
	if(now_time[1]<95 && now_time[1]>90 && now_meirei[1]!=7 && gun_retu[1]==0){sen_07();return 0;}
	//�w�`�񕜌�͌��O�i
	if(now_meirei[1]==28 && gun_retu[1]==0){sen_07();return 0;}
	//���U�����s
	if(front_line[1]>back_line[1] && now_meirei[1]==7)return 0;

	if(gun_retu[1]==0)A_meirei=7;//�U��
	else A_meirei=1;

	if(AI_rest[31]>0)B_meirei=31;//���
	else if(AI_rest[27]>0) B_meirei=27;
	else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_08(){

	//�����w
	//20;3;//���U���
	//8;4;//���U�O�i
	//9;4;//�����O�i
	//25;3;//�����񕜁E��

	//�w�������S��
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//�΍U�ߑΉ�
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//�ˌ��g�p����
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//�����񕜁E��g�p����
	if(gun_hirou[1]>10000 && gun_moral[1]<9000 && AI_rest[25]>AI_rest[4]*2){
	sen_25();
	AI_rest[25]--;
	return 0;
	}
	//�ˌ����s����
	if(now_meirei[1]==4 && AI_moral[1]>2000) return 0;
	//���U�O�i
	if(con_time==2){ sen_08();AI_rest[8]--;return 0;}
	//�S�R�O�i���狭���O�i�ֈڍs
	if(now_meirei[1]==1 && AI_line[1]>AI_line[0]-60000 && AI_rest[9]>0 && now_time[1]>10) {sen_09();AI_rest[9]--;return 0;}

	if(AI_rest[9]>0 && AI_line[1]>AI_line[0]-120000)A_meirei=9;
	else if(AI_rest[8]>0)A_meirei=8;//�U��
	else A_meirei=1;

	if(AI_rest[20]>0) B_meirei=20;//���
	else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_09(){

	//AI09;�w���̐w
	//57;4;//�S�R�x��
	//19;3;//��ޖh��
	//8;4;//���U�O�i
	//51;1;//���ۍ��

	//�w�������S��
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//�΍U�ߑΉ�
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//�ˌ��g�p����
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//�ˌ����s����
	if(now_meirei[1]==4 && AI_moral[1]>2000) return 0;
	//���ۍ��
	if(front_line[1]>front_line[0]-60000 && front_line[1]<120000 && AI_rest[51]>0){
	sen_51();
	AI_rest[51]--;
	}
	if(now_meirei[1]==51){
	sen_01();
	return 0;
	}

	if(AI_rest[8]<=0)A_meirei=1;//�U��
	else A_meirei=8;

	if(AI_rest[19]>0)B_meirei=19;//���
	else if(AI_rest[57]>0) B_meirei=57;
	else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_10(){

	//AI10;�����w
	//10;4;//��ލU��
	//8;1;//���U�O�i
	//9;3;//�����O�i
	//27;1;//�w�`��

	//�w�������S��
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//�΍U�ߑΉ�
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//�ˌ��g�p����
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//�ˌ����s����
	if(now_meirei[1]==4 && AI_moral[1]>2000) return 0;
	//�S�R�O�i���狭���O�i�ֈڍs
	if(now_meirei[1]==1 && AI_line[1]>AI_line[0]-60000 && AI_rest[9]>0 && now_time[1]>10) {sen_09();AI_rest[9]--;return 0;}
	//�ŏ��ɑ��U�O�i
	if(con_time<10 && AI_rest[8]==4){sen_08();AI_rest[8]--;return 0;}

	if(AI_rest[9]>0 && AI_line[1]>AI_line[0]-60000)A_meirei=9;//�U��
	else if(AI_rest[8]>0)A_meirei=8;//�U��
	else A_meirei=1;

	if(AI_rest[27]>0 && (front_line[1]<120*1000 || front_line[1]<AI_line[0]-1800000))B_meirei=27;//�w�`��
	else if(AI_rest[10]>0) B_meirei=10;//��ލU��
	else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_11(){

	//AI11;�g�󏂂̐w
	//21;10;//�O����
	//6;10;//�O��O�i
	//8;4;//���U�O�i
	//39;1;//�w�����ˌ�

	//�w�������S��
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//�΍U�ߑΉ�
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//�O���㑱�s
	if(now_meirei[1]==24 || now_meirei[1]==21 || now_meirei[1]==22) return 0;
	//�ˌ��g�p����
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//���f�Ή�
	if(AI_bundan==1){
		sen_21();
		return 0;
	}
	//�ˌ����s����
	if(now_meirei[1]==4 && AI_moral[1]>2000) return 0;
	//�w�����ˌ����s����
	if(now_meirei[1]==39 && gun_moral[1]<hei_moral[1][gun_kazu[1]]) return 0;

	//�����������������傫���Ȃ�ƌ�シ��
	if(front_line[1]>back_line[1]+64000 && gun_moral[1]-AI_moral[1]>2000){
		sen_21();
		return 0;
	}
	//�ŏ��ɑO��O�i
	if(con_time<10 && now_meirei[1]==1){
		if(AI_rest[8]>0)sen_08();
		else sen_06();
		AI_rest[8]--;
		return 0;
	}

	if(front_line[1]>back_line[1]+64000 && AI_rest[8]>0)A_meirei=8;//�U��
	else if(front_line[1]>back_line[1]+64000 && gun_retu[1]==2)A_meirei=6;
	else A_meirei=1;

	if(front_line[1]>back_line[1]+64000 && gun_moral[1]-AI_moral[1]>2000){//���
		B_meirei=21;
	}else if(AI_rest[39]>0)B_meirei=39;
	else B_meirei=2;
	AI_VScheck();

	return 0;
}
int AI_12(){

	//AI12;�Ռ��w
	//19;3;//��ޖh��
	//8;4;//���U�O�i
	//9;4;//�����O�i
	//31;2;//�w�`�񕜁E��
	//59;2;//��n�k

	//�w�������S��
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//�΍U�ߑΉ�
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//�ˌ��g�p����
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	if(AI_rest[59]>0){sen_67();AI_rest[59]--;return 0;}//��n�k
	sen_04();AI_rest[4]--;return 0;
	}
	//��n�k
	if(AI_rest[59]>AI_rest[4] && AI_moral[1]>=8000 && AI_line[1]>AI_line[0]-60000){
	sen_67();
	AI_rest[59]--;
	return 0;
	}
	//�ˌ����s
	if(now_meirei[1]==4 && AI_moral[1]>4000) return 0;
	//���U�O�i
	if(con_time<10 && now_meirei[1]==1 && AI_rest[8]>0){ sen_08();AI_rest[8]--;return 0;}

	if(AI_rest[9]>0 && AI_line[1]>AI_line[0]-60000)A_meirei=9;//�U��
	else if(AI_rest[8]>0)A_meirei=8;//�U��
	else A_meirei=1;

	if(AI_rest[31]>0 && (front_line[1]<120*1000 || front_line[1]<AI_line[0]-1800000))B_meirei=31;//�w�`�񕜁E��
	else if(AI_rest[19]>0) B_meirei=19;//��ޖh��
	else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_13(){

	//AI13;���C���w
	//57;4;//�S�R�x��
	//41;2;//��M�g
	//8;4;//�����O�i
	//30;1;//�����񕜁E��
	//39;1;//�w�����ˌ�

	//�w�������S��
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//�΍U�ߑΉ�
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//�ˌ��g�p����
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//�����񕜁E���g�p����
	if(AI_rest[4]==0 && now_time[1]>60 && AI_rest[30]>0){
	sen_30();
	AI_rest[30]--;
	return 0;
	}
	//�ˌ����s����
	if(now_meirei[1]==4 && AI_moral[1]>2000) return 0;
	//�w�����ˌ����s����
	if(now_meirei[1]==39){
		if(AI_moral[1]>hei_moral[1][gun_kazu[1]])
		if(AI_rest[8]>0)sen_08();//���U�O�i
		else sen_01();
		return 0;
	}
	//�ŏ��ɑ��U�O�i
	if(con_time<10 && now_meirei[1]==1 && AI_rest[8]>0){ sen_08();AI_rest[8]--;return 0;}
	//��M�g��x��
	if(now_meirei[1]==41 && AI_rest[57]>0){
	sen_57();
	return 0;
	}

	if(AI_rest[8]>0)A_meirei=8;//���U�O�i
	else A_meirei=1;

	if(AI_rest[39]>0 && AI_rest[41]<2)B_meirei=39;//�w�����ˌ�
	else if(AI_rest[41]>0) B_meirei=64;//��M�g
	else if(AI_rest[57]>0) B_meirei=57;
	else B_meirei=2;

	AI_VScheck();


	return 0;
}
int AI_14(){

	//AI14;�\���w
	//44;1;//��񑀍�L1
	//45;1;//��񑀍�L2
	//27;3;//�w�`��
	//9;4;//�����O�i
	//61;2;//�M����ҒB

	//�w�������S��
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//�΍U�ߑΉ�
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//��񑀍�
	if(now_meirei[1]==61 && gun_bom[1]<240 && AI_rest[45]+AI_rest[44]>0){
	if(AI_rest[45]>0){sen_45();AI_rest[45]--;}
	else if(AI_rest[44]>0){sen_44();AI_rest[44]--;}
	return 0;
	}
	if(gun_bom[1]>0)return 0;//�������s����

	//�ˌ��g�p����
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//�ˌ����s����
	if(now_meirei[1]==4 && AI_moral[1]>2000) return 0;
	//�M����҂���
	if(now_meirei[1]!=61 && AI_rest[61]>0 && gun_bom[1]<=0 && con_time%400==0){
	AI_rest[61]--;
	sen_61();
	return 0;
	}

	if(AI_rest[8]>0 && AI_rest[61]<0)A_meirei=8;//�U��
	else A_meirei=1;

	if(AI_rest[27]>0 && front_line[1]<320*1000)B_meirei=57;//���
	else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_15(){

	// 6;1;//�O��O�i
	//21;3;//�O����
	//43;3;//�U��̓P��
	//25;1;//�����񕜁E��

	//�O���㑱�s
	if(now_meirei[1]==24 || now_meirei[1]==21 || now_meirei[1]==22) return 0;
	//�w�������S��
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//�΍U�ߑΉ�
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//�ˌ��g�p����
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//���f�Ή�
	if(AI_bundan==1){
		sen_21();
		return 0;
	}
	//�����񕜁E��g�p����
	if(gun_moral[1]<9000 && AI_rest[25]>AI_rest[4]*2){
	sen_25();
	AI_rest[25]--;
	return 0;
	}
	//�ˌ����s����
	if(now_meirei[1]==4 && AI_moral[1]>2000) return 0;
	//�����������������傫���Ȃ�ƌ�シ��
	if(front_line[1]>back_line[1]+16000 && gun_moral[1]-AI_moral[1]>2000){
		sen_21();
		return 0;
	}
	//�U��̓P�ށ��O��O�i
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

	if(front_line[1]>back_line[1]+64000 && gun_retu[1]==2)A_meirei=6;//�U��
	else A_meirei=1;

	if(front_line[1]>back_line[1]+64000 && gun_moral[1]-AI_moral[1]>2000)B_meirei=21;//���
	else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_16(){

	//AI16;�O�_�˔j�̐w
	//24;3;//���U���
	//8;4;//���U�O�i
	//13;1;//�O��ˌ�
	//30;1;//�����񕜁E��

	//�w�������S��
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//�΍U�ߑΉ�
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//�O���㑱�s
	if(now_meirei[1]==24 || now_meirei[1]==21 || now_meirei[1]==22) return 0;
	//�ˌ��g�p����
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//�O��ˌ��g�p����
	if(AI_rest[13]>0 && AI_rest[4]<=0 && AI_moral[1]<4000 && gun_retu[1]==2){
	sen_13();
	AI_rest[13]--;
	return 0;
	}
	//�����񕜎g�p����
	if(AI_rest[4]==0 && now_time[1]>60 && AI_rest[30]>0){
	sen_30();
	AI_rest[30]--;
	return 0;
	}
	//�ˌ����s
	if(now_meirei[1]==4 && AI_moral[1]>4000) return 0;
	//��񉷑�
	if(con_time<10 && now_meirei[1]!=8){sen_08();AI_rest[8]--;}
	//�����������������傫���Ȃ�ƌ�シ��
	if(front_line[1]>back_line[1]+16000 && gun_moral[1]-AI_moral[1]>2000 && AI_rest[24]>0){
		sen_24();
		AI_rest[24]--;
		return 0;
	}

	if((front_line[1]>back_line[1]+16000 || gun_retu[1]==1) && AI_rest[8]>0)A_meirei=8;//�U��
	else A_meirei=1;

	if(front_line[1]>back_line[1]+16000 && gun_moral[1]-AI_moral[1]>2000 && AI_rest[24]>0){//���
		B_meirei=24;
	}else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_17(){

	//�w�������S��
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//�΍U�ߑΉ�
	if(fire_time[0]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//�ˌ��g�p����
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//�ˌ����s����
	if(now_meirei[1]==4 && AI_moral[1]>2000) return 0;

	A_meirei=1;

	B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_18(){

	//AI18;���؂̐w
	//13;1;//�O��ˌ�
	//21;10;//�O����
	//8;4;//���U�O�i
	//9;4;//�����O�i
	//34;2;//��J����

	//�w�������S��
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//�΍U�ߑΉ�
	if(fire_time[0]>0 || fire_time[50]>0){
	if(AI_rest[34]>0){sen_65();AI_rest[34]--;}
	else if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//�O���㑱�s
	if(now_meirei[1]==24 || now_meirei[1]==21 || now_meirei[1]==22) return 0;
	//�ˌ��g�p����
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	if(AI_rest[34]>0 && tenkou<=0){sen_65();AI_rest[34]--;return 0;}
	sen_04();AI_rest[4]--;return 0;
	}
	//�O��ˌ��g�p����
	if(AI_rest[13]>0 && AI_rest[4]<=0 && AI_moral[1]<4000 && gun_retu[1]==2){
	if(AI_rest[34]>0 && tenkou<=0){sen_65();AI_rest[34]--;return 0;}
	sen_13();
	AI_rest[13]--;
	return 0;
	}
	//���f�Ή�
	if(front_line[1]-640000>front_line[0] && back_line[1]<front_line[0]){
		sen_21();
		return 0;
	}
	//�ˌ����s
	if(now_meirei[1]==4 && AI_moral[1]>4000) return 0;

	//��񉷑�
	if(con_time<10 && now_meirei[1]!=8){
		sen_08();
		AI_rest[8]--;
	}
	//���Ԍo�߂Ō���ɉJ����
	if(con_time>5400-AI_rest[34]*1800 && now_meirei[1]==23 && AI_rest[34]>0 && tenkou<=0){
	AI_rest[34]--;
	sen_65();
	return 0;
	}
	//�����������������傫���Ȃ�ƌ�シ��
	if(front_line[1]>back_line[1]+64000 && gun_moral[1]-AI_moral[1]>2000){
		sen_21();
		return 0;
	}
	//�����O�i�ֈڍs
	if((now_meirei[1]==1 || now_meirei[1]==8 || now_meirei[1]==23) && AI_line[1]>AI_line[0]-60000 && AI_rest[9]>0 && now_time[1]>10) {sen_09();AI_rest[9]--;return 0;}


	if((front_line[1]>back_line[1]+64000 || gun_retu[1]==1) && AI_rest[8]>0)A_meirei=8;//�U��
	else if((front_line[1]>back_line[1]+16000 || gun_retu[1]==1) && AI_rest[9]>0)A_meirei=9;//�U��
	else A_meirei=1;

	if(front_line[1]>back_line[1]+64000 && gun_moral[1]-AI_moral[1]>2000){//���
		B_meirei=21;
	}else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_19(){

	//AI19;�����w
	//10;3;//��ލU��
	//8;4;//���U�O�i
	//25;1;//�����񕜁E��
	//58;2;//�������f���^
	//30;1;//�����񕜁E��
	AI_kihon();

	A=1;
	//�w�������S��
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//�΍U�ߑΉ�
	if(fire_time[0]>0){
	if(now_meirei[1]!=58 && AI_rest[58]>0){sen_66();AI_rest[58]--;}
	return 0;
	}
	//�ˌ��g�p����
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//�����񕜎g�p����
	if(AI_rest[4]==0 && now_time[1]>60 && AI_rest[30]>0){
	sen_30();
	AI_rest[30]--;
	return 0;
	}
	//�����񕜎g�p����
	if(AI_rest[25]>0 && gun_hirou[1]>20000){
	sen_25();
	AI_rest[25]--;
	return 0;
	}
	//�ˌ����s����
	if(now_meirei[1]==4 && AI_moral[1]>2000) return 0;
	//�ŏ��ɑ��U�O�i
	if(con_time<10 && now_meirei[1]==1){sen_08();AI_rest[8]--;}

	if(con_time>3600*3-3600*AI_rest[58])A_meirei=66;
	if(AI_rest[8]>0)A_meirei=8;//�U��
	else A_meirei=1;

	if(AI_rest[10]>0) B_meirei=10;
	else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_20(){

	//AI20;���̗�
	//AI_rest[9]=4;//�����O�i
	//AI_rest[39]=1;//�w�����ˌ�
	//AI_rest[24]=2;//���U���
	//AI_rest[30]=1;//�����񕜁E��
	//AI_rest[41]=1;//��M�g
	//AI_rest[58]=1;//��n�k
	//AI_rest[34]=1;//��J����
	//AI_rest[59]=1;//�������f���^
	AI_kihon();

	//�w�������S��
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//AI_rest[41]=1;//��M�g�B�w�΍U���΍R�{���R���S�B64
	//AI_rest[59]=1;//��n�k�B���̕��΍R�{���R���S�B67
	//AI_rest[34]=1;//��J�����B�~���R�΍R�{���R���S�B65
	//AI_rest[58]=1;//�������f���^�B�΍U�ߑ΍R�B�{���R���S�B66
	if(hei_kaz[1][gun_kazu[A]-4]<10 && hei_kaz[1][gun_kazu[A]-4]>0 && AI_rest[34]>0){//���F�p�[��
		sen_65();
		AI_rest[34]--;
		return 0;
	}
	if(hei_kaz[1][gun_kazu[A]-3]<10 && hei_kaz[1][gun_kazu[A]-3]>0 && AI_rest[41]>0){//�t�F���l�N�X
		sen_64();
		AI_rest[41]--;
		return 0;
	}
	if(hei_kaz[1][gun_kazu[A]-2]<10 && hei_kaz[1][gun_kazu[A]-2]>0 && AI_rest[58]>0){//���H�[���O
		sen_66();
		AI_rest[58]--;
		return 0;
	}
	if(hei_kaz[1][gun_kazu[A]-1]<10 && hei_kaz[1][gun_kazu[A]-1]>0 && AI_rest[59]>0){//�C���S�X
		sen_67();
		AI_rest[59]--;
		return 0;
	}
	//��M�g�Ή�
	if(fire_time[50]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//�΍U�ߑΉ�
	if(fire_time[0]>0){
	if(AI_rest[58]>0){sen_66();AI_rest[58]--;}
	else if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20 && now_meirei[1]!=59)sen_02();
	return 0;
	}
	//�w�΂̐w�΍R
	if(fire_time[25]>0 && AI_rest[41]>0){
	sen_64();
	AI_rest[41]--;
	return 0;
	}
	//�O���㑱�s
	if(now_meirei[1]==24 || now_meirei[1]==21 || now_meirei[1]==22) return 0;
	//�~���R�΍R
	if(tenkou>0 && tenki==2 && AI_rest[34]>0){
	sen_65();
	AI_rest[34]--;
	return 0;
	}
	//���̕��΍R
	if(now_meirei[0]==58 && AI_rest[59]>0){
	sen_67();
	AI_rest[59]--;
	return 0;
	}
	//�ˌ��g�p����
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_63();AI_rest[4]--;return 0;
	}
	//�����񕜎g�p����
	if(AI_rest[4]==0 && now_time[1]>120 && AI_rest[30]>0){
	sen_30();
	AI_rest[30]--;
	return 0;
	}
	//���f�Ή�
	if(AI_bundan==1){
		if(AI_rest[24]>0) sen_24();
		else			  sen_21();
		AI_rest[24]--;
		return 0;
	}
	//�ˌ����s
	if(now_meirei[1]==4 && AI_moral[1]>4000) return 0;
	//��񉷑�
	if(con_time==150 && gun_retu[1]==2){sen_09();AI_rest[9]--;}
	//�w�����ˌ����s����
	if(now_meirei[1]==39 && gun_moral[1]<hei_moral[1][gun_kazu[1]]) return 0;
	else if(now_meirei[1]==39){
	if(front_line[1]>back_line[1]+16000 && gun_retu[1]==2 && AI_rest[9]>0){sen_09();AI_rest[9]--;}//�U��
	else sen_01();
	return 0;
	}
	//�����������������傫���Ȃ�ƌ�シ��
	if(front_line[1]>back_line[1]+64000 && gun_moral[1]-AI_moral[1]>2000 && front_line[1]>180*1000){
		if(AI_rest[24]>0){
			sen_24();AI_rest[24]--;
		}
		else sen_21();
		return 0;
	}

	if(front_line[1]>back_line[1]+64000 && gun_retu[1]==2 && AI_rest[9]>0)A_meirei=9;//�U��
	A_meirei=1;

	if(front_line[1]>back_line[1]+64000 && gun_moral[1]-AI_moral[1]>1000){//���
		if(AI_rest[24]>0)B_meirei=24;
		else B_meirei=21;
	}else if(AI_rest[39]>0)B_meirei=39;
	else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_21(){

	//AI21;�c��w�`
	//�U��p

	AI_kihon();
	if(gun_sikikan[1]==1){
		AI_no=1;
		return 0;
	}
	//�w�������S�ł`�h01��
	

	//��̐ݒu
	if(AI_rest[50]>0){
		sen_50();
		for(i=A*50;i<25+A*50;i++){
		saku_tai[i]=1500;//��̑ϋv��
		}
		AI_rest[50]--;
	}
	//���΍U��
	if(AI_rest[37]>0 && shot_tame[1]<=0 && con_time>5400-AI_rest[37]*600){
	if(abs(AI_rest[50]%4)==0){strcpy_s(serihu, "����������!!");shot_line[A]=front_line[0]/1000;}
	else if(abs(AI_rest[50])%4==1){strcpy_s(serihu, "���_��!!");shot_line[A]=front_line[0]/1000+100;}
	else if(abs(AI_rest[50])%4==2){strcpy_s(serihu, "�O��_��!!");shot_line[A]=front_line[0]/1000-100;}
	else if(abs(AI_rest[50])%4==3){strcpy_s(serihu, "������!!");shot_line[A]=160;}
	hukidasi();
	AI_rest[50]-=GetRand(2)+1;
	if(shot_line[A]<160)shot_line[1]=160;
	shot_tame[1]=180;
	AI_rest[37]--;
	return 0;
	}

	//�򂪔j�󂳂ꂽ��AI01��
	if(saku_tai[50]<=0 || saku_tai[74]<=0 || saku_tai[62]<=0 || (AI_rest[37]<=0 && shot_tame[1]<=0)){
	if(AI_rest[37]==0) strcpy_s(serihu, "����őł��~�߂�");
	else if(saku_tai[50]<=0)strcpy_s(serihu, "�򂪔j�󂳂ꂽ����");
	hukidasi();
	strcpy_s(serihu, "���킷��!!!");
	hukidasi();
		for(i=A*50;i<25+A*50;i++){
		saku_tai[i]=0;//��̑ϋv��
		}
	AI_no=1;
	return 0;
	}

	return 0;
}
int AI_22(){

	//AI22;���邮��̐w
	//41;2;//��M�g
	//59;2;//��n�k
	//62;2;//���ȍĐ�
	//60;1;//�X���C���t�B�[�o�[

	xa=0;
	for(i=0;i<gun_kazu[A];i++){
	if(hei_sibou[A][i]!=0)xa++;
	}

	//�w�����̗̑͂��T�O�O�ȉ��őދp
	if(hei_kaz[A][gun_kazu[A]]<500 && hei_type[A][gun_kazu[A]]!=0){
		if(now_meirei[1]!=5)sen_05();
		return 0;
	}
	//�w�������S��
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//�΍U�ߑΉ�
	if(fire_time[0]>0 || fire_time[50]>0){
	if(now_meirei[1]!=2 && now_meirei[1]!=10 && now_meirei[1]!=19 && now_meirei[1]!=20)sen_02();
	return 0;
	}
	//�ˌ��g�p����
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//�ˌ����s����
	if(now_meirei[1]==4 && AI_moral[1]>2000) return 0;
	//���ꂩ�̕����̐������Q�T�؂�Ɛ����񕜁B
	if(AI_rest[62]>0)for(i=0;i<gun_kazu[A];i++){
		if(hei_kaz[A][i]<=25 && hei_toppa[A][i]==0 && hei_esc[A][i]==0){
		sen_62();
		AI_rest[62]--;
		return 0;
		}
	}
	//�������������ȉ��ɂȂ�ƃX���C���t�B�[�o�[
	if(AI_rest[60]>0 && xa>gun_kazu[A]/2){
		sen_60();
		AI_rest[60]--;
		return 0;
	}
	//�ǂ�ǂ�A�X���C���t�B�[�o�[������Ƃň��ÂB�ڋߎ��g�p�B
	if(now_meirei[1]==1 && AI_line[1]>AI_line[0]-60000 && AI_rest[59]>AI_rest[60]) {sen_67();AI_rest[59]--;return 0;}

	A_meirei=1;

	if(AI_rest[41]>AI_rest[60])B_meirei=64;
	else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_23(){

	//8;4;//���U�O�i
	//4;1;//�S�R�ˌ�
	//41;2;//��M�g
	//39;1;//�w�����ˌ�
	//57;4;//�S�R�x��
	//gun_senjyutu[A][5]=19;gun_senrest[A][5]=3;//��ޖh��
	//gun_senjyutu[A][6]=10;gun_senrest[A][6]=3;//��ލU��


	//�w�������S��
		if(gun_sikikan[1]==1){
		if((now_meirei[1]==4 && AI_rest[4]==0) || now_meirei[1]==5)return 0;
		if(gun_hirou[1]<ko_tousou && gun_nokori[1]>ko_nigeru && AI_rest[4]>0){
			sen_04();AI_rest[4]--;return 0;
		}else{
		sen_05();return 0;
		}
	}
	//�ˌ��g�p����
	if(AI_rest[4]>0 && (AI_moral[0]-AI_moral[1]>ko_totugeki || gun_moral[1]<=con_time || now_meirei[0]==4)){
	sen_04();AI_rest[4]--;return 0;
	}
	//�ˌ����s����
	if(now_meirei[1]==4 && AI_moral[1]>2000) return 0;
	//�ŏ��ɑ��U�O�i
	if(now_meirei[1]==1 && con_time<10) {sen_08();AI_rest[8]--;return 0;}
	//
	if(now_meirei[1]==41){sen_57();AI_rest[57]--;return 0;}
	//�w�����ˌ����s����
	if(now_meirei[1]==39 && 1000<hei_moral[1][gun_kazu[1]]) return 0;

	if(AI_rest[8]>0)A_meirei=8;//���U�O�i
	else A_meirei=1;

	if(AI_rest[39]>0) B_meirei=39;//
	else if(AI_rest[41]>0) B_meirei=41;//
	else if(AI_rest[19]>0) B_meirei=19;//
	else if(AI_rest[10]>0)B_meirei=10;//
	else if(AI_rest[57]>0)B_meirei=20;//�x��
	else B_meirei=2;

	AI_VScheck();

	return 0;
}
int AI_VScheck(){

	A=1;
	//��������������������������������
	//���R�����G�R����
	//��������������������������������
	//�����������h��VS���h��or��ލU��or��ޖh��
	if(gun_sentou[0]==0 && (gun_sentou[1]==0 || now_meirei[1]==10 || now_meirei[1]==19)){
		if(AI_moral[1]>ko_moralA || AI_saikoubi[1]<ko_lineC)AI_kougeki();//�U��
		return 0;
	}
	//�����������h��VS�U��
	if(gun_sentou[0]==0 && gun_sentou[1]==1){
		if(AI_moral[1]<ko_moralE && AI_saikoubi[1]>ko_lineA) AI_koutai();//���
		return 0;
	}
	//�����������h��VS�h��
	if(gun_sentou[0]==0 && gun_sentou[1]==2){
		if(AI_moral[1]<ko_moralE && AI_saikoubi[1]>ko_lineA) AI_koutai();//���
		else AI_kougeki();//�U��
		return 0;
	}
	//���������U��VS���h��
	if(gun_sentou[0]==1 && gun_sentou[1]==0){
		if(AI_moral[1]>ko_moralB || AI_saikoubi[1]<ko_lineB) AI_kougeki();//�U��
		return 0;//���s
	}
	//���������U��VS��ލU��or��ޖh��
	if(gun_sentou[0]==1 && (now_meirei[1]==10 || now_meirei[1]==19)){
		if(AI_moral[1]>ko_moralA || AI_saikoubi[1]<ko_lineC) AI_kougeki();//�U��
		return 0;//���s
	}
	//���������U��VS�h��
	if(gun_sentou[0]==1 && gun_sentou[1]==2){
		if(AI_moral[1]>AI_moral[0]+ko_moralD || AI_saikoubi[1]<ko_lineB) AI_kougeki();//�U��
		else if(AI_moral[1]<ko_moralE && AI_saikoubi[1]>ko_lineA) AI_koutai();//���
		else if(AI_moral[1]<ko_moralE) AI_kougeki();
		return 0;//���s
	}
	//���������U��VS�U��
	if(gun_sentou[0]==1 && gun_sentou[1]==1){
		if(AI_dame[0]+ko_vsA>=AI_dame[1] || gun_moral[1]>ko_moralC || AI_saikoubi[1]<ko_lineA) return 0;//���s
		else AI_koutai();//���
		return 0;
	}
	//���������h��VS���h��or��ލU��
	if(gun_sentou[0]==2 && (gun_sentou[1]==0 || now_meirei[1]==10 || now_meirei[1]==19)){
		if(AI_moral[1]>ko_moralA || AI_saikoubi[1]<ko_lineC) AI_kougeki();//�U��
		return 0;//���s
	}
	//���������h��Ζh��
	if(gun_sentou[0]==2 && gun_sentou[1]==2){
		if(AI_moral[1]>AI_moral[0+ko_moralD] || AI_saikoubi[1]<ko_lineA) AI_kougeki();//�U��
		else AI_koutai();//���
		return 0;
	}
	//���������h��΍U��
	if(gun_sentou[0]==2 && gun_sentou[1]==1){
		if(AI_dame[0]>=ko_vsB || AI_moral[1]>ko_moralC || AI_saikoubi[1]<ko_lineA || gun_moral[1]>ko_moralB) return 0;//���s
		else AI_koutai();//���
		return 0;
	}
	return 0;
}
int AI_kougeki(){

	switch(A_meirei){
	case 1:sen_01();break;//�S�R�O�i
	case 6:sen_06();break;//�O��O�i
	case 7:sen_07();break;//���O�i
	case 8:sen_08();AI_rest[8]--;break;//���U�O�i
	case 9:sen_09();AI_rest[9]--;break;//�����O�i
	case 11:sen_11();AI_rest[11]--;break;//�㗃�U��
	case 12:sen_12();AI_rest[12]--;break;//�����U��
	case 56:sen_56();AI_rest[56]--;break;//�S�R�O�i�E��
	case 66:sen_66();AI_rest[58]--;break;//�������f���^
	}

	return 0;
	}
int AI_koutai(){

	switch(B_meirei){
	case 2:sen_02();break;//�S�R���
	case 10:sen_10();AI_rest[10]--;break;//��ލU��
	case 19:sen_19();AI_rest[19]--;break;//��ޖh��
	case 20:sen_20();AI_rest[20]--;break;//���U���
	case 21:sen_21();AI_rest[21]--;break;//�O����
	case 24:sen_24();AI_rest[24]--;break;//���U���
	case 27:sen_27();AI_rest[27]--;break;//�w�`��
	case 31:sen_31();AI_rest[31]--;break;//�w�`�񕜁E��
	case 39:sen_39();AI_rest[39]--;break;//�w�����ˌ�
	case 36:sen_36();AI_rest[36]--;break;//���f���
	case 41:sen_41();AI_rest[41]--;break;//�΍U��
	case 49:sen_49();AI_rest[49]--;break;//���@����
	case 64:sen_64();AI_rest[41]--;break;//��M�g
	case 57:sen_57();AI_rest[57]--;break;//�S�R�x��
	}

	return 0;
	}
//�퓬�O�̓G���\���
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
	strcpy_s(sikikan_name[A], "���S���S�u�L���O");
	//�g�p�����p
	//�g�p����w�`
	gun_jinkei[A]=1;//�c��w�`
	//�g�p����`�h
	AI_no=1;
	//�G�R
	gun_kazu[A]=40-1;
	butai_one[A]=1;//�����P�̕���//�S�u������
	butai_two[A]=1;//�����Q�̕���//�S�u������
	butai_sirei[A]=18;//�i�ߊ��̕���//�S�u������
	return 0;
}
int VS_02(){
	strcpy_s(sikikan_name[A], "�_���O���B�g");
	//�g�p�����p
	gun_senjyutu[A][5]=19;gun_senrest[A][5]=3;//��ޖh��
	gun_senjyutu[A][6]=30;gun_senrest[A][6]=1;//�����񕜁E��
	gun_senjyutu[A][7]=57;gun_senrest[A][7]=4;//�S�R�x��
	gun_senjyutu[A][8]=8;gun_senrest[A][8]=4;//�����O�i
	AI_rest[19]=3;
	AI_rest[30]=1;
	AI_rest[57]=3;
	AI_rest[8]=4;
	//�g�p����w�`
	gun_jinkei[A]=1;//�c��w�`
	//�g�p����`�h
	AI_no=1;
	//�������ƕ���
	youhei_lv[1]=7;
	sinobi_lv[1]=7;
	gun_kazu[A]=60-1;
	butai_one[A]=5;//�����P�̕���//�I�[�K��
	butai_two[A]=6;//�����Q�̕���//�S�u������
	butai_sirei[A]=26;//�i�ߊ��̕���//�S�u������
	
	return 0;
}
int VS_03(){
	strcpy_s(sikikan_name[A], "�S�ǂ̃u���N�X");
	//�g�p�����p
	gun_senjyutu[A][5]=6;gun_senrest[A][5]=10;//�O��O�i
	gun_senjyutu[A][6]=21;gun_senrest[A][6]=10;//�O����
	//�g�p����w�`
	gun_jinkei[A]=2;//�h��
	//�g�p����`�h
	AI_no=2;
	//�������ƕ���
	gun_kazu[A]=40-1;
	butai_one[A]=5;//�����P�̕���//�S�u������
	butai_two[A]=3;//�����Q�̕���//�S�u������
	butai_sirei[A]=26;//�i�ߊ��̕���//�S�u������
	return 0;
}
int VS_04(){
	strcpy_s(sikikan_name[A], "�o���̃X���b�N");
	//�g�p�����p
	gun_senjyutu[A][5]=6;gun_senrest[A][5]=10;//�O��O�i
	gun_senjyutu[A][6]=21;gun_senrest[A][6]=10;//�O����
	gun_senjyutu[A][7]=24;gun_senrest[A][7]=3;//���U���
	gun_senjyutu[A][8]=13;gun_senrest[A][8]=1;//�O��ˌ�
	AI_rest[24]=3;
	AI_rest[13]=1;
	//�g�p����w�`
	gun_jinkei[A]=2;//�h��
	//�g�p����`�h
	AI_no=2;
	//�������ƕ���
	gun_kazu[A]=50-1;
	butai_one[A]=5;//�����P�̕���//�d������
	butai_two[A]=5;//�����Q�̕���//�R��
	butai_sirei[A]=26;//�i�ߊ��̕���//���R
	
	return 0;
}
int VS_05(){
	strcpy_s(sikikan_name[A], "�U���̃A����");
	//�g�p�����p
	gun_senjyutu[A][5]=9;gun_senrest[A][5]=3;//�����O�i
	gun_senjyutu[A][6]=21;gun_senrest[A][6]=10;//�O����
	AI_rest[9]=3;
	//�g�p����w�`
	gun_jinkei[A]=3;//�h��
	//�g�p����`�h
	AI_no=3;
	//�������ƕ���
	gun_kazu[A]=40-1;
	butai_one[A]=6;//�����P�̕���//�d������
	butai_two[A]=3;//�����Q�̕���//�R��
	butai_sirei[A]=26;//�i�ߊ��̕���//���R
	
	return 0;
}
int VS_06(){
	strcpy_s(sikikan_name[A], "���ẴK����");
	//�g�p�����p
	gun_senjyutu[A][5]=9;gun_senrest[A][5]=4;//�����O�i
	gun_senjyutu[A][6]=21;gun_senrest[A][6]=0;//�O����
	gun_senjyutu[A][7]=36;gun_senrest[A][7]=1;//���f���
	gun_senjyutu[A][8]=14;gun_senrest[A][8]=1;//���ˌ�
	AI_rest[9]=3;
	AI_rest[36]=1;
	AI_rest[14]=1;
	//�g�p����w�`
	gun_jinkei[A]=3;//�U��
	//�g�p����`�h
	AI_no=3;
	//�������ƕ���
	youhei_lv[1]=10;
	gun_kazu[A]=50-1;
	butai_one[A]=3;//�����P�̕���//�d������
	butai_two[A]=3;//�����Q�̕���//�R��
	butai_sirei[A]=26;//�i�ߊ��̕���//���R
	
	return 0;
}
int VS_07(){
	strcpy_s(sikikan_name[A], "�˔j�̃��j�g��");
	//�g�p�����p
	gun_senjyutu[A][4]=55;gun_senrest[A][4]=4;//���U�ދp
	AI_rest[55]=4;
	//�g�p����w�`
	gun_jinkei[A]=4;//�㗃
	//�g�p����`�h
	AI_no=4;
	//�������ƕ���
	gun_kazu[A]=60-1;
	butai_one[A]=3;//�����P�̕���//�d������
	butai_two[A]=3;//�����Q�̕���//�R��
	butai_sirei[A]=26;//�i�ߊ��̕���//���R
	
	return 0;
}
int VS_08(){
	strcpy_s(sikikan_name[A], "�ҍU�̃X�g���g�X");
	//�g�p�����p
	gun_senjyutu[A][4]=55;gun_senrest[A][4]=4;//���U�ދp
	gun_senjyutu[A][5]=11;gun_senrest[A][5]=4;//�㗃�U��
	gun_senjyutu[A][6]=25;gun_senrest[A][6]=3;//�����񕜁E��
	gun_senjyutu[A][7]=20;gun_senrest[A][7]=4;//���U���
	gun_senjyutu[A][8]=15;gun_senrest[A][8]=1;//�㗃�ˌ�
	AI_rest[55]=4;
	AI_rest[11]=4;
	AI_rest[25]=3;
	AI_rest[20]=4;
	AI_rest[15]=1;
	//�g�p����w�`
	gun_jinkei[A]=4;//�㗃
	//�g�p����`�h
	AI_no=4;
	//�������ƕ���
	youhei_lv[1]=5;
	gun_kazu[A]=48-1;
	butai_one[A]=5;//�����P�̕���//�d������
	butai_two[A]=6;//�����Q�̕���//�R��
	butai_sirei[A]=26;//�i�ߊ��̕���//���R
	
	return 0;
}
int VS_09(){
	strcpy_s(sikikan_name[A], "�W���̃��S��");
	//�g�p�����p
	gun_senjyutu[A][4]=55;gun_senrest[A][4]=4;
	gun_senjyutu[A][5]=12;gun_senrest[A][5]=4;//�����U��
	AI_rest[12]=4;
	AI_rest[55]=4;
	//�g�p����w�`
	gun_jinkei[A]=5;//����
	//�g�p����`�h
	AI_no=5;
	//�������ƕ���
	gun_kazu[A]=44-1;
	butai_one[A]=3;//�����P�̕���//�d������
	butai_two[A]=6;//�����Q�̕���//�R��
	butai_sirei[A]=26;//�i�ߊ��̕���//���R
	
	return 0;
}
int VS_10(){
	strcpy_s(sikikan_name[A], "�h�q�̃����[�U");
	//�g�p�����p
	gun_senjyutu[A][4]=55;gun_senrest[A][4]=4;
	gun_senjyutu[A][5]=12;gun_senrest[A][5]=4;//�����U��
	gun_senjyutu[A][6]=50;gun_senrest[A][6]=1;//�h����
	gun_senjyutu[A][7]=10;gun_senrest[A][7]=3;//��ލU��
	gun_senjyutu[A][8]=16;gun_senrest[A][8]=1;//�����ˌ�
	AI_rest[55]=4;
	AI_rest[12]=4;
	AI_rest[50]=1;
	AI_rest[10]=3;
	AI_rest[16]=1;
	//�g�p����w�`
	gun_jinkei[A]=5;//����
	//�g�p����`�h
	AI_no=5;
	//�������ƕ���
	sinobi_lv[1]=5;
	gun_kazu[A]=46-1;
	butai_one[A]=5;//�����P�̕���//�d������
	butai_two[A]=6;//�����Q�̕���//�R��
	butai_sirei[A]=26;//�i�ߊ��̕���//���R
	return 0;
}
int VS_11(){
	strcpy_s(sikikan_name[A], "�[���̖����R");
	//�g�p�����p
	gun_senjyutu[A][5]=19;gun_senrest[A][5]=3;//��ޖh��
	AI_rest[19]=3;
	//�g�p����w�`
	gun_jinkei[A]=6;//�����˔j
	//�g�p����`�h
	AI_no=6;
	//�������ƕ���
	gun_kazu[A]=45-1;
	butai_one[A]=10;//�����P�̕���//�d������
	butai_two[A]=10;//�����Q�̕���//�R��
	butai_sirei[A]=10;//�i�ߊ��̕���//���R
	return 0;
}
int VS_12(){
	strcpy_s(sikikan_name[A], "�q���S���A���t");
	//�g�p�����p
	gun_senjyutu[A][5]=19;gun_senrest[A][5]=3;//��ޖh��
	gun_senjyutu[A][6]=31;gun_senrest[A][6]=2;//�w�`�񕜁E��
	gun_senjyutu[A][7]=36;gun_senrest[A][7]=1;//���f���
	gun_senjyutu[A][8]=14;gun_senrest[A][8]=1;//���ˌ�
	AI_rest[19]=3;
	AI_rest[31]=2;
	AI_rest[36]=1;
	AI_rest[14]=1;
	//�g�p����w�`
	gun_jinkei[A]=6;//�����˔j���̂Q
	//�g�p����`�h
	AI_no=6;
	//�������ƕ���
	sinobi_lv[1]=5;
	gun_kazu[A]=54-1;
	butai_one[A]=5;//�����P�̕���//�d������
	butai_two[A]=6;//�����Q�̕���//�R��
	butai_sirei[A]=26;//�i�ߊ��̕���//���R
	return 0;
}
int VS_13(){
	strcpy_s(sikikan_name[A], "�d�����G���X");
	//�g�p�����p
	gun_senjyutu[A][5]=7;gun_senrest[A][5]=10;//���O�i
	gun_senjyutu[A][6]=27;gun_senrest[A][6]=3;//�w�`��
	AI_rest[27]=3;
	//�g�p����w�`
	gun_jinkei[A]=7;//����
	//�g�p����`�h
	AI_no=7;
	//�������ƕ���
	gun_kazu[A]=45-1;
	butai_one[A]=12;//�����P�̕���//�d������
	butai_two[A]=12;//�����Q�̕���//�R��
	butai_sirei[A]=13;//�i�ߊ��̕���//���R
	return 0;
}
int VS_14(){
	strcpy_s(sikikan_name[A], "�g���̃c�J�I");
	//�g�p�����p
	gun_senjyutu[A][5]=7;gun_senrest[A][5]=10;//���O�i
	gun_senjyutu[A][6]=27;gun_senrest[A][6]=3;//�w�`��
	gun_senjyutu[A][7]=14;gun_senrest[A][7]=1;//���ˌ�
	gun_senjyutu[A][8]=31;gun_senrest[A][8]=2;//�w�`�񕜁E��
	AI_rest[27]=3;
	AI_rest[14]=1;
	AI_rest[31]=2;
	//�g�p����w�`
	gun_jinkei[A]=7;//����
	//�g�p����`�h
	AI_no=7;
	//�������ƕ���
	gun_kazu[A]=50-1;
	butai_one[A]=5;//�����P�̕���//�d������
	butai_two[A]=5;//�����Q�̕���//�R��
	butai_sirei[A]=26;//�i�ߊ��̕���//���R
	return 0;
}
int VS_15(){
	strcpy_s(sikikan_name[A], "�����̃Z�C�U�[");
	//�g�p�����p
	gun_senjyutu[A][5]=20;gun_senrest[A][5]=3;//���U���
	gun_senjyutu[A][6]=8;gun_senrest[A][6]=4;//���U�O�i
	AI_rest[20]=3;
	AI_rest[8]=4;
	//�g�p����w�`
	gun_jinkei[A]=8;//����
	//�g�p����`�h
	AI_no=8;
	//�������ƕ���
	gun_kazu[A]=45-1;
	butai_one[A]=6;//�����P�̕���//�d������
	butai_two[A]=6;//�����Q�̕���//�R��
	butai_sirei[A]=26;//�i�ߊ��̕���//���R
	return 0;
}
int VS_16(){
	strcpy_s(sikikan_name[A], "�E���T�����C��");
	//�g�p�����p
	gun_senjyutu[A][5]=20;gun_senrest[A][5]=3;//���U���
	gun_senjyutu[A][6]=8;gun_senrest[A][6]=4;//���U�O�i
	gun_senjyutu[A][7]=9;gun_senrest[A][7]=4;//�����O�i
	gun_senjyutu[A][8]=25;gun_senrest[A][8]=3;//�����񕜁E��
	AI_rest[20]=3;
	AI_rest[8]=4;
	AI_rest[9]=4;
	AI_rest[25]=3;
	//�g�p����w�`
	gun_jinkei[A]=8;//����
	//�g�p����`�h
	AI_no=8;
	//�������ƕ���
	sinobi_lv[1]=10;
	gun_kazu[A]=45-1;
	butai_one[A]=3;//�����P�̕���//�d������
	butai_two[A]=3;//�����Q�̕���//�R��
	butai_sirei[A]=26;//�i�ߊ��̕���//���R
	return 0;
}
int VS_17(){
	strcpy_s(sikikan_name[A], "�j��̃�������");
	//�g�p�����p
	gun_senjyutu[A][5]=57;gun_senrest[A][5]=4;//�S�R�x��
	AI_rest[57]=4;
	//�g�p����w�`
	gun_jinkei[A]=9;//����
	//�g�p����`�h
	AI_no=9;
	//�������ƕ���
	gun_kazu[A]=55-1;
	butai_one[A]=6;//�����P�̕���//�d������
	butai_two[A]=6;//�����Q�̕���//�R��
	butai_sirei[A]=26;//�i�ߊ��̕���//���R
	return 0;
}
int VS_18(){
	strcpy_s(sikikan_name[A], "�ҏ��X�}�[�O");
	//�g�p�����p
	gun_senjyutu[A][5]=57;gun_senrest[A][5]=4;//�S�R�x��
	gun_senjyutu[A][6]=19;gun_senrest[A][6]=3;//��ޖh��
	gun_senjyutu[A][7]=8;gun_senrest[A][7]=4;//���U�O�i
	gun_senjyutu[A][8]=51;gun_senrest[A][8]=1;//���ۍ��
	AI_rest[57]=4;
	AI_rest[19]=3;
	AI_rest[8]=4;
	AI_rest[51]=1;
	//�g�p����w�`
	gun_jinkei[A]=9;//����
	//�g�p����`�h
	AI_no=9;
	//�������ƕ���
	youhei_lv[1]=5;
	gun_kazu[A]=58-1;
	butai_one[A]=5;//�����P�̕���//�d������
	butai_two[A]=6;//�����Q�̕���//�R��
	butai_sirei[A]=26;//�i�ߊ��̕���//���R
	return 0;
}
int VS_19(){
	strcpy_s(sikikan_name[A], "�r�ł̃A���X");
	//�g�p�����p
	gun_senjyutu[A][5]=10;gun_senrest[A][5]=4;//��ލU��
	gun_senjyutu[A][6]=8;gun_senrest[A][6]=1;//���U�O�i
	AI_rest[10]=3;
	AI_rest[8]=4;
	//�g�p����w�`
	gun_jinkei[A]=10;//����
	//�g�p����`�h
	AI_no=10;
	//�������ƕ���
	youhei_lv[1]=5;
	gun_kazu[A]=50-1;
	butai_one[A]=5;//�����P�̕���//�d������
	butai_two[A]=6;//�����Q�̕���//�R��
	butai_sirei[A]=26;//�i�ߊ��̕���//���R
	return 0;
}
int VS_20(){
	strcpy_s(sikikan_name[A], "���W�̃E�F�C�u");
	//�g�p�����p
	gun_senjyutu[A][5]=10;gun_senrest[A][5]=4;//��ލU��
	gun_senjyutu[A][6]=8;gun_senrest[A][6]=1;//���U�O�i
	gun_senjyutu[A][7]=9;gun_senrest[A][7]=3;//�����O�i
	gun_senjyutu[A][8]=27;gun_senrest[A][8]=1;//�w�`��
	AI_rest[10]=3;
	AI_rest[8]=4;
	AI_rest[9]=4;
	AI_rest[27]=3;
	//�g�p����w�`
	gun_jinkei[A]=10;//����
	//�g�p����`�h
	AI_no=10;
	//�������ƕ���
	gun_kazu[A]=55-1;
	butai_one[A]=6;//�����P�̕���//�d������
	butai_two[A]=6;//�����Q�̕���//�R��
	butai_sirei[A]=26;//�i�ߊ��̕���//���R
	return 0;
}
int VS_21(){
	strcpy_s(sikikan_name[A], "�����h�����g");
	//�g�p�����p
	gun_senjyutu[A][5]=21;gun_senrest[A][5]=10;//�O����
	gun_senjyutu[A][6]=6;gun_senrest[A][6]=10;//�O��O�i
	//�g�p����w�`
	gun_jinkei[A]=11;//����
	//�g�p����`�h
	AI_no=11;
	//�������ƕ���
	gun_kazu[A]=45-1;
	butai_one[A]=3;//�����P�̕���//�d������
	butai_two[A]=3;//�����Q�̕���//�R��
	butai_sirei[A]=23;//�i�ߊ��̕���//���R
	return 0;
}
int VS_22(){
	strcpy_s(sikikan_name[A], "�����G���E�B");
	//�g�p�����p
	gun_senjyutu[A][5]=21;gun_senrest[A][5]=10;//�O����
	gun_senjyutu[A][6]=6;gun_senrest[A][6]=10;//�O��O�i
	gun_senjyutu[A][7]=8;gun_senrest[A][7]=4;//���U�O�i
	gun_senjyutu[A][8]=39;gun_senrest[A][8]=1;//�w�����ˌ�
	AI_rest[8]=4;
	AI_rest[39]=1;
	//�g�p����w�`
	gun_jinkei[A]=11;//����
	//�g�p����`�h
	AI_no=11;
	//�������ƕ���
	gun_kazu[A]=45-1;
	butai_one[A]=12;//�����P�̕���//�d������
	butai_two[A]=13;//�����Q�̕���//�R��
	butai_sirei[A]=25;//�i�ߊ��̕���//���R
	return 0;
}
int VS_23(){
	strcpy_s(sikikan_name[A], "�X�̋��l�^�C�_�[��");
	//�g�p�����p
	gun_senjyutu[A][5]=8;gun_senrest[A][5]=4;//���U�O�i
	AI_rest[8]=4;
	//�������ƕ���
	gun_jinkei[A]=12;
	AI_no=12;
	gun_kazu[A]=45-1;
	butai_one[A]=2;//�����P�̕���//�d������
	butai_two[A]=2;//�����Q�̕���//�R��
	butai_sirei[A]=2;//�i�ߊ��̕���//���R
	return 0;
}
int VS_24(){
	strcpy_s(sikikan_name[A], "���폫�C���S�X");
	//�g�p�����p
	gun_senjyutu[A][4]=19;gun_senrest[A][4]=3;//��ޖh��
	gun_senjyutu[A][5]=8;gun_senrest[A][5]=4;//���U�O�i
	gun_senjyutu[A][6]=9;gun_senrest[A][6]=4;//�����O�i
	gun_senjyutu[A][7]=31;gun_senrest[A][7]=2;//�w�`�񕜁E��
	gun_senjyutu[A][8]=67;gun_senrest[A][8]=2;//��n�k
	AI_rest[19]=3;
	AI_rest[8]=4;
	AI_rest[9]=4;
	AI_rest[31]=2;
	AI_rest[59]=2;
	//�g�p����w�`
	gun_jinkei[A]=12;//����
	//�g�p����`�h
	AI_no=12;
	//�������ƕ���
	gun_kazu[A]=65-1;
	butai_one[A]=14;//�����P�̕���//�d������
	butai_two[A]=14;//�����Q�̕���//�R��
	butai_sirei[A]=17;//�i�ߊ��̕���//���R
	//�{�X�t���O
	boss=1;

	return 0;
}
int VS_25(){
	strcpy_s(sikikan_name[A], "�������t�F���l�N�X");
	//�g�p�����p
	gun_senjyutu[A][4]=57;gun_senrest[A][4]=4;//��ޖh��
	gun_senjyutu[A][5]=64;gun_senrest[A][5]=2;//��M�g
	gun_senjyutu[A][6]=8;gun_senrest[A][6]=4;//�����O�i
	gun_senjyutu[A][7]=30;gun_senrest[A][7]=1;//�����񕜁E��
	gun_senjyutu[A][8]=39;gun_senrest[A][8]=1;//�w�����ˌ�
	AI_rest[57]=4;
	AI_rest[41]=2;
	AI_rest[8]=4;
	AI_rest[30]=1;
	AI_rest[39]=1;
	//�g�p����w�`
	gun_jinkei[A]=13;//����
	//�g�p����`�h
	AI_no=13;
	//�������ƕ���
	gun_kazu[A]=55-1;
	butai_one[A]=10;//�����P�̕���//�d������
	butai_two[A]=10;//�����Q�̕���//�R��
	butai_sirei[A]=20;//�i�ߊ��̕���//���R
	boss=1;
	return 0;
}
int VS_26(){
	strcpy_s(sikikan_name[A], "�����i�ՃA���i");
	//�g�p�����p
	gun_senjyutu[A][8]=61;gun_senrest[A][8]=3;//�M����ҒB
	AI_rest[61]=2;
	//�g�p����w�`
	gun_jinkei[A]=14;//����
	//�g�p����`�h
	AI_no=14;
	//�������ƕ���
	gun_kazu[A]=80-1;
	butai_one[A]=7;//�����P�̕���//�d������
	butai_two[A]=7;//�����Q�̕���//�R��
	butai_sirei[A]=27;//�i�ߊ��̕���//���R
	return 0;
}
int VS_27(){
	strcpy_s(sikikan_name[A], "�����@���e���E�X");
	//�g�p�����p
	gun_senjyutu[A][4]=44;gun_senrest[A][4]=1;//��񑀍�L4
	gun_senjyutu[A][5]=45;gun_senrest[A][5]=1;//��񑀍�L2
	gun_senjyutu[A][6]=57;gun_senrest[A][6]=4;//�S�R�x��
	gun_senjyutu[A][7]=8;gun_senrest[A][7]=4;//���U�O�i
	gun_senjyutu[A][8]=61;gun_senrest[A][8]=3;//�M����ҒB
	AI_rest[44]=1;
	AI_rest[45]=1;
	AI_rest[57]=4;
	AI_rest[8]=4;
	AI_rest[61]=2;
	//�g�p����w�`
	gun_jinkei[A]=14;//����
	//�g�p����`�h
	AI_no=14;
	//�������ƕ���
	gun_kazu[A]=100-1;
	butai_one[A]=7;//�����P�̕���//�d������
	butai_two[A]=7;//�����Q�̕���//�R��
	butai_sirei[A]=27;//�i�ߊ��̕���//���R
	return 0;
}
int VS_28(){
	strcpy_s(sikikan_name[A], "�����S���h�r��");
	//�g�p�����p
	gun_senjyutu[A][5]=6;gun_senrest[A][5]=10;//�O��O�i
	gun_senjyutu[A][6]=21;gun_senrest[A][6]=10;//�O����
	AI_rest[41]=1;
	//�g�p����w�`
	gun_jinkei[A]=15;//����
	//�g�p����`�h
	AI_no=15;
	//�������ƕ���
	gun_kazu[A]=65-1;
	butai_one[A]=1;//�����P�̕���//�d������
	butai_two[A]=1;//�����Q�̕���//�R��
	butai_sirei[A]=18;//�i�ߊ��̕���//���R
	return 0;
}
int VS_29(){
	strcpy_s(sikikan_name[A], "�􏫃g�[�t");
	//�g�p�����p
	gun_senjyutu[A][5]=6;gun_senrest[A][5]=10;//�O��O�i
	gun_senjyutu[A][6]=21;gun_senrest[A][6]=10;//�O����
	gun_senjyutu[A][7]=43;gun_senrest[A][7]=1;//�U��̓P��
	gun_senjyutu[A][8]=25;gun_senrest[A][8]=3;//�����񕜁E��
	AI_rest[43]=1;
	AI_rest[25]=3;
	//�g�p����w�`
	gun_jinkei[A]=15;//����
	//�g�p����`�h
	AI_no=15;
	//�������ƕ���
	sinobi_lv[1]=5;
	gun_kazu[A]=56-1;
	butai_one[A]=5;//�����P�̕���//�d������
	butai_two[A]=6;//�����Q�̕���//�R��
	butai_sirei[A]=26;//�i�ߊ��̕���//���R
	return 0;
}
int VS_30(){
	strcpy_s(sikikan_name[A], "�S�Ƃ̃l�C���t");
	//�g�p�����p
	gun_senjyutu[A][5]=24;gun_senrest[A][5]=3;//���U���
	gun_senjyutu[A][6]=8;gun_senrest[A][6]=4;//���U�O�i
	gun_senjyutu[A][7]=13;gun_senrest[A][7]=1;//�O��ˌ�
	gun_senjyutu[A][8]=30;gun_senrest[A][8]=1;//�����񕜁E��

	AI_rest[24]=3;
	AI_rest[8]=4;
	AI_rest[13]=1;
	AI_rest[30]=1;
	//�g�p����w�`
	gun_jinkei[A]=16;//����
	//�g�p����`�h
	AI_no=16;
	//�������ƕ���
	butai_one[A]=3;//�����P�̕���//�d������
	butai_two[A]=6;//�����Q�̕���//�R��
	butai_sirei[A]=26;//�i�ߊ��̕���//���R
	return 0;
}
int VS_31(){
	strcpy_s(sikikan_name[A], "�������̃��[�R");
	//�g�p�����p
	//�g�p����w�`
	gun_jinkei[A]=17;//����
	//�g�p����`�h
	AI_no=17;
	//�������ƕ���
	gun_kazu[A]=55-1;
	butai_one[A]=3;//�����P�̕���//�d������
	butai_two[A]=3;//�����Q�̕���//�R��
	butai_sirei[A]=26;//�i�ߊ��̕���//���R
	return 0;
}
int VS_32(){
	strcpy_s(sikikan_name[A], "���C�����F�p�[��");
	//�g�p�����p
	gun_senjyutu[A][4]=13;gun_senrest[A][4]=1;//�O��ˌ�
	gun_senjyutu[A][5]=21;gun_senrest[A][5]=10;//�O����
	gun_senjyutu[A][6]=8;gun_senrest[A][6]=4;//���U�O�i
	gun_senjyutu[A][7]=9;gun_senrest[A][7]=4;//�����O�i
	gun_senjyutu[A][8]=65;gun_senrest[A][8]=2;//��J����
	AI_rest[9]=4;
	AI_rest[8]=3;
	AI_rest[34]=2;
	AI_rest[13]=1;
	//�g�p����w�`
	gun_jinkei[A]=18;//����
	//�g�p����`�h
	AI_no=18;
	//�������ƕ���
	gun_kazu[A]=55-1;
	butai_one[A]=9;//�����P�̕���//�d������
	butai_two[A]=9;//�����Q�̕���//�R��
	butai_sirei[A]=21;//�i�ߊ��̕���//���R
	boss=1;
	return 0;
}
int VS_33(){
	strcpy_s(sikikan_name[A], "���������H�[���N");
	//�g�p�����p
	gun_senjyutu[A][5]=10;gun_senrest[A][5]=3;//��ލU��
	gun_senjyutu[A][5]=8;gun_senrest[A][5]=4;//���U�O�i
	gun_senjyutu[A][6]=25;gun_senrest[A][6]=1;//�����񕜁E��
	gun_senjyutu[A][7]=66;gun_senrest[A][7]=2;//������
	gun_senjyutu[A][8]=30;gun_senrest[A][8]=1;//�����񕜁E��
	AI_rest[10]=3;
	AI_rest[8]=4;
	AI_rest[25]=1;
	AI_rest[58]=2;
	AI_rest[30]=1;
	//�g�p����w�`
	gun_jinkei[A]=8;//����
	//�g�p����`�h
	AI_no=19;
	//�������ƕ���
	gun_kazu[A]=55-1;
	butai_one[A]=14;//�����P�̕���//�d������
	butai_two[A]=14;//�����Q�̕���//�R��
	butai_sirei[A]=22;//�i�ߊ��̕���//���R
	boss=1;
	return 0;
}
int VS_34(){
	strcpy_s(sikikan_name[A], "�[���̖���");
	//�g�p�����p
	gun_senjyutu[A][3]=63;gun_senrest[A][3]=1;//���ˌ�
	gun_senjyutu[A][4]=9;gun_senrest[A][4]=4;//�����O�i
	gun_senjyutu[A][5]=21;gun_senrest[A][5]=10;//�O����
	gun_senjyutu[A][6]=39;gun_senrest[A][6]=1;//�w�����ˌ�
	gun_senjyutu[A][7]=24;gun_senrest[A][7]=2;//���U���
	gun_senjyutu[A][8]=30;gun_senrest[A][8]=1;//�����񕜁E��
	AI_rest[9]=4;//�����O�i
	AI_rest[39]=1;//�w�����ˌ�
	AI_rest[24]=2;//���U���
	AI_rest[30]=1;//�����񕜁E��
	AI_rest[41]=1;//��M�g
	AI_rest[58]=1;//��n�k
	AI_rest[34]=1;//��J����
	AI_rest[59]=1;//�������f���^
	//�g�p����w�`
	gun_jinkei[A]=21;//����
	//�g�p����`�h
	AI_no=20;
	//�������ƕ���
	gun_kazu[A]=60-1;
	butai_one[A]=20;//�����P�̕���//�d������
	butai_two[A]=21;//�����Q�̕���//�R��
	butai_sirei[A]=19;//�i�ߊ��̕���//���R
	boss=1;
	return 0;
}
int VS_35(){
	strcpy_s(sikikan_name[A], "�U��̃R���e�I");
	//�g�p�����p
	gun_senjyutu[A][5]=50;gun_senrest[A][5]=1;//�h����
	gun_senjyutu[A][5]=37;gun_senrest[A][5]=9;//���΍U��
	AI_rest[50]=1;//�h����
	AI_rest[37]=9;//���΍U��
	//�g�p����w�`
	gun_jinkei[A]=1;//����
	//�g�p����`�h
	AI_no=21;
	//�������ƕ���
	gun_kazu[A]=40-1;
	butai_one[A]=3;//�����P�̕���//�d������
	butai_two[A]=3;//�����Q�̕���//�R��
	butai_sirei[A]=26;//�i�ߊ��̕���//���R
	return 0;
}
int VS_36(){
	strcpy_s(sikikan_name[A], "�S�t�R�c�[�����[");
	//�g�p�����p
	gun_senjyutu[A][7]=62;gun_senrest[A][7]=1;//���ȍĐ�
	AI_rest[62]=1;
	//�g�p����w�`
	gun_jinkei[A]=1;//�c��w�`
	//�g�p����`�h
	AI_no=22;
	//�������ƕ���
	gun_kazu[A]=40-1;
	butai_one[A]=0;//�����P�̕���//�d������
	butai_two[A]=0;//�����Q�̕���//�R��
	butai_sirei[A]=0;//�i�ߊ��̕���//���R
	return 0;
}
int VS_37(){
	strcpy_s(sikikan_name[A], "������������");
	//�g�p�����p
	gun_senjyutu[A][5]=64;gun_senrest[A][5]=2;//��M�g
	gun_senjyutu[A][6]=67;gun_senrest[A][6]=2;//��n�k
	gun_senjyutu[A][7]=62;gun_senrest[A][7]=1;//���ȍĐ�
	gun_senjyutu[A][8]=60;gun_senrest[A][8]=1;//�X���C���t�B�[�o�[
	AI_rest[41]=2;
	AI_rest[59]=2;
	AI_rest[62]=1;
	AI_rest[60]=1;
	//�g�p����w�`
	gun_jinkei[A]=19;//����
	//�g�p����`�h
	AI_no=22;
	//�������ƕ���
	gun_kazu[A]=50-1;
	butai_one[A]=0;//�����P�̕���//�d������
	butai_two[A]=0;//�����Q�̕���//�R��
	butai_sirei[A]=8;//�i�ߊ��̕���//���R
	return 0;
}
int VS_38(){
	strcpy_s(sikikan_name[A], "���c�h���[��");
	//�g�p�����p
	gun_senjyutu[A][1]=57;gun_senrest[A][5]=4;//�S�R�x��
	gun_senjyutu[A][2]=8;gun_senrest[A][6]=4;//���U�O�i
	gun_senjyutu[A][3]=4;gun_senrest[A][7]=1;//�S�R�ˌ�
	gun_senjyutu[A][4]=20;gun_senrest[A][8]=3;//
	gun_senjyutu[A][5]=19;gun_senrest[A][5]=3;//��ޖh��
	gun_senjyutu[A][6]=10;gun_senrest[A][6]=3;//��ލU��
	gun_senjyutu[A][7]=41;gun_senrest[A][7]=2;//��M�g
	gun_senjyutu[A][8]=39;gun_senrest[A][8]=1;//�w�����ˌ�
	AI_rest[57]=4;
	AI_rest[8]=4;
	AI_rest[20]=3;
	AI_rest[19]=3;
	AI_rest[10]=3;
	AI_rest[41]=2;
	AI_rest[39]=1;
	//�g�p����w�`
	gun_jinkei[A]=1;//�c��w�`
	//�g�p����`�h
	AI_no=23;
	//�������ƕ���
	gun_kazu[A]=10-1;
	butai_one[A]=0;//�����P�̕���//�S�u����
	butai_two[A]=0;//�����Q�̕���//�S�u����
	butai_sirei[A]=4;//�i�ߊ��̕���//���R
	boss=1;
	dorura=1;
	return 0;
}
int VS_39(){
	strcpy_s(sikikan_name[A], "�[���̖��C��");
	//�g�p�����p
	gun_senjyutu[A][4]=13;gun_senrest[A][4]=1;//�O��ˌ�
	gun_senjyutu[A][5]=21;gun_senrest[A][5]=10;//�O����
	gun_senjyutu[A][7]=34;gun_senrest[A][7]=1;//�J����
	gun_senjyutu[A][6]=8;gun_senrest[A][6]=4;//���U�O�i
	AI_rest[13]=1;
	AI_rest[8]=4;
	//�g�p����w�`
	gun_jinkei[A]=18;//����
	//�g�p����`�h
	AI_no=18;
	//�������ƕ���
	gun_kazu[A]=45-1;
	butai_one[A]=9;//�����P�̕���//�d������
	butai_two[A]=9;//�����Q�̕���//�R��
	butai_sirei[A]=9;//�i�ߊ��̕���//���R
	boss=1;
	return 0;
}
//�C�x���g
//��̃C�x���g��
//00��
int eve_00(){
	strcpy_s(event_tolk[0][0], "");//�K�⑤
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//�呤
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*5;//����
	A=0;//���򔻒�p
	mouse=1;

	for(t=0;t<J;){//�䎌�𒝂点��
	//�O���t�B�b�N���Œ蕔��
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
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
		strcpy_s(event_tolk[0][0], "");//�K�⑤
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//�呤
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//��ʕ\��
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//�����Ȃ��l�\��
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//�����Ă���l�\��
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//�����Ă��l��~
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//�����Ă��l��~
	//�䎌
	if(t==90)strcpy_s(event_tolk[0][0], "�É��A�o���̏������������܂���");
	if(t==90+120*1)strcpy_s(event_tolk[1][0], "����");
	if(t==90+120*2)strcpy_s(event_tolk[1][1], "��������");
	if(t==90+120*3){
		strcpy_s(setu_1, "���߂ĕ�����");//B=1
		strcpy_s(setu_2, "�ܘ_�m���Ă���");//B=2
		eve_bunki();
	}
	if(t==90+120*4){
		strcpy_s(event_tolk[0][0], "�������É�");//B=1
		strcpy_s(event_tolk[0][1], "�V�˂ł���");//B=2
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
//01�ԁA�Q�[���J�n��
int eve_01(){
	strcpy_s(event_tolk[0][0], "");//�K�⑤
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//�呤
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*2;//����
	A=0;//���򔻒�p
	mouse=1;

	for(t=0;t<J;){//�䎌�𒝂点��
	//�O���t�B�b�N���Œ蕔��
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
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
		strcpy_s(event_tolk[0][0], "");//�K�⑤
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//�呤
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//��ʕ\��
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//�����Ȃ��l�\��
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//�����Ă���l�\��
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//�����Ă��l��~
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//�����Ă��l��~
	//�䎌
		if(t==90){
			strcpy_s(event_tolk[0][0], "�É��A�o���̏������������܂���");
			strcpy_s(event_tolk[0][1], "�����߂�");
		}
		if(t==210){
			strcpy_s(event_tolk[1][0], "����");
		}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
//02�ԁA���̎R(���̂P)��������or�E��
int eve_02(){
	strcpy_s(event_tolk[0][0], "");//�K�⑤
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//�呤
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*5;//����
	A=0;//���򔻒�p
	mouse=1;

	for(t=0;t<J;){//�䎌�𒝂点��
	//�O���t�B�b�N���Œ蕔��
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
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
		strcpy_s(event_tolk[0][0], "");//�K�⑤
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//�呤
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0,world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[1] , TRUE ) ;//��ʕ\��
		DrawRotaGraph( 320 , 180 , 2 , 0 , unit_g[4][1][1] , TRUE ) ;//�����Ȃ������\��
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[24][0][j+3] , TRUE ) ;//�����Ă��鉤�\��
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[24][0][j] , TRUE ) ;//�����Ă����A��
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[24][0][4] , TRUE ) ;//�����Ă�����~
	//�䎌
	if(t==90){
		strcpy_s(event_tolk[1][0], "�����͉�̓꒣�肾");
	}
	if(t==90+120*1)strcpy_s(event_tolk[1][0], "����l��");
	if(t==90+120*2){
		strcpy_s(setu_1, "�킢�𒧂�");//B=1
		strcpy_s(setu_2, "��������");//B=2
		eve_bunki();
		if(B==2){
			t+=240;
			strcpy_s(event_tolk[1][0], "");
		}
	}
	if(t==90+120*3){
		strcpy_s(event_tolk[1][0], "�g�̒���m���悤����");//B=1
	}
	if(t==90+120*4){
		strcpy_s(event_tolk[1][0], "�Ԃ蓢���ɂ��Ă�����");//B=1
	}
	if(t==90+120*5 && B==1) break;
	//
	syaberi();
	ScreenFlip();
	}
	if(B==1)for(t=0;t<60;t++){
		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		DrawGraph( 0, 0,world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[1] , TRUE ) ;//��ʕ\��
		DrawRotaGraph( 320 , 180 , 2 , 0 , unit_g[4][1][1] , TRUE ) ;//�����Ȃ������\��
		DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[24][0][4] , TRUE ) ;//�����Ă�����~
		for(i=0;i<5;i++){
		DrawBox(0       ,i*96,t*20,i*96+48,kuro,TRUE);
		DrawBox(640-t*20,i*96+48,640,i*96+96,kuro,TRUE);
		}
		ScreenFlip();
	}


	return 0;
}
//03�ԁA���̎R(���̂Q)�b������or�E��
int eve_03(){
	strcpy_s(event_tolk[0][0], "");//�K�⑤
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//�呤
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*5;//����
	A=0;//���򔻒�p
	mouse=1;

	for(t=0;t<J;){//�䎌�𒝂点��
	//�O���t�B�b�N���Œ蕔��
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
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
		strcpy_s(event_tolk[0][0], "");//�K�⑤
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//�呤
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0,world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[1] , TRUE ) ;//��ʕ\��
		DrawRotaGraph( 320 , 180 , 2 , 0 , unit_g[4][1][1] , TRUE ) ;//�����Ȃ������\��
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[24][0][j+3] , TRUE ) ;//�����Ă��鉤�\��
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[24][0][j] , TRUE ) ;//�����Ă����A��
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[24][0][4] , TRUE ) ;//�����Ă�����~
	//�䎌
	if(t==90){
		strcpy_s(event_tolk[1][0], "�����͉�̓꒣�肾");
	}
	if(t==90+120*1)strcpy_s(event_tolk[1][0], "����l��");
	if(t==90+120*2){
		strcpy_s(setu_1, "�킢�𒧂�");//B=1
		strcpy_s(setu_2, "���͂𗊂�");//B=2
		eve_bunki();
	}
	if(t==90+120*3){
		if(B==1)strcpy_s(event_tolk[1][0], "�g�̒���m���悤����");//B=1
		else{
			strcpy_s(event_tolk[1][0], "�[���̖��������E�E�E");//B=1
			strcpy_s(event_tolk[1][1], "�䂪�꒣����r�炷�ނ̖����ɂ�");//B=1
			strcpy_s(event_tolk[1][2], "��������Ă�����");//B=1
		}
	}
	if(t==90+120*4){
		if(B==1)strcpy_s(event_tolk[1][0], "�Ԃ蓢���ɂ��Ă�����");//B=1
		else{
			kuni_seiryoku[2]=2;
			eve_flag[3]=1;
			strcpy_s(event_tolk[1][0], "�悩�낤�A�z�Ƃ̐�ł͉���Ă�");//B=1
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
		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		DrawGraph( 0, 0,world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[1] , TRUE ) ;//��ʕ\��
		DrawRotaGraph( 320 , 180 , 2 , 0 , unit_g[4][1][1] , TRUE ) ;//�����Ȃ������\��
		DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[24][0][4] , TRUE ) ;//�����Ă�����~
		for(i=0;i<5;i++){
		DrawBox(0       ,i*96,t*20,i*96+48,kuro,TRUE);
		DrawBox(640-t*20,i*96+48,640,i*96+96,kuro,TRUE);
		}
		ScreenFlip();
	}


	return 0;
}
//04�ԁA���̎R(���̂R)��������or�E��
int eve_04(){
	strcpy_s(event_tolk[0][0], "");//�K�⑤
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//�呤
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*5;//����
	A=0;//���򔻒�p
	mouse=1;

	for(t=0;t<J;){//�䎌�𒝂点��
	//�O���t�B�b�N���Œ蕔��
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
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
		strcpy_s(event_tolk[0][0], "");//�K�⑤
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//�呤
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0,world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[1] , TRUE ) ;//��ʕ\��
		DrawRotaGraph( 320 , 180 , 2 , 0 , unit_g[4][1][1] , TRUE ) ;//�����Ȃ������\��
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[24][0][j+3] , TRUE ) ;//�����Ă��鉤�\��
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[24][0][j] , TRUE ) ;//�����Ă����A��
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[24][0][4] , TRUE ) ;//�����Ă�����~
	//�䎌
	if(t==90){
		strcpy_s(event_tolk[1][0], "�v�����ȁA��ɉ����p���H");
	}
	if(t==90+120*1){
		strcpy_s(event_tolk[0][0], "�����P���̂��~�߂��");
	}
	if(t==90+120*2){
		strcpy_s(event_tolk[1][0], "�l����炤�͗��̒��");
		strcpy_s(event_tolk[1][1], "�~�߂鎖�͏o����");
	}
	if(t==90+120*3){
		strcpy_s(event_tolk[1][0], "�ǂ����Ă��~�߂��������Ȃ��");
		strcpy_s(event_tolk[1][1], "����E��");
		strcpy_s(event_tolk[0][0], "");
	}
	if(t==90+120*4){
		strcpy_s(setu_1, "�킢�𒧂�");//B=1
		strcpy_s(setu_2, "��������");//B=2
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
		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		DrawGraph( 0, 0,world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[1] , TRUE ) ;//��ʕ\��
		DrawRotaGraph( 320 , 180 , 2 , 0 , unit_g[4][1][1] , TRUE ) ;//�����Ȃ������\��
		DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[24][0][4] , TRUE ) ;//�����Ă�����~
		for(i=0;i<5;i++){
		DrawBox(0       ,i*96,t*20,i*96+48,kuro,TRUE);
		DrawBox(640-t*20,i*96+48,640,i*96+96,kuro,TRUE);
		}
		ScreenFlip();
	}


	return 0;
}
//05�ԁA���̎R�őS�ŁA�Q�[���I�[�o�[
int eve_05(){
	strcpy_s(event_tolk[0][0], "");//�K�⑤
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//�呤
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*5;//����
	A=0;//���򔻒�p
	mouse=1;

	for(t=90;t<J;){//�䎌�𒝂点��
	//�O���t�B�b�N���Œ蕔��
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
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
		strcpy_s(event_tolk[0][0], "");//�K�⑤
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//�呤
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0,world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[1] , TRUE ) ;//��ʕ\��
		DrawRotaGraph( 320 , 180 , 2 , 0 , unit_g[4][1][1] , TRUE ) ;//�����Ȃ������\��
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[24][0][j+3] , TRUE ) ;//�����Ă��鉤�\��
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[24][0][j] , TRUE ) ;//�����Ă����A��
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[24][0][4] , TRUE ) ;//�����Ă�����~
	//�䎌
	if(t==90){
		strcpy_s(event_tolk[1][0], "����܂ł̂悤����");
	}
	if(t==90+120*1){
		strcpy_s(event_tolk[1][0], "�n���Ō������Ƃ���");
	}
	if(t==90+120*2){
		strcpy_s(event_tolk[0][0], "����[");
	}
	if(t==90+120*3) break;
	//
	syaberi();
	ScreenFlip();
	}
	for(t=0;t<60;t++){
		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		DrawGraph( 0, 0,world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[1] , TRUE ) ;//��ʕ\��
		DrawRotaGraph( 320 , 180 , 2 , 0 , unit_g[4][1][1] , TRUE ) ;//�����Ȃ������\��
		DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[24][0][4] , TRUE ) ;//�����Ă�����~
		for(i=0;i<5;i++){
		DrawBox(0       ,i*96,t*20,i*96+48,kuro,TRUE);
		DrawBox(640-t*20,i*96+48,640,i*96+96,kuro,TRUE);
		}
		ScreenFlip();
	}

	DxLib_End() ;//DX���C�u�����̎g�p�I��
	exit(1);//�v���O�����̏I��

	return 0;
}
//06�ԁA�O�P��́A�X�̌��C�x���g�i�i�v���y
int eve_06(){
	strcpy_s(event_tolk[0][0], "");//�K�⑤
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//�呤
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*1;//����
	A=0;//���򔻒�p
	mouse=1;

	for(t=0;t<J;){//�䎌�𒝂点��
	//�O���t�B�b�N���Œ蕔��
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
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
		strcpy_s(event_tolk[0][0], "");//�K�⑤
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//�呤
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0,world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[2] , TRUE ) ;//��ʕ\��
		SetDrawBlendMode( DX_BLENDMODE_ALPHA , 210 ) ;
		if(t<=90)DrawRotaGraph( 320 , 180 , 2 , 0 , item_g[12] , TRUE ) ;//�X�̌��\��
		SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[24][0][j+3] , TRUE ) ;//�����Ă��鉤�\��
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[24][0][j] , TRUE ) ;//�����Ă����A��
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[24][0][4] , TRUE ) ;//�����Ă�����~
	//�䎌
	if(t==90){
		strcpy_s(event_tolk[0][0], "�O��̕X�̌�����ɓ��ꂽ��");
	}
	syaberi();
	ScreenFlip();
	}
	get_hyouhou[42]=1;
	flag_hyouhou[42]=1;

	return 0;
}
//07�ԁA�O�Q��́A�����E���C�x���g�A���يl���i���̎R
int eve_07(){
	strcpy_s(event_tolk[0][0], "");//�K�⑤
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//�呤
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*4;//����
	A=0;//���򔻒�p
	mouse=1;

	for(t=90;t<J;){//�䎌�𒝂点��
	//�O���t�B�b�N���Œ蕔��
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
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
		strcpy_s(event_tolk[0][0], "");//�K�⑤
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//�呤
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0,world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[1] , TRUE ) ;//��ʕ\��
		if(t<=90+120*2)DrawRotaGraph( 320 , 180 , 2 , 0 , unit_g[4][1][1] , TRUE ) ;//�����Ȃ������\��
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[24][0][j+3] , TRUE ) ;//�����Ă��鉤�\��
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[24][0][j] , TRUE ) ;//�����Ă����A��
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[24][0][4] , TRUE ) ;//�����Ă�����~
	//�䎌
	if(t==90){
		strcpy_s(event_tolk[1][0], "�܂����l�Ԕ@���ɒx����Ƃ�Ƃ�");
	}
	if(t==90+120*1)strcpy_s(event_tolk[0][0], "�~�߂�");
	if(t==90+120*2){
		strcpy_s(event_tolk[1][0], "�����[");//B=1
	}
	if(t==90+120*3){
		strcpy_s(event_tolk[0][0], "���؂�");//B=1
		strcpy_s(event_tolk[1][0], "");//B=1
	}
	syaberi();
	ScreenFlip();
	}
	get_item[2]++;
	return 0;
}
//08�ԁA�O�Q��́A�����E���C�x���g���̂Q�A���يl���i���̎R
int eve_08(){
	strcpy_s(event_tolk[0][0], "");//�K�⑤
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//�呤
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*4;//����
	A=0;//���򔻒�p
	mouse=1;

	for(t=90;t<J;){//�䎌�𒝂点��
	//�O���t�B�b�N���Œ蕔��
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
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
		strcpy_s(event_tolk[0][0], "");//�K�⑤
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//�呤
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0,world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[1] , TRUE ) ;//��ʕ\��
		if(t<=90+120*2)DrawRotaGraph( 320 , 180 , 2 , 0 , unit_g[4][1][1] , TRUE ) ;//�����Ȃ������\��
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[24][0][j+3] , TRUE ) ;//�����Ă��鉤�\��
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[24][0][j] , TRUE ) ;//�����Ă����A��
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[24][0][4] , TRUE ) ;//�����Ă�����~
	//�䎌
	if(t==90){
		strcpy_s(event_tolk[1][0], "�������߂�");
	}
	if(t==90+120*1)strcpy_s(event_tolk[0][0], "�~�߂�");
	if(t==90+120*2){
		strcpy_s(event_tolk[1][0], "�����[");//B=1
	}
	if(t==90+120*3){
		strcpy_s(event_tolk[0][0], "���؂�");//B=1
		strcpy_s(event_tolk[1][0], "");//B=1
	}
	syaberi();
	ScreenFlip();
	}
	get_item[2]++;
	return 0;
}
//�񍐌n
//09�ԁA�P�S�����A�d���Ɖ�B���폫�̘b
int eve_09(){
	strcpy_s(event_tolk[0][0], "");//�K�⑤
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//�呤
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*7;//����
	A=0;//���򔻒�p
	mouse=1;
	for(t=0;t<J;){//�䎌�𒝂点��
	//�O���t�B�b�N���Œ蕔��
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
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
		strcpy_s(event_tolk[0][0], "");//�K�⑤
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//�呤
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//��ʕ\��
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//�����Ȃ��l�\��
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[25][0][j+3] , TRUE ) ;//�����Ă���l�\��
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[25][0][j] , TRUE ) ;//�����Ă��l��~
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[25][0][4] , TRUE ) ;//�����Ă��l��~
	//�䎌
	if(t==90){
		strcpy_s(event_tolk[0][0], "���߂܂��ĕÉ�");
		strcpy_s(event_tolk[0][1], "�����̃G���E�B�ł������܂�");
	}
	if(t==90+120*1){
		strcpy_s(event_tolk[0][0], "�ŋߖ��_�a����׈��ȋC�z��");
		strcpy_s(event_tolk[0][1], "�����܂�");
		strcpy_s(event_tolk[0][2], "�[���̖傪�J�������Ă���̂ł�");
	}
	if(t==90+120*2){
		strcpy_s(event_tolk[1][0], "����͈�厖��");//B=1
	}
	if(t==90+120*3){
		strcpy_s(event_tolk[0][0], "�K���ނ̎҂̗͂͂܂��キ");
		strcpy_s(event_tolk[0][1], "�\���΍R���鎖���o���܂�");
		strcpy_s(event_tolk[0][2], "");
	}
	if(t==90+120*4){
		strcpy_s(event_tolk[1][0], "�Ȃ�΍��̓��ɒ@���Ă�����");
		strcpy_s(event_tolk[1][1], "");
	}
	if(t==90+120*5){
		strcpy_s(event_tolk[0][0], "���_�a�֍U�ߍ��ލۂ͉�炪");//B=1
		strcpy_s(event_tolk[0][1], "���͂������܂�");//B=2
	}
	if(t==90+120*6){
		strcpy_s(event_tolk[1][0], "����");//B=1
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
//11�ԁA�Q�Q���or�����A�b���̒�//�o���o�[�h
int eve_10(){
	strcpy_s(event_tolk[0][0], "");//�K�⑤
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//�呤
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*1;//����
	A=0;//���򔻒�p
	mouse=1;
	for(t=0;t<J;){//�䎌�𒝂点��
	//�O���t�B�b�N���Œ蕔��
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
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
		strcpy_s(event_tolk[0][0], "");//�K�⑤
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//�呤
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//��ʕ\��
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//�����Ȃ��l�\��
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//�����Ă���l�\��
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//�����Ă��l��~
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//�����Ă��l��~
	//�䎌
	if(t==90){
		strcpy_s(event_tolk[0][0], "��m�M���h�{����}���܂���");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
//15�ԁA�Q�W���or�����A�E�̒�//�R�E�K�C
int eve_11(){
	strcpy_s(event_tolk[0][0], "");//�K�⑤
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//�呤
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*1;//����
	A=0;//���򔻒�p
	mouse=1;
	for(t=0;t<J;){//�䎌�𒝂点��
	//�O���t�B�b�N���Œ蕔��
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
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
		strcpy_s(event_tolk[0][0], "");//�K�⑤
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//�呤
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//��ʕ\��
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//�����Ȃ��l�\��
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//�����Ă���l�\��
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//�����Ă��l��~
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//�����Ă��l��~
	//�䎌
	if(t==90){
		strcpy_s(event_tolk[0][0], "�E�т̗���}���܂���");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
//18�ԁA�O�S��́A���������ށA����(�o���̕�
int eve_12(){
	strcpy_s(event_tolk[0][0], "");//�K�⑤
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//�呤
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*2;//����
	A=0;//���򔻒�p
	mouse=1;
	for(t=0;t<J;){//�䎌�𒝂点��
	//�O���t�B�b�N���Œ蕔��
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
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
		strcpy_s(event_tolk[0][0], "");//�K�⑤
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//�呤
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//��ʕ\��
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//�����Ȃ��l�\��
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//�����Ă���l�\��
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//�����Ă��l��~
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//�����Ă��l��~
	//�䎌
	if(t==90){
		strcpy_s(event_tolk[0][0], "�o���̕�ŕ�𔭌����܂���");
	}
	if(t==90+120){
		strcpy_s(event_tolk[1][0], "���؂�");
	}
	//
	syaberi();
	ScreenFlip();
	}
	get_item[2]++;
	return 0;
}
//19�ԁA�P�Q��́A���������ށA�P���̉H�i�鐝�v��
int eve_13(){
	strcpy_s(event_tolk[0][0], "");//�K�⑤
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//�呤
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*2;//����
	A=0;//���򔻒�p
	mouse=1;
	for(t=0;t<J;){//�䎌�𒝂点��
	//�O���t�B�b�N���Œ蕔��
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
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
		strcpy_s(event_tolk[0][0], "");//�K�⑤
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//�呤
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//��ʕ\��
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//�����Ȃ��l�\��
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//�����Ă���l�\��
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//�����Ă��l��~
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//�����Ă��l��~
	//�䎌
	if(t==90){
		strcpy_s(event_tolk[0][0], "�鐝�v�ǂŕ�𔭌����܂���");
	}
	if(t==90+120){
		strcpy_s(event_tolk[1][0], "�P���̉H��");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
//20�ԁA�Q�X��́A���C�����ށ@�����̎��B�i�C��{
int eve_14(){
	strcpy_s(event_tolk[0][0], "");//�K�⑤
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//�呤
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*2;//����
	A=0;//���򔻒�p
	mouse=1;
	for(t=0;t<J;){//�䎌�𒝂点��
	//�O���t�B�b�N���Œ蕔��
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
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
		strcpy_s(event_tolk[0][0], "");//�K�⑤
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//�呤
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//��ʕ\��
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//�����Ȃ��l�\��
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//�����Ă���l�\��
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//�����Ă��l��~
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//�����Ă��l��~
	//�䎌
	if(t==90){
		strcpy_s(event_tolk[0][0], "�C��{�ŕ�𔭌����܂���");
	}
	if(t==90+120){
		strcpy_s(event_tolk[1][0], "�����̎���");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
//21�ԁA�P�T��́A���폫���ށA�����i���_�a
int eve_15(){
	strcpy_s(event_tolk[0][0], "");//�K�⑤
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//�呤
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*2;//����
	A=0;//���򔻒�p
	mouse=1;
	for(t=0;t<J;){//�䎌�𒝂点��
	//�O���t�B�b�N���Œ蕔��
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
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
		strcpy_s(event_tolk[0][0], "");//�K�⑤
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//�呤
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//��ʕ\��
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//�����Ȃ��l�\��
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//�����Ă���l�\��
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//�����Ă��l��~
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//�����Ă��l��~
	//�䎌
	if(t==90){
		strcpy_s(event_tolk[0][0], "���_�a�ŕ�𔭌����܂���");
	}
	if(t==90+120){
		strcpy_s(event_tolk[1][0], "������");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
//16�ԁA�S�������ށA�[���o���B
int eve_16(){



	strcpy_s(event_tolk[0][0], "");//�K�⑤
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//�呤
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120;//����
	A=0;//���򔻒�p
	mouse=1;
	for(t=0;t<J;){//�䎌�𒝂点��
	//�O���t�B�b�N���Œ蕔��
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
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
		strcpy_s(event_tolk[0][0], "");//�K�⑤
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//�呤
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//��ʕ\��
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//�����Ȃ��l�\��
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//�����Ă���l�\��
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//�����Ă��l��~
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//�����Ă��l��~
	//�䎌
	if(t==90){
		strcpy_s(event_tolk[0][0], "�[���ւ̖�𔭌����܂���");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
//17�ԁA���������o��(�Y�ƁA���́A���O���ō�
int eve_17(){
	strcpy_s(event_tolk[0][0], "");//�K�⑤
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//�呤
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120;//����
	A=0;//���򔻒�p
	mouse=1;
	for(t=0;t<J;){//�䎌�𒝂点��
	//�O���t�B�b�N���Œ蕔��
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
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
		strcpy_s(event_tolk[0][0], "");//�K�⑤
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//�呤
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//��ʕ\��
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//�����Ȃ��l�\��
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//�����Ă���l�\��
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//�����Ă��l��~
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//�����Ă��l��~
	//�䎌
	if(t==90){
		strcpy_s(event_tolk[0][0], "���̐X�ɖ��������邻���ł�");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
//18�ԁA�����X���P���Ă��܂�
int eve_18(){
	strcpy_s(event_tolk[0][0], "");//�K�⑤
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//�呤
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120;//����
	A=0;//���򔻒�p
	mouse=1;
	for(t=0;t<J;){//�䎌�𒝂点��
	//�O���t�B�b�N���Œ蕔��
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
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
		strcpy_s(event_tolk[0][0], "");//�K�⑤
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//�呤
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//��ʕ\��
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//�����Ȃ��l�\��
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//�����Ă���l�\��
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//�����Ă��l��~
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//�����Ă��l��~
	//�䎌
	if(t==90){
		strcpy_s(event_tolk[0][0], "�h���[�����X���P���Ă��܂�");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
//19�ԁA�I�N�������O������͂�ł��܂�
int eve_19(){
	strcpy_s(event_tolk[0][0], "");//�K�⑤
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//�呤
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*2;//����
	A=0;//���򔻒�p
	mouse=1;
	for(t=0;t<J-90;){//�䎌�𒝂点��
	//�O���t�B�b�N���Œ蕔��
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
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
		strcpy_s(event_tolk[0][0], "");//�K�⑤
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//�呤
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//��ʕ\��
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//�����Ȃ��l�\��
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//�����Ă���l�\��
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//�����Ă��l��~
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//�����Ă��l��~
	//�䎌
	if(t==90){
		strcpy_s(event_tolk[0][0], "���O��������͂�ł��܂�");
		strcpy_s(event_tolk[0][1], "�����������܂���");
	}
	if(t==90+120){
		strcpy_s(event_tolk[1][0], "�Ȃ�ƌ�������");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
int eve_20(){
	strcpy_s(event_tolk[0][0], "");//�K�⑤
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//�呤
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*2;//����
	A=0;//���򔻒�p
	mouse=1;
	for(t=0;t<J-90;){//�䎌�𒝂点��
	//�O���t�B�b�N���Œ蕔��
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
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
		strcpy_s(event_tolk[0][0], "");//�K�⑤
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//�呤
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//��ʕ\��
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//�����Ȃ��l�\��
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//�����Ă���l�\��
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//�����Ă��l��~
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//�����Ă��l��~
	//�䎌
	if(t==90){
		strcpy_s(event_tolk[0][0], "�G�R��������͂�ł��܂�");
		strcpy_s(event_tolk[0][1], "�����������܂���");
	}
	if(t==90+120){
		strcpy_s(event_tolk[1][0], "�Ȃ�ƌ�������");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
int eve_21(){
	strcpy_s(event_tolk[0][0], "");//�K�⑤
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//�呤
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*2;//����
	A=0;//���򔻒�p
	mouse=1;
	for(t=0;t<J-90;){//�䎌�𒝂点��
	//�O���t�B�b�N���Œ蕔��
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
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
		strcpy_s(event_tolk[0][0], "");//�K�⑤
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//�呤
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//��ʕ\��
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//�����Ȃ��l�\��
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//�����Ă���l�\��
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//�����Ă��l��~
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//�����Ă��l��~
	//�䎌
	if(t==90){
		strcpy_s(event_tolk[0][0], "�䂪���̐�͂ł�");
		strcpy_s(event_tolk[0][1], "�����킢�����鎖�͏o���܂���");
		strcpy_s(event_tolk[0][2], "�卑�̌R��ɉ���܂��傤");
	}
	if(t==90+120){
		strcpy_s(event_tolk[1][0], "�d���������A�������悤");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
int eve_22(){
	strcpy_s(event_tolk[0][0], "");//�K�⑤
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//�呤
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*2;//����
	A=0;//���򔻒�p
	mouse=1;
	for(t=0;t<J-90;){//�䎌�𒝂点��
	//�O���t�B�b�N���Œ蕔��
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
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
		strcpy_s(event_tolk[0][0], "");//�K�⑤
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//�呤
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//��ʕ\��
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//�����Ȃ��l�\��
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//�����Ă���l�\��
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//�����Ă��l��~
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//�����Ă��l��~
	//�䎌
	if(t==90){
		strcpy_s(event_tolk[0][0], "�����͂܂��܂������܂�");
		strcpy_s(event_tolk[0][1], "�e�������ނ��ߊ撣��܂��傤");
		strcpy_s(event_tolk[0][2], "");
	}
	if(t==90+120){
		strcpy_s(event_tolk[1][0], "���ށA���̐킢�֕�����");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
int eve_23(){
	strcpy_s(event_tolk[0][0], "");//�K�⑤
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//�呤
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*2;//����
	A=0;//���򔻒�p
	mouse=1;
	for(t=0;t<J-90;){//�䎌�𒝂点��
	//�O���t�B�b�N���Œ蕔��
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
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
		strcpy_s(event_tolk[0][0], "");//�K�⑤
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//�呤
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//��ʕ\��
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//�����Ȃ��l�\��
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//�����Ă���l�\��
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//�����Ă��l��~
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//�����Ă��l��~
	//�䎌
	if(t==90){
		strcpy_s(event_tolk[0][0], "�䂪���͈ȑO�Ɣ�ׂ��Ȃ��");
		strcpy_s(event_tolk[0][1], "�卑�ƂȂ�܂���");
		strcpy_s(event_tolk[0][2], "������É��̎�r�����Ă���");
	}
	if(t==90+120){
		strcpy_s(event_tolk[1][0], "���̒��q�ő嗤�����ڎw����");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
int eve_24(){
	strcpy_s(event_tolk[0][0], "");//�K�⑤
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//�呤
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*3;//����
	A=0;//���򔻒�p
	mouse=1;
	for(t=0;t<J-90;){//�䎌�𒝂点��
	//�O���t�B�b�N���Œ蕔��
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
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
		strcpy_s(event_tolk[0][0], "");//�K�⑤
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//�呤
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//��ʕ\��
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//�����Ȃ��l�\��
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//�����Ă���l�\��
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//�����Ă��l��~
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//�����Ă��l��~
	//�䎌
	if(t==90){
		strcpy_s(event_tolk[0][0], "�É��̈̋Ƃ͉i����");
		strcpy_s(event_tolk[0][1], "�������ł��傤");
		strcpy_s(event_tolk[0][2], "");
	}
	if(t==90+120){
		strcpy_s(event_tolk[0][0], "���O����L�Ԃő҂��Ă��܂�");
		strcpy_s(event_tolk[0][1], "�����܂��傤");
		strcpy_s(event_tolk[0][2], "");
	}
	if(t==90+240){
		strcpy_s(event_tolk[1][0], "�悵�A������");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
int eve_25(){
	strcpy_s(event_tolk[0][0], "");//�K�⑤
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//�呤
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120*4;//����
	A=0;//���򔻒�p
	mouse=1;
	for(t=0;t<J-90;){//�䎌�𒝂点��
	//�O���t�B�b�N���Œ蕔��
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
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
		strcpy_s(event_tolk[0][0], "");//�K�⑤
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//�呤
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[3] , TRUE ) ;//��ʕ\��
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[19][1][1] , TRUE ) ;//�����Ȃ��l�\��
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[24][0][j+3] , TRUE ) ;//�����Ă���l�\��
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[24][0][j] , TRUE ) ;//�����Ă��l��~
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[24][0][4] , TRUE ) ;//�����Ă��l��~
	//�䎌
	if(t==90){
		strcpy_s(event_tolk[0][0], "�[���̉���");
		strcpy_s(event_tolk[0][1], "�M�l�̖��^������܂ł�");
		strcpy_s(event_tolk[0][2], "");
	}
	if(t==90+120){
		strcpy_s(event_tolk[1][0], "�F�߂ʁA�F�߂ʂ�");
		strcpy_s(event_tolk[1][1], "�l�Ԕ@���Ɏ���������Ȃ�");
		strcpy_s(event_tolk[1][2], "");
	}
	if(t==90+240){
		strcpy_s(event_tolk[0][0], "��炦");
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
	}
	if(t==90+360){
		strcpy_s(event_tolk[1][0], "�����[");
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
	strcpy_s(event_tolk[0][0], "");//�K�⑤
	strcpy_s(event_tolk[0][1], "");
	strcpy_s(event_tolk[0][2], "");
	strcpy_s(event_tolk[1][0], "");//�呤
	strcpy_s(event_tolk[1][1], "");
	strcpy_s(event_tolk[1][2], "");

	J=180+120;//����
	A=0;//���򔻒�p
	mouse=1;
	for(t=0;t<J;){//�䎌�𒝂点��
	//�O���t�B�b�N���Œ蕔��
		if(t<90 || t>=J-90)t++;

		if( ProcessMessage() == -1 || CheckHitKey( KEY_INPUT_ESCAPE ) == 1){//ESC�������G���[�ŏI��
		DxLib_End() ;//DX���C�u�����̎g�p�I��
		exit(1);//�v���O�����̏I��
		}
		GetMousePoint( &mou_x, &mou_y );
		if(A==0)if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0){//�}�E�X������
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
		strcpy_s(event_tolk[0][0], "");//�K�⑤
		strcpy_s(event_tolk[0][1], "");
		strcpy_s(event_tolk[0][2], "");
		strcpy_s(event_tolk[1][0], "");//�呤
		strcpy_s(event_tolk[1][1], "");
		strcpy_s(event_tolk[1][2], "");
		}
		DrawGraph( 0, 0, world_map, TRUE ) ;//�w�i�\��
		DrawRotaGraph( 320 , 240 , 2 , 0 , bamen[0] , TRUE ) ;//��ʕ\��
		DrawRotaGraph( 320 , 140 , 2 , 0 , unit_g[24][0][1] , TRUE ) ;//�����Ȃ��l�\��
		if(t<90)DrawRotaGraph( 320 , 350-t*1 , 2 , 0 , unit_g[26][0][j+3] , TRUE ) ;//�����Ă���l�\��
		else if(t>J-90)DrawRotaGraph( 320 , 260+(t-J+90) , 2 , 0 , unit_g[26][0][j] , TRUE ) ;//�����Ă��l��~
		else	DrawRotaGraph( 320 , 260 , 2 , 0 , unit_g[26][0][4] , TRUE ) ;//�����Ă��l��~
	//�䎌
	if(t==90){
		strcpy_s(event_tolk[0][0], "���S�̑��A�ɃS�u������");
		strcpy_s(event_tolk[0][1], "�܂�������܂���");
	}
	//
	syaberi();
	ScreenFlip();
	}
	return 0;
}
int eve_bunki(){//�C�x���g����

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
	if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0 ){//�}�E�X������
		if(B!=0 && mouse==0){t+=120;A=0;mouse=1;return 0;}
		mouse=1;
	}else mouse=0;

	B=0;
	return 0;
}
//����ɂ��\�͑��
int hei_dai(){
	hei_pow[A][i]=job_pow[c];//���m�̊�{�U����
	hei_def[A][i]=job_def[c];//���m�̊�{�h���
	hei_wei[A][i]=job_wei[c];//���m�̊�{���񒣂�
	hei_spd[A][i]=job_spd[c];//���m�̊�{�@����
	hei_sta[A][i]=job_sta[c];//���m�̊�{�X�^�~�i
	hei_type[A][i]=c;//���m�̕���
	hei_kaz[A][i]=job_vit[c];//���m�̕�����
	hei_sibou[A][i]=0;//���m���S�t���O
	hei_muk[A][i]=1-A;//���m�̌���
	hei_jyo[A][i]=0;//���m�̏�Ԉُ�
	hei_moral[A][i]=10000;//���m�̎m�C
	hei_jump[A][i]=0;
	hei_syou[A][i]=-5;//���m�̃��������ԕω���
	hei_stop[A][i]=0;//���m�̈ꎞ��~����
	hei_sen[A][i]=2;//���m�̐퓬���
	hei_emo[A][i]=0;//���o���\���t���O�p
	hei_esc[A][i]=0;//������
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
			if(hei_y[A][j]>hei_y[A][j+1]){//��ɂ�������������Ȃ����
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
		sentou_byouga();//�퓬���̕`�揈��
		ScreenFlip();
	}
	return 0;
}
int hukidasi(){

	if(hei_sibou[A][gun_kazu[A]]>100 || hei_toppa[A][gun_kazu[A]]!=0) return 0;
	serihu_long2 = int(strlen( serihu )) ;
	serihu_long = GetDrawStringWidth( serihu , serihu_long2 ) ;

	for(t=0;t<50;t++){
		sentou_byouga();//�퓬���̕`�揈��
		xa=hei_x[A][gun_kazu[A]]/1000-8-A*16;
		ya=hei_y[A][gun_kazu[A]]/1000+70;
		if(xa<600-serihu_long){
		waku(xa,ya-10,xa+serihu_long+10,ya+19);
		DrawGraph( hei_x[A][gun_kazu[A]]/1000-8-A*16, hei_y[A][gun_kazu[A]]/1000+70, huki, TRUE ) ;//����308
		DrawString( xa+4 , ya-6 , serihu , GetColor(0,0,0) );
		}else{
		waku(xa-serihu_long+18,ya-10,xa+30,ya+19);
		DrawGraph( hei_x[A][gun_kazu[A]]/1000-8-A*16, hei_y[A][gun_kazu[A]]/1000+70, huki, TRUE ) ;//����308
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
		case 0:strcpy_s(serihu, "�\�\�\�\�\�\");hatudou_kanou[A][i]=1;break;
		case 1:strcpy_s(serihu, "�S�R�O�i");break;
		case 2:strcpy_s(serihu, "�S�R���");break;
		case 3:strcpy_s(serihu, "�S�R�h��");break;
		case 4:strcpy_s(serihu, "�S�R�ˌ�");break;
		case 5:strcpy_s(serihu, "�S�R�ދp");break;
		case 6:strcpy_s(serihu, "�O��O�i");if(gun_retu[A]==1)hatudou_kanou[A][i]=1;break;
		case 7:strcpy_s(serihu, "���O�i");if(gun_retu[A]==1)hatudou_kanou[A][i]=1;break;
		case 8:strcpy_s(serihu, "���U�O�i");break;
		case 9:strcpy_s(serihu, "�����O�i");break;
		case 10:strcpy_s(serihu, "��ލU��");break;
		case 11:strcpy_s(serihu, "�㗃�U��");break;
		case 12:strcpy_s(serihu, "�����U��");break;
		case 13:strcpy_s(serihu, "�O��ˌ�");if(gun_retu[A]==1)hatudou_kanou[A][i]=1;break;
		case 14:strcpy_s(serihu, "���ˌ�");if(gun_retu[A]==1)hatudou_kanou[A][i]=1;break;
		case 15:strcpy_s(serihu, "�㗃�ˌ�");break;
		case 16:strcpy_s(serihu, "�����ˌ�");break;
		case 17:strcpy_s(serihu, "�O��h��");if(gun_retu[A]==1)hatudou_kanou[A][i]=1;break;
		case 18:strcpy_s(serihu, "�S�R�h��E��");break;
		case 19:strcpy_s(serihu, "��ޖh��");break;
		case 20:strcpy_s(serihu, "���U���");break;
		case 21:strcpy_s(serihu, "�O����");if(gun_retu[A]==1)hatudou_kanou[A][i]=1;break;
		case 22:strcpy_s(serihu, "�����p�P");break;
		case 23:strcpy_s(serihu, "�����p�Q");break;
		case 24:strcpy_s(serihu, "���U���");if(gun_retu[A]==1)hatudou_kanou[A][i]=1;break;
		case 25:strcpy_s(serihu, "�����񕜁E��");break;



		case 26:strcpy_s(serihu, "�������p");break;
		case 27:strcpy_s(serihu, "�w�`��");break;
		case 28:strcpy_s(serihu, "���w�`�񕜗p");break;
		case 29:strcpy_s(serihu, "�O�񎀎�");if(gun_retu[A]==1)hatudou_kanou[A][i]=1;break;
		case 30:strcpy_s(serihu, "�����񕜁E��");break;
		case 31:strcpy_s(serihu, "�w�`�񕜁E��");break;
		case 32:strcpy_s(serihu, "���񂾃t��");if(gun_retu[A]==1)hatudou_kanou[A][i]=1;break;
		case 33:strcpy_s(serihu, "�����Ƀt���p");break;
		case 34:strcpy_s(serihu, "�J����");break;
		case 35:strcpy_s(serihu, "�~���R");break;
		case 36:strcpy_s(serihu, "���f���");if(gun_retu[A]==1)hatudou_kanou[A][i]=1;break;
		case 37:strcpy_s(serihu, "���Ε���");break;
		case 38:strcpy_s(serihu, "�����Ηp");break;
		case 39:strcpy_s(serihu, "�w�����ˌ�");break;
		case 40:strcpy_s(serihu, "��������");break;
		case 41:strcpy_s(serihu, "�΍U��");break;
		case 42:strcpy_s(serihu, "���Ƃ���");break;
		case 43:strcpy_s(serihu, "�U��̑ދp");break;
		case 44:strcpy_s(serihu, "��񑀍�k�P");break;
		case 45:strcpy_s(serihu, "��񑀍�k�Q");break;
		case 46:strcpy_s(serihu, "��񑀍�k�R");break;
		case 47:strcpy_s(serihu, "��񑀍�k�S");break;
		case 48:strcpy_s(serihu, "��񑀍�k�T");break;
		case 49:strcpy_s(serihu, "���@����");if(gun_retu[A]==1)hatudou_kanou[A][i]=1;break;
		case 50:strcpy_s(serihu, "�h����");break;
		case 51:strcpy_s(serihu, "���ۍ��");break;
		case 52:strcpy_s(serihu, "�w�΂̌v");break;
		case 53:strcpy_s(serihu, "���΍U���E��");break;
		case 54:strcpy_s(serihu, "���΍U���E��");break;
		case 55:strcpy_s(serihu, "���U�ދp");break;
		case 56:strcpy_s(serihu, "�S�R�O�i�E��");break;
		case 57:strcpy_s(serihu, "�S�R�x��");break;
		case 58:strcpy_s(serihu, "���̕�");break;
		case 59:strcpy_s(serihu, "�n������");break;
		case 60:strcpy_s(serihu, "�ײ�̨��ް");break;
		case 61:strcpy_s(serihu, "�M����ҒB");break;
		case 62:strcpy_s(serihu, "������");break;
		case 63:strcpy_s(serihu, "�i���N�̕�");break;
		case 64:strcpy_s(serihu, "��M�g");break;
		case 65:strcpy_s(serihu, "�傠�܂���");break;
		case 66:strcpy_s(serihu, "�������f���^");break;
		case 67:strcpy_s(serihu, "��n�k");break;
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
		case 0:strcpy_s(serihu, "�\�\�\�\�\�\");break;
		case 1:strcpy_s(serihu, "�c��w�`");break;
		case 2:strcpy_s(serihu, "�h�ǂ̔g�w");break;
		case 3:strcpy_s(serihu, "�U���̔g�w");break;
		case 4:strcpy_s(serihu, "�㗃�˔j�̐w");break;
		case 5:strcpy_s(serihu, "�����˔j�̐w");break;
		case 6:strcpy_s(serihu, "�����˔j�̐w");break;
		case 7:strcpy_s(serihu, "�O�g��w");break;
		case 8:strcpy_s(serihu, "�����w");break;
		case 9:strcpy_s(serihu, "�w���̐w");break;
		case 10:strcpy_s(serihu, "�����w");break;
		case 11:strcpy_s(serihu, "�g�󏂂̐w");break;
		case 12:strcpy_s(serihu, "�Ռ��w");break;
		case 13:strcpy_s(serihu, "���C����");break;
		case 14:strcpy_s(serihu, "�\���w");break;
		case 15:strcpy_s(serihu, "���w");break;
		case 16:strcpy_s(serihu, "�O�_�˔j�̐w");break;
		case 17:strcpy_s(serihu, "����w�`");break;
		case 18:strcpy_s(serihu, "���؂̐w");break;
		case 19:strcpy_s(serihu, "���Q�̐w");break;
		case 20:strcpy_s(serihu, "�V�̗�");break;
		case 21:strcpy_s(serihu, "���̗�");break;
		}

		DrawStringToHandle( 181 , 109+i*44 , serihu ,kuro , f_a ) ;
		DrawStringToHandle( 180 , 108+i*44 , serihu ,siro , f_a ) ;

	return 0;
	}
int jin_dai(){
		switch (gun_jinkei[A]){
		case 1:jin_01();strcpy_s(serihu, "�c��w�`");break;
		case 2:jin_02();strcpy_s(serihu, "�h�ǂ̔g�w");break;
		case 3:jin_03();strcpy_s(serihu, "�U���̔g�w");break;
		case 4:jin_04();strcpy_s(serihu, "�㗃�˔j�̐w");break;
		case 5:jin_05();strcpy_s(serihu, "�����˔j�̐w");break;
		case 6:jin_06();strcpy_s(serihu, "�����˔j�̐w");break;
		case 7:jin_07();strcpy_s(serihu, "�O�g��w");break;
		case 8:jin_08();strcpy_s(serihu, "�����w");break;
		case 9:jin_09();strcpy_s(serihu, "�w���̐w");break;
		case 10:jin_10();strcpy_s(serihu, "�����w");break;
		case 11:jin_11();strcpy_s(serihu, "�g�󏂂̐w");break;
		case 12:jin_12();strcpy_s(serihu, "�Ռ��w");break;
		case 13:jin_13();strcpy_s(serihu, "���C����");break;
		case 14:jin_14();strcpy_s(serihu, "�\���w");break;
		case 15:jin_15();strcpy_s(serihu, "���w");break;
		case 16:jin_16();strcpy_s(serihu, "�O�_�˔j�̐w");break;
		case 17:jin_17();strcpy_s(serihu, "����w�`");break;
		case 18:jin_18();strcpy_s(serihu, "���؂̐w");break;
		case 19:
			jin_19();
			if(A==0)strcpy_s(serihu, "���Q�̐w");
			else strcpy_s(serihu, "���邮��w");
			break;
		case 20:jin_20();strcpy_s(serihu, "�V�̗�");break;
		case 21:jin_21();strcpy_s(serihu, "���̗�");break;
		}
		strcpy_s(jin_name[A], serihu);
		if(youhei_lv[A]>gun_kazu[A]/4)youhei_lv[A]=gun_kazu[A]/4;
		if(sinobi_lv[A]>gun_kazu[A]/4)sinobi_lv[A]=gun_kazu[A]/4;
		//�G���t�����p
		if(moritami==1 && A==0)for(i=0;i<100;i++){
		if(i==gun_kazu[A]/2-5){c=25;hei_dai();}
		else if(i>gun_kazu[A]/2-11 && i<gun_kazu[A]/2){c=13;hei_dai();}
		else if(i>gun_kazu[A]-11 && i<gun_kazu[A]){c=12;hei_dai();}
		}
		//�b�������p
		if(youhei_lv[A]>0)for(i=0;i<100;i++){
		if(i>=0 && i<youhei_lv[A]){c=16;hei_dai();}
		else if(i>=gun_kazu[A]/2 && i<gun_kazu[A]/2+youhei_lv[A]){c=16;hei_dai();}
		}
		//�E�ґ����p
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
		//�h���[���[�p
		if((VS_no==33 && eve_flag[3]==1 && A==0)||(hei_type[A][gun_kazu[A]]==4)){
		hei_type[A][gun_kazu[A]]=4;
		hei_pow[A][gun_kazu[A]]=17-5-A*5+5;
		hei_def[A][gun_kazu[A]]=10-5;
		hei_wei[A][gun_kazu[A]]=100+A*300;//���m�̊�{���񒣂�
		hei_spd[A][gun_kazu[A]]=20;//���m�̊�{�@����
		hei_sta[A][gun_kazu[A]]=99;//���m�̊�{�X�^�~�i
		hei_kaz[A][gun_kazu[A]]=2000;//���m�̕�����
		}
		//�w�`�C���p
		if(gun_jinkei[A]==1)for(i=0;i<100;i++){//�c��w�`
		hei_wei[A][i]++;
		}
		if(gun_jinkei[A]==2)for(i=0;i<100;i++){//�h�ǂ̔g�w
		if(hei_retu[A][i]==0)hei_def[A][i]++;
		}
		if(gun_jinkei[A]==3)for(i=0;i<100;i++){//�U���̔g�w
		if(hei_retu[A][i]==0)hei_pow[A][i]++;
		}
		if(gun_jinkei[A]==4)for(i=0;i<100;i++){//�w
		if(i>gun_kazu[A]*2/3)hei_wei[A][i]+=2;
		}
		if(gun_jinkei[A]==5)for(i=0;i<100;i++){//�w
		if(i>gun_kazu[A]*2/3)hei_wei[A][i]+=2;
		}
		if(gun_jinkei[A]==6)for(i=0;i<100;i++){//�w
		if(i>gun_kazu[A]/2 && i<gun_kazu[A]*5/6)hei_wei[A][i]+=2;
		}
		if(gun_jinkei[A]==7)for(i=0;i<100;i++){//�w
		if(i<gun_kazu[A]/3)hei_def[A][i]++;//���m�̊�{�U����
		else if(i<gun_kazu[A]/3*2)hei_pow[A][i]++;//���m�̊�{�h���
		else hei_spd[A][i]++;//���m�̊�{�@����
		}
		if(gun_jinkei[A]==8)for(i=0;i<100;i++){//�����w
		hei_spd[A][i]+=2;//���m�̊�{�@����
		}
		if(gun_jinkei[A]==9)for(i=0;i<100;i++){//�w���̐w
		hei_pow[A][i]+=2;//���m�̊�{�U����
		hei_spd[A][i]=5;//���m�̊�{�@����
		}
		if(gun_jinkei[A]==10)for(i=0;i<100;i++){//�����w
		hei_pow[A][i]++;//���m�̊�{�U����
		hei_spd[A][i]-=3;//���m�̊�{�@����
		}
		if(gun_jinkei[A]==11)for(i=0;i<100;i++){//�g�󏂂̐w
		if(hei_retu[A][i]==0)hei_def[A][i]++;
		if(i==gun_kazu[A])hei_def[A][i]+=2;
		}
		if(gun_jinkei[A]==12)for(i=0;i<100;i++){//�Ռ��w
		hei_def[A][i]++;//���m�̊�{�h���
		hei_spd[A][i]-=3;//���m�̊�{�@����
		}
		if(gun_jinkei[A]==14)for(i=0;i<100;i++){//�w
		if(hei_kaz[A][i]>0)hei_kaz[A][i]+=10;//���m�̕�����
		}
		if(gun_jinkei[A]==15)for(i=0;i<100;i++){//�w
		hei_sta[A][i]+=2;//���m�̊�{�X�^�~�i
		}
		if(gun_jinkei[A]==16)for(i=0;i<100;i++){//�w
		if(hei_retu[A][i]==1)hei_wei[A][i]+=2;//���m�̊�{���񒣂�
		}
		if(gun_jinkei[A]==17)for(i=0;i<100;i++){//�w
		hei_wei[A][i]++;//���m�̊�{���񒣂�
		}
		if(gun_jinkei[A]==19)for(i=0;i<100;i++){//�w
		hei_def[A][i]+=1;//���m�̊�{�h���
		hei_wei[A][i]+=2;//���m�̊�{���񒣂�
		hei_spd[A][i]+=2;//���m�̊�{�@����
		}
		if(gun_jinkei[A]==20)for(i=0;i<100;i++){//�w
		hei_def[A][i]+=2;//���m�̊�{�h���
		hei_spd[A][i]+=2;//���m�̊�{�@����
		}
		if(gun_jinkei[A]==21)for(i=0;i<100;i++){//�w
		hei_pow[A][i]++;//���m�̊�{�U����
		hei_wei[A][i]+=2;//���m�̊�{���񒣂�
		}

		for(i=0;i<100;i++)hei_mov[A][i]=hei_spd[A][i]*(A*2-1)*50;//���x���

		return 0;
}
int jin_select(){

	while(1){

	GetMousePoint( &mou_x, &mou_y );

	if( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ){//�}�E�X������
	if(mouse==0) break;
	}else mouse=0;

	sentou_byouga();//�퓬���̕`�揈��
	SetDrawBlendMode( DX_BLENDMODE_ALPHA , 120 ) ;
	DrawBox( 160 , 98 , 480 , 190 , ao , TRUE ) ;
	if(mou_x>160 && mou_x<480 && mou_y>102 && mou_y <190) DrawBox( 170 , 19+(mou_y-14)/44*44 , 470 , 53+(mou_y-14)/44*44 ,ao , TRUE ) ;
	SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 255 ) ;

	for(i=0;i<2;i++)jinkei_mes();

		if( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0 && mou_x>160 && mou_x<480 && mou_y>102 && mou_y <190){//�}�E�X������
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
	sentou_byouga();//�퓬���̕`�揈��
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
		//�����c�萔�`�F�b�N
		gun_nokori[0]=0;xa=0;//�����c�萔-�ދp��
		gun_nokori[1]=0;ya=0;//�����c�萔-�ދp��
		xb=0;yb=0;//c=-1�S�� c=0 �ދp�@c>0 ����
		//�����c��Ό�or�����S��or�����ދp
		for(i=0;i<gun_kazu[0]+1;i++){
		if(hei_kaz[0][i]>0 || hei_toppa[0][i]>0)gun_nokori[0]++;
		if(hei_esc[0][i]!=0)xa++;
		}
		for(i=0;i<gun_kazu[1]+1;i++){
		if(hei_kaz[1][i]>0  || hei_toppa[1][i]>0)gun_nokori[1]++;
		if(hei_esc[1][i]!=0)ya++;
		}
		if(gun_nokori[0]==0 && xa==0)xb=-1;//���R�S��
		else if(gun_nokori[0]==0 && xa>0)xb=0;//���R�ދp
		else xb=gun_nokori[0];//�����c��Ό�

		if(gun_nokori[1]==0 && ya==0)yb=-1;//�G�R�S��
		else if(gun_nokori[1]==0 && ya>0)yb=0;//�G�R�ދp
		else yb=gun_nokori[1];//�����c��Ό�

	for(j=0;j<2;j++)for(i=0;i<100;i++){
		hei_emo[j][i]=0;
		hei_ana[j][i]=0;
		fire_time[i]=0;
		saku_tai[i]=0;
		}
		tenki=0;
		for(t=0;t<120;t++){
		for(j=0;j<2;j++)for(i=0;i<100;i++)if(hei_kaz[j][i]>0) hei_x[j][i]+=(j*2-1)*6000;
		sentou_byouga();//�퓬���̕`�揈��
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
		sentou_byouga();//�퓬���̕`�揈��
		c=9+hei_time[0][gun_kazu[0]]/10%3-1*3;
		DrawRotaGraph( hei_x[0][gun_kazu[0]]/1000+32 , hei_y[0][gun_kazu[0]]/1000+105-12 , 2 , 0 , unit_g[butai_one[0]][0][c] , TRUE ) ;
		DrawRotaGraph( hei_x[0][gun_kazu[0]]/1000+32 , hei_y[0][gun_kazu[0]]/1000+105+12 , 2 , 0 , unit_g[butai_two[0]][0][c] , TRUE ) ;
		c=9+hei_time[1][gun_kazu[1]]/10%3;
		DrawRotaGraph( hei_x[1][gun_kazu[1]]/1000-32 , hei_y[1][gun_kazu[1]]/1000+105-12 , 2 , 0 , unit_g[butai_one[1]][1][c] , TRUE ) ;
		DrawRotaGraph( hei_x[1][gun_kazu[1]]/1000-32 , hei_y[1][gun_kazu[1]]/1000+105+12 , 2 , 0 , unit_g[butai_two[1]][1][c] , TRUE ) ;
		ScreenFlip();
		}

		VS_result=1;
		if(xb==-1 && yb==-1)	{strcpy_s(serihu, "���R�S��");strcpy_s(syouri, "���������d");VS_result=7;}
		else if(xb==-1)			{strcpy_s(serihu, "���R�S��");strcpy_s(syouri, "�s�k�d");VS_result=4;}
		else if(yb==-1)			{strcpy_s(serihu, "�G�R�S��");strcpy_s(syouri, "����!!");VS_result=1;}
		else if(xb==0 && yb==0)	{strcpy_s(serihu, "���R�ދp");strcpy_s(syouri, "���������d");VS_result=7;}
		else if(xb==0)			{strcpy_s(serihu, "���R�ދp");strcpy_s(syouri, "�s�k�d");VS_result=5;}
		else if(yb==0)			{strcpy_s(serihu, "�G�R�ދp");strcpy_s(syouri, "����!!");VS_result=2;}
		else {
		strcpy_s(serihu, "�����c��Ό�");
		if(xb==yb){strcpy_s(syouri, "���������d");VS_result=7;}
		else if(xb>yb){strcpy_s(syouri, "����!!");VS_result=3;}
		else{strcpy_s(syouri, "�s�k�d");VS_result=6;}
		}

		mouse=1;
		for(t=0;t<360;t++){
		sentou_byouga();//�퓬���̕`�揈��
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
			if(t<120)DrawStringToHandle( 320-i-serihu_long*2/3 , 132-i , serihu ,siro , f_a ) ;//���ʕ\���P
			else if(gun_nokori[0]>0 && gun_nokori[1]>0){
				if(t<240){
					DrawStringToHandle( 122-i , 110-i , sikikan_name[0] ,siro , f_a ) ;//�����c��\��
					DrawStringToHandle( 122-i , 154-i , sikikan_name[1] ,siro , f_a ) ;//�����c��\��
					DrawFormatStringToHandle( 422-i , 110-i , siro , f_a , "%d�l" , gun_nokori[0]*100 ) ;
					DrawFormatStringToHandle( 422-i , 154-i , siro , f_a , "%d�l" , gun_nokori[1]*100 ) ;
				}else{
				DrawStringToHandle( 320-i-serihu_long*2/3 , 132-i , syouri ,siro , f_a ) ;//���ʕ\���Q
				}
			}else DrawStringToHandle( 320-i-serihu_long*2/3 , 132-i , syouri ,siro , f_a ) ;//���ʕ\���Q
		}
			ScreenFlip();
		}
		//�퓬�o��
		vs_count++;
		if(VS_result==5)esc_count++;//�ދp��
		if(VS_result<4){
		win_count++;//������
		perfe_count+=gun_nokori[0]*100/(gun_kazu[0]+1);
		anihi_count+=((gun_kazu[1]+1+ya)-gun_nokori[1])*100/(gun_kazu[1]+1);
		}else if(VS_result<7)lost_count++;//�s�k��
		//vs_count++;
		//win_count++;//������
		//lost_count++;//�s�k��
		//esc_count++;//�ދp��
		//perfe_count;//���������v
		//anihi_count;//���j�����v
		int p=0;
		if(eve_flag[99]==1)p=100;

		//�ދp��p�擾
		if(esc_count>0 && get_hyouhou[37]==0 && p==0){
			strcpy_s(syouri, "�h��̕��@");strcpy_s(serihu, "���U�ދp�������");get_hyouhou[37]=1;
			t=0;hirameki();p=1;
		}
		if(esc_count>2 && get_hyouhou[39]==0  && p==0){
			strcpy_s(syouri, "���̕��@");strcpy_s(serihu, "�U��̓P�ނ������");get_hyouhou[39]=1;
			t=0;hirameki();p=1;
		}
		//�R�_��p
		if(VS_no==24 && VS_result<4  && p!=100){
		strcpy_s(syouri, "�R�_�̕��@");get_hyouhou[44]=1;
		strcpy_s(serihu, "�n������������");t=0;hirameki();
		}
		if(VS_no==25 && VS_result<4  && p!=100){
		strcpy_s(syouri, "�R�_�̕��@");get_hyouhou[18]=1;
		strcpy_s(serihu, "�w�΂̌v�������");t=0;hirameki();
		}
		if(VS_no==32 && VS_result<4  && p!=100){
		strcpy_s(syouri, "�R�_�̕��@");get_hyouhou[41]=1;
		strcpy_s(serihu, "�J�����������");t=0;hirameki();
		}
		if(VS_no==33 && VS_result<4  && p!=100){
		strcpy_s(syouri, "�R�_�̕��@");get_hyouhou[8]=1;
		strcpy_s(serihu, "���̕��������");t=0;hirameki();
		}
		//anihi_count;//���j�����v
		if(anihi_count>=200 && get_hyouhou[16]==0 && p==0){
			strcpy_s(syouri, "�ҏ��̕��@");get_hyouhou[16]=1;
			strcpy_s(serihu, "���������������");
			t=0;hirameki();p=1;
		}
		if(anihi_count>=400 && get_hyouhou[38]==0 && p==0){
			strcpy_s(syouri, "���̕��@");get_hyouhou[38]=1;
			strcpy_s(serihu, "���Ƃ���������");
			t=0;hirameki();p=1;
		}
		if(anihi_count>=600 && get_hyouhou[40]==0 && p==0){
			strcpy_s(syouri, "���̕��@");get_hyouhou[40]=1;
			strcpy_s(serihu, "���񂾂ӂ�������");
			t=0;hirameki();p=1;
		}
		if(anihi_count>=800 && get_hyouhou[15]==0 && p==0){
			strcpy_s(syouri, "�ҏ��̕��@");get_hyouhou[15]=1;
			strcpy_s(serihu, "���f���������");
			t=0;hirameki();p=1;
		}
		if(anihi_count>=1000 && get_hyouhou[14]==0 && p==0){
			strcpy_s(syouri, "�ҏ��̕��@");get_hyouhou[14]=1;
			strcpy_s(serihu, "�w�����ˌ��������");
			t=0;hirameki();p=1;
		}
		if(anihi_count>=1200 && get_hyouhou[17]==0 && p==0){
			strcpy_s(syouri, "�ҏ��̕��@");get_hyouhou[17]=1;
			strcpy_s(serihu, "�΍U�߂������");
			t=0;hirameki();p=1;
		}
		//perfe_count;//���������v
		if(perfe_count>=100 && get_hyouhou[29]==0 && p==0){
			strcpy_s(syouri, "�S�ǂ̕��@");get_hyouhou[29]=1;
			strcpy_s(serihu, "���U���������");
			t=0;hirameki();p=1;
		}
		if(perfe_count>=300 && get_hyouhou[31]==0 && p==0){
			strcpy_s(syouri, "�S�ǂ̕��@");get_hyouhou[31]=1;
			strcpy_s(serihu, "�����񕜁E���������");
			t=0;hirameki();p=1;
		}
		if(perfe_count>=500 && get_hyouhou[34]==0 && p==0){
			strcpy_s(syouri, "�S�ǂ̕��@");get_hyouhou[34]=1;
			strcpy_s(serihu, "�h����������");
			t=0;hirameki();p=1;
		}
		if(perfe_count>=700 && get_hyouhou[21]==0 && p==0){
			strcpy_s(syouri, "�S�ǂ̕��@");get_hyouhou[21]=1;
			strcpy_s(serihu, "�O�񎀎�������");
			t=0;hirameki();p=1;
		}
		if(perfe_count>=900 && get_hyouhou[33]==0 && p==0){
			strcpy_s(syouri, "�S�ǂ̕��@");get_hyouhou[33]=1;
			strcpy_s(serihu, "�w�`�񕜁E���������");
			t=0;hirameki();p=1;
		}
		if(perfe_count>=1100 && get_hyouhou[43]==0 && p==0){
			strcpy_s(syouri, "���̕��@");get_hyouhou[43]=1;
			strcpy_s(serihu, "���@����������");
			t=0;hirameki();p=1;
		}
		//�����_���擾
		if(p==0){//
			t=120;
			if(6-get_hyouhou[1]-get_hyouhou[2]-get_hyouhou[5]-get_hyouhou[6]-get_hyouhou[20]-get_hyouhou[28]==0 && win_count%3==1)win_count++;
			if(win_count%3==2 && 7-get_hyouhou[3]-get_hyouhou[4]-get_hyouhou[7]-get_hyouhou[22]-get_hyouhou[25]-get_hyouhou[26]-get_hyouhou[27]==0)win_count++;
			if(win_count%3==0 && 6-get_hyouhou[10]-get_hyouhou[11]-get_hyouhou[12]-get_hyouhou[13]-get_hyouhou[30]-get_hyouhou[32]==0)win_count++;

			if(win_count%3==1 && 6-get_hyouhou[1]-get_hyouhou[2]-get_hyouhou[5]-get_hyouhou[6]-get_hyouhou[20]-get_hyouhou[28]>0){//1,2,5,6,20,28
			c=6-get_hyouhou[1]-get_hyouhou[2]-get_hyouhou[5]-get_hyouhou[6]-get_hyouhou[20]-get_hyouhou[28];
			c=GetRand(c-1);
			if(get_hyouhou[1]==0  && c==0){
			strcpy_s(syouri, "�U���̕��@");strcpy_s(serihu, "�O��O�i�������");get_hyouhou[1]=1;}//1
			else if(get_hyouhou[2]==0  && c==1-get_hyouhou[1]){
			strcpy_s(syouri, "�U���̕��@");strcpy_s(serihu, "���O�i�������");get_hyouhou[2]=1;}//2
			else if(get_hyouhou[5]==0  && c==2-get_hyouhou[1]-get_hyouhou[2]){
			strcpy_s(syouri, "�U���̕��@");strcpy_s(serihu, "�㗃�U���������");get_hyouhou[5]=1;}//5
			else if(get_hyouhou[6]==0  && c==3-get_hyouhou[1]-get_hyouhou[2]-get_hyouhou[5]){
			strcpy_s(syouri, "�U���̕��@");strcpy_s(serihu, "�����U���������");get_hyouhou[6]=1;}//6
			else if(get_hyouhou[20]==0 && c==4-get_hyouhou[1]-get_hyouhou[2]-get_hyouhou[5]-get_hyouhou[6]){
			strcpy_s(syouri, "�h��̕��@");strcpy_s(serihu, "�O��h��������");get_hyouhou[20]=1;}//20
			else if(get_hyouhou[28]==0 && c==5-get_hyouhou[1]-get_hyouhou[2]-get_hyouhou[5]-get_hyouhou[6]-get_hyouhou[20]){
			strcpy_s(syouri, "�h��̕��@");strcpy_s(serihu, "�O����������");get_hyouhou[28]=1;}//28
			hirameki();
			}else if(win_count%3==2 && 7-get_hyouhou[3]-get_hyouhou[4]-get_hyouhou[7]-get_hyouhou[22]-get_hyouhou[25]-get_hyouhou[26]-get_hyouhou[27]>0){//3,4,7,25,26,27
			c=7-get_hyouhou[3]-get_hyouhou[4]-get_hyouhou[7]-get_hyouhou[22]-get_hyouhou[25]-get_hyouhou[26]-get_hyouhou[27];
			c=GetRand(c-1);
			if(get_hyouhou[3]==0 && c==0){
			strcpy_s(syouri, "�U���̕��@");strcpy_s(serihu, "���U�O�i�������");get_hyouhou[3]=1;}//3
			else if(get_hyouhou[4]==0 && c==1-get_hyouhou[3]){
			strcpy_s(syouri, "�U���̕��@");strcpy_s(serihu, "�����O�i�������");get_hyouhou[4]=1;}//4
			else if(get_hyouhou[7]==0 && c==2-get_hyouhou[3]-get_hyouhou[4]){
			strcpy_s(syouri, "�U���̕��@");strcpy_s(serihu, "�S�R�O�i�E���������");get_hyouhou[7]=1;}//7
			else if(get_hyouhou[22]==0 && c==3-get_hyouhou[3]-get_hyouhou[4]-get_hyouhou[7]){
			strcpy_s(syouri, "�h��̕��@");strcpy_s(serihu, "�S�R�h��E���������");get_hyouhou[22]=1;}//22
			else if(get_hyouhou[25]==0 && c==4-get_hyouhou[3]-get_hyouhou[4]-get_hyouhou[7]-get_hyouhou[22]){
			strcpy_s(syouri, "�h��̕��@");strcpy_s(serihu, "���U��ނ������");get_hyouhou[25]=1;}//25
			else if(get_hyouhou[26]==0 && c==5-get_hyouhou[3]-get_hyouhou[4]-get_hyouhou[7]-get_hyouhou[25]-get_hyouhou[22]){
			strcpy_s(syouri, "�h��̕��@");strcpy_s(serihu, "��ޖh��������");get_hyouhou[26]=1;}//26
			else if(get_hyouhou[27]==0 && c==6-get_hyouhou[3]-get_hyouhou[4]-get_hyouhou[7]-get_hyouhou[25]-get_hyouhou[26]-get_hyouhou[22]){
			strcpy_s(syouri, "�h��̕��@");strcpy_s(serihu, "��ލU���������");get_hyouhou[27]=1;}//27
			hirameki();
			}else if(win_count%3==0 && 6-get_hyouhou[10]-get_hyouhou[11]-get_hyouhou[12]-get_hyouhou[13]-get_hyouhou[30]-get_hyouhou[32]>0){//10,11,12,13,25,27
			c=6-get_hyouhou[10]-get_hyouhou[11]-get_hyouhou[12]-get_hyouhou[13]-get_hyouhou[30]-get_hyouhou[32];
			c=GetRand(c-1);
			if(get_hyouhou[10]==0 && c==0){
			strcpy_s(syouri, "�U���̕��@");strcpy_s(serihu, "�O��ˌ��������");get_hyouhou[10]=1;}//10
			else if(get_hyouhou[11]==0 && c==1-get_hyouhou[10]){
			strcpy_s(syouri, "�U���̕��@");strcpy_s(serihu, "���ˌ��������");get_hyouhou[11]=1;}//11
			else if(get_hyouhou[12]==0 && c==2-get_hyouhou[10]-get_hyouhou[11]){
			strcpy_s(syouri, "�U���̕��@");strcpy_s(serihu, "�㗃�ˌ��������");get_hyouhou[12]=1;}//12
			else if(get_hyouhou[13]==0 && c==3-get_hyouhou[10]-get_hyouhou[11]-get_hyouhou[12]){
			strcpy_s(syouri, "�U���̕��@");strcpy_s(serihu, "�����ˌ��������");get_hyouhou[13]=1;}//13
			else if(get_hyouhou[30]==0 && c==4-get_hyouhou[10]-get_hyouhou[11]-get_hyouhou[12]-get_hyouhou[13]){
			strcpy_s(syouri, "�h��̕��@");strcpy_s(serihu, "�����񕜁E��������");get_hyouhou[30]=1;}//30
			else if(get_hyouhou[32]==0 && c==5-get_hyouhou[10]-get_hyouhou[11]-get_hyouhou[12]-get_hyouhou[13]-get_hyouhou[30]){
			strcpy_s(syouri, "�h��̕��@");strcpy_s(serihu, "�w�`�񕜂������");get_hyouhou[32]=1;}//32
			hirameki();
			}
		}
		//�w�`�擾
		if(VS_result<4 && p!=100){
		if(gun_jinkei[1]==4 && get_jinkei[3]==0){
		strcpy_s(syouri, "�U���̕��@");get_jinkei[3]=1;
		strcpy_s(serihu, "�㗃�˔j�̐w�������");t=120;hirameki();
		}
		if(gun_jinkei[1]==5 && get_jinkei[4]==0 && p!=100){
		strcpy_s(syouri, "�U���̕��@");get_jinkei[4]=1;
		strcpy_s(serihu, "�����˔j�̐w�������");t=120;hirameki();
		}
		if(gun_jinkei[1]==6 && get_jinkei[5]==0 && p!=100){
		strcpy_s(syouri, "�U���̕��@");get_jinkei[5]=1;
		strcpy_s(serihu, "�����˔j�̐w�������");t=120;hirameki();
		}
		if(gun_jinkei[1]==7 && get_jinkei[6]==0 && p!=100){
		strcpy_s(syouri, "�h��̕��@");get_jinkei[6]=1;
		strcpy_s(serihu, "�O�g��w�������");t=120;hirameki();
		}
		if(gun_jinkei[1]==8 && get_jinkei[7]==0 && p!=100){
		strcpy_s(syouri, "�U���̕��@");get_jinkei[7]=1;
		strcpy_s(serihu, "�����w�������");t=120;hirameki();
		}
		if(gun_jinkei[1]==11 && get_jinkei[10]==0 && p!=100){
		strcpy_s(syouri, "�h��̕��@");get_jinkei[10]=1;
		strcpy_s(serihu, "�g�󏂂̐w�������");t=120;hirameki();
		}
		if(gun_jinkei[1]==13 && get_jinkei[12]==0 && p!=100){
		strcpy_s(syouri, "�ҏ��̕��@");get_jinkei[12]=1;
		strcpy_s(serihu, "���C�����������");t=0;hirameki();
		}
		if(gun_jinkei[1]==14 && get_jinkei[13]==0 && p!=100){
		strcpy_s(syouri, "�h��̕��@");get_jinkei[13]=1;
		strcpy_s(serihu, "�\���w�������");t=120;hirameki();
		}
		if(gun_jinkei[1]==15 && get_jinkei[14]==0 && p!=100){
		strcpy_s(syouri, "�h��̕��@");get_jinkei[14]=1;
		strcpy_s(serihu, "���w�������");t=120;hirameki();
		}
		if(gun_jinkei[1]==18 && get_jinkei[17]==0 && p!=100){
		strcpy_s(syouri, "�S�ǂ̕��@");get_jinkei[17]=1;
		strcpy_s(serihu, "���؂̐w�������");t=120;hirameki();
		}
		//�㋉�w�`
		if(perfe_count>500 && get_jinkei[11]==0 && p!=100){
		strcpy_s(syouri, "�S�ǂ̕��@");get_jinkei[11]=1;
		strcpy_s(serihu, "�Ռ��w�������");t=0;hirameki();
		}
		if(perfe_count>1000 && get_jinkei[15]==0 && p!=100){
		strcpy_s(syouri, "�S�ǂ̕��@");get_jinkei[15]=1;
		strcpy_s(serihu, "�O�_�˔j�̐w�������");t=0;hirameki();
		}
		if(perfe_count>2000 && get_jinkei[19]==0 && p!=100){
		strcpy_s(syouri, "�R�_�̕��@");get_jinkei[19]=1;
		strcpy_s(serihu, "�V�̗��������");t=0;hirameki();
		}
		if(anihi_count>500 && get_jinkei[9]==0 && p!=100){
		strcpy_s(syouri, "�ҏ��̕��@");get_jinkei[9]=1;
		strcpy_s(serihu, "�����w�������");t=0;hirameki();
		}
		if(anihi_count>1000 && get_jinkei[8]==0 && p!=100){
		strcpy_s(syouri, "�ҏ��̕��@");get_jinkei[8]=1;
		strcpy_s(serihu, "�w���̐w�������");t=0;hirameki();
		}
		if(anihi_count>2000 && get_jinkei[18]==0 && p!=100){
		strcpy_s(syouri, "�R�_�̕��@");get_jinkei[18]=1;
		strcpy_s(serihu, "���Q�̐w�������");t=0;hirameki();
		}
		if(VS_no==37 && VS_result<4 && p!=100){
		strcpy_s(syouri, "���̕��@");get_jinkei[16]=1;
		strcpy_s(serihu, "����w�`�������");t=0;hirameki();
		}
		}
		//��p�t���O����
		for(i=0;i<50;i++){
		if(get_hyouhou[i]==1)flag_hyouhou[i]=1;
		}
		//�u���b�N�A�E�g
		for(t=0;t<64;t++){
			SetDrawBright( 255-t*4 , 255-t*4 , 255-t*4 ) ;
			sentou_byouga();//�퓬���̕`�揈��
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
		if(eve_flag[98]==1){//����p�ݒu
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
		sentou_byouga();//�퓬���̕`�揈��
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
		DrawStringToHandle( 122+1 , 132+1 , "�Ȃ��!!"       , kuro , f_a) ;
		DrawStringToHandle( 122   , 132   , "�Ȃ��!!"       , siro , f_a) ;
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
	//�G�N�X�g���ł̖Y�ꔻ��
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
	//��������
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

	//�w�`�Y�ꔻ��
	if(set_jinkei[hensei_no]!=1)get_jinkei[set_jinkei[hensei_no]-1]=0;
	if(set_jinkei[(hensei_no+1)%2]==set_jinkei[hensei_no])set_jinkei[(hensei_no+1)%2]=1;
	set_jinkei[hensei_no]=1;

	return 0;
}
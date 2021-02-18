//**************************************************************************************************
// �萔
//**************************************************************************************************
#define	SLOWEST				400
#define	SLOWER				200
#define	SLOW				100
#define	NORMAL				50
#define	FAST				20
#define	FASTER				10
#define	FASTEST				0

#define FILTER_MIRROR		0x00010000																// ���E���]
#define FILTER_FLIP			0x00020000																// �㉺���]

#define FADEFILTER_MIRROR	0x00010000																// ���E���]
#define FADEFILTER_FLIP		0x00020000																// �㉺���]
#define FADEFILTER_NEGATIVE	0x00040000																// �������]

#define SHAKE_RANDOM		0x00000001																// �����_���h��
#define SHAKE_TATE			0x00000002																// �c�h��
#define SHAKE_YOKO			0x00000004																// ���h��
#define SHAKE_VISUAL		0x00000008																// �r�W���A��
#define SHAKE_WINDOW		0x00000010																// �E�B���h�E

//**************************************************************************************************
// �񋓒萔
//**************************************************************************************************
enum
{
	OBJECT_BUFFER1,
	OBJECT_BUFFER2,
	OBJECT_BUFFER3,
	OBJECT_STAFF1,
	OBJECT_STAFF2,
	OBJECT_STAFF3,
	OBJECT_STAFF4,
	OBJECT_STAFF5,
	OBJECT_ENDING1,
	OBJECT_ENDING2,
	OBJECT_ENDING3,
	OBJECT_ENDING4,
	OBJECT_ENDING5,
	OBJECT_ENDING6,
	OBJECT_ENDING7,
};

enum
{
	SYSTEMBANK_BOOT,
	SYSTEMBANK_TITLE,
	SYSTEMBANK_SELECTMAP,
	SYSTEMBANK_STAFFROLL,
	SYSTEMBANK_STAFFROLLEND,
};

enum
{
	UNIT_HITOSHI,				// �m
	UNIT_YUI,					// �R��
	UNIT_REA,					// �戤
	UNIT_ASUKA,					// ������
	UNIT_KASURI,				// ������
	UNIT_EMA,					// �b��
	UNIT_RIKAKO,				// �����q
	UNIT_MIZUNA,				// ����
	UNIT_ITABASHI,				// ��
	UNIT_MALE,					// �T�u�L�����i�j���j
	UNIT_FEMALE,				// �T�u�L�����i�����j
	UNIT_ETC,					// ���̑�
	UNIT_SYSTEM,				// �V�X�e���p
	UNIT_MAX
};

enum
{
	SCENE_YUI_01,				// �R��13�F�ꎞ�Ԃłł�������
	SCENE_YUI_02,				// �R��20�F�o�����^�C���g�i�R��ҁj
	SCENE_YUI_03,				// �R��28�F���̂�����������
	SCENE_REA_01,				// �戤13�F�x�����_�z���̈�
	SCENE_REA_02,				// �戤16�F���i�|�C���g�l�`�w
	SCENE_REA_03,				// �戤20�F�o�����^�C���g�i�戤�ҁj
	SCENE_ASUKA_01,				// ������14�F����A�g���Ă���������
	SCENE_ASUKA_02,				// ������15�F�e�X�g�O�̈��S��
	SCENE_ASUKA_03,				// ������18�F�����܂�
	SCENE_KASURI_01,			// ������13�F���̖�̂���
	SCENE_KASURI_02,			// ������14�F�܂���
	SCENE_KASURI_03,			// ������21�F����o�����^�C���I
	SCENE_EMA_01,				// �b��14�F�Ȃ����߂āA�������
	SCENE_EMA_02,				// �b��16�F�e�ɂ̓i�C�V����
	SCENE_EMA_03,				// �b��17�F�m����͂������v
	SCENE_RIKAKO_01,			// �����q13�F�������Ȃ��悤�ɁA����
	SCENE_RIKAKO_02,			// �����q16�F�ꌎ����̍ĉ�
	SCENE_RIKAKO_03,			// �����q25�F�Ȃ�A�Ƒ��ɂȂ�΂���

	SCENE_MAX
};

enum
{
	FILTER_NORMAL,
	FILTER_FADE,
	FILTER_FLASH,
	FILTER_SEPIA,
	FILTER_MONO,
	FILTER_RED,
	FILTER_GREEN,
	FILTER_BLUE,
	FILTER_RGB,
	FILTER_NEGATIVE,
	FILTER_BOKASHI,
	FILTER_STAFFROLL,
};

enum
{
	FADEFILTER_EYE,
	FADEFILTER_DOOR,
	FADEFILTER_CIRCLE,
	FADEFILTER_LIGHT,
	FADEFILTER_UZU,
	FADEFILTER_LEFTRIGHT,
	FADEFILTER_DOWNUP,
	FADEFILTER_RYUUSEN,
	FADEFILTER_KAITEN,
	FADEFILTER_SIDE,
	FADEFILTER_SMOKE,
	FADEFILTER_WAVE,
	FADEFILTER_STAFFROLL,
	FADEFILTER_STAFFROLL2,
	FADEFILTER_SWORD,
	FADEFILTER_BLOOD,
};

enum
{
	SYSTEMVOICE_TITLE,
	SYSTEMVOICE_GIGA,
	SYSTEMVOICE_TRIAL,
	SYSTEMVOICE_START,
	SYSTEMVOICE_CGMODE,
	SYSTEMVOICE_SOUNDMODE,
	SYSTEMVOICE_REPLAYMODE,
	SYSTEMVOICE_SAVE,
	SYSTEMVOICE_LOAD,
	SYSTEMVOICE_EVENTSHEET,
	SYSTEMVOICE_CONFIG,
	SYSTEMVOICE_CHECK,
	SYSTEMVOICE_RETURNTITLE,
	SYSTEMVOICE_EXIT,
	SYSTEMVOICE_EXIT2,
	SYSTEMVOICE_MAX,
};

enum
{
	WINDOW_NORMAL,				// �ʏ�
	WINDOW_BATTLE,				// �o�g��
	WINDOW_SIMPLE,				// �t���[������
};

enum
{
	BGM_OPENING,				// �I�[�v�j���O
	BGM_OPENINGP,				// �I�[�v�j���O�i�s�A�m�j
	BGM_ENDING,					// �G���f�B���O
	BGM_ENDINGP,				// �G���f�B���O�i�s�A�m�j
	BGM_ENDINGY,				// �G���f�B���O�i�R��j
	BGM_KISSATEN,				// �i���X
	BGM_NICHIJOU1,				// ����i�ʏ�j
	BGM_NICHIJOU2,				// ����i�ق�킩�j
	BGM_NICHIJOU3,				// ����i���邢�j
	BGM_YASURAGI,				// ���炬
	BGM_SHITTORI,				// �����Ƃ�
	BGM_HUAN,					// �s���E�T
	BGM_KANDOU1,				// ����1
	BGM_KANASHIMI,				// ������
	BGM_COMICAL,				// �R�~�J��
	BGM_YUI,					// �R��̃e�[�}
	BGM_REA,					// �戤�̃e�[�}
	BGM_ASUKA,					// �������̃e�[�}
	BGM_KASURI,					// ������̃e�[�}
	BGM_EMA,					// �b���̃e�[�}
	BGM_RIKAKO,					// �����q�̃e�[�}
	BGM_H1,						// H�V�[���i�ʏ�j
	BGM_KANDOU2,				// ����2
	BGM_H2,						// H�V�[���i�����j

	BGM_HOTARUP,				// �u�̌��i����&�s�A�m�j
	BGM_WEWISH,					// We wish you a merry christmas
	BGM_JINGLE,					// �W���O���x��
	BGM_MOROBITO,				// ����тƂ������
	BGM_SORISUBERI,				// ���芊��
	BGM_NOCTURNE,				// �m�N�^�[�� ��2�� �σz����
	BGM_ETUDE,					// �G�`���[�h ��i25 ��1�� �σC�����@�u�G�I���A���E�n�[�v�v

	BGM_CURIO,					// �L�����I�̋�
	BGM_COLORFUL,				// �J���t���L�b�X�̋�
	BGM_VGNEO1,					// V.G.NEO�̋ȁi���Ӂj
	BGM_VGNEO2,					// V.G.NEO�̋ȁi�ʏ�킢�j

	BGM_ENDINGA,				// �G���f�B���O�i�A�J�y���j
	BGM_HOTARUH,				// �u�̌��i�����j
	BGM_JINGLE_END,				// �W���O���x���i�I���j
	BGM_MOROBITO_END,			// ����тƂ�����āi�I���j

	BGM_MAX
};

enum
{
	CENTER,						// ����
	LEFT,						// ��
	RIGHT,						// �E
	LEFTLEFT,					// ����荶
	RIGHTRIGHT,					// �E���E
	CENTERLEFT,					// ������荶
	CENTERRIGHT,				// �������E
	STANDPOS_MAX,
};

enum
{
	MOVE_STOP,					// ��~
	MOVE_LEFT,					// ��
	MOVE_RIGHT,					// �E
};

enum
{
	WEEK_MONDAY,				// ���j
	WEEK_TUESDAY,				// �Ηj
	WEEK_WEDNESDAY,				// ���j
	WEEK_THURSDAY,				// �ؗj
	WEEK_FRIDAY,				// ���j
	WEEK_SATURDAY,				// �y�j
	WEEK_SUNDAY,				// ���j
};

enum
{
	FLG_XMAS,
	FLG_XMASFLOOR,
	FLG_XMASKITCHEN,
	FLG_XMASFOODCOURT,
	FLG_XMASTOWN,

	FLG_VISUAL1_1,
	FLG_VISUAL1_2,
	FLG_VISUAL2_1,
	FLG_VISUAL2_2,
	FLG_VISUAL3_1,
	FLG_VISUAL3_2,
	FLG_VISUAL4_1,
	FLG_VISUAL4_2,
	FLG_VISUAL5_1,
	FLG_VISUAL5_2,
	FLG_VISUAL6_1,
	FLG_VISUAL6_2,
	FLG_VISUAL7_1,
	FLG_VISUAL7_2,

	FLG_ROOT,
	FLG_ENDING,
	FLG_STAFFROLL,
	FLG_RET,
	FLG_YUIPIANO,
	FLG_MAX = 200,
};

enum
{
	SYSTEMFLG_CLEARYUI,
	SYSTEMFLG_CLEARREA,
	SYSTEMFLG_CLEARASUKA,
	SYSTEMFLG_CLEARKASURI,
	SYSTEMFLG_CLEAREMA,
	SYSTEMFLG_CLEARRIKAKO,
	SYSTEMFLG_PROLOGUE,
	SYSTEMFLG_REFRESHRATE,

	SYSTEMFLG_MAX = 200,
};

enum
{
	HINT_TRUENORMAL = 0,
	HINT_TRUE,
	HINT_HASSEI,
	HINT_MIHASSEI,
	HINT_KASURI12,
	HINT_CHANGE,
	HINT_KOUKANDO,
};

enum
{
	// ��1�N�H�[�^�[
	EVENT_01_01_01,
	EVENT_01_01_02,
	EVENT_01_01_03,		// �R��01�F�����Ȃ�z�u�]��
	EVENT_01_01_04,
	EVENT_01_02_01,
	EVENT_01_02_02,
	EVENT_01_02_03,
	EVENT_01_02_04,		// �戤01�F��������
	EVENT_01_03_01,		// ������01�F�N���[�U�[������
	EVENT_01_03_02,		// �b��01�F���V�b���@�����X
	EVENT_01_03_03,
	EVENT_01_03_04,
	EVENT_01_04_01,		// ������02�F�ƒ닳�t�P
	EVENT_01_04_02,		// ������02�F���ʂ���H
	EVENT_01_04_03,
	EVENT_01_04_04,
	EVENT_01_05_01,		// �R��02�F���݂���Ȃ��낭�łȂ�
	EVENT_01_05_02,		// ������01�F�[����P
	EVENT_01_05_03,
	EVENT_01_05_04,
	EVENT_01_06_01,		// ������03�F�Ȃ�ƂȂ������Ȃ�
	EVENT_01_06_02,		// ������04�F�W���b�W�����g�i�������j
	EVENT_01_06_03,		// �戤02�F�ׂ͉�������l��
	EVENT_01_06_04,
	EVENT_01_07_01,		// �����q01�F�J�X�j��
	EVENT_01_07_02,
	EVENT_01_07_03,
	EVENT_01_07_04,		// �b��02�F�����Ă܁`�o�����
	EVENT_01_08_01,		// �R��03�F����
	EVENT_01_08_02,
	EVENT_01_08_03,		// �戤03�F�y����
	EVENT_01_08_04,

	// ��2�N�H�[�^�[
	EVENT_02_01_01,
	EVENT_02_01_02,
	EVENT_02_01_03,		// �戤04�F��x�ڂ̐��z��
	EVENT_02_01_04,
	EVENT_02_02_01,		// ������04�F�T�{��
	EVENT_02_02_02,		// ������03�F�������̗����m�P
	EVENT_02_02_03,
	EVENT_02_02_04,		// �����q02�F������
	EVENT_02_03_01,		// �R��04�F���������A���̂܂܂Łc
	EVENT_02_03_02,		// �b��03�F�܂��ł������P�[�L
	EVENT_02_03_03,
	EVENT_02_03_04,		// �戤05�F�[��̃`�F�C�X
	EVENT_02_04_01,		// �R��05�F�R�򃏁[���h
	EVENT_02_04_02,		// �b��04�F�P�[�L�͔����B�����͎c��B
	EVENT_02_04_03,
	EVENT_02_04_04,
	EVENT_02_05_01,		// ������05�F���񂿂�
	EVENT_02_05_02,		// ������05�F�������d�b�P
	EVENT_02_05_03,		// �R��06�F������
	EVENT_02_05_04,		// �����q03�F��������Ԗ�
	EVENT_02_06_01,
	EVENT_02_06_02,		// �����q04�F�{���͉ɂȐ��j��
	EVENT_02_06_03,		// �戤06�F��l�͒��ǂ��H
	EVENT_02_06_04,
	EVENT_02_07_01,
	EVENT_02_07_02,
	EVENT_02_07_03,
	EVENT_02_07_04,		// �b��05�F�����
	EVENT_02_08_01,		// ������06�F�����N�A�b�v
	EVENT_02_08_02,		// ������06�F�ނ������`
	EVENT_02_08_03,
	EVENT_02_08_04,

	// ��3�N�H�[�^�[
	EVENT_03_01_01,		// ������07�F�������̗����m�Q
	EVENT_03_01_02,		// �b��07�F��������̖ϑz
	EVENT_03_01_03,
	EVENT_03_01_04,
	EVENT_03_02_01,
	EVENT_03_02_02,
	EVENT_03_02_03,
	EVENT_03_02_04,		// �戤07�F�Ԓ��o���̐^���i�O�ҁj�E�R��07�F�Ԓ��o���̐^���i��ҁj
	EVENT_03_03_01,		// ������07�F�w���Տ���
	EVENT_03_03_02,		// �����q05�F�����q�u�r�戤
	EVENT_03_03_03,		// �戤28�F���R�̂Ȃ��化��
	EVENT_03_03_04,		// �b��06�F�l���
	EVENT_03_04_01,		// �����q06�F�Ăю̂�
	EVENT_03_04_02,		// ������08�F�������d�b�Q
	EVENT_03_04_03,		// �戤29�F���R�̂Ȃ�������
	EVENT_03_04_04,
	EVENT_03_05_01,		// ������08�F�����񂿂喾����
	EVENT_03_05_02,
	EVENT_03_05_03,		// �R��08�F�\�̉̕P
	EVENT_03_05_04,
	EVENT_03_06_01,		// ������09�F�[����P�Q
	EVENT_03_06_02,
	EVENT_03_06_03,
	EVENT_03_06_04,		// �����q07�F����������
	EVENT_03_07_01,
	EVENT_03_07_02,		// �b��08�F�c�V���^�H
	EVENT_03_07_03,		// �戤08�F�戤�_�E��
	EVENT_03_07_04,		// ������09�F�w���Փ���
	EVENT_03_08_01,		// �����q08�F�����i���X�̖ʖږ��@
	EVENT_03_08_02,
	EVENT_03_08_03,		// �R��09�F�s���`�q�b�^�[�R��
	EVENT_03_08_04,		// �戤09�F�戤����

	// ��4�N�H�[�^�[
	EVENT_04_01_01,		// �b��09�E�����q09�F�g��
	EVENT_04_01_02,		// ������11�F�������d�b�R
	EVENT_04_01_03,
	EVENT_04_01_04,
	EVENT_04_02_01,		// �R��11�F�Ђ���
	EVENT_04_02_02,
	EVENT_04_02_03,		// �戤10�F�Ȃ�Ċy��������
	EVENT_04_02_04,		// �����q10�F�܂�蓹
	EVENT_04_03_01,		// ������10�F���̂܂܂ł�������
	EVENT_04_03_02,		// �b��10�F�{���̐V���j���[
	EVENT_04_03_03,
	EVENT_04_03_04,
	EVENT_04_04_01,		// ������11�F�Q�T���͒ǎ��Ȃ�
	EVENT_04_04_02,		// �ǉ�02�F�x�e
	EVENT_04_04_03,		// �R��10�F�C�u�̎d�|��
	EVENT_04_04_04,		// �����q11�F�����Ƃ�������߂Ƃ�񂶂�Ȃ���
	EVENT_04_05_01,
	EVENT_04_05_02,		// �ǉ�01�F�����H
	EVENT_04_05_03,
	EVENT_04_05_04,		// �b��11�F�{���̎l���
	EVENT_04_06_01,		// ������12�F�o�P��
	EVENT_04_06_02,
	EVENT_04_06_03,		// �戤11�F������A�������Ƃ��ɂ͌Z�͂Ȃ�
	EVENT_04_06_04,

	// ���ʃV�i���I
	EVENT_PROLOGUE,
	EVENT_01_01,
	EVENT_01_02,
	EVENT_02_01,
	EVENT_02_02,
	EVENT_03_01,
	EVENT_03_02,
	EVENT_04_01,
	EVENT_04_02,

	// �R��V�i���I
	EVENT_YUI_12,
	EVENT_YUI_13,
	EVENT_YUI_14,
	EVENT_YUI_REA_15,
	EVENT_YUI_16,
	EVENT_YUI_17,
	EVENT_YUI_REA_18,
	EVENT_YUI_REA_19,
	EVENT_YUI_20,
	EVENT_YUI_21,
	EVENT_YUI_22,
	EVENT_YUI_23,
	EVENT_YUI_24,
	EVENT_YUI_25,
	EVENT_YUI_26,
	EVENT_YUI_27,
	EVENT_YUI_28,
	EVENT_YUI_29,

	// �戤�V�i���I
	EVENT_REA_12,
	EVENT_REA_13,
	EVENT_REA_14,
	EVENT_REA_16,
	EVENT_REA_17,
	EVENT_REA_20,
	EVENT_REA_21,
	EVENT_REA_22,
	EVENT_REA_23,
	EVENT_REA_24,
	EVENT_REA_25,
	EVENT_REA_26,
	EVENT_REA_27,

	// �������V�i���I
	EVENT_ASUKA_12,
	EVENT_ASUKA_13,
	EVENT_ASUKA_14,
	EVENT_ASUKA_15,
	EVENT_ASUKA_16,
	EVENT_ASUKA_17,
	EVENT_ASUKA_18,
	EVENT_ASUKA_19,
	EVENT_ASUKA_20,
	EVENT_ASUKA_21,

	// ������V�i���I
	EVENT_KASURI_10,
	EVENT_KASURI_13,
	EVENT_KASURI_14,
	EVENT_KASURI_15,
	EVENT_KASURI_16,
	EVENT_KASURI_17,
	EVENT_KASURI_18,
	EVENT_KASURI_19,
	EVENT_KASURI_20,
	EVENT_KASURI_21,
	EVENT_KASURI_22,
	EVENT_KASURI_23,

	// �b���V�i���I
	EVENT_EMA_RIKAKO_12,
	EVENT_EMA_13,
	EVENT_EMA_14,
	EVENT_EMA_15,
	EVENT_EMA_16,
	EVENT_EMA_17,
	EVENT_EMA_18,
	EVENT_EMA_19,
	EVENT_EMA_20,
	EVENT_EMA_21,
	EVENT_EMA_22,
	EVENT_EMA_23,
	EVENT_EMA_24,
	EVENT_EMA_25,

	// �����q�V�i���I
	EVENT_RIKAKO_13,
	EVENT_RIKAKO_14,
	EVENT_RIKAKO_15,
	EVENT_RIKAKO_16,
	EVENT_RIKAKO_17,
	EVENT_RIKAKO_18,
	EVENT_RIKAKO_19,
	EVENT_RIKAKO_20,
	EVENT_RIKAKO_21,
	EVENT_RIKAKO_22,
	EVENT_RIKAKO_23,
	EVENT_RIKAKO_24,
	EVENT_RIKAKO_25,
	EVENT_RIKAKO_26,

	EVENT_EMA_RIKAKO_09,
	EVENT_KASURI_12,

	EVENT_YUI_TRUE,
	EVENT_YUI_NORMAL,
	EVENT_REA_TRUE,
	EVENT_REA_NORMAL,
	EVENT_ASUKA_TRUE,
	EVENT_KASURI_TRUE,
	EVENT_KASURI_NORMAL,
	EVENT_EMARIKAKO_TRUE,
	EVENT_EMA_NORMAL,
	EVENT_RIKAKO_NORMAL,
	EVENT_BADEND,

	EVENT_MAX
};

enum
{
	VISUAL_YUI_01A,				// �����p�ŉ̂��R��i����Ƃ�j
	VISUAL_YUI_01B,				// �����p�ŉ̂��R��i�̂��j
	VISUAL_YUI_01C,				// �����p�ŉ̂��R��i�Ί�j
	VISUAL_YUI_01D,				// �����p�ŉ̂��R��i�s�A�m�E����Ƃ�j
	VISUAL_YUI_01E,				// �����p�ŉ̂��R��i�s�A�m�E�̂��j
	VISUAL_YUI_01F,				// �����p�ŉ̂��R��i�s�A�m�E�Ί�j
	VISUAL_YUI_01G,				// �����p�ŉ̂��R��i�t�[�h�R�[�g�E����Ƃ�j
	VISUAL_YUI_01H,				// �����p�ŉ̂��R��i�t�[�h�R�[�g�E�̂��j
	VISUAL_YUI_01I,				// �����p�ŉ̂��R��i�t�[�h�R�[�g�E�Ί�j
	VISUAL_YUI_02A,				// �C�����悳�����Ƀs�A�m��e���R��
	VISUAL_YUI_02B,				// �C�����悳�����Ƀs�A�m��e���R��i�E��̖�w�ɋ�̎w�ցj
	VISUAL_YUI_04A,				// �R��ɃL�X������m�i�t�[�h�R�[�g�E��R�j
	VISUAL_YUI_04B,				// �R��ɃL�X������m�i�t�[�h�R�[�g�E��������j
	VISUAL_YUI_04C,				// �R��ɃL�X������m�i�t�[�h�R�[�g�E�ڕ��j
	VISUAL_YUI_04D,				// �R��ɃL�X������m�i�t�[�h�R�[�g�E�����Ƃ�j
	VISUAL_YUI_04E,				// �R��ɃL�X������m�i�t�[�h�R�[�g�E�m�̓��E��R�j
	VISUAL_YUI_04F,				// �R��ɃL�X������m�i�t�[�h�R�[�g�E�m�̓��E�ڕ��j
	VISUAL_YUI_04G,				// �R��ɃL�X������m�i�t�[�h�R�[�g�E�m�̓��E�����Ƃ�j
	VISUAL_YUI_04H,				// �R��ɃL�X������m�i�X���E��R�j
	VISUAL_YUI_04I,				// �R��ɃL�X������m�i�X���E��������j
	VISUAL_YUI_04J,				// �R��ɃL�X������m�i�X���E�ڕ��j
	VISUAL_YUI_04K,				// �R��ɃL�X������m�i�X���E�����Ƃ�j
	VISUAL_YUI_04L,				// �R��ɃL�X������m�i�X���E�m�̓��E��R�j
	VISUAL_YUI_04M,				// �R��ɃL�X������m�i�X���E�m�̓��E�ڕ��j
	VISUAL_YUI_04N,				// �R��ɃL�X������m�i�X���E�m�̓��E�����Ƃ�j
	VISUAL_YUI_05A,				// �����Ɏ��˂����݋���G��i�u���W���[����j
	VISUAL_YUI_05B,				// �����Ɏ��˂����݋���G��i�u���W���[���炵�j
	VISUAL_YUI_05C,				// �����Ɏ��˂����݋���G��i�u���W���[�Ȃ��j
	VISUAL_YUI_06A,				// �J�E���^�[�ɉ����|���ҊԈ����i�p�����������j
	VISUAL_YUI_06B,				// �J�E���^�[�ɉ����|���ҊԈ����i�����ł������j
	VISUAL_YUI_06C,				// �J�E���^�[�ɉ����|���ҊԈ����i�p���c�E���E�p�����������j
	VISUAL_YUI_06D,				// �J�E���^�[�ɉ����|���ҊԈ����i�p���c�E���E�����ł������j
	VISUAL_YUI_07A,				// �֎q�ɍ������܂܂̋R��ʁi�ɂ݂ŋ��ԁj
	VISUAL_YUI_07B,				// �֎q�ɍ������܂܂̋R��ʁi�ɂ݂����炦��j
	VISUAL_YUI_07C,				// �֎q�ɍ������܂܂̋R��ʁi������ȏΊ�j
	VISUAL_YUI_07D,				// �֎q�ɍ������܂܂̋R��ʁi�ː��j
	VISUAL_YUI_09A,				// �L�����I�����̃t�@�~�[���X�^�b�t
	VISUAL_YUI_10A,				// �֎q�ɍ�������l���̏�ɍ����āA���������ăL�X�i�������h�j
	VISUAL_YUI_10B,				// �֎q�ɍ�������l���̏�ɍ����āA���������ăL�X�i�L�X�j
	VISUAL_YUI_10C,				// �֎q�ɍ�������l���̏�ɍ����āA���������ăL�X�i�������I�o�E�������h�j
	VISUAL_YUI_10D,				// �֎q�ɍ�������l���̏�ɍ����āA���������ăL�X�i�������I�o�E�L�X�j
	VISUAL_YUI_11A,				// �ҊԂƋ������i�T���߂Ɏ咣����j
	VISUAL_YUI_11B,				// �ҊԂƋ������i�����̂������j
	VISUAL_YUI_11C,				// �ҊԂƋ������i�Ί�j
	VISUAL_YUI_11D,				// �ҊԂƋ������i���΂݁j
	VISUAL_YUI_12A,				// �Б��������グ�Ă̌�w��
	VISUAL_YUI_12B,				// �Б��������グ�Ă̌�w�ʁi�ː��j
	VISUAL_YUI_13A,				// �m�����ɍ��点�ăs�A�m��e���R��i�Ί�j
	VISUAL_YUI_13B,				// �m�����ɍ��点�ăs�A�m��e���R��i���΁j
	VISUAL_YUI_13C,				// �m�����ɍ��点�ăs�A�m��e���R��i�V���A�X�j
	VISUAL_YUI_14A,				// ���t����戤�B�܂𗬂��Ē����R��
	VISUAL_YUI_15A,				// �R�l�ŕ��������Ė����Ă���
	VISUAL_YUI_16A,				// �p�C�Y��
	VISUAL_YUI_16B,				// �p�C�Y���i�ː��j
	VISUAL_YUI_17A,				// �V�b�N�X�i�C���i�����Ȃ����r�߂Ă���j
	VISUAL_YUI_17B,				// �V�b�N�X�i�C���i�Ⓒ�̋��сj
	VISUAL_YUI_17C,				// �V�b�N�X�i�C���i���t�E�����Ȃ����r�߂Ă���j
	VISUAL_YUI_17D,				// �V�b�N�X�i�C���i���t�E�Ⓒ�̋��сj
	VISUAL_YUI_17E,				// �V�b�N�X�i�C���i���[�V�����E�����Ȃ����r�߂Ă���j
	VISUAL_YUI_17F,				// �V�b�N�X�i�C���i���[�V�����E�Ⓒ�̋��сj
	VISUAL_YUI_17G,				// �V�b�N�X�i�C���i�ː��E�����Ȃ����r�߂Ă���j
	VISUAL_YUI_17H,				// �V�b�N�X�i�C���i�ː��E�Ⓒ�̋��сj
	VISUAL_YUI_18A,				// �R��ƃG�b�`�i�����ŋ��ԁj
	VISUAL_YUI_18B,				// �R��ƃG�b�`�i�K�������Ȕ��΂݁j
	VISUAL_YUI_18C,				// �R��ƃG�b�`�i�ː��E�����ŋ��ԁj
	VISUAL_YUI_18D,				// �R��ƃG�b�`�i�ː��E�K�������Ȕ��΂݁j
	VISUAL_YUI_19A,				// �܂񂮂�Ԃ����ɃA�i���Z�b�N�X
	VISUAL_YUI_19B,				// �܂񂮂�Ԃ����ɃA�i���Z�b�N�X�i�ː��j
	VISUAL_YUI_20A,				// ����ʁA���������ĊI����
	VISUAL_YUI_20B,				// ����ʁA���������ĊI���݁i�ː��j
	VISUAL_YUI_21A,				// �s�A�m��e���̂��R��

	VISUAL_REA_01A,				// �x�����_�̏՗��z���ɉ�b����Q�l�i�ʏ�j
	VISUAL_REA_01B,				// �x�����_�̏՗��z���ɉ�b����Q�l�i�ڕ����΂݁j
	VISUAL_REA_01C,				// �x�����_�̏՗��z���ɉ�b����Q�l�i�ǂĂ�E�ʏ�j
	VISUAL_REA_01D,				// �x�����_�̏՗��z���ɉ�b����Q�l�i�ǂĂ�E�ڕ����΂݁j
	VISUAL_REA_01E,				// �x�����_�̏՗��z���ɉ�b����Q�l�i�ǂĂ�E���̖щ��낵�E�ʏ�j
	VISUAL_REA_01F,				// �x�����_�̏՗��z���ɉ�b����Q�l�i�ǂĂ�E���̖щ��낵�E�ڕ����΂݁j
	VISUAL_REA_02A,				// �x�b�h�ɍ��|���Ċŕa�����戤�i��E�ɂށj
	VISUAL_REA_02B,				// �x�b�h�ɍ��|���Ċŕa�����戤�i��E�{��j
	VISUAL_REA_02C,				// �x�b�h�ɍ��|���Ċŕa�����戤�i��E�ڂ����炷1�j
	VISUAL_REA_02D,				// �x�b�h�ɍ��|���Ċŕa�����戤�i��E�ڂ����炷2�j
	VISUAL_REA_02E,				// �x�b�h�ɍ��|���Ċŕa�����戤�i��E�ꂵ��1�j
	VISUAL_REA_02F,				// �x�b�h�ɍ��|���Ċŕa�����戤�i��E�ꂵ��2�j
	VISUAL_REA_02G,				// �x�b�h�ɍ��|���Ċŕa�����戤�i���E�ڂ����炷1�j
	VISUAL_REA_02H,				// �x�b�h�ɍ��|���Ċŕa�����戤�i���E�{��j
	VISUAL_REA_02I,				// �x�b�h�ɍ��|���Ċŕa�����戤�i���E�ɂށj
	VISUAL_REA_02J,				// �x�b�h�ɍ��|���Ċŕa�����戤�i���E�ڂ����炷2�j
	VISUAL_REA_02K,				// �x�b�h�ɍ��|���Ċŕa�����戤�i���E�Ƃ��j
	VISUAL_REA_03A,				// �x�����_�z���̃L�X
	VISUAL_REA_04A,				// �������L�X
	VISUAL_REA_04B,				// �������L�X�i���ށE�����j
	VISUAL_REA_04C,				// �������L�X�i���ށE�ł�j
	VISUAL_REA_05A,				// �x�b�h�ɉ����|���i���������ƒT��悤�ɘb���j
	VISUAL_REA_05B,				// �x�b�h�ɉ����|���i�ڂ��Ԃ��ăL�X�j
	VISUAL_REA_06A,				// �������i�p�����������j
	VISUAL_REA_06B,				// �������i�L�X�j
	VISUAL_REA_06C,				// �������i�p���c���炷�E�p�����������j
	VISUAL_REA_06D,				// �������i�p���c���炷�E�L�X�j
	VISUAL_REA_06E,				// �������i�p���c�����E�p�����������j
	VISUAL_REA_06F,				// �������i�p���c�����E�L�X�j
	VISUAL_REA_07A,				// ����ʁi�ꂵ�������炦�āA������芴���Ă���j
	VISUAL_REA_07B,				// ����ʁi�ꂵ���ŋ��ԁj
	VISUAL_REA_07C,				// ����ʁi�ː��E�ꂵ�������炦�āA������芴���Ă���j
	VISUAL_REA_07D,				// ����ʁi�ː��E�ꂵ���ŋ��ԁj
	VISUAL_REA_08A,				// �t�@�~���X�ŐH������R�l
	VISUAL_REA_08B,				// �t�@�~���X�ŐH������R�l�i�R�[�q�[�j
	VISUAL_REA_09A,				// �戤�t�F���`�I�i��ڎg���Œp���������j
	VISUAL_REA_09B,				// �戤�t�F���`�I�i�ڂ�����r�߂�j
	VISUAL_REA_09C,				// �戤�t�F���`�I�i���Ɋ܂ށE��ڎg���Œp���������j
	VISUAL_REA_09D,				// �戤�t�F���`�I�i���Ɋ܂ށE�ڂ�����r�߂�j
	VISUAL_REA_09E,				// �戤�t�F���`�I�i�ː��E�ڊJ���j
	VISUAL_REA_09F,				// �戤�t�F���`�I�i�ː��E�ڕ��j
	VISUAL_REA_09G,				// �戤�t�F���`�I�i�ː��E�Жځj
	VISUAL_REA_10A,				// ���ʂŗ戤�ƃZ�b�N�X�i�ڂ��ׂ߂ċꂵ�����j
	VISUAL_REA_10B,				// ���ʂŗ戤�ƃZ�b�N�X�i���o�����ꂽ�̂������āA�����ӂ��j
	VISUAL_REA_11A,				// �Z�b�N�X����ɐm�𑫏R�ɂ���戤�i�{��̋��сj
	VISUAL_REA_11B,				// �Z�b�N�X����ɐm�𑫏R�ɂ���戤�i���t�ɋl�܂�j
	VISUAL_REA_12A,				// �t�@�~�[�������̃L�����I�X�^�b�t
	VISUAL_REA_14A,				// �l��΂��̊i�D�ŁA�����g����������戤�i�b���j
	VISUAL_REA_14B,				// �l��΂��̊i�D�ŁA�����g����������戤�i�䖝�j
	VISUAL_REA_14C,				// �l��΂��̊i�D�ŁA�����g����������戤�i�p���c���炷�E�b���j
	VISUAL_REA_14D,				// �l��΂��̊i�D�ŁA�����g����������戤�i�p���c���炷�E�䖝�j
	VISUAL_REA_14E,				// �l��΂��̊i�D�ŁA�����g����������戤�i�������E�b���j
	VISUAL_REA_14F,				// �l��΂��̊i�D�ŁA�����g����������戤�i�������E�䖝�j
	VISUAL_REA_15A,				// �w���z���ɕ������߂Ĉ������o�b�N�ő}��
	VISUAL_REA_16A,				// �戤�ƃG�b�`�i�ʃA���O���j
	VISUAL_REA_18A,				// ����q���ŋA�蓹�i���΁j
	VISUAL_REA_18B,				// ����q���ŋA�蓹�i���΂݁j
	VISUAL_REA_19A,				// �菵������戤

	VISUAL_ASUKA_01A,			// ���ނ̐������ꔼ�E���̖������i�����ׂ��E���J�j
	VISUAL_ASUKA_01B,			// ���ނ̐������ꔼ�E���̖������i�ߖE���J�j
	VISUAL_ASUKA_01C,			// ���ނ̐������ꔼ�E���̖������i�����ׂ��E���j
	VISUAL_ASUKA_01D,			// ���ނ̐������ꔼ�E���̖������i�ߖE���j
	VISUAL_ASUKA_02A,			// �X�̐����̂܂܂ŉƒ닳�t���̂P�i�ނ��c�i�^�ʖڂɕ׋��j�j
	VISUAL_ASUKA_02B,			// �X�̐����̂܂܂ŉƒ닳�t���̂P�i�Ί�ŉ�b�j
	VISUAL_ASUKA_03A,			// �L�����v�t�@�C���[�Ńt�H�[�N�_���X
	VISUAL_ASUKA_04A,			// �X�̐����̂܂܂ŉƒ닳�t���̂Q
	VISUAL_ASUKA_05A,			// �e�[�u���Ɋ���悹�Č��߂�i�Ƃ��Ƃ����\��Ō��߂�j
	VISUAL_ASUKA_05B,			// �e�[�u���Ɋ���悹�Č��߂�i���X���Ƃ���j
	VISUAL_ASUKA_05C,			// �e�[�u���Ɋ���悹�Č��߂�i���Ȃ��\��Ő^���ɍ����j
	VISUAL_ASUKA_07A,			// �������ɃL�X�i�������������K�b�c�|�[�Y�j
	VISUAL_ASUKA_09A,			// ���ɃL�X����Ċ����܂��閾�����i�����Ă���j
	VISUAL_ASUKA_09B,			// ���ɃL�X����Ċ����܂��閾�����i�ڂ���܂𗬂��j
	VISUAL_ASUKA_09C,			// ���ɃL�X����Ċ����܂��閾�����i�������ށE�����Ă���j
	VISUAL_ASUKA_09D,			// ���ɃL�X����Ċ����܂��閾�����i�������ށE�ڂ���܂𗬂��j
	VISUAL_ASUKA_10A,			// �x�b�h�̏�ň������󂯂閾�����i���Y���ۂ����΂݁j
	VISUAL_ASUKA_10B,			// �x�b�h�̏�ň������󂯂閾�����i�L�X�j
	VISUAL_ASUKA_11A,			// �������i�p�����������ɖ₢�����j
	VISUAL_ASUKA_11B,			// �������i�����j
	VISUAL_ASUKA_11C,			// �������i�����ɂ������j
	VISUAL_ASUKA_11D,			// �������i���t�E�p�����������ɖ₢�����j
	VISUAL_ASUKA_11E,			// �������i���t�E�����j
	VISUAL_ASUKA_11F,			// �������i���t�E�����ɂ������j
	VISUAL_ASUKA_12A,			// ����������ʁi�s�������j
	VISUAL_ASUKA_12B,			// ����������ʁi���΂݁j
	VISUAL_ASUKA_12C,			// ����������ʁi�ɂ݂ŋ������ԁj
	VISUAL_ASUKA_12D,			// ����������ʁi�}���E�s�������j
	VISUAL_ASUKA_12E,			// ����������ʁi�}���E�ɂ݂ŋ������ԁj
	VISUAL_ASUKA_12F,			// ����������ʁi�}���E�����΂��j
	VISUAL_ASUKA_13A,			// �������Ɠ�x�ڂg���̂P�i�Ƃ�΂��j
	VISUAL_ASUKA_13B,			// �������Ɠ�x�ڂg���̂P�i������ƌ˘f���j
	VISUAL_ASUKA_13C,			// �������Ɠ�x�ڂg���̂P�i�����E���t���j
	VISUAL_ASUKA_13D,			// �������Ɠ�x�ڂg���̂P�i�����E���t���j
	VISUAL_ASUKA_13E,			// �������Ɠ�x�ڂg���̂P�i������ƌ˘f���E���t���j
	VISUAL_ASUKA_13F,			// �������Ɠ�x�ڂg���̂P�i������ƌ˘f���E���t���j
	VISUAL_ASUKA_14A,			// �������Ɠ�x�ڂg���̂Q�i�L�X�j
	VISUAL_ASUKA_14B,			// �������Ɠ�x�ڂg���̂Q�i�����̋��сj
	VISUAL_ASUKA_14C,			// �������Ɠ�x�ڂg���̂Q�i�}���E�L�X�j
	VISUAL_ASUKA_14D,			// �������Ɠ�x�ڂg���̂Q�i�}���E�����̋��сj
	VISUAL_ASUKA_14E,			// �������Ɠ�x�ڂg���̂Q�i�ː��E�L�X�j
	VISUAL_ASUKA_14F,			// �������Ɠ�x�ڂg���̂Q�i�ː��E�����̋��сj
	VISUAL_ASUKA_15A,			// �������ƎO�x�ڂg���̂P�i�r�߂�j
	VISUAL_ASUKA_15B,			// �������ƎO�x�ڂg���̂P�i������j
	VISUAL_ASUKA_15C,			// �������ƎO�x�ڂg���̂P�i�p���c���炵�E�r�߂�j
	VISUAL_ASUKA_15D,			// �������ƎO�x�ڂg���̂P�i�p���c���炵�E������j
	VISUAL_ASUKA_15E,			// �������ƎO�x�ڂg���̂P�i�ː��j
	VISUAL_ASUKA_16A,			// �A�܂݂�Ńp�C�Y��
	VISUAL_ASUKA_16B,			// �A�܂݂�Ńp�C�Y���i�r�߂�j
	VISUAL_ASUKA_16C,			// �A�܂݂�Ńp�C�Y���i�ː��j
	VISUAL_ASUKA_17A,			// ���C��ŗ����o�b�N
	VISUAL_ASUKA_17B,			// ���C��ŗ����o�b�N�i�ː��j
	VISUAL_ASUKA_18A,			// �����؁A����q���ŕ�����l

	VISUAL_KASURI_01A,			// �z�c�̏�ł�����ɑg�ݕ~�����m�i�ɂ�����j
	VISUAL_KASURI_01B,			// �z�c�̏�ł�����ɑg�ݕ~�����m�i�ʏ�j
	VISUAL_KASURI_02A,			// �N���[���܂݂�̂�����i���ւ��j
	VISUAL_KASURI_02B,			// �N���[���܂݂�̂�����i�E�B���N�j
	VISUAL_KASURI_02C,			// �N���[���܂݂�̂�����i�΂��j
	VISUAL_KASURI_02D,			// �N���[���܂݂�̂�����i���ւ��E�Áj
	VISUAL_KASURI_05A,			// ������A�m�ɔ���
	VISUAL_KASURI_06A,			// ������ɉ������N���[���܂݂�̂�����i���^���Ԃɂ��Ă�������ۂ��Ƃ�΂��j
	VISUAL_KASURI_06B,			// ������ɉ������N���[���܂݂�̂�����i�����ɂ������j
	VISUAL_KASURI_06C,			// ������ɉ������N���[���܂݂�̂�����i�u���W���[�Ȃ��E���^���Ԃɂ��Ă�������ۂ��Ƃ�΂��j
	VISUAL_KASURI_06D,			// ������ɉ������N���[���܂݂�̂�����i�u���W���[�Ȃ��E�����ɂ������j
	VISUAL_KASURI_06E,			// ������ɉ������N���[���܂݂�̂�����i���ɃN���[���E���^���Ԃɂ��Ă�������ۂ��Ƃ�΂��j
	VISUAL_KASURI_06F,			// ������ɉ������N���[���܂݂�̂�����i���ɃN���[���E�����ɂ������j
	VISUAL_KASURI_06G,			// ������ɉ������N���[���܂݂�̂�����i�p���c�Ȃ��E���^���Ԃɂ��Ă�������ۂ��Ƃ�΂��j
	VISUAL_KASURI_06H,			// ������ɉ������N���[���܂݂�̂�����i�p���c�Ȃ��E�����ɂ������j
	VISUAL_KASURI_06I,			// ������ɉ������N���[���܂݂�̂�����i�ҊԂɃN���[���E���^���Ԃɂ��Ă�������ۂ��Ƃ�΂��j
	VISUAL_KASURI_06J,			// ������ɉ������N���[���܂݂�̂�����i�ҊԂɃN���[���E�����ɂ������j
	VISUAL_KASURI_07A,			// ������ɉ�����邩����ɑ}��
	VISUAL_KASURI_07B,			// ������ɉ�����邩����ɑ}���i�ː��j
	VISUAL_KASURI_08A,			// ������A������ɍ���m�ɕ�d�i�y�j�X���j
	VISUAL_KASURI_08B,			// ������A������ɍ���m�ɕ�d�i�y�j�X���E���̖тł�������j
	VISUAL_KASURI_08C,			// ������A������ɍ���m�ɕ�d�i�y�j�X��E����������ۂ����΁j
	VISUAL_KASURI_08D,			// ������A������ɍ���m�ɕ�d�i�y�j�X��E�r�߂�j
	VISUAL_KASURI_08E,			// ������A������ɍ���m�ɕ�d�i�y�j�X��E�����s�����j
	VISUAL_KASURI_08F,			// ������A������ɍ���m�ɕ�d�i�ː��E�r�߂�j
	VISUAL_KASURI_08G,			// ������A������ɍ���m�ɕ�d�i�ː��E����������ۂ����΁j
	VISUAL_KASURI_09A,			// �z�c�̒��A�����������܂܎�R�L�i���Y���ۂ����΂݁j
	VISUAL_KASURI_09B,			// �z�c�̒��A�����������܂܎�R�L�i�L�X�j
	VISUAL_KASURI_09C,			// �z�c�̒��A�����������܂܎�R�L�i�y�j�X��G��E���Y���ۂ����΂݁j
	VISUAL_KASURI_09D,			// �z�c�̒��A�����������܂܎�R�L�i�y�j�X��G��E�L�X�j
	VISUAL_KASURI_09E,			// �z�c�̒��A�����������܂܎�R�L�i�ː��E�����j
	VISUAL_KASURI_09F,			// �z�c�̒��A�����������܂܎�R�L�i�ː��E���Y���ۂ����΂݁j
	VISUAL_KASURI_10A,			// �z�c�̏�A�N���j�i�p�����������Ȕ��΂݁j
	VISUAL_KASURI_10B,			// �z�c�̏�A�N���j�i�����ɂ������E���t�j
	VISUAL_KASURI_10C,			// �z�c�̏�A�N���j�i�����ɂ������j
	VISUAL_KASURI_10D,			// �z�c�̏�A�N���j�i�p�����������Ȕ��΂݁E���t�j
	VISUAL_KASURI_11A,			// �����肳��ƃo�b�N�i������ƌ˘f���j
	VISUAL_KASURI_11B,			// �����肳��ƃo�b�N�i�}���E�����̋��сj
	VISUAL_KASURI_11C,			// �����肳��ƃo�b�N�i�}���j
	VISUAL_KASURI_11D,			// �����肳��ƃo�b�N�i�ː��j
	VISUAL_KASURI_12A,			// ���̏�ŃG�b�`�E�L�X
	VISUAL_KASURI_13A,			// ���َq�R���e�X�g
	VISUAL_KASURI_14A,			// �}�C�N�z���Ɍ�荇����l
	VISUAL_KASURI_15A,			// �����肳��A���ŃG�b�`
	VISUAL_KASURI_15B,			// �����肳��A���ŃG�b�`�i�����畠�ɂ����Đ��炵�����N���[���j
	VISUAL_KASURI_16A,			// �N���[���܂݂�ŃV�b�N�X�i�C��
	VISUAL_KASURI_16B,			// �N���[���܂݂�ŃV�b�N�X�i�C���i�ː��j
	VISUAL_KASURI_17A,			// �����肳�񐳏��
	VISUAL_KASURI_17B,			// �����肳�񐳏�ʁi�ː��j
	VISUAL_KASURI_18A,			// �����_�Ŏ��U��Ȃ���ʂ���l

	VISUAL_EMA_01A,				// �V�����[�𗁂т�b��
	VISUAL_EMA_02A,				// �s�R�Ҍb���i�ł�E�T���O���X�j
	VISUAL_EMA_02B,				// �s�R�Ҍb���i�����Ƃ��傰���\��E�T���O���X�j
	VISUAL_EMA_02C,				// �s�R�Ҍb���i�ł�j
	VISUAL_EMA_02D,				// �s�R�Ҍb���i�����Ƃ��傰���\��j
	VISUAL_EMA_03A,				// �m�̖ڂ̑O�œ��X�ƒ��ւ���b��
	VISUAL_EMA_04A,				// ���������悤�ɖ���Q�l
	VISUAL_EMA_04B,				// ���������悤�ɖ���Q�l
	VISUAL_EMA_06A,				// �P�O�N�O�̌b���Ɛm
	VISUAL_EMA_07A,				// �w������������߂�b��
	VISUAL_EMA_08A,				// �b���Ƃ̃L�X
	VISUAL_EMA_09A,				// ��l���ɂ܂������Ĉ�������b���i���΂݁j
	VISUAL_EMA_09B,				// ��l���ɂ܂������Ĉ�������b���i�����̂������j
	VISUAL_EMA_09C,				// ��l���ɂ܂������Ĉ�������b���i�u�������E���΂݁j
	VISUAL_EMA_09D,				// ��l���ɂ܂������Ĉ�������b���i�u�������E�����̂������j
	VISUAL_EMA_10A,				// �R��ʂŃZ�b�N�X�i�ɂ݂����炦�Ȃ��甖���ڂ��J���ďΊ�j
	VISUAL_EMA_10B,				// �R��ʂŃZ�b�N�X�i�L�X�̌��j
	VISUAL_EMA_10C,				// �R��ʂŃZ�b�N�X�i�܂𕂂��ׂĖڂ��������A�����ɂ����j
	VISUAL_EMA_10D,				// �R��ʂŃZ�b�N�X�i�S���ː��E�ɂ݂����炦�Ȃ��甖���ڂ��J���ďΊ�j
	VISUAL_EMA_10E,				// �R��ʂŃZ�b�N�X�i�S���ː��E�L�X�̌��j
	VISUAL_EMA_10F,				// �R��ʂŃZ�b�N�X�i�S���ː��E�܂𕂂��ׂĖڂ��������A�����ɂ����j
	VISUAL_EMA_11A,				// �����̒��̌ҊԘM��
	VISUAL_EMA_11B,				// �����̒��̌ҊԘM��i�قِ��߁j
	VISUAL_EMA_12A,				// �`�L���L�b�X�i�ɂ��j
	VISUAL_EMA_12B,				// �`�L���L�b�X�i�L�X����Ăт�����j
	VISUAL_EMA_12C,				// �`�L���L�b�X�i�ڂ��Ԃ�A�����J���Ő�������o���������j
	VISUAL_EMA_12D,				// �`�L���L�b�X�i�A�b�v�E�ɂ��j
	VISUAL_EMA_12E,				// �`�L���L�b�X�i�A�b�v�E�L�X����Ăт�����j
	VISUAL_EMA_12F,				// �`�L���L�b�X�i�A�b�v�E�ڂ��Ԃ�A�����J���Ő�������o���������j
	VISUAL_EMA_13A,				// �Z�[���[���b���i��ڎg���ł��˂���j
	VISUAL_EMA_13B,				// �Z�[���[���b���i�Ί�j
	VISUAL_EMA_13C,				// �Z�[���[���b���i�ڂ��ׂ߁A���������Ɋ����Ă���j
	VISUAL_EMA_14A,				// �x�b�h�̏�ɍ����āA�鏊���w�ŊJ���Č����Ă���b���i�p�����������ɔ��΂ށj
	VISUAL_EMA_14B,				// �x�b�h�̏�ɍ����āA�鏊���w�ŊJ���Č����Ă���b���i�����E���ĉ����ɑς���j
	VISUAL_EMA_14C,				// �x�b�h�̏�ɍ����āA�鏊���w�ŊJ���Č����Ă���b���i�����Ȃ�N���j����āA�Q�Ă�j
	VISUAL_EMA_14D,				// �x�b�h�̏�ɍ����āA�鏊���w�ŊJ���Č����Ă���b���i���t�E�p�����������ɔ��΂ށj
	VISUAL_EMA_14E,				// �x�b�h�̏�ɍ����āA�鏊���w�ŊJ���Č����Ă���b���i���t�E�����E���ĉ����ɑς���j
	VISUAL_EMA_14F,				// �x�b�h�̏�ɍ����āA�鏊���w�ŊJ���Č����Ă���b���i���t�E�����Ȃ�N���j����āA�Q�Ă�j
	VISUAL_EMA_14G,				// �x�b�h�̏�ɍ����āA�鏊���w�ŊJ���Č����Ă���b���i�������E�p�����������ɔ��΂ށj
	VISUAL_EMA_14H,				// �x�b�h�̏�ɍ����āA�鏊���w�ŊJ���Č����Ă���b���i�������E�����E���ĉ����ɑς���j
	VISUAL_EMA_14I,				// �x�b�h�̏�ɍ����āA�鏊���w�ŊJ���Č����Ă���b���i�������E�����Ȃ�N���j����āA�Q�Ă�j
	VISUAL_EMA_15A,				// ����ʂŃZ�b�N�X�i�����̂������j
	VISUAL_EMA_15B,				// ����ʂŃZ�b�N�X�i���΂݁j
	VISUAL_EMA_15C,				// ����ʂŃZ�b�N�X�i�ː��E�����̂������j
	VISUAL_EMA_15D,				// ����ʂŃZ�b�N�X�i�ː��E���΂݁j
	VISUAL_EMA_16A,				// ���ւ����Ő������E���̌b��
	VISUAL_EMA_17A,				// �b���t�F���`�I�i��ڎg���j
	VISUAL_EMA_17B,				// �b���t�F���`�I�i�ڂ����j
	VISUAL_EMA_17C,				// �b���t�F���`�I�i��ڎg���E������ҊԂɔ��킹��j
	VISUAL_EMA_17D,				// �b���t�F���`�I�i�ڂ����E������ҊԂɔ��킹��j
	VISUAL_EMA_17E,				// �b���t�F���`�I�i�ː��j
	VISUAL_EMA_18A,				// �b���Ɨ����o�b�N�łg�i�p�����������j
	VISUAL_EMA_18B,				// �b���Ɨ����o�b�N�łg�i�����Ƌꂵ���ŋ��ԁj
	VISUAL_EMA_18C,				// �b���Ɨ����o�b�N�łg�i�ꂵ�����j
	VISUAL_EMA_18D,				// �b���Ɨ����o�b�N�łg�i�p���c���炵�E�p�����������j
	VISUAL_EMA_18E,				// �b���Ɨ����o�b�N�łg�i�p���c���炵�E�����Ƌꂵ���ŋ��ԁj
	VISUAL_EMA_18F,				// �b���Ɨ����o�b�N�łg�i�p���c���炵�E�ꂵ�����j
	VISUAL_EMA_18G,				// �b���Ɨ����o�b�N�łg�i�}���E�p�����������j
	VISUAL_EMA_18H,				// �b���Ɨ����o�b�N�łg�i�}���E�����Ƌꂵ���ŋ��ԁj
	VISUAL_EMA_18I,				// �b���Ɨ����o�b�N�łg�i�}���E�ꂵ�����j
	VISUAL_EMA_18J,				// �b���Ɨ����o�b�N�łg�i�ː��E�p�����������j
	VISUAL_EMA_18K,				// �b���Ɨ����o�b�N�łg�i�ː��E�����Ƌꂵ���ŋ��ԁj
	VISUAL_EMA_18L,				// �b���Ɨ����o�b�N�łg�i�ː��E�ꂵ�����j
	VISUAL_EMA_19A,				// �G���f�B���O

	VISUAL_RIKAKO_01A,			// �ዾ�ȗ����q
	VISUAL_RIKAKO_02A,			// ����ō���i��w�E���\��A�ڐ����ʁj
	VISUAL_RIKAKO_02B,			// ����ō���i��w�E���\��A�ڐ���O�j
	VISUAL_RIKAKO_02C,			// ����ō���i��w�E�����ی����j
	VISUAL_RIKAKO_02D,			// ����ō���i��w�E�s�@���A�ڐ����ʁj
	VISUAL_RIKAKO_02E,			// ����ō���i�o�[�E���\��A�ڐ����ʁj
	VISUAL_RIKAKO_02F,			// ����ō���i�o�[�E���\��A�ڐ���O�j
	VISUAL_RIKAKO_02G,			// ����ō���i�o�[�E�����ی����j
	VISUAL_RIKAKO_02H,			// ����ō���i�o�[�E�s�@���A�ڐ����ʁj
	VISUAL_RIKAKO_03A,			// �����q�Ƀu���X���b�g���͂߂�m�i�����q07�p�j
	VISUAL_RIKAKO_03B,			// �����q�Ƀu���X���b�g���͂߂�m�i�����q13�p�j
	VISUAL_RIKAKO_04A,			// ���N�O�̃t�@�[�X�g�L�X
	VISUAL_RIKAKO_05A,			// �L�X
	VISUAL_RIKAKO_06A,			// �������r��m�̎�ɉ񂵂ăL�X
	VISUAL_RIKAKO_07A,			// ������
	VISUAL_RIKAKO_08A,			// �ҊԈ����i�m�����߁A��肩����j
	VISUAL_RIKAKO_08B,			// �ҊԈ����i�ڂ���A�����悤�Ƃ��Ă���\��j
	VISUAL_RIKAKO_08C,			// �ҊԈ����i�������炵�E�m�����߁A��肩����j
	VISUAL_RIKAKO_08D,			// �ҊԈ����i�������炵�E�ڂ���A�����悤�Ƃ��Ă���\��j
	VISUAL_RIKAKO_09A,			// �����
	VISUAL_RIKAKO_10A,			// �x�b�h�ɂ��Ԃ��ň���
	VISUAL_RIKAKO_10B,			// �x�b�h�ɂ��Ԃ��ň����i�p���c���艺�낵�j
	VISUAL_RIKAKO_11A,			// �����q�t�F���i�g���~���O�E��ڎg���Ő���o���r�߂�j
	VISUAL_RIKAKO_11B,			// �����q�t�F���i�g���~���O�E�ڂ��Ԃ������j
	VISUAL_RIKAKO_11C,			// �����q�t�F���i��ڎg���Ő���o���r�߂�j
	VISUAL_RIKAKO_11D,			// �����q�t�F���i�ڂ��Ԃ������j
	VISUAL_RIKAKO_11E,			// �����q�t�F���i�ː��E��ڎg���Ő���o���r�߂�j
	VISUAL_RIKAKO_11F,			// �����q�t�F���i�ː��E�ڂ��Ԃ������j
	VISUAL_RIKAKO_12A,			// �w������������߂ĐH���i�˘f���Ȃ�����A�����ɂɂ₯�������j
	VISUAL_RIKAKO_12B,			// �w������������߂ĐH���i������Ƃ��A�Ƃ�������̕\��j
	VISUAL_RIKAKO_12C,			// �w������������߂ĐH���i���Ǝ��R�ɐH���j
	VISUAL_RIKAKO_13A,			// ��̒��Ō���������l
	VISUAL_RIKAKO_13B,			// ��̒��Ō���������l�i�L���������j
	VISUAL_RIKAKO_14A,			// �����𒅂���
	VISUAL_RIKAKO_15A,			// �R�x�ڂg���̂P�@���ɃL�X
	VISUAL_RIKAKO_15B,			// �R�x�ڂg���̂P�@���ɃL�X�i�p���c�����ɂ��炷�j
	VISUAL_RIKAKO_17A,			// �R�x�ڂg���̂Q
	VISUAL_RIKAKO_17B,			// �R�x�ڂg���̂Q�i�ː��j
	VISUAL_RIKAKO_18A,			// �R�x�ڂg���̂R
	VISUAL_RIKAKO_18B,			// �R�x�ڂg���̂R�i�ː��j
	VISUAL_RIKAKO_20A,			// �Ԃ�V��������A�t�@�C���_�[�z���̗����q
	VISUAL_RIKAKO_20B,			// �Ԃ�V��������A�t�@�C���_�[�z���̗����q�i�����q�����j
	VISUAL_RIKAKO_20C,			// �Ԃ�V��������A�t�@�C���_�[�z���̗����q�i�����q�A�Ԃ�V�����j
	VISUAL_RIKAKO_20D,			// �Ԃ�V��������A�t�@�C���_�[�z���̗����q�i��z�p�j

	VISUAL_BLACK,				// �����
	VISUAL_WHITE,				// �����
	VISUAL_NETA1,				// �G�C�v�����t�[���l�^�p
	VISUAL_NETA2,				// �G�C�v�����t�[���l�^�p
	VISUAL_NETA3,				// �G�C�v�����t�[���l�^�p

	VISUAL_AIAI,				// �������P
	VISUAL_OMRICE1,				// �I�����C�X�i�戤�j
	VISUAL_OMRICE2,				// �I�����C�X�i�����q�j
	VISUAL_PIANO1,				// �s�A�m
	VISUAL_PIANO2,				// �s�A�m
	VISUAL_TENJO,				// �t�[�h�R�[�g�̓V��
	VISUAL_THUNDER,				// ��
	VISUAL_WAIT,				// ���΂炭���҂�������
	VISUAL_FIRE,				// �Ύ��C���[�W
	VISUAL_VGNEO1,				// V.G.NEO�o�g���p
	VISUAL_VGNEO2,				// V.G.NEO�o�g���p
	VISUAL_VGNEO3,				// V.G.NEO�o�g���p
	VISUAL_VGNEO4,				// V.G.NEO�o�g���p
	VISUAL_VGNEO5,				// V.G.NEO�o�g���p
	VISUAL_NOTICE,				// ���������m���
	VISUAL_GIGA,				// �Y�惍�S
	VISUAL_SELECTMAP,			// �}�b�v�I�����
	VISUAL_DAYEFFECT,			// ���t���o���
	VISUAL_EXTRAMODE,			// ���܂����[�h���

	BG_MALL_01A,				// 01�u���b�N���[���O��_��
	BG_MALL_03A,				// 01�u���b�N���[���O��_��
	BG_ENTRANCE_01A,			// 02�u���b�N���[���G���g�����X_��
	BG_ENTRANCE_01B,			// 02�u���b�N���[���G���g�����X_�N���X�}�X�c��
	BG_ENTRANCE_03A,			// 02�u���b�N���[���G���g�����X_��c�ƒ�
	BG_ENTRANCE_03B,			// 02�u���b�N���[���G���g�����X_�N���X�}�X��c��
	BG_ENTRANCE_04A,			// 02�u���b�N���[���G���g�����X_�����
	BG_FOODCOURT_01A,			// 03�t�[�h�R�[�g_�c�ƒ�
	BG_FOODCOURT_01B,			// 03�t�[�h�R�[�g_�N���X�}�X�c��
	BG_FOODCOURT_03A,			// 03�t�[�h�R�[�g_��c�ƒ�
	BG_FOODCOURT_03B,			// 03�t�[�h�R�[�g_�X��
	BG_FOODCOURT_03C,			// 03�t�[�h�R�[�g_�N���X�}�X��c��
	BG_FOODCOURT_04A,			// 03�t�[�h�R�[�g_�����
	BG_FOODCOURT_04B,			// 03�t�[�h�R�[�g_�N���X�}�X�X��
	BG_FOODCOURTN_01A,			// 04�t�[�h�R�[�g�����r��_��
	BG_FOODCOURTN_02A,			// 04�t�[�h�R�[�g�����r��_�[��
	BG_FAMILLE_01A,				// 05�t�@�~�[���O��_�c�ƒ�
	BG_FAMILLE_03A,				// 05�t�@�~�[���O��_�X��
	BG_FAMILLE_04A,				// 05�t�@�~�[���O��_�����
	BG_FAMILLEE_01A,			// 06�t�@�~�[�������_�c�ƒ�
	BG_FAMILLEE_03A,			// 06�t�@�~�[�������_�X��
	BG_FAMILLEE_04A,			// 06�t�@�~�[�������_�����
	BG_FAMILLEF_00A,			// 07�t�@�~�[���t���A_���J�X�O
	BG_FAMILLEF_01A,			// 07�t�@�~�[���t���A_�c�ƒ�
	BG_FAMILLEF_03A,			// 07�t�@�~�[���t���A_�X��
	BG_FAMILLEF_04A,			// 07�t�@�~�[���t���A_�����
	BG_FAMILLEC_01A,			// 08�t�@�~�[���~�[_�c�ƒ�
	BG_FAMILLEC_03A,			// 08�t�@�~�[���~�[_�X��
	BG_FAMILLES_01A,			// 09�t�@�~�[���X�^�b�t���[��_�ʏ�
	BG_FAMILLES_03A,			// 09�t�@�~�[���X�^�b�t���[��_����
	BG_CURIO_01A,				// 10�b�t�q�h�n�R���X�O��_�c�ƒ�
	BG_CURIO_03A,				// 10�b�t�q�h�n�R���X�O��_�X��
	BG_CURIO_04A,				// 10�b�t�q�h�n�R���X�O��_�����
	BG_CURIOF_01A,				// 11�b�t�q�h�n�R���X�t���A_�c�ƒ�
	BG_CURIOF_03A,				// 11�b�t�q�h�n�R���X�t���A_�X��
	BG_CURIOF_04A,				// 11�b�t�q�h�n�R���X�t���A_�����
	BG_YOUHINTEN_01A,			// 12�m�i�X��_�c�ƒ�
	BG_ANTIQUE_01A,				// 13�A���e�B�[�N�Ƌ�X�X��_�c�ƒ�
	BG_ANTIQUE_03A,				// 13�A���e�B�[�N�Ƌ�X�X��_�X��
	BG_HITOSHI_00A,				// 14�m�̃}���V�������r���O_���E�����E�J�[�e����
	BG_HITOSHI_00B,				// 14�m�̃}���V�������r���O_���E�����E�J�[�e�����E�Y���Q
	BG_HITOSHI_01A,				// 14�m�̃}���V�������r���O_��
	BG_HITOSHI_02A,				// 14�m�̃}���V�������r���O_�[��
	BG_HITOSHI_03A,				// 14�m�̃}���V�������r���O_��
	BG_HITOSHI_03B,				// 14�m�̃}���V�������r���O_��E�J�[�e���J��
	BG_HITOSHI_03C,				// 14�m�̃}���V�������r���O_��E�J�[�e�����J��
	BG_HITOSHI_04A,				// 14�m�̃}���V�������r���O_��E����
	BG_HITOSHI_04B,				// 14�m�̃}���V�������r���O_��E�����E�J�[�e���J��
	BG_HITOSHI_04C,				// 14�m�̃}���V�������r���O_��E�����E�J�[�e�����J��
	BG_HITOSHI_04D,				// 14�m�̃}���V�������r���O_��E�����E�Y���Q
	BG_HITOSHIV_03A,			// 15�m�̃}���V�����x�����__�鐯��
	BG_HITOSHIV_03B,			// 15�m�̃}���V�����x�����__��܂��
	BG_HITOSHIG_01A,			// 16�m�̃}���V��������_����
	BG_HITOSHIG_01B,			// 16�m�̃}���V��������_���J���i�O���j
	BG_HITOSHIG_02A,			// 16�m�̃}���V��������_���J���i�O�[���j
	BG_HITOSHIG_03A,			// 16�m�̃}���V��������_���J���i�O��j
	BG_HITOSHIH_01A,			// 17�m�̃}���V�������C��
	BG_HITOSHIH_01B,			// 17�m�̃}���V�������C��i�V�����[�Ȃ��j
	BG_HITOSHIR_01A,			// 18�}���V�����L��_��
	BG_HITOSHIR_02A,			// 18�}���V�����L��_�[��
	BG_HITOSHIR_03A,			// 18�}���V�����L��_��
	BG_HITOSHIE_01A,			// 19�}���V�����G���x�[�^�[�z�[��_���E����
	BG_HITOSHIE_01B,			// 19�}���V�����G���x�[�^�[�z�[��_���E���J��
	BG_EMA_00A,					// 20�b���}���V�������r���O_��
	BG_EMA_01A,					// 20�b���}���V�������r���O_��
	BG_EMA_01B,					// 20�b���}���V�������r���O_���E�����J��
	BG_EMA_01C,					// 20�b���}���V�������r���O_���E�ʔv�����
	BG_EMA_02A,					// 20�b���}���V�������r���O_�[���E��r
	BG_EMA_02B,					// 20�b���}���V�������r���O_�[���E�ʔv�����
	BG_EMA_03A,					// 20�b���}���V�������r���O_��
	BG_EMA_03B,					// 20�b���}���V�������r���O_��E���y��
	BG_EMA_03C,					// 20�b���}���V�������r���O_��E�c���[
	BG_EMAK_01A,				// 21�b���̃}���V�����L�b�`��_���錓�p
	BG_EMAG_01A,				// 22�b���̃}���V��������_����
	BG_EMAG_02A,				// 22�b���̃}���V��������_���J���i�O�[���j
	BG_EMAS_01A,				// 23�b���̃}���V�������֊O_��
	BG_EMAS_03A,				// 23�b���̃}���V�������֊O_��
	BG_EMAD_03A,				// 24�b���̃}���V�����E�ߏ�
	BG_REA_01A,					// 25�戤�̕���_��
	BG_YUI_00A,					// 26�R��̃}���V�������r���O_��
	BG_YUI_03A,					// 26�R��̃}���V�������r���O_��
	BG_YUI_03B,					// 26�R��̃}���V�������r���O_��E�e�[�u��
	BG_YUI_03C,					// 26�R��̃}���V�������r���O_��E�Q�����J��
	BG_YUI_03D,					// 26�R��̃}���V�������r���O_��E�Q�����J���E�e�[�u��
	BG_KASURI_01A,				// 27���g�Ƙa��_��
	BG_KASURI_01B,				// 27���g�Ƙa��_�ӂ��܊J��
	BG_KASURIK_03A,				// 28���g�Ƌq��_��
	BG_KASURIK_04A,				// 28���g�Ƌq��_�����
	BG_KASURIK_04B,				// 28���g�Ƌq��_������E�z�c����
	BG_KASURIK_04C,				// 28���g�Ƌq��_������E�z�c����E�ӂ��܊J��
	BG_EKIMAE_01A,				// 29�w�O_��
	BG_EKIMAE_01B,				// 29�w�O_���E�N���X�}�X
	BG_EKIMAE_02A,				// 29�w�O_�[��
	BG_EKIMAE_03A,				// 29�w�O_��
	BG_EKIMAE_03B,				// 29�w�O_��E�ϐ�
	BG_EKIMAE_03C,				// 29�w�O_��E�N���X�}�X
	BG_EKIMAE_04A,				// 29�w�O_�[��
	BG_EKIMAE_04B,				// 29�w�O_�[��E�ϐ�
	BG_DAIGAKU_01A,				// 30��w�\��_��
	BG_DAIGAKUK_01A,			// 31��w����
	BG_DAIGAKUS_01A,			// 32��w���������_��
	BG_DAIGAKUS_01B,			// 32��w���������_���E�T�[�N���̊��U
	BG_DAIGAKUS_03A,			// 32��w���������_��
	BG_DAIGAKUG_01A,			// 33��w�w�H_��
	BG_DAIGAKUY_01A,			// 34�R��̑�w�L�����p�X
	BG_ROJI_01A,				// 35�H�n_��
	BG_ROJI_03A,				// 35�H�n_��
	BG_ROJI_03B,				// 35�H�n_��E�~��
	BG_ROJI_03C,				// 35�H�n_��E�ϐ�
	BG_ROJI2_03A,				// 36�H�n�Q_��
	BG_QFAMILLE_01A,			// 37���t�@�~�[���O��_��
	BG_QFAMILLEF_01A,			// 37���t�@�~�[���t���A_��
	BG_AKICHI_01A,				// 39�󂫒n_��
	BG_AKICHI_02A,				// 39�󂫒n_�[��
	BG_FAMIRES_01A,				// 40�t�@�~���X�X��_��
	BG_FAMIRES_02A,				// 40�t�@�~���X�X��_�[��
	BG_FAMIRES_03A,				// 40�t�@�~���X�X��_��
	BG_FAMIRESS_01A,			// 41�t�@�~���X��_��
	BG_FAMIRESS_02A,			// 41�t�@�~���X��_�[��
	BG_FAMIRESS_03A,			// 41�t�@�~���X��_��
	BG_RESTAURANT_03A,			// 42���X�g����_��
	BG_RESTAURANTS_03A,			// 43���X�g������_��
	BG_TAKAMURAG_01A,			// 44�����ƊO��_��
	BG_TAKAMURA_03A,			// 45�����ƍ��~_�e�[�u������
	BG_TAKAMURA_03B,			// 45�����ƍ��~_����
	BG_TAKAMURA_03C,			// 45�����ƍ��~_������
	BG_TAKAMURA_03D,			// 45�����ƍ��~_�����E�ӂ��܊J��
	BG_TAKAMURA_03E,			// 45�����ƍ��~_�����{����
	BG_TAKAMURA_03F,			// 45�����ƍ��~_�����{�����E�ӂ��܊J��
	BG_BAR_01A,					// 46�o�[�wpure platinum�x_�c�ƒ�
	BG_BART_03A,				// 47�o�[�̕\�ʂ�_��
	BG_PENSION_03A,				// 48�y���V�����̕���_��
	BG_PENSION_03B,				// 48�y���V�����̕���_��E�ʔv
	BG_GAKUENR_01A,				// 49�w���L��_��
	BG_GAKUENR_02A,				// 49�w���L��_�[��
	BG_GAKUENK_01A,				// 50�w������_�[��
	BG_GAKUENK_01B,				// 50�w������_���E�w���Փ���
	BG_GAKUENK_02A,				// 50�w������_�[���E�w���Տ�����
	BG_EIGAKAN_01A,				// 51�f���_�㉉�O
	BG_EIGAKAN_01B,				// 51�f���_�㉉��
	BG_CONCERT_01A,				// 52�R���T�[�g�z�[���q��_�J���O
	BG_CONCERT_01B,				// 52�R���T�[�g�z�[���q��_�R���T�[�g��
	BG_CONCERT_01C,				// 52�R���T�[�g�z�[���q��_�J���O
	BG_CONCERT_01D,				// 52�R���T�[�g�z�[���q��_�R���T�[�g��
	BG_HONTEN_01A,				// 53�t�@�~�[���{�X�O_��
	BG_HONTENF_01A,				// 54�t�@�~�[���{�X�t���A
	BG_TOWN_00A,				// 55�X��_���܂��
	BG_CONTEST_01A,				// 56�R���e�X�g���
	BG_CURIOM_01A,				// 94�L�����I�{�X�O_��
	BG_TRAIN_01A,				// 95�d�ԓ�
	BG_HOSPITAL_01A,			// 96�a�@
	BG_CURIOH_01A,				// 97�L�����I�{�X�t���A_��
	BG_CURIOL_01A,				// 98�L�����I�{�X���t�g_��
	BG_SORA_01A,				// 99��_��
	BG_SORA_01B,				// 99��_���i�܂�j
	BG_SORA_02A,				// 99��_�[
	BG_SORA_03A,				// 99��_��

	VISUAL_MAX
};

enum
{
	STAND_HITOSHI,				// �m
	STAND_YUI,					// �R��
	STAND_REA,					// �戤
	STAND_ASUKA,				// ������
	STAND_KASURI,				// ������
	STAND_EMA,					// �b��
	STAND_RIKAKO,				// �����q
	STAND_MIZUNA,				// ����
	STAND_ITABASHI,				// ��
	STAND_YOSHIMI,				// �F��
	STAND_HIKARI,				// �Ђ���
	STAND_MASASHI,				// ����
	STAND_MITSUE,				// �݂�
	STAND_MISUZU,				// ����
	STAND_GENICHIROU,			// ����Y
	STAND_TSUMUGI,				// ��
	STAND_MIDORI,				// ��
	STAND_BARA,					// �o������
};

enum
{
	//========================================================
	// �R��
	// �t�@�~�[�������E�|�[�Y�P
	YUI_0101AS,					// �ł�
	YUI_0101AW,					// ���z�΂�
	YUI_0101BS,					// ����
	YUI_0101EG,					// �Ί�
	YUI_0101GR,					// �O���b�L�[
	YUI_0101GR2,				// �O���b�L�[
	YUI_0101HA,					// �s��
	YUI_0101IK,					// �{��
	YUI_0101IK2,				// �{��
	YUI_0101KG,					// ����
	YUI_0101KS,					// �L�X
	YUI_0101MJ,					// �^�ʖ�
	YUI_0101MU,					// ����
	YUI_0101NO,					// �ʏ�
	YUI_0101OD,					// ����
	YUI_0101OT,					// ��������
	YUI_0101SM,					// ���܂���
	YUI_0101UN,					// ���`��
	YUI_0101UT,					// �̂�
	YUI_0101UT2,				// �̂�
	YUI_0101UT3,				// �̂�

	// �t�@�~�[�������E�|�[�Y�Q
	YUI_0102BS,					// ����
	YUI_0102EG,					// �Ί�
	YUI_0102IN,					// �����̂�
	YUI_0102KG,					// �����񂻂�
	YUI_0102KN,					// �߂���
	YUI_0102KN_,				// �߂��݁i�ܖ����j
	YUI_0102KS,					// ���
	YUI_0102NO,					// �ʏ�
	YUI_0102NS,					// ��������
	YUI_0102OD,					// ����
	YUI_0102OD2,				// ����
	YUI_0102SN,					// �X�˂�1
	YUI_0102SN2,				// �X�˂�2
	YUI_0102SW,					// ���킻��

	// �L�����I�����E�|�[�Y�P
	YUI_0201AS,					// �ł�
	YUI_0201AW,					// ���z�΂�
	YUI_0201BS,					// ����
	YUI_0201EG,					// �Ί�
	YUI_0201GR,					// �O���b�L�[
	YUI_0201GR2,				// �O���b�L�[
	YUI_0201HA,					// �s��
	YUI_0201IK,					// �{��
	YUI_0201IK2,				// �{��
	YUI_0201KG,					// ����
	YUI_0201KS,					// �L�X
	YUI_0201MJ,					// �^�ʖ�
	YUI_0201MU,					// ����
	YUI_0201NO,					// �ʏ�
	YUI_0201OD,					// ����
	YUI_0201OT,					// ��������
	YUI_0201SM,					// ���܂���
	YUI_0201UN,					// ���`��
	YUI_0201UT,					// �̂�
	YUI_0201UT2,				// �̂�
	YUI_0201UT3,				// �̂�

	// �L�����I�����E�|�[�Y�Q
	YUI_0202BS,					// ����
	YUI_0202EG,					// �Ί�
	YUI_0202IN,					// �����̂�
	YUI_0202KG,					// �����񂻂�
	YUI_0202KN,					// �߂���
	YUI_0202KN_,				// �߂��݁i�ܖ����j
	YUI_0202KS,					// ���
	YUI_0202NO,					// �ʏ�
	YUI_0202NS,					// ��������
	YUI_0202OD,					// ����
	YUI_0202OD2,				// ����
	YUI_0202SN,					// �X�˂�1
	YUI_0202SN2,				// �X�˂�2
	YUI_0202SW,					// ���킻��

	// �����E�|�[�Y�P
	YUI_0301AS,					// �ł�
	YUI_0301AW,					// ���z�΂�
	YUI_0301BS,					// ����
	YUI_0301EG,					// �Ί�
	YUI_0301GR,					// �O���b�L�[
	YUI_0301GR2,				// �O���b�L�[
	YUI_0301HA,					// �s��
	YUI_0301IK,					// �{��
	YUI_0301IK2,				// �{��
	YUI_0301KG,					// ����
	YUI_0301KS,					// �L�X
	YUI_0301MJ,					// �^�ʖ�
	YUI_0301MU,					// ����
	YUI_0301NO,					// �ʏ�
	YUI_0301OD,					// ����
	YUI_0301OT,					// ��������
	YUI_0301SM,					// ���܂���
	YUI_0301UN,					// ���`��
	YUI_0301UT,					// �̂�
	YUI_0301UT2,				// �̂�
	YUI_0301UT3,				// �̂�

	// �����E�|�[�Y�Q
	YUI_0302BS,					// ����
	YUI_0302EG,					// �Ί�
	YUI_0302IN,					// �����̂�
	YUI_0302KG,					// �����񂻂�
	YUI_0302KN,					// �߂���
	YUI_0302KN_,				// �߂��݁i�ܖ����j
	YUI_0302KS,					// ���
	YUI_0302NO,					// �ʏ�
	YUI_0302NS,					// ��������
	YUI_0302OD,					// ����
	YUI_0302OD2,				// ����
	YUI_0302SN,					// �X�˂�1
	YUI_0302SN2,				// �X�˂�2
	YUI_0302SW,					// ���킻��

	// �����E���P
	YUI_0401AS,					// �ł�
	YUI_0401AW,					// ���z�΂�
	YUI_0401BS,					// ����
	YUI_0401EG,					// �Ί�
	YUI_0401GR,					// �O���b�L�[
	YUI_0401GR2,				// �O���b�L�[
	YUI_0401HA,					// �s��
	YUI_0401IK,					// �{��
	YUI_0401IK2,				// �{��
	YUI_0401KG,					// ����
	YUI_0401KS,					// �L�X
	YUI_0401MJ,					// �^�ʖ�
	YUI_0401MU,					// ����
	YUI_0401NO,					// �ʏ�
	YUI_0401OD,					// ����
	YUI_0401OT,					// ��������
	YUI_0401SM,					// ���܂���
	YUI_0401UN,					// ���`��
	YUI_0401UT,					// �̂�
	YUI_0401UT2,				// �̂�
	YUI_0401UT3,				// �̂�

	//========================================================
	// �R��i�o�X�g�A�b�v�j
	// �t�@�~�[�������E�|�[�Y�P
	YUI_A101AS,					// �ł�
	YUI_A101AW,					// ���z�΂�
	YUI_A101BS,					// ����
	YUI_A101EG,					// �Ί�
	YUI_A101GR,					// �O���b�L�[
	YUI_A101GR2,				// �O���b�L�[
	YUI_A101HA,					// �s��
	YUI_A101IK,					// �{��
	YUI_A101IK2,				// �{��
	YUI_A101KG,					// ����
	YUI_A101KS,					// �L�X
	YUI_A101MJ,					// �^�ʖ�
	YUI_A101MU,					// ����
	YUI_A101NO,					// �ʏ�
	YUI_A101OD,					// ����
	YUI_A101OT,					// ��������
	YUI_A101SM,					// ���܂���
	YUI_A101UN,					// ���`��
	YUI_A101UT,					// �̂�
	YUI_A101UT2,				// �̂�
	YUI_A101UT3,				// �̂�

	// �t�@�~�[�������E�|�[�Y�Q
	YUI_A102BS,					// ����
	YUI_A102EG,					// �Ί�
	YUI_A102IN,					// �����̂�
	YUI_A102KG,					// �����񂻂�
	YUI_A102KN,					// �߂���
	YUI_A102KN_,				// �߂��݁i�ܖ����j
	YUI_A102KS,					// ���
	YUI_A102NO,					// �ʏ�
	YUI_A102NS,					// ��������
	YUI_A102OD,					// ����
	YUI_A102OD2,				// ����
	YUI_A102SN,					// �X�˂�1
	YUI_A102SN2,				// �X�˂�2
	YUI_A102SW,					// ���킻��

	// �L�����I�����E�|�[�Y�P
	YUI_A201AS,					// �ł�
	YUI_A201AW,					// ���z�΂�
	YUI_A201BS,					// ����
	YUI_A201EG,					// �Ί�
	YUI_A201GR,					// �O���b�L�[
	YUI_A201GR2,				// �O���b�L�[
	YUI_A201HA,					// �s��
	YUI_A201IK,					// �{��
	YUI_A201IK2,				// �{��
	YUI_A201KG,					// ����
	YUI_A201KS,					// �L�X
	YUI_A201MJ,					// �^�ʖ�
	YUI_A201MU,					// ����
	YUI_A201NO,					// �ʏ�
	YUI_A201OD,					// ����
	YUI_A201OT,					// ��������
	YUI_A201SM,					// ���܂���
	YUI_A201UN,					// ���`��
	YUI_A201UT,					// �̂�
	YUI_A201UT2,				// �̂�
	YUI_A201UT3,				// �̂�

	// �L�����I�����E�|�[�Y�Q
	YUI_A202BS,					// ����
	YUI_A202EG,					// �Ί�
	YUI_A202IN,					// �����̂�
	YUI_A202KG,					// �����񂻂�
	YUI_A202KN,					// �߂���
	YUI_A202KN_,				// �߂��݁i�ܖ����j
	YUI_A202KS,					// ���
	YUI_A202NO,					// �ʏ�
	YUI_A202NS,					// ��������
	YUI_A202OD,					// ����
	YUI_A202OD2,				// ����
	YUI_A202SN,					// �X�˂�1
	YUI_A202SN2,				// �X�˂�2
	YUI_A202SW,					// ���킻��

	// �����E�|�[�Y�P
	YUI_A301AS,					// �ł�
	YUI_A301AW,					// ���z�΂�
	YUI_A301BS,					// ����
	YUI_A301EG,					// �Ί�
	YUI_A301GR,					// �O���b�L�[
	YUI_A301GR2,				// �O���b�L�[
	YUI_A301HA,					// �s��
	YUI_A301IK,					// �{��
	YUI_A301IK2,				// �{��
	YUI_A301KG,					// ����
	YUI_A301KS,					// �L�X
	YUI_A301MJ,					// �^�ʖ�
	YUI_A301MU,					// ����
	YUI_A301NO,					// �ʏ�
	YUI_A301OD,					// ����
	YUI_A301OT,					// ��������
	YUI_A301SM,					// ���܂���
	YUI_A301UN,					// ���`��
	YUI_A301UT,					// �̂�
	YUI_A301UT2,				// �̂�
	YUI_A301UT3,				// �̂�

	// �����E�|�[�Y�Q
	YUI_A302BS,					// ����
	YUI_A302EG,					// �Ί�
	YUI_A302IN,					// �����̂�
	YUI_A302KG,					// �����񂻂�
	YUI_A302KN,					// �߂���
	YUI_A302KN_,				// �߂��݁i�ܖ����j
	YUI_A302KS,					// ���
	YUI_A302NO,					// �ʏ�
	YUI_A302NS,					// ��������
	YUI_A302OD,					// ����
	YUI_A302OD2,				// ����
	YUI_A302SN,					// �X�˂�1
	YUI_A302SN2,				// �X�˂�2
	YUI_A302SW,					// ���킻��

	// ���E�|�[�Y�P
	YUI_A401AS,					// �ł�
	YUI_A401AW,					// ���z�΂�
	YUI_A401BS,					// ����
	YUI_A401EG,					// �Ί�
	YUI_A401GR,					// �O���b�L�[
	YUI_A401GR2,				// �O���b�L�[
	YUI_A401HA,					// �s��
	YUI_A401IK,					// �{��
	YUI_A401IK2,				// �{��
	YUI_A401KG,					// ����
	YUI_A401KS,					// �L�X
	YUI_A401MJ,					// �^�ʖ�
	YUI_A401MU,					// ����
	YUI_A401NO,					// �ʏ�
	YUI_A401OD,					// ����
	YUI_A401OT,					// ��������
	YUI_A401SM,					// ���܂���
	YUI_A401UN,					// ���`��
	YUI_A401UT,					// �̂�
	YUI_A401UT2,				// �̂�
	YUI_A401UT3,				// �̂�

	//========================================================
	// �戤
	// �L�����I�����E�|�[�Y�P
	REA_0101AK,					// ����
	REA_0101IK,					// �{��
	REA_0101IK_,				// �{��i�قِ��߁j
	REA_0101IN,					// �����̂�
	REA_0101KM,					// ����
	REA_0101KM_,				// ����i�قِ��߁j
	REA_0101KN,					// �߂���
	REA_0101NO,					// �ʏ�
	REA_0101OD,					// ����
	REA_0101OD_,				// �����i�قِ��߁j
	REA_0101SN,					// �X�˂�
	REA_0101SN_,				// �X�˂�i�قِ��߁j

	// �L�����I�����E�|�[�Y�Q
	REA_0102AS,					// �ł�i�قِ��߁j
	REA_0102BS,					// ����
	REA_0102EG,					// �Ί�1
	REA_0102EG2,				// �Ί�2
	REA_0102EG3,				// �Ί�3
	REA_0102HT,					// �H
	REA_0102IK,					// �{��1
	REA_0102IK_,				// �{��1�i�قِ��߁j
	REA_0102IK2,				// �{��2
	REA_0102IK2_,				// �{��2�i�قِ��߁j
	REA_0102IK3,				// �{��3
	REA_0102IK3_,				// �{��3�i�قِ��߁j
	REA_0102KM,					// ����
	REA_0102KM_,				// ����i�قِ��߁j
	REA_0102KN,					// �߂���
	REA_0102MJ,					// �^�ʖ�
	REA_0102MS,					// �ނ���i�قِ��߁j
	REA_0102NK,					// �����i�قِ��߁j
	REA_0102NO,					// �ʏ�
	REA_0102NS,					// ��������
	REA_0102NY,					// �ɂ��
	REA_0102TN,					// �`��
	REA_0102TN_,				// �`��i�قِ��߁j
	REA_0102TR,					// �Ƃ�i�قِ��߁j

	// �t�@�~�[�������E�|�[�Y�P
	REA_0201AK,					// ����
	REA_0201IK,					// �{��
	REA_0201IK_,				// �{��i�قِ��߁j
	REA_0201IN,					// �����̂�
	REA_0201KM,					// ����
	REA_0201KM_,				// ����i�قِ��߁j
	REA_0201KN,					// �߂���
	REA_0201NO,					// �ʏ�
	REA_0201OD,					// ����
	REA_0201OD_,				// �����i�قِ��߁j
	REA_0201SN,					// �X�˂�
	REA_0201SN_,				// �X�˂�i�قِ��߁j

	// �t�@�~�[�������E�|�[�Y�Q
	REA_0202AS,					// �ł�i�قِ��߁j
	REA_0202BS,					// ����
	REA_0202EG,					// �Ί�1
	REA_0202EG2,				// �Ί�2
	REA_0202EG3,				// �Ί�3
	REA_0202HT,					// �H
	REA_0202IK,					// �{��1
	REA_0202IK_,				// �{��1�i�قِ��߁j
	REA_0202IK2,				// �{��2
	REA_0202IK2_,				// �{��2�i�قِ��߁j
	REA_0202IK3,				// �{��3
	REA_0202IK3_,				// �{��3�i�قِ��߁j
	REA_0202KM,					// ����
	REA_0202KM_,				// ����i�قِ��߁j
	REA_0202KN,					// �߂���
	REA_0202MJ,					// �^�ʖ�
	REA_0202MS,					// �ނ���i�قِ��߁j
	REA_0202NK,					// �����i�قِ��߁j
	REA_0202NO,					// �ʏ�
	REA_0202NS,					// ��������
	REA_0202NY,					// �ɂ��
	REA_0202TN,					// �`��
	REA_0202TN_,				// �`��i�قِ��߁j
	REA_0202TR,					// �Ƃ�i�قِ��߁j

	// �����E�|�[�Y�P
	REA_0301AK,					// ����
	REA_0301IK,					// �{��
	REA_0301IK_,				// �{��i�قِ��߁j
	REA_0301IN,					// �����̂�
	REA_0301KM,					// ����
	REA_0301KM_,				// ����i�قِ��߁j
	REA_0301KN,					// �߂���
	REA_0301NO,					// �ʏ�
	REA_0301OD,					// ����
	REA_0301OD_,				// �����i�قِ��߁j
	REA_0301SN,					// �X�˂�
	REA_0301SN_,				// �X�˂�i�قِ��߁j

	// �����E�|�[�Y�Q
	REA_0302AS,					// �ł�i�قِ��߁j
	REA_0302BS,					// ����
	REA_0302EG,					// �Ί�1
	REA_0302EG2,				// �Ί�2
	REA_0302EG3,				// �Ί�3
	REA_0302HT,					// �H
	REA_0302IK,					// �{��1
	REA_0302IK_,				// �{��1�i�قِ��߁j
	REA_0302IK2,				// �{��2
	REA_0302IK2_,				// �{��2�i�قِ��߁j
	REA_0302IK3,				// �{��3
	REA_0302IK3_,				// �{��3�i�قِ��߁j
	REA_0302KM,					// ����
	REA_0302KM_,				// ����i�قِ��߁j
	REA_0302KN,					// �߂���
	REA_0302MJ,					// �^�ʖ�
	REA_0302MS,					// �ނ���i�قِ��߁j
	REA_0302NK,					// �����i�قِ��߁j
	REA_0302NO,					// �ʏ�
	REA_0302NS,					// ��������
	REA_0302NY,					// �ɂ��
	REA_0302TN,					// �`��
	REA_0302TN_,				// �`��i�قِ��߁j
	REA_0302TR,					// �Ƃ�i�قِ��߁j

	// �����i�㒅�j�E�|�[�Y�P
	REA_0401AK,					// ����
	REA_0401IK,					// �{��
	REA_0401IK_,				// �{��i�قِ��߁j
	REA_0401IN,					// �����̂�
	REA_0401KM,					// ����
	REA_0401KM_,				// ����i�قِ��߁j
	REA_0401KN,					// �߂���
	REA_0401NO,					// �ʏ�
	REA_0401OD,					// ����
	REA_0401OD_,				// �����i�قِ��߁j
	REA_0401SN,					// �X�˂�
	REA_0401SN_,				// �X�˂�i�قِ��߁j

	// �����i�㒅�j�E�|�[�Y�Q
	REA_0402AS,					// �ł�i�قِ��߁j
	REA_0402BS,					// ����
	REA_0402EG,					// �Ί�1
	REA_0402EG2,				// �Ί�2
	REA_0402EG3,				// �Ί�3
	REA_0402HT,					// �H
	REA_0402IK,					// �{��1
	REA_0402IK_,				// �{��1�i�قِ��߁j
	REA_0402IK2,				// �{��2
	REA_0402IK2_,				// �{��2�i�قِ��߁j
	REA_0402IK3,				// �{��3
	REA_0402IK3_,				// �{��3�i�قِ��߁j
	REA_0402KM,					// ����
	REA_0402KM_,				// ����i�قِ��߁j
	REA_0402KN,					// �߂���
	REA_0402MJ,					// �^�ʖ�
	REA_0402MS,					// �ނ���i�قِ��߁j
	REA_0402NK,					// �����i�قِ��߁j
	REA_0402NO,					// �ʏ�
	REA_0402NS,					// ��������
	REA_0402NY,					// �ɂ��
	REA_0402TN,					// �`��
	REA_0402TN_,				// �`��i�قِ��߁j
	REA_0402TR,					// �Ƃ�i�قِ��߁j

	//========================================================
	// �戤�i�o�X�g�A�b�v�j
	// �L�����I�����E�|�[�Y�P
	REA_A101AK,					// ����
	REA_A101IK,					// �{��
	REA_A101IK_,				// �{��i�قِ��߁j
	REA_A101IN,					// �����̂�
	REA_A101KM,					// ����
	REA_A101KM_,				// ����i�قِ��߁j
	REA_A101KN,					// �߂���
	REA_A101NO,					// �ʏ�
	REA_A101OD,					// ����
	REA_A101OD_,				// �����i�قِ��߁j
	REA_A101SN,					// �X�˂�
	REA_A101SN_,				// �X�˂�i�قِ��߁j

	// �L�����I�����E�|�[�Y�Q
	REA_A102AS,					// �ł�i�قِ��߁j
	REA_A102BS,					// ����
	REA_A102EG,					// �Ί�1
	REA_A102EG2,				// �Ί�2
	REA_A102EG3,				// �Ί�3
	REA_A102HT,					// �H
	REA_A102IK,					// �{��1
	REA_A102IK_,				// �{��1�i�قِ��߁j
	REA_A102IK2,				// �{��2
	REA_A102IK2_,				// �{��2�i�قِ��߁j
	REA_A102IK3,				// �{��3
	REA_A102IK3_,				// �{��3�i�قِ��߁j
	REA_A102KM,					// ����
	REA_A102KM_,				// ����i�قِ��߁j
	REA_A102KN,					// �߂���
	REA_A102MJ,					// �^�ʖ�
	REA_A102MS,					// �ނ���i�قِ��߁j
	REA_A102NK,					// �����i�قِ��߁j
	REA_A102NO,					// �ʏ�
	REA_A102NS,					// ��������
	REA_A102NY,					// �ɂ��
	REA_A102TN,					// �`��
	REA_A102TN_,				// �`��i�قِ��߁j
	REA_A102TR,					// �Ƃ�i�قِ��߁j

	// �t�@�~�[�������E�|�[�Y�P
	REA_A201AK,					// ����
	REA_A201IK,					// �{��
	REA_A201IK_,				// �{��i�قِ��߁j
	REA_A201IN,					// �����̂�
	REA_A201KM,					// ����
	REA_A201KM_,				// ����i�قِ��߁j
	REA_A201KN,					// �߂���
	REA_A201NO,					// �ʏ�
	REA_A201OD,					// ����
	REA_A201OD_,				// �����i�قِ��߁j
	REA_A201SN,					// �X�˂�
	REA_A201SN_,				// �X�˂�i�قِ��߁j

	// �t�@�~�[�������E�|�[�Y�Q
	REA_A202AS,					// �ł�i�قِ��߁j
	REA_A202BS,					// ����
	REA_A202EG,					// �Ί�1
	REA_A202EG2,				// �Ί�2
	REA_A202EG3,				// �Ί�3
	REA_A202HT,					// �H
	REA_A202IK,					// �{��1
	REA_A202IK_,				// �{��1�i�قِ��߁j
	REA_A202IK2,				// �{��2
	REA_A202IK2_,				// �{��2�i�قِ��߁j
	REA_A202IK3,				// �{��3
	REA_A202IK3_,				// �{��3�i�قِ��߁j
	REA_A202KM,					// ����
	REA_A202KM_,				// ����i�قِ��߁j
	REA_A202KN,					// �߂���
	REA_A202MJ,					// �^�ʖ�
	REA_A202MS,					// �ނ���i�قِ��߁j
	REA_A202NK,					// �����i�قِ��߁j
	REA_A202NO,					// �ʏ�
	REA_A202NS,					// ��������
	REA_A202NY,					// �ɂ��
	REA_A202TN,					// �`��
	REA_A202TN_,				// �`��i�قِ��߁j
	REA_A202TR,					// �Ƃ�i�قِ��߁j

	// �����E�|�[�Y�P
	REA_A301AK,					// ����
	REA_A301IK,					// �{��
	REA_A301IK_,				// �{��i�قِ��߁j
	REA_A301IN,					// �����̂�
	REA_A301KM,					// ����
	REA_A301KM_,				// ����i�قِ��߁j
	REA_A301KN,					// �߂���
	REA_A301NO,					// �ʏ�
	REA_A301OD,					// ����
	REA_A301OD_,				// �����i�قِ��߁j
	REA_A301SN,					// �X�˂�
	REA_A301SN_,				// �X�˂�i�قِ��߁j

	// �����E�|�[�Y�Q
	REA_A302AS,					// �ł�i�قِ��߁j
	REA_A302BS,					// ����
	REA_A302EG,					// �Ί�1
	REA_A302EG2,				// �Ί�2
	REA_A302EG3,				// �Ί�3
	REA_A302HT,					// �H
	REA_A302IK,					// �{��1
	REA_A302IK_,				// �{��1�i�قِ��߁j
	REA_A302IK2,				// �{��2
	REA_A302IK2_,				// �{��2�i�قِ��߁j
	REA_A302IK3,				// �{��3
	REA_A302IK3_,				// �{��3�i�قِ��߁j
	REA_A302KM,					// ����
	REA_A302KM_,				// ����i�قِ��߁j
	REA_A302KN,					// �߂���
	REA_A302MJ,					// �^�ʖ�
	REA_A302MS,					// �ނ���i�قِ��߁j
	REA_A302NK,					// �����i�قِ��߁j
	REA_A302NO,					// �ʏ�
	REA_A302NS,					// ��������
	REA_A302NY,					// �ɂ��
	REA_A302TN,					// �`��
	REA_A302TN_,				// �`��i�قِ��߁j
	REA_A302TR,					// �Ƃ�i�قِ��߁j

	// �����i�㒅�j�E�|�[�Y�P
	REA_A401AK,					// ����
	REA_A401IK,					// �{��
	REA_A401IK_,				// �{��i�قِ��߁j
	REA_A401IN,					// �����̂�
	REA_A401KM,					// ����
	REA_A401KM_,				// ����i�قِ��߁j
	REA_A401KN,					// �߂���
	REA_A401NO,					// �ʏ�
	REA_A401OD,					// ����
	REA_A401OD_,				// �����i�قِ��߁j
	REA_A401SN,					// �X�˂�
	REA_A401SN_,				// �X�˂�i�قِ��߁j

	// �����i�㒅�j�E�|�[�Y�Q
	REA_A402AS,					// �ł�i�قِ��߁j
	REA_A402BS,					// ����
	REA_A402EG,					// �Ί�1
	REA_A402EG2,				// �Ί�2
	REA_A402EG3,				// �Ί�3
	REA_A402HT,					// �H
	REA_A402IK,					// �{��1
	REA_A402IK_,				// �{��1�i�قِ��߁j
	REA_A402IK2,				// �{��2
	REA_A402IK2_,				// �{��2�i�قِ��߁j
	REA_A402IK3,				// �{��3
	REA_A402IK3_,				// �{��3�i�قِ��߁j
	REA_A402KM,					// ����
	REA_A402KM_,				// ����i�قِ��߁j
	REA_A402KN,					// �߂���
	REA_A402MJ,					// �^�ʖ�
	REA_A402MS,					// �ނ���i�قِ��߁j
	REA_A402NK,					// �����i�قِ��߁j
	REA_A402NO,					// �ʏ�
	REA_A402NS,					// ��������
	REA_A402NY,					// �ɂ��
	REA_A402TN,					// �`��
	REA_A402TN_,				// �`��i�قِ��߁j
	REA_A402TR,					// �Ƃ�i�قِ��߁j

	//========================================================
	// ������
	// �t�@�~�[�������E�|�[�Y�P
	ASUKA_0101AS,				// �ł�
	ASUKA_0101BS,				// ����
	ASUKA_0101EG,				// �Ί�
	ASUKA_0101EG2,				// �Ί�
	ASUKA_0101EG3,				// �Ί�
	ASUKA_0101IK,				// �{��
	ASUKA_0101IT,				// �C�^�C
	ASUKA_0101KN,				// �߂���
	ASUKA_0101KN_,				// �߂��݁i�ܖ����j
	ASUKA_0101MJ,				// �^�ʖ�
	ASUKA_0101NK,				// ����
	ASUKA_0101NO,				// �ʏ�
	ASUKA_0101NS,				// ��������
	ASUKA_0101NS2,				// ��������
	ASUKA_0101ON,				// ���˂���
	ASUKA_0101ON2,				// ���˂���
	ASUKA_0101OT,				// ��������
	ASUKA_0101TR,				// �Ƃ�
	ASUKA_0101TR2,				// �Ƃ�

	// �t�@�~�[�������E�|�[�Y�Q
	ASUKA_0102AK,				// ����
	ASUKA_0102EG,				// �Ί�
	ASUKA_0102IK,				// �{��
	ASUKA_0102IK2,				// �{��
	ASUKA_0102KM,				// ����
	ASUKA_0102KS,				// ���
	ASUKA_0102NK,				// ����
	ASUKA_0102NM,				// ����
	ASUKA_0102NO,				// �ʏ�
	ASUKA_0102NR,				// �ɂ�
	ASUKA_0102NR2,				// �ɂ�
	ASUKA_0102OD,				// ����
	ASUKA_0102OT,				// ��������
	ASUKA_0102TN,				// �`��
	ASUKA_0102TR,				// �Ƃ�
	ASUKA_0102TR2,				// �Ƃ�
	ASUKA_0102UN,				// ���`��
	ASUKA_0102UN2,				// ���`��
	ASUKA_0102YW,				// �U�f

	// �w�����E�|�[�Y�P
	ASUKA_0201AS,				// �ł�
	ASUKA_0201BS,				// ����
	ASUKA_0201EG,				// �Ί�
	ASUKA_0201EG2,				// �Ί�
	ASUKA_0201EG3,				// �Ί�
	ASUKA_0201IK,				// �{��
	ASUKA_0201IT,				// �C�^�C
	ASUKA_0201KN,				// �߂���
	ASUKA_0201KN_,				// �߂��݁i�ܖ����j
	ASUKA_0201MJ,				// �^�ʖ�
	ASUKA_0201NK,				// ����
	ASUKA_0201NO,				// �ʏ�
	ASUKA_0201NS,				// ��������
	ASUKA_0201NS2,				// ��������
	ASUKA_0201ON,				// ���˂���
	ASUKA_0201ON2,				// ���˂���
	ASUKA_0201OT,				// ��������
	ASUKA_0201TR,				// �Ƃ�
	ASUKA_0201TR2,				// �Ƃ�

	// �w�����E�|�[�Y�Q
	ASUKA_0202AK,				// ����
	ASUKA_0202EG,				// �Ί�
	ASUKA_0202IK,				// �{��
	ASUKA_0202IK2,				// �{��
	ASUKA_0202KM,				// ����
	ASUKA_0202KS,				// ���
	ASUKA_0202NK,				// ����
	ASUKA_0202NM,				// ����
	ASUKA_0202NO,				// �ʏ�
	ASUKA_0202NR,				// �ɂ�
	ASUKA_0202NR2,				// �ɂ�
	ASUKA_0202OD,				// ����
	ASUKA_0202OT,				// ��������
	ASUKA_0202TN,				// �`��
	ASUKA_0202TR,				// �Ƃ�
	ASUKA_0202TR2,				// �Ƃ�
	ASUKA_0202UN,				// ���`��
	ASUKA_0202UN2,				// ���`��
	ASUKA_0202YW,				// �U�f

	// �w�����i�R�[�g�j�E�|�[�Y�P
	ASUKA_0301AS,				// �ł�
	ASUKA_0301BS,				// ����
	ASUKA_0301EG,				// �Ί�
	ASUKA_0301EG2,				// �Ί�
	ASUKA_0301EG3,				// �Ί�
	ASUKA_0301IK,				// �{��
	ASUKA_0301IT,				// �C�^�C
	ASUKA_0301KN,				// �߂���
	ASUKA_0301KN_,				// �߂��݁i�ܖ����j
	ASUKA_0301MJ,				// �^�ʖ�
	ASUKA_0301NK,				// ����
	ASUKA_0301NO,				// �ʏ�
	ASUKA_0301NS,				// ��������
	ASUKA_0301NS2,				// ��������
	ASUKA_0301ON,				// ���˂���
	ASUKA_0301ON2,				// ���˂���
	ASUKA_0301OT,				// ��������
	ASUKA_0301TR,				// �Ƃ�
	ASUKA_0301TR2,				// �Ƃ�

	// �w�����i�R�[�g�j�E�|�[�Y�Q
	ASUKA_0302AK,				// ����
	ASUKA_0302EG,				// �Ί�
	ASUKA_0302IK,				// �{��
	ASUKA_0302IK2,				// �{��
	ASUKA_0302KM,				// ����
	ASUKA_0302KS,				// ���
	ASUKA_0302NK,				// ����
	ASUKA_0302NM,				// ����
	ASUKA_0302NO,				// �ʏ�
	ASUKA_0302NR,				// �ɂ�
	ASUKA_0302NR2,				// �ɂ�
	ASUKA_0302OD,				// ����
	ASUKA_0302OT,				// ��������
	ASUKA_0302TN,				// �`��
	ASUKA_0302TR,				// �Ƃ�
	ASUKA_0302TR2,				// �Ƃ�
	ASUKA_0302UN,				// ���`��
	ASUKA_0302UN2,				// ���`��
	ASUKA_0302YW,				// �U�f

	// �����E�|�[�Y�P
	ASUKA_0401AS,				// �ł�
	ASUKA_0401BS,				// ����
	ASUKA_0401EG,				// �Ί�
	ASUKA_0401EG2,				// �Ί�
	ASUKA_0401EG3,				// �Ί�
	ASUKA_0401IK,				// �{��
	ASUKA_0401IT,				// �C�^�C
	ASUKA_0401KN,				// �߂���
	ASUKA_0401KN_,				// �߂��݁i�ܖ����j
	ASUKA_0401MJ,				// �^�ʖ�
	ASUKA_0401NK,				// ����
	ASUKA_0401NO,				// �ʏ�
	ASUKA_0401NS,				// ��������
	ASUKA_0401NS2,				// ��������
	ASUKA_0401ON,				// ���˂���
	ASUKA_0401ON2,				// ���˂���
	ASUKA_0401OT,				// ��������
	ASUKA_0401TR,				// �Ƃ�
	ASUKA_0401TR2,				// �Ƃ�

	// �����E�|�[�Y�Q
	ASUKA_0402AK,				// ����
	ASUKA_0402EG,				// �Ί�
	ASUKA_0402IK,				// �{��
	ASUKA_0402IK2,				// �{��
	ASUKA_0402KM,				// ����
	ASUKA_0402KS,				// ���
	ASUKA_0402NK,				// ����
	ASUKA_0402NM,				// ����
	ASUKA_0402NO,				// �ʏ�
	ASUKA_0402NR,				// �ɂ�
	ASUKA_0402NR2,				// �ɂ�
	ASUKA_0402OD,				// ����
	ASUKA_0402OT,				// ��������
	ASUKA_0402TN,				// �`��
	ASUKA_0402TR,				// �Ƃ�
	ASUKA_0402TR2,				// �Ƃ�
	ASUKA_0402UN,				// ���`��
	ASUKA_0402UN2,				// ���`��
	ASUKA_0402YW,				// �U�f

	//========================================================
	// �������i�o�X�g�A�b�v�j
	// �t�@�~�[�������E�|�[�Y�P
	ASUKA_A101AS,				// �ł�
	ASUKA_A101BS,				// ����
	ASUKA_A101EG,				// �Ί�
	ASUKA_A101EG2,				// �Ί�
	ASUKA_A101EG3,				// �Ί�
	ASUKA_A101IK,				// �{��
	ASUKA_A101IT,				// �C�^�C
	ASUKA_A101KN,				// �߂���
	ASUKA_A101KN_,				// �߂��݁i�ܖ����j
	ASUKA_A101MJ,				// �^�ʖ�
	ASUKA_A101NK,				// ����
	ASUKA_A101NO,				// �ʏ�
	ASUKA_A101NS,				// ��������
	ASUKA_A101NS2,				// ��������
	ASUKA_A101ON,				// ���˂���
	ASUKA_A101ON2,				// ���˂���
	ASUKA_A101OT,				// ��������
	ASUKA_A101TR,				// �Ƃ�
	ASUKA_A101TR2,				// �Ƃ�

	// �t�@�~�[�������E�|�[�Y�Q
	ASUKA_A102AK,				// ����
	ASUKA_A102EG,				// �Ί�
	ASUKA_A102IK,				// �{��
	ASUKA_A102IK2,				// �{��
	ASUKA_A102KM,				// ����
	ASUKA_A102KS,				// ���
	ASUKA_A102NK,				// ����
	ASUKA_A102NM,				// ����
	ASUKA_A102NO,				// �ʏ�
	ASUKA_A102NR,				// �ɂ�
	ASUKA_A102NR2,				// �ɂ�
	ASUKA_A102OD,				// ����
	ASUKA_A102OT,				// ��������
	ASUKA_A102TN,				// �`��
	ASUKA_A102TR,				// �Ƃ�
	ASUKA_A102TR2,				// �Ƃ�
	ASUKA_A102UN,				// ���`��
	ASUKA_A102UN2,				// ���`��
	ASUKA_A102YW,				// �U�f

	// �w�����E�|�[�Y�P
	ASUKA_A201AS,				// �ł�
	ASUKA_A201BS,				// ����
	ASUKA_A201EG,				// �Ί�
	ASUKA_A201EG2,				// �Ί�
	ASUKA_A201EG3,				// �Ί�
	ASUKA_A201IK,				// �{��
	ASUKA_A201IT,				// �C�^�C
	ASUKA_A201KN,				// �߂���
	ASUKA_A201KN_,				// �߂��݁i�ܖ����j
	ASUKA_A201MJ,				// �^�ʖ�
	ASUKA_A201NK,				// ����
	ASUKA_A201NO,				// �ʏ�
	ASUKA_A201NS,				// ��������
	ASUKA_A201NS2,				// ��������
	ASUKA_A201ON,				// ���˂���
	ASUKA_A201ON2,				// ���˂���
	ASUKA_A201OT,				// ��������
	ASUKA_A201TR,				// �Ƃ�
	ASUKA_A201TR2,				// �Ƃ�

	// �w�����E�|�[�Y�Q
	ASUKA_A202AK,				// ����
	ASUKA_A202EG,				// �Ί�
	ASUKA_A202IK,				// �{��
	ASUKA_A202IK2,				// �{��
	ASUKA_A202KM,				// ����
	ASUKA_A202KS,				// ���
	ASUKA_A202NK,				// ����
	ASUKA_A202NM,				// ����
	ASUKA_A202NO,				// �ʏ�
	ASUKA_A202NR,				// �ɂ�
	ASUKA_A202NR2,				// �ɂ�
	ASUKA_A202OD,				// ����
	ASUKA_A202OT,				// ��������
	ASUKA_A202TN,				// �`��
	ASUKA_A202TR,				// �Ƃ�
	ASUKA_A202TR2,				// �Ƃ�
	ASUKA_A202UN,				// ���`��
	ASUKA_A202UN2,				// ���`��
	ASUKA_A202YW,				// �U�f

	// �w�����i�R�[�g�j�E�|�[�Y�P
	ASUKA_A301AS,				// �ł�
	ASUKA_A301BS,				// ����
	ASUKA_A301EG,				// �Ί�
	ASUKA_A301EG2,				// �Ί�
	ASUKA_A301EG3,				// �Ί�
	ASUKA_A301IK,				// �{��
	ASUKA_A301IT,				// �C�^�C
	ASUKA_A301KN,				// �߂���
	ASUKA_A301KN_,				// �߂��݁i�ܖ����j
	ASUKA_A301MJ,				// �^�ʖ�
	ASUKA_A301NK,				// ����
	ASUKA_A301NO,				// �ʏ�
	ASUKA_A301NS,				// ��������
	ASUKA_A301NS2,				// ��������
	ASUKA_A301ON,				// ���˂���
	ASUKA_A301ON2,				// ���˂���
	ASUKA_A301OT,				// ��������
	ASUKA_A301TR,				// �Ƃ�
	ASUKA_A301TR2,				// �Ƃ�

	// �w�����i�R�[�g�j�E�|�[�Y�Q
	ASUKA_A302AK,				// ����
	ASUKA_A302EG,				// �Ί�
	ASUKA_A302IK,				// �{��
	ASUKA_A302IK2,				// �{��
	ASUKA_A302KM,				// ����
	ASUKA_A302KS,				// ���
	ASUKA_A302NK,				// ����
	ASUKA_A302NM,				// ����
	ASUKA_A302NO,				// �ʏ�
	ASUKA_A302NR,				// �ɂ�
	ASUKA_A302NR2,				// �ɂ�
	ASUKA_A302OD,				// ����
	ASUKA_A302OT,				// ��������
	ASUKA_A302TN,				// �`��
	ASUKA_A302TR,				// �Ƃ�
	ASUKA_A302TR2,				// �Ƃ�
	ASUKA_A302UN,				// ���`��
	ASUKA_A302UN2,				// ���`��
	ASUKA_A302YW,				// �U�f

	// �����E�|�[�Y�P
	ASUKA_A401AS,				// �ł�
	ASUKA_A401BS,				// ����
	ASUKA_A401EG,				// �Ί�
	ASUKA_A401EG2,				// �Ί�
	ASUKA_A401EG3,				// �Ί�
	ASUKA_A401IK,				// �{��
	ASUKA_A401IT,				// �C�^�C
	ASUKA_A401KN,				// �߂���
	ASUKA_A401KN_,				// �߂��݁i�ܖ����j
	ASUKA_A401MJ,				// �^�ʖ�
	ASUKA_A401NK,				// ����
	ASUKA_A401NO,				// �ʏ�
	ASUKA_A401NS,				// ��������
	ASUKA_A401NS2,				// ��������
	ASUKA_A401ON,				// ���˂���
	ASUKA_A401ON2,				// ���˂���
	ASUKA_A401OT,				// ��������
	ASUKA_A401TR,				// �Ƃ�
	ASUKA_A401TR2,				// �Ƃ�

	// �����E�|�[�Y�Q
	ASUKA_A402AK,				// ����
	ASUKA_A402EG,				// �Ί�
	ASUKA_A402IK,				// �{��
	ASUKA_A402IK2,				// �{��
	ASUKA_A402KM,				// ����
	ASUKA_A402KS,				// ���
	ASUKA_A402NK,				// ����
	ASUKA_A402NM,				// ����
	ASUKA_A402NO,				// �ʏ�
	ASUKA_A402NR,				// �ɂ�
	ASUKA_A402NR2,				// �ɂ�
	ASUKA_A402OD,				// ����
	ASUKA_A402OT,				// ��������
	ASUKA_A402TN,				// �`��
	ASUKA_A402TR,				// �Ƃ�
	ASUKA_A402TR2,				// �Ƃ�
	ASUKA_A402UN,				// ���`��
	ASUKA_A402UN2,				// ���`��
	ASUKA_A402YW,				// �U�f

	//========================================================
	// ������
	// �t�@�~�[�������E�|�[�Y�P
	KASURI_0101AK,				// ����
	KASURI_0101IK,				// �{��
	KASURI_0101KN,				// �߂���
	KASURI_0101KN2,				// �߂���
	KASURI_0101KN3,				// �߂���
	KASURI_0101KS,				// ���
	KASURI_0101KT,				// ����Ƃ�
	KASURI_0101MJ,				// �^�ʖ�
	KASURI_0101MJ2,				// �^�ʖ�
	KASURI_0101NO,				// �ʏ�
	KASURI_0101OP,				// ��
	KASURI_0101OT,				// ��������
	KASURI_0101SK,				// ����
	KASURI_0101UT,				// ��������
	KASURI_0101WK,				// �킭�킭

	// �t�@�~�[�������E�|�[�Y�Q
	KASURI_0102AS,				// �ł�
	KASURI_0102AS2,				// �ł�i���قفj
	KASURI_0102BS,				// ����
	KASURI_0102EG,				// �Ί�i���͂́j
	KASURI_0102EG2,				// �Ί�i��͂́j
	KASURI_0102NO,				// �ʏ�
	KASURI_0102NY,				// �ɂ��
	KASURI_0102OD,				// ����
	KASURI_0102TK,				// ���ӂ�
	KASURI_0102TR,				// �Ƃ�
	KASURI_0102TS,				// �Ƃꋩ��
	KASURI_0102TY,				// ����
	KASURI_0102UN,				// ���`��

	// �p�e�B�V�G���E�|�[�Y�P
	KASURI_0201AK,				// ����
	KASURI_0201IK,				// �{��
	KASURI_0201KN,				// �߂���
	KASURI_0201KN2,				// �߂���
	KASURI_0201KN3,				// �߂���
	KASURI_0201KS,				// ���
	KASURI_0201KT,				// ����Ƃ�
	KASURI_0201MJ,				// �^�ʖ�
	KASURI_0201MJ2,				// �^�ʖ�
	KASURI_0201NO,				// �ʏ�
	KASURI_0201OP,				// ��
	KASURI_0201OT,				// ��������
	KASURI_0201SK,				// ����
	KASURI_0201UT,				// ��������
	KASURI_0201WK,				// �킭�킭

	// �p�e�B�V�G���E�|�[�Y�Q
	KASURI_0202AS,				// �ł�
	KASURI_0202AS2,				// �ł�i���قفj
	KASURI_0202BS,				// ����
	KASURI_0202EG,				// �Ί�i���͂́j
	KASURI_0202EG2,				// �Ί�i��͂́j
	KASURI_0202NO,				// �ʏ�
	KASURI_0202NY,				// �ɂ��
	KASURI_0202OD,				// ����
	KASURI_0202TK,				// ���ӂ�
	KASURI_0202TR,				// �Ƃ�
	KASURI_0202TS,				// �Ƃꋩ��
	KASURI_0202TY,				// ����
	KASURI_0202UN,				// ���`��

	// �L�����I�p�e�B�V�G���E�|�[�Y�P
	KASURI_0301AK,				// ����
	KASURI_0301IK,				// �{��
	KASURI_0301KN,				// �߂���
	KASURI_0301KN2,				// �߂���
	KASURI_0301KN3,				// �߂���
	KASURI_0301KS,				// ���
	KASURI_0301KT,				// ����Ƃ�
	KASURI_0301MJ,				// �^�ʖ�
	KASURI_0301MJ2,				// �^�ʖ�
	KASURI_0301NO,				// �ʏ�
	KASURI_0301OP,				// ��
	KASURI_0301OT,				// ��������
	KASURI_0301SK,				// ����
	KASURI_0301UT,				// ��������
	KASURI_0301WK,				// �킭�킭

	// �L�����I�p�e�B�V�G���E�|�[�Y�Q
	KASURI_0302AS,				// �ł�
	KASURI_0302AS2,				// �ł�i���قفj
	KASURI_0302BS,				// ����
	KASURI_0302EG,				// �Ί�i���͂́j
	KASURI_0302EG2,				// �Ί�i��͂́j
	KASURI_0302NO,				// �ʏ�
	KASURI_0302NY,				// �ɂ��
	KASURI_0302OD,				// ����
	KASURI_0302TK,				// ���ӂ�
	KASURI_0302TR,				// �Ƃ�
	KASURI_0302TS,				// �Ƃꋩ��
	KASURI_0302TY,				// ����
	KASURI_0302UN,				// ���`��

	// �����E�|�[�Y�P
	KASURI_0401AK,				// ����
	KASURI_0401IK,				// �{��
	KASURI_0401KN,				// �߂���
	KASURI_0401KN2,				// �߂���
	KASURI_0401KN3,				// �߂���
	KASURI_0401KS,				// ���
	KASURI_0401KT,				// ����Ƃ�
	KASURI_0401MJ,				// �^�ʖ�
	KASURI_0401MJ2,				// �^�ʖ�
	KASURI_0401NO,				// �ʏ�
	KASURI_0401OP,				// ��
	KASURI_0401OT,				// ��������
	KASURI_0401SK,				// ����
	KASURI_0401UT,				// ��������
	KASURI_0401WK,				// �킭�킭

	// �����E�|�[�Y�Q
	KASURI_0402AS,				// �ł�
	KASURI_0402AS2,				// �ł�i���قفj
	KASURI_0402BS,				// ����
	KASURI_0402EG,				// �Ί�i���͂́j
	KASURI_0402EG2,				// �Ί�i��͂́j
	KASURI_0402NO,				// �ʏ�
	KASURI_0402NY,				// �ɂ��
	KASURI_0402OD,				// ����
	KASURI_0402TK,				// ���ӂ�
	KASURI_0402TR,				// �Ƃ�
	KASURI_0402TS,				// �Ƃꋩ��
	KASURI_0402TY,				// ����
	KASURI_0402UN,				// ���`��

	//========================================================
	// ������i�o�X�g�A�b�v�j
	// �t�@�~�[�������E�|�[�Y�P
	KASURI_A101AK,				// ����
	KASURI_A101IK,				// �{��
	KASURI_A101KN,				// �߂���
	KASURI_A101KN2,				// �߂���
	KASURI_A101KN3,				// �߂���
	KASURI_A101KS,				// ���
	KASURI_A101KT,				// ����Ƃ�
	KASURI_A101MJ,				// �^�ʖ�
	KASURI_A101MJ2,				// �^�ʖ�
	KASURI_A101NO,				// �ʏ�
	KASURI_A101OP,				// ��
	KASURI_A101OT,				// ��������
	KASURI_A101SK,				// ����
	KASURI_A101UT,				// ��������
	KASURI_A101WK,				// �킭�킭

	// �t�@�~�[�������E�|�[�Y�Q
	KASURI_A102AS,				// �ł�
	KASURI_A102AS2,				// �ł�i���قفj
	KASURI_A102BS,				// ����
	KASURI_A102EG,				// �Ί�i���͂́j
	KASURI_A102EG2,				// �Ί�i��͂́j
	KASURI_A102NO,				// �ʏ�
	KASURI_A102NY,				// �ɂ��
	KASURI_A102OD,				// ����
	KASURI_A102TK,				// ���ӂ�
	KASURI_A102TR,				// �Ƃ�
	KASURI_A102TS,				// �Ƃꋩ��
	KASURI_A102TY,				// ����
	KASURI_A102UN,				// ���`��

	// �p�e�B�V�G���E�|�[�Y�P
	KASURI_A201AK,				// ����
	KASURI_A201IK,				// �{��
	KASURI_A201KN,				// �߂���
	KASURI_A201KN2,				// �߂���
	KASURI_A201KN3,				// �߂���
	KASURI_A201KS,				// ���
	KASURI_A201KT,				// ����Ƃ�
	KASURI_A201MJ,				// �^�ʖ�
	KASURI_A201MJ2,				// �^�ʖ�
	KASURI_A201NO,				// �ʏ�
	KASURI_A201OP,				// ��
	KASURI_A201OT,				// ��������
	KASURI_A201SK,				// ����
	KASURI_A201UT,				// ��������
	KASURI_A201WK,				// �킭�킭

	// �p�e�B�V�G���E�|�[�Y�Q
	KASURI_A202AS,				// �ł�
	KASURI_A202AS2,				// �ł�i���قفj
	KASURI_A202BS,				// ����
	KASURI_A202EG,				// �Ί�i���͂́j
	KASURI_A202EG2,				// �Ί�i��͂́j
	KASURI_A202NO,				// �ʏ�
	KASURI_A202NY,				// �ɂ��
	KASURI_A202OD,				// ����
	KASURI_A202TK,				// ���ӂ�
	KASURI_A202TR,				// �Ƃ�
	KASURI_A202TS,				// �Ƃꋩ��
	KASURI_A202TY,				// ����
	KASURI_A202UN,				// ���`��

	// �L�����I�p�e�B�V�G���E�|�[�Y�P
	KASURI_A301AK,				// ����
	KASURI_A301IK,				// �{��
	KASURI_A301KN,				// �߂���
	KASURI_A301KN2,				// �߂���
	KASURI_A301KN3,				// �߂���
	KASURI_A301KS,				// ���
	KASURI_A301KT,				// ����Ƃ�
	KASURI_A301MJ,				// �^�ʖ�
	KASURI_A301MJ2,				// �^�ʖ�
	KASURI_A301NO,				// �ʏ�
	KASURI_A301OP,				// ��
	KASURI_A301OT,				// ��������
	KASURI_A301SK,				// ����
	KASURI_A301UT,				// ��������
	KASURI_A301WK,				// �킭�킭

	// �L�����I�p�e�B�V�G���E�|�[�Y�Q
	KASURI_A302AS,				// �ł�
	KASURI_A302AS2,				// �ł�i���قفj
	KASURI_A302BS,				// ����
	KASURI_A302EG,				// �Ί�i���͂́j
	KASURI_A302EG2,				// �Ί�i��͂́j
	KASURI_A302NO,				// �ʏ�
	KASURI_A302NY,				// �ɂ��
	KASURI_A302OD,				// ����
	KASURI_A302TK,				// ���ӂ�
	KASURI_A302TR,				// �Ƃ�
	KASURI_A302TS,				// �Ƃꋩ��
	KASURI_A302TY,				// ����
	KASURI_A302UN,				// ���`��

	// �����E�|�[�Y�P
	KASURI_A401AK,				// ����
	KASURI_A401IK,				// �{��
	KASURI_A401KN,				// �߂���
	KASURI_A401KN2,				// �߂���
	KASURI_A401KN3,				// �߂���
	KASURI_A401KS,				// ���
	KASURI_A401KT,				// ����Ƃ�
	KASURI_A401MJ,				// �^�ʖ�
	KASURI_A401MJ2,				// �^�ʖ�
	KASURI_A401NO,				// �ʏ�
	KASURI_A401OP,				// ��
	KASURI_A401OT,				// ��������
	KASURI_A401SK,				// ����
	KASURI_A401UT,				// ��������
	KASURI_A401WK,				// �킭�킭

	// �����E�|�[�Y�Q
	KASURI_A402AS,				// �ł�
	KASURI_A402AS2,				// �ł�i���قفj
	KASURI_A402BS,				// ����
	KASURI_A402EG,				// �Ί�i���͂́j
	KASURI_A402EG2,				// �Ί�i��͂́j
	KASURI_A402NO,				// �ʏ�
	KASURI_A402NY,				// �ɂ��
	KASURI_A402OD,				// ����
	KASURI_A402TK,				// ���ӂ�
	KASURI_A402TR,				// �Ƃ�
	KASURI_A402TS,				// �Ƃꋩ��
	KASURI_A402TY,				// ����
	KASURI_A402UN,				// ���`��

	//========================================================
	// �b��
	// �p�e�B�V�G���E�|�[�Y�P
	EMA_0101AS,					// �ł�
	EMA_0101BS,					// ����
	EMA_0101BS2,				// ���΁i���j
	EMA_0101EG,					// �Ί�
	EMA_0101EG2,				// �Ί�i���j
	EMA_0101HE,					// �ց`�i�y�́j
	EMA_0101HO,					// �ق�
	EMA_0101IK,					// �{��i�Ղ�Ղ�j
	EMA_0101IK2,				// �{��i�ꊅ�j
	EMA_0101IK3,				// �{��
	EMA_0101IK4,				// �{��i�������j
	EMA_0101IK5,				// �{��
	EMA_0101KB,					// �y��
	EMA_0101KM,					// ����
	EMA_0101KS,					// ���
	EMA_0101KT,					// ����Ƃ�
	EMA_0101MJ,					// �^�ʖ�
	EMA_0101MU,					// ���b
	EMA_0101NK,					// ����
	EMA_0101NO,					// �ʏ�
	EMA_0101NR,					// �ɂ�
	EMA_0101OD,					// ����
	EMA_0101SK,					// ����
	EMA_0101SM,					// ����݂�
	EMA_0101SN,					// �X�˂�
	EMA_0101TO,					// �Ƃ����

	// �p�e�B�V�G���E�|�[�Y�Q
	EMA_0102AG,					// �b��
	EMA_0102AG2,				// �b��
	EMA_0102AK,					// ����
	EMA_0102AR,					// ����
	EMA_0102BS,					// ����
	EMA_0102KG,					// ����
	EMA_0102KR,					// �ꂵ��
	EMA_0102KS,					// ���
	EMA_0102MS,					// �ϑz
	EMA_0102MS2,				// �ϑz
	EMA_0102MS3,				// �ϑz
	EMA_0102NM,					// ����
	EMA_0102NM_,				// �����i��������[�j
	EMA_0102NM2,				// ����
	EMA_0102NM2_,				// �����i��������[�j
	EMA_0102NO,					// �ʏ�
	EMA_0102NT,					// �Q��
	EMA_0102SP,					// �S�z
	EMA_0102TR,					// �Ƃ�
	EMA_0102UF,					// ���ӂӂӂӂ�

	// �����E�|�[�Y�P
	EMA_0201AS,					// �ł�
	EMA_0201BS,					// ����
	EMA_0201BS2,				// ���΁i���j
	EMA_0201EG,					// �Ί�
	EMA_0201EG2,				// �Ί�i���j
	EMA_0201HE,					// �ց`�i�y�́j
	EMA_0201HO,					// �ق�
	EMA_0201IK,					// �{��i�Ղ�Ղ�j
	EMA_0201IK2,				// �{��i�ꊅ�j
	EMA_0201IK3,				// �{��
	EMA_0201IK4,				// �{��i�������j
	EMA_0201IK5,				// �{��
	EMA_0201KB,					// �y��
	EMA_0201KM,					// ����
	EMA_0201KS,					// ���
	EMA_0201KT,					// ����Ƃ�
	EMA_0201MJ,					// �^�ʖ�
	EMA_0201MU,					// ���b
	EMA_0201NK,					// ����
	EMA_0201NO,					// �ʏ�
	EMA_0201NR,					// �ɂ�
	EMA_0201OD,					// ����
	EMA_0201SK,					// ����
	EMA_0201SM,					// ����݂�
	EMA_0201SN,					// �X�˂�
	EMA_0201TO,					// �Ƃ����

	// �����E�|�[�Y�Q
	EMA_0202AG,					// �b��
	EMA_0202AG2,				// �b��
	EMA_0202AK,					// ����
	EMA_0202AR,					// ����
	EMA_0202BS,					// ����
	EMA_0202KG,					// ����
	EMA_0202KR,					// �ꂵ��
	EMA_0202KS,					// ���
	EMA_0202MS,					// �ϑz
	EMA_0202MS2,				// �ϑz
	EMA_0202MS3,				// �ϑz
	EMA_0202NM,					// ����
	EMA_0202NM_,				// �����i��������[�j
	EMA_0202NM2,				// ����
	EMA_0202NM2_,				// �����i��������[�j
	EMA_0202NO,					// �ʏ�
	EMA_0202NT,					// �Q��
	EMA_0202SP,					// �S�z
	EMA_0202TR,					// �Ƃ�
	EMA_0202UF,					// ���ӂӂӂӂ�

	// �����i�X�J�[�g�j�E�|�[�Y�P
	EMA_0301AS,					// �ł�
	EMA_0301BS,					// ����
	EMA_0301BS2,				// ���΁i���j
	EMA_0301EG,					// �Ί�
	EMA_0301EG2,				// �Ί�i���j
	EMA_0301HE,					// �ց`�i�y�́j
	EMA_0301HO,					// �ق�
	EMA_0301IK,					// �{��i�Ղ�Ղ�j
	EMA_0301IK2,				// �{��i�ꊅ�j
	EMA_0301IK3,				// �{��
	EMA_0301IK4,				// �{��i�������j
	EMA_0301IK5,				// �{��
	EMA_0301KB,					// �y��
	EMA_0301KM,					// ����
	EMA_0301KS,					// ���
	EMA_0301KT,					// ����Ƃ�
	EMA_0301MJ,					// �^�ʖ�
	EMA_0301MU,					// ���b
	EMA_0301NK,					// ����
	EMA_0301NO,					// �ʏ�
	EMA_0301NR,					// �ɂ�
	EMA_0301OD,					// ����
	EMA_0301SK,					// ����
	EMA_0301SM,					// ����݂�
	EMA_0301SN,					// �X�˂�
	EMA_0301TO,					// �Ƃ����

	// �����i�X�J�[�g�j�E�|�[�Y�Q
	EMA_0302AG,					// �b��
	EMA_0302AG2,				// �b��
	EMA_0302AK,					// ����
	EMA_0302AR,					// ����
	EMA_0302BS,					// ����
	EMA_0302KG,					// ����
	EMA_0302KR,					// �ꂵ��
	EMA_0302KS,					// ���
	EMA_0302MS,					// �ϑz
	EMA_0302MS2,				// �ϑz
	EMA_0302MS3,				// �ϑz
	EMA_0302NM,					// ����
	EMA_0302NM_,				// �����i��������[�j
	EMA_0302NM2,				// ����
	EMA_0302NM2_,				// �����i��������[�j
	EMA_0302NO,					// �ʏ�
	EMA_0302NT,					// �Q��
	EMA_0302SP,					// �S�z
	EMA_0302TR,					// �Ƃ�
	EMA_0302UF,					// ���ӂӂӂӂ�

	// �悻�s�����E�|�[�Y�P
	EMA_0401AS,					// �ł�
	EMA_0401BS,					// ����
	EMA_0401BS2,				// ���΁i���j
	EMA_0401EG,					// �Ί�
	EMA_0401EG2,				// �Ί�i���j
	EMA_0401HE,					// �ց`�i�y�́j
	EMA_0401HO,					// �ق�
	EMA_0401IK,					// �{��i�Ղ�Ղ�j
	EMA_0401IK2,				// �{��i�ꊅ�j
	EMA_0401IK3,				// �{��
	EMA_0401IK4,				// �{��i�������j
	EMA_0401IK5,				// �{��
	EMA_0401KB,					// �y��
	EMA_0401KM,					// ����
	EMA_0401KS,					// ���
	EMA_0401KT,					// ����Ƃ�
	EMA_0401MJ,					// �^�ʖ�
	EMA_0401MU,					// ���b
	EMA_0401NK,					// ����
	EMA_0401NO,					// �ʏ�
	EMA_0401NR,					// �ɂ�
	EMA_0401OD,					// ����
	EMA_0401SK,					// ����
	EMA_0401SM,					// ����݂�
	EMA_0401SN,					// �X�˂�
	EMA_0401TO,					// �Ƃ����

	// �r���E�|�[�Y�P
	EMA_0501AS,					// �ł�
	EMA_0501BS,					// ����
	EMA_0501BS2,				// ���΁i���j
	EMA_0501EG,					// �Ί�
	EMA_0501EG2,				// �Ί�i���j
	EMA_0501HE,					// �ց`�i�y�́j
	EMA_0501HO,					// �ق�
	EMA_0501IK,					// �{��i�Ղ�Ղ�j
	EMA_0501IK2,				// �{��i�ꊅ�j
	EMA_0501IK3,				// �{��
	EMA_0501IK4,				// �{��i�������j
	EMA_0501IK5,				// �{��
	EMA_0501KB,					// �y��
	EMA_0501KM,					// ����
	EMA_0501KS,					// ���
	EMA_0501KT,					// ����Ƃ�
	EMA_0501MJ,					// �^�ʖ�
	EMA_0501MU,					// ���b
	EMA_0501NK,					// ����
	EMA_0501NO,					// �ʏ�
	EMA_0501NR,					// �ɂ�
	EMA_0501OD,					// ����
	EMA_0501SK,					// ����
	EMA_0501SM,					// ����݂�
	EMA_0501SN,					// �X�˂�
	EMA_0501TO,					// �Ƃ����

	//========================================================
	// �b���i�o�X�g�A�b�v�j
	// �p�e�B�V�G���E�|�[�Y�P
	EMA_A101AS,					// �ł�
	EMA_A101BS,					// ����
	EMA_A101BS2,				// ���΁i���j
	EMA_A101EG,					// �Ί�
	EMA_A101EG2,				// �Ί�i���j
	EMA_A101HE,					// �ց`�i�y�́j
	EMA_A101HO,					// �ق�
	EMA_A101IK,					// �{��i�Ղ�Ղ�j
	EMA_A101IK2,				// �{��i�ꊅ�j
	EMA_A101IK3,				// �{��
	EMA_A101IK4,				// �{��i�������j
	EMA_A101IK5,				// �{��
	EMA_A101KB,					// �y��
	EMA_A101KM,					// ����
	EMA_A101KS,					// ���
	EMA_A101KT,					// ����Ƃ�
	EMA_A101MJ,					// �^�ʖ�
	EMA_A101MU,					// ���b
	EMA_A101NK,					// ����
	EMA_A101NO,					// �ʏ�
	EMA_A101NR,					// �ɂ�
	EMA_A101OD,					// ����
	EMA_A101SK,					// ����
	EMA_A101SM,					// ����݂�
	EMA_A101SN,					// �X�˂�
	EMA_A101TO,					// �Ƃ����

	// �p�e�B�V�G���E�|�[�Y�Q
	EMA_A102AG,					// �b��
	EMA_A102AG2,				// �b��
	EMA_A102AK,					// ����
	EMA_A102AR,					// ����
	EMA_A102BS,					// ����
	EMA_A102KG,					// ����
	EMA_A102KR,					// �ꂵ��
	EMA_A102KS,					// ���
	EMA_A102MS,					// �ϑz
	EMA_A102MS2,				// �ϑz
	EMA_A102MS3,				// �ϑz
	EMA_A102NM,					// ����
	EMA_A102NM_,				// �����i��������[�j
	EMA_A102NM2,				// ����
	EMA_A102NM2_,				// �����i��������[�j
	EMA_A102NO,					// �ʏ�
	EMA_A102NT,					// �Q��
	EMA_A102SP,					// �S�z
	EMA_A102TR,					// �Ƃ�
	EMA_A102UF,					// ���ӂӂӂӂ�

	// �����E�|�[�Y�P
	EMA_A201AS,					// �ł�
	EMA_A201BS,					// ����
	EMA_A201BS2,				// ���΁i���j
	EMA_A201EG,					// �Ί�
	EMA_A201EG2,				// �Ί�i���j
	EMA_A201HE,					// �ց`�i�y�́j
	EMA_A201HO,					// �ق�
	EMA_A201IK,					// �{��i�Ղ�Ղ�j
	EMA_A201IK2,				// �{��i�ꊅ�j
	EMA_A201IK3,				// �{��
	EMA_A201IK4,				// �{��i�������j
	EMA_A201IK5,				// �{��
	EMA_A201KB,					// �y��
	EMA_A201KM,					// ����
	EMA_A201KS,					// ���
	EMA_A201KT,					// ����Ƃ�
	EMA_A201MJ,					// �^�ʖ�
	EMA_A201MU,					// ���b
	EMA_A201NK,					// ����
	EMA_A201NO,					// �ʏ�
	EMA_A201NR,					// �ɂ�
	EMA_A201OD,					// ����
	EMA_A201SK,					// ����
	EMA_A201SM,					// ����݂�
	EMA_A201SN,					// �X�˂�
	EMA_A201TO,					// �Ƃ����

	// �����E�|�[�Y�Q
	EMA_A202AG,					// �b��
	EMA_A202AG2,				// �b��
	EMA_A202AK,					// ����
	EMA_A202AR,					// ����
	EMA_A202BS,					// ����
	EMA_A202KG,					// ����
	EMA_A202KR,					// �ꂵ��
	EMA_A202KS,					// ���
	EMA_A202MS,					// �ϑz
	EMA_A202MS2,				// �ϑz
	EMA_A202MS3,				// �ϑz
	EMA_A202NM,					// ����
	EMA_A202NM_,				// �����i��������[�j
	EMA_A202NM2,				// ����
	EMA_A202NM2_,				// �����i��������[�j
	EMA_A202NO,					// �ʏ�
	EMA_A202NT,					// �Q��
	EMA_A202SP,					// �S�z
	EMA_A202TR,					// �Ƃ�
	EMA_A202UF,					// ���ӂӂӂӂ�

	// �����i�X�J�[�g�j�E�|�[�Y�P
	EMA_A301AS,					// �ł�
	EMA_A301BS,					// ����
	EMA_A301BS2,				// ���΁i���j
	EMA_A301EG,					// �Ί�
	EMA_A301EG2,				// �Ί�i���j
	EMA_A301HE,					// �ց`�i�y�́j
	EMA_A301HO,					// �ق�
	EMA_A301IK,					// �{��i�Ղ�Ղ�j
	EMA_A301IK2,				// �{��i�ꊅ�j
	EMA_A301IK3,				// �{��
	EMA_A301IK4,				// �{��i�������j
	EMA_A301IK5,				// �{��
	EMA_A301KB,					// �y��
	EMA_A301KM,					// ����
	EMA_A301KS,					// ���
	EMA_A301KT,					// ����Ƃ�
	EMA_A301MJ,					// �^�ʖ�
	EMA_A301MU,					// ���b
	EMA_A301NK,					// ����
	EMA_A301NO,					// �ʏ�
	EMA_A301NR,					// �ɂ�
	EMA_A301OD,					// ����
	EMA_A301SK,					// ����
	EMA_A301SM,					// ����݂�
	EMA_A301SN,					// �X�˂�
	EMA_A301TO,					// �Ƃ����

	// �����i�X�J�[�g�j�E�|�[�Y�Q
	EMA_A302AG,					// �b��
	EMA_A302AG2,				// �b��
	EMA_A302AK,					// ����
	EMA_A302AR,					// ����
	EMA_A302BS,					// ����
	EMA_A302KG,					// ����
	EMA_A302KR,					// �ꂵ��
	EMA_A302KS,					// ���
	EMA_A302MS,					// �ϑz
	EMA_A302MS2,				// �ϑz
	EMA_A302MS3,				// �ϑz
	EMA_A302NM,					// ����
	EMA_A302NM_,				// �����i��������[�j
	EMA_A302NM2,				// ����
	EMA_A302NM2_,				// �����i��������[�j
	EMA_A302NO,					// �ʏ�
	EMA_A302NT,					// �Q��
	EMA_A302SP,					// �S�z
	EMA_A302TR,					// �Ƃ�
	EMA_A302UF,					// ���ӂӂӂӂ�

	// �悻�s�����E�|�[�Y�P
	EMA_A401AS,					// �ł�
	EMA_A401BS,					// ����
	EMA_A401BS2,				// ���΁i���j
	EMA_A401EG,					// �Ί�
	EMA_A401EG2,				// �Ί�i���j
	EMA_A401HE,					// �ց`�i�y�́j
	EMA_A401HO,					// �ق�
	EMA_A401IK,					// �{��i�Ղ�Ղ�j
	EMA_A401IK2,				// �{��i�ꊅ�j
	EMA_A401IK3,				// �{��
	EMA_A401IK4,				// �{��i�������j
	EMA_A401IK5,				// �{��
	EMA_A401KB,					// �y��
	EMA_A401KM,					// ����
	EMA_A401KS,					// ���
	EMA_A401KT,					// ����Ƃ�
	EMA_A401MJ,					// �^�ʖ�
	EMA_A401MU,					// ���b
	EMA_A401NK,					// ����
	EMA_A401NO,					// �ʏ�
	EMA_A401NR,					// �ɂ�
	EMA_A401OD,					// ����
	EMA_A401SK,					// ����
	EMA_A401SM,					// ����݂�
	EMA_A401SN,					// �X�˂�
	EMA_A401TO,					// �Ƃ����

	// �r���E�|�[�Y�P
	EMA_A501AS,					// �ł�
	EMA_A501BS,					// ����
	EMA_A501BS2,				// ���΁i���j
	EMA_A501EG,					// �Ί�
	EMA_A501EG2,				// �Ί�i���j
	EMA_A501HE,					// �ց`�i�y�́j
	EMA_A501HO,					// �ق�
	EMA_A501IK,					// �{��i�Ղ�Ղ�j
	EMA_A501IK2,				// �{��i�ꊅ�j
	EMA_A501IK3,				// �{��
	EMA_A501IK4,				// �{��i�������j
	EMA_A501IK5,				// �{��
	EMA_A501KB,					// �y��
	EMA_A501KM,					// ����
	EMA_A501KS,					// ���
	EMA_A501KT,					// ����Ƃ�
	EMA_A501MJ,					// �^�ʖ�
	EMA_A501MU,					// ���b
	EMA_A501NK,					// ����
	EMA_A501NO,					// �ʏ�
	EMA_A501NR,					// �ɂ�
	EMA_A501OD,					// ����
	EMA_A501SK,					// ����
	EMA_A501SM,					// ����݂�
	EMA_A501SN,					// �X�˂�
	EMA_A501TO,					// �Ƃ����

	//========================================================
	// �����q
	// �����E�|�[�Y�P
	RIKAKO_0101AN,				// ���`��
	RIKAKO_0101BS,				// ����
	RIKAKO_0101IK,				// �{��
	RIKAKO_0101KM,				// ����1
	RIKAKO_0101KM2,				// ����2
	RIKAKO_0101MG,				// ���K�l1
	RIKAKO_0101MG2,				// ���K�l2
	RIKAKO_0101MM,				// �ނ��ނ�
	RIKAKO_0101NO,				// �ʏ�
	RIKAKO_0101NY,				// �ɂ��
	RIKAKO_0101OD,				// �����i������j
	RIKAKO_0101SC,				// �V���b�N

	// �����E�|�[�Y�Q
	RIKAKO_0102AK,				// ����
	RIKAKO_0102AS,				// �ł�
	RIKAKO_0102EG,				// �Ί�
	RIKAKO_0102HB,				// ���ׂ�
	RIKAKO_0102IK,				// �{��
	RIKAKO_0102KN,				// �߂���
	RIKAKO_0102KS,				// ���
	RIKAKO_0102KT,				// ����Ƃ�
	RIKAKO_0102MG,				// ���K�l1
	RIKAKO_0102MG2,				// ���K�l2
	RIKAKO_0102MJ,				// �^�ʖ�
	RIKAKO_0102MU,				// ���b
	RIKAKO_0102MU2,				// ���b
	RIKAKO_0102NK,				// ����1
	RIKAKO_0102NK2,				// ����2
	RIKAKO_0102NK3,				// ����3
	RIKAKO_0102NO,				// �ʏ�
	RIKAKO_0102NS,				// ��������
	RIKAKO_0102NW,				// �����΂�
	RIKAKO_0102OD,				// ����
	RIKAKO_0102SA,				// �v��
	RIKAKO_0102SK,				// ����
	RIKAKO_0102TR,				// �Ƃ�

	// �����i�u���X���b�g�j�E�|�[�Y�P
	RIKAKO_0201AN,				// ���`��
	RIKAKO_0201BS,				// ����
	RIKAKO_0201IK,				// �{��
	RIKAKO_0201KM,				// ����1
	RIKAKO_0201KM2,				// ����2
	RIKAKO_0201MG,				// ���K�l1
	RIKAKO_0201MG2,				// ���K�l2
	RIKAKO_0201MM,				// �ނ��ނ�
	RIKAKO_0201NO,				// �ʏ�
	RIKAKO_0201NY,				// �ɂ��
	RIKAKO_0201OD,				// �����i������j
	RIKAKO_0201SC,				// �V���b�N

	// �����i�u���X���b�g�j�E�|�[�Y�Q
	RIKAKO_0202AK,				// ����
	RIKAKO_0202AS,				// �ł�
	RIKAKO_0202EG,				// �Ί�
	RIKAKO_0202HB,				// ���ׂ�
	RIKAKO_0202IK,				// �{��
	RIKAKO_0202KN,				// �߂���
	RIKAKO_0202KS,				// ���
	RIKAKO_0202KT,				// ����Ƃ�
	RIKAKO_0202MG,				// ���K�l1
	RIKAKO_0202MG2,				// ���K�l2
	RIKAKO_0202MJ,				// �^�ʖ�
	RIKAKO_0202MU,				// ���b
	RIKAKO_0202MU2,				// ���b
	RIKAKO_0202NK,				// ����1
	RIKAKO_0202NK2,				// ����2
	RIKAKO_0202NK3,				// ����3
	RIKAKO_0202NO,				// �ʏ�
	RIKAKO_0202NS,				// ��������
	RIKAKO_0202NW,				// �����΂�
	RIKAKO_0202OD,				// ����
	RIKAKO_0202SA,				// �v��
	RIKAKO_0202SK,				// ����
	RIKAKO_0202TR,				// �Ƃ�

	// �����i��z�p�u���X���b�g�j�E�|�[�Y�P
	RIKAKO_0301AN,				// ���`��
	RIKAKO_0301BS,				// ����
	RIKAKO_0301IK,				// �{��
	RIKAKO_0301KM,				// ����1
	RIKAKO_0301KM2,				// ����2
	RIKAKO_0301MG,				// ���K�l1
	RIKAKO_0301MG2,				// ���K�l2
	RIKAKO_0301MM,				// �ނ��ނ�
	RIKAKO_0301NO,				// �ʏ�
	RIKAKO_0301NY,				// �ɂ��
	RIKAKO_0301OD,				// �����i������j
	RIKAKO_0301SC,				// �V���b�N

	// �����i��z�p�u���X���b�g�j�E�|�[�Y�Q
	RIKAKO_0302AK,				// ����
	RIKAKO_0302AS,				// �ł�
	RIKAKO_0302EG,				// �Ί�
	RIKAKO_0302HB,				// ���ׂ�
	RIKAKO_0302IK,				// �{��
	RIKAKO_0302KN,				// �߂���
	RIKAKO_0302KS,				// ���
	RIKAKO_0302KT,				// ����Ƃ�
	RIKAKO_0302MG,				// ���K�l1
	RIKAKO_0302MG2,				// ���K�l2
	RIKAKO_0302MJ,				// �^�ʖ�
	RIKAKO_0302MU,				// ���b
	RIKAKO_0302MU2,				// ���b
	RIKAKO_0302NK,				// ����1
	RIKAKO_0302NK2,				// ����2
	RIKAKO_0302NK3,				// ����3
	RIKAKO_0302NO,				// �ʏ�
	RIKAKO_0302NS,				// ��������
	RIKAKO_0302NW,				// �����΂�
	RIKAKO_0302OD,				// ����
	RIKAKO_0302SA,				// �v��
	RIKAKO_0302SK,				// ����
	RIKAKO_0302TR,				// �Ƃ�

	// �����i�u���X���b�g�{��сj�E�|�[�Y�P
	RIKAKO_0401AN,				// ���`��
	RIKAKO_0401BS,				// ����
	RIKAKO_0401IK,				// �{��
	RIKAKO_0401KM,				// ����1
	RIKAKO_0401KM2,				// ����2
	RIKAKO_0401MG,				// ���K�l1
	RIKAKO_0401MG2,				// ���K�l2
	RIKAKO_0401MM,				// �ނ��ނ�
	RIKAKO_0401NO,				// �ʏ�
	RIKAKO_0401NY,				// �ɂ��
	RIKAKO_0401OD,				// �����i������j
	RIKAKO_0401SC,				// �V���b�N

	// �����i�u���X���b�g�{��сj�E�|�[�Y�Q
	RIKAKO_0402AK,				// ����
	RIKAKO_0402AS,				// �ł�
	RIKAKO_0402EG,				// �Ί�
	RIKAKO_0402HB,				// ���ׂ�
	RIKAKO_0402IK,				// �{��
	RIKAKO_0402KN,				// �߂���
	RIKAKO_0402KS,				// ���
	RIKAKO_0402KT,				// ����Ƃ�
	RIKAKO_0402MG,				// ���K�l1
	RIKAKO_0402MG2,				// ���K�l2
	RIKAKO_0402MJ,				// �^�ʖ�
	RIKAKO_0402MU,				// ���b
	RIKAKO_0402MU2,				// ���b
	RIKAKO_0402NK,				// ����1
	RIKAKO_0402NK2,				// ����2
	RIKAKO_0402NK3,				// ����3
	RIKAKO_0402NO,				// �ʏ�
	RIKAKO_0402NS,				// ��������
	RIKAKO_0402NW,				// �����΂�
	RIKAKO_0402OD,				// ����
	RIKAKO_0402SA,				// �v��
	RIKAKO_0402SK,				// ����
	RIKAKO_0402TR,				// �Ƃ�

	// �R�[�g�E�|�[�Y�P
	RIKAKO_0501AN,				// ���`��
	RIKAKO_0501BS,				// ����
	RIKAKO_0501IK,				// �{��
	RIKAKO_0501KM,				// ����1
	RIKAKO_0501KM2,				// ����2
	RIKAKO_0501MG,				// ���K�l1
	RIKAKO_0501MG2,				// ���K�l2
	RIKAKO_0501MM,				// �ނ��ނ�
	RIKAKO_0501NO,				// �ʏ�
	RIKAKO_0501NY,				// �ɂ��
	RIKAKO_0501OD,				// �����i������j
	RIKAKO_0501SC,				// �V���b�N

	// �R�[�g�E�|�[�Y�Q
	RIKAKO_0502AK,				// ����
	RIKAKO_0502AS,				// �ł�
	RIKAKO_0502EG,				// �Ί�
	RIKAKO_0502HB,				// ���ׂ�
	RIKAKO_0502IK,				// �{��
	RIKAKO_0502KN,				// �߂���
	RIKAKO_0502KS,				// ���
	RIKAKO_0502KT,				// ����Ƃ�
	RIKAKO_0502MG,				// ���K�l1
	RIKAKO_0502MG2,				// ���K�l2
	RIKAKO_0502MJ,				// �^�ʖ�
	RIKAKO_0502MU,				// ���b
	RIKAKO_0502MU2,				// ���b
	RIKAKO_0502NK,				// ����1
	RIKAKO_0502NK2,				// ����2
	RIKAKO_0502NK3,				// ����3
	RIKAKO_0502NO,				// �ʏ�
	RIKAKO_0502NS,				// ��������
	RIKAKO_0502NW,				// �����΂�
	RIKAKO_0502OD,				// ����
	RIKAKO_0502SA,				// �v��
	RIKAKO_0502SK,				// ����
	RIKAKO_0502TR,				// �Ƃ�

	// �R�[�g�i��сj�E�|�[�Y�P
	RIKAKO_0601AN,				// ���`��
	RIKAKO_0601BS,				// ����
	RIKAKO_0601IK,				// �{��
	RIKAKO_0601KM,				// ����1
	RIKAKO_0601KM2,				// ����2
	RIKAKO_0601MG,				// ���K�l1
	RIKAKO_0601MG2,				// ���K�l2
	RIKAKO_0601MM,				// �ނ��ނ�
	RIKAKO_0601NO,				// �ʏ�
	RIKAKO_0601NY,				// �ɂ��
	RIKAKO_0601OD,				// �����i������j
	RIKAKO_0601SC,				// �V���b�N

	// �R�[�g�i��сj�E�|�[�Y�Q
	RIKAKO_0602AK,				// ����
	RIKAKO_0602AS,				// �ł�
	RIKAKO_0602EG,				// �Ί�
	RIKAKO_0602HB,				// ���ׂ�
	RIKAKO_0602IK,				// �{��
	RIKAKO_0602KN,				// �߂���
	RIKAKO_0602KS,				// ���
	RIKAKO_0602KT,				// ����Ƃ�
	RIKAKO_0602MG,				// ���K�l1
	RIKAKO_0602MG2,				// ���K�l2
	RIKAKO_0602MJ,				// �^�ʖ�
	RIKAKO_0602MU,				// ���b
	RIKAKO_0602MU2,				// ���b
	RIKAKO_0602NK,				// ����1
	RIKAKO_0602NK2,				// ����2
	RIKAKO_0602NK3,				// ����3
	RIKAKO_0602NO,				// �ʏ�
	RIKAKO_0602NS,				// ��������
	RIKAKO_0602NW,				// �����΂�
	RIKAKO_0602OD,				// ����
	RIKAKO_0602SA,				// �v��
	RIKAKO_0602SK,				// ����
	RIKAKO_0602TR,				// �Ƃ�

	// �t�@�~�[�������E�|�[�Y�Q
	RIKAKO_0902AK,				// ����
	RIKAKO_0902AS,				// �ł�
	RIKAKO_0902EG,				// �Ί�
	RIKAKO_0902HB,				// ���ׂ�
	RIKAKO_0902IK,				// �{��
	RIKAKO_0902KN,				// �߂���
	RIKAKO_0902KS,				// ���
	RIKAKO_0902KT,				// ����Ƃ�
	RIKAKO_0902MG,				// ���K�l1
	RIKAKO_0902MG2,				// ���K�l2
	RIKAKO_0902MJ,				// �^�ʖ�
	RIKAKO_0902MU,				// ���b
	RIKAKO_0902MU2,				// ���b
	RIKAKO_0902NK,				// ����1
	RIKAKO_0902NK2,				// ����2
	RIKAKO_0902NK3,				// ����3
	RIKAKO_0902NO,				// �ʏ�
	RIKAKO_0902NS,				// ��������
	RIKAKO_0902NW,				// �����΂�
	RIKAKO_0902OD,				// ����
	RIKAKO_0902SA,				// �v��
	RIKAKO_0902SK,				// ����
	RIKAKO_0902TR,				// �Ƃ�

	// �t�@�~�[�������i�u���X���b�g�j�E�|�[�Y�Q
	RIKAKO_1002AK,				// ����
	RIKAKO_1002AS,				// �ł�
	RIKAKO_1002EG,				// �Ί�
	RIKAKO_1002HB,				// ���ׂ�
	RIKAKO_1002IK,				// �{��
	RIKAKO_1002KN,				// �߂���
	RIKAKO_1002KS,				// ���
	RIKAKO_1002KT,				// ����Ƃ�
	RIKAKO_1002MG,				// ���K�l1
	RIKAKO_1002MG2,				// ���K�l2
	RIKAKO_1002MJ,				// �^�ʖ�
	RIKAKO_1002MU,				// ���b
	RIKAKO_1002MU2,				// ���b
	RIKAKO_1002NK,				// ����1
	RIKAKO_1002NK2,				// ����2
	RIKAKO_1002NK3,				// ����3
	RIKAKO_1002NO,				// �ʏ�
	RIKAKO_1002NS,				// ��������
	RIKAKO_1002NW,				// �����΂�
	RIKAKO_1002OD,				// ����
	RIKAKO_1002SA,				// �v��
	RIKAKO_1002SK,				// ����
	RIKAKO_1002TR,				// �Ƃ�

	// �t�@�~�[�������i��z�p�u���X���b�g�j�E�|�[�Y�Q
	RIKAKO_1102AK,				// ����
	RIKAKO_1102AS,				// �ł�
	RIKAKO_1102EG,				// �Ί�
	RIKAKO_1102HB,				// ���ׂ�
	RIKAKO_1102IK,				// �{��
	RIKAKO_1102KN,				// �߂���
	RIKAKO_1102KS,				// ���
	RIKAKO_1102KT,				// ����Ƃ�
	RIKAKO_1102MG,				// ���K�l1
	RIKAKO_1102MG2,				// ���K�l2
	RIKAKO_1102MJ,				// �^�ʖ�
	RIKAKO_1102MU,				// ���b
	RIKAKO_1102MU2,				// ���b
	RIKAKO_1102NK,				// ����1
	RIKAKO_1102NK2,				// ����2
	RIKAKO_1102NK3,				// ����3
	RIKAKO_1102NO,				// �ʏ�
	RIKAKO_1102NS,				// ��������
	RIKAKO_1102NW,				// �����΂�
	RIKAKO_1102OD,				// ����
	RIKAKO_1102SA,				// �v��
	RIKAKO_1102SK,				// ����
	RIKAKO_1102TR,				// �Ƃ�

	//========================================================
	// �����q�i�o�X�g�A�b�v�j
	// �����E�|�[�Y�P
	RIKAKO_A101AN,				// ���`��
	RIKAKO_A101BS,				// ����
	RIKAKO_A101IK,				// �{��
	RIKAKO_A101KM,				// ����1
	RIKAKO_A101KM2,				// ����2
	RIKAKO_A101MG,				// ���K�l1
	RIKAKO_A101MG2,				// ���K�l2
	RIKAKO_A101MM,				// �ނ��ނ�
	RIKAKO_A101NO,				// �ʏ�
	RIKAKO_A101NY,				// �ɂ��
	RIKAKO_A101OD,				// �����i������j
	RIKAKO_A101SC,				// �V���b�N

	// �����E�|�[�Y�Q
	RIKAKO_A102AK,				// ����
	RIKAKO_A102AS,				// �ł�
	RIKAKO_A102EG,				// �Ί�
	RIKAKO_A102HB,				// ���ׂ�
	RIKAKO_A102IK,				// �{��
	RIKAKO_A102KN,				// �߂���
	RIKAKO_A102KS,				// ���
	RIKAKO_A102KT,				// ����Ƃ�
	RIKAKO_A102MG,				// ���K�l1
	RIKAKO_A102MG2,				// ���K�l2
	RIKAKO_A102MJ,				// �^�ʖ�
	RIKAKO_A102MU,				// ���b
	RIKAKO_A102MU2,				// ���b
	RIKAKO_A102NK,				// ����1
	RIKAKO_A102NK2,				// ����2
	RIKAKO_A102NK3,				// ����3
	RIKAKO_A102NO,				// �ʏ�
	RIKAKO_A102NS,				// ��������
	RIKAKO_A102NW,				// �����΂�
	RIKAKO_A102OD,				// ����
	RIKAKO_A102SA,				// �v��
	RIKAKO_A102SK,				// ����
	RIKAKO_A102TR,				// �Ƃ�

	// �����i�u���X���b�g�j�E�|�[�Y�P
	RIKAKO_A201AN,				// ���`��
	RIKAKO_A201BS,				// ����
	RIKAKO_A201IK,				// �{��
	RIKAKO_A201KM,				// ����1
	RIKAKO_A201KM2,				// ����2
	RIKAKO_A201MG,				// ���K�l1
	RIKAKO_A201MG2,				// ���K�l2
	RIKAKO_A201MM,				// �ނ��ނ�
	RIKAKO_A201NO,				// �ʏ�
	RIKAKO_A201NY,				// �ɂ��
	RIKAKO_A201OD,				// �����i������j
	RIKAKO_A201SC,				// �V���b�N

	// �����i�u���X���b�g�j�E�|�[�Y�Q
	RIKAKO_A202AK,				// ����
	RIKAKO_A202AS,				// �ł�
	RIKAKO_A202EG,				// �Ί�
	RIKAKO_A202HB,				// ���ׂ�
	RIKAKO_A202IK,				// �{��
	RIKAKO_A202KN,				// �߂���
	RIKAKO_A202KS,				// ���
	RIKAKO_A202KT,				// ����Ƃ�
	RIKAKO_A202MG,				// ���K�l1
	RIKAKO_A202MG2,				// ���K�l2
	RIKAKO_A202MJ,				// �^�ʖ�
	RIKAKO_A202MU,				// ���b
	RIKAKO_A202MU2,				// ���b
	RIKAKO_A202NK,				// ����1
	RIKAKO_A202NK2,				// ����2
	RIKAKO_A202NK3,				// ����3
	RIKAKO_A202NO,				// �ʏ�
	RIKAKO_A202NS,				// ��������
	RIKAKO_A202NW,				// �����΂�
	RIKAKO_A202OD,				// ����
	RIKAKO_A202SA,				// �v��
	RIKAKO_A202SK,				// ����
	RIKAKO_A202TR,				// �Ƃ�

	// �����i��z�p�u���X���b�g�j�E�|�[�Y�P
	RIKAKO_A301AN,				// ���`��
	RIKAKO_A301BS,				// ����
	RIKAKO_A301IK,				// �{��
	RIKAKO_A301KM,				// ����1
	RIKAKO_A301KM2,				// ����2
	RIKAKO_A301MG,				// ���K�l1
	RIKAKO_A301MG2,				// ���K�l2
	RIKAKO_A301MM,				// �ނ��ނ�
	RIKAKO_A301NO,				// �ʏ�
	RIKAKO_A301NY,				// �ɂ��
	RIKAKO_A301OD,				// �����i������j
	RIKAKO_A301SC,				// �V���b�N

	// �����i��z�p�u���X���b�g�j�E�|�[�Y�Q
	RIKAKO_A302AK,				// ����
	RIKAKO_A302AS,				// �ł�
	RIKAKO_A302EG,				// �Ί�
	RIKAKO_A302HB,				// ���ׂ�
	RIKAKO_A302IK,				// �{��
	RIKAKO_A302KN,				// �߂���
	RIKAKO_A302KS,				// ���
	RIKAKO_A302KT,				// ����Ƃ�
	RIKAKO_A302MG,				// ���K�l1
	RIKAKO_A302MG2,				// ���K�l2
	RIKAKO_A302MJ,				// �^�ʖ�
	RIKAKO_A302MU,				// ���b
	RIKAKO_A302MU2,				// ���b
	RIKAKO_A302NK,				// ����1
	RIKAKO_A302NK2,				// ����2
	RIKAKO_A302NK3,				// ����3
	RIKAKO_A302NO,				// �ʏ�
	RIKAKO_A302NS,				// ��������
	RIKAKO_A302NW,				// �����΂�
	RIKAKO_A302OD,				// ����
	RIKAKO_A302SA,				// �v��
	RIKAKO_A302SK,				// ����
	RIKAKO_A302TR,				// �Ƃ�

	// �����i�u���X���b�g�{��сj�E�|�[�Y�P
	RIKAKO_A401AN,				// ���`��
	RIKAKO_A401BS,				// ����
	RIKAKO_A401IK,				// �{��
	RIKAKO_A401KM,				// ����1
	RIKAKO_A401KM2,				// ����2
	RIKAKO_A401MG,				// ���K�l1
	RIKAKO_A401MG2,				// ���K�l2
	RIKAKO_A401MM,				// �ނ��ނ�
	RIKAKO_A401NO,				// �ʏ�
	RIKAKO_A401NY,				// �ɂ��
	RIKAKO_A401OD,				// �����i������j
	RIKAKO_A401SC,				// �V���b�N

	// �����i�u���X���b�g�{��сj�E�|�[�Y�Q
	RIKAKO_A402AK,				// ����
	RIKAKO_A402AS,				// �ł�
	RIKAKO_A402EG,				// �Ί�
	RIKAKO_A402HB,				// ���ׂ�
	RIKAKO_A402IK,				// �{��
	RIKAKO_A402KN,				// �߂���
	RIKAKO_A402KS,				// ���
	RIKAKO_A402KT,				// ����Ƃ�
	RIKAKO_A402MG,				// ���K�l1
	RIKAKO_A402MG2,				// ���K�l2
	RIKAKO_A402MJ,				// �^�ʖ�
	RIKAKO_A402MU,				// ���b
	RIKAKO_A402MU2,				// ���b
	RIKAKO_A402NK,				// ����1
	RIKAKO_A402NK2,				// ����2
	RIKAKO_A402NK3,				// ����3
	RIKAKO_A402NO,				// �ʏ�
	RIKAKO_A402NS,				// ��������
	RIKAKO_A402NW,				// �����΂�
	RIKAKO_A402OD,				// ����
	RIKAKO_A402SA,				// �v��
	RIKAKO_A402SK,				// ����
	RIKAKO_A402TR,				// �Ƃ�

	// �R�[�g�E�|�[�Y�P
	RIKAKO_A501AN,				// ���`��
	RIKAKO_A501BS,				// ����
	RIKAKO_A501IK,				// �{��
	RIKAKO_A501KM,				// ����1
	RIKAKO_A501KM2,				// ����2
	RIKAKO_A501MG,				// ���K�l1
	RIKAKO_A501MG2,				// ���K�l2
	RIKAKO_A501MM,				// �ނ��ނ�
	RIKAKO_A501NO,				// �ʏ�
	RIKAKO_A501NY,				// �ɂ��
	RIKAKO_A501OD,				// �����i������j
	RIKAKO_A501SC,				// �V���b�N

	// �R�[�g�E�|�[�Y�Q
	RIKAKO_A502AK,				// ����
	RIKAKO_A502AS,				// �ł�
	RIKAKO_A502EG,				// �Ί�
	RIKAKO_A502HB,				// ���ׂ�
	RIKAKO_A502IK,				// �{��
	RIKAKO_A502KN,				// �߂���
	RIKAKO_A502KS,				// ���
	RIKAKO_A502KT,				// ����Ƃ�
	RIKAKO_A502MG,				// ���K�l1
	RIKAKO_A502MG2,				// ���K�l2
	RIKAKO_A502MJ,				// �^�ʖ�
	RIKAKO_A502MU,				// ���b
	RIKAKO_A502MU2,				// ���b
	RIKAKO_A502NK,				// ����1
	RIKAKO_A502NK2,				// ����2
	RIKAKO_A502NK3,				// ����3
	RIKAKO_A502NO,				// �ʏ�
	RIKAKO_A502NS,				// ��������
	RIKAKO_A502NW,				// �����΂�
	RIKAKO_A502OD,				// ����
	RIKAKO_A502SA,				// �v��
	RIKAKO_A502SK,				// ����
	RIKAKO_A502TR,				// �Ƃ�

	// �R�[�g�i��сj�E�|�[�Y�P
	RIKAKO_A601AN,				// ���`��
	RIKAKO_A601BS,				// ����
	RIKAKO_A601IK,				// �{��
	RIKAKO_A601KM,				// ����1
	RIKAKO_A601KM2,				// ����2
	RIKAKO_A601MG,				// ���K�l1
	RIKAKO_A601MG2,				// ���K�l2
	RIKAKO_A601MM,				// �ނ��ނ�
	RIKAKO_A601NO,				// �ʏ�
	RIKAKO_A601NY,				// �ɂ��
	RIKAKO_A601OD,				// �����i������j
	RIKAKO_A601SC,				// �V���b�N

	// �R�[�g�i��сj�E�|�[�Y�Q
	RIKAKO_A602AK,				// ����
	RIKAKO_A602AS,				// �ł�
	RIKAKO_A602EG,				// �Ί�
	RIKAKO_A602HB,				// ���ׂ�
	RIKAKO_A602IK,				// �{��
	RIKAKO_A602KN,				// �߂���
	RIKAKO_A602KS,				// ���
	RIKAKO_A602KT,				// ����Ƃ�
	RIKAKO_A602MG,				// ���K�l1
	RIKAKO_A602MG2,				// ���K�l2
	RIKAKO_A602MJ,				// �^�ʖ�
	RIKAKO_A602MU,				// ���b
	RIKAKO_A602MU2,				// ���b
	RIKAKO_A602NK,				// ����1
	RIKAKO_A602NK2,				// ����2
	RIKAKO_A602NK3,				// ����3
	RIKAKO_A602NO,				// �ʏ�
	RIKAKO_A602NS,				// ��������
	RIKAKO_A602NW,				// �����΂�
	RIKAKO_A602OD,				// ����
	RIKAKO_A602SA,				// �v��
	RIKAKO_A602SK,				// ����
	RIKAKO_A602TR,				// �Ƃ�

	// �t�@�~�[�������E�|�[�Y�Q
	RIKAKO_A902AK,				// ����
	RIKAKO_A902AS,				// �ł�
	RIKAKO_A902EG,				// �Ί�
	RIKAKO_A902HB,				// ���ׂ�
	RIKAKO_A902IK,				// �{��
	RIKAKO_A902KN,				// �߂���
	RIKAKO_A902KS,				// ���
	RIKAKO_A902KT,				// ����Ƃ�
	RIKAKO_A902MG,				// ���K�l1
	RIKAKO_A902MG2,				// ���K�l2
	RIKAKO_A902MJ,				// �^�ʖ�
	RIKAKO_A902MU,				// ���b
	RIKAKO_A902MU2,				// ���b
	RIKAKO_A902NK,				// ����1
	RIKAKO_A902NK2,				// ����2
	RIKAKO_A902NK3,				// ����3
	RIKAKO_A902NO,				// �ʏ�
	RIKAKO_A902NS,				// ��������
	RIKAKO_A902NW,				// �����΂�
	RIKAKO_A902OD,				// ����
	RIKAKO_A902SA,				// �v��
	RIKAKO_A902SK,				// ����
	RIKAKO_A902TR,				// �Ƃ�

	// �t�@�~�[�������i�u���X���b�g�j�E�|�[�Y�Q
	RIKAKO_B002AK,				// ����
	RIKAKO_B002AS,				// �ł�
	RIKAKO_B002EG,				// �Ί�
	RIKAKO_B002HB,				// ���ׂ�
	RIKAKO_B002IK,				// �{��
	RIKAKO_B002KN,				// �߂���
	RIKAKO_B002KS,				// ���
	RIKAKO_B002KT,				// ����Ƃ�
	RIKAKO_B002MG,				// ���K�l1
	RIKAKO_B002MG2,				// ���K�l2
	RIKAKO_B002MJ,				// �^�ʖ�
	RIKAKO_B002MU,				// ���b
	RIKAKO_B002MU2,				// ���b
	RIKAKO_B002NK,				// ����1
	RIKAKO_B002NK2,				// ����2
	RIKAKO_B002NK3,				// ����3
	RIKAKO_B002NO,				// �ʏ�
	RIKAKO_B002NS,				// ��������
	RIKAKO_B002NW,				// �����΂�
	RIKAKO_B002OD,				// ����
	RIKAKO_B002SA,				// �v��
	RIKAKO_B002SK,				// ����
	RIKAKO_B002TR,				// �Ƃ�

	// �t�@�~�[�������i��z�p�u���X���b�g�j�E�|�[�Y�Q
	RIKAKO_B102AK,				// ����
	RIKAKO_B102AS,				// �ł�
	RIKAKO_B102EG,				// �Ί�
	RIKAKO_B102HB,				// ���ׂ�
	RIKAKO_B102IK,				// �{��
	RIKAKO_B102KN,				// �߂���
	RIKAKO_B102KS,				// ���
	RIKAKO_B102KT,				// ����Ƃ�
	RIKAKO_B102MG,				// ���K�l1
	RIKAKO_B102MG2,				// ���K�l2
	RIKAKO_B102MJ,				// �^�ʖ�
	RIKAKO_B102MU,				// ���b
	RIKAKO_B102MU2,				// ���b
	RIKAKO_B102NK,				// ����1
	RIKAKO_B102NK2,				// ����2
	RIKAKO_B102NK3,				// ����3
	RIKAKO_B102NO,				// �ʏ�
	RIKAKO_B102NS,				// ��������
	RIKAKO_B102NW,				// �����΂�
	RIKAKO_B102OD,				// ����
	RIKAKO_B102SA,				// �v��
	RIKAKO_B102SK,				// ����
	RIKAKO_B102TR,				// �Ƃ�

	//========================================================
	// ����
	// �����E�|�[�Y�P
	MIZUNA_0101AK,				// ����
	MIZUNA_0101AS,				// �ł�
	MIZUNA_0101EG,				// �Ί�
	MIZUNA_0101EG2,				// �Ί�
	MIZUNA_0101EG3,				// �Ί�
	MIZUNA_0101KS,				// ���
	MIZUNA_0101MJ,				// �^�ʖ�
	MIZUNA_0101NO,				// �ʏ�
	MIZUNA_0101NY,				// �ɂ��
	MIZUNA_0101SN,				// �X�˂�

	// �����E�|�[�Y�P
	MIZUNA_0201AK,				// ����
	MIZUNA_0201AS,				// �ł�
	MIZUNA_0201EG,				// �Ί�
	MIZUNA_0201EG2,				// �Ί�
	MIZUNA_0201EG3,				// �Ί�
	MIZUNA_0201KS,				// ���
	MIZUNA_0201MJ,				// �^�ʖ�
	MIZUNA_0201NO,				// �ʏ�
	MIZUNA_0201NY,				// �ɂ��
	MIZUNA_0201SN,				// �X�˂�

	//========================================================
	// ���ށi�o�X�g�A�b�v�j
	// �����E�|�[�Y�P
	MIZUNA_A101AK,				// ����
	MIZUNA_A101AS,				// �ł�
	MIZUNA_A101EG,				// �Ί�
	MIZUNA_A101EG2,				// �Ί�
	MIZUNA_A101EG3,				// �Ί�
	MIZUNA_A101KS,				// ���
	MIZUNA_A101MJ,				// �^�ʖ�
	MIZUNA_A101NO,				// �ʏ�
	MIZUNA_A101NY,				// �ɂ��
	MIZUNA_A101SN,				// �X�˂�

	// �����E�|�[�Y�P
	MIZUNA_A201AK,				// ����
	MIZUNA_A201AS,				// �ł�
	MIZUNA_A201EG,				// �Ί�
	MIZUNA_A201EG2,				// �Ί�
	MIZUNA_A201EG3,				// �Ί�
	MIZUNA_A201KS,				// ���
	MIZUNA_A201MJ,				// �^�ʖ�
	MIZUNA_A201NO,				// �ʏ�
	MIZUNA_A201NY,				// �ɂ��
	MIZUNA_A201SN,				// �X�˂�

	//========================================================
	// ��
	// �����E�|�[�Y�P
	ITABASHI_0101AS,			// �ł�
	ITABASHI_0101KT,			// ����Ƃ�
	ITABASHI_0101MJ,			// �^�ʖ�
	ITABASHI_0101NO,			// �ʏ�
	ITABASHI_0101SN,			// �X�˂�

	//========================================================
	// ���i�o�X�g�A�b�v�j
	// �����E�|�[�Y�P
	ITABASHI_A101AS,			// �ł�
	ITABASHI_A101KT,			// ����Ƃ�
	ITABASHI_A101MJ,			// �^�ʖ�
	ITABASHI_A101NO,			// �ʏ�
	ITABASHI_A101SN,			// �X�˂�

	//========================================================
	// �F��
	// �����E�|�[�Y�P
	YOSHIMI_0101AK,				// ����
	YOSHIMI_0101AS,				// �ł�
	YOSHIMI_0101EG,				// �Ί�
	YOSHIMI_0101KM,				// ����
	YOSHIMI_0101NK,				// ����
	YOSHIMI_0101NO,				// �ʏ�

	//========================================================
	// �F���i�o�X�g�A�b�v�j
	// �����E�|�[�Y�P
	YOSHIMI_A101AK,				// ����
	YOSHIMI_A101AS,				// �ł�
	YOSHIMI_A101EG,				// �Ί�
	YOSHIMI_A101KM,				// ����
	YOSHIMI_A101NK,				// ����
	YOSHIMI_A101NO,				// �ʏ�

	//========================================================
	// �Ђ���
	// �����E�|�[�Y�P
	HIKARI_0101BS,				// ����
	HIKARI_0101HN,				// �b��
	HIKARI_0101NO,				// �ʏ�

	//========================================================
	// �Ђ���i�o�X�g�A�b�v�j
	// �����E�|�[�Y�P
	HIKARI_A101BS,				// ����
	HIKARI_A101HN,				// �b��
	HIKARI_A101NO,				// �ʏ�

	//========================================================
	// ����
	// �����E�|�[�Y�P
	MASASHI_0101EG,				// �Ί�
	MASASHI_0101NO,				// �ʏ�
	MASASHI_0101UM,				// ����

	//========================================================
	// �����i�o�X�g�A�b�v�j
	// �����E�|�[�Y�P
	MASASHI_A101EG,				// �Ί�
	MASASHI_A101NO,				// �ʏ�
	MASASHI_A101UM,				// ����

	//========================================================
	// �݂�
	// �����E�|�[�Y�P
	MITSUE_0101EG,				// �Ί�
	MITSUE_0101HI,				// �͂��͂�
	MITSUE_0101NO,				// �ʏ�
	MITSUE_0101YR,				// ���

	//========================================================
	// �݂��i�o�X�g�A�b�v�j
	// �����E�|�[�Y�P
	MITSUE_A101EG,				// �Ί�
	MITSUE_A101HI,				// �͂��͂�
	MITSUE_A101NO,				// �ʏ�
	MITSUE_A101YR,				// ���

	//========================================================
	// ����
	// �����E�|�[�Y�P
	MISUZU_0101EG,				// �Ί�
	MISUZU_0101EG2,				// �Ί�
	MISUZU_0101EG3,				// �Ί�
	MISUZU_0101NO,				// �ʏ�
	MISUZU_0101OD,				// ����
	MISUZU_0101SA,				// �v��

	//========================================================
	// ����i�o�X�g�A�b�v�j
	// �����E�|�[�Y�P
	MISUZU_A101EG,				// �Ί�
	MISUZU_A101EG2,				// �Ί�
	MISUZU_A101EG3,				// �Ί�
	MISUZU_A101NO,				// �ʏ�
	MISUZU_A101OD,				// ����
	MISUZU_A101SA,				// �v��

	//========================================================
	// ����Y
	// �����E�|�[�Y�P
	GENICHIROU_0101NO,			// �ʏ�
	GENICHIROU_0101SK,			// ����

	//========================================================
	// ����Y�i�o�X�g�A�b�v�j
	// �����E�|�[�Y�P
	GENICHIROU_A101NO,			// �ʏ�
	GENICHIROU_A101SK,			// ����

	//========================================================
	// ��
	// �����E�|�[�Y�P
	TSUMUGI_0101EG,				// �Ί�
	TSUMUGI_0101IK,				// �{��
	TSUMUGI_0101KM,				// ����
	TSUMUGI_0101MJ,				// �^�ʖ�
	TSUMUGI_0101NO,				// �ʏ�
	TSUMUGI_0101NR,				// �ɂ�

	//========================================================
	// �ہi�o�X�g�A�b�v�j
	// �����E�|�[�Y�P
	TSUMUGI_A101EG,				// �Ί�
	TSUMUGI_A101IK,				// �{��
	TSUMUGI_A101KM,				// ����
	TSUMUGI_A101MJ,				// �^�ʖ�
	TSUMUGI_A101NO,				// �ʏ�
	TSUMUGI_A101NR,				// �ɂ�

	//========================================================
	// ��
	// �����E�|�[�Y�P
	MIDORI_0101BS,				// ����
	MIDORI_0101MJ,				// �^�ʖ�
	MIDORI_0101OD,				// ����

	//========================================================
	// �o������
	// �����E�|�[�Y�P
	BARA_0101MJ,				// �^�ʖ�

	STAND_MAX
};


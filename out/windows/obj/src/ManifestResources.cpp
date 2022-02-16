#include <hxcpp.h>

#ifndef INCLUDED_ManifestResources
#include <ManifestResources.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED___ASSET__OPENFL__flixel_fonts_monsterrat_ttf
#include <__ASSET__OPENFL__flixel_fonts_monsterrat_ttf.h>
#endif
#ifndef INCLUDED___ASSET__OPENFL__flixel_fonts_nokiafc22_ttf
#include <__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf.h>
#endif
#ifndef INCLUDED___ASSET__OPENFL__res_monsterrat_ttf
#include <__ASSET__OPENFL__res_monsterrat_ttf.h>
#endif
#ifndef INCLUDED___ASSET__OPENFL__res_nokiafc22_ttf
#include <__ASSET__OPENFL__res_nokiafc22_ttf.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_AssetManifest
#include <lime/utils/AssetManifest.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6b0b98c45b3017d4_25_init,"ManifestResources","init",0xc8e10c68,"ManifestResources.init","ManifestResources.hx",25,0xf77aa668)

void ManifestResources_obj::__construct() { }

Dynamic ManifestResources_obj::__CreateEmpty() { return new ManifestResources_obj; }

void *ManifestResources_obj::_hx_vtable = 0;

Dynamic ManifestResources_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ManifestResources_obj > _hx_result = new ManifestResources_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ManifestResources_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f5bd976;
}

::Array< ::Dynamic> ManifestResources_obj::preloadLibraries;

::Array< ::String > ManifestResources_obj::preloadLibraryNames;

::String ManifestResources_obj::rootPath;

void ManifestResources_obj::init( ::Dynamic config){
            	HX_STACKFRAME(&_hx_pos_6b0b98c45b3017d4_25_init)
HXLINE(  27)		::ManifestResources_obj::preloadLibraries = ::Array_obj< ::Dynamic>::__new();
HXLINE(  28)		::ManifestResources_obj::preloadLibraryNames = ::Array_obj< ::String >::__new();
HXLINE(  30)		::ManifestResources_obj::rootPath = null();
HXLINE(  32)		bool _hx_tmp;
HXDLIN(  32)		if (::hx::IsNotNull( config )) {
HXLINE(  32)			_hx_tmp = ::Reflect_obj::hasField(config,HX_("rootPath",e7,b8,88,e1));
            		}
            		else {
HXLINE(  32)			_hx_tmp = false;
            		}
HXDLIN(  32)		if (_hx_tmp) {
HXLINE(  34)			::ManifestResources_obj::rootPath = ( (::String)(::Reflect_obj::field(config,HX_("rootPath",e7,b8,88,e1))) );
            		}
HXLINE(  38)		if (::hx::IsNull( ::ManifestResources_obj::rootPath )) {
HXLINE(  47)			::ManifestResources_obj::rootPath = HX_("./",41,28,00,00);
            		}
HXLINE(  53)		::openfl::text::Font_obj::registerFont(::hx::ClassOf< ::__ASSET__OPENFL__res_monsterrat_ttf >());
HXLINE(  54)		::openfl::text::Font_obj::registerFont(::hx::ClassOf< ::__ASSET__OPENFL__res_nokiafc22_ttf >());
HXLINE(  55)		::openfl::text::Font_obj::registerFont(::hx::ClassOf< ::__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf >());
HXLINE(  56)		::openfl::text::Font_obj::registerFont(::hx::ClassOf< ::__ASSET__OPENFL__flixel_fonts_monsterrat_ttf >());
HXLINE(  60)		 ::Dynamic bundle;
HXDLIN(  60)		::String data = HX_("{\"name\":null,\"assets\":\"aoy4:sizei29724y4:typey4:FONTy9:classNamey27:__ASSET__res_monsterrat_ttfy2:idy20:res%2Fmonsterrat.ttfgoR0i15744R1R2R3y26:__ASSET__res_nokiafc22_ttfR5y19:res%2Fnokiafc22.ttfgoR0i5794R1y5:SOUNDR3y31:__ASSET__flixel_sounds_beep_oggR5y26:flixel%2Fsounds%2Fbeep.ogggoR0i33629R1R9R3y33:__ASSET__flixel_sounds_flixel_oggR5y28:flixel%2Fsounds%2Fflixel.ogggoR0i15744R1R2R3y35:__ASSET__flixel_fonts_nokiafc22_ttfR5y30:flixel%2Ffonts%2Fnokiafc22.ttfgoR0i29724R1R2R3y36:__ASSET__flixel_fonts_monsterrat_ttfR5y31:flixel%2Ffonts%2Fmonsterrat.ttfgoR0i519R1y5:IMAGER3y36:__ASSET__flixel_images_ui_button_pngR5y33:flixel%2Fimages%2Fui%2Fbutton.pnggoR0i3280R1R18R3y39:__ASSET__flixel_images_logo_default_pngR5y36:flixel%2Fimages%2Flogo%2Fdefault.pnggoR0i912R1R18R3y37:__ASSET__flixel_flixel_ui_img_box_pngR5y34:flixel%2Fflixel-ui%2Fimg%2Fbox.pnggoR0i433R1R18R3y40:__ASSET__flixel_flixel_ui_img_button_pngR5y37:flixel%2Fflixel-ui%2Fimg%2Fbutton.pnggoR0i446R1R18R3y51:__ASSET__flixel_flixel_ui_img_button_arrow_down_pngR5y48:flixel%2Fflixel-ui%2Fimg%2Fbutton_arrow_down.pnggoR0i459R1R18R3y51:__ASSET__flixel_flixel_ui_img_button_arrow_left_pngR5y48:flixel%2Fflixel-ui%2Fimg%2Fbutton_arrow_left.pnggoR0i511R1R18R3y52:__ASSET__flixel_flixel_ui_img_button_arrow_right_pngR5y49:flixel%2Fflixel-ui%2Fimg%2Fbutton_arrow_right.pnggoR0i493R1R18R3y49:__ASSET__flixel_flixel_ui_img_button_arrow_up_pngR5y46:flixel%2Fflixel-ui%2Fimg%2Fbutton_arrow_up.pnggoR0i247R1R18R3y45:__ASSET__flixel_flixel_ui_img_button_thin_pngR5y42:flixel%2Fflixel-ui%2Fimg%2Fbutton_thin.pnggoR0i534R1R18R3y47:__ASSET__flixel_flixel_ui_img_button_toggle_pngR5y44:flixel%2Fflixel-ui%2Fimg%2Fbutton_toggle.pnggoR0i922R1R18R3y43:__ASSET__flixel_flixel_ui_img_check_box_pngR5y40:flixel%2Fflixel-ui%2Fimg%2Fcheck_box.pnggoR0i946R1R18R3y44:__ASSET__flixel_flixel_ui_img_check_mark_pngR5y41:flixel%2Fflixel-ui%2Fimg%2Fcheck_mark.pnggoR0i253R1R18R3y40:__ASSET__flixel_flixel_ui_img_chrome_pngR5y37:flixel%2Fflixel-ui%2Fimg%2Fchrome.pnggoR0i212R1R18R3y45:__ASSET__flixel_flixel_ui_img_chrome_flat_pngR5y42:flixel%2Fflixel-ui%2Fimg%2Fchrome_flat.pnggoR0i192R1R18R3y46:__ASSET__flixel_flixel_ui_img_chrome_inset_pngR5y43:flixel%2Fflixel-ui%2Fimg%2Fchrome_inset.pnggoR0i214R1R18R3y46:__ASSET__flixel_flixel_ui_img_chrome_light_pngR5y43:flixel%2Fflixel-ui%2Fimg%2Fchrome_light.pnggoR0i156R1R18R3y47:__ASSET__flixel_flixel_ui_img_dropdown_mark_pngR5y44:flixel%2Fflixel-ui%2Fimg%2Fdropdown_mark.pnggoR0i1724R1R18R3y44:__ASSET__flixel_flixel_ui_img_finger_big_pngR5y41:flixel%2Fflixel-ui%2Fimg%2Ffinger_big.pnggoR0i294R1R18R3y46:__ASSET__flixel_flixel_ui_img_finger_small_pngR5y43:flixel%2Fflixel-ui%2Fimg%2Ffinger_small.pnggoR0i129R1R18R3y41:__ASSET__flixel_flixel_ui_img_hilight_pngR5y38:flixel%2Fflixel-ui%2Fimg%2Fhilight.pnggoR0i128R1R18R3y39:__ASSET__flixel_flixel_ui_img_invis_pngR5y36:flixel%2Fflixel-ui%2Fimg%2Finvis.pnggoR0i136R1R18R3y44:__ASSET__flixel_flixel_ui_img_minus_mark_pngR5y41:flixel%2Fflixel-ui%2Fimg%2Fminus_mark.pnggoR0i147R1R18R3y43:__ASSET__flixel_flixel_ui_img_plus_mark_pngR5y40:flixel%2Fflixel-ui%2Fimg%2Fplus_mark.pnggoR0i191R1R18R3y39:__ASSET__flixel_flixel_ui_img_radio_pngR5y36:flixel%2Fflixel-ui%2Fimg%2Fradio.pnggoR0i153R1R18R3y43:__ASSET__flixel_flixel_ui_img_radio_dot_pngR5y40:flixel%2Fflixel-ui%2Fimg%2Fradio_dot.pnggoR0i185R1R18R3y40:__ASSET__flixel_flixel_ui_img_swatch_pngR5y37:flixel%2Fflixel-ui%2Fimg%2Fswatch.pnggoR0i201R1R18R3y37:__ASSET__flixel_flixel_ui_img_tab_pngR5y34:flixel%2Fflixel-ui%2Fimg%2Ftab.pnggoR0i210R1R18R3y42:__ASSET__flixel_flixel_ui_img_tab_back_pngR5y39:flixel%2Fflixel-ui%2Fimg%2Ftab_back.pnggoR0i18509R1R18R3y47:__ASSET__flixel_flixel_ui_img_tooltip_arrow_pngR5y44:flixel%2Fflixel-ui%2Fimg%2Ftooltip_arrow.pnggoR0i1263R1y4:TEXTR3y42:__ASSET__flixel_flixel_ui_xml_defaults_xmlR5y39:flixel%2Fflixel-ui%2Fxml%2Fdefaults.xmlgoR0i1953R1R77R3y56:__ASSET__flixel_flixel_ui_xml_default_loading_screen_xmlR5y53:flixel%2Fflixel-ui%2Fxml%2Fdefault_loading_screen.xmlgoR0i1848R1R77R3y47:__ASSET__flixel_flixel_ui_xml_default_popup_xmlR5y44:flixel%2Fflixel-ui%2Fxml%2Fdefault_popup.xmlgh\",\"rootPath\":null,\"version\":2,\"libraryArgs\":[],\"libraryType\":null}",5c,d8,a5,c9);
HXDLIN(  60)		 ::lime::utils::AssetManifest manifest = ::lime::utils::AssetManifest_obj::parse(data,::ManifestResources_obj::rootPath);
HXDLIN(  60)		 ::lime::utils::AssetLibrary library = ::lime::utils::AssetLibrary_obj::fromManifest(manifest);
HXLINE(  76)		::lime::utils::Assets_obj::registerLibrary(HX_("default",c1,d8,c3,9b),library);
HXLINE(  79)		library = ::lime::utils::Assets_obj::getLibrary(HX_("default",c1,d8,c3,9b));
HXLINE(  80)		if (::hx::IsNotNull( library )) {
HXLINE(  80)			::ManifestResources_obj::preloadLibraries->push(library);
            		}
            		else {
HXLINE(  81)			::ManifestResources_obj::preloadLibraryNames->push(HX_("default",c1,d8,c3,9b));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ManifestResources_obj,init,(void))


ManifestResources_obj::ManifestResources_obj()
{
}

bool ManifestResources_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rootPath") ) { outValue = ( rootPath ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"preloadLibraries") ) { outValue = ( preloadLibraries ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"preloadLibraryNames") ) { outValue = ( preloadLibraryNames ); return true; }
	}
	return false;
}

bool ManifestResources_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"rootPath") ) { rootPath=ioValue.Cast< ::String >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"preloadLibraries") ) { preloadLibraries=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"preloadLibraryNames") ) { preloadLibraryNames=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ManifestResources_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ManifestResources_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &ManifestResources_obj::preloadLibraries,HX_("preloadLibraries",10,27,df,e6)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &ManifestResources_obj::preloadLibraryNames,HX_("preloadLibraryNames",36,48,52,5c)},
	{::hx::fsString,(void *) &ManifestResources_obj::rootPath,HX_("rootPath",e7,b8,88,e1)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ManifestResources_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ManifestResources_obj::preloadLibraries,"preloadLibraries");
	HX_MARK_MEMBER_NAME(ManifestResources_obj::preloadLibraryNames,"preloadLibraryNames");
	HX_MARK_MEMBER_NAME(ManifestResources_obj::rootPath,"rootPath");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ManifestResources_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ManifestResources_obj::preloadLibraries,"preloadLibraries");
	HX_VISIT_MEMBER_NAME(ManifestResources_obj::preloadLibraryNames,"preloadLibraryNames");
	HX_VISIT_MEMBER_NAME(ManifestResources_obj::rootPath,"rootPath");
};

#endif

::hx::Class ManifestResources_obj::__mClass;

static ::String ManifestResources_obj_sStaticFields[] = {
	HX_("preloadLibraries",10,27,df,e6),
	HX_("preloadLibraryNames",36,48,52,5c),
	HX_("rootPath",e7,b8,88,e1),
	HX_("init",10,3b,bb,45),
	::String(null())
};

void ManifestResources_obj::__register()
{
	ManifestResources_obj _hx_dummy;
	ManifestResources_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ManifestResources",16,0e,30,56);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ManifestResources_obj::__GetStatic;
	__mClass->mSetStaticField = &ManifestResources_obj::__SetStatic;
	__mClass->mMarkFunc = ManifestResources_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ManifestResources_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ManifestResources_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ManifestResources_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ManifestResources_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ManifestResources_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}


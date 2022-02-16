#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_omega_engine_hub_window_MainUI
#include <omega/engine/hub/window/MainUI.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d1369ad2bce2f96a_7_new,"omega.engine.hub.window.MainUI","new",0x5058c9a5,"omega.engine.hub.window.MainUI.new","omega/engine/hub/window/MainUI.hx",7,0x21417d6b)
HX_LOCAL_STACK_FRAME(_hx_pos_d1369ad2bce2f96a_13_create,"omega.engine.hub.window.MainUI","create",0xca47c6d7,"omega.engine.hub.window.MainUI.create","omega/engine/hub/window/MainUI.hx",13,0x21417d6b)
HX_LOCAL_STACK_FRAME(_hx_pos_d1369ad2bce2f96a_21_update,"omega.engine.hub.window.MainUI","update",0xd53de5e4,"omega.engine.hub.window.MainUI.update","omega/engine/hub/window/MainUI.hx",21,0x21417d6b)
namespace omega{
namespace engine{
namespace hub{
namespace window{

void MainUI_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_d1369ad2bce2f96a_7_new)
HXLINE(   8)		this->elapsed = ((Float)0);
HXLINE(   7)		super::__construct(MaxSize);
            	}

Dynamic MainUI_obj::__CreateEmpty() { return new MainUI_obj; }

void *MainUI_obj::_hx_vtable = 0;

Dynamic MainUI_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MainUI_obj > _hx_result = new MainUI_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MainUI_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5c6cef4f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x5c6cef4f;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void MainUI_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_d1369ad2bce2f96a_13_create)
HXLINE(  14)		this->super::create();
HXLINE(  16)		this->title =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,0,HX_("Omega Engine",e1,da,2d,f5),null(),null())->setFormat(HX_("res/monsterrat.ttf",12,32,d1,ff),48,null(),null(),null(),null(),null());
HXLINE(  17)		this->title->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  18)		this->add(this->title);
            	}


void MainUI_obj::update(Float dt){
            	HX_STACKFRAME(&_hx_pos_d1369ad2bce2f96a_21_update)
HXLINE(  22)		this->super::update(dt);
HXLINE(  23)		 ::omega::engine::hub::window::MainUI _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  23)		_hx_tmp->elapsed = (_hx_tmp->elapsed + dt);
            	}



::hx::ObjectPtr< MainUI_obj > MainUI_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< MainUI_obj > __this = new MainUI_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< MainUI_obj > MainUI_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	MainUI_obj *__this = (MainUI_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MainUI_obj), true, "omega.engine.hub.window.MainUI"));
	*(void **)__this = MainUI_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

MainUI_obj::MainUI_obj()
{
}

void MainUI_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainUI);
	HX_MARK_MEMBER_NAME(elapsed,"elapsed");
	HX_MARK_MEMBER_NAME(title,"title");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainUI_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(elapsed,"elapsed");
	HX_VISIT_MEMBER_NAME(title,"title");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MainUI_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return ::hx::Val( title ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"elapsed") ) { return ::hx::Val( elapsed ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MainUI_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"elapsed") ) { elapsed=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MainUI_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("elapsed",3c,98,c0,ba));
	outFields->push(HX_("title",98,15,3b,10));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MainUI_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(MainUI_obj,elapsed),HX_("elapsed",3c,98,c0,ba)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(MainUI_obj,title),HX_("title",98,15,3b,10)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MainUI_obj_sStaticStorageInfo = 0;
#endif

static ::String MainUI_obj_sMemberFields[] = {
	HX_("elapsed",3c,98,c0,ba),
	HX_("title",98,15,3b,10),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class MainUI_obj::__mClass;

void MainUI_obj::__register()
{
	MainUI_obj _hx_dummy;
	MainUI_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("omega.engine.hub.window.MainUI",33,13,28,83);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MainUI_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MainUI_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MainUI_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MainUI_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace omega
} // end namespace engine
} // end namespace hub
} // end namespace window

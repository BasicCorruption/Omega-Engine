#ifndef INCLUDED_omega_engine_hub_window_MainUI
#define INCLUDED_omega_engine_hub_window_MainUI

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS4(omega,engine,hub,window,MainUI)

namespace omega{
namespace engine{
namespace hub{
namespace window{


class HXCPP_CLASS_ATTRIBUTES MainUI_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef MainUI_obj OBJ_;
		MainUI_obj();

	public:
		enum { _hx_ClassId = 0x5c6cef4f };

		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="omega.engine.hub.window.MainUI")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"omega.engine.hub.window.MainUI"); }
		static ::hx::ObjectPtr< MainUI_obj > __new( ::Dynamic MaxSize);
		static ::hx::ObjectPtr< MainUI_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MainUI_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MainUI",ed,36,14,e9); }

		Float elapsed;
		 ::flixel::text::FlxText title;
		void create();

		void update(Float dt);

};

} // end namespace omega
} // end namespace engine
} // end namespace hub
} // end namespace window

#endif /* INCLUDED_omega_engine_hub_window_MainUI */ 

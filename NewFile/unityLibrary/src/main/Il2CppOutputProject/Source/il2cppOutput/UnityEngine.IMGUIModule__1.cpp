#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.Font>
struct Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`2<System.Exception,System.Boolean>
struct Func_2_tDDBE08B46BEFDD869DE0B97D023CB9C89674FED6;
// System.Func`3<System.Int32,System.IntPtr,System.Boolean>
struct Func_3_t2376B3D8C7A437FC32F21C4C4E4B3E7D2302007C;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>
struct KeyCollection_t851423C7344032A1F54545C69FC6507778294D6C;
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
struct ValueCollection_t6CD4B9552B29D570FBA4E0145D0C98841ECCC8C1;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Object>[]
struct EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.GUIStyle>[]
struct EntryU5BU5D_tAEFE165DEE6FDB9F2B657E11D15B8C95DD88B0C2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.CultureAwareComparer
struct CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// System.Exception
struct Exception_t;
// UnityEngine.ExitGUIException
struct ExitGUIException_tFF2EEEBACD9E5684D6112478EEF754B74D154549;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F;
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14;
// UnityEngine.GUIScrollGroup
struct GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5;
// UnityEngine.GUISettings
struct GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847;
// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
// UnityEngine.GUIWordWrapSizer
struct GUIWordWrapSizer_t915CE8588C443243630F7737947CA87B42965A36;
// UnityEngineInternal.GenericStack
struct GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.OrdinalCaseSensitiveComparer
struct OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A;
// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.ScrollViewState
struct ScrollViewState_t004FCCBFB6795BD76582385D6D308D8F9ECF41B6;
// UnityEngine.SliderState
struct SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98;

IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t6FCF94B18593967BB1EA62E38DDD1FA537144AA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventType_tC62F0D77DB08D7326B58B2D8CF43BD45CFD3203E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStateObjects_t98BE277CEE5125AA017EAE4422D8537F701EE15D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemClock_t7FB49720CB6EB45355732FFF44905D860E2397B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2____m_Image_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95____m_SourceStyle_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580____m_Normal_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83____slider_5_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0484F5252B12C569CD2F3AEE4FCFD5DBE3C5967F;
IL2CPP_EXTERN_C String_t* _stringLiteral05CF9CF5853B675491570E9D20951E373F208902;
IL2CPP_EXTERN_C String_t* _stringLiteral0993C31116DED8F2DAA78B6A73E3149497A84400;
IL2CPP_EXTERN_C String_t* _stringLiteral123B2E5CFC7B5F49F61A9A7E042BC077972AB7EA;
IL2CPP_EXTERN_C String_t* _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2ACA29C4E59869B5D453E2775263A84E06EDA03D;
IL2CPP_EXTERN_C String_t* _stringLiteral3A5D56B26B1A9CEDE88C8DBEC1D7FF8296992654;
IL2CPP_EXTERN_C String_t* _stringLiteral3A8647DA913120027BE0BCA389585AB5B1E2C75D;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral3C4F52AE03EA8FEF5DEAA4BF1DCF2792C970C821;
IL2CPP_EXTERN_C String_t* _stringLiteral3D5EBA7CCD58DABCEC7A4FD33516FBE9E3482887;
IL2CPP_EXTERN_C String_t* _stringLiteral427F9C39B825298A84F532F59ACB9D4467A1137C;
IL2CPP_EXTERN_C String_t* _stringLiteral514D6E12CA97253D25F742A6EB2CC9B8B2EE8149;
IL2CPP_EXTERN_C String_t* _stringLiteral5934735AA968E0CB7CB39062B758A93F76F5591C;
IL2CPP_EXTERN_C String_t* _stringLiteral5FCA7CBE61ADC605F9F35C467CFE5D765D935400;
IL2CPP_EXTERN_C String_t* _stringLiteral622B9A1A51AC02C383A8F43FC542A76D2C0AF6A2;
IL2CPP_EXTERN_C String_t* _stringLiteral6866F44FE25F48E7BF04C35DA2F4C670D2021A33;
IL2CPP_EXTERN_C String_t* _stringLiteral74DA73DF8411070FEB987DE79D4529EE39FB3D96;
IL2CPP_EXTERN_C String_t* _stringLiteral760865C55F22E06913EE529E43E0A4EC6D4C2957;
IL2CPP_EXTERN_C String_t* _stringLiteral780401B090EAF1BCE81DDE534AEE885AE001D0DB;
IL2CPP_EXTERN_C String_t* _stringLiteral7D88FE441DA1C11DA793F92B7B7665BEED176766;
IL2CPP_EXTERN_C String_t* _stringLiteral80F799C8D4F8B264EFFA6ADAB5F6D1169403E1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral8174CA9CD84F86539853890382CF5C587FB8B9BE;
IL2CPP_EXTERN_C String_t* _stringLiteral85E4DD1872CA9889B201BF423506257FB4DB467C;
IL2CPP_EXTERN_C String_t* _stringLiteral86037F1A053094FF729BA5C5CACF4EDF8B6B38A3;
IL2CPP_EXTERN_C String_t* _stringLiteral8635E0BF76851ADF21ED9AAEC3F8566DAE26898E;
IL2CPP_EXTERN_C String_t* _stringLiteral8E59446B468A9A7AC0FBE64297CB598A1D6DD96C;
IL2CPP_EXTERN_C String_t* _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
IL2CPP_EXTERN_C String_t* _stringLiteral9844A7472D6104C0F2F6D65CB10A10F7C0C637C0;
IL2CPP_EXTERN_C String_t* _stringLiteral9B9EF66DAA3B5CC54EF182295D9A9980A1C9B23D;
IL2CPP_EXTERN_C String_t* _stringLiteral9F15982CC17EE718C2AFB3B1C125ACC1A65D2362;
IL2CPP_EXTERN_C String_t* _stringLiteralA7BF1F00A512D96C33F2BBA9B709990FB1899ECF;
IL2CPP_EXTERN_C String_t* _stringLiteralA8B948094C8FA05C32A4A7D097D73A3418E2EEA1;
IL2CPP_EXTERN_C String_t* _stringLiteralB31A5E45A7336CF4E926743AF852C59783F5D947;
IL2CPP_EXTERN_C String_t* _stringLiteralC8AFE89D158D2722B833D3EB38ECF175C82B1722;
IL2CPP_EXTERN_C String_t* _stringLiteralCB34F9B2DD59C1BD2C15FA5E7192661406CCDF4C;
IL2CPP_EXTERN_C String_t* _stringLiteralCC53E2F11D267A4FEC8C78116C6E1E0AC0021CA5;
IL2CPP_EXTERN_C String_t* _stringLiteralCEA0ED0066879A12EF7428466404FD5A318EEDDA;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF3D711BA856837A5D3C34CA2103E03C173D6F4C7;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m0F9A65F9363E92E29717C15EEEA8A71A2DB8D402_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m39AE7A2B779870855E3AC853F234C40F6735ACF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m923D794849584E9B0675E86D09B54BA6691944D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m88DC4BD4D4952C7D4B15BE9CC164DF1EAA69A197_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com;;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke;;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke;;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
struct GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tAEFE165DEE6FDB9F2B657E11D15B8C95DD88B0C2* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t851423C7344032A1F54545C69FC6507778294D6C* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t6CD4B9552B29D570FBA4E0145D0C98841ECCC8C1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
struct ValueCollection_t6CD4B9552B29D570FBA4E0145D0C98841ECCC8C1  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* ____dictionary_0;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tCA0A4120E1B13462A402E739CE2DD9CA72BAC713  : public RuntimeObject
{
};

// UnityEngine.GUI
struct GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A  : public RuntimeObject
{
};

// UnityEngine.GUIClip
struct GUIClip_t6049AB1B245065014011639ADCF204EE3668221B  : public RuntimeObject
{
};

// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2  : public RuntimeObject
{
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};

// UnityEngine.GUIStateObjects
struct GUIStateObjects_t98BE277CEE5125AA017EAE4422D8537F701EE15D  : public RuntimeObject
{
};

// UnityEngine.GUIUtility
struct GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UnityEngine.ScrollViewState
struct ScrollViewState_t004FCCBFB6795BD76582385D6D308D8F9ECF41B6  : public RuntimeObject
{
};

// UnityEngine.SliderState
struct SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8  : public RuntimeObject
{
	// System.Single UnityEngine.SliderState::dragStartPos
	float ___dragStartPos_0;
	// System.Single UnityEngine.SliderState::dragStartValue
	float ___dragStartValue_1;
	// System.Boolean UnityEngine.SliderState::isDragging
	bool ___isDragging_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GUIStyle>
struct Enumerator_t6FCF94B18593967BB1EA62E38DDD1FA537144AA9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ____currentValue_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// UnityEngine.EventInterests
struct EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8 
{
	// System.Boolean UnityEngine.EventInterests::<wantsMouseMove>k__BackingField
	bool ___U3CwantsMouseMoveU3Ek__BackingField_0;
	// System.Boolean UnityEngine.EventInterests::<wantsMouseEnterLeaveWindow>k__BackingField
	bool ___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1;
	// System.Boolean UnityEngine.EventInterests::<wantsLessLayoutEvents>k__BackingField
	bool ___U3CwantsLessLayoutEventsU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventInterests
struct EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshaled_pinvoke
{
	int32_t ___U3CwantsMouseMoveU3Ek__BackingField_0;
	int32_t ___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1;
	int32_t ___U3CwantsLessLayoutEventsU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.EventInterests
struct EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshaled_com
{
	int32_t ___U3CwantsMouseMoveU3Ek__BackingField_0;
	int32_t ___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1;
	int32_t ___U3CwantsLessLayoutEventsU3Ek__BackingField_2;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// System.OrdinalComparer
struct OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170  : public StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06
{
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.GUIClip/ParentClipScope
struct ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52 
{
	// System.Boolean UnityEngine.GUIClip/ParentClipScope::m_Disposed
	bool ___m_Disposed_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIClip/ParentClipScope
struct ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshaled_pinvoke
{
	int32_t ___m_Disposed_0;
};
// Native definition for COM marshalling of UnityEngine.GUIClip/ParentClipScope
struct ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshaled_com
{
	int32_t ___m_Disposed_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Event::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventType
struct EventType_tC62F0D77DB08D7326B58B2D8CF43BD45CFD3203E 
{
	// System.Int32 UnityEngine.EventType::value__
	int32_t ___value___2;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.FontStyle
struct FontStyle_tDD46734FA9BCB99FB315CD7CAD1137EE536136D1 
{
	// System.Int32 UnityEngine.FontStyle::value__
	int32_t ___value___2;
};

// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F  : public RuntimeObject
{
	// System.Single UnityEngine.GUILayoutEntry::minWidth
	float ___minWidth_0;
	// System.Single UnityEngine.GUILayoutEntry::maxWidth
	float ___maxWidth_1;
	// System.Single UnityEngine.GUILayoutEntry::minHeight
	float ___minHeight_2;
	// System.Single UnityEngine.GUILayoutEntry::maxHeight
	float ___maxHeight_3;
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::rect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect_4;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchWidth
	int32_t ___stretchWidth_5;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchHeight
	int32_t ___stretchHeight_6;
	// System.Boolean UnityEngine.GUILayoutEntry::consideredForMargin
	bool ___consideredForMargin_7;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::m_Style
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_Style_8;
};

// UnityEngine.GUISettings
struct GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847  : public RuntimeObject
{
	// System.Boolean UnityEngine.GUISettings::m_DoubleClickSelectsWord
	bool ___m_DoubleClickSelectsWord_0;
	// System.Boolean UnityEngine.GUISettings::m_TripleClickSelectsLine
	bool ___m_TripleClickSelectsLine_1;
	// UnityEngine.Color UnityEngine.GUISettings::m_CursorColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CursorColor_2;
	// System.Single UnityEngine.GUISettings::m_CursorFlashSpeed
	float ___m_CursorFlashSpeed_3;
	// UnityEngine.Color UnityEngine.GUISettings::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_4;
};

// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com* ___m_SourceStyle_1;
};

// UnityEngine.ImagePosition
struct ImagePosition_t212A61E2D70E1854E3BAABD91C20A8B71FA28D01 
{
	// System.Int32 UnityEngine.ImagePosition::value__
	int32_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0  : public OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170
{
};

// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.SliderHandler
struct SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83 
{
	// UnityEngine.Rect UnityEngine.SliderHandler::position
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position_0;
	// System.Single UnityEngine.SliderHandler::currentValue
	float ___currentValue_1;
	// System.Single UnityEngine.SliderHandler::size
	float ___size_2;
	// System.Single UnityEngine.SliderHandler::start
	float ___start_3;
	// System.Single UnityEngine.SliderHandler::end
	float ___end_4;
	// UnityEngine.GUIStyle UnityEngine.SliderHandler::slider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___slider_5;
	// UnityEngine.GUIStyle UnityEngine.SliderHandler::thumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___thumb_6;
	// UnityEngine.GUIStyle UnityEngine.SliderHandler::thumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___thumbExtent_7;
	// System.Boolean UnityEngine.SliderHandler::horiz
	bool ___horiz_8;
	// System.Int32 UnityEngine.SliderHandler::id
	int32_t ___id_9;
};
// Native definition for P/Invoke marshalling of UnityEngine.SliderHandler
struct SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_marshaled_pinvoke
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position_0;
	float ___currentValue_1;
	float ___size_2;
	float ___start_3;
	float ___end_4;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke* ___slider_5;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke* ___thumb_6;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke* ___thumbExtent_7;
	int32_t ___horiz_8;
	int32_t ___id_9;
};
// Native definition for COM marshalling of UnityEngine.SliderHandler
struct SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_marshaled_com
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position_0;
	float ___currentValue_1;
	float ___size_2;
	float ___start_3;
	float ___end_4;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com* ___slider_5;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com* ___thumb_6;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com* ___thumbExtent_7;
	int32_t ___horiz_8;
	int32_t ___id_9;
};

// UnityEngine.TextAnchor
struct TextAnchor_tA46E794186AC1CD0F22888652F589EBF7DFDF830 
{
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;
};

// UnityEngine.TextClipping
struct TextClipping_t1F96F2BE75725AB66B35C56B06F479BCB1C822AD 
{
	// System.Int32 UnityEngine.TextClipping::value__
	int32_t ___value___2;
};

// UnityEngine.GUILayoutOption/Type
struct Type_t94B090894A3B9A5C5AEBD91800DB10688CC00F4A 
{
	// System.Int32 UnityEngine.GUILayoutOption/Type::value__
	int32_t ___value___2;
};

// UnityEngine.ExitGUIException
struct ExitGUIException_tFF2EEEBACD9E5684D6112478EEF754B74D154549  : public Exception_t
{
};

// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1* ___m_FontTextureRebuildCallback_5;
};

// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D  : public GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F
{
	// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry> UnityEngine.GUILayoutGroup::entries
	List_1_tA5BCD116CC751A5F35C7D3D7B96DC3A5D22B9C82* ___entries_11;
	// System.Boolean UnityEngine.GUILayoutGroup::isVertical
	bool ___isVertical_12;
	// System.Boolean UnityEngine.GUILayoutGroup::resetCoords
	bool ___resetCoords_13;
	// System.Single UnityEngine.GUILayoutGroup::spacing
	float ___spacing_14;
	// System.Boolean UnityEngine.GUILayoutGroup::sameSize
	bool ___sameSize_15;
	// System.Boolean UnityEngine.GUILayoutGroup::isWindow
	bool ___isWindow_16;
	// System.Int32 UnityEngine.GUILayoutGroup::windowID
	int32_t ___windowID_17;
	// System.Int32 UnityEngine.GUILayoutGroup::m_Cursor
	int32_t ___m_Cursor_18;
	// System.Int32 UnityEngine.GUILayoutGroup::m_StretchableCountX
	int32_t ___m_StretchableCountX_19;
	// System.Int32 UnityEngine.GUILayoutGroup::m_StretchableCountY
	int32_t ___m_StretchableCountY_20;
	// System.Boolean UnityEngine.GUILayoutGroup::m_UserSpecifiedWidth
	bool ___m_UserSpecifiedWidth_21;
	// System.Boolean UnityEngine.GUILayoutGroup::m_UserSpecifiedHeight
	bool ___m_UserSpecifiedHeight_22;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMinWidth
	float ___m_ChildMinWidth_23;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMaxWidth
	float ___m_ChildMaxWidth_24;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMinHeight
	float ___m_ChildMinHeight_25;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMaxHeight
	float ___m_ChildMaxHeight_26;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginLeft
	int32_t ___m_MarginLeft_27;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginRight
	int32_t ___m_MarginRight_28;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginTop
	int32_t ___m_MarginTop_29;
	// System.Int32 UnityEngine.GUILayoutGroup::m_MarginBottom
	int32_t ___m_MarginBottom_30;
};

// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14  : public RuntimeObject
{
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject* ___value_1;
};

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GUIWordWrapSizer
struct GUIWordWrapSizer_t915CE8588C443243630F7737947CA87B42965A36  : public GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F
{
	// UnityEngine.GUIContent UnityEngine.GUIWordWrapSizer::m_Content
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___m_Content_11;
	// System.Single UnityEngine.GUIWordWrapSizer::m_ForcedMinHeight
	float ___m_ForcedMinHeight_12;
	// System.Single UnityEngine.GUIWordWrapSizer::m_ForcedMaxHeight
	float ___m_ForcedMaxHeight_13;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.GUIScrollGroup
struct GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5  : public GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D
{
	// System.Single UnityEngine.GUIScrollGroup::calcMinWidth
	float ___calcMinWidth_32;
	// System.Single UnityEngine.GUIScrollGroup::calcMaxWidth
	float ___calcMaxWidth_33;
	// System.Single UnityEngine.GUIScrollGroup::calcMinHeight
	float ___calcMinHeight_34;
	// System.Single UnityEngine.GUIScrollGroup::calcMaxHeight
	float ___calcMaxHeight_35;
	// System.Single UnityEngine.GUIScrollGroup::clientWidth
	float ___clientWidth_36;
	// System.Single UnityEngine.GUIScrollGroup::clientHeight
	float ___clientHeight_37;
	// System.Boolean UnityEngine.GUIScrollGroup::allowHorizontalScroll
	bool ___allowHorizontalScroll_38;
	// System.Boolean UnityEngine.GUIScrollGroup::allowVerticalScroll
	bool ___allowVerticalScroll_39;
	// System.Boolean UnityEngine.GUIScrollGroup::needsHorizontalScrollbar
	bool ___needsHorizontalScrollbar_40;
	// System.Boolean UnityEngine.GUIScrollGroup::needsVerticalScrollbar
	bool ___needsVerticalScrollbar_41;
	// UnityEngine.GUIStyle UnityEngine.GUIScrollGroup::horizontalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___horizontalScrollbar_42;
	// UnityEngine.GUIStyle UnityEngine.GUIScrollGroup::verticalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___verticalScrollbar_43;
};

// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_SliderMixed
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SliderMixed_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbar_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarThumb_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarLeftButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarRightButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbar_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarThumb_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarUpButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarDownButton_26;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_ScrollView_27;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* ___m_CustomStyles_28;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* ___m_Settings_29;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* ___m_Styles_31;
};

// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98  : public MulticastDelegate_t
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>

// <PrivateImplementationDetails>

// <PrivateImplementationDetails>

// UnityEngine.GUI
struct GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields
{
	// System.Int32 UnityEngine.GUI::s_HotTextField
	int32_t ___s_HotTextField_0;
	// System.Int32 UnityEngine.GUI::s_BoxHash
	int32_t ___s_BoxHash_1;
	// System.Int32 UnityEngine.GUI::s_ButonHash
	int32_t ___s_ButonHash_2;
	// System.Int32 UnityEngine.GUI::s_RepeatButtonHash
	int32_t ___s_RepeatButtonHash_3;
	// System.Int32 UnityEngine.GUI::s_ToggleHash
	int32_t ___s_ToggleHash_4;
	// System.Int32 UnityEngine.GUI::s_ButtonGridHash
	int32_t ___s_ButtonGridHash_5;
	// System.Int32 UnityEngine.GUI::s_SliderHash
	int32_t ___s_SliderHash_6;
	// System.Int32 UnityEngine.GUI::s_BeginGroupHash
	int32_t ___s_BeginGroupHash_7;
	// System.Int32 UnityEngine.GUI::s_ScrollviewHash
	int32_t ___s_ScrollviewHash_8;
	// System.Int32 UnityEngine.GUI::<scrollTroughSide>k__BackingField
	int32_t ___U3CscrollTroughSideU3Ek__BackingField_9;
	// System.DateTime UnityEngine.GUI::<nextScrollStepTime>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CnextScrollStepTimeU3Ek__BackingField_10;
	// UnityEngine.GUISkin UnityEngine.GUI::s_Skin
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___s_Skin_11;
	// UnityEngine.Rect UnityEngine.GUI::s_ToolTipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___s_ToolTipRect_12;
	// UnityEngineInternal.GenericStack UnityEngine.GUI::<scrollViewStates>k__BackingField
	GenericStack_t1FB49AB7D847C97ABAA97AB232CA416CABD24C49* ___U3CscrollViewStatesU3Ek__BackingField_13;
};

// UnityEngine.GUI

// UnityEngine.GUIClip

// UnityEngine.GUIClip

// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields
{
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___none_6;
};

// UnityEngine.GUIContent

// UnityEngine.GUIStateObjects
struct GUIStateObjects_t98BE277CEE5125AA017EAE4422D8537F701EE15D_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Object> UnityEngine.GUIStateObjects::s_StateCache
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ___s_StateCache_0;
};

// UnityEngine.GUIStateObjects

// UnityEngine.GUIUtility
struct GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields
{
	// System.Int32 UnityEngine.GUIUtility::s_ControlCount
	int32_t ___s_ControlCount_0;
	// System.Int32 UnityEngine.GUIUtility::s_SkinMode
	int32_t ___s_SkinMode_1;
	// System.Int32 UnityEngine.GUIUtility::s_OriginalID
	int32_t ___s_OriginalID_2;
	// System.Action UnityEngine.GUIUtility::takeCapture
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___takeCapture_3;
	// System.Action UnityEngine.GUIUtility::releaseCapture
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___releaseCapture_4;
	// System.Func`3<System.Int32,System.IntPtr,System.Boolean> UnityEngine.GUIUtility::processEvent
	Func_3_t2376B3D8C7A437FC32F21C4C4E4B3E7D2302007C* ___processEvent_5;
	// System.Action UnityEngine.GUIUtility::cleanupRoots
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___cleanupRoots_6;
	// System.Func`2<System.Exception,System.Boolean> UnityEngine.GUIUtility::endContainerGUIFromException
	Func_2_tDDBE08B46BEFDD869DE0B97D023CB9C89674FED6* ___endContainerGUIFromException_7;
	// System.Action UnityEngine.GUIUtility::guiChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___guiChanged_8;
	// System.Boolean UnityEngine.GUIUtility::<guiIsExiting>k__BackingField
	bool ___U3CguiIsExitingU3Ek__BackingField_9;
	// System.Func`1<System.Boolean> UnityEngine.GUIUtility::s_HasCurrentWindowKeyFocusFunc
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___s_HasCurrentWindowKeyFocusFunc_10;
};

// UnityEngine.GUIUtility

// UnityEngine.ScrollViewState

// UnityEngine.ScrollViewState

// UnityEngine.SliderState

// UnityEngine.SliderState

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields
{
	// System.CultureAwareComparer System.StringComparer::s_invariantCulture
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCulture_0;
	// System.CultureAwareComparer System.StringComparer::s_invariantCultureIgnoreCase
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCultureIgnoreCase_1;
	// System.OrdinalCaseSensitiveComparer System.StringComparer::s_ordinal
	OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A* ___s_ordinal_2;
	// System.OrdinalIgnoreCaseComparer System.StringComparer::s_ordinalIgnoreCase
	OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* ___s_ordinalIgnoreCase_3;
};

// System.StringComparer

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GUIStyle>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GUIStyle>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// UnityEngine.EventInterests

// UnityEngine.EventInterests

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// System.UInt32

// System.UInt32

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// System.Void

// System.Void

// UnityEngine.GUIClip/ParentClipScope

// UnityEngine.GUIClip/ParentClipScope

// System.Delegate

// System.Delegate

// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields
{
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___s_MasterEvent_2;
};

// UnityEngine.Event

// UnityEngine.EventType

// UnityEngine.EventType

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.FontStyle

// UnityEngine.FontStyle

// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_StaticFields
{
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::kDummyRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___kDummyRect_9;
	// System.Int32 UnityEngine.GUILayoutEntry::indent
	int32_t ___indent_10;
};

// UnityEngine.GUILayoutEntry

// UnityEngine.GUISettings

// UnityEngine.GUISettings

// UnityEngine.GUIStyleState

// UnityEngine.GUIStyleState

// UnityEngine.ImagePosition

// UnityEngine.ImagePosition

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.OrdinalIgnoreCaseComparer

// System.OrdinalIgnoreCaseComparer

// UnityEngine.RectOffset

// UnityEngine.RectOffset

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.SliderHandler

// UnityEngine.SliderHandler

// UnityEngine.TextAnchor

// UnityEngine.TextAnchor

// UnityEngine.TextClipping

// UnityEngine.TextClipping

// UnityEngine.GUILayoutOption/Type

// UnityEngine.GUILayoutOption/Type

// UnityEngine.ExitGUIException

// UnityEngine.ExitGUIException

// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6_StaticFields
{
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* ___textureRebuilt_4;
};

// UnityEngine.Font

// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_StaticFields
{
	// UnityEngine.GUILayoutEntry UnityEngine.GUILayoutGroup::none
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* ___none_31;
};

// UnityEngine.GUILayoutGroup

// UnityEngine.GUILayoutOption

// UnityEngine.GUILayoutOption

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields
{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_None_15;
};

// UnityEngine.GUIStyle

// UnityEngine.GUIWordWrapSizer

// UnityEngine.GUIWordWrapSizer

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// UnityEngine.GUIScrollGroup

// UnityEngine.GUIScrollGroup

// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields
{
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___current_33;
};

// UnityEngine.GUISkin

// UnityEngine.GUISkin/SkinChangedDelegate

// UnityEngine.GUISkin/SkinChangedDelegate
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC  : public RuntimeArray
{
	ALIGN_FIELD (8) GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* m_Items[1];

	inline GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2  : public RuntimeArray
{
	ALIGN_FIELD (8) GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* m_Items[1];

	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_back(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke& marshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_cleanup(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_com(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com& marshaled);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_com_back(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com& marshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_com_cleanup(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com& marshaled);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_back(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke& marshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_cleanup(GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke(const RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5& unmarshaled, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke_back(const RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke& marshaled, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5& unmarshaled);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke_cleanup(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_com(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com& marshaled);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_com_back(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com& marshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_com_cleanup(GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com& marshaled);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_com(const RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5& unmarshaled, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com& marshaled);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_com_back(const RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com& marshaled, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5& unmarshaled);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_com_cleanup(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com& marshaled);

// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB2760A703784902BE10E873BC760166EC9693D63_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.GUILayoutGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup__ctor_m2AA89FAB5BB5BA76F4059D106A59E346739755D8 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutGroup::CalcWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_CalcWidth_mFA744462378028538F1E3AAB39CB6AF0FBB1851B (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_SetHorizontal_m37D01CDDE4FAEDB20E0D469805EF96B878DFB5D5 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, float ___0_x, float ___1_width, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutGroup::CalcHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_CalcHeight_mAA9676BD80BAFC48F515ACA00E83FB7E9EE1FC2A (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_top()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutGroup_SetVertical_m28ADC75A1C5148E22EDD149221535C4B97BC5FE2 (GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D* __this, float ___0_y, float ___1_height, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.GUIStyleState::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyleState_Init_m0D3428E2BA3343F8AC49253DE3AAC54EF07F4873 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyleState::.ctor(UnityEngine.GUIStyle,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState__ctor_m74536B867B0F57F8A7DC74E78018830A948E4555 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_sourceStyle, intptr_t ___1_source, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyleState::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_Cleanup_mF244B2DAEE9DE90A300E6B7D78F9547BBBE59826 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyleState::set_textColor_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_Injected_m2E95B96544D89BEC498DF24CB036903535EA8184 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_value, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.GUIStyle::Internal_Create(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_Internal_Create_m2C5F872F6FE8C423759017DC72267D6AF637BC75 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_self, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_error_mB953A37C8F3296E529190A34E18506C735848C01 (const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.GUIStyle::Internal_Copy(UnityEngine.GUIStyle,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_Internal_Copy_mA4890B0E0133B4494B696F2F42712F393C508FC5 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_self, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___1_other, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Internal_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Destroy_mD93F2F454B69DB5C534AF9F4F6D847F955A39977 (intptr_t ___0_self, const RuntimeMethod* method) ;
// System.String UnityEngine.GUIStyle::get_rawName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_get_rawName_m9C87EB1EA6CC5989EFF3567E85A2D0A3DF256782 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_rawName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_rawName_mF8928B91294B5DA15AF365C760BB1437CF507ED6 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_GetStyleStatePtr_m60D51351B040299578007102C3857E8E8F14FAFB (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_idx, const RuntimeMethod* method) ;
// UnityEngine.GUIStyleState UnityEngine.GUIStyleState::GetGUIStyleState(UnityEngine.GUIStyle,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* GUIStyleState_GetGUIStyleState_m0B273F7909166249E3D98FA410C2D8A72091C7B1 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_sourceStyle, intptr_t ___1_source, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_idx, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectOffset::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectOffset__ctor_m0711AF5DF27B8F3EC6CAF54755CDE46B76C00DBE (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, RuntimeObject* ___0_sourceStyle, intptr_t ___1_source, const RuntimeMethod* method) ;
// System.Single UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_Internal_GetLineHeight_m3A90D425C25B10618B8A3D95AEF72FCB1C574B07 (intptr_t ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Draw_m3DBF8DC58719720455DFC818590D77752BA31008 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, int32_t ___2_controlId, bool ___3_isHover, bool ___4_isActive, bool ___5_on, bool ___6_hasKeyboardFocus, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GUIUtility::get_hotControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIUtility_get_hotControl_m6CD6AD33B46A9AFF2261E2C352DC7BAB4C20B026 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUIUtility::HasKeyFocus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_HasKeyFocus_m6AD234443A7B2AB471E14BE141FC5E8ADD261A0F (int32_t ___0_controlID, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Internal_Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw_mBEFC164F21949135F404FDA678F368FBA8074D50 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_screenRect, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, bool ___2_isHover, bool ___3_isActive, bool ___4_on, bool ___5_hasKeyboardFocus, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Internal_Draw2(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw2_mD1050A7750AAAEEEEFD4EB6C8C8AFB0591B1221D (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, int32_t ___2_controlID, bool ___3_on, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.GUIStyle::Internal_GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_Internal_GetCursorPixelPosition_m22C4D9AA182990942EA85B0EA834499EFA0CB0C4 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, int32_t ___2_cursorStringIndex, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GUIStyle::Internal_GetCursorStringIndex(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIStyle_Internal_GetCursorStringIndex_m88FFC09FCA6FD081C34ADC01F899D435AEFA2CC4 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_cursorPixelPosition, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.GUIStyle::Internal_CalcSize(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_Internal_CalcSize_m6B1D90CF09404B4969678627BE86D43B41C5AF33 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.GUIStyle::Internal_CalcSizeWithConstraints(UnityEngine.GUIContent,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_Internal_CalcSizeWithConstraints_m555CBD08EA22A9CB84A16BB8BEF95E8D25BF2617 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_maxSize, const RuntimeMethod* method) ;
// System.Single UnityEngine.GUIStyle::Internal_CalcHeight(UnityEngine.GUIContent,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_Internal_CalcHeight_m12AD4C5012F9E237FAB309CC6C84D3CB9145FF76 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, float ___1_width, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUIStyle::get_wordWrap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIStyle_get_wordWrap_mD0046078E78B0F8F1988E055B7EEB261FE8C69AD (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// UnityEngine.ImagePosition UnityEngine.GUIStyle::get_imagePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIStyle_get_imagePosition_m339AA340B169230E9795B61BEE4BB1EDAD6D95B4 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.GUIStyle::Internal_CalcMinMaxWidth(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_Internal_CalcMinMaxWidth_mB0D00D2D7454F733458F3729E35FF22CE9FEDC58 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, const RuntimeMethod* method) ;
// System.String UnityEngine.GUIStyle::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_get_name_mDF9EF43C46A0B9431DAF4EB0CE1D18EA32E16B75 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85 (String_t* ___0_fmt, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Internal_Draw_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw_Injected_mF4A2332005788106B28CB306FAFF530BE251E09B (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_screenRect, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, bool ___2_isHover, bool ___3_isActive, bool ___4_on, bool ___5_hasKeyboardFocus, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Internal_Draw2_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw2_Injected_m83867C172C18ED83724AA6600EDE59C55277A138 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, int32_t ___2_controlID, bool ___3_on, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Internal_GetCursorPixelPosition_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_GetCursorPixelPosition_Injected_m9B676ED0A70FE6CC55EC8795CD7348406A4FD815 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, int32_t ___2_cursorStringIndex, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___3_ret, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GUIStyle::Internal_GetCursorStringIndex_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIStyle_Internal_GetCursorStringIndex_Injected_m4C0A3DEF8B90D9A866378C24BB3F7E0169CA12C9 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___2_cursorPixelPosition, const RuntimeMethod* method) ;
// System.String UnityEngine.GUIStyle::Internal_GetSelectedRenderedText_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_Internal_GetSelectedRenderedText_Injected_m1DE280FF00B670FB04D98786E87A7F18D72940E3 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_localPosition, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_mContent, int32_t ___2_selectIndex, int32_t ___3_cursorIndex, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Internal_CalcSize_Injected(UnityEngine.GUIContent,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_CalcSize_Injected_m19617B2C5FF35B1B10B9D31058ABC1EABD31FF48 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Internal_CalcSizeWithConstraints_Injected(UnityEngine.GUIContent,UnityEngine.Vector2&,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_CalcSizeWithConstraints_Injected_m0BAB7504DC082EAC9C5664166BD8B1DA3DEC0025 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_maxSize, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___2_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Internal_CalcMinMaxWidth_Injected(UnityEngine.GUIContent,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_CalcMinMaxWidth_Injected_mEBCFBA4C8E76B115712AA308250F70CEACF1B844 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::SetMouseTooltip_Injected(System.String,UnityEngine.Rect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_SetMouseTooltip_Injected_m77EC0702533B68489605E0DE76A6761E1253CC71 (String_t* ___0_tooltip, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___1_screenRect, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventInterests::get_wantsMouseMove()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EventInterests_get_wantsMouseMove_m4CE6AE73062DE1E37A138ED365FE4D8C7894B9AA_inline (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventInterests::set_wantsMouseMove(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventInterests_set_wantsMouseMove_mFEA33E053185D63A19F60AA69E385C05CE795F0F_inline (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventInterests::get_wantsMouseEnterLeaveWindow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EventInterests_get_wantsMouseEnterLeaveWindow_m5CC6DB8DAF1DEB0F7E8878B96A856F540E66840F_inline (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventInterests::set_wantsMouseEnterLeaveWindow(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventInterests_set_wantsMouseEnterLeaveWindow_m5D73B54F5855E5BB5FE54AA2366A83A33982D313_inline (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventInterests::get_wantsLessLayoutEvents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EventInterests_get_wantsLessLayoutEvents_m1BC017D5AC484596A2A9B05BF592B65CE2A00CDE_inline (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventInterests::WantsEvent(UnityEngine.EventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventInterests_WantsEvent_mD34E2AD1F937EE03C9C29882672F400AD3C3E5B6 (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, int32_t ___0_type, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUIUtility::get_textFieldInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_get_textFieldInput_mDB514BD41982E9A309A7E0297270162FA6918EBA (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventInterests::WantsLayoutPass(UnityEngine.EventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventInterests_WantsLayoutPass_m403675D6BA834A05764A2C2558ECBCE90C8D066B (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, int32_t ___0_type, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
inline void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIUtility::set_guiIsExiting(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUIUtility_set_guiIsExiting_m0DCDD09CD48330FD781C03D2EA20F973878A2BC5_inline (bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIClip::Internal_Push(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIClip_Internal_Push_m76819FE03A5080169157BA25B9182ADFDE3905F4 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_screenRect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_scrollOffset, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_renderOffset, bool ___3_resetOffset, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIClip::get_visibleRect_Injected(UnityEngine.Rect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIClip_get_visibleRect_Injected_mBF3F116B530BCD6D5B3A5D110245691ADD4AA8BC (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIClip::Internal_Push_Injected(UnityEngine.Rect&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIClip_Internal_Push_Injected_m6BED9A38DF28718CE1059CC94E60269777410BBC (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_screenRect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_scrollOffset, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___2_renderOffset, bool ___3_resetOffset, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIClip::GetMatrix_Injected(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIClip_GetMatrix_Injected_mFAEC409FC44C49C7681DF684C954DF86AE076B76 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIClip::SetMatrix_Injected(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIClip_SetMatrix_Injected_m259A180FE5871D9D16330959A560EAC86E0224D0 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_m, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIClip::Internal_PushParentClip(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIClip_Internal_PushParentClip_mEAE43F73F48A4CD59FD9432B4F1E50124A0F3522 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_renderTransform, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_inputTransform, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___2_clipRect, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIClip::Internal_PushParentClip_Injected(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&,UnityEngine.Rect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIClip_Internal_PushParentClip_Injected_m71572BEBE9BFFAA4D306958579D3B0B48411B87A (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_renderTransform, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___1_inputTransform, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___2_clipRect, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIClip::Internal_PushParentClip(UnityEngine.Matrix4x4,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIClip_Internal_PushParentClip_mDA817B810C6724A0F236C876C08CFB0EC64E78A8 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_objectTransform, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_clipRect, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIClip/ParentClipScope::.ctor(UnityEngine.Matrix4x4,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentClipScope__ctor_m5251E311D308625C438134442CA69D75E872DCD4 (ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_objectTransform, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_clipRect, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIClip::Internal_PopParentClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIClip_Internal_PopParentClip_m7B43C8DD6186703019A5B7ADDC1FE48FB67BDEFA (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIClip/ParentClipScope::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentClipScope_Dispose_m39F5E11A8E9346D5ADE850A5A600A675589E786D (ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIContent::.ctor(System.String,UnityEngine.Texture,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_m3FDFF98EA6ACDC116BCCA705EE8F8DEC09A4A0A7 (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, String_t* ___0_text, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_image, String_t* ___2_tooltip, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIContent::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_set_text_m18A3EB5B4BD316561B3F4AB6BB3CC151684CE14F (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIContent::set_image(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_set_image_mB91F27FCD27EDBA24794D52B7F3DF1CF4E878164 (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIContent::set_tooltip(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_set_tooltip_m72C6B6EA0C9FCA1544A7FCF6C78A93E55D8CB415 (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.GUIContent::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIContent_get_text_mC6D7981351923AD7F802AC659314BA56DF7F3ED6 (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GUIContent::get_tooltip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIContent_get_tooltip_mC2D07D7B2884A5F5A56F84A7FE6BF39905AB15BD (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, const RuntimeMethod* method) ;
// System.String System.Object::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_ToString_mF8AC1EB9D85AB52EC8FD8B8BDD131E855E69673F (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIContent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_m89AC53A7E9BF9EB9E70297353DEAA6FEC2C800AC (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIContent::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, String_t* ___0_text, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUISettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISettings__ctor_m4AA9AFBD94306E007937909CB7F542DF2E491404 (GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUISkin::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_SetDefaultFont_mD6B98375749805CA5084CA8C5D6A1295359AE0E3 (Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___0_font, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUISkin::BuildStyleCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_BuildStyleCache_m8E99CC278C76A6DA63A24BFD2DE42AE313C0F7E1 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
inline void Dictionary_2__ctor_m39AE7A2B779870855E3AC853F234C40F6735ACF9 (Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mB2760A703784902BE10E873BC760166EC9693D63_gshared)(__this, ___0_comparer, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0 (Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* __this, String_t* ___0_key, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F*, String_t*, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m0F9A65F9363E92E29717C15EEEA8A71A2DB8D402 (Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* __this, String_t* ___0_key, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F*, String_t*, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_stretchHeight_m51C55ED43AA4EDE125E0C423FA0D301E81C09378 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::FindStyle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_FindStyle_mF82C37E2481D2B9E96C26EFE0353F8954F844FFE (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, String_t* ___0_styleName, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.Event UnityEngine.Event::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* Event_get_current_mBD7135E10C392EAD61AC0A0D2489EF758C8A3FAD (const RuntimeMethod* method) ;
// UnityEngine.EventType UnityEngine.Event::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.Font UnityEngine.GUISkin::get_font()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Font_tC95270EA3198038970422D78B74A7F2E218A96B6* GUISkin_get_font_m806CF702C59E43DF55BA441030A60F80E9D8CFD5 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SkinChangedDelegate_Invoke_mD14214487F9A0E4DD7EB7F97927D03EC8F1A3B4C_inline (SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Values()
inline ValueCollection_t6CD4B9552B29D570FBA4E0145D0C98841ECCC8C1* Dictionary_2_get_Values_m923D794849584E9B0675E86D09B54BA6691944D2 (Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t6CD4B9552B29D570FBA4E0145D0C98841ECCC8C1* (*) (Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>::GetEnumerator()
inline Enumerator_t6FCF94B18593967BB1EA62E38DDD1FA537144AA9 ValueCollection_GetEnumerator_m88DC4BD4D4952C7D4B15BE9CC164DF1EAA69A197 (ValueCollection_t6CD4B9552B29D570FBA4E0145D0C98841ECCC8C1* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6FCF94B18593967BB1EA62E38DDD1FA537144AA9 (*) (ValueCollection_t6CD4B9552B29D570FBA4E0145D0C98841ECCC8C1*, const RuntimeMethod*))ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared)(__this, method);
}
// System.Void UnityEngine.SliderHandler::.ctor(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderHandler__ctor_mDCC4520E68A478FC28519FD5DB149EFFBB9C186A (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, float ___1_currentValue, float ___2_size, float ___3_start, float ___4_end, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___5_slider, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___6_thumb, bool ___7_horiz, int32_t ___8_id, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___9_thumbExtent, const RuntimeMethod* method) ;
// UnityEngine.EventType UnityEngine.SliderHandler::CurrentEventType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SliderHandler_CurrentEventType_mC4756C3A92FC488ACF0C0148CFFA0F0239622F2A (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.SliderHandler::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_OnMouseDown_m9DE4BD08EDF586656B93C94FDF4907D081BCA8B8 (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.SliderHandler::OnMouseDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_OnMouseDrag_mC985CE7801C44CC87A1B11ABF0E142E617356B9E (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.SliderHandler::OnMouseUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_OnMouseUp_m97A5FDF8EBADFE60EC0DE486127A7F4B9C7068DB (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.SliderHandler::OnRepaint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_OnRepaint_m5FAFC71FF2A246AC8336B0F400F35DF581AD54AF (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.SliderHandler::Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_Handle_m9E9DBA6E45BA00A0D812C74BBB18DFBA0F923BFE (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbSelectionRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D SliderHandler_ThumbSelectionRect_m182932776473DDB8076E858AC0580E931AE66EB8 (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) ;
// UnityEngine.Event UnityEngine.SliderHandler::CurrentEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* SliderHandler_CurrentEvent_m5B1D7DFBE33DF06D2FE72D7BA64E997DB59ADE75 (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUIUtility::HitTest(UnityEngine.Rect,UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIUtility_HitTest_m0312C850D991342F3A7656A959C87466500F2987 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___1_evt, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Rect::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Rect_get_zero_m5341D8B63DEF1F4C308A685EEC8CFEA12A396C8D (const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single System.Math::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Min_mE913811A2F7566294BF4649A434282634E7254B3 (float ___0_val1, float ___1_val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_xMin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_xMin_mA873FCFAF9EABA46A026B73CA045192DF1946F19 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA (float ___0_val1, float ___1_val2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_xMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_xMax_m97C28D468455A6D19325D0D862E80A093240D49D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_yMin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_yMin_m9F780E509B9215A9E5826178CF664BD0E486D4EE (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_yMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_yMax_mCF452040E0068A4B3CB15994C0B4B6AD4D78E04B (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SliderHandler::IsEmptySlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SliderHandler_IsEmptySlider_m8AD3CF68C310AEAAB0E59D54A29A094A285AA586 (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_scrollTroughSide(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUI_set_scrollTroughSide_m6E4ED984EDA808C922C062CA6FB6491D2CD28CCA_inline (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIUtility::set_hotControl(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_set_hotControl_mFBC648186C83874DE776A508C420183ADB527E9A (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Event::Use()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Use_mD77A166D8CFEC4997484C58BC55FEB2D288D3453 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.SliderHandler::ClampedCurrentValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_ClampedCurrentValue_m2312300551774A993735636675E23015737664EC (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SliderHandler::StartDraggingWithValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderHandler_StartDraggingWithValue_m580387DD28C5BC8EF389692BC4B0BDB402AD1F5C (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, float ___0_dragStartValue, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_changed_mBD91A44AFA77D2BF883B3150AF4AE6AC3ED121DC (bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SliderHandler::SupportsPageMovements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SliderHandler_SupportsPageMovements_m1F5CDF7F988438DF502BC1312F23CC4164F97EA8 (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) ;
// UnityEngine.SliderState UnityEngine.SliderHandler::SliderState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8* SliderHandler_SliderState_m9E9EECE09E988B83FE3DF1F0AF9AFCF4AAF96D60 (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) ;
// System.DateTime UnityEngine.SystemClock::get_now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D SystemClock_get_now_m989E4C1A9597D16D8A71CCEB33AD1A4B16290C1F (const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddMilliseconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddMilliseconds_mEF44A0EE635A478B7B0CDAA438D2240C14C88D05 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUI_set_nextScrollStepTime_mA35BA69E3FDBC961E42F6C9D02BB4E8776926A09_inline (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SliderHandler::CurrentScrollTroughSide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SliderHandler_CurrentScrollTroughSide_m5E30388E1DE3C01FB968EFCC02215C14F301E1A2 (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.SliderHandler::PageMovementValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_PageMovementValue_mA83FFA75AE8306757F98570BEDC2F307FBC96FE1 (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.SliderHandler::ValueForCurrentMousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_ValueForCurrentMousePosition_m089BEF0D4C4E82C086E3E49B871780AD6D6848F5 (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.SliderHandler::Clamp(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_Clamp_mC73E2009637968EFFC5DEE94B8C48B8DF6442C5E (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.SliderHandler::MousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_MousePosition_m5E95F987E7F6CA9E517AA7B84328689A287965B6 (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.SliderHandler::ValuesPerPixel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_ValuesPerPixel_mF654B0D4DDC55599E9B251A026727DAFF425E66F (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Draw_mACFC9CE57BD530BB6A9592149DD95108A8014406 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, int32_t ___2_controlID, bool ___3_on, bool ___4_hover, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbExtRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D SliderHandler_ThumbExtRect_m16D13E44222386A99F1E3F089A5F4DC2ED19DBC1 (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D SliderHandler_ThumbRect_mA297CC1978CFEEC1F01218A5C05766C9D0465C98 (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GUI::get_scrollTroughSide()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GUI_get_scrollTroughSide_mD6AEA9AFA867B71D484561D5BEBF3520321E5E3E_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::InternalRepaintEditorWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_InternalRepaintEditorWindow_m067D1FC98B8C7B30E0E6B28C38CA2EE78F96851E (const RuntimeMethod* method) ;
// System.DateTime UnityEngine.GUI::get_nextScrollStepTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D GUI_get_nextScrollStepTime_m9ECB2B2710D4233C7124D23F0DD995006913D70E_inline (const RuntimeMethod* method) ;
// System.Boolean System.DateTime::op_LessThan(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_op_LessThan_m2A02FFF5F35E33417FB32CB9F948769CA15AED17 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_t1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_t2, const RuntimeMethod* method) ;
// UnityEngine.EventType UnityEngine.Event::GetTypeForControl(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_GetTypeForControl_mB5AFF2956E61972F0A1246416FCFE1C46F7E64D1 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, int32_t ___0_controlID, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUI::get_usePageScrollbars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_get_usePageScrollbars_m27B43460C2B19308AAB533181F7B4EE84E4DA797 (const RuntimeMethod* method) ;
// System.Single UnityEngine.SliderHandler::PageUpMovementBound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_PageUpMovementBound_m82E469555A7A32E942A3B9DA1C16C6239151ED8A (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.SliderHandler::MinValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_MinValue_m904DAD0D3F7BD5CD525BD520B82F60C3878FB25E (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.SliderHandler::MaxValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_MaxValue_m25803007A5DB5427855A607D85F0A68D5CCCB208 (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Object UnityEngine.GUIUtility::GetStateObject(System.Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GUIUtility_GetStateObject_m803B56DC7DF5396751B7367DB04072A6DCEEE616 (Type_t* ___0_t, int32_t ___1_controlID, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_center_mAA9A2E1F058B2C9F58E13CC4822F789F42975E5C (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_center(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_center_m1BFC7584EEE9EF6C9AC2CA8459300FE23D5CE86F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.SliderHandler::VerticalThumbRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D SliderHandler_VerticalThumbRect_mC9C04B0479876CA886A4C6868FFD65168511CAFB (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.SliderHandler::HorizontalThumbRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D SliderHandler_HorizontalThumbRect_m6FADFA27C8510FDD5FC2EB30A738DD6569DFB0BA (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) ;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectOffset::Remove(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectOffset_Remove_mC21D85A2BA4D0246FEC0B6C5F3C2D293CD41DB3D (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, const RuntimeMethod* method) ;
// System.Single UnityEngine.SliderHandler::ThumbSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_ThumbSize_m7A0F0323AF2FF51A3F35765438DDD1FBBAB63D47 (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_horizontal_m5C1795C027E4987A8532DC27D88FB3B9FFEC1352 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_vertical_m43E46D9F313BB617044184A65350E6498A0709F0 (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::get_style()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_right_m07C826B0BC79B0CBC01F5FF489D456C553F047BF (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectOffset::get_bottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_bottom_mDF9C1EC125F94245D5532C34FCFB65BE0F2A9D0B (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* __this, const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUIStyle_get_none_m808A9FE1F78920E4A29ED3484B99588B46D88938 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutEntry::set_style(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_set_style_m0A23F7EFF504A581FC6CA86EF3BE753F060AC48A (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIStyle_get_stretchWidth_m528FFD3EB3104D0322F2EADBBE7DBFF3FB34CB37 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIStyle_get_stretchHeight_m5ACA8F9CD25746932719C927159A105AADA5061F (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry__ctor_m011B3DA69713EEA6BD98D4056B5ADE01F237E5B2 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, float ___0__minWidth, float ___1__maxWidth, float ___2__minHeight, float ___3__maxHeight, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___4__style, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIContent::.ctor(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_m798E35DEED8E153FF39445EBEB634F896F19DF19 (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_src, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::CalcMinMaxWidth(UnityEngine.GUIContent,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_CalcMinMaxWidth_m6BBF836B9A9B2B4BA11DC448B03E441DEDC2CCA4 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, float* ___1_minWidth, float* ___2_maxWidth, const RuntimeMethod* method) ;
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_CalcHeight_m57DA8F6020AE71B561ABCBCE74E0E58FD2ECC5E8 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, float ___1_width, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.GUIScrollGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIScrollGroup__ctor_m95351A883B27B71698A4B84815CEA687D109F3FB (GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___allowHorizontalScroll_38 = (bool)1;
		__this->___allowVerticalScroll_39 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutGroup_tD08496E80F283C290B5B90D7BFB3C9C7CC33CD8D_il2cpp_TypeInfo_var);
		GUILayoutGroup__ctor_m2AA89FAB5BB5BA76F4059D106A59E346739755D8(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::CalcWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIScrollGroup_CalcWidth_m6B927DBF94A8940301A9FB64190403E5667712CE (GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		float L_0 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0;
		V_0 = L_0;
		float L_1 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1;
		V_1 = L_1;
		bool L_2 = __this->___allowHorizontalScroll_38;
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0 = (0.0f);
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1 = (0.0f);
	}

IL_0031:
	{
		GUILayoutGroup_CalcWidth_mFA744462378028538F1E3AAB39CB6AF0FBB1851B(__this, NULL);
		float L_4 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0;
		__this->___calcMinWidth_32 = L_4;
		float L_5 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1;
		__this->___calcMaxWidth_33 = L_5;
		bool L_6 = __this->___allowHorizontalScroll_38;
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_00b3;
		}
	}
	{
		float L_8 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0;
		V_4 = (bool)((((float)L_8) > ((float)(32.0f)))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0079;
		}
	}
	{
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0 = (32.0f);
	}

IL_0079:
	{
		float L_10 = V_0;
		V_5 = (bool)((((int32_t)((((float)L_10) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0091;
		}
	}
	{
		float L_12 = V_0;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0 = L_12;
	}

IL_0091:
	{
		float L_13 = V_1;
		V_6 = (bool)((((int32_t)((((float)L_13) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_00b2;
		}
	}
	{
		float L_15 = V_1;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1 = L_15;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___stretchWidth_5 = 0;
	}

IL_00b2:
	{
	}

IL_00b3:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::SetHorizontal(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIScrollGroup_SetHorizontal_m31FCDD252E67D51FC954C8E2C358BA0EB3AD7601 (GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5* __this, float ___0_x, float ___1_width, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	float G_B3_0 = 0.0f;
	int32_t G_B6_0 = 0;
	{
		bool L_0 = __this->___needsVerticalScrollbar_41;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		float L_1 = ___1_width;
		G_B3_0 = L_1;
		goto IL_002b;
	}

IL_000c:
	{
		float L_2 = ___1_width;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3 = __this->___verticalScrollbar_43;
		NullCheck(L_3);
		float L_4;
		L_4 = GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8(L_3, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_5 = __this->___verticalScrollbar_43;
		NullCheck(L_5);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_6;
		L_6 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_5, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90(L_6, NULL);
		G_B3_0 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_2, L_4)), ((float)L_7)));
	}

IL_002b:
	{
		V_0 = G_B3_0;
		bool L_8 = __this->___allowHorizontalScroll_38;
		if (!L_8)
		{
			goto IL_003f;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = __this->___calcMinWidth_32;
		G_B6_0 = ((((float)L_9) < ((float)L_10))? 1 : 0);
		goto IL_0040;
	}

IL_003f:
	{
		G_B6_0 = 0;
	}

IL_0040:
	{
		V_1 = (bool)G_B6_0;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_008e;
		}
	}
	{
		__this->___needsHorizontalScrollbar_40 = (bool)1;
		float L_12 = __this->___calcMinWidth_32;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0 = L_12;
		float L_13 = __this->___calcMaxWidth_33;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1 = L_13;
		float L_14 = ___0_x;
		float L_15 = __this->___calcMinWidth_32;
		GUILayoutGroup_SetHorizontal_m37D01CDDE4FAEDB20E0D469805EF96B878DFB5D5(__this, L_14, L_15, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_16 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_17 = ___1_width;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_16, L_17, NULL);
		float L_18 = __this->___calcMinWidth_32;
		__this->___clientWidth_36 = L_18;
		goto IL_00d8;
	}

IL_008e:
	{
		__this->___needsHorizontalScrollbar_40 = (bool)0;
		bool L_19 = __this->___allowHorizontalScroll_38;
		V_2 = L_19;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_00ba;
		}
	}
	{
		float L_21 = __this->___calcMinWidth_32;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0 = L_21;
		float L_22 = __this->___calcMaxWidth_33;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1 = L_22;
	}

IL_00ba:
	{
		float L_23 = ___0_x;
		float L_24 = V_0;
		GUILayoutGroup_SetHorizontal_m37D01CDDE4FAEDB20E0D469805EF96B878DFB5D5(__this, L_23, L_24, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_25 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_26 = ___1_width;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_25, L_26, NULL);
		float L_27 = V_0;
		__this->___clientWidth_36 = L_27;
	}

IL_00d8:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::CalcHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIScrollGroup_CalcHeight_mCB0CEC4871F6540145949E4CE8242172A75B2E5F (GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	float V_4 = 0.0f;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	{
		float L_0 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2;
		V_0 = L_0;
		float L_1 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3;
		V_1 = L_1;
		bool L_2 = __this->___allowVerticalScroll_39;
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = (0.0f);
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = (0.0f);
	}

IL_0031:
	{
		GUILayoutGroup_CalcHeight_mAA9676BD80BAFC48F515ACA00E83FB7E9EE1FC2A(__this, NULL);
		float L_4 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2;
		__this->___calcMinHeight_34 = L_4;
		float L_5 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3;
		__this->___calcMaxHeight_35 = L_5;
		bool L_6 = __this->___needsHorizontalScrollbar_40;
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0099;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_8 = __this->___horizontalScrollbar_42;
		NullCheck(L_8);
		float L_9;
		L_9 = GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A(L_8, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_10 = __this->___horizontalScrollbar_42;
		NullCheck(L_10);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_11;
		L_11 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_10, NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263(L_11, NULL);
		V_4 = ((float)il2cpp_codegen_add(L_9, ((float)L_12)));
		float L_13 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2;
		float L_14 = V_4;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = ((float)il2cpp_codegen_add(L_13, L_14));
		float L_15 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3;
		float L_16 = V_4;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = ((float)il2cpp_codegen_add(L_15, L_16));
	}

IL_0099:
	{
		bool L_17 = __this->___allowVerticalScroll_39;
		V_5 = L_17;
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_00fe;
		}
	}
	{
		float L_19 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2;
		V_6 = (bool)((((float)L_19) > ((float)(32.0f)))? 1 : 0);
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_00c4;
		}
	}
	{
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = (32.0f);
	}

IL_00c4:
	{
		float L_21 = V_0;
		V_7 = (bool)((((int32_t)((((float)L_21) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00dc;
		}
	}
	{
		float L_23 = V_0;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = L_23;
	}

IL_00dc:
	{
		float L_24 = V_1;
		V_8 = (bool)((((int32_t)((((float)L_24) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_00fd;
		}
	}
	{
		float L_26 = V_1;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = L_26;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___stretchHeight_6 = 0;
	}

IL_00fd:
	{
	}

IL_00fe:
	{
		return;
	}
}
// System.Void UnityEngine.GUIScrollGroup::SetVertical(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIScrollGroup_SetVertical_m8609CD909413A7364781818DDE37A314D8795FD6 (GUIScrollGroup_t4D7230655A7D01ED9BD95916958E34AF09B21FE5* __this, float ___0_y, float ___1_height, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	float V_6 = 0.0f;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B9_0 = 0;
	{
		float L_0 = ___1_height;
		V_0 = L_0;
		bool L_1 = __this->___needsHorizontalScrollbar_40;
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = V_0;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_4 = __this->___horizontalScrollbar_42;
		NullCheck(L_4);
		float L_5;
		L_5 = GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A(L_4, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_6 = __this->___horizontalScrollbar_42;
		NullCheck(L_6);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_7;
		L_7 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_6, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263(L_7, NULL);
		V_0 = ((float)il2cpp_codegen_subtract(L_3, ((float)il2cpp_codegen_add(L_5, ((float)L_8)))));
	}

IL_002d:
	{
		bool L_9 = __this->___allowVerticalScroll_39;
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		float L_10 = V_0;
		float L_11 = __this->___calcMinHeight_34;
		G_B5_0 = ((((float)L_10) < ((float)L_11))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B5_0 = 0;
	}

IL_0041:
	{
		V_2 = (bool)G_B5_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0151;
		}
	}
	{
		bool L_13 = __this->___needsHorizontalScrollbar_40;
		if (L_13)
		{
			goto IL_005c;
		}
	}
	{
		bool L_14 = __this->___needsVerticalScrollbar_41;
		G_B9_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		goto IL_005d;
	}

IL_005c:
	{
		G_B9_0 = 0;
	}

IL_005d:
	{
		V_5 = (bool)G_B9_0;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_00f1;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_16 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_17;
		L_17 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_16, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_18 = __this->___verticalScrollbar_43;
		NullCheck(L_18);
		float L_19;
		L_19 = GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8(L_18, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_20 = __this->___verticalScrollbar_43;
		NullCheck(L_20);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_21;
		L_21 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_20, NULL);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90(L_21, NULL);
		__this->___clientWidth_36 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_17, L_19)), ((float)L_22)));
		float L_23 = __this->___clientWidth_36;
		float L_24 = __this->___calcMinWidth_32;
		V_7 = (bool)((((float)L_23) < ((float)L_24))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00b6;
		}
	}
	{
		float L_26 = __this->___calcMinWidth_32;
		__this->___clientWidth_36 = L_26;
	}

IL_00b6:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_27 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_28;
		L_28 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_27, NULL);
		V_6 = L_28;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_29 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_30;
		L_30 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_29, NULL);
		float L_31 = __this->___clientWidth_36;
		VirtualActionInvoker2< float, float >::Invoke(10 /* System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single) */, __this, L_30, L_31);
		VirtualActionInvoker0::Invoke(9 /* System.Void UnityEngine.GUILayoutEntry::CalcHeight() */, __this);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_32 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_33 = V_6;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_32, L_33, NULL);
	}

IL_00f1:
	{
		float L_34 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2;
		V_3 = L_34;
		float L_35 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3;
		V_4 = L_35;
		float L_36 = __this->___calcMinHeight_34;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = L_36;
		float L_37 = __this->___calcMaxHeight_35;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = L_37;
		float L_38 = ___0_y;
		float L_39 = __this->___calcMinHeight_34;
		GUILayoutGroup_SetVertical_m28ADC75A1C5148E22EDD149221535C4B97BC5FE2(__this, L_38, L_39, NULL);
		float L_40 = V_3;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = L_40;
		float L_41 = V_4;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = L_41;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_42 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_43 = ___1_height;
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_42, L_43, NULL);
		float L_44 = __this->___calcMinHeight_34;
		__this->___clientHeight_37 = L_44;
		goto IL_0196;
	}

IL_0151:
	{
		bool L_45 = __this->___allowVerticalScroll_39;
		V_8 = L_45;
		bool L_46 = V_8;
		if (!L_46)
		{
			goto IL_0178;
		}
	}
	{
		float L_47 = __this->___calcMinHeight_34;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = L_47;
		float L_48 = __this->___calcMaxHeight_35;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = L_48;
	}

IL_0178:
	{
		float L_49 = ___0_y;
		float L_50 = V_0;
		GUILayoutGroup_SetVertical_m28ADC75A1C5148E22EDD149221535C4B97BC5FE2(__this, L_49, L_50, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_51 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_52 = ___1_height;
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_51, L_52, NULL);
		float L_53 = V_0;
		__this->___clientHeight_37 = L_53;
	}

IL_0196:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.ScrollViewState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollViewState__ctor_m9619262C4C72300A8B26011F627C68DF67425E53 (ScrollViewState_t004FCCBFB6795BD76582385D6D308D8F9ECF41B6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.GUIStyleState
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95____m_SourceStyle_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_SourceStyle_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95____m_SourceStyle_1_FieldInfo_var, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceStyle_1Exception, NULL);
}
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_back(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke& marshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95____m_SourceStyle_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_SourceStyle_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95____m_SourceStyle_1_FieldInfo_var, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceStyle_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIStyleState
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_cleanup(GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.GUIStyleState
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_com(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95____m_SourceStyle_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_SourceStyle_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95____m_SourceStyle_1_FieldInfo_var, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceStyle_1Exception, NULL);
}
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_com_back(const GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com& marshaled, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95____m_SourceStyle_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_SourceStyle_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95____m_SourceStyle_1_FieldInfo_var, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceStyle_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIStyleState
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_com_cleanup(GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.GUIStyleState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState__ctor_mD47FE21F7FD8D786F7E8E4E8C3DCA224F9237AD7 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0;
		L_0 = GUIStyleState_Init_m0D3428E2BA3343F8AC49253DE3AAC54EF07F4873(NULL);
		__this->___m_Ptr_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::.ctor(UnityEngine.GUIStyle,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState__ctor_m74536B867B0F57F8A7DC74E78018830A948E4555 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_sourceStyle, intptr_t ___1_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_sourceStyle;
		__this->___m_SourceStyle_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SourceStyle_1), (void*)L_0);
		intptr_t L_1 = ___1_source;
		__this->___m_Ptr_0 = L_1;
		return;
	}
}
// UnityEngine.GUIStyleState UnityEngine.GUIStyleState::GetGUIStyleState(UnityEngine.GUIStyle,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* GUIStyleState_GetGUIStyleState_m0B273F7909166249E3D98FA410C2D8A72091C7B1 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_sourceStyle, intptr_t ___1_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* V_0 = NULL;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* V_1 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_sourceStyle;
		intptr_t L_1 = ___1_source;
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_2 = (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95*)il2cpp_codegen_object_new(GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GUIStyleState__ctor_m74536B867B0F57F8A7DC74E78018830A948E4555(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_3 = V_0;
		V_1 = L_3;
		goto IL_000d;
	}

IL_000d:
	{
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.GUIStyleState::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_Finalize_m5CC6FBD8C44AF1091CACD6F7032E73B1114765B2 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_SourceStyle_1;
				V_0 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_1 = V_0;
				if (!L_1)
				{
					goto IL_0023_1;
				}
			}
			{
				GUIStyleState_Cleanup_mF244B2DAEE9DE90A300E6B7D78F9547BBBE59826(__this, NULL);
				intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				__this->___m_Ptr_0 = L_2;
			}

IL_0023_1:
			{
				goto IL_002d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
		return;
	}
}
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		GUIStyleState_set_textColor_Injected_m2E95B96544D89BEC498DF24CB036903535EA8184(__this, (&___0_value), NULL);
		return;
	}
}
// System.IntPtr UnityEngine.GUIStyleState::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyleState_Init_m0D3428E2BA3343F8AC49253DE3AAC54EF07F4873 (const RuntimeMethod* method) 
{
	typedef intptr_t (*GUIStyleState_Init_m0D3428E2BA3343F8AC49253DE3AAC54EF07F4873_ftn) ();
	static GUIStyleState_Init_m0D3428E2BA3343F8AC49253DE3AAC54EF07F4873_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Init_m0D3428E2BA3343F8AC49253DE3AAC54EF07F4873_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Init()");
	intptr_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyleState::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_Cleanup_mF244B2DAEE9DE90A300E6B7D78F9547BBBE59826 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, const RuntimeMethod* method) 
{
	typedef void (*GUIStyleState_Cleanup_mF244B2DAEE9DE90A300E6B7D78F9547BBBE59826_ftn) (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95*);
	static GUIStyleState_Cleanup_mF244B2DAEE9DE90A300E6B7D78F9547BBBE59826_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_Cleanup_mF244B2DAEE9DE90A300E6B7D78F9547BBBE59826_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GUIStyleState::set_textColor_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_Injected_m2E95B96544D89BEC498DF24CB036903535EA8184 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUIStyleState_set_textColor_Injected_m2E95B96544D89BEC498DF24CB036903535EA8184_ftn) (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*);
	static GUIStyleState_set_textColor_Injected_m2E95B96544D89BEC498DF24CB036903535EA8184_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyleState_set_textColor_Injected_m2E95B96544D89BEC498DF24CB036903535EA8184_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::set_textColor_Injected(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___0_value);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
























// Conversion methods for marshalling of: UnityEngine.GUIStyle
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580____m_Normal_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_Normal_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580____m_Normal_1_FieldInfo_var, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Normal_1Exception, NULL);
}
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_back(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke& marshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580____m_Normal_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_Normal_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580____m_Normal_1_FieldInfo_var, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Normal_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIStyle
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_cleanup(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke& marshaled)
{
}
























// Conversion methods for marshalling of: UnityEngine.GUIStyle
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_com(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580____m_Normal_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_Normal_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580____m_Normal_1_FieldInfo_var, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Normal_1Exception, NULL);
}
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_com_back(const GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com& marshaled, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580____m_Normal_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_Normal_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580____m_Normal_1_FieldInfo_var, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Normal_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIStyle
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_com_cleanup(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.GUIStyle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = GUIStyle_Internal_Create_m2C5F872F6FE8C423759017DC72267D6AF637BC75(__this, NULL);
		__this->___m_Ptr_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_m17492C8BACB0D28C7701C11500A7132F11B5F04E (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral427F9C39B825298A84F532F59ACB9D4467A1137C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_other;
		V_0 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral427F9C39B825298A84F532F59ACB9D4467A1137C, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2;
		L_2 = GUISkin_get_error_mB953A37C8F3296E529190A34E18506C735848C01(NULL);
		___0_other = L_2;
	}

IL_0024:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3 = ___0_other;
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = GUIStyle_Internal_Copy_mA4890B0E0133B4494B696F2F42712F393C508FC5(__this, L_3, NULL);
		__this->___m_Ptr_0 = L_4;
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Finalize_mFF6A6FBA538B711A6ED369DD83A41F25DE6EEE85 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				intptr_t L_0 = __this->___m_Ptr_0;
				intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_2;
				L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
				V_0 = L_2;
				bool L_3 = V_0;
				if (!L_3)
				{
					goto IL_002f_1;
				}
			}
			{
				intptr_t L_4 = __this->___m_Ptr_0;
				il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
				GUIStyle_Internal_Destroy_mD93F2F454B69DB5C534AF9F4F6D847F955A39977(L_4, NULL);
				intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				__this->___m_Ptr_0 = L_5;
			}

IL_002f_1:
			{
				goto IL_0039;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		return;
	}
}
// System.String UnityEngine.GUIStyle::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_get_name_mDF9EF43C46A0B9431DAF4EB0CE1D18EA32E16B75 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0 = __this->___m_Name_13;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001a;
		}
	}
	{
		String_t* L_2;
		L_2 = GUIStyle_get_rawName_m9C87EB1EA6CC5989EFF3567E85A2D0A3DF256782(__this, NULL);
		String_t* L_3 = L_2;
		V_0 = L_3;
		__this->___m_Name_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Name_13), (void*)L_3);
		String_t* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_001a:
	{
		V_1 = G_B2_0;
		goto IL_001d;
	}

IL_001d:
	{
		String_t* L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.GUIStyle::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___m_Name_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Name_13), (void*)L_0);
		String_t* L_1 = ___0_value;
		GUIStyle_set_rawName_mF8928B91294B5DA15AF365C760BB1437CF507ED6(__this, L_1, NULL);
		return;
	}
}
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* V_0 = NULL;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* V_1 = NULL;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* G_B2_0 = NULL;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* G_B1_0 = NULL;
	{
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_0 = __this->___m_Normal_1;
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0021;
		}
	}
	{
		intptr_t L_2;
		L_2 = GUIStyle_GetStyleStatePtr_m60D51351B040299578007102C3857E8E8F14FAFB(__this, 0, NULL);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_3;
		L_3 = GUIStyleState_GetGUIStyleState_m0B273F7909166249E3D98FA410C2D8A72091C7B1(__this, L_2, NULL);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_4 = L_3;
		V_0 = L_4;
		__this->___m_Normal_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Normal_1), (void*)L_4);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_0021:
	{
		V_1 = G_B2_0;
		goto IL_0024;
	}

IL_0024:
	{
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_border()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* GUIStyle_get_border_m0155A8D115DB5A640D0FC53E45D7B618F27CFDED (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_0 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_1 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* G_B2_0 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* G_B1_0 = NULL;
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_0 = __this->___m_Border_9;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0021;
		}
	}
	{
		intptr_t L_2;
		L_2 = GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593(__this, 0, NULL);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_3 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		RectOffset__ctor_m0711AF5DF27B8F3EC6CAF54755CDE46B76C00DBE(L_3, __this, L_2, NULL);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_4 = L_3;
		V_0 = L_4;
		__this->___m_Border_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Border_9), (void*)L_4);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_0021:
	{
		V_1 = G_B2_0;
		goto IL_0024;
	}

IL_0024:
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_0 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_1 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* G_B2_0 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* G_B1_0 = NULL;
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_0 = __this->___m_Margin_11;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0021;
		}
	}
	{
		intptr_t L_2;
		L_2 = GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593(__this, 1, NULL);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_3 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		RectOffset__ctor_m0711AF5DF27B8F3EC6CAF54755CDE46B76C00DBE(L_3, __this, L_2, NULL);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_4 = L_3;
		V_0 = L_4;
		__this->___m_Margin_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Margin_11), (void*)L_4);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_0021:
	{
		V_1 = G_B2_0;
		goto IL_0024;
	}

IL_0024:
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_0 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* V_1 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* G_B2_0 = NULL;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* G_B1_0 = NULL;
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_0 = __this->___m_Padding_10;
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0021;
		}
	}
	{
		intptr_t L_2;
		L_2 = GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593(__this, 2, NULL);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_3 = (RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5*)il2cpp_codegen_object_new(RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		RectOffset__ctor_m0711AF5DF27B8F3EC6CAF54755CDE46B76C00DBE(L_3, __this, L_2, NULL);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_4 = L_3;
		V_0 = L_4;
		__this->___m_Padding_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Padding_10), (void*)L_4);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_0021:
	{
		V_1 = G_B2_0;
		goto IL_0024;
	}

IL_0024:
	{
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_6 = V_1;
		return L_6;
	}
}
// System.Single UnityEngine.GUIStyle::get_lineHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_get_lineHeight_mC814199D1ABA3CE38358BA70347562B0CDFEB96E (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = GUIStyle_Internal_GetLineHeight_m3A90D425C25B10618B8A3D95AEF72FCB1C574B07(L_0, NULL);
		float L_2;
		L_2 = bankers_roundf(L_1);
		return L_2;
	}
}
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Draw_m7B978F5F5B576810CF8546142D23FD9990E002D8 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, bool ___2_isHover, bool ___3_isActive, bool ___4_on, bool ___5_hasKeyboardFocus, const RuntimeMethod* method) 
{
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_position;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_1 = ___1_content;
		bool L_2 = ___2_isHover;
		bool L_3 = ___3_isActive;
		bool L_4 = ___4_on;
		bool L_5 = ___5_hasKeyboardFocus;
		GUIStyle_Draw_m3DBF8DC58719720455DFC818590D77752BA31008(__this, L_0, L_1, (-1), L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Draw_mA81B01AC68DF7F6948228AFA68A7126E838E49E9 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, int32_t ___2_controlID, const RuntimeMethod* method) 
{
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_position;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_1 = ___1_content;
		int32_t L_2 = ___2_controlID;
		GUIStyle_Draw_m3DBF8DC58719720455DFC818590D77752BA31008(__this, L_0, L_1, L_2, (bool)0, (bool)0, (bool)0, (bool)0, NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Draw_mACFC9CE57BD530BB6A9592149DD95108A8014406 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, int32_t ___2_controlID, bool ___3_on, bool ___4_hover, const RuntimeMethod* method) 
{
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_position;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_1 = ___1_content;
		int32_t L_2 = ___2_controlID;
		bool L_3 = ___4_hover;
		int32_t L_4;
		L_4 = GUIUtility_get_hotControl_m6CD6AD33B46A9AFF2261E2C352DC7BAB4C20B026(NULL);
		int32_t L_5 = ___2_controlID;
		bool L_6 = ___3_on;
		int32_t L_7 = ___2_controlID;
		bool L_8;
		L_8 = GUIUtility_HasKeyFocus_m6AD234443A7B2AB471E14BE141FC5E8ADD261A0F(L_7, NULL);
		GUIStyle_Draw_m3DBF8DC58719720455DFC818590D77752BA31008(__this, L_0, L_1, L_2, L_3, (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0), L_6, L_8, NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Draw_m3DBF8DC58719720455DFC818590D77752BA31008 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, int32_t ___2_controlId, bool ___3_isHover, bool ___4_isActive, bool ___5_on, bool ___6_hasKeyboardFocus, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___2_controlId;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = ___0_position;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_3 = ___1_content;
		bool L_4 = ___3_isHover;
		bool L_5 = ___4_isActive;
		bool L_6 = ___5_on;
		bool L_7 = ___6_hasKeyboardFocus;
		GUIStyle_Internal_Draw_mBEFC164F21949135F404FDA678F368FBA8074D50(__this, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		goto IL_0029;
	}

IL_001d:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8 = ___0_position;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_9 = ___1_content;
		int32_t L_10 = ___2_controlId;
		bool L_11 = ___5_on;
		GUIStyle_Internal_Draw2_mD1050A7750AAAEEEEFD4EB6C8C8AFB0591B1221D(__this, L_8, L_9, L_10, L_11, NULL);
	}

IL_0029:
	{
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUIStyle_get_none_m808A9FE1F78920E4A29ED3484B99588B46D88938 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* G_B2_0 = NULL;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ((GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields*)il2cpp_codegen_static_fields_for(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var))->___s_None_15;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_2, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3 = L_2;
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		((GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields*)il2cpp_codegen_static_fields_for(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var))->___s_None_15 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields*)il2cpp_codegen_static_fields_for(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var))->___s_None_15), (void*)L_3);
		G_B2_0 = L_3;
	}

IL_0014:
	{
		return G_B2_0;
	}
}
// UnityEngine.Vector2 UnityEngine.GUIStyle::GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_GetCursorPixelPosition_m4FFBD3DC05CE503355DF01E57023AC349032CB2F (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, int32_t ___2_cursorStringIndex, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_position;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_1 = ___1_content;
		int32_t L_2 = ___2_cursorStringIndex;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = GUIStyle_Internal_GetCursorPixelPosition_m22C4D9AA182990942EA85B0EA834499EFA0CB0C4(__this, L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_000d;
	}

IL_000d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		return L_4;
	}
}
// System.Int32 UnityEngine.GUIStyle::GetCursorStringIndex(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIStyle_GetCursorStringIndex_m9EFA2EC2CF6ACB5B4EAF3E9C4BC356980CBB4515 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_cursorPixelPosition, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_position;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_1 = ___1_content;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___2_cursorPixelPosition;
		int32_t L_3;
		L_3 = GUIStyle_Internal_GetCursorStringIndex_m88FFC09FCA6FD081C34ADC01F899D435AEFA2CC4(__this, L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_CalcSize_m3015BAC288A5D6D29C0596ECE8117C8F9DFF9A76 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___0_content;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = GUIStyle_Internal_CalcSize_m6B1D90CF09404B4969678627BE86D43B41C5AF33(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSizeWithConstraints(UnityEngine.GUIContent,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_CalcSizeWithConstraints_m01ED0E843908709C7A316B83E4E10ABCECF1A8B1 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_constraints, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___0_content;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_constraints;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = GUIStyle_Internal_CalcSizeWithConstraints_m555CBD08EA22A9CB84A16BB8BEF95E8D25BF2617(__this, L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_0;
		return L_3;
	}
}
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_CalcHeight_m57DA8F6020AE71B561ABCBCE74E0E58FD2ECC5E8 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, float ___1_width, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___0_content;
		float L_1 = ___1_width;
		float L_2;
		L_2 = GUIStyle_Internal_CalcHeight_m12AD4C5012F9E237FAB309CC6C84D3CB9145FF76(__this, L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		float L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.GUIStyle::get_isHeightDependantOnWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIStyle_get_isHeightDependantOnWidth_mE18B09D8CD496F15F0EAB224020017BFF48065AF (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		float L_0;
		L_0 = GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A(__this, NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0026;
		}
	}
	{
		bool L_1;
		L_1 = GUIStyle_get_wordWrap_mD0046078E78B0F8F1988E055B7EEB261FE8C69AD(__this, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_2;
		L_2 = GUIStyle_get_imagePosition_m339AA340B169230E9795B61BEE4BB1EDAD6D95B4(__this, NULL);
		G_B4_0 = ((((int32_t)((((int32_t)L_2) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B4_0 = 0;
	}

IL_0024:
	{
		G_B6_0 = G_B4_0;
		goto IL_0027;
	}

IL_0026:
	{
		G_B6_0 = 0;
	}

IL_0027:
	{
		return (bool)G_B6_0;
	}
}
// System.Void UnityEngine.GUIStyle::CalcMinMaxWidth(UnityEngine.GUIContent,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_CalcMinMaxWidth_m6BBF836B9A9B2B4BA11DC448B03E441DEDC2CCA4 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, float* ___1_minWidth, float* ___2_maxWidth, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___0_content;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = GUIStyle_Internal_CalcMinMaxWidth_mB0D00D2D7454F733458F3729E35FF22CE9FEDC58(__this, L_0, NULL);
		V_0 = L_1;
		float* L_2 = ___1_minWidth;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_0;
		float L_4 = L_3.___x_0;
		*((float*)L_2) = (float)L_4;
		float* L_5 = ___2_maxWidth;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		float L_7 = L_6.___y_1;
		*((float*)L_5) = (float)L_7;
		return;
	}
}
// System.String UnityEngine.GUIStyle::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_ToString_m41A8A58B4D9659047D06EF2A5AE5F170AE198ACF (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D5EBA7CCD58DABCEC7A4FD33516FBE9E3482887);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2;
		L_2 = GUIStyle_get_name_mDF9EF43C46A0B9431DAF4EB0CE1D18EA32E16B75(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		String_t* L_3;
		L_3 = UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85(_stringLiteral3D5EBA7CCD58DABCEC7A4FD33516FBE9E3482887, L_1, NULL);
		V_0 = L_3;
		goto IL_001d;
	}

IL_001d:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String UnityEngine.GUIStyle::get_rawName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_get_rawName_m9C87EB1EA6CC5989EFF3567E85A2D0A3DF256782 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	typedef String_t* (*GUIStyle_get_rawName_m9C87EB1EA6CC5989EFF3567E85A2D0A3DF256782_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_get_rawName_m9C87EB1EA6CC5989EFF3567E85A2D0A3DF256782_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_rawName_m9C87EB1EA6CC5989EFF3567E85A2D0A3DF256782_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_rawName()");
	String_t* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::set_rawName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_rawName_mF8928B91294B5DA15AF365C760BB1437CF507ED6 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_rawName_mF8928B91294B5DA15AF365C760BB1437CF507ED6_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, String_t*);
	static GUIStyle_set_rawName_mF8928B91294B5DA15AF365C760BB1437CF507ED6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_rawName_mF8928B91294B5DA15AF365C760BB1437CF507ED6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_rawName(System.String)");
	_il2cpp_icall_func(__this, ___0_value);
}
// UnityEngine.Font UnityEngine.GUIStyle::get_font()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Font_tC95270EA3198038970422D78B74A7F2E218A96B6* GUIStyle_get_font_mBD123E375D357B37F8E1303F288517FD883C1117 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	typedef Font_tC95270EA3198038970422D78B74A7F2E218A96B6* (*GUIStyle_get_font_mBD123E375D357B37F8E1303F288517FD883C1117_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_get_font_mBD123E375D357B37F8E1303F288517FD883C1117_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_font_mBD123E375D357B37F8E1303F288517FD883C1117_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_font()");
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::set_font(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_font_m6C606026491FAFFAF4B7155AEBF778C1EDC73D33 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_font_m6C606026491FAFFAF4B7155AEBF778C1EDC73D33_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, Font_tC95270EA3198038970422D78B74A7F2E218A96B6*);
	static GUIStyle_set_font_m6C606026491FAFFAF4B7155AEBF778C1EDC73D33_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_font_m6C606026491FAFFAF4B7155AEBF778C1EDC73D33_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_font(UnityEngine.Font)");
	_il2cpp_icall_func(__this, ___0_value);
}
// UnityEngine.ImagePosition UnityEngine.GUIStyle::get_imagePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIStyle_get_imagePosition_m339AA340B169230E9795B61BEE4BB1EDAD6D95B4 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*GUIStyle_get_imagePosition_m339AA340B169230E9795B61BEE4BB1EDAD6D95B4_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_get_imagePosition_m339AA340B169230E9795B61BEE4BB1EDAD6D95B4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_imagePosition_m339AA340B169230E9795B61BEE4BB1EDAD6D95B4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_imagePosition()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, int32_t);
	static GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Boolean UnityEngine.GUIStyle::get_wordWrap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIStyle_get_wordWrap_mD0046078E78B0F8F1988E055B7EEB261FE8C69AD (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	typedef bool (*GUIStyle_get_wordWrap_mD0046078E78B0F8F1988E055B7EEB261FE8C69AD_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_get_wordWrap_mD0046078E78B0F8F1988E055B7EEB261FE8C69AD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_wordWrap_mD0046078E78B0F8F1988E055B7EEB261FE8C69AD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_wordWrap()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_wordWrap_m7A232701F60F4EB8FAFA57F6BAF9F94731DD009C (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_wordWrap_m7A232701F60F4EB8FAFA57F6BAF9F94731DD009C_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, bool);
	static GUIStyle_set_wordWrap_m7A232701F60F4EB8FAFA57F6BAF9F94731DD009C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_wordWrap_m7A232701F60F4EB8FAFA57F6BAF9F94731DD009C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_wordWrap(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.GUIStyle::set_clipping(UnityEngine.TextClipping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_clipping_m02ABC9CACA7C439E73A5635D0EF401EB662204FA (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_clipping_m02ABC9CACA7C439E73A5635D0EF401EB662204FA_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, int32_t);
	static GUIStyle_set_clipping_m02ABC9CACA7C439E73A5635D0EF401EB662204FA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_clipping_m02ABC9CACA7C439E73A5635D0EF401EB662204FA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_clipping(UnityEngine.TextClipping)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	typedef float (*GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedWidth()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	typedef float (*GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedHeight()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIStyle_get_stretchWidth_m528FFD3EB3104D0322F2EADBBE7DBFF3FB34CB37 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	typedef bool (*GUIStyle_get_stretchWidth_m528FFD3EB3104D0322F2EADBBE7DBFF3FB34CB37_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_get_stretchWidth_m528FFD3EB3104D0322F2EADBBE7DBFF3FB34CB37_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_stretchWidth_m528FFD3EB3104D0322F2EADBBE7DBFF3FB34CB37_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchWidth()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIStyle_get_stretchHeight_m5ACA8F9CD25746932719C927159A105AADA5061F (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) 
{
	typedef bool (*GUIStyle_get_stretchHeight_m5ACA8F9CD25746932719C927159A105AADA5061F_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_get_stretchHeight_m5ACA8F9CD25746932719C927159A105AADA5061F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_get_stretchHeight_m5ACA8F9CD25746932719C927159A105AADA5061F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchHeight()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_stretchHeight_m51C55ED43AA4EDE125E0C423FA0D301E81C09378 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_stretchHeight_m51C55ED43AA4EDE125E0C423FA0D301E81C09378_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, bool);
	static GUIStyle_set_stretchHeight_m51C55ED43AA4EDE125E0C423FA0D301E81C09378_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_stretchHeight_m51C55ED43AA4EDE125E0C423FA0D301E81C09378_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, int32_t);
	static GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_fontSize(System.Int32)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.GUIStyle::set_fontStyle(UnityEngine.FontStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontStyle_m4166D61FBF25225F4A85BBEABCECE3F2DCEE714D (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_fontStyle_m4166D61FBF25225F4A85BBEABCECE3F2DCEE714D_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, int32_t);
	static GUIStyle_set_fontStyle_m4166D61FBF25225F4A85BBEABCECE3F2DCEE714D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_fontStyle_m4166D61FBF25225F4A85BBEABCECE3F2DCEE714D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_fontStyle(UnityEngine.FontStyle)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.GUIStyle::set_richText(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_richText_m44045419099BECD812230D338FBBD6642A589CCD (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_set_richText_m44045419099BECD812230D338FBBD6642A589CCD_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, bool);
	static GUIStyle_set_richText_m44045419099BECD812230D338FBBD6642A589CCD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_set_richText_m44045419099BECD812230D338FBBD6642A589CCD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_richText(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.IntPtr UnityEngine.GUIStyle::Internal_Create(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_Internal_Create_m2C5F872F6FE8C423759017DC72267D6AF637BC75 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_self, const RuntimeMethod* method) 
{
	typedef intptr_t (*GUIStyle_Internal_Create_m2C5F872F6FE8C423759017DC72267D6AF637BC75_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_Internal_Create_m2C5F872F6FE8C423759017DC72267D6AF637BC75_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_Create_m2C5F872F6FE8C423759017DC72267D6AF637BC75_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_Create(UnityEngine.GUIStyle)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_self);
	return icallRetVal;
}
// System.IntPtr UnityEngine.GUIStyle::Internal_Copy(UnityEngine.GUIStyle,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_Internal_Copy_mA4890B0E0133B4494B696F2F42712F393C508FC5 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_self, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___1_other, const RuntimeMethod* method) 
{
	typedef intptr_t (*GUIStyle_Internal_Copy_mA4890B0E0133B4494B696F2F42712F393C508FC5_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*);
	static GUIStyle_Internal_Copy_mA4890B0E0133B4494B696F2F42712F393C508FC5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_Copy_mA4890B0E0133B4494B696F2F42712F393C508FC5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_Copy(UnityEngine.GUIStyle,UnityEngine.GUIStyle)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_self, ___1_other);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::Internal_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Destroy_mD93F2F454B69DB5C534AF9F4F6D847F955A39977 (intptr_t ___0_self, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_Internal_Destroy_mD93F2F454B69DB5C534AF9F4F6D847F955A39977_ftn) (intptr_t);
	static GUIStyle_Internal_Destroy_mD93F2F454B69DB5C534AF9F4F6D847F955A39977_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_Destroy_mD93F2F454B69DB5C534AF9F4F6D847F955A39977_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_Destroy(System.IntPtr)");
	_il2cpp_icall_func(___0_self);
}
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_GetStyleStatePtr_m60D51351B040299578007102C3857E8E8F14FAFB (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_idx, const RuntimeMethod* method) 
{
	typedef intptr_t (*GUIStyle_GetStyleStatePtr_m60D51351B040299578007102C3857E8E8F14FAFB_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, int32_t);
	static GUIStyle_GetStyleStatePtr_m60D51351B040299578007102C3857E8E8F14FAFB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_GetStyleStatePtr_m60D51351B040299578007102C3857E8E8F14FAFB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)");
	intptr_t icallRetVal = _il2cpp_icall_func(__this, ___0_idx);
	return icallRetVal;
}
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_idx, const RuntimeMethod* method) 
{
	typedef intptr_t (*GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, int32_t);
	static GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_GetRectOffsetPtr_mCABE2CEFE5CDB942D464051BF8B0E043BCC59593_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)");
	intptr_t icallRetVal = _il2cpp_icall_func(__this, ___0_idx);
	return icallRetVal;
}
// System.Single UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_Internal_GetLineHeight_m3A90D425C25B10618B8A3D95AEF72FCB1C574B07 (intptr_t ___0_target, const RuntimeMethod* method) 
{
	typedef float (*GUIStyle_Internal_GetLineHeight_m3A90D425C25B10618B8A3D95AEF72FCB1C574B07_ftn) (intptr_t);
	static GUIStyle_Internal_GetLineHeight_m3A90D425C25B10618B8A3D95AEF72FCB1C574B07_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_GetLineHeight_m3A90D425C25B10618B8A3D95AEF72FCB1C574B07_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0_target);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::Internal_Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw_mBEFC164F21949135F404FDA678F368FBA8074D50 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_screenRect, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, bool ___2_isHover, bool ___3_isActive, bool ___4_on, bool ___5_hasKeyboardFocus, const RuntimeMethod* method) 
{
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___1_content;
		bool L_1 = ___2_isHover;
		bool L_2 = ___3_isActive;
		bool L_3 = ___4_on;
		bool L_4 = ___5_hasKeyboardFocus;
		GUIStyle_Internal_Draw_Injected_mF4A2332005788106B28CB306FAFF530BE251E09B(__this, (&___0_screenRect), L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Internal_Draw2(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw2_mD1050A7750AAAEEEEFD4EB6C8C8AFB0591B1221D (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, int32_t ___2_controlID, bool ___3_on, const RuntimeMethod* method) 
{
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___1_content;
		int32_t L_1 = ___2_controlID;
		bool L_2 = ___3_on;
		GUIStyle_Internal_Draw2_Injected_m83867C172C18ED83724AA6600EDE59C55277A138(__this, (&___0_position), L_0, L_1, L_2, NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.GUIStyle::Internal_GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_Internal_GetCursorPixelPosition_m22C4D9AA182990942EA85B0EA834499EFA0CB0C4 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, int32_t ___2_cursorStringIndex, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___1_content;
		int32_t L_1 = ___2_cursorStringIndex;
		GUIStyle_Internal_GetCursorPixelPosition_Injected_m9B676ED0A70FE6CC55EC8795CD7348406A4FD815(__this, (&___0_position), L_0, L_1, (&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.GUIStyle::Internal_GetCursorStringIndex(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIStyle_Internal_GetCursorStringIndex_m88FFC09FCA6FD081C34ADC01F899D435AEFA2CC4 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_cursorPixelPosition, const RuntimeMethod* method) 
{
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___1_content;
		int32_t L_1;
		L_1 = GUIStyle_Internal_GetCursorStringIndex_Injected_m4C0A3DEF8B90D9A866378C24BB3F7E0169CA12C9(__this, (&___0_position), L_0, (&___2_cursorPixelPosition), NULL);
		return L_1;
	}
}
// System.String UnityEngine.GUIStyle::Internal_GetSelectedRenderedText(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_Internal_GetSelectedRenderedText_m3F9EF55E4958D2C9DE62AC723DBC99EBB80DD002 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_localPosition, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_mContent, int32_t ___2_selectIndex, int32_t ___3_cursorIndex, const RuntimeMethod* method) 
{
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___1_mContent;
		int32_t L_1 = ___2_selectIndex;
		int32_t L_2 = ___3_cursorIndex;
		String_t* L_3;
		L_3 = GUIStyle_Internal_GetSelectedRenderedText_Injected_m1DE280FF00B670FB04D98786E87A7F18D72940E3(__this, (&___0_localPosition), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// UnityEngine.Vector2 UnityEngine.GUIStyle::Internal_CalcSize(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_Internal_CalcSize_m6B1D90CF09404B4969678627BE86D43B41C5AF33 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___0_content;
		GUIStyle_Internal_CalcSize_Injected_m19617B2C5FF35B1B10B9D31058ABC1EABD31FF48(__this, L_0, (&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector2 UnityEngine.GUIStyle::Internal_CalcSizeWithConstraints(UnityEngine.GUIContent,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_Internal_CalcSizeWithConstraints_m555CBD08EA22A9CB84A16BB8BEF95E8D25BF2617 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_maxSize, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___0_content;
		GUIStyle_Internal_CalcSizeWithConstraints_Injected_m0BAB7504DC082EAC9C5664166BD8B1DA3DEC0025(__this, L_0, (&___1_maxSize), (&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
// System.Single UnityEngine.GUIStyle::Internal_CalcHeight(UnityEngine.GUIContent,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_Internal_CalcHeight_m12AD4C5012F9E237FAB309CC6C84D3CB9145FF76 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, float ___1_width, const RuntimeMethod* method) 
{
	typedef float (*GUIStyle_Internal_CalcHeight_m12AD4C5012F9E237FAB309CC6C84D3CB9145FF76_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*, float);
	static GUIStyle_Internal_CalcHeight_m12AD4C5012F9E237FAB309CC6C84D3CB9145FF76_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_CalcHeight_m12AD4C5012F9E237FAB309CC6C84D3CB9145FF76_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_CalcHeight(UnityEngine.GUIContent,System.Single)");
	float icallRetVal = _il2cpp_icall_func(__this, ___0_content, ___1_width);
	return icallRetVal;
}
// UnityEngine.Vector2 UnityEngine.GUIStyle::Internal_CalcMinMaxWidth(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_Internal_CalcMinMaxWidth_mB0D00D2D7454F733458F3729E35FF22CE9FEDC58 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___0_content;
		GUIStyle_Internal_CalcMinMaxWidth_Injected_mEBCFBA4C8E76B115712AA308250F70CEACF1B844(__this, L_0, (&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUIStyle::SetMouseTooltip(System.String,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_SetMouseTooltip_mFF3E22C7330AE180E83AB2929049BCD87B13B21E (String_t* ___0_tooltip, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_screenRect, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_tooltip;
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_SetMouseTooltip_Injected_m77EC0702533B68489605E0DE76A6761E1253CC71(L_0, (&___1_screenRect), NULL);
		return;
	}
}
// System.Boolean UnityEngine.GUIStyle::IsTooltipActive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIStyle_IsTooltipActive_mAD93F97B98889CA47BF1305F3D4C87D5EE8DD777 (String_t* ___0_tooltip, const RuntimeMethod* method) 
{
	typedef bool (*GUIStyle_IsTooltipActive_mAD93F97B98889CA47BF1305F3D4C87D5EE8DD777_ftn) (String_t*);
	static GUIStyle_IsTooltipActive_mAD93F97B98889CA47BF1305F3D4C87D5EE8DD777_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_IsTooltipActive_mAD93F97B98889CA47BF1305F3D4C87D5EE8DD777_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::IsTooltipActive(System.String)");
	bool icallRetVal = _il2cpp_icall_func(___0_tooltip);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_SetDefaultFont_mD6B98375749805CA5084CA8C5D6A1295359AE0E3 (Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___0_font, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_SetDefaultFont_mD6B98375749805CA5084CA8C5D6A1295359AE0E3_ftn) (Font_tC95270EA3198038970422D78B74A7F2E218A96B6*);
	static GUIStyle_SetDefaultFont_mD6B98375749805CA5084CA8C5D6A1295359AE0E3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_SetDefaultFont_mD6B98375749805CA5084CA8C5D6A1295359AE0E3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)");
	_il2cpp_icall_func(___0_font);
}
// System.Void UnityEngine.GUIStyle::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__cctor_m4B955524A4DAEAAF103D78D9316756CEFA16FB62 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields*)il2cpp_codegen_static_fields_for(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var))->___showKeyboardFocus_14 = (bool)1;
		return;
	}
}
// System.Void UnityEngine.GUIStyle::Internal_Draw_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw_Injected_mF4A2332005788106B28CB306FAFF530BE251E09B (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_screenRect, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, bool ___2_isHover, bool ___3_isActive, bool ___4_on, bool ___5_hasKeyboardFocus, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_Internal_Draw_Injected_mF4A2332005788106B28CB306FAFF530BE251E09B_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*, bool, bool, bool, bool);
	static GUIStyle_Internal_Draw_Injected_mF4A2332005788106B28CB306FAFF530BE251E09B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_Draw_Injected_mF4A2332005788106B28CB306FAFF530BE251E09B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_Draw_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)");
	_il2cpp_icall_func(__this, ___0_screenRect, ___1_content, ___2_isHover, ___3_isActive, ___4_on, ___5_hasKeyboardFocus);
}
// System.Void UnityEngine.GUIStyle::Internal_Draw2_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_Draw2_Injected_m83867C172C18ED83724AA6600EDE59C55277A138 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, int32_t ___2_controlID, bool ___3_on, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_Internal_Draw2_Injected_m83867C172C18ED83724AA6600EDE59C55277A138_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*, int32_t, bool);
	static GUIStyle_Internal_Draw2_Injected_m83867C172C18ED83724AA6600EDE59C55277A138_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_Draw2_Injected_m83867C172C18ED83724AA6600EDE59C55277A138_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_Draw2_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)");
	_il2cpp_icall_func(__this, ___0_position, ___1_content, ___2_controlID, ___3_on);
}
// System.Void UnityEngine.GUIStyle::Internal_GetCursorPixelPosition_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_GetCursorPixelPosition_Injected_m9B676ED0A70FE6CC55EC8795CD7348406A4FD815 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, int32_t ___2_cursorStringIndex, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___3_ret, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_Internal_GetCursorPixelPosition_Injected_m9B676ED0A70FE6CC55EC8795CD7348406A4FD815_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*, int32_t, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*);
	static GUIStyle_Internal_GetCursorPixelPosition_Injected_m9B676ED0A70FE6CC55EC8795CD7348406A4FD815_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_GetCursorPixelPosition_Injected_m9B676ED0A70FE6CC55EC8795CD7348406A4FD815_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_GetCursorPixelPosition_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___0_position, ___1_content, ___2_cursorStringIndex, ___3_ret);
}
// System.Int32 UnityEngine.GUIStyle::Internal_GetCursorStringIndex_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIStyle_Internal_GetCursorStringIndex_Injected_m4C0A3DEF8B90D9A866378C24BB3F7E0169CA12C9 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___2_cursorPixelPosition, const RuntimeMethod* method) 
{
	typedef int32_t (*GUIStyle_Internal_GetCursorStringIndex_Injected_m4C0A3DEF8B90D9A866378C24BB3F7E0169CA12C9_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*);
	static GUIStyle_Internal_GetCursorStringIndex_Injected_m4C0A3DEF8B90D9A866378C24BB3F7E0169CA12C9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_GetCursorStringIndex_Injected_m4C0A3DEF8B90D9A866378C24BB3F7E0169CA12C9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_GetCursorStringIndex_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,UnityEngine.Vector2&)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___0_position, ___1_content, ___2_cursorPixelPosition);
	return icallRetVal;
}
// System.String UnityEngine.GUIStyle::Internal_GetSelectedRenderedText_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIStyle_Internal_GetSelectedRenderedText_Injected_m1DE280FF00B670FB04D98786E87A7F18D72940E3 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_localPosition, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_mContent, int32_t ___2_selectIndex, int32_t ___3_cursorIndex, const RuntimeMethod* method) 
{
	typedef String_t* (*GUIStyle_Internal_GetSelectedRenderedText_Injected_m1DE280FF00B670FB04D98786E87A7F18D72940E3_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*, int32_t, int32_t);
	static GUIStyle_Internal_GetSelectedRenderedText_Injected_m1DE280FF00B670FB04D98786E87A7F18D72940E3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_GetSelectedRenderedText_Injected_m1DE280FF00B670FB04D98786E87A7F18D72940E3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_GetSelectedRenderedText_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Int32)");
	String_t* icallRetVal = _il2cpp_icall_func(__this, ___0_localPosition, ___1_mContent, ___2_selectIndex, ___3_cursorIndex);
	return icallRetVal;
}
// System.Void UnityEngine.GUIStyle::Internal_CalcSize_Injected(UnityEngine.GUIContent,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_CalcSize_Injected_m19617B2C5FF35B1B10B9D31058ABC1EABD31FF48 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_ret, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_Internal_CalcSize_Injected_m19617B2C5FF35B1B10B9D31058ABC1EABD31FF48_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*);
	static GUIStyle_Internal_CalcSize_Injected_m19617B2C5FF35B1B10B9D31058ABC1EABD31FF48_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_CalcSize_Injected_m19617B2C5FF35B1B10B9D31058ABC1EABD31FF48_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_CalcSize_Injected(UnityEngine.GUIContent,UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___0_content, ___1_ret);
}
// System.Void UnityEngine.GUIStyle::Internal_CalcSizeWithConstraints_Injected(UnityEngine.GUIContent,UnityEngine.Vector2&,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_CalcSizeWithConstraints_Injected_m0BAB7504DC082EAC9C5664166BD8B1DA3DEC0025 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_maxSize, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___2_ret, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_Internal_CalcSizeWithConstraints_Injected_m0BAB7504DC082EAC9C5664166BD8B1DA3DEC0025_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*);
	static GUIStyle_Internal_CalcSizeWithConstraints_Injected_m0BAB7504DC082EAC9C5664166BD8B1DA3DEC0025_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_CalcSizeWithConstraints_Injected_m0BAB7504DC082EAC9C5664166BD8B1DA3DEC0025_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_CalcSizeWithConstraints_Injected(UnityEngine.GUIContent,UnityEngine.Vector2&,UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___0_content, ___1_maxSize, ___2_ret);
}
// System.Void UnityEngine.GUIStyle::Internal_CalcMinMaxWidth_Injected(UnityEngine.GUIContent,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Internal_CalcMinMaxWidth_Injected_mEBCFBA4C8E76B115712AA308250F70CEACF1B844 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_ret, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_Internal_CalcMinMaxWidth_Injected_mEBCFBA4C8E76B115712AA308250F70CEACF1B844_ftn) (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*);
	static GUIStyle_Internal_CalcMinMaxWidth_Injected_mEBCFBA4C8E76B115712AA308250F70CEACF1B844_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_Internal_CalcMinMaxWidth_Injected_mEBCFBA4C8E76B115712AA308250F70CEACF1B844_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_CalcMinMaxWidth_Injected(UnityEngine.GUIContent,UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___0_content, ___1_ret);
}
// System.Void UnityEngine.GUIStyle::SetMouseTooltip_Injected(System.String,UnityEngine.Rect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_SetMouseTooltip_Injected_m77EC0702533B68489605E0DE76A6761E1253CC71 (String_t* ___0_tooltip, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___1_screenRect, const RuntimeMethod* method) 
{
	typedef void (*GUIStyle_SetMouseTooltip_Injected_m77EC0702533B68489605E0DE76A6761E1253CC71_ftn) (String_t*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*);
	static GUIStyle_SetMouseTooltip_Injected_m77EC0702533B68489605E0DE76A6761E1253CC71_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIStyle_SetMouseTooltip_Injected_m77EC0702533B68489605E0DE76A6761E1253CC71_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::SetMouseTooltip_Injected(System.String,UnityEngine.Rect&)");
	_il2cpp_icall_func(___0_tooltip, ___1_screenRect);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.EventInterests
IL2CPP_EXTERN_C void EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke(const EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8& unmarshaled, EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CwantsMouseMoveU3Ek__BackingField_0 = static_cast<int32_t>(unmarshaled.___U3CwantsMouseMoveU3Ek__BackingField_0);
	marshaled.___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1 = static_cast<int32_t>(unmarshaled.___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1);
	marshaled.___U3CwantsLessLayoutEventsU3Ek__BackingField_2 = static_cast<int32_t>(unmarshaled.___U3CwantsLessLayoutEventsU3Ek__BackingField_2);
}
IL2CPP_EXTERN_C void EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke_back(const EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshaled_pinvoke& marshaled, EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8& unmarshaled)
{
	bool unmarshaledU3CwantsMouseMoveU3Ek__BackingField_temp_0 = false;
	unmarshaledU3CwantsMouseMoveU3Ek__BackingField_temp_0 = static_cast<bool>(marshaled.___U3CwantsMouseMoveU3Ek__BackingField_0);
	unmarshaled.___U3CwantsMouseMoveU3Ek__BackingField_0 = unmarshaledU3CwantsMouseMoveU3Ek__BackingField_temp_0;
	bool unmarshaledU3CwantsMouseEnterLeaveWindowU3Ek__BackingField_temp_1 = false;
	unmarshaledU3CwantsMouseEnterLeaveWindowU3Ek__BackingField_temp_1 = static_cast<bool>(marshaled.___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1);
	unmarshaled.___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1 = unmarshaledU3CwantsMouseEnterLeaveWindowU3Ek__BackingField_temp_1;
	bool unmarshaledU3CwantsLessLayoutEventsU3Ek__BackingField_temp_2 = false;
	unmarshaledU3CwantsLessLayoutEventsU3Ek__BackingField_temp_2 = static_cast<bool>(marshaled.___U3CwantsLessLayoutEventsU3Ek__BackingField_2);
	unmarshaled.___U3CwantsLessLayoutEventsU3Ek__BackingField_2 = unmarshaledU3CwantsLessLayoutEventsU3Ek__BackingField_temp_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.EventInterests
IL2CPP_EXTERN_C void EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke_cleanup(EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.EventInterests
IL2CPP_EXTERN_C void EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_com(const EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8& unmarshaled, EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshaled_com& marshaled)
{
	marshaled.___U3CwantsMouseMoveU3Ek__BackingField_0 = static_cast<int32_t>(unmarshaled.___U3CwantsMouseMoveU3Ek__BackingField_0);
	marshaled.___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1 = static_cast<int32_t>(unmarshaled.___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1);
	marshaled.___U3CwantsLessLayoutEventsU3Ek__BackingField_2 = static_cast<int32_t>(unmarshaled.___U3CwantsLessLayoutEventsU3Ek__BackingField_2);
}
IL2CPP_EXTERN_C void EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_com_back(const EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshaled_com& marshaled, EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8& unmarshaled)
{
	bool unmarshaledU3CwantsMouseMoveU3Ek__BackingField_temp_0 = false;
	unmarshaledU3CwantsMouseMoveU3Ek__BackingField_temp_0 = static_cast<bool>(marshaled.___U3CwantsMouseMoveU3Ek__BackingField_0);
	unmarshaled.___U3CwantsMouseMoveU3Ek__BackingField_0 = unmarshaledU3CwantsMouseMoveU3Ek__BackingField_temp_0;
	bool unmarshaledU3CwantsMouseEnterLeaveWindowU3Ek__BackingField_temp_1 = false;
	unmarshaledU3CwantsMouseEnterLeaveWindowU3Ek__BackingField_temp_1 = static_cast<bool>(marshaled.___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1);
	unmarshaled.___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1 = unmarshaledU3CwantsMouseEnterLeaveWindowU3Ek__BackingField_temp_1;
	bool unmarshaledU3CwantsLessLayoutEventsU3Ek__BackingField_temp_2 = false;
	unmarshaledU3CwantsLessLayoutEventsU3Ek__BackingField_temp_2 = static_cast<bool>(marshaled.___U3CwantsLessLayoutEventsU3Ek__BackingField_2);
	unmarshaled.___U3CwantsLessLayoutEventsU3Ek__BackingField_2 = unmarshaledU3CwantsLessLayoutEventsU3Ek__BackingField_temp_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.EventInterests
IL2CPP_EXTERN_C void EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_com_cleanup(EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshaled_com& marshaled)
{
}
// System.Boolean UnityEngine.EventInterests::get_wantsMouseMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventInterests_get_wantsMouseMove_m4CE6AE73062DE1E37A138ED365FE4D8C7894B9AA (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CwantsMouseMoveU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool EventInterests_get_wantsMouseMove_m4CE6AE73062DE1E37A138ED365FE4D8C7894B9AA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8*>(__this + _offset);
	bool _returnValue;
	_returnValue = EventInterests_get_wantsMouseMove_m4CE6AE73062DE1E37A138ED365FE4D8C7894B9AA_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.EventInterests::set_wantsMouseMove(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventInterests_set_wantsMouseMove_mFEA33E053185D63A19F60AA69E385C05CE795F0F (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CwantsMouseMoveU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void EventInterests_set_wantsMouseMove_mFEA33E053185D63A19F60AA69E385C05CE795F0F_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8*>(__this + _offset);
	EventInterests_set_wantsMouseMove_mFEA33E053185D63A19F60AA69E385C05CE795F0F_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.EventInterests::get_wantsMouseEnterLeaveWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventInterests_get_wantsMouseEnterLeaveWindow_m5CC6DB8DAF1DEB0F7E8878B96A856F540E66840F (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool EventInterests_get_wantsMouseEnterLeaveWindow_m5CC6DB8DAF1DEB0F7E8878B96A856F540E66840F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8*>(__this + _offset);
	bool _returnValue;
	_returnValue = EventInterests_get_wantsMouseEnterLeaveWindow_m5CC6DB8DAF1DEB0F7E8878B96A856F540E66840F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.EventInterests::set_wantsMouseEnterLeaveWindow(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventInterests_set_wantsMouseEnterLeaveWindow_m5D73B54F5855E5BB5FE54AA2366A83A33982D313 (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void EventInterests_set_wantsMouseEnterLeaveWindow_m5D73B54F5855E5BB5FE54AA2366A83A33982D313_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8*>(__this + _offset);
	EventInterests_set_wantsMouseEnterLeaveWindow_m5D73B54F5855E5BB5FE54AA2366A83A33982D313_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.EventInterests::get_wantsLessLayoutEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventInterests_get_wantsLessLayoutEvents_m1BC017D5AC484596A2A9B05BF592B65CE2A00CDE (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CwantsLessLayoutEventsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool EventInterests_get_wantsLessLayoutEvents_m1BC017D5AC484596A2A9B05BF592B65CE2A00CDE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8*>(__this + _offset);
	bool _returnValue;
	_returnValue = EventInterests_get_wantsLessLayoutEvents_m1BC017D5AC484596A2A9B05BF592B65CE2A00CDE_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.EventInterests::WantsEvent(UnityEngine.EventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventInterests_WantsEvent_mD34E2AD1F937EE03C9C29882672F400AD3C3E5B6 (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, int32_t ___0_type, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0 = ___0_type;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, ((int32_t)20)))) > ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		goto IL_0026;
	}

IL_0014:
	{
		bool L_4;
		L_4 = EventInterests_get_wantsMouseMove_m4CE6AE73062DE1E37A138ED365FE4D8C7894B9AA_inline(__this, NULL);
		V_2 = L_4;
		goto IL_002a;
	}

IL_001d:
	{
		bool L_5;
		L_5 = EventInterests_get_wantsMouseEnterLeaveWindow_m5CC6DB8DAF1DEB0F7E8878B96A856F540E66840F_inline(__this, NULL);
		V_2 = L_5;
		goto IL_002a;
	}

IL_0026:
	{
		V_2 = (bool)1;
		goto IL_002a;
	}

IL_002a:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool EventInterests_WantsEvent_mD34E2AD1F937EE03C9C29882672F400AD3C3E5B6_AdjustorThunk (RuntimeObject* __this, int32_t ___0_type, const RuntimeMethod* method)
{
	EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8*>(__this + _offset);
	bool _returnValue;
	_returnValue = EventInterests_WantsEvent_mD34E2AD1F937EE03C9C29882672F400AD3C3E5B6(_thisAdjusted, ___0_type, method);
	return _returnValue;
}
// System.Boolean UnityEngine.EventInterests::WantsLayoutPass(UnityEngine.EventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventInterests_WantsLayoutPass_m403675D6BA834A05764A2C2558ECBCE90C8D066B (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, int32_t ___0_type, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		bool L_0;
		L_0 = EventInterests_get_wantsLessLayoutEvents_m1BC017D5AC484596A2A9B05BF592B65CE2A00CDE_inline(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0070;
	}

IL_0012:
	{
		int32_t L_2 = ___0_type;
		V_3 = L_2;
		int32_t L_3 = V_3;
		V_2 = L_3;
		int32_t L_4 = V_2;
		switch (L_4)
		{
			case 0:
			{
				goto IL_005a;
			}
			case 1:
			{
				goto IL_005a;
			}
			case 2:
			{
				goto IL_006c;
			}
			case 3:
			{
				goto IL_006c;
			}
			case 4:
			{
				goto IL_0052;
			}
			case 5:
			{
				goto IL_0052;
			}
			case 6:
			{
				goto IL_006c;
			}
			case 7:
			{
				goto IL_004e;
			}
		}
	}
	{
		goto IL_003e;
	}

IL_003e:
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)14))))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0045;
	}

IL_0045:
	{
		int32_t L_6 = V_2;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, ((int32_t)20)))) > ((uint32_t)1))))
		{
			goto IL_0063;
		}
	}
	{
		goto IL_006c;
	}

IL_004e:
	{
		V_1 = (bool)1;
		goto IL_0070;
	}

IL_0052:
	{
		bool L_7;
		L_7 = GUIUtility_get_textFieldInput_mDB514BD41982E9A309A7E0297270162FA6918EBA(NULL);
		V_1 = L_7;
		goto IL_0070;
	}

IL_005a:
	{
		bool L_8;
		L_8 = EventInterests_get_wantsMouseMove_m4CE6AE73062DE1E37A138ED365FE4D8C7894B9AA_inline(__this, NULL);
		V_1 = L_8;
		goto IL_0070;
	}

IL_0063:
	{
		bool L_9;
		L_9 = EventInterests_get_wantsMouseEnterLeaveWindow_m5CC6DB8DAF1DEB0F7E8878B96A856F540E66840F_inline(__this, NULL);
		V_1 = L_9;
		goto IL_0070;
	}

IL_006c:
	{
		V_1 = (bool)0;
		goto IL_0070;
	}

IL_0070:
	{
		bool L_10 = V_1;
		return L_10;
	}
}
IL2CPP_EXTERN_C  bool EventInterests_WantsLayoutPass_m403675D6BA834A05764A2C2558ECBCE90C8D066B_AdjustorThunk (RuntimeObject* __this, int32_t ___0_type, const RuntimeMethod* method)
{
	EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8*>(__this + _offset);
	bool _returnValue;
	_returnValue = EventInterests_WantsLayoutPass_m403675D6BA834A05764A2C2558ECBCE90C8D066B(_thisAdjusted, ___0_type, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object UnityEngine.GUIStateObjects::GetStateObject(System.Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GUIStateObjects_GetStateObject_m2BB2858A7B432322CF1ECA3940D85BF809ADA4EC (Type_t* ___0_t, int32_t ___1_controlID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStateObjects_t98BE277CEE5125AA017EAE4422D8537F701EE15D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(GUIStateObjects_t98BE277CEE5125AA017EAE4422D8537F701EE15D_il2cpp_TypeInfo_var);
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_0 = ((GUIStateObjects_t98BE277CEE5125AA017EAE4422D8537F701EE15D_StaticFields*)il2cpp_codegen_static_fields_for(GUIStateObjects_t98BE277CEE5125AA017EAE4422D8537F701EE15D_il2cpp_TypeInfo_var))->___s_StateCache_0;
		int32_t L_1 = ___1_controlID;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_3, NULL);
		Type_t* L_5 = ___0_t;
		G_B3_0 = ((((int32_t)((((RuntimeObject*)(Type_t*)L_4) == ((RuntimeObject*)(Type_t*)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		Type_t* L_7 = ___0_t;
		RuntimeObject* L_8;
		L_8 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_7, NULL);
		V_0 = L_8;
		il2cpp_codegen_runtime_class_init_inline(GUIStateObjects_t98BE277CEE5125AA017EAE4422D8537F701EE15D_il2cpp_TypeInfo_var);
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_9 = ((GUIStateObjects_t98BE277CEE5125AA017EAE4422D8537F701EE15D_StaticFields*)il2cpp_codegen_static_fields_for(GUIStateObjects_t98BE277CEE5125AA017EAE4422D8537F701EE15D_il2cpp_TypeInfo_var))->___s_StateCache_0;
		int32_t L_10 = ___1_controlID;
		RuntimeObject* L_11 = V_0;
		NullCheck(L_9);
		Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1(L_9, L_10, L_11, Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_RuntimeMethod_var);
	}

IL_0039:
	{
		RuntimeObject* L_12 = V_0;
		V_2 = L_12;
		goto IL_003d;
	}

IL_003d:
	{
		RuntimeObject* L_13 = V_2;
		return L_13;
	}
}
// System.Void UnityEngine.GUIStateObjects::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStateObjects__cctor_mDD043ED73553AD955E20FFD43933D1D124D6D3D1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStateObjects_t98BE277CEE5125AA017EAE4422D8537F701EE15D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_0 = (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*)il2cpp_codegen_object_new(Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7(L_0, Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_RuntimeMethod_var);
		((GUIStateObjects_t98BE277CEE5125AA017EAE4422D8537F701EE15D_StaticFields*)il2cpp_codegen_static_fields_for(GUIStateObjects_t98BE277CEE5125AA017EAE4422D8537F701EE15D_il2cpp_TypeInfo_var))->___s_StateCache_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GUIStateObjects_t98BE277CEE5125AA017EAE4422D8537F701EE15D_StaticFields*)il2cpp_codegen_static_fields_for(GUIStateObjects_t98BE277CEE5125AA017EAE4422D8537F701EE15D_il2cpp_TypeInfo_var))->___s_StateCache_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.ExitGUIException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitGUIException__ctor_m345D7AD70E401C1AFD46E537CDCEC0F1C8BA342B (ExitGUIException_tFF2EEEBACD9E5684D6112478EEF754B74D154549* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		GUIUtility_set_guiIsExiting_m0DCDD09CD48330FD781C03D2EA20F973878A2BC5_inline((bool)1, NULL);
		return;
	}
}
// System.Void UnityEngine.ExitGUIException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitGUIException__ctor_mE93D467487F7F148547778DF06CF2BCD03472656 (ExitGUIException_tFF2EEEBACD9E5684D6112478EEF754B74D154549* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		GUIUtility_set_guiIsExiting_m0DCDD09CD48330FD781C03D2EA20F973878A2BC5_inline((bool)1, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.GUIClip::Push(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIClip_Push_m78FFAE57A3F299C27A410834C1BE23539E284A60 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_screenRect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_scrollOffset, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_renderOffset, bool ___3_resetOffset, const RuntimeMethod* method) 
{
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_screenRect;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_scrollOffset;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___2_renderOffset;
		bool L_3 = ___3_resetOffset;
		GUIClip_Internal_Push_m76819FE03A5080169157BA25B9182ADFDE3905F4(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
// UnityEngine.Rect UnityEngine.GUIClip::get_visibleRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GUIClip_get_visibleRect_m93F10FF2376C3BBBF3562A67DD7E207240D2F611 (const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GUIClip_get_visibleRect_Injected_mBF3F116B530BCD6D5B3A5D110245691ADD4AA8BC((&V_0), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.GUIClip::Internal_Push(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIClip_Internal_Push_m76819FE03A5080169157BA25B9182ADFDE3905F4 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_screenRect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_scrollOffset, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_renderOffset, bool ___3_resetOffset, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___3_resetOffset;
		GUIClip_Internal_Push_Injected_m6BED9A38DF28718CE1059CC94E60269777410BBC((&___0_screenRect), (&___1_scrollOffset), (&___2_renderOffset), L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.GUIClip::Internal_Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIClip_Internal_Pop_m99B82F9D059E587FD37DEEB41385076E16162E62 (const RuntimeMethod* method) 
{
	typedef void (*GUIClip_Internal_Pop_m99B82F9D059E587FD37DEEB41385076E16162E62_ftn) ();
	static GUIClip_Internal_Pop_m99B82F9D059E587FD37DEEB41385076E16162E62_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIClip_Internal_Pop_m99B82F9D059E587FD37DEEB41385076E16162E62_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIClip::Internal_Pop()");
	_il2cpp_icall_func();
}
// System.Int32 UnityEngine.GUIClip::Internal_GetCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIClip_Internal_GetCount_m83C187F97642C73B9241C9A026CDA89A7A9EB8D1 (const RuntimeMethod* method) 
{
	typedef int32_t (*GUIClip_Internal_GetCount_m83C187F97642C73B9241C9A026CDA89A7A9EB8D1_ftn) ();
	static GUIClip_Internal_GetCount_m83C187F97642C73B9241C9A026CDA89A7A9EB8D1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIClip_Internal_GetCount_m83C187F97642C73B9241C9A026CDA89A7A9EB8D1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIClip::Internal_GetCount()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// UnityEngine.Matrix4x4 UnityEngine.GUIClip::GetMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GUIClip_GetMatrix_mABFDC4C3D2B71C84191EAA109A4373A1D75BD3E1 (const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GUIClip_GetMatrix_Injected_mFAEC409FC44C49C7681DF684C954DF86AE076B76((&V_0), NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.GUIClip::SetMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIClip_SetMatrix_m2C4B22CA0D33E580CBD455CC8E5422C8FF229733 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_m, const RuntimeMethod* method) 
{
	{
		GUIClip_SetMatrix_Injected_m259A180FE5871D9D16330959A560EAC86E0224D0((&___0_m), NULL);
		return;
	}
}
// System.Void UnityEngine.GUIClip::Internal_PushParentClip(UnityEngine.Matrix4x4,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIClip_Internal_PushParentClip_mDA817B810C6724A0F236C876C08CFB0EC64E78A8 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_objectTransform, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_clipRect, const RuntimeMethod* method) 
{
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___0_objectTransform;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = ___0_objectTransform;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = ___1_clipRect;
		GUIClip_Internal_PushParentClip_mEAE43F73F48A4CD59FD9432B4F1E50124A0F3522(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.GUIClip::Internal_PushParentClip(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIClip_Internal_PushParentClip_mEAE43F73F48A4CD59FD9432B4F1E50124A0F3522 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_renderTransform, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_inputTransform, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___2_clipRect, const RuntimeMethod* method) 
{
	{
		GUIClip_Internal_PushParentClip_Injected_m71572BEBE9BFFAA4D306958579D3B0B48411B87A((&___0_renderTransform), (&___1_inputTransform), (&___2_clipRect), NULL);
		return;
	}
}
// System.Void UnityEngine.GUIClip::Internal_PopParentClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIClip_Internal_PopParentClip_m7B43C8DD6186703019A5B7ADDC1FE48FB67BDEFA (const RuntimeMethod* method) 
{
	typedef void (*GUIClip_Internal_PopParentClip_m7B43C8DD6186703019A5B7ADDC1FE48FB67BDEFA_ftn) ();
	static GUIClip_Internal_PopParentClip_m7B43C8DD6186703019A5B7ADDC1FE48FB67BDEFA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIClip_Internal_PopParentClip_m7B43C8DD6186703019A5B7ADDC1FE48FB67BDEFA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIClip::Internal_PopParentClip()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.GUIClip::get_visibleRect_Injected(UnityEngine.Rect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIClip_get_visibleRect_Injected_mBF3F116B530BCD6D5B3A5D110245691ADD4AA8BC (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*GUIClip_get_visibleRect_Injected_mBF3F116B530BCD6D5B3A5D110245691ADD4AA8BC_ftn) (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*);
	static GUIClip_get_visibleRect_Injected_mBF3F116B530BCD6D5B3A5D110245691ADD4AA8BC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIClip_get_visibleRect_Injected_mBF3F116B530BCD6D5B3A5D110245691ADD4AA8BC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIClip::get_visibleRect_Injected(UnityEngine.Rect&)");
	_il2cpp_icall_func(___0_ret);
}
// System.Void UnityEngine.GUIClip::Internal_Push_Injected(UnityEngine.Rect&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIClip_Internal_Push_Injected_m6BED9A38DF28718CE1059CC94E60269777410BBC (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_screenRect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_scrollOffset, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___2_renderOffset, bool ___3_resetOffset, const RuntimeMethod* method) 
{
	typedef void (*GUIClip_Internal_Push_Injected_m6BED9A38DF28718CE1059CC94E60269777410BBC_ftn) (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, bool);
	static GUIClip_Internal_Push_Injected_m6BED9A38DF28718CE1059CC94E60269777410BBC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIClip_Internal_Push_Injected_m6BED9A38DF28718CE1059CC94E60269777410BBC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIClip::Internal_Push_Injected(UnityEngine.Rect&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Boolean)");
	_il2cpp_icall_func(___0_screenRect, ___1_scrollOffset, ___2_renderOffset, ___3_resetOffset);
}
// System.Void UnityEngine.GUIClip::GetMatrix_Injected(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIClip_GetMatrix_Injected_mFAEC409FC44C49C7681DF684C954DF86AE076B76 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*GUIClip_GetMatrix_Injected_mFAEC409FC44C49C7681DF684C954DF86AE076B76_ftn) (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*);
	static GUIClip_GetMatrix_Injected_mFAEC409FC44C49C7681DF684C954DF86AE076B76_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIClip_GetMatrix_Injected_mFAEC409FC44C49C7681DF684C954DF86AE076B76_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIClip::GetMatrix_Injected(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(___0_ret);
}
// System.Void UnityEngine.GUIClip::SetMatrix_Injected(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIClip_SetMatrix_Injected_m259A180FE5871D9D16330959A560EAC86E0224D0 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_m, const RuntimeMethod* method) 
{
	typedef void (*GUIClip_SetMatrix_Injected_m259A180FE5871D9D16330959A560EAC86E0224D0_ftn) (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*);
	static GUIClip_SetMatrix_Injected_m259A180FE5871D9D16330959A560EAC86E0224D0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIClip_SetMatrix_Injected_m259A180FE5871D9D16330959A560EAC86E0224D0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIClip::SetMatrix_Injected(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(___0_m);
}
// System.Void UnityEngine.GUIClip::Internal_PushParentClip_Injected(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&,UnityEngine.Rect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIClip_Internal_PushParentClip_Injected_m71572BEBE9BFFAA4D306958579D3B0B48411B87A (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_renderTransform, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___1_inputTransform, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___2_clipRect, const RuntimeMethod* method) 
{
	typedef void (*GUIClip_Internal_PushParentClip_Injected_m71572BEBE9BFFAA4D306958579D3B0B48411B87A_ftn) (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*);
	static GUIClip_Internal_PushParentClip_Injected_m71572BEBE9BFFAA4D306958579D3B0B48411B87A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIClip_Internal_PushParentClip_Injected_m71572BEBE9BFFAA4D306958579D3B0B48411B87A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIClip::Internal_PushParentClip_Injected(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&,UnityEngine.Rect&)");
	_il2cpp_icall_func(___0_renderTransform, ___1_inputTransform, ___2_clipRect);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.GUIClip/ParentClipScope
IL2CPP_EXTERN_C void ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_pinvoke(const ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52& unmarshaled, ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Disposed_0 = static_cast<int32_t>(unmarshaled.___m_Disposed_0);
}
IL2CPP_EXTERN_C void ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_pinvoke_back(const ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshaled_pinvoke& marshaled, ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52& unmarshaled)
{
	bool unmarshaledm_Disposed_temp_0 = false;
	unmarshaledm_Disposed_temp_0 = static_cast<bool>(marshaled.___m_Disposed_0);
	unmarshaled.___m_Disposed_0 = unmarshaledm_Disposed_temp_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIClip/ParentClipScope
IL2CPP_EXTERN_C void ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_pinvoke_cleanup(ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.GUIClip/ParentClipScope
IL2CPP_EXTERN_C void ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_com(const ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52& unmarshaled, ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshaled_com& marshaled)
{
	marshaled.___m_Disposed_0 = static_cast<int32_t>(unmarshaled.___m_Disposed_0);
}
IL2CPP_EXTERN_C void ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_com_back(const ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshaled_com& marshaled, ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52& unmarshaled)
{
	bool unmarshaledm_Disposed_temp_0 = false;
	unmarshaledm_Disposed_temp_0 = static_cast<bool>(marshaled.___m_Disposed_0);
	unmarshaled.___m_Disposed_0 = unmarshaledm_Disposed_temp_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIClip/ParentClipScope
IL2CPP_EXTERN_C void ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_com_cleanup(ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.GUIClip/ParentClipScope::.ctor(UnityEngine.Matrix4x4,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentClipScope__ctor_m5251E311D308625C438134442CA69D75E872DCD4 (ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_objectTransform, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_clipRect, const RuntimeMethod* method) 
{
	{
		__this->___m_Disposed_0 = (bool)0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___0_objectTransform;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1 = ___1_clipRect;
		GUIClip_Internal_PushParentClip_mDA817B810C6724A0F236C876C08CFB0EC64E78A8(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ParentClipScope__ctor_m5251E311D308625C438134442CA69D75E872DCD4_AdjustorThunk (RuntimeObject* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_objectTransform, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_clipRect, const RuntimeMethod* method)
{
	ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52*>(__this + _offset);
	ParentClipScope__ctor_m5251E311D308625C438134442CA69D75E872DCD4(_thisAdjusted, ___0_objectTransform, ___1_clipRect, method);
}
// System.Void UnityEngine.GUIClip/ParentClipScope::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParentClipScope_Dispose_m39F5E11A8E9346D5ADE850A5A600A675589E786D (ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___m_Disposed_0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_001a;
	}

IL_000d:
	{
		__this->___m_Disposed_0 = (bool)1;
		GUIClip_Internal_PopParentClip_m7B43C8DD6186703019A5B7ADDC1FE48FB67BDEFA(NULL);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void ParentClipScope_Dispose_m39F5E11A8E9346D5ADE850A5A600A675589E786D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52*>(__this + _offset);
	ParentClipScope_Dispose_m39F5E11A8E9346D5ADE850A5A600A675589E786D(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.GUIContent
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke(const GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2& unmarshaled, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2____m_Image_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_Image_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2____m_Image_1_FieldInfo_var, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_1Exception, NULL);
}
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke_back(const GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_pinvoke& marshaled, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2____m_Image_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_Image_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2____m_Image_1_FieldInfo_var, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIContent
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke_cleanup(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.GUIContent
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_com(const GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2& unmarshaled, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2____m_Image_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_Image_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2____m_Image_1_FieldInfo_var, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_1Exception, NULL);
}
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_com_back(const GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_com& marshaled, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2____m_Image_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_Image_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2____m_Image_1_FieldInfo_var, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.GUIContent
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_com_cleanup(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_com& marshaled)
{
}
// System.String UnityEngine.GUIContent::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIContent_get_text_mC6D7981351923AD7F802AC659314BA56DF7F3ED6 (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_Text_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUIContent::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_set_text_m18A3EB5B4BD316561B3F4AB6BB3CC151684CE14F (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___m_Text_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Text_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.GUIContent::set_image(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_set_image_mB91F27FCD27EDBA24794D52B7F3DF1CF4E878164 (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) 
{
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_value;
		__this->___m_Image_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Image_1), (void*)L_0);
		return;
	}
}
// System.String UnityEngine.GUIContent::get_tooltip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIContent_get_tooltip_mC2D07D7B2884A5F5A56F84A7FE6BF39905AB15BD (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_Tooltip_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUIContent::set_tooltip(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_set_tooltip_m72C6B6EA0C9FCA1544A7FCF6C78A93E55D8CB415 (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___m_Tooltip_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tooltip_2), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.GUIContent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_m89AC53A7E9BF9EB9E70297353DEAA6FEC2C800AC (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___m_Text_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Text_0), (void*)L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___m_Tooltip_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tooltip_2), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.GUIContent::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_text;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		GUIContent__ctor_m3FDFF98EA6ACDC116BCCA705EE8F8DEC09A4A0A7(__this, L_0, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.GUIContent::.ctor(System.String,UnityEngine.Texture,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_m3FDFF98EA6ACDC116BCCA705EE8F8DEC09A4A0A7 (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, String_t* ___0_text, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_image, String_t* ___2_tooltip, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___m_Text_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Text_0), (void*)L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___m_Tooltip_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tooltip_2), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_2 = ___0_text;
		GUIContent_set_text_m18A3EB5B4BD316561B3F4AB6BB3CC151684CE14F(__this, L_2, NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_3 = ___1_image;
		GUIContent_set_image_mB91F27FCD27EDBA24794D52B7F3DF1CF4E878164(__this, L_3, NULL);
		String_t* L_4 = ___2_tooltip;
		GUIContent_set_tooltip_m72C6B6EA0C9FCA1544A7FCF6C78A93E55D8CB415(__this, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.GUIContent::.ctor(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_m798E35DEED8E153FF39445EBEB634F896F19DF19 (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_src, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___m_Text_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Text_0), (void*)L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___m_Tooltip_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tooltip_2), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_2 = ___0_src;
		NullCheck(L_2);
		String_t* L_3 = L_2->___m_Text_0;
		GUIContent_set_text_m18A3EB5B4BD316561B3F4AB6BB3CC151684CE14F(__this, L_3, NULL);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_4 = ___0_src;
		NullCheck(L_4);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5 = L_4->___m_Image_1;
		GUIContent_set_image_mB91F27FCD27EDBA24794D52B7F3DF1CF4E878164(__this, L_5, NULL);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_6 = ___0_src;
		NullCheck(L_6);
		String_t* L_7 = L_6->___m_Tooltip_2;
		GUIContent_set_tooltip_m72C6B6EA0C9FCA1544A7FCF6C78A93E55D8CB415(__this, L_7, NULL);
		return;
	}
}
// UnityEngine.GUIContent UnityEngine.GUIContent::Temp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* GUIContent_Temp_m4AE3B839AF38DD23ECC1D585C391E1CA43B8EA73 (String_t* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___s_Text_3;
		String_t* L_1 = ___0_t;
		NullCheck(L_0);
		L_0->___m_Text_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___m_Text_0), (void*)L_1);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_2 = ((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___s_Text_3;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_2);
		L_2->___m_Tooltip_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___m_Tooltip_2), (void*)L_3);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_4 = ((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___s_Text_3;
		V_0 = L_4;
		goto IL_0023;
	}

IL_0023:
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityEngine.GUIContent::ClearStaticCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_ClearStaticCache_m36A399D55991F1B5B1C4A20DCDFF415B8636E934 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___s_Text_3;
		NullCheck(L_0);
		L_0->___m_Text_0 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___m_Text_0), (void*)(String_t*)NULL);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_1 = ((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___s_Text_3;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_1);
		L_1->___m_Tooltip_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___m_Tooltip_2), (void*)L_2);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_3 = ((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___s_Image_4;
		NullCheck(L_3);
		L_3->___m_Image_1 = (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___m_Image_1), (void*)(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_4 = ((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___s_Image_4;
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_4);
		L_4->___m_Tooltip_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___m_Tooltip_2), (void*)L_5);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_6 = ((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___s_TextImage_5;
		NullCheck(L_6);
		L_6->___m_Text_0 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___m_Text_0), (void*)(String_t*)NULL);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_7 = ((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___s_TextImage_5;
		NullCheck(L_7);
		L_7->___m_Image_1 = (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___m_Image_1), (void*)(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL);
		return;
	}
}
// System.String UnityEngine.GUIContent::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIContent_ToString_m9F42CA1D8DEFB446686D0010FF57B4F9B140BB9A (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B2_0 = NULL;
	{
		String_t* L_0;
		L_0 = GUIContent_get_text_mC6D7981351923AD7F802AC659314BA56DF7F3ED6(__this, NULL);
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B3_0 = L_1;
			goto IL_001b;
		}
	}
	{
		String_t* L_2;
		L_2 = GUIContent_get_tooltip_mC2D07D7B2884A5F5A56F84A7FE6BF39905AB15BD(__this, NULL);
		String_t* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_001b;
		}
	}
	{
		String_t* L_4;
		L_4 = Object_ToString_mF8AC1EB9D85AB52EC8FD8B8BDD131E855E69673F(__this, NULL);
		G_B3_0 = L_4;
	}

IL_001b:
	{
		V_0 = G_B3_0;
		goto IL_001e;
	}

IL_001e:
	{
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityEngine.GUIContent::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__cctor_m1605F6A12B7BD089F1592F490DBF324ECEC3FE8C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GUIContent__ctor_m89AC53A7E9BF9EB9E70297353DEAA6FEC2C800AC(L_0, NULL);
		((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___s_Text_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___s_Text_3), (void*)L_0);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_1 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GUIContent__ctor_m89AC53A7E9BF9EB9E70297353DEAA6FEC2C800AC(L_1, NULL);
		((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___s_Image_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___s_Image_4), (void*)L_1);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_2 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GUIContent__ctor_m89AC53A7E9BF9EB9E70297353DEAA6FEC2C800AC(L_2, NULL);
		((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___s_TextImage_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___s_TextImage_5), (void*)L_2);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_3 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC(L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___none_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___none_6), (void*)L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.GUISettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISettings__ctor_m4AA9AFBD94306E007937909CB7F542DF2E491404 (GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_DoubleClickSelectsWord_0 = (bool)1;
		__this->___m_TripleClickSelectsLine_1 = (bool)1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___m_CursorColor_2 = L_0;
		__this->___m_CursorFlashSpeed_3 = (-1.0f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_1), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		__this->___m_SelectionColor_4 = L_1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.GUISkin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin__ctor_mAA94A46B37D9C2F70962435F250BBA202CD1EC7A (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* L_0 = (GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847*)il2cpp_codegen_object_new(GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GUISettings__ctor_m4AA9AFBD94306E007937909CB7F542DF2E491404(L_0, NULL);
		__this->___m_Settings_29 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Settings_29), (void*)L_0);
		__this->___m_Styles_31 = (Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Styles_31), (void*)(Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F*)NULL);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* L_1 = (GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC*)(GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC*)SZArrayNew(GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___m_CustomStyles_28 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CustomStyles_28), (void*)L_1);
		return;
	}
}
// System.Void UnityEngine.GUISkin::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_OnEnable_m5A7FE1F57C549711FCCC2DB0322F8667129AA0BF (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	{
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.GUISkin::CleanupRoots()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_CleanupRoots_mAD2E77BE9440832E8BC8CAA9C7F2D85C3D2F8B17 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var))->___current_33 = (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var))->___current_33), (void*)(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9*)NULL);
		((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var))->___ms_Error_30 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var))->___ms_Error_30), (void*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)NULL);
		return;
	}
}
// UnityEngine.Font UnityEngine.GUISkin::get_font()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Font_tC95270EA3198038970422D78B74A7F2E218A96B6* GUISkin_get_font_m806CF702C59E43DF55BA441030A60F80E9D8CFD5 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* V_0 = NULL;
	{
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_0 = __this->___m_Font_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_font(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_font_mF98516DE4363C888D7215006D51BD527F3F9DDA9 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_0 = ___0_value;
		__this->___m_Font_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Font_4), (void*)L_0);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_1 = ((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var))->___current_33;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, __this, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_4 = __this->___m_Font_4;
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_SetDefaultFont_mD6B98375749805CA5084CA8C5D6A1295359AE0E3(L_4, NULL);
	}

IL_0023:
	{
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_box_m21BE7FC56D903B95BAFAE8890425D330EA88D893 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_box_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_box(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_box_m82E578044569D3831D103FFA1413D81DABF74711 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_value, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_value;
		__this->___m_box_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_box_5), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_label_m99E1A8D6D8592F88F581437D24DB1EDE05C63E5E (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_label_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_label(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_label_m7E9E63BBA37F93D886F7E6AF70772ECD7894462B (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_value, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_value;
		__this->___m_label_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_label_8), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_textField_mC554496BAB959445F0CFA30BDC5736DC1F057D48 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_textField_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_textField(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_textField_m4730F5B544F2A87AF3CA75A01FE845E5D40E06BE (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_value, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_value;
		__this->___m_textField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_textField_9), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_textArea_m0ECBC9D126D930490F96E100B27F245E555EB7D1 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_textArea_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_textArea(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_textArea_m916CC2135EE608D81035D3E96787735534DF4E9D (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_value, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_value;
		__this->___m_textArea_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_textArea_10), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_button_m51948EBD478CF9223522AD29B7FBD1BABAABE289 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_button_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_button(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_button_m45F7F5CBF3E9286F4CD601AA92C0C3207C0BB373 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_value, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_value;
		__this->___m_button_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_button_6), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_toggle_mD5F318C602494C478F09C2D48741EC7A9CF5B849 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_toggle_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_toggle(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_toggle_mFE0DA0EC1F1952464B85894CCCFECFA5E0E0C57E (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_value, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_value;
		__this->___m_toggle_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_toggle_7), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_window()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_window_m760DAF129E72775DFD18CB71720AD306345E91C2 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_window_11;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_window(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_window_mA74900E5D554578F3F45DD858B79C5A8FA4A6220 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_value, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_value;
		__this->___m_window_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_window_11), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_horizontalSlider_mAA1753FEEDBA6E28A3A56C3E44A8F5B3D6C8336B (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_horizontalSlider_12;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalSlider(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_horizontalSlider_m8357A90F358C1A040308C8D0DEE363D3ABA71575 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_value, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_value;
		__this->___m_horizontalSlider_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_horizontalSlider_12), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSliderThumb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_horizontalSliderThumb_m9EE5EF8204397C2946D7F384AB7D8A17693837BD (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_horizontalSliderThumb_13;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalSliderThumb(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_horizontalSliderThumb_m1042BED23F10E28042D77D7E738F86C1FEDF460E (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_value, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_value;
		__this->___m_horizontalSliderThumb_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_horizontalSliderThumb_13), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSliderThumbExtent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_horizontalSliderThumbExtent_m6408F303B8932D6E74B307070689A96EA082D612 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_horizontalSliderThumbExtent_14;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalSliderThumbExtent(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_horizontalSliderThumbExtent_m8F4C637DB7E25697AB463B9F2F8D50D8493609C1 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_value, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_value;
		__this->___m_horizontalSliderThumbExtent_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_horizontalSliderThumbExtent_14), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_sliderMixed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_sliderMixed_mFD8CBA8BE229E299D63822AE3E632DABCC27FF61 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_SliderMixed_18;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_sliderMixed(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_sliderMixed_m8A129FB05FAA0970C01A8C3DB14903E13F8E37B3 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_value, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_value;
		__this->___m_SliderMixed_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SliderMixed_18), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_verticalSlider_mB7EC86D11019F1892365E9C6F2A846A68879BBD5 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_verticalSlider_15;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalSlider(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_verticalSlider_m02D94C0BFF867BD8B1ECE05AB50F7F2475DF0E35 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_value, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_value;
		__this->___m_verticalSlider_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_verticalSlider_15), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSliderThumb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_verticalSliderThumb_m3D86347FFC94841C8B6CA94F9F946C76E96EBADB (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_verticalSliderThumb_16;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalSliderThumb(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_verticalSliderThumb_mFBFA636B05068A0E7D24C8C3B06044AB2ACD4C58 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_value, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_value;
		__this->___m_verticalSliderThumb_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_verticalSliderThumb_16), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSliderThumbExtent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_verticalSliderThumbExtent_m299DED8D10A1CE0F22B43BAF47D70DA1EB079AFA (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_verticalSliderThumbExtent_17;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalSliderThumbExtent(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_verticalSliderThumbExtent_m3ECC754FC08BCFA5C3264A6B83C9EE280C1EFCDD (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_value, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_value;
		__this->___m_verticalSliderThumbExtent_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_verticalSliderThumbExtent_17), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_horizontalScrollbar_m945A39FBD098D3800A189FC34B9CE9E8AFF3AEEA (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_horizontalScrollbar_19;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbar(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_horizontalScrollbar_mF08764A78F23728E6FE157F08B9A0127157071FA (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_value, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_value;
		__this->___m_horizontalScrollbar_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_horizontalScrollbar_19), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarThumb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_horizontalScrollbarThumb_m5011EED1650028044BCC7F6DE2829AC0243208BB (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_horizontalScrollbarThumb_20;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarThumb(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_horizontalScrollbarThumb_mDDADEFFD5BF9B88AC4A37AEA13B6FCCC28A3F696 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_value, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_value;
		__this->___m_horizontalScrollbarThumb_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_horizontalScrollbarThumb_20), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarLeftButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_horizontalScrollbarLeftButton_m4A6E58CF80A66F58CF5792B31D08A2D74BF40567 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_horizontalScrollbarLeftButton_21;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarLeftButton(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_horizontalScrollbarLeftButton_m3FDB02C1FDE47BCE92068EA21C531F1F6D667DBC (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_value, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_value;
		__this->___m_horizontalScrollbarLeftButton_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_horizontalScrollbarLeftButton_21), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarRightButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_horizontalScrollbarRightButton_mADFCABC3339BE56E2BAD5443789D8D4FBDD73DAC (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_horizontalScrollbarRightButton_22;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarRightButton(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_horizontalScrollbarRightButton_mE5ED9D2BB554FC29F6A69C81B9361A5E6E004CFD (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_value, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_value;
		__this->___m_horizontalScrollbarRightButton_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_horizontalScrollbarRightButton_22), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_verticalScrollbar_m600012E344D3EB4C687E8A4BE78CE33068374D2A (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_verticalScrollbar_23;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbar(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_verticalScrollbar_m4F55D5B66DB408A5009FC00ABBB9AFFA0C65FFEC (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_value, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_value;
		__this->___m_verticalScrollbar_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_verticalScrollbar_23), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarThumb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_verticalScrollbarThumb_m62663C3DDC40AC91FD4666FBF844DCD83DDA7DE6 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_verticalScrollbarThumb_24;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarThumb(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_verticalScrollbarThumb_mECEC0DC79CCD9AABBF6CBA3CE5141C38699B5EC6 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_value, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_value;
		__this->___m_verticalScrollbarThumb_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_verticalScrollbarThumb_24), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarUpButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_verticalScrollbarUpButton_m0B5575CA6AFB1C74899BF931296EFC39B2C1A902 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_verticalScrollbarUpButton_25;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarUpButton(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_verticalScrollbarUpButton_mF50F99BC770529789363EC9B1C37E610FF8A708C (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_value, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_value;
		__this->___m_verticalScrollbarUpButton_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_verticalScrollbarUpButton_25), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarDownButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_verticalScrollbarDownButton_mFC75161EDB03597ECF09E189C8A57F0E64213E3D (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_verticalScrollbarDownButton_26;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_verticalScrollbarDownButton(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_verticalScrollbarDownButton_m37DD0E232BB98BD219494A297DDBE7620104D328 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_value, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_value;
		__this->___m_verticalScrollbarDownButton_26 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_verticalScrollbarDownButton_26), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_scrollView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_scrollView_m5466CD77A4A7E01320DB0E0F57253D41226BB0B8 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_ScrollView_27;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_scrollView(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_scrollView_mF2D35906BC020D81F909E65B420494F254E4DC32 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_value, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_value;
		__this->___m_ScrollView_27 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ScrollView_27), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUIStyle[] UnityEngine.GUISkin::get_customStyles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* GUISkin_get_customStyles_mAC8A1CFD5756E6C0D367E06B4BDC365E6F6BC39B (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* V_0 = NULL;
	{
		GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* L_0 = __this->___m_CustomStyles_28;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUISkin::set_customStyles(UnityEngine.GUIStyle[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_set_customStyles_mD22F50472DDB0A9770B18F0A15D3F73EEEC4A8B2 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* ___0_value, const RuntimeMethod* method) 
{
	{
		GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* L_0 = ___0_value;
		__this->___m_CustomStyles_28 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CustomStyles_28), (void*)L_0);
		GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104(__this, NULL);
		return;
	}
}
// UnityEngine.GUISettings UnityEngine.GUISkin::get_settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* GUISkin_get_settings_mCBAE5727D7774FAEE47CCC8B4C47AC321DDD85C2 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* V_0 = NULL;
	{
		GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* L_0 = __this->___m_Settings_29;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_error_mB953A37C8F3296E529190A34E18506C735848C01 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FCA7CBE61ADC605F9F35C467CFE5D765D935400);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_1 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var))->___ms_Error_30;
		V_0 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_2, NULL);
		((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var))->___ms_Error_30 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var))->___ms_Error_30), (void*)L_2);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3 = ((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var))->___ms_Error_30;
		NullCheck(L_3);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_3, _stringLiteral5FCA7CBE61ADC605F9F35C467CFE5D765D935400, NULL);
	}

IL_0029:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_4 = ((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var))->___ms_Error_30;
		V_1 = L_4;
		goto IL_0031;
	}

IL_0031:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.GUISkin::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_Apply_mA85017BE8C994F6220112EE8D00D3C37C1FF2104 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74DA73DF8411070FEB987DE79D4529EE39FB3D96);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* L_0 = __this->___m_CustomStyles_28;
		V_0 = (bool)((((RuntimeObject*)(GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral74DA73DF8411070FEB987DE79D4529EE39FB3D96, NULL);
	}

IL_0019:
	{
		GUISkin_BuildStyleCache_m8E99CC278C76A6DA63A24BFD2DE42AE313C0F7E1(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.GUISkin::BuildStyleCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_BuildStyleCache_m8E99CC278C76A6DA63A24BFD2DE42AE313C0F7E1 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m0F9A65F9363E92E29717C15EEEA8A71A2DB8D402_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m39AE7A2B779870855E3AC853F234C40F6735ACF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05CF9CF5853B675491570E9D20951E373F208902);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ACA29C4E59869B5D453E2775263A84E06EDA03D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A5D56B26B1A9CEDE88C8DBEC1D7FF8296992654);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A8647DA913120027BE0BCA389585AB5B1E2C75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C4F52AE03EA8FEF5DEAA4BF1DCF2792C970C821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral514D6E12CA97253D25F742A6EB2CC9B8B2EE8149);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622B9A1A51AC02C383A8F43FC542A76D2C0AF6A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6866F44FE25F48E7BF04C35DA2F4C670D2021A33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral760865C55F22E06913EE529E43E0A4EC6D4C2957);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral780401B090EAF1BCE81DDE534AEE885AE001D0DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D88FE441DA1C11DA793F92B7B7665BEED176766);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8174CA9CD84F86539853890382CF5C587FB8B9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86037F1A053094FF729BA5C5CACF4EDF8B6B38A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8635E0BF76851ADF21ED9AAEC3F8566DAE26898E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E59446B468A9A7AC0FBE64297CB598A1D6DD96C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9844A7472D6104C0F2F6D65CB10A10F7C0C637C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F15982CC17EE718C2AFB3B1C125ACC1A65D2362);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7BF1F00A512D96C33F2BBA9B709990FB1899ECF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8B948094C8FA05C32A4A7D097D73A3418E2EEA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB31A5E45A7336CF4E926743AF852C59783F5D947);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8AFE89D158D2722B833D3EB38ECF175C82B1722);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB34F9B2DD59C1BD2C15FA5E7192661406CCDF4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC53E2F11D267A4FEC8C78116C6E1E0AC0021CA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA0ED0066879A12EF7428466404FD5A318EEDDA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3D711BA856837A5D3C34CA2103E03C173D6F4C7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	int32_t V_21 = 0;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_box_5;
		V_0 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_2, NULL);
		__this->___m_box_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_box_5), (void*)L_2);
	}

IL_0019:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3 = __this->___m_button_6;
		V_1 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_5 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_5, NULL);
		__this->___m_button_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_button_6), (void*)L_5);
	}

IL_0031:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_6 = __this->___m_toggle_7;
		V_2 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_8 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_8, NULL);
		__this->___m_toggle_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_toggle_7), (void*)L_8);
	}

IL_0049:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_9 = __this->___m_label_8;
		V_3 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_9) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0061;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_11 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_11, NULL);
		__this->___m_label_8 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_label_8), (void*)L_11);
	}

IL_0061:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_12 = __this->___m_window_11;
		V_4 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_12) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_007b;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_14 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_14, NULL);
		__this->___m_window_11 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_window_11), (void*)L_14);
	}

IL_007b:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_15 = __this->___m_textField_9;
		V_5 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_15) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0095;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_17 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_17, NULL);
		__this->___m_textField_9 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_textField_9), (void*)L_17);
	}

IL_0095:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_18 = __this->___m_textArea_10;
		V_6 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_00af;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_20 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_20, NULL);
		__this->___m_textArea_10 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_textArea_10), (void*)L_20);
	}

IL_00af:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_21 = __this->___m_horizontalSlider_12;
		V_7 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_21) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00c9;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_23 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_23, NULL);
		__this->___m_horizontalSlider_12 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_horizontalSlider_12), (void*)L_23);
	}

IL_00c9:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_24 = __this->___m_horizontalSliderThumb_13;
		V_8 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_24) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_00e3;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_26 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_26, NULL);
		__this->___m_horizontalSliderThumb_13 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_horizontalSliderThumb_13), (void*)L_26);
	}

IL_00e3:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_27 = __this->___m_verticalSlider_15;
		V_9 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_27) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_00fd;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_29 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_29, NULL);
		__this->___m_verticalSlider_15 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_verticalSlider_15), (void*)L_29);
	}

IL_00fd:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_30 = __this->___m_verticalSliderThumb_16;
		V_10 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_30) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_31 = V_10;
		if (!L_31)
		{
			goto IL_0117;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_32 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_32, NULL);
		__this->___m_verticalSliderThumb_16 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_verticalSliderThumb_16), (void*)L_32);
	}

IL_0117:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_33 = __this->___m_horizontalScrollbar_19;
		V_11 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_33) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_34 = V_11;
		if (!L_34)
		{
			goto IL_0131;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_35 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_35, NULL);
		__this->___m_horizontalScrollbar_19 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_horizontalScrollbar_19), (void*)L_35);
	}

IL_0131:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_36 = __this->___m_horizontalScrollbarThumb_20;
		V_12 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_36) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_37 = V_12;
		if (!L_37)
		{
			goto IL_014b;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_38 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_38, NULL);
		__this->___m_horizontalScrollbarThumb_20 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_horizontalScrollbarThumb_20), (void*)L_38);
	}

IL_014b:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_39 = __this->___m_horizontalScrollbarLeftButton_21;
		V_13 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_39) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_40 = V_13;
		if (!L_40)
		{
			goto IL_0165;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_41 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_41, NULL);
		__this->___m_horizontalScrollbarLeftButton_21 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_horizontalScrollbarLeftButton_21), (void*)L_41);
	}

IL_0165:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_42 = __this->___m_horizontalScrollbarRightButton_22;
		V_14 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_42) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_43 = V_14;
		if (!L_43)
		{
			goto IL_017f;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_44 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_44, NULL);
		__this->___m_horizontalScrollbarRightButton_22 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_horizontalScrollbarRightButton_22), (void*)L_44);
	}

IL_017f:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_45 = __this->___m_verticalScrollbar_23;
		V_15 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_45) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_46 = V_15;
		if (!L_46)
		{
			goto IL_0199;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_47 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_47);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_47, NULL);
		__this->___m_verticalScrollbar_23 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_verticalScrollbar_23), (void*)L_47);
	}

IL_0199:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_48 = __this->___m_verticalScrollbarThumb_24;
		V_16 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_48) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_49 = V_16;
		if (!L_49)
		{
			goto IL_01b3;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_50 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_50, NULL);
		__this->___m_verticalScrollbarThumb_24 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_verticalScrollbarThumb_24), (void*)L_50);
	}

IL_01b3:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_51 = __this->___m_verticalScrollbarUpButton_25;
		V_17 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_51) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_52 = V_17;
		if (!L_52)
		{
			goto IL_01cd;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_53 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_53, NULL);
		__this->___m_verticalScrollbarUpButton_25 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_verticalScrollbarUpButton_25), (void*)L_53);
	}

IL_01cd:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_54 = __this->___m_verticalScrollbarDownButton_26;
		V_18 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_54) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_55 = V_18;
		if (!L_55)
		{
			goto IL_01e7;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_56 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_56, NULL);
		__this->___m_verticalScrollbarDownButton_26 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_verticalScrollbarDownButton_26), (void*)L_56);
	}

IL_01e7:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_57 = __this->___m_ScrollView_27;
		V_19 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_57) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_58 = V_19;
		if (!L_58)
		{
			goto IL_0201;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_59 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_59, NULL);
		__this->___m_ScrollView_27 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ScrollView_27), (void*)L_59);
	}

IL_0201:
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_60;
		L_60 = StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline(NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_61 = (Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F*)il2cpp_codegen_object_new(Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F_il2cpp_TypeInfo_var);
		NullCheck(L_61);
		Dictionary_2__ctor_m39AE7A2B779870855E3AC853F234C40F6735ACF9(L_61, L_60, Dictionary_2__ctor_m39AE7A2B779870855E3AC853F234C40F6735ACF9_RuntimeMethod_var);
		__this->___m_Styles_31 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Styles_31), (void*)L_61);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_62 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_63 = __this->___m_box_5;
		NullCheck(L_62);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_62, _stringLiteral3C4F52AE03EA8FEF5DEAA4BF1DCF2792C970C821, L_63, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_64 = __this->___m_box_5;
		NullCheck(L_64);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_64, _stringLiteral3C4F52AE03EA8FEF5DEAA4BF1DCF2792C970C821, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_65 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_66 = __this->___m_button_6;
		NullCheck(L_65);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_65, _stringLiteral3A5D56B26B1A9CEDE88C8DBEC1D7FF8296992654, L_66, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_67 = __this->___m_button_6;
		NullCheck(L_67);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_67, _stringLiteral3A5D56B26B1A9CEDE88C8DBEC1D7FF8296992654, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_68 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_69 = __this->___m_toggle_7;
		NullCheck(L_68);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_68, _stringLiteral760865C55F22E06913EE529E43E0A4EC6D4C2957, L_69, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_70 = __this->___m_toggle_7;
		NullCheck(L_70);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_70, _stringLiteral760865C55F22E06913EE529E43E0A4EC6D4C2957, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_71 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_72 = __this->___m_label_8;
		NullCheck(L_71);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_71, _stringLiteral8174CA9CD84F86539853890382CF5C587FB8B9BE, L_72, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_73 = __this->___m_label_8;
		NullCheck(L_73);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_73, _stringLiteral8174CA9CD84F86539853890382CF5C587FB8B9BE, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_74 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_75 = __this->___m_window_11;
		NullCheck(L_74);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_74, _stringLiteralCEA0ED0066879A12EF7428466404FD5A318EEDDA, L_75, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_76 = __this->___m_window_11;
		NullCheck(L_76);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_76, _stringLiteralCEA0ED0066879A12EF7428466404FD5A318EEDDA, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_77 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_78 = __this->___m_textField_9;
		NullCheck(L_77);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_77, _stringLiteral05CF9CF5853B675491570E9D20951E373F208902, L_78, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_79 = __this->___m_textField_9;
		NullCheck(L_79);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_79, _stringLiteral05CF9CF5853B675491570E9D20951E373F208902, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_80 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_81 = __this->___m_textArea_10;
		NullCheck(L_80);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_80, _stringLiteral8E59446B468A9A7AC0FBE64297CB598A1D6DD96C, L_81, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_82 = __this->___m_textArea_10;
		NullCheck(L_82);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_82, _stringLiteral8E59446B468A9A7AC0FBE64297CB598A1D6DD96C, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_83 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_84 = __this->___m_horizontalSlider_12;
		NullCheck(L_83);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_83, _stringLiteralA7BF1F00A512D96C33F2BBA9B709990FB1899ECF, L_84, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_85 = __this->___m_horizontalSlider_12;
		NullCheck(L_85);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_85, _stringLiteralA7BF1F00A512D96C33F2BBA9B709990FB1899ECF, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_86 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_87 = __this->___m_horizontalSliderThumb_13;
		NullCheck(L_86);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_86, _stringLiteralA8B948094C8FA05C32A4A7D097D73A3418E2EEA1, L_87, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_88 = __this->___m_horizontalSliderThumb_13;
		NullCheck(L_88);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_88, _stringLiteralA8B948094C8FA05C32A4A7D097D73A3418E2EEA1, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_89 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_90 = __this->___m_verticalSlider_15;
		NullCheck(L_89);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_89, _stringLiteral514D6E12CA97253D25F742A6EB2CC9B8B2EE8149, L_90, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_91 = __this->___m_verticalSlider_15;
		NullCheck(L_91);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_91, _stringLiteral514D6E12CA97253D25F742A6EB2CC9B8B2EE8149, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_92 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_93 = __this->___m_verticalSliderThumb_16;
		NullCheck(L_92);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_92, _stringLiteralCC53E2F11D267A4FEC8C78116C6E1E0AC0021CA5, L_93, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_94 = __this->___m_verticalSliderThumb_16;
		NullCheck(L_94);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_94, _stringLiteralCC53E2F11D267A4FEC8C78116C6E1E0AC0021CA5, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_95 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_96 = __this->___m_horizontalScrollbar_19;
		NullCheck(L_95);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_95, _stringLiteral780401B090EAF1BCE81DDE534AEE885AE001D0DB, L_96, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_97 = __this->___m_horizontalScrollbar_19;
		NullCheck(L_97);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_97, _stringLiteral780401B090EAF1BCE81DDE534AEE885AE001D0DB, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_98 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_99 = __this->___m_horizontalScrollbarThumb_20;
		NullCheck(L_98);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_98, _stringLiteral7D88FE441DA1C11DA793F92B7B7665BEED176766, L_99, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_100 = __this->___m_horizontalScrollbarThumb_20;
		NullCheck(L_100);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_100, _stringLiteral7D88FE441DA1C11DA793F92B7B7665BEED176766, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_101 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_102 = __this->___m_horizontalScrollbarLeftButton_21;
		NullCheck(L_101);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_101, _stringLiteral2ACA29C4E59869B5D453E2775263A84E06EDA03D, L_102, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_103 = __this->___m_horizontalScrollbarLeftButton_21;
		NullCheck(L_103);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_103, _stringLiteral2ACA29C4E59869B5D453E2775263A84E06EDA03D, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_104 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_105 = __this->___m_horizontalScrollbarRightButton_22;
		NullCheck(L_104);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_104, _stringLiteralC8AFE89D158D2722B833D3EB38ECF175C82B1722, L_105, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_106 = __this->___m_horizontalScrollbarRightButton_22;
		NullCheck(L_106);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_106, _stringLiteralC8AFE89D158D2722B833D3EB38ECF175C82B1722, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_107 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_108 = __this->___m_verticalScrollbar_23;
		NullCheck(L_107);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_107, _stringLiteralF3D711BA856837A5D3C34CA2103E03C173D6F4C7, L_108, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_109 = __this->___m_verticalScrollbar_23;
		NullCheck(L_109);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_109, _stringLiteralF3D711BA856837A5D3C34CA2103E03C173D6F4C7, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_110 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_111 = __this->___m_verticalScrollbarThumb_24;
		NullCheck(L_110);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_110, _stringLiteral86037F1A053094FF729BA5C5CACF4EDF8B6B38A3, L_111, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_112 = __this->___m_verticalScrollbarThumb_24;
		NullCheck(L_112);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_112, _stringLiteral86037F1A053094FF729BA5C5CACF4EDF8B6B38A3, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_113 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_114 = __this->___m_verticalScrollbarUpButton_25;
		NullCheck(L_113);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_113, _stringLiteral8635E0BF76851ADF21ED9AAEC3F8566DAE26898E, L_114, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_115 = __this->___m_verticalScrollbarUpButton_25;
		NullCheck(L_115);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_115, _stringLiteral8635E0BF76851ADF21ED9AAEC3F8566DAE26898E, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_116 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_117 = __this->___m_verticalScrollbarDownButton_26;
		NullCheck(L_116);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_116, _stringLiteral3A8647DA913120027BE0BCA389585AB5B1E2C75D, L_117, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_118 = __this->___m_verticalScrollbarDownButton_26;
		NullCheck(L_118);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_118, _stringLiteral3A8647DA913120027BE0BCA389585AB5B1E2C75D, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_119 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_120 = __this->___m_ScrollView_27;
		NullCheck(L_119);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_119, _stringLiteral9844A7472D6104C0F2F6D65CB10A10F7C0C637C0, L_120, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_121 = __this->___m_ScrollView_27;
		NullCheck(L_121);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_121, _stringLiteral9844A7472D6104C0F2F6D65CB10A10F7C0C637C0, NULL);
		GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* L_122 = __this->___m_CustomStyles_28;
		V_20 = (bool)((!(((RuntimeObject*)(GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC*)L_122) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_123 = V_20;
		if (!L_123)
		{
			goto IL_0598;
		}
	}
	{
		V_21 = 0;
		goto IL_0585;
	}

IL_0546:
	{
		GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* L_124 = __this->___m_CustomStyles_28;
		int32_t L_125 = V_21;
		NullCheck(L_124);
		int32_t L_126 = L_125;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		V_22 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_127) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_128 = V_22;
		if (!L_128)
		{
			goto IL_055b;
		}
	}
	{
		goto IL_057f;
	}

IL_055b:
	{
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_129 = __this->___m_Styles_31;
		GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* L_130 = __this->___m_CustomStyles_28;
		int32_t L_131 = V_21;
		NullCheck(L_130);
		int32_t L_132 = L_131;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		NullCheck(L_133);
		String_t* L_134;
		L_134 = GUIStyle_get_name_mDF9EF43C46A0B9431DAF4EB0CE1D18EA32E16B75(L_133, NULL);
		GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* L_135 = __this->___m_CustomStyles_28;
		int32_t L_136 = V_21;
		NullCheck(L_135);
		int32_t L_137 = L_136;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_138 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		NullCheck(L_129);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_129, L_134, L_138, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
	}

IL_057f:
	{
		int32_t L_139 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_139, 1));
	}

IL_0585:
	{
		int32_t L_140 = V_21;
		GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* L_141 = __this->___m_CustomStyles_28;
		NullCheck(L_141);
		V_23 = (bool)((((int32_t)L_140) < ((int32_t)((int32_t)(((RuntimeArray*)L_141)->max_length))))? 1 : 0);
		bool L_142 = V_23;
		if (L_142)
		{
			goto IL_0546;
		}
	}
	{
	}

IL_0598:
	{
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_143 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580** L_144 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580**)(&__this->___m_horizontalSliderThumbExtent_14);
		NullCheck(L_143);
		bool L_145;
		L_145 = Dictionary_2_TryGetValue_m0F9A65F9363E92E29717C15EEEA8A71A2DB8D402(L_143, _stringLiteralCB34F9B2DD59C1BD2C15FA5E7192661406CCDF4C, L_144, Dictionary_2_TryGetValue_m0F9A65F9363E92E29717C15EEEA8A71A2DB8D402_RuntimeMethod_var);
		V_24 = (bool)((((int32_t)L_145) == ((int32_t)0))? 1 : 0);
		bool L_146 = V_24;
		if (!L_146)
		{
			goto IL_05ec;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_147 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_147);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_147, NULL);
		__this->___m_horizontalSliderThumbExtent_14 = L_147;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_horizontalSliderThumbExtent_14), (void*)L_147);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_148 = __this->___m_horizontalSliderThumbExtent_14;
		NullCheck(L_148);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_148, _stringLiteral6866F44FE25F48E7BF04C35DA2F4C670D2021A33, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_149 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_150 = __this->___m_horizontalSliderThumbExtent_14;
		NullCheck(L_149);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_149, _stringLiteralCB34F9B2DD59C1BD2C15FA5E7192661406CCDF4C, L_150, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
	}

IL_05ec:
	{
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_151 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580** L_152 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580**)(&__this->___m_SliderMixed_18);
		NullCheck(L_151);
		bool L_153;
		L_153 = Dictionary_2_TryGetValue_m0F9A65F9363E92E29717C15EEEA8A71A2DB8D402(L_151, _stringLiteral9F15982CC17EE718C2AFB3B1C125ACC1A65D2362, L_152, Dictionary_2_TryGetValue_m0F9A65F9363E92E29717C15EEEA8A71A2DB8D402_RuntimeMethod_var);
		V_25 = (bool)((((int32_t)L_153) == ((int32_t)0))? 1 : 0);
		bool L_154 = V_25;
		if (!L_154)
		{
			goto IL_0640;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_155 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_155);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_155, NULL);
		__this->___m_SliderMixed_18 = L_155;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SliderMixed_18), (void*)L_155);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_156 = __this->___m_SliderMixed_18;
		NullCheck(L_156);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_156, _stringLiteral9F15982CC17EE718C2AFB3B1C125ACC1A65D2362, NULL);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_157 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_158 = __this->___m_SliderMixed_18;
		NullCheck(L_157);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_157, _stringLiteral9F15982CC17EE718C2AFB3B1C125ACC1A65D2362, L_158, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
	}

IL_0640:
	{
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_159 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580** L_160 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580**)(&__this->___m_verticalSliderThumbExtent_17);
		NullCheck(L_159);
		bool L_161;
		L_161 = Dictionary_2_TryGetValue_m0F9A65F9363E92E29717C15EEEA8A71A2DB8D402(L_159, _stringLiteral622B9A1A51AC02C383A8F43FC542A76D2C0AF6A2, L_160, Dictionary_2_TryGetValue_m0F9A65F9363E92E29717C15EEEA8A71A2DB8D402_RuntimeMethod_var);
		V_26 = (bool)((((int32_t)L_161) == ((int32_t)0))? 1 : 0);
		bool L_162 = V_26;
		if (!L_162)
		{
			goto IL_0694;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_163 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_163);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_163, NULL);
		__this->___m_verticalSliderThumbExtent_17 = L_163;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_verticalSliderThumbExtent_17), (void*)L_163);
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_164 = __this->___m_Styles_31;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_165 = __this->___m_verticalSliderThumbExtent_17;
		NullCheck(L_164);
		Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0(L_164, _stringLiteral622B9A1A51AC02C383A8F43FC542A76D2C0AF6A2, L_165, Dictionary_2_set_Item_m7AAEE4C854832ED7DD6A5222330DD59F71BA04A0_RuntimeMethod_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_166 = __this->___m_verticalSliderThumbExtent_17;
		NullCheck(L_166);
		GUIStyle_set_name_mE618266DC07236117AAE05FE8D2B14A595FCF020(L_166, _stringLiteralB31A5E45A7336CF4E926743AF852C59783F5D947, NULL);
	}

IL_0694:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_167;
		L_167 = GUISkin_get_error_mB953A37C8F3296E529190A34E18506C735848C01(NULL);
		NullCheck(L_167);
		GUIStyle_set_stretchHeight_m51C55ED43AA4EDE125E0C423FA0D301E81C09378(L_167, (bool)1, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_168;
		L_168 = GUISkin_get_error_mB953A37C8F3296E529190A34E18506C735848C01(NULL);
		NullCheck(L_168);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_169;
		L_169 = GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F(L_168, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_170;
		L_170 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_169);
		GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1(L_169, L_170, NULL);
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::GetStyle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_GetStyle_mF024BC5177A2AD477ACF44D87BE6A629C91562CA (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, String_t* ___0_styleName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventType_tC62F0D77DB08D7326B58B2D8CF43BD45CFD3203E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral123B2E5CFC7B5F49F61A9A7E042BC077972AB7EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5934735AA968E0CB7CB39062B758A93F76F5591C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85E4DD1872CA9889B201BF423506257FB4DB467C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B9EF66DAA3B5CC54EF182295D9A9980A1C9B23D);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	bool V_1 = false;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	int32_t G_B3_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	{
		String_t* L_0 = ___0_styleName;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1;
		L_1 = GUISkin_FindStyle_mF82C37E2481D2B9E96C26EFE0353F8954F844FFE(__this, L_0, NULL);
		V_0 = L_1;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_4 = V_0;
		V_2 = L_4;
		goto IL_007c;
	}

IL_0015:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral9B9EF66DAA3B5CC54EF182295D9A9980A1C9B23D);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9B9EF66DAA3B5CC54EF182295D9A9980A1C9B23D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8 = ___0_styleName;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral5934735AA968E0CB7CB39062B758A93F76F5591C);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral5934735AA968E0CB7CB39062B758A93F76F5591C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_10;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral85E4DD1872CA9889B201BF423506257FB4DB467C);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral85E4DD1872CA9889B201BF423506257FB4DB467C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_14;
		L_14 = Event_get_current_mBD7135E10C392EAD61AC0A0D2489EF758C8A3FAD(NULL);
		G_B3_0 = 5;
		G_B3_1 = L_13;
		G_B3_2 = L_13;
		if (L_14)
		{
			G_B4_0 = 5;
			G_B4_1 = L_13;
			G_B4_2 = L_13;
			goto IL_0050;
		}
	}
	{
		G_B5_0 = _stringLiteral123B2E5CFC7B5F49F61A9A7E042BC077972AB7EA;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		goto IL_0068;
	}

IL_0050:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_15;
		L_15 = Event_get_current_mBD7135E10C392EAD61AC0A0D2489EF758C8A3FAD(NULL);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_15, NULL);
		V_3 = L_16;
		Il2CppFakeBox<int32_t> L_17(EventType_tC62F0D77DB08D7326B58B2D8CF43BD45CFD3203E_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_18;
		L_18 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_17), NULL);
		G_B5_0 = L_18;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
	}

IL_0068:
	{
		NullCheck(G_B5_2);
		ArrayElementTypeCheck (G_B5_2, G_B5_0);
		(G_B5_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B5_1), (String_t*)G_B5_0);
		String_t* L_19;
		L_19 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(G_B5_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_19, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_20;
		L_20 = GUISkin_get_error_mB953A37C8F3296E529190A34E18506C735848C01(NULL);
		V_2 = L_20;
		goto IL_007c;
	}

IL_007c:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_21 = V_2;
		return L_21;
	}
}
// UnityEngine.GUIStyle UnityEngine.GUISkin::FindStyle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_FindStyle_mF82C37E2481D2B9E96C26EFE0353F8954F844FFE (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, String_t* ___0_styleName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m0F9A65F9363E92E29717C15EEEA8A71A2DB8D402_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_3 = NULL;
	{
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_0 = __this->___m_Styles_31;
		V_1 = (bool)((((RuntimeObject*)(Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		GUISkin_BuildStyleCache_m8E99CC278C76A6DA63A24BFD2DE42AE313C0F7E1(__this, NULL);
	}

IL_0015:
	{
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_2 = __this->___m_Styles_31;
		String_t* L_3 = ___0_styleName;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m0F9A65F9363E92E29717C15EEEA8A71A2DB8D402(L_2, L_3, (&V_0), Dictionary_2_TryGetValue_m0F9A65F9363E92E29717C15EEEA8A71A2DB8D402_RuntimeMethod_var);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_6 = V_0;
		V_3 = L_6;
		goto IL_002f;
	}

IL_002b:
	{
		V_3 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)NULL;
		goto IL_002f;
	}

IL_002f:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_7 = V_3;
		return L_7;
	}
}
// System.Void UnityEngine.GUISkin::MakeCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISkin_MakeCurrent_mDB3BB1FBA5BD2FEDDA3F32F11170F47A6444AEED (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var))->___current_33 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var))->___current_33), (void*)__this);
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_0;
		L_0 = GUISkin_get_font_m806CF702C59E43DF55BA441030A60F80E9D8CFD5(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_SetDefaultFont_mD6B98375749805CA5084CA8C5D6A1295359AE0E3(L_0, NULL);
		SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* L_1 = ((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var))->___m_SkinChanged_32;
		V_0 = (bool)((!(((RuntimeObject*)(SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* L_3 = ((GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields*)il2cpp_codegen_static_fields_for(GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_il2cpp_TypeInfo_var))->___m_SkinChanged_32;
		NullCheck(L_3);
		SkinChangedDelegate_Invoke_mD14214487F9A0E4DD7EB7F97927D03EC8F1A3B4C_inline(L_3, NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.GUISkin::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GUISkin_GetEnumerator_mEC308E2DA9A94E09C622D13F82EB7ECCECF8AFF0 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m923D794849584E9B0675E86D09B54BA6691944D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t6FCF94B18593967BB1EA62E38DDD1FA537144AA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m88DC4BD4D4952C7D4B15BE9CC164DF1EAA69A197_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_0 = __this->___m_Styles_31;
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		GUISkin_BuildStyleCache_m8E99CC278C76A6DA63A24BFD2DE42AE313C0F7E1(__this, NULL);
	}

IL_0015:
	{
		Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* L_2 = __this->___m_Styles_31;
		NullCheck(L_2);
		ValueCollection_t6CD4B9552B29D570FBA4E0145D0C98841ECCC8C1* L_3;
		L_3 = Dictionary_2_get_Values_m923D794849584E9B0675E86D09B54BA6691944D2(L_2, Dictionary_2_get_Values_m923D794849584E9B0675E86D09B54BA6691944D2_RuntimeMethod_var);
		NullCheck(L_3);
		Enumerator_t6FCF94B18593967BB1EA62E38DDD1FA537144AA9 L_4;
		L_4 = ValueCollection_GetEnumerator_m88DC4BD4D4952C7D4B15BE9CC164DF1EAA69A197(L_3, ValueCollection_GetEnumerator_m88DC4BD4D4952C7D4B15BE9CC164DF1EAA69A197_RuntimeMethod_var);
		Enumerator_t6FCF94B18593967BB1EA62E38DDD1FA537144AA9 L_5 = L_4;
		RuntimeObject* L_6 = Box(Enumerator_t6FCF94B18593967BB1EA62E38DDD1FA537144AA9_il2cpp_TypeInfo_var, &L_5);
		V_1 = (RuntimeObject*)L_6;
		goto IL_002d;
	}

IL_002d:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SkinChangedDelegate_Invoke_mD14214487F9A0E4DD7EB7F97927D03EC8F1A3B4C_Multicast(SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* currentDelegate = reinterpret_cast<SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SkinChangedDelegate_Invoke_mD14214487F9A0E4DD7EB7F97927D03EC8F1A3B4C_OpenInst(SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void SkinChangedDelegate_Invoke_mD14214487F9A0E4DD7EB7F97927D03EC8F1A3B4C_OpenStatic(SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void SkinChangedDelegate_Invoke_mD14214487F9A0E4DD7EB7F97927D03EC8F1A3B4C_OpenStaticInvoker(SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
void SkinChangedDelegate_Invoke_mD14214487F9A0E4DD7EB7F97927D03EC8F1A3B4C_ClosedStaticInvoker(SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98 (SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinChangedDelegate__ctor_m20D33B3868351B98B708468F7A8192C1ACF85CD1 (SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SkinChangedDelegate_Invoke_mD14214487F9A0E4DD7EB7F97927D03EC8F1A3B4C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SkinChangedDelegate_Invoke_mD14214487F9A0E4DD7EB7F97927D03EC8F1A3B4C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SkinChangedDelegate_Invoke_mD14214487F9A0E4DD7EB7F97927D03EC8F1A3B4C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&SkinChangedDelegate_Invoke_mD14214487F9A0E4DD7EB7F97927D03EC8F1A3B4C_Multicast;
}
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinChangedDelegate_Invoke_mD14214487F9A0E4DD7EB7F97927D03EC8F1A3B4C (SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SliderState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderState__ctor_m650A11534C71EF571FD631CC3E910B756A16889E (SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif






// Conversion methods for marshalling of: UnityEngine.SliderHandler
IL2CPP_EXTERN_C void SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_marshal_pinvoke(const SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83& unmarshaled, SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83____slider_5_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___slider_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83____slider_5_FieldInfo_var, SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___slider_5Exception, NULL);
}
IL2CPP_EXTERN_C void SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_marshal_pinvoke_back(const SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_marshaled_pinvoke& marshaled, SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83____slider_5_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___slider_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83____slider_5_FieldInfo_var, SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___slider_5Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.SliderHandler
IL2CPP_EXTERN_C void SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_marshal_pinvoke_cleanup(SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_marshaled_pinvoke& marshaled)
{
}






// Conversion methods for marshalling of: UnityEngine.SliderHandler
IL2CPP_EXTERN_C void SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_marshal_com(const SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83& unmarshaled, SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83____slider_5_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___slider_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83____slider_5_FieldInfo_var, SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___slider_5Exception, NULL);
}
IL2CPP_EXTERN_C void SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_marshal_com_back(const SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_marshaled_com& marshaled, SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83____slider_5_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___slider_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83____slider_5_FieldInfo_var, SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___slider_5Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.SliderHandler
IL2CPP_EXTERN_C void SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_marshal_com_cleanup(SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.SliderHandler::.ctor(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderHandler__ctor_mDCC4520E68A478FC28519FD5DB149EFFBB9C186A (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, float ___1_currentValue, float ___2_size, float ___3_start, float ___4_end, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___5_slider, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___6_thumb, bool ___7_horiz, int32_t ___8_id, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___9_thumbExtent, const RuntimeMethod* method) 
{
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_position;
		__this->___position_0 = L_0;
		float L_1 = ___1_currentValue;
		__this->___currentValue_1 = L_1;
		float L_2 = ___2_size;
		__this->___size_2 = L_2;
		float L_3 = ___3_start;
		__this->___start_3 = L_3;
		float L_4 = ___4_end;
		__this->___end_4 = L_4;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_5 = ___5_slider;
		__this->___slider_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slider_5), (void*)L_5);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_6 = ___6_thumb;
		__this->___thumb_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thumb_6), (void*)L_6);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_7 = ___9_thumbExtent;
		__this->___thumbExtent_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thumbExtent_7), (void*)L_7);
		bool L_8 = ___7_horiz;
		__this->___horiz_8 = L_8;
		int32_t L_9 = ___8_id;
		__this->___id_9 = L_9;
		return;
	}
}
IL2CPP_EXTERN_C  void SliderHandler__ctor_mDCC4520E68A478FC28519FD5DB149EFFBB9C186A_AdjustorThunk (RuntimeObject* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, float ___1_currentValue, float ___2_size, float ___3_start, float ___4_end, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___5_slider, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___6_thumb, bool ___7_horiz, int32_t ___8_id, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___9_thumbExtent, const RuntimeMethod* method)
{
	SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83*>(__this + _offset);
	SliderHandler__ctor_mDCC4520E68A478FC28519FD5DB149EFFBB9C186A(_thisAdjusted, ___0_position, ___1_currentValue, ___2_size, ___3_start, ___4_end, ___5_slider, ___6_thumb, ___7_horiz, ___8_id, ___9_thumbExtent, method);
}
// System.Single UnityEngine.SliderHandler::Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_Handle_m9E9DBA6E45BA00A0D812C74BBB18DFBA0F923BFE (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B3_0 = 0;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___slider_5;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = __this->___thumb_6;
		G_B3_0 = ((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		float L_3 = __this->___currentValue_1;
		V_1 = L_3;
		goto IL_0076;
	}

IL_0022:
	{
		int32_t L_4;
		L_4 = SliderHandler_CurrentEventType_mC4756C3A92FC488ACF0C0148CFFA0F0239622F2A(__this, NULL);
		V_3 = L_4;
		int32_t L_5 = V_3;
		V_2 = L_5;
		int32_t L_6 = V_2;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0049;
			}
			case 1:
			{
				goto IL_005b;
			}
			case 2:
			{
				goto IL_006d;
			}
			case 3:
			{
				goto IL_0052;
			}
		}
	}
	{
		goto IL_0043;
	}

IL_0043:
	{
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)7)))
		{
			goto IL_0064;
		}
	}
	{
		goto IL_006d;
	}

IL_0049:
	{
		float L_8;
		L_8 = SliderHandler_OnMouseDown_m9DE4BD08EDF586656B93C94FDF4907D081BCA8B8(__this, NULL);
		V_1 = L_8;
		goto IL_0076;
	}

IL_0052:
	{
		float L_9;
		L_9 = SliderHandler_OnMouseDrag_mC985CE7801C44CC87A1B11ABF0E142E617356B9E(__this, NULL);
		V_1 = L_9;
		goto IL_0076;
	}

IL_005b:
	{
		float L_10;
		L_10 = SliderHandler_OnMouseUp_m97A5FDF8EBADFE60EC0DE486127A7F4B9C7068DB(__this, NULL);
		V_1 = L_10;
		goto IL_0076;
	}

IL_0064:
	{
		float L_11;
		L_11 = SliderHandler_OnRepaint_m5FAFC71FF2A246AC8336B0F400F35DF581AD54AF(__this, NULL);
		V_1 = L_11;
		goto IL_0076;
	}

IL_006d:
	{
		float L_12 = __this->___currentValue_1;
		V_1 = L_12;
		goto IL_0076;
	}

IL_0076:
	{
		float L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C  float SliderHandler_Handle_m9E9DBA6E45BA00A0D812C74BBB18DFBA0F923BFE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83*>(__this + _offset);
	float _returnValue;
	_returnValue = SliderHandler_Handle_m9E9DBA6E45BA00A0D812C74BBB18DFBA0F923BFE(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.SliderHandler::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_OnMouseDown_m9DE4BD08EDF586656B93C94FDF4907D081BCA8B8 (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemClock_t7FB49720CB6EB45355732FFF44905D860E2397B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	float V_6 = 0.0f;
	bool V_7 = false;
	bool V_8 = false;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		L_0 = SliderHandler_ThumbSelectionRect_m182932776473DDB8076E858AC0580E931AE66EB8(__this, NULL);
		V_0 = L_0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1 = V_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_2;
		L_2 = SliderHandler_CurrentEvent_m5B1D7DFBE33DF06D2FE72D7BA64E997DB59ADE75(__this, NULL);
		bool L_3;
		L_3 = GUIUtility_HitTest_m0312C850D991342F3A7656A959C87466500F2987(L_1, L_2, NULL);
		V_1 = L_3;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		L_4 = Rect_get_zero_m5341D8B63DEF1F4C308A685EEC8CFEA12A396C8D(NULL);
		V_2 = L_4;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5 = __this->___position_0;
		V_4 = L_5;
		float L_6;
		L_6 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&V_4), NULL);
		float L_7;
		L_7 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_8;
		L_8 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_6, L_7, NULL);
		Rect_set_xMin_mA873FCFAF9EABA46A026B73CA045192DF1946F19((&V_2), L_8, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9 = __this->___position_0;
		V_4 = L_9;
		float L_10;
		L_10 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&V_4), NULL);
		float L_11;
		L_11 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&V_0), NULL);
		float L_12;
		L_12 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_10, L_11, NULL);
		Rect_set_xMax_m97C28D468455A6D19325D0D862E80A093240D49D((&V_2), L_12, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = __this->___position_0;
		V_4 = L_13;
		float L_14;
		L_14 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&V_4), NULL);
		float L_15;
		L_15 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&V_0), NULL);
		float L_16;
		L_16 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_14, L_15, NULL);
		Rect_set_yMin_m9F780E509B9215A9E5826178CF664BD0E486D4EE((&V_2), L_16, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_17 = __this->___position_0;
		V_4 = L_17;
		float L_18;
		L_18 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&V_4), NULL);
		float L_19;
		L_19 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&V_0), NULL);
		float L_20;
		L_20 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_18, L_19, NULL);
		Rect_set_yMax_mCF452040E0068A4B3CB15994C0B4B6AD4D78E04B((&V_2), L_20, NULL);
		bool L_21;
		L_21 = SliderHandler_IsEmptySlider_m8AD3CF68C310AEAAB0E59D54A29A094A285AA586(__this, NULL);
		if (L_21)
		{
			goto IL_00c6;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_22 = V_2;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_23;
		L_23 = SliderHandler_CurrentEvent_m5B1D7DFBE33DF06D2FE72D7BA64E997DB59ADE75(__this, NULL);
		bool L_24;
		L_24 = GUIUtility_HitTest_m0312C850D991342F3A7656A959C87466500F2987(L_22, L_23, NULL);
		if (L_24)
		{
			goto IL_00c3;
		}
	}
	{
		bool L_25 = V_1;
		G_B4_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		goto IL_00c4;
	}

IL_00c3:
	{
		G_B4_0 = 0;
	}

IL_00c4:
	{
		G_B6_0 = G_B4_0;
		goto IL_00c7;
	}

IL_00c6:
	{
		G_B6_0 = 1;
	}

IL_00c7:
	{
		V_5 = (bool)G_B6_0;
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_00da;
		}
	}
	{
		float L_27 = __this->___currentValue_1;
		V_6 = L_27;
		goto IL_0185;
	}

IL_00da:
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_scrollTroughSide_m6E4ED984EDA808C922C062CA6FB6491D2CD28CCA_inline(0, NULL);
		int32_t L_28 = __this->___id_9;
		GUIUtility_set_hotControl_mFBC648186C83874DE776A508C420183ADB527E9A(L_28, NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_29;
		L_29 = SliderHandler_CurrentEvent_m5B1D7DFBE33DF06D2FE72D7BA64E997DB59ADE75(__this, NULL);
		NullCheck(L_29);
		Event_Use_mD77A166D8CFEC4997484C58BC55FEB2D288D3453(L_29, NULL);
		bool L_30 = V_1;
		V_7 = L_30;
		bool L_31 = V_7;
		if (!L_31)
		{
			goto IL_0118;
		}
	}
	{
		float L_32;
		L_32 = SliderHandler_ClampedCurrentValue_m2312300551774A993735636675E23015737664EC(__this, NULL);
		SliderHandler_StartDraggingWithValue_m580387DD28C5BC8EF389692BC4B0BDB402AD1F5C(__this, L_32, NULL);
		float L_33 = __this->___currentValue_1;
		V_6 = L_33;
		goto IL_0185;
	}

IL_0118:
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_changed_mBD91A44AFA77D2BF883B3150AF4AE6AC3ED121DC((bool)1, NULL);
		bool L_34;
		L_34 = SliderHandler_SupportsPageMovements_m1F5CDF7F988438DF502BC1312F23CC4164F97EA8(__this, NULL);
		V_8 = L_34;
		bool L_35 = V_8;
		if (!L_35)
		{
			goto IL_016b;
		}
	}
	{
		SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8* L_36;
		L_36 = SliderHandler_SliderState_m9E9EECE09E988B83FE3DF1F0AF9AFCF4AAF96D60(__this, NULL);
		NullCheck(L_36);
		L_36->___isDragging_2 = (bool)0;
		il2cpp_codegen_runtime_class_init_inline(SystemClock_t7FB49720CB6EB45355732FFF44905D860E2397B5_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_37;
		L_37 = SystemClock_get_now_m989E4C1A9597D16D8A71CCEB33AD1A4B16290C1F(NULL);
		V_9 = L_37;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_38;
		L_38 = DateTime_AddMilliseconds_mEF44A0EE635A478B7B0CDAA438D2240C14C88D05((&V_9), (250.0), NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_nextScrollStepTime_mA35BA69E3FDBC961E42F6C9D02BB4E8776926A09_inline(L_38, NULL);
		int32_t L_39;
		L_39 = SliderHandler_CurrentScrollTroughSide_m5E30388E1DE3C01FB968EFCC02215C14F301E1A2(__this, NULL);
		GUI_set_scrollTroughSide_m6E4ED984EDA808C922C062CA6FB6491D2CD28CCA_inline(L_39, NULL);
		float L_40;
		L_40 = SliderHandler_PageMovementValue_mA83FFA75AE8306757F98570BEDC2F307FBC96FE1(__this, NULL);
		V_6 = L_40;
		goto IL_0185;
	}

IL_016b:
	{
		float L_41;
		L_41 = SliderHandler_ValueForCurrentMousePosition_m089BEF0D4C4E82C086E3E49B871780AD6D6848F5(__this, NULL);
		V_3 = L_41;
		float L_42 = V_3;
		SliderHandler_StartDraggingWithValue_m580387DD28C5BC8EF389692BC4B0BDB402AD1F5C(__this, L_42, NULL);
		float L_43 = V_3;
		float L_44;
		L_44 = SliderHandler_Clamp_mC73E2009637968EFFC5DEE94B8C48B8DF6442C5E(__this, L_43, NULL);
		V_6 = L_44;
		goto IL_0185;
	}

IL_0185:
	{
		float L_45 = V_6;
		return L_45;
	}
}
IL2CPP_EXTERN_C  float SliderHandler_OnMouseDown_m9DE4BD08EDF586656B93C94FDF4907D081BCA8B8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83*>(__this + _offset);
	float _returnValue;
	_returnValue = SliderHandler_OnMouseDown_m9DE4BD08EDF586656B93C94FDF4907D081BCA8B8(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.SliderHandler::OnMouseDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_OnMouseDrag_mC985CE7801C44CC87A1B11ABF0E142E617356B9E (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		int32_t L_0;
		L_0 = GUIUtility_get_hotControl_m6CD6AD33B46A9AFF2261E2C352DC7BAB4C20B026(NULL);
		int32_t L_1 = __this->___id_9;
		V_3 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		float L_3 = __this->___currentValue_1;
		V_4 = L_3;
		goto IL_007b;
	}

IL_001f:
	{
		SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8* L_4;
		L_4 = SliderHandler_SliderState_m9E9EECE09E988B83FE3DF1F0AF9AFCF4AAF96D60(__this, NULL);
		V_0 = L_4;
		SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->___isDragging_2;
		V_5 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		float L_8 = __this->___currentValue_1;
		V_4 = L_8;
		goto IL_007b;
	}

IL_003f:
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_changed_mBD91A44AFA77D2BF883B3150AF4AE6AC3ED121DC((bool)1, NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_9;
		L_9 = SliderHandler_CurrentEvent_m5B1D7DFBE33DF06D2FE72D7BA64E997DB59ADE75(__this, NULL);
		NullCheck(L_9);
		Event_Use_mD77A166D8CFEC4997484C58BC55FEB2D288D3453(L_9, NULL);
		float L_10;
		L_10 = SliderHandler_MousePosition_m5E95F987E7F6CA9E517AA7B84328689A287965B6(__this, NULL);
		SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8* L_11 = V_0;
		NullCheck(L_11);
		float L_12 = L_11->___dragStartPos_0;
		V_1 = ((float)il2cpp_codegen_subtract(L_10, L_12));
		SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8* L_13 = V_0;
		NullCheck(L_13);
		float L_14 = L_13->___dragStartValue_1;
		float L_15 = V_1;
		float L_16;
		L_16 = SliderHandler_ValuesPerPixel_mF654B0D4DDC55599E9B251A026727DAFF425E66F(__this, NULL);
		V_2 = ((float)il2cpp_codegen_add(L_14, ((float)(L_15/L_16))));
		float L_17 = V_2;
		float L_18;
		L_18 = SliderHandler_Clamp_mC73E2009637968EFFC5DEE94B8C48B8DF6442C5E(__this, L_17, NULL);
		V_4 = L_18;
		goto IL_007b;
	}

IL_007b:
	{
		float L_19 = V_4;
		return L_19;
	}
}
IL2CPP_EXTERN_C  float SliderHandler_OnMouseDrag_mC985CE7801C44CC87A1B11ABF0E142E617356B9E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83*>(__this + _offset);
	float _returnValue;
	_returnValue = SliderHandler_OnMouseDrag_mC985CE7801C44CC87A1B11ABF0E142E617356B9E(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.SliderHandler::OnMouseUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_OnMouseUp_m97A5FDF8EBADFE60EC0DE486127A7F4B9C7068DB (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		int32_t L_0;
		L_0 = GUIUtility_get_hotControl_m6CD6AD33B46A9AFF2261E2C352DC7BAB4C20B026(NULL);
		int32_t L_1 = __this->___id_9;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_3;
		L_3 = SliderHandler_CurrentEvent_m5B1D7DFBE33DF06D2FE72D7BA64E997DB59ADE75(__this, NULL);
		NullCheck(L_3);
		Event_Use_mD77A166D8CFEC4997484C58BC55FEB2D288D3453(L_3, NULL);
		GUIUtility_set_hotControl_mFBC648186C83874DE776A508C420183ADB527E9A(0, NULL);
	}

IL_0027:
	{
		float L_4 = __this->___currentValue_1;
		V_1 = L_4;
		goto IL_0030;
	}

IL_0030:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  float SliderHandler_OnMouseUp_m97A5FDF8EBADFE60EC0DE486127A7F4B9C7068DB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83*>(__this + _offset);
	float _returnValue;
	_returnValue = SliderHandler_OnMouseUp_m97A5FDF8EBADFE60EC0DE486127A7F4B9C7068DB(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.SliderHandler::OnRepaint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_OnRepaint_m5FAFC71FF2A246AC8336B0F400F35DF581AD54AF (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemClock_t7FB49720CB6EB45355732FFF44905D860E2397B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	float V_4 = 0.0f;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B11_0 = 0;
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = __this->___position_0;
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_1;
		L_1 = SliderHandler_CurrentEvent_m5B1D7DFBE33DF06D2FE72D7BA64E997DB59ADE75(__this, NULL);
		bool L_2;
		L_2 = GUIUtility_HitTest_m0312C850D991342F3A7656A959C87466500F2987(L_0, L_1, NULL);
		V_0 = L_2;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3 = __this->___slider_5;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4 = __this->___position_0;
		il2cpp_codegen_runtime_class_init_inline(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_5 = ((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___none_6;
		int32_t L_6 = __this->___id_9;
		bool L_7 = V_0;
		NullCheck(L_3);
		GUIStyle_Draw_mACFC9CE57BD530BB6A9592149DD95108A8014406(L_3, L_4, L_5, L_6, (bool)0, L_7, NULL);
		float L_8 = __this->___currentValue_1;
		float L_9 = __this->___start_3;
		float L_10 = __this->___end_4;
		float L_11;
		L_11 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_9, L_10, NULL);
		if ((!(((float)L_8) >= ((float)L_11))))
		{
			goto IL_0069;
		}
	}
	{
		float L_12 = __this->___currentValue_1;
		float L_13 = __this->___start_3;
		float L_14 = __this->___end_4;
		float L_15;
		L_15 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_13, L_14, NULL);
		G_B3_0 = ((((int32_t)((!(((float)L_12) <= ((float)L_15)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006a;
	}

IL_0069:
	{
		G_B3_0 = 0;
	}

IL_006a:
	{
		V_1 = (bool)G_B3_0;
		bool L_16 = V_1;
		if (!L_16)
		{
			goto IL_00bb;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_17 = __this->___thumbExtent_7;
		V_2 = (bool)((!(((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_18 = V_2;
		if (!L_18)
		{
			goto IL_009b;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_19 = __this->___thumbExtent_7;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_20;
		L_20 = SliderHandler_ThumbExtRect_m16D13E44222386A99F1E3F089A5F4DC2ED19DBC1(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_21 = ((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___none_6;
		int32_t L_22 = __this->___id_9;
		bool L_23 = V_0;
		NullCheck(L_19);
		GUIStyle_Draw_mACFC9CE57BD530BB6A9592149DD95108A8014406(L_19, L_20, L_21, L_22, (bool)0, L_23, NULL);
	}

IL_009b:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_24 = __this->___thumb_6;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_25;
		L_25 = SliderHandler_ThumbRect_mA297CC1978CFEEC1F01218A5C05766C9D0465C98(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_26 = ((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields*)il2cpp_codegen_static_fields_for(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var))->___none_6;
		int32_t L_27 = __this->___id_9;
		bool L_28 = V_0;
		NullCheck(L_24);
		GUIStyle_Draw_mACFC9CE57BD530BB6A9592149DD95108A8014406(L_24, L_25, L_26, L_27, (bool)0, L_28, NULL);
	}

IL_00bb:
	{
		int32_t L_29;
		L_29 = GUIUtility_get_hotControl_m6CD6AD33B46A9AFF2261E2C352DC7BAB4C20B026(NULL);
		int32_t L_30 = __this->___id_9;
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_00d3;
		}
	}
	{
		bool L_31 = V_0;
		if (!L_31)
		{
			goto IL_00d3;
		}
	}
	{
		bool L_32;
		L_32 = SliderHandler_IsEmptySlider_m8AD3CF68C310AEAAB0E59D54A29A094A285AA586(__this, NULL);
		G_B11_0 = ((int32_t)(L_32));
		goto IL_00d4;
	}

IL_00d3:
	{
		G_B11_0 = 1;
	}

IL_00d4:
	{
		V_3 = (bool)G_B11_0;
		bool L_33 = V_3;
		if (!L_33)
		{
			goto IL_00e5;
		}
	}
	{
		float L_34 = __this->___currentValue_1;
		V_4 = L_34;
		goto IL_01b7;
	}

IL_00e5:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_35;
		L_35 = SliderHandler_ThumbRect_mA297CC1978CFEEC1F01218A5C05766C9D0465C98(__this, NULL);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_36;
		L_36 = SliderHandler_CurrentEvent_m5B1D7DFBE33DF06D2FE72D7BA64E997DB59ADE75(__this, NULL);
		bool L_37;
		L_37 = GUIUtility_HitTest_m0312C850D991342F3A7656A959C87466500F2987(L_35, L_36, NULL);
		V_5 = L_37;
		bool L_38 = V_5;
		if (!L_38)
		{
			goto IL_0121;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		int32_t L_39;
		L_39 = GUI_get_scrollTroughSide_mD6AEA9AFA867B71D484561D5BEBF3520321E5E3E_inline(NULL);
		V_6 = (bool)((!(((uint32_t)L_39) <= ((uint32_t)0)))? 1 : 0);
		bool L_40 = V_6;
		if (!L_40)
		{
			goto IL_0114;
		}
	}
	{
		GUIUtility_set_hotControl_mFBC648186C83874DE776A508C420183ADB527E9A(0, NULL);
	}

IL_0114:
	{
		float L_41 = __this->___currentValue_1;
		V_4 = L_41;
		goto IL_01b7;
	}

IL_0121:
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_InternalRepaintEditorWindow_m067D1FC98B8C7B30E0E6B28C38CA2EE78F96851E(NULL);
		il2cpp_codegen_runtime_class_init_inline(SystemClock_t7FB49720CB6EB45355732FFF44905D860E2397B5_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_42;
		L_42 = SystemClock_get_now_m989E4C1A9597D16D8A71CCEB33AD1A4B16290C1F(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_43;
		L_43 = GUI_get_nextScrollStepTime_m9ECB2B2710D4233C7124D23F0DD995006913D70E_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = DateTime_op_LessThan_m2A02FFF5F35E33417FB32CB9F948769CA15AED17(L_42, L_43, NULL);
		V_7 = L_44;
		bool L_45 = V_7;
		if (!L_45)
		{
			goto IL_0146;
		}
	}
	{
		float L_46 = __this->___currentValue_1;
		V_4 = L_46;
		goto IL_01b7;
	}

IL_0146:
	{
		int32_t L_47;
		L_47 = SliderHandler_CurrentScrollTroughSide_m5E30388E1DE3C01FB968EFCC02215C14F301E1A2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		int32_t L_48;
		L_48 = GUI_get_scrollTroughSide_mD6AEA9AFA867B71D484561D5BEBF3520321E5E3E_inline(NULL);
		V_8 = (bool)((((int32_t)((((int32_t)L_47) == ((int32_t)L_48))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_49 = V_8;
		if (!L_49)
		{
			goto IL_0166;
		}
	}
	{
		float L_50 = __this->___currentValue_1;
		V_4 = L_50;
		goto IL_01b7;
	}

IL_0166:
	{
		il2cpp_codegen_runtime_class_init_inline(SystemClock_t7FB49720CB6EB45355732FFF44905D860E2397B5_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_51;
		L_51 = SystemClock_get_now_m989E4C1A9597D16D8A71CCEB33AD1A4B16290C1F(NULL);
		V_9 = L_51;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_52;
		L_52 = DateTime_AddMilliseconds_mEF44A0EE635A478B7B0CDAA438D2240C14C88D05((&V_9), (30.0), NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_nextScrollStepTime_mA35BA69E3FDBC961E42F6C9D02BB4E8776926A09_inline(L_52, NULL);
		bool L_53;
		L_53 = SliderHandler_SupportsPageMovements_m1F5CDF7F988438DF502BC1312F23CC4164F97EA8(__this, NULL);
		V_10 = L_53;
		bool L_54 = V_10;
		if (!L_54)
		{
			goto IL_01ad;
		}
	}
	{
		SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8* L_55;
		L_55 = SliderHandler_SliderState_m9E9EECE09E988B83FE3DF1F0AF9AFCF4AAF96D60(__this, NULL);
		NullCheck(L_55);
		L_55->___isDragging_2 = (bool)0;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_set_changed_mBD91A44AFA77D2BF883B3150AF4AE6AC3ED121DC((bool)1, NULL);
		float L_56;
		L_56 = SliderHandler_PageMovementValue_mA83FFA75AE8306757F98570BEDC2F307FBC96FE1(__this, NULL);
		V_4 = L_56;
		goto IL_01b7;
	}

IL_01ad:
	{
		float L_57;
		L_57 = SliderHandler_ClampedCurrentValue_m2312300551774A993735636675E23015737664EC(__this, NULL);
		V_4 = L_57;
		goto IL_01b7;
	}

IL_01b7:
	{
		float L_58 = V_4;
		return L_58;
	}
}
IL2CPP_EXTERN_C  float SliderHandler_OnRepaint_m5FAFC71FF2A246AC8336B0F400F35DF581AD54AF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83*>(__this + _offset);
	float _returnValue;
	_returnValue = SliderHandler_OnRepaint_m5FAFC71FF2A246AC8336B0F400F35DF581AD54AF(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.EventType UnityEngine.SliderHandler::CurrentEventType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SliderHandler_CurrentEventType_mC4756C3A92FC488ACF0C0148CFFA0F0239622F2A (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_0;
		L_0 = SliderHandler_CurrentEvent_m5B1D7DFBE33DF06D2FE72D7BA64E997DB59ADE75(__this, NULL);
		int32_t L_1 = __this->___id_9;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = Event_GetTypeForControl_mB5AFF2956E61972F0A1246416FCFE1C46F7E64D1(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t SliderHandler_CurrentEventType_mC4756C3A92FC488ACF0C0148CFFA0F0239622F2A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SliderHandler_CurrentEventType_mC4756C3A92FC488ACF0C0148CFFA0F0239622F2A(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.SliderHandler::CurrentScrollTroughSide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SliderHandler_CurrentScrollTroughSide_m5E30388E1DE3C01FB968EFCC02215C14F301E1A2 (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	float G_B3_0 = 0.0f;
	float G_B6_0 = 0.0f;
	int32_t G_B9_0 = 0;
	{
		bool L_0 = __this->___horiz_8;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_1;
		L_1 = SliderHandler_CurrentEvent_m5B1D7DFBE33DF06D2FE72D7BA64E997DB59ADE75(__this, NULL);
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9(L_1, NULL);
		float L_3 = L_2.___y_1;
		G_B3_0 = L_3;
		goto IL_002b;
	}

IL_001b:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_4;
		L_4 = SliderHandler_CurrentEvent_m5B1D7DFBE33DF06D2FE72D7BA64E997DB59ADE75(__this, NULL);
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9(L_4, NULL);
		float L_6 = L_5.___x_0;
		G_B3_0 = L_6;
	}

IL_002b:
	{
		V_0 = G_B3_0;
		bool L_7 = __this->___horiz_8;
		if (L_7)
		{
			goto IL_0044;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		L_8 = SliderHandler_ThumbRect_mA297CC1978CFEEC1F01218A5C05766C9D0465C98(__this, NULL);
		V_2 = L_8;
		float L_9;
		L_9 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_2), NULL);
		G_B6_0 = L_9;
		goto IL_0052;
	}

IL_0044:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10;
		L_10 = SliderHandler_ThumbRect_mA297CC1978CFEEC1F01218A5C05766C9D0465C98(__this, NULL);
		V_2 = L_10;
		float L_11;
		L_11 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_2), NULL);
		G_B6_0 = L_11;
	}

IL_0052:
	{
		V_1 = G_B6_0;
		float L_12 = V_0;
		float L_13 = V_1;
		if ((((float)L_12) > ((float)L_13)))
		{
			goto IL_005a;
		}
	}
	{
		G_B9_0 = (-1);
		goto IL_005b;
	}

IL_005a:
	{
		G_B9_0 = 1;
	}

IL_005b:
	{
		V_3 = G_B9_0;
		goto IL_005e;
	}

IL_005e:
	{
		int32_t L_14 = V_3;
		return L_14;
	}
}
IL2CPP_EXTERN_C  int32_t SliderHandler_CurrentScrollTroughSide_m5E30388E1DE3C01FB968EFCC02215C14F301E1A2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SliderHandler_CurrentScrollTroughSide_m5E30388E1DE3C01FB968EFCC02215C14F301E1A2(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.SliderHandler::IsEmptySlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SliderHandler_IsEmptySlider_m8AD3CF68C310AEAAB0E59D54A29A094A285AA586 (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = __this->___start_3;
		float L_1 = __this->___end_4;
		V_0 = (bool)((((float)L_0) == ((float)L_1))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool SliderHandler_IsEmptySlider_m8AD3CF68C310AEAAB0E59D54A29A094A285AA586_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83*>(__this + _offset);
	bool _returnValue;
	_returnValue = SliderHandler_IsEmptySlider_m8AD3CF68C310AEAAB0E59D54A29A094A285AA586(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.SliderHandler::SupportsPageMovements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SliderHandler_SupportsPageMovements_m1F5CDF7F988438DF502BC1312F23CC4164F97EA8 (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = __this->___size_2;
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0015;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = GUI_get_usePageScrollbars_m27B43460C2B19308AAB533181F7B4EE84E4DA797(NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool SliderHandler_SupportsPageMovements_m1F5CDF7F988438DF502BC1312F23CC4164F97EA8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83*>(__this + _offset);
	bool _returnValue;
	_returnValue = SliderHandler_SupportsPageMovements_m1F5CDF7F988438DF502BC1312F23CC4164F97EA8(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.SliderHandler::PageMovementValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_PageMovementValue_mA83FFA75AE8306757F98570BEDC2F307FBC96FE1 (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		float L_0 = __this->___currentValue_1;
		V_0 = L_0;
		float L_1 = __this->___start_3;
		float L_2 = __this->___end_4;
		if ((((float)L_1) > ((float)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = (-1);
	}

IL_001a:
	{
		V_1 = G_B3_0;
		float L_3;
		L_3 = SliderHandler_MousePosition_m5E95F987E7F6CA9E517AA7B84328689A287965B6(__this, NULL);
		float L_4;
		L_4 = SliderHandler_PageUpMovementBound_m82E469555A7A32E942A3B9DA1C16C6239151ED8A(__this, NULL);
		V_2 = (bool)((((float)L_3) > ((float)L_4))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		float L_6 = V_0;
		float L_7 = __this->___size_2;
		int32_t L_8 = V_1;
		V_0 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_7, ((float)L_8))), (0.899999976f)))));
		goto IL_0053;
	}

IL_0041:
	{
		float L_9 = V_0;
		float L_10 = __this->___size_2;
		int32_t L_11 = V_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_9, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_10, ((float)L_11))), (0.899999976f)))));
	}

IL_0053:
	{
		float L_12 = V_0;
		float L_13;
		L_13 = SliderHandler_Clamp_mC73E2009637968EFFC5DEE94B8C48B8DF6442C5E(__this, L_12, NULL);
		V_3 = L_13;
		goto IL_005d;
	}

IL_005d:
	{
		float L_14 = V_3;
		return L_14;
	}
}
IL2CPP_EXTERN_C  float SliderHandler_PageMovementValue_mA83FFA75AE8306757F98570BEDC2F307FBC96FE1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83*>(__this + _offset);
	float _returnValue;
	_returnValue = SliderHandler_PageMovementValue_mA83FFA75AE8306757F98570BEDC2F307FBC96FE1(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.SliderHandler::PageUpMovementBound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_PageUpMovementBound_m82E469555A7A32E942A3B9DA1C16C6239151ED8A (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		bool L_0 = __this->___horiz_8;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = SliderHandler_ThumbRect_mA297CC1978CFEEC1F01218A5C05766C9D0465C98(__this, NULL);
		V_1 = L_2;
		float L_3;
		L_3 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&V_1), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4 = __this->___position_0;
		V_1 = L_4;
		float L_5;
		L_5 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_1), NULL);
		V_2 = ((float)il2cpp_codegen_subtract(L_3, L_5));
		goto IL_004b;
	}

IL_002b:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		L_6 = SliderHandler_ThumbRect_mA297CC1978CFEEC1F01218A5C05766C9D0465C98(__this, NULL);
		V_1 = L_6;
		float L_7;
		L_7 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&V_1), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8 = __this->___position_0;
		V_1 = L_8;
		float L_9;
		L_9 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_1), NULL);
		V_2 = ((float)il2cpp_codegen_subtract(L_7, L_9));
		goto IL_004b;
	}

IL_004b:
	{
		float L_10 = V_2;
		return L_10;
	}
}
IL2CPP_EXTERN_C  float SliderHandler_PageUpMovementBound_m82E469555A7A32E942A3B9DA1C16C6239151ED8A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83*>(__this + _offset);
	float _returnValue;
	_returnValue = SliderHandler_PageUpMovementBound_m82E469555A7A32E942A3B9DA1C16C6239151ED8A(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Event UnityEngine.SliderHandler::CurrentEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* SliderHandler_CurrentEvent_m5B1D7DFBE33DF06D2FE72D7BA64E997DB59ADE75 (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) 
{
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* V_0 = NULL;
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_0;
		L_0 = Event_get_current_mBD7135E10C392EAD61AC0A0D2489EF758C8A3FAD(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* SliderHandler_CurrentEvent_m5B1D7DFBE33DF06D2FE72D7BA64E997DB59ADE75_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83*>(__this + _offset);
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* _returnValue;
	_returnValue = SliderHandler_CurrentEvent_m5B1D7DFBE33DF06D2FE72D7BA64E997DB59ADE75(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.SliderHandler::ValueForCurrentMousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_ValueForCurrentMousePosition_m089BEF0D4C4E82C086E3E49B871780AD6D6848F5 (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		bool L_0 = __this->___horiz_8;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		float L_2;
		L_2 = SliderHandler_MousePosition_m5E95F987E7F6CA9E517AA7B84328689A287965B6(__this, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		L_3 = SliderHandler_ThumbRect_mA297CC1978CFEEC1F01218A5C05766C9D0465C98(__this, NULL);
		V_1 = L_3;
		float L_4;
		L_4 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_1), NULL);
		float L_5;
		L_5 = SliderHandler_ValuesPerPixel_mF654B0D4DDC55599E9B251A026727DAFF425E66F(__this, NULL);
		float L_6 = __this->___start_3;
		float L_7 = __this->___size_2;
		V_2 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)(((float)il2cpp_codegen_subtract(L_2, ((float)il2cpp_codegen_multiply(L_4, (0.5f)))))/L_5)), L_6)), ((float)il2cpp_codegen_multiply(L_7, (0.5f)))));
		goto IL_007d;
	}

IL_0044:
	{
		float L_8;
		L_8 = SliderHandler_MousePosition_m5E95F987E7F6CA9E517AA7B84328689A287965B6(__this, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9;
		L_9 = SliderHandler_ThumbRect_mA297CC1978CFEEC1F01218A5C05766C9D0465C98(__this, NULL);
		V_1 = L_9;
		float L_10;
		L_10 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_1), NULL);
		float L_11;
		L_11 = SliderHandler_ValuesPerPixel_mF654B0D4DDC55599E9B251A026727DAFF425E66F(__this, NULL);
		float L_12 = __this->___start_3;
		float L_13 = __this->___size_2;
		V_2 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)(((float)il2cpp_codegen_subtract(L_8, ((float)il2cpp_codegen_multiply(L_10, (0.5f)))))/L_11)), L_12)), ((float)il2cpp_codegen_multiply(L_13, (0.5f)))));
		goto IL_007d;
	}

IL_007d:
	{
		float L_14 = V_2;
		return L_14;
	}
}
IL2CPP_EXTERN_C  float SliderHandler_ValueForCurrentMousePosition_m089BEF0D4C4E82C086E3E49B871780AD6D6848F5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83*>(__this + _offset);
	float _returnValue;
	_returnValue = SliderHandler_ValueForCurrentMousePosition_m089BEF0D4C4E82C086E3E49B871780AD6D6848F5(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.SliderHandler::Clamp(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_Clamp_mC73E2009637968EFFC5DEE94B8C48B8DF6442C5E (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, float ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1;
		L_1 = SliderHandler_MinValue_m904DAD0D3F7BD5CD525BD520B82F60C3878FB25E(__this, NULL);
		float L_2;
		L_2 = SliderHandler_MaxValue_m25803007A5DB5427855A607D85F0A68D5CCCB208(__this, NULL);
		float L_3;
		L_3 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  float SliderHandler_Clamp_mC73E2009637968EFFC5DEE94B8C48B8DF6442C5E_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83*>(__this + _offset);
	float _returnValue;
	_returnValue = SliderHandler_Clamp_mC73E2009637968EFFC5DEE94B8C48B8DF6442C5E(_thisAdjusted, ___0_value, method);
	return _returnValue;
}
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbSelectionRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D SliderHandler_ThumbSelectionRect_m182932776473DDB8076E858AC0580E931AE66EB8 (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		L_0 = SliderHandler_ThumbRect_mA297CC1978CFEEC1F01218A5C05766C9D0465C98(__this, NULL);
		V_0 = L_0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1 = V_0;
		V_1 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = V_1;
		return L_2;
	}
}
IL2CPP_EXTERN_C  Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D SliderHandler_ThumbSelectionRect_m182932776473DDB8076E858AC0580E931AE66EB8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83*>(__this + _offset);
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D _returnValue;
	_returnValue = SliderHandler_ThumbSelectionRect_m182932776473DDB8076E858AC0580E931AE66EB8(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.SliderHandler::StartDraggingWithValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderHandler_StartDraggingWithValue_m580387DD28C5BC8EF389692BC4B0BDB402AD1F5C (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, float ___0_dragStartValue, const RuntimeMethod* method) 
{
	SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8* V_0 = NULL;
	{
		SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8* L_0;
		L_0 = SliderHandler_SliderState_m9E9EECE09E988B83FE3DF1F0AF9AFCF4AAF96D60(__this, NULL);
		V_0 = L_0;
		SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8* L_1 = V_0;
		float L_2;
		L_2 = SliderHandler_MousePosition_m5E95F987E7F6CA9E517AA7B84328689A287965B6(__this, NULL);
		NullCheck(L_1);
		L_1->___dragStartPos_0 = L_2;
		SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8* L_3 = V_0;
		float L_4 = ___0_dragStartValue;
		NullCheck(L_3);
		L_3->___dragStartValue_1 = L_4;
		SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8* L_5 = V_0;
		NullCheck(L_5);
		L_5->___isDragging_2 = (bool)1;
		return;
	}
}
IL2CPP_EXTERN_C  void SliderHandler_StartDraggingWithValue_m580387DD28C5BC8EF389692BC4B0BDB402AD1F5C_AdjustorThunk (RuntimeObject* __this, float ___0_dragStartValue, const RuntimeMethod* method)
{
	SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83*>(__this + _offset);
	SliderHandler_StartDraggingWithValue_m580387DD28C5BC8EF389692BC4B0BDB402AD1F5C(_thisAdjusted, ___0_dragStartValue, method);
}
// UnityEngine.SliderState UnityEngine.SliderHandler::SliderState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8* SliderHandler_SliderState_m9E9EECE09E988B83FE3DF1F0AF9AFCF4AAF96D60 (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		int32_t L_2 = __this->___id_9;
		RuntimeObject* L_3;
		L_3 = GUIUtility_GetStateObject_m803B56DC7DF5396751B7367DB04072A6DCEEE616(L_1, L_2, NULL);
		V_0 = ((SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8*)CastclassClass((RuntimeObject*)L_3, SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8_il2cpp_TypeInfo_var));
		goto IL_001e;
	}

IL_001e:
	{
		SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8* SliderHandler_SliderState_m9E9EECE09E988B83FE3DF1F0AF9AFCF4AAF96D60_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83*>(__this + _offset);
	SliderState_t7BBFAEF918BAA1EE6116C3979993E4EC7DC54FC8* _returnValue;
	_returnValue = SliderHandler_SliderState_m9E9EECE09E988B83FE3DF1F0AF9AFCF4AAF96D60(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbExtRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D SliderHandler_ThumbExtRect_m16D13E44222386A99F1E3F089A5F4DC2ED19DBC1 (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___thumbExtent_7;
		NullCheck(L_0);
		float L_1;
		L_1 = GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8(L_0, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2 = __this->___thumbExtent_7;
		NullCheck(L_2);
		float L_3;
		L_3 = GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A(L_2, NULL);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_1), (0.0f), (0.0f), L_1, L_3, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		L_4 = SliderHandler_ThumbRect_mA297CC1978CFEEC1F01218A5C05766C9D0465C98(__this, NULL);
		V_2 = L_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Rect_get_center_mAA9A2E1F058B2C9F58E13CC4822F789F42975E5C((&V_2), NULL);
		Rect_set_center_m1BFC7584EEE9EF6C9AC2CA8459300FE23D5CE86F((&V_1), L_5, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6 = V_1;
		V_0 = L_6;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7 = V_0;
		V_3 = L_7;
		goto IL_0044;
	}

IL_0044:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8 = V_3;
		return L_8;
	}
}
IL2CPP_EXTERN_C  Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D SliderHandler_ThumbExtRect_m16D13E44222386A99F1E3F089A5F4DC2ED19DBC1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83*>(__this + _offset);
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D _returnValue;
	_returnValue = SliderHandler_ThumbExtRect_m16D13E44222386A99F1E3F089A5F4DC2ED19DBC1(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D SliderHandler_ThumbRect_mA297CC1978CFEEC1F01218A5C05766C9D0465C98 (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		bool L_0 = __this->___horiz_8;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = SliderHandler_VerticalThumbRect_mC9C04B0479876CA886A4C6868FFD65168511CAFB(__this, NULL);
		G_B3_0 = L_1;
		goto IL_0017;
	}

IL_0011:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = SliderHandler_HorizontalThumbRect_m6FADFA27C8510FDD5FC2EB30A738DD6569DFB0BA(__this, NULL);
		G_B3_0 = L_2;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D SliderHandler_ThumbRect_mA297CC1978CFEEC1F01218A5C05766C9D0465C98_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83*>(__this + _offset);
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D _returnValue;
	_returnValue = SliderHandler_ThumbRect_mA297CC1978CFEEC1F01218A5C05766C9D0465C98(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Rect UnityEngine.SliderHandler::VerticalThumbRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D SliderHandler_VerticalThumbRect_mC9C04B0479876CA886A4C6868FFD65168511CAFB (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_5;
	memset((&V_5), 0, sizeof(V_5));
	float G_B3_0 = 0.0f;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___thumb_6;
		NullCheck(L_0);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_1;
		L_1 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_0, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2 = __this->___slider_5;
		NullCheck(L_2);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_3;
		L_3 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_2, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4 = __this->___position_0;
		NullCheck(L_3);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5;
		L_5 = RectOffset_Remove_mC21D85A2BA4D0246FEC0B6C5F3C2D293CD41DB3D(L_3, L_4, NULL);
		NullCheck(L_1);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		L_6 = RectOffset_Remove_mC21D85A2BA4D0246FEC0B6C5F3C2D293CD41DB3D(L_1, L_5, NULL);
		V_0 = L_6;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_7 = __this->___thumb_6;
		NullCheck(L_7);
		float L_8;
		L_8 = GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8(L_7, NULL);
		if ((!(((float)L_8) == ((float)(0.0f)))))
		{
			goto IL_0043;
		}
	}
	{
		float L_9;
		L_9 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		G_B3_0 = L_9;
		goto IL_004e;
	}

IL_0043:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_10 = __this->___thumb_6;
		NullCheck(L_10);
		float L_11;
		L_11 = GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8(L_10, NULL);
		G_B3_0 = L_11;
	}

IL_004e:
	{
		V_1 = G_B3_0;
		float L_12;
		L_12 = SliderHandler_ThumbSize_m7A0F0323AF2FF51A3F35765438DDD1FBBAB63D47(__this, NULL);
		V_2 = L_12;
		float L_13;
		L_13 = SliderHandler_ValuesPerPixel_mF654B0D4DDC55599E9B251A026727DAFF425E66F(__this, NULL);
		V_3 = L_13;
		float L_14 = __this->___start_3;
		float L_15 = __this->___end_4;
		V_4 = (bool)((((float)L_14) < ((float)L_15))? 1 : 0);
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_00a4;
		}
	}
	{
		float L_17;
		L_17 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_0), NULL);
		float L_18;
		L_18 = SliderHandler_ClampedCurrentValue_m2312300551774A993735636675E23015737664EC(__this, NULL);
		float L_19 = __this->___start_3;
		float L_20 = V_3;
		float L_21;
		L_21 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_0), NULL);
		float L_22 = V_1;
		float L_23 = __this->___size_2;
		float L_24 = V_3;
		float L_25 = V_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_26;
		memset((&L_26), 0, sizeof(L_26));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_26), L_17, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_18, L_19)), L_20)), L_21)), L_22, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_23, L_24)), L_25)), /*hidden argument*/NULL);
		V_5 = L_26;
		goto IL_00df;
	}

IL_00a4:
	{
		float L_27;
		L_27 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_0), NULL);
		float L_28;
		L_28 = SliderHandler_ClampedCurrentValue_m2312300551774A993735636675E23015737664EC(__this, NULL);
		float L_29 = __this->___size_2;
		float L_30 = __this->___start_3;
		float L_31 = V_3;
		float L_32;
		L_32 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_0), NULL);
		float L_33 = V_1;
		float L_34 = __this->___size_2;
		float L_35 = V_3;
		float L_36 = V_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_37;
		memset((&L_37), 0, sizeof(L_37));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_37), L_27, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_28, L_29)), L_30)), L_31)), L_32)), L_33, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_34, ((-L_35)))), L_36)), /*hidden argument*/NULL);
		V_5 = L_37;
		goto IL_00df;
	}

IL_00df:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_38 = V_5;
		return L_38;
	}
}
IL2CPP_EXTERN_C  Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D SliderHandler_VerticalThumbRect_mC9C04B0479876CA886A4C6868FFD65168511CAFB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83*>(__this + _offset);
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D _returnValue;
	_returnValue = SliderHandler_VerticalThumbRect_mC9C04B0479876CA886A4C6868FFD65168511CAFB(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Rect UnityEngine.SliderHandler::HorizontalThumbRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D SliderHandler_HorizontalThumbRect_m6FADFA27C8510FDD5FC2EB30A738DD6569DFB0BA (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_5;
	memset((&V_5), 0, sizeof(V_5));
	float G_B3_0 = 0.0f;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___thumb_6;
		NullCheck(L_0);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_1;
		L_1 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_0, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2 = __this->___slider_5;
		NullCheck(L_2);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_3;
		L_3 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_2, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4 = __this->___position_0;
		NullCheck(L_3);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5;
		L_5 = RectOffset_Remove_mC21D85A2BA4D0246FEC0B6C5F3C2D293CD41DB3D(L_3, L_4, NULL);
		NullCheck(L_1);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		L_6 = RectOffset_Remove_mC21D85A2BA4D0246FEC0B6C5F3C2D293CD41DB3D(L_1, L_5, NULL);
		V_0 = L_6;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_7 = __this->___thumb_6;
		NullCheck(L_7);
		float L_8;
		L_8 = GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A(L_7, NULL);
		if ((!(((float)L_8) == ((float)(0.0f)))))
		{
			goto IL_0043;
		}
	}
	{
		float L_9;
		L_9 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		G_B3_0 = L_9;
		goto IL_004e;
	}

IL_0043:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_10 = __this->___thumb_6;
		NullCheck(L_10);
		float L_11;
		L_11 = GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A(L_10, NULL);
		G_B3_0 = L_11;
	}

IL_004e:
	{
		V_1 = G_B3_0;
		float L_12;
		L_12 = SliderHandler_ThumbSize_m7A0F0323AF2FF51A3F35765438DDD1FBBAB63D47(__this, NULL);
		V_2 = L_12;
		float L_13;
		L_13 = SliderHandler_ValuesPerPixel_mF654B0D4DDC55599E9B251A026727DAFF425E66F(__this, NULL);
		V_3 = L_13;
		float L_14 = __this->___start_3;
		float L_15 = __this->___end_4;
		V_4 = (bool)((((float)L_14) < ((float)L_15))? 1 : 0);
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_00a3;
		}
	}
	{
		float L_17;
		L_17 = SliderHandler_ClampedCurrentValue_m2312300551774A993735636675E23015737664EC(__this, NULL);
		float L_18 = __this->___start_3;
		float L_19 = V_3;
		float L_20;
		L_20 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_0), NULL);
		float L_21;
		L_21 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_0), NULL);
		float L_22 = __this->___size_2;
		float L_23 = V_3;
		float L_24 = V_2;
		float L_25 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_26;
		memset((&L_26), 0, sizeof(L_26));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_26), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_17, L_18)), L_19)), L_20)), L_21, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_22, L_23)), L_24)), L_25, /*hidden argument*/NULL);
		V_5 = L_26;
		goto IL_00dd;
	}

IL_00a3:
	{
		float L_27;
		L_27 = SliderHandler_ClampedCurrentValue_m2312300551774A993735636675E23015737664EC(__this, NULL);
		float L_28 = __this->___size_2;
		float L_29 = __this->___start_3;
		float L_30 = V_3;
		float L_31;
		L_31 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_0), NULL);
		float L_32;
		L_32 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_0), NULL);
		float L_33 = __this->___size_2;
		float L_34 = V_3;
		float L_35 = V_2;
		float L_36 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_37;
		memset((&L_37), 0, sizeof(L_37));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_37), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_27, L_28)), L_29)), L_30)), L_31)), L_32, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, ((-L_34)))), L_35)), L_36, /*hidden argument*/NULL);
		V_5 = L_37;
		goto IL_00dd;
	}

IL_00dd:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_38 = V_5;
		return L_38;
	}
}
IL2CPP_EXTERN_C  Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D SliderHandler_HorizontalThumbRect_m6FADFA27C8510FDD5FC2EB30A738DD6569DFB0BA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83*>(__this + _offset);
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D _returnValue;
	_returnValue = SliderHandler_HorizontalThumbRect_m6FADFA27C8510FDD5FC2EB30A738DD6569DFB0BA(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.SliderHandler::ClampedCurrentValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_ClampedCurrentValue_m2312300551774A993735636675E23015737664EC (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___currentValue_1;
		float L_1;
		L_1 = SliderHandler_Clamp_mC73E2009637968EFFC5DEE94B8C48B8DF6442C5E(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		float L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  float SliderHandler_ClampedCurrentValue_m2312300551774A993735636675E23015737664EC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83*>(__this + _offset);
	float _returnValue;
	_returnValue = SliderHandler_ClampedCurrentValue_m2312300551774A993735636675E23015737664EC(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.SliderHandler::MousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_MousePosition_m5E95F987E7F6CA9E517AA7B84328689A287965B6 (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		bool L_0 = __this->___horiz_8;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_2;
		L_2 = SliderHandler_CurrentEvent_m5B1D7DFBE33DF06D2FE72D7BA64E997DB59ADE75(__this, NULL);
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9(L_2, NULL);
		float L_4 = L_3.___x_0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5 = __this->___position_0;
		V_1 = L_5;
		float L_6;
		L_6 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_1), NULL);
		V_2 = ((float)il2cpp_codegen_subtract(L_4, L_6));
		goto IL_004f;
	}

IL_002d:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_7;
		L_7 = SliderHandler_CurrentEvent_m5B1D7DFBE33DF06D2FE72D7BA64E997DB59ADE75(__this, NULL);
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Event_get_mousePosition_mD6D2DF45C75E6FADD415D27D0E93563DED37D9B9(L_7, NULL);
		float L_9 = L_8.___y_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10 = __this->___position_0;
		V_1 = L_10;
		float L_11;
		L_11 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_1), NULL);
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		goto IL_004f;
	}

IL_004f:
	{
		float L_12 = V_2;
		return L_12;
	}
}
IL2CPP_EXTERN_C  float SliderHandler_MousePosition_m5E95F987E7F6CA9E517AA7B84328689A287965B6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83*>(__this + _offset);
	float _returnValue;
	_returnValue = SliderHandler_MousePosition_m5E95F987E7F6CA9E517AA7B84328689A287965B6(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.SliderHandler::ValuesPerPixel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_ValuesPerPixel_mF654B0D4DDC55599E9B251A026727DAFF425E66F (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = __this->___end_4;
		float L_1 = __this->___start_3;
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		float L_2 = __this->___end_4;
		float L_3 = __this->___start_3;
		G_B3_0 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		goto IL_0023;
	}

IL_001e:
	{
		G_B3_0 = (1.0f);
	}

IL_0023:
	{
		V_0 = G_B3_0;
		bool L_4 = __this->___horiz_8;
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_005a;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6 = __this->___position_0;
		V_2 = L_6;
		float L_7;
		L_7 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_2), NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_8 = __this->___slider_5;
		NullCheck(L_8);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_9;
		L_9 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_8, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = RectOffset_get_horizontal_m5C1795C027E4987A8532DC27D88FB3B9FFEC1352(L_9, NULL);
		float L_11;
		L_11 = SliderHandler_ThumbSize_m7A0F0323AF2FF51A3F35765438DDD1FBBAB63D47(__this, NULL);
		float L_12 = V_0;
		V_3 = ((float)(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_7, ((float)L_10))), L_11))/L_12));
		goto IL_0086;
	}

IL_005a:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = __this->___position_0;
		V_2 = L_13;
		float L_14;
		L_14 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_2), NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_15 = __this->___slider_5;
		NullCheck(L_15);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_16;
		L_16 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_15, NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = RectOffset_get_vertical_m43E46D9F313BB617044184A65350E6498A0709F0(L_16, NULL);
		float L_18;
		L_18 = SliderHandler_ThumbSize_m7A0F0323AF2FF51A3F35765438DDD1FBBAB63D47(__this, NULL);
		float L_19 = V_0;
		V_3 = ((float)(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_14, ((float)L_17))), L_18))/L_19));
		goto IL_0086;
	}

IL_0086:
	{
		float L_20 = V_3;
		return L_20;
	}
}
IL2CPP_EXTERN_C  float SliderHandler_ValuesPerPixel_mF654B0D4DDC55599E9B251A026727DAFF425E66F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83*>(__this + _offset);
	float _returnValue;
	_returnValue = SliderHandler_ValuesPerPixel_mF654B0D4DDC55599E9B251A026727DAFF425E66F(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.SliderHandler::ThumbSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_ThumbSize_m7A0F0323AF2FF51A3F35765438DDD1FBBAB63D47 (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B8_0 = 0.0f;
	{
		bool L_0 = __this->___horiz_8;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2 = __this->___thumb_6;
		NullCheck(L_2);
		float L_3;
		L_3 = GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8(L_2, NULL);
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_0030;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_4 = __this->___thumb_6;
		NullCheck(L_4);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_5;
		L_5 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = RectOffset_get_horizontal_m5C1795C027E4987A8532DC27D88FB3B9FFEC1352(L_5, NULL);
		G_B4_0 = ((float)L_6);
		goto IL_003b;
	}

IL_0030:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_7 = __this->___thumb_6;
		NullCheck(L_7);
		float L_8;
		L_8 = GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8(L_7, NULL);
		G_B4_0 = L_8;
	}

IL_003b:
	{
		V_1 = G_B4_0;
		goto IL_0071;
	}

IL_003e:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_9 = __this->___thumb_6;
		NullCheck(L_9);
		float L_10;
		L_10 = GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A(L_9, NULL);
		if ((!(((float)L_10) == ((float)(0.0f)))))
		{
			goto IL_0063;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_11 = __this->___thumb_6;
		NullCheck(L_11);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_12;
		L_12 = GUIStyle_get_padding_m04E3210A51B2522158941AFA97ADC19C835987C2(L_11, NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = RectOffset_get_vertical_m43E46D9F313BB617044184A65350E6498A0709F0(L_12, NULL);
		G_B8_0 = ((float)L_13);
		goto IL_006e;
	}

IL_0063:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_14 = __this->___thumb_6;
		NullCheck(L_14);
		float L_15;
		L_15 = GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A(L_14, NULL);
		G_B8_0 = L_15;
	}

IL_006e:
	{
		V_1 = G_B8_0;
		goto IL_0071;
	}

IL_0071:
	{
		float L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C  float SliderHandler_ThumbSize_m7A0F0323AF2FF51A3F35765438DDD1FBBAB63D47_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83*>(__this + _offset);
	float _returnValue;
	_returnValue = SliderHandler_ThumbSize_m7A0F0323AF2FF51A3F35765438DDD1FBBAB63D47(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.SliderHandler::MaxValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_MaxValue_m25803007A5DB5427855A607D85F0A68D5CCCB208 (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___start_3;
		float L_1 = __this->___end_4;
		float L_2;
		L_2 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_0, L_1, NULL);
		float L_3 = __this->___size_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		goto IL_001c;
	}

IL_001c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  float SliderHandler_MaxValue_m25803007A5DB5427855A607D85F0A68D5CCCB208_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83*>(__this + _offset);
	float _returnValue;
	_returnValue = SliderHandler_MaxValue_m25803007A5DB5427855A607D85F0A68D5CCCB208(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.SliderHandler::MinValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderHandler_MinValue_m904DAD0D3F7BD5CD525BD520B82F60C3878FB25E (SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___start_3;
		float L_1 = __this->___end_4;
		float L_2;
		L_2 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		float L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  float SliderHandler_MinValue_m904DAD0D3F7BD5CD525BD520B82F60C3878FB25E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83*>(__this + _offset);
	float _returnValue;
	_returnValue = SliderHandler_MinValue_m904DAD0D3F7BD5CD525BD520B82F60C3878FB25E(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::get_style()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) 
{
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = __this->___m_Style_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.GUILayoutEntry::set_style(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_set_style_m0A23F7EFF504A581FC6CA86EF3BE753F060AC48A (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_value, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_value;
		__this->___m_Style_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Style_8), (void*)L_0);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = ___0_value;
		VirtualActionInvoker1< GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* >::Invoke(12 /* System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle) */, __this, L_1);
		return;
	}
}
// System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginLeft_m3B362DA8241B4008C2A6CDA693295A609F765221 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0;
		L_0 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_0);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_1;
		L_1 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = RectOffset_get_left_mA406D7AFF76E48507EF143CDB1D157C4D5430D90(L_1, NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.GUILayoutEntry::get_marginRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginRight_m032808DC8C04B31150407F3F61E71865C2636D7F (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0;
		L_0 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_0);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_1;
		L_1 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = RectOffset_get_right_m07C826B0BC79B0CBC01F5FF489D456C553F047BF(L_1, NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.GUILayoutEntry::get_marginTop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginTop_m47BAB82D31A45E21F9AAB8229265788C0D19487C (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0;
		L_0 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_0);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_1;
		L_1 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = RectOffset_get_top_m82E49FB93A5BD417131136F5A7DBA0F251F10263(L_1, NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginBottom_m2BCCF0FC72E0230E155E7A26BA9FFD904AD4C221 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) 
{
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0;
		L_0 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_0);
		RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* L_1;
		L_1 = GUIStyle_get_margin_mD0AABA2CB3FB0CFC3C414635E6225D3003315D1B(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = RectOffset_get_bottom_mDF9C1EC125F94245D5532C34FCFB65BE0F2A9D0B(L_1, NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.GUILayoutEntry::get_marginHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginHorizontal_m9847FB7747542BB322195F9CF4B75F55339CD7B5 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginLeft() */, __this);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginRight() */, __this);
		return ((int32_t)il2cpp_codegen_add(L_0, L_1));
	}
}
// System.Int32 UnityEngine.GUILayoutEntry::get_marginVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUILayoutEntry_get_marginVertical_mCD309A186E80B22E75DD8F15D2598B9B739C7AD3 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginBottom() */, __this);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.GUILayoutEntry::get_marginTop() */, __this);
		return ((int32_t)il2cpp_codegen_add(L_0, L_1));
	}
}
// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry__ctor_m011B3DA69713EEA6BD98D4056B5ADE01F237E5B2 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, float ___0__minWidth, float ___1__maxWidth, float ___2__minHeight, float ___3__maxHeight, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___4__style, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___rect_4 = L_0;
		__this->___consideredForMargin_7 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1;
		L_1 = GUIStyle_get_none_m808A9FE1F78920E4A29ED3484B99588B46D88938(NULL);
		__this->___m_Style_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Style_8), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		float L_2 = ___0__minWidth;
		__this->___minWidth_0 = L_2;
		float L_3 = ___1__maxWidth;
		__this->___maxWidth_1 = L_3;
		float L_4 = ___2__minHeight;
		__this->___minHeight_2 = L_4;
		float L_5 = ___3__maxHeight;
		__this->___maxHeight_3 = L_5;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_6 = ___4__style;
		V_0 = (bool)((((RuntimeObject*)(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_8;
		L_8 = GUIStyle_get_none_m808A9FE1F78920E4A29ED3484B99588B46D88938(NULL);
		___4__style = L_8;
	}

IL_0066:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_9 = ___4__style;
		GUILayoutEntry_set_style_m0A23F7EFF504A581FC6CA86EF3BE753F060AC48A(__this, L_9, NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry__ctor_m9E77958057210F340E409F42DFCEFEF8539A5547 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, float ___0__minWidth, float ___1__maxWidth, float ___2__minHeight, float ___3__maxHeight, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___4__style, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___5_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___rect_4 = L_0;
		__this->___consideredForMargin_7 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1;
		L_1 = GUIStyle_get_none_m808A9FE1F78920E4A29ED3484B99588B46D88938(NULL);
		__this->___m_Style_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Style_8), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		float L_2 = ___0__minWidth;
		__this->___minWidth_0 = L_2;
		float L_3 = ___1__maxWidth;
		__this->___maxWidth_1 = L_3;
		float L_4 = ___2__minHeight;
		__this->___minHeight_2 = L_4;
		float L_5 = ___3__maxHeight;
		__this->___maxHeight_3 = L_5;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_6 = ___4__style;
		GUILayoutEntry_set_style_m0A23F7EFF504A581FC6CA86EF3BE753F060AC48A(__this, L_6, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_7 = ___5_options;
		VirtualActionInvoker1< GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* >::Invoke(13 /* System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[]) */, __this, L_7);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::CalcWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_CalcWidth_m77BB8C0413A27303E4E61CB53586FD4A825C5EF3 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::CalcHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_CalcHeight_m295D607AB2FDD78D7C665BB3FB3A495E2E8CC0A6 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_SetHorizontal_m268577E88A2AE5870C14EFDA9CB88C94CAC2ACE9 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, float ___0_x, float ___1_width, const RuntimeMethod* method) 
{
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&__this->___rect_4);
		float L_1 = ___0_x;
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_0, L_1, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_2 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&__this->___rect_4);
		float L_3 = ___1_width;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_2, L_3, NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_SetVertical_mA20893626441C55001C1940C53A6A100DD22D61F (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, float ___0_y, float ___1_height, const RuntimeMethod* method) 
{
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&__this->___rect_4);
		float L_1 = ___0_y;
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_0, L_1, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_2 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&__this->___rect_4);
		float L_3 = ___1_height;
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_2, L_3, NULL);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_ApplyStyleSettings_m2D3679DAF547D104FE48E7D6D8E27B639F6A666B (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_style, const RuntimeMethod* method) 
{
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* G_B2_0 = NULL;
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* G_B1_0 = NULL;
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* G_B3_0 = NULL;
	int32_t G_B4_0 = 0;
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* G_B4_1 = NULL;
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* G_B6_0 = NULL;
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* G_B5_0 = NULL;
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* G_B7_0 = NULL;
	int32_t G_B8_0 = 0;
	GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* G_B8_1 = NULL;
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_style;
		NullCheck(L_0);
		float L_1;
		L_1 = GUIStyle_get_fixedWidth_m9CB5B4E096287F75F4E4E3376590C7C085E28DE8(L_0, NULL);
		G_B1_0 = __this;
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2 = ___0_style;
		NullCheck(L_2);
		bool L_3;
		L_3 = GUIStyle_get_stretchWidth_m528FFD3EB3104D0322F2EADBBE7DBFF3FB34CB37(L_2, NULL);
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_001a;
		}
	}

IL_0017:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		goto IL_001b;
	}

IL_001a:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_001b:
	{
		NullCheck(G_B4_1);
		G_B4_1->___stretchWidth_5 = G_B4_0;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_4 = ___0_style;
		NullCheck(L_4);
		float L_5;
		L_5 = GUIStyle_get_fixedHeight_m009155CF284509A87E6037D0A392A630FA728F7A(L_4, NULL);
		G_B5_0 = __this;
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			G_B6_0 = __this;
			goto IL_0036;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_6 = ___0_style;
		NullCheck(L_6);
		bool L_7;
		L_7 = GUIStyle_get_stretchHeight_m5ACA8F9CD25746932719C927159A105AADA5061F(L_6, NULL);
		G_B6_0 = G_B5_0;
		if (L_7)
		{
			G_B7_0 = G_B5_0;
			goto IL_0039;
		}
	}

IL_0036:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_0;
		goto IL_003a;
	}

IL_0039:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
	}

IL_003a:
	{
		NullCheck(G_B8_1);
		G_B8_1->___stretchHeight_6 = G_B8_0;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_8 = ___0_style;
		__this->___m_Style_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Style_8), (void*)L_8);
		return;
	}
}
// System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry_ApplyOptions_mF024E6CEAAD97888AE293810E01F8431D79456A3 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___0_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* V_1 = NULL;
	int32_t V_2 = 0;
	GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B26_0 = 0;
	int32_t G_B31_0 = 0;
	{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_0 = ___0_options;
		V_0 = (bool)((((RuntimeObject*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		goto IL_0219;
	}

IL_000e:
	{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_2 = ___0_options;
		V_1 = L_2;
		V_2 = 0;
		goto IL_01b0;
	}

IL_0018:
	{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_7 = V_3;
		NullCheck(L_7);
		int32_t L_8 = L_7->___type_0;
		V_5 = L_8;
		int32_t L_9 = V_5;
		V_4 = L_9;
		int32_t L_10 = V_4;
		switch (L_10)
		{
			case 0:
			{
				goto IL_0055;
			}
			case 1:
			{
				goto IL_007d;
			}
			case 2:
			{
				goto IL_00a5;
			}
			case 3:
			{
				goto IL_00db;
			}
			case 4:
			{
				goto IL_0118;
			}
			case 5:
			{
				goto IL_014b;
			}
			case 6:
			{
				goto IL_0185;
			}
			case 7:
			{
				goto IL_0198;
			}
		}
	}
	{
		goto IL_01ab;
	}

IL_0055:
	{
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_11 = V_3;
		NullCheck(L_11);
		RuntimeObject* L_12 = L_11->___value_1;
		float L_13 = ((*(float*)((float*)(float*)UnBox(L_12, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		V_6 = L_13;
		__this->___maxWidth_1 = L_13;
		float L_14 = V_6;
		__this->___minWidth_0 = L_14;
		__this->___stretchWidth_5 = 0;
		goto IL_01ab;
	}

IL_007d:
	{
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_15 = V_3;
		NullCheck(L_15);
		RuntimeObject* L_16 = L_15->___value_1;
		float L_17 = ((*(float*)((float*)(float*)UnBox(L_16, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		V_6 = L_17;
		__this->___maxHeight_3 = L_17;
		float L_18 = V_6;
		__this->___minHeight_2 = L_18;
		__this->___stretchHeight_6 = 0;
		goto IL_01ab;
	}

IL_00a5:
	{
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_19 = V_3;
		NullCheck(L_19);
		RuntimeObject* L_20 = L_19->___value_1;
		__this->___minWidth_0 = ((*(float*)((float*)(float*)UnBox(L_20, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		float L_21 = __this->___maxWidth_1;
		float L_22 = __this->___minWidth_0;
		V_7 = (bool)((((float)L_21) < ((float)L_22))? 1 : 0);
		bool L_23 = V_7;
		if (!L_23)
		{
			goto IL_00d6;
		}
	}
	{
		float L_24 = __this->___minWidth_0;
		__this->___maxWidth_1 = L_24;
	}

IL_00d6:
	{
		goto IL_01ab;
	}

IL_00db:
	{
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_25 = V_3;
		NullCheck(L_25);
		RuntimeObject* L_26 = L_25->___value_1;
		__this->___maxWidth_1 = ((*(float*)((float*)(float*)UnBox(L_26, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		float L_27 = __this->___minWidth_0;
		float L_28 = __this->___maxWidth_1;
		V_8 = (bool)((((float)L_27) > ((float)L_28))? 1 : 0);
		bool L_29 = V_8;
		if (!L_29)
		{
			goto IL_010c;
		}
	}
	{
		float L_30 = __this->___maxWidth_1;
		__this->___minWidth_0 = L_30;
	}

IL_010c:
	{
		__this->___stretchWidth_5 = 0;
		goto IL_01ab;
	}

IL_0118:
	{
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_31 = V_3;
		NullCheck(L_31);
		RuntimeObject* L_32 = L_31->___value_1;
		__this->___minHeight_2 = ((*(float*)((float*)(float*)UnBox(L_32, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		float L_33 = __this->___maxHeight_3;
		float L_34 = __this->___minHeight_2;
		V_9 = (bool)((((float)L_33) < ((float)L_34))? 1 : 0);
		bool L_35 = V_9;
		if (!L_35)
		{
			goto IL_0149;
		}
	}
	{
		float L_36 = __this->___minHeight_2;
		__this->___maxHeight_3 = L_36;
	}

IL_0149:
	{
		goto IL_01ab;
	}

IL_014b:
	{
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_37 = V_3;
		NullCheck(L_37);
		RuntimeObject* L_38 = L_37->___value_1;
		__this->___maxHeight_3 = ((*(float*)((float*)(float*)UnBox(L_38, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		float L_39 = __this->___minHeight_2;
		float L_40 = __this->___maxHeight_3;
		V_10 = (bool)((((float)L_39) > ((float)L_40))? 1 : 0);
		bool L_41 = V_10;
		if (!L_41)
		{
			goto IL_017c;
		}
	}
	{
		float L_42 = __this->___maxHeight_3;
		__this->___minHeight_2 = L_42;
	}

IL_017c:
	{
		__this->___stretchHeight_6 = 0;
		goto IL_01ab;
	}

IL_0185:
	{
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_43 = V_3;
		NullCheck(L_43);
		RuntimeObject* L_44 = L_43->___value_1;
		__this->___stretchWidth_5 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_44, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		goto IL_01ab;
	}

IL_0198:
	{
		GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* L_45 = V_3;
		NullCheck(L_45);
		RuntimeObject* L_46 = L_45->___value_1;
		__this->___stretchHeight_6 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_46, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		goto IL_01ab;
	}

IL_01ab:
	{
		int32_t L_47 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_01b0:
	{
		int32_t L_48 = V_2;
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_49 = V_1;
		NullCheck(L_49);
		if ((((int32_t)L_48) < ((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		float L_50 = __this->___maxWidth_1;
		if ((((float)L_50) == ((float)(0.0f))))
		{
			goto IL_01d6;
		}
	}
	{
		float L_51 = __this->___maxWidth_1;
		float L_52 = __this->___minWidth_0;
		G_B26_0 = ((((float)L_51) < ((float)L_52))? 1 : 0);
		goto IL_01d7;
	}

IL_01d6:
	{
		G_B26_0 = 0;
	}

IL_01d7:
	{
		V_11 = (bool)G_B26_0;
		bool L_53 = V_11;
		if (!L_53)
		{
			goto IL_01e9;
		}
	}
	{
		float L_54 = __this->___minWidth_0;
		__this->___maxWidth_1 = L_54;
	}

IL_01e9:
	{
		float L_55 = __this->___maxHeight_3;
		if ((((float)L_55) == ((float)(0.0f))))
		{
			goto IL_0206;
		}
	}
	{
		float L_56 = __this->___maxHeight_3;
		float L_57 = __this->___minHeight_2;
		G_B31_0 = ((((float)L_56) < ((float)L_57))? 1 : 0);
		goto IL_0207;
	}

IL_0206:
	{
		G_B31_0 = 0;
	}

IL_0207:
	{
		V_12 = (bool)G_B31_0;
		bool L_58 = V_12;
		if (!L_58)
		{
			goto IL_0219;
		}
	}
	{
		float L_59 = __this->___minHeight_2;
		__this->___maxHeight_3 = L_59;
	}

IL_0219:
	{
		return;
	}
}
// System.String UnityEngine.GUILayoutEntry::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUILayoutEntry_ToString_mD3785AC5958EB56ECA6E5D325D166C5F5725E615 (GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0484F5252B12C569CD2F3AEE4FCFD5DBE3C5967F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0993C31116DED8F2DAA78B6A73E3149497A84400);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80F799C8D4F8B264EFFA6ADAB5F6D1169403E1C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B5_4 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_5 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_6 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	int32_t G_B4_4 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_5 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_6 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	int32_t G_B6_5 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_6 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_7 = NULL;
	int32_t G_B8_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	int32_t G_B7_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	String_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	int32_t G_B11_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	int32_t G_B10_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_1 = 0;
		goto IL_001b;
	}

IL_000b:
	{
		String_t* L_0 = V_0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_0 = L_1;
		int32_t L_2 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_001b:
	{
		int32_t L_3 = V_1;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var);
		int32_t L_4 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var))->___indent_10;
		V_2 = (bool)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_2;
		if (L_5)
		{
			goto IL_000b;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8 = V_0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_12;
		L_12 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		G_B4_0 = 0;
		G_B4_1 = L_11;
		G_B4_2 = L_11;
		G_B4_3 = _stringLiteral80F799C8D4F8B264EFFA6ADAB5F6D1169403E1C4;
		G_B4_4 = 1;
		G_B4_5 = L_9;
		G_B4_6 = L_9;
		if (L_12)
		{
			G_B5_0 = 0;
			G_B5_1 = L_11;
			G_B5_2 = L_11;
			G_B5_3 = _stringLiteral80F799C8D4F8B264EFFA6ADAB5F6D1169403E1C4;
			G_B5_4 = 1;
			G_B5_5 = L_9;
			G_B5_6 = L_9;
			goto IL_0050;
		}
	}
	{
		G_B6_0 = _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		G_B6_5 = G_B4_4;
		G_B6_6 = G_B4_5;
		G_B6_7 = G_B4_6;
		goto IL_005b;
	}

IL_0050:
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_13;
		L_13 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = GUIStyle_get_name_mDF9EF43C46A0B9431DAF4EB0CE1D18EA32E16B75(L_13, NULL);
		G_B6_0 = L_14;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
		G_B6_5 = G_B5_4;
		G_B6_6 = G_B5_5;
		G_B6_7 = G_B5_6;
	}

IL_005b:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject*)G_B6_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = G_B6_3;
		Type_t* L_16;
		L_16 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_18 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&__this->___rect_4);
		float L_19;
		L_19 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_18, NULL);
		float L_20 = L_19;
		RuntimeObject* L_21 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_21);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_21);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_17;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_23 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&__this->___rect_4);
		float L_24;
		L_24 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F(L_23, NULL);
		float L_25 = L_24;
		RuntimeObject* L_26 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_26);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_22;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_28 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&__this->___rect_4);
		float L_29;
		L_29 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_28, NULL);
		float L_30 = L_29;
		RuntimeObject* L_31 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_31);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_27;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_33 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&__this->___rect_4);
		float L_34;
		L_34 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E(L_33, NULL);
		float L_35 = L_34;
		RuntimeObject* L_36 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_36);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_36);
		String_t* L_37;
		L_37 = UnityString_Format_m98A0629641086A1BE20BBF7F4EADDE3FE3877D85(G_B6_4, L_32, NULL);
		NullCheck(G_B6_6);
		ArrayElementTypeCheck (G_B6_6, L_37);
		(G_B6_6)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_5), (String_t*)L_37);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = G_B6_7;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteral0484F5252B12C569CD2F3AEE4FCFD5DBE3C5967F);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral0484F5252B12C569CD2F3AEE4FCFD5DBE3C5967F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_38;
		float* L_40 = (float*)(&__this->___minWidth_0);
		String_t* L_41;
		L_41 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_40, NULL);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_41);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_41);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_39;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_42;
		float* L_44 = (float*)(&__this->___maxWidth_1);
		String_t* L_45;
		L_45 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_44, NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_45);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_45);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_43;
		int32_t L_47 = __this->___stretchWidth_5;
		G_B7_0 = 6;
		G_B7_1 = L_46;
		G_B7_2 = L_46;
		if (L_47)
		{
			G_B8_0 = 6;
			G_B8_1 = L_46;
			G_B8_2 = L_46;
			goto IL_00f4;
		}
	}
	{
		G_B9_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_00f9;
	}

IL_00f4:
	{
		G_B9_0 = _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_00f9:
	{
		NullCheck(G_B9_2);
		ArrayElementTypeCheck (G_B9_2, G_B9_0);
		(G_B9_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B9_1), (String_t*)G_B9_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = G_B9_3;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, _stringLiteral0993C31116DED8F2DAA78B6A73E3149497A84400);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral0993C31116DED8F2DAA78B6A73E3149497A84400);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = L_48;
		float* L_50 = (float*)(&__this->___minHeight_2);
		String_t* L_51;
		L_51 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_50, NULL);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_51);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_51);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = L_49;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = L_52;
		float* L_54 = (float*)(&__this->___maxHeight_3);
		String_t* L_55;
		L_55 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_54, NULL);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_55);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_55);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_56 = L_53;
		int32_t L_57 = __this->___stretchHeight_6;
		G_B10_0 = ((int32_t)11);
		G_B10_1 = L_56;
		G_B10_2 = L_56;
		if (L_57)
		{
			G_B11_0 = ((int32_t)11);
			G_B11_1 = L_56;
			G_B11_2 = L_56;
			goto IL_013a;
		}
	}
	{
		G_B12_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		goto IL_013f;
	}

IL_013a:
	{
		G_B12_0 = _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
	}

IL_013f:
	{
		NullCheck(G_B12_2);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		String_t* L_58;
		L_58 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(G_B12_3, NULL);
		V_3 = L_58;
		goto IL_0148;
	}

IL_0148:
	{
		String_t* L_59 = V_3;
		return L_59;
	}
}
// System.Void UnityEngine.GUILayoutEntry::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutEntry__cctor_mF6F64749802F89E5AA0A1458CE99CA5FC0D639C2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var))->___kDummyRect_9 = L_0;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_StaticFields*)il2cpp_codegen_static_fields_for(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var))->___indent_10 = 0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.GUIWordWrapSizer::.ctor(UnityEngine.GUIStyle,UnityEngine.GUIContent,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIWordWrapSizer__ctor_m28C0BF2C7D0C5C71A47B8039DF939F954BD06785 (GUIWordWrapSizer_t915CE8588C443243630F7737947CA87B42965A36* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___0_style, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___2_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ___0_style;
		il2cpp_codegen_runtime_class_init_inline(GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F_il2cpp_TypeInfo_var);
		GUILayoutEntry__ctor_m011B3DA69713EEA6BD98D4056B5ADE01F237E5B2(__this, (0.0f), (0.0f), (0.0f), (0.0f), L_0, NULL);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_1 = ___1_content;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_2 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GUIContent__ctor_m798E35DEED8E153FF39445EBEB634F896F19DF19(L_2, L_1, NULL);
		__this->___m_Content_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Content_11), (void*)L_2);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_3 = ___2_options;
		VirtualActionInvoker1< GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* >::Invoke(13 /* System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[]) */, __this, L_3);
		float L_4 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2;
		__this->___m_ForcedMinHeight_12 = L_4;
		float L_5 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3;
		__this->___m_ForcedMaxHeight_13 = L_5;
		return;
	}
}
// System.Void UnityEngine.GUIWordWrapSizer::CalcWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIWordWrapSizer_CalcWidth_mEB7A01D9C3EE00953A4EBC3F4A2B9EFA2BC81552 (GUIWordWrapSizer_t915CE8588C443243630F7737947CA87B42965A36* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0;
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_001d;
		}
	}
	{
		float L_1 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1;
		G_B3_0 = ((((float)L_1) == ((float)(0.0f)))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_007a;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3;
		L_3 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_4 = __this->___m_Content_11;
		NullCheck(L_3);
		GUIStyle_CalcMinMaxWidth_m6BBF836B9A9B2B4BA11DC448B03E441DEDC2CCA4(L_3, L_4, (&V_1), (&V_2), NULL);
		float L_5 = V_1;
		float L_6;
		L_6 = ceilf(L_5);
		V_1 = L_6;
		float L_7 = V_2;
		float L_8;
		L_8 = ceilf(L_7);
		V_2 = L_8;
		float L_9 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0;
		V_3 = (bool)((((float)L_9) == ((float)(0.0f)))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		float L_11 = V_1;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minWidth_0 = L_11;
	}

IL_005f:
	{
		float L_12 = ((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1;
		V_4 = (bool)((((float)L_12) == ((float)(0.0f)))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0079;
		}
	}
	{
		float L_14 = V_2;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxWidth_1 = L_14;
	}

IL_0079:
	{
	}

IL_007a:
	{
		return;
	}
}
// System.Void UnityEngine.GUIWordWrapSizer::CalcHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIWordWrapSizer_CalcHeight_m8CD1B64A1632F1929EF0856E0BD091BAAEC411C4 (GUIWordWrapSizer_t915CE8588C443243630F7737947CA87B42965A36* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = __this->___m_ForcedMinHeight_12;
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_001d;
		}
	}
	{
		float L_1 = __this->___m_ForcedMaxHeight_13;
		G_B3_0 = ((((float)L_1) == ((float)(0.0f)))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_008d;
		}
	}
	{
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3;
		L_3 = GUILayoutEntry_get_style_mEFB6A8443849EC32BD84059C09632B53E44A5876(__this, NULL);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_4 = __this->___m_Content_11;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_5 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___rect_4);
		float L_6;
		L_6 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_5, NULL);
		NullCheck(L_3);
		float L_7;
		L_7 = GUIStyle_CalcHeight_m57DA8F6020AE71B561ABCBCE74E0E58FD2ECC5E8(L_3, L_4, L_6, NULL);
		V_1 = L_7;
		float L_8 = __this->___m_ForcedMinHeight_12;
		V_2 = (bool)((((float)L_8) == ((float)(0.0f)))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_005a;
		}
	}
	{
		float L_10 = V_1;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = L_10;
		goto IL_0066;
	}

IL_005a:
	{
		float L_11 = __this->___m_ForcedMinHeight_12;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___minHeight_2 = L_11;
	}

IL_0066:
	{
		float L_12 = __this->___m_ForcedMaxHeight_13;
		V_3 = (bool)((((float)L_12) == ((float)(0.0f)))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0080;
		}
	}
	{
		float L_14 = V_1;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = L_14;
		goto IL_008c;
	}

IL_0080:
	{
		float L_15 = __this->___m_ForcedMaxHeight_13;
		((GUILayoutEntry_tDF59F19DD000820F64B356D5092C4BEDFE109D5F*)__this)->___maxHeight_3 = L_15;
	}

IL_008c:
	{
	}

IL_008d:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.GUILayoutOption::.ctor(UnityEngine.GUILayoutOption/Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayoutOption__ctor_m4EF826EA43073869166C8D94A1D9EB7898ACC3AA (GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* __this, int32_t ___0_type, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_type;
		__this->___type_0 = L_0;
		RuntimeObject* L_1 = ___1_value;
		__this->___value_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___value_1), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m3791FADF6D0284BCC1AF6156A077038C2AA23055 (String_t* ___0_s, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_s;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___0_s;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___0_s;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_000d;
	}

IL_002c:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EventInterests_get_wantsMouseMove_m4CE6AE73062DE1E37A138ED365FE4D8C7894B9AA_inline (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CwantsMouseMoveU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventInterests_set_wantsMouseMove_mFEA33E053185D63A19F60AA69E385C05CE795F0F_inline (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CwantsMouseMoveU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EventInterests_get_wantsMouseEnterLeaveWindow_m5CC6DB8DAF1DEB0F7E8878B96A856F540E66840F_inline (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventInterests_set_wantsMouseEnterLeaveWindow_m5D73B54F5855E5BB5FE54AA2366A83A33982D313_inline (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EventInterests_get_wantsLessLayoutEvents_m1BC017D5AC484596A2A9B05BF592B65CE2A00CDE_inline (EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CwantsLessLayoutEventsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUIUtility_set_guiIsExiting_m0DCDD09CD48330FD781C03D2EA20F973878A2BC5_inline (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		((GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_StaticFields*)il2cpp_codegen_static_fields_for(GUIUtility_tA20863F7281628086EFC61CF90CB52D20E1FD76A_il2cpp_TypeInfo_var))->___U3CguiIsExitingU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* L_0 = ((StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var))->___s_ordinalIgnoreCase_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SkinChangedDelegate_Invoke_mD14214487F9A0E4DD7EB7F97927D03EC8F1A3B4C_inline (SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUI_set_scrollTroughSide_m6E4ED984EDA808C922C062CA6FB6491D2CD28CCA_inline (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___U3CscrollTroughSideU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUI_set_nextScrollStepTime_mA35BA69E3FDBC961E42F6C9D02BB4E8776926A09_inline (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___U3CnextScrollStepTimeU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GUI_get_scrollTroughSide_mD6AEA9AFA867B71D484561D5BEBF3520321E5E3E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___U3CscrollTroughSideU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D GUI_get_nextScrollStepTime_m9ECB2B2710D4233C7124D23F0DD995006913D70E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ((GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_StaticFields*)il2cpp_codegen_static_fields_for(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var))->___U3CnextScrollStepTimeU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}

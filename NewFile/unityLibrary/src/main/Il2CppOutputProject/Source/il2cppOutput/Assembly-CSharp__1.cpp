﻿#include "pch-cpp.hpp"

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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// <>f__AnonymousType0`4<System.Int32,System.Object,System.Object,System.Object>
struct U3CU3Ef__AnonymousType0_4_t87E69E279093DFC4580EF2B2E42CCE84BA36F057;
// <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>
struct U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39;
// <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>
struct U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454;
// System.Action`1<Photon.Voice.FrameOut`1<System.Single>>
struct Action_1_t4B5244A7D75171D94BEAE3074BB3625987C5AE84;
// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<ExitGames.Client.Photon.EventData>
struct Action_1_t1B5115AA4265AE1C83F3EC48593F86230AF07295;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<ExitGames.Client.Photon.OperationResponse>
struct Action_1_t3A1DE9227396F3C161EEABEA4147808A86558826;
// System.Action`1<Photon.Realtime.RegionHandler>
struct Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74;
// System.Action`1<Photon.Voice.Unity.RemoteVoiceLink>
struct Action_1_tEDBE6144CEB293C0905C68B84BB211D3950274B3;
// System.Action`1<Photon.Voice.Unity.Speaker>
struct Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229;
// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>
struct Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>
struct Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493;
// System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>
struct Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.Object,System.Object>>
struct Dictionary_2_t491A326E784F135D7D3DEEA1DBB454F3B03579EF;
// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>
struct Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E;
// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.Demo.FriendItem>
struct Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>
struct Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48;
// System.Func`1<System.Double>
struct Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7;
// System.Func`1<Photon.Voice.IAudioDesc>
struct Func_1_t70BAAB9F1D00714988C7BA974AF43D14365CBD68;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// Photon.Voice.IAudioOut`1<System.Single>
struct IAudioOut_1_t52874464F649CB4D8674B0F14144AADE14995DF9;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_t1447BF8E1A962EF1787C1E07658EB94E72BA2CEF;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,FlutterUnityIntegration.UnityMessage>
struct KeyCollection_tBA9E4C362038AD4D8203839B7639184250B7EB02;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Photon.Chat.ChatChannel>
struct KeyCollection_t3CC6366B12095908A6B3B512623B34284A09041D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Photon.Chat.Demo.FriendItem>
struct KeyCollection_t5A7BBF071446F8E068A6658B8FD8E3568B9EC2A4;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.UI.Toggle>
struct KeyCollection_t635DBC320EDF562E36389EC297EDFBF7DBB35A53;
// System.Lazy`1<FlutterUnityIntegration.UnityMessageManager>
struct Lazy_1_t6F494A9DD8C65745EEC22482A12BA8565B069417;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<Photon.Voice.DeviceInfo>
struct List_1_t77900A23BF65F1E318159DF69366A9281EA47E72;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef>
struct List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// System.Collections.Generic.List`1<Photon.Voice.Unity.Recorder>
struct List_1_tBFD6B7B62FB7763BC57224ED666A855ACCD05536;
// System.Collections.Generic.List`1<Photon.Realtime.Region>
struct List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7;
// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger>
struct List_1_t6F972EAFC64258DD491584080B232EC12BE33581;
// System.Collections.Generic.List`1<Photon.Voice.Unity.RemoteVoiceLink>
struct List_1_t823310AB4F398AE467887CC898545B689B70003F;
// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE;
// System.Collections.Generic.List`1<Photon.Voice.Unity.Speaker>
struct List_1_t581C6CC97545A3BE378779CD0B20D123D6DCF950;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E;
// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange>
struct Queue_1_t9BA80EF655597EC91F8BA37831960B5B70540B02;
// FlutterUnityIntegration.SingletonMonoBehaviour`1<System.Object>
struct SingletonMonoBehaviour_1_t40D855C9E22F0BF3C0ADBC1B41CF44E16D5E0FD2;
// FlutterUnityIntegration.SingletonMonoBehaviour`1<FlutterUnityIntegration.UnityMessageManager>
struct SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF;
// Photon.Voice.AudioUtil/ToneAudioReader`1<System.Single>
struct ToneAudioReader_1_tE87A7B87FE140B2223CA4C08A8D346B13D0B7646;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A;
// UnityEngine.Events.UnityEvent`2<System.Int32Enum,Photon.Voice.DeviceInfo>
struct UnityEvent_2_t5F53C10E0902BC0EEA6011A51CE736FB7C1F6723;
// UnityEngine.Events.UnityEvent`2<Photon.Voice.Unity.Demos.DemoVoiceUI.MicType,Photon.Voice.DeviceInfo>
struct UnityEvent_2_t9B3805F2D0A63EC28880E7DC01947289AC34EC74;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,FlutterUnityIntegration.UnityMessage>
struct ValueCollection_t76308479C314C62501C70F5884CCFFC9D72B7612;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Photon.Chat.ChatChannel>
struct ValueCollection_tC039743F3DF97A944D4DC9D36739F442375E5D80;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Photon.Chat.Demo.FriendItem>
struct ValueCollection_t8EC9654DB430A0670ECC121F80DD606DBBC2A3EC;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.UI.Toggle>
struct ValueCollection_t5777B20754B5D28BC1CC6B0576417443BB9FE136;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,FlutterUnityIntegration.UnityMessage>[]
struct EntryU5BU5D_t393AE08BA714246E21C0D33B596C7DE1017B2E0E;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Photon.Chat.ChatChannel>[]
struct EntryU5BU5D_t4D8D831A3B049F41AC0645D0DE9994241B9C0926;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Photon.Chat.Demo.FriendItem>[]
struct EntryU5BU5D_t4B0A754922A68A443DD292FC1FE964E8F66BE571;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.UI.Toggle>[]
struct EntryU5BU5D_t8C9204C472D3D048FC5529E6A3FC243EEB625930;
// Photon.Voice.IOS.AudioSessionCategoryOption[]
struct AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Photon.Realtime.FriendInfo[]
struct FriendInfoU5BU5D_tE89DA4050769F5D540A0B2AAD187F6560FBFB0BD;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0;
// Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef[]
struct MicRefU5BU5D_tB38D0F9746F40D7A1177291C8B4E0873C4ED8E76;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Photon.Realtime.RoomInfo[]
struct RoomInfoU5BU5D_t144AE7D49A37D5B8CE320BBA78875CD81D40A582;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Photon.Realtime.TypedLobbyInfo[]
struct TypedLobbyInfoU5BU5D_t799EE885B0FB997851DAB1806D3EC4EF57F7CD8A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ComponentModel.AddingNewEventHandler
struct AddingNewEventHandler_t11C2294D60E10C8BF4CE687A4BEFBB42A24A233C;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// Photon.Realtime.AppSettings
struct AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// Photon.Voice.Unity.AudioInEnumerator
struct AudioInEnumerator_t2A8F43D6245EAB21DAB999CDB56032FAB88FF3E8;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// Photon.Chat.AuthenticationValues
struct AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C;
// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Photon.Chat.Demo.ChannelSelector
struct ChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07;
// Photon.Chat.Demo.ChatAppIdCheckerUI
struct ChatAppIdCheckerUI_t43522738EEA1186C60A64B652B157BC5FA4FC22D;
// Photon.Chat.ChatAppSettings
struct ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689;
// Photon.Chat.ChatChannel
struct ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1;
// Photon.Chat.ChatClient
struct ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA;
// Photon.Chat.Demo.ChatGui
struct ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25;
// Photon.Chat.ChatPeer
struct ChatPeer_t216E56C8D1791380415477470013A3787DF76D43;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Photon.Realtime.Demo.ConnectAndJoinRandomLb
struct ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39;
// Photon.Realtime.ConnectionCallbacksContainer
struct ConnectionCallbacksContainer_t4E9F72F713D87B67F0CA63162CFC7D100554BFFD;
// Photon.Realtime.ConnectionHandler
struct ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Photon.Voice.DeviceFeatures
struct DeviceFeatures_t05B3C3BD6FF064A0B655BA147B59195A5DBC3D03;
// Photon.Voice.DeviceInfo
struct DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335;
// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89;
// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// Photon.Realtime.ErrorInfoCallbacksContainer
struct ErrorInfoCallbacksContainer_tF60CA97691A86635843C02EEA1D689A384BC7ED7;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// Photon.Chat.UtilityScripts.EventSystemSpawner
struct EventSystemSpawner_t823C33A21E4332F5D407768DB424BBDB0D17C77D;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// Photon.Chat.Demo.FriendItem
struct FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_tD626399B3ADFD501225241D7366103F35472542A;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Photon.Voice.IAudioDesc
struct IAudioDesc_t3DEEF61ECB638E82CFBFC6F26D590E2ECD3F99C2;
// Photon.Chat.IChatClientListener
struct IChatClientListener_t7809F4EE0368FF3496A7123CCAFF8BA0B1A02B2F;
// Photon.Voice.IDeviceEnumerator
struct IDeviceEnumerator_tBAFA864015008142632BCAD7673D2ECF2FC396F7;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Photon.Voice.ILogger
struct ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075;
// Photon.Chat.Demo.IgnoreUiRaycastWhenInactive
struct IgnoreUiRaycastWhenInactive_t4DD606784A41379E617458D4FF2D041690E7BAEF;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Photon.Realtime.InRoomCallbacksContainer
struct InRoomCallbacksContainer_t7730C9DD20B72CC201052C5E6FC914E6FD4B1488;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A;
// Newtonsoft.Json.Linq.JObject
struct JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t4A44691A9942B8A7AEB4016F7405BF388D1E0632;
// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3;
// Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_t2B7EB6B1D12A8C94152AB2E690CC45F185373C46;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_tDBF36F3E2C6B7538106878E1D5A7553C5EA77616;
// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4;
// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F;
// Photon.Voice.LoadBalancingTransport
struct LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80;
// Photon.Realtime.LobbyCallbacksContainer
struct LobbyCallbacksContainer_tEF75E5B06B44AD5DE298FA7C597901BAE1E352FC;
// Photon.Voice.LocalVoice
struct LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5;
// Photon.Realtime.MatchMakingCallbacksContainer
struct MatchMakingCallbacksContainer_tEDF984018478E15D3031775F859CD94D66275C97;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// FlutterUnityIntegration.MessageHandler
struct MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector
struct MicrophoneSelector_t4271F3212A871220CB395D2553525E2AC0B49A16;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Photon.Realtime.MonoBehaviourEmpty
struct MonoBehaviourEmpty_t8BBCD2C733FF1AA5B134D7290654C2869AA7C2E9;
// Photon.Chat.Demo.NamePickGui
struct NamePickGui_t8C0368B20268692BC4311641FC79610CCD7FB56B;
// FlutterUnityIntegration.NativeAPI
struct NativeAPI_t95E431F7951EC1718025A4EB8575D6CDCACB64C1;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Photon.Chat.UtilityScripts.OnStartDelete
struct OnStartDelete_tAFE941550E5B7D4F434D3BB2D00C0D93610BDC11;
// Photon.Realtime.OpJoinRandomRoomParams
struct OpJoinRandomRoomParams_t5DCB0B5EBE3D5C35A483669A8D997D47E17D6DBA;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Photon.Voice.PhotonTransportProtocol
struct PhotonTransportProtocol_tDBD08C0E3F1F28676B0573F86D9BC19564FCA700;
// Photon.Realtime.Player
struct Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_t9CB57C8239C4A0D29CF45F474FDA4B6163DEBFA8;
// Photon.Voice.Unity.Recorder
struct Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Photon.Realtime.Region
struct Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A;
// Photon.Realtime.RegionHandler
struct RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB;
// Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI
struct RemoteSpeakerUI_t16CA1BA6C6B7F673E5A2F6C3262768298ACB2728;
// Photon.Voice.Unity.RemoteVoiceLink
struct RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4;
// Photon.Realtime.Room
struct Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373;
// Photon.Realtime.RoomOptions
struct RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// Photon.Pun.ServerSettings
struct ServerSettings_t41BE4338E7E76BFB4919D4039BAFC6799E242152;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// Photon.Voice.Unity.Speaker
struct Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.String
struct String_t;
// Photon.Realtime.SupportLogger
struct SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD;
// Photon.Realtime.SystemConnectionSummary
struct SystemConnectionSummary_t42DEF00A80373BAC571B4CCF960BB85E7155819A;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// Photon.Chat.UtilityScripts.TextButtonTransition
struct TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// Photon.Chat.UtilityScripts.TextToggleIsOnTransition
struct TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Threading.Timer
struct Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// Photon.Realtime.TypedLobby
struct TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8;
// FlutterUnityIntegration.UnityMessage
struct UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0;
// FlutterUnityIntegration.UnityMessageManager
struct UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// Photon.Voice.VoiceClient
struct VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E;
// Photon.Voice.Unity.VoiceComponent
struct VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF;
// Photon.Voice.Unity.VoiceComponentImpl
struct VoiceComponentImpl_t0F6CF304701B2CD643B645A6378645F69E396C90;
// Photon.Voice.Unity.VoiceConnection
struct VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// Photon.Realtime.WebFlags
struct WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA;
// Photon.Realtime.WebRpcCallbacksContainer
struct WebRpcCallbacksContainer_t88E62A57DFEECEC90CE6EC40A270C0C188AD1851;
// Photon.Voice.AudioUtil/ILevelMeter
struct ILevelMeter_tAA539E9A7B391A21DCBE1B6E49298B3C5F8B6B36;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c
struct U3CU3Ec_t2529E801AE37BB4E2785EDEC5F5739EFC00D054B;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector/MicrophoneSelectorEvent
struct MicrophoneSelectorEvent_t8A25F9B1CA111326232C99F82DDA60877DD8F005;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;
// FlutterUnityIntegration.UnityMessageManager/MessageDelegate
struct MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9;
// FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate
struct MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioInEnumerator_t2A8F43D6245EAB21DAB999CDB56032FAB88FF3E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatState_t051505084374FEB7E666EAF9C3D7A8DFBA5119D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisconnectCause_t2C4E3D34FE0D1842B3C915A63ECCE068B8A258E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDeviceEnumerator_tBAFA864015008142632BCAD7673D2ECF2FC396F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tB42CC3172171D07B3D345D63F8622B98D8ED5E61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t46D603C1EA8510E8CB2057C583DA4FBDF80D5E56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t4E0F3B7704316E8AB75E2D31CCAA4790C47642AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILevelMeter_tAA539E9A7B391A21DCBE1B6E49298B3C5F8B6B36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MicType_t72AD794BBCFD7E7B0D069950F4ACABB93006B95C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MicrophoneSelectorEvent_t8A25F9B1CA111326232C99F82DDA60877DD8F005_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ToneAudioReader_1_tE87A7B87FE140B2223CA4C08A8D346B13D0B7646_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2529E801AE37BB4E2785EDEC5F5739EFC00D054B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B____Device_1_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral011D7D9D78DC2A4EA6437F75F6AE9C5B1D038EC5;
IL2CPP_EXTERN_C String_t* _stringLiteral0149A4E83E989B46DDC9EF84B83BFF2EDD9824C1;
IL2CPP_EXTERN_C String_t* _stringLiteral02B3E56E4708FA9AEED0B607268A8985B53DDF13;
IL2CPP_EXTERN_C String_t* _stringLiteral08FE9DE8AC354F1DECA87F579F81A631253674F2;
IL2CPP_EXTERN_C String_t* _stringLiteral0CCFD69444F343A43D9B34E72AE10A9C37F6402F;
IL2CPP_EXTERN_C String_t* _stringLiteral0F45C1C537BBADB2FE21CC7BB49C59898B204E6E;
IL2CPP_EXTERN_C String_t* _stringLiteral118410E0D4EC44AA2FCD3142030E47DC49A64A18;
IL2CPP_EXTERN_C String_t* _stringLiteral1729AC1B7F3D22492501BEF772B5BFDEBCF05B70;
IL2CPP_EXTERN_C String_t* _stringLiteral187DC7C8E0EDA1DE1ED6DF6A69E16E1804984856;
IL2CPP_EXTERN_C String_t* _stringLiteral18BA82A745D9E10EF604341BD4FA08FA6FBF82D5;
IL2CPP_EXTERN_C String_t* _stringLiteral1E9F96CCAAF251743BBDF936DAB8F646AFE517E8;
IL2CPP_EXTERN_C String_t* _stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469;
IL2CPP_EXTERN_C String_t* _stringLiteral25D19D44AE79EC606DD671C43230AAA8F1766EE6;
IL2CPP_EXTERN_C String_t* _stringLiteral27D02BB75532CBC06987E57A920470B3EFF4FCF0;
IL2CPP_EXTERN_C String_t* _stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
IL2CPP_EXTERN_C String_t* _stringLiteral2C91CEEB5E6ACD712F102DE9EE44CB907B557A17;
IL2CPP_EXTERN_C String_t* _stringLiteral2E1D0B7FC6AE1E4699086BAFDFD167B73A71BF62;
IL2CPP_EXTERN_C String_t* _stringLiteral300E1362F835BABF048E880C8978EF4F91E3867D;
IL2CPP_EXTERN_C String_t* _stringLiteral31775E5380AC9751F2E61EA3DD24D9243DE804B1;
IL2CPP_EXTERN_C String_t* _stringLiteral3293A8518D7DEE9D1DE57B7241DE59F641197895;
IL2CPP_EXTERN_C String_t* _stringLiteral361D3EBAF9E2C29F13DB3B6509697AA973E37A36;
IL2CPP_EXTERN_C String_t* _stringLiteral37DD04BE01CD12295B3C994FBEE871F305800521;
IL2CPP_EXTERN_C String_t* _stringLiteral38DB4AF6DBE7A8DBCC3821BE5605A5BB55BCB3D4;
IL2CPP_EXTERN_C String_t* _stringLiteral40C776DB92DC51DDEF843FFC1AE1917B3769978A;
IL2CPP_EXTERN_C String_t* _stringLiteral41540A8C28BA5EDA9B41BEBBF344C748063CDB90;
IL2CPP_EXTERN_C String_t* _stringLiteral431FAE4373958E931910E5D9D0CAF63C4EA2D97E;
IL2CPP_EXTERN_C String_t* _stringLiteral446F4074B6FC992AC4C43BF17861EB82CCF98A12;
IL2CPP_EXTERN_C String_t* _stringLiteral471E512CD36A060B52A0EE28B8A6D4EEC00378C1;
IL2CPP_EXTERN_C String_t* _stringLiteral4A36DF6525515FE29AEB2A52B49635745B5D8E56;
IL2CPP_EXTERN_C String_t* _stringLiteral4A40D860326E4F58DF247BAAC9F338720FCF0B75;
IL2CPP_EXTERN_C String_t* _stringLiteral4BB17AD581F217BFB87AB6ABBFA96D757F574177;
IL2CPP_EXTERN_C String_t* _stringLiteral4E38E2B4F159337570AD4E9656D4BDAF8B0EBCF1;
IL2CPP_EXTERN_C String_t* _stringLiteral50C349861105941F8CC6A38A2B8CC315ED6CD653;
IL2CPP_EXTERN_C String_t* _stringLiteral5224DE4337BB6DBE135E6B5A4D01069A20195D5F;
IL2CPP_EXTERN_C String_t* _stringLiteral5D6A39CF1E3A2BB7700481DB871D78DDB02A911D;
IL2CPP_EXTERN_C String_t* _stringLiteral5DF695F96AE9B00DBD2CB8F12E765C3159E02AF8;
IL2CPP_EXTERN_C String_t* _stringLiteral5E828DFD91AA009F26910FD1EDC74EB3648317C9;
IL2CPP_EXTERN_C String_t* _stringLiteral5F629B25BE4F48980C1EDD2471AE2A239A980D35;
IL2CPP_EXTERN_C String_t* _stringLiteral60D25464A0D2697B9DE85A8CE7C6E223B98C82E6;
IL2CPP_EXTERN_C String_t* _stringLiteral693BD22F82043985FDDDDFCF5E8EC15BF8B82934;
IL2CPP_EXTERN_C String_t* _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710;
IL2CPP_EXTERN_C String_t* _stringLiteral6C8EA4ECB883AD669394FC7A5E304891A38ADED4;
IL2CPP_EXTERN_C String_t* _stringLiteral6CB2C6E1A639BB12B2C001ABD841884E2E7EFE62;
IL2CPP_EXTERN_C String_t* _stringLiteral6F571ADB8F0C91FDE7F8F3664004AF1D93C907EA;
IL2CPP_EXTERN_C String_t* _stringLiteral710F81E0EEB8CB48BACB8437BA5836E3B5349235;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral77F781BE1FA4EBA75ACC2DC942D3D87126A499DB;
IL2CPP_EXTERN_C String_t* _stringLiteral7872402A59E9175DECE8237B6F756EA72FC3091E;
IL2CPP_EXTERN_C String_t* _stringLiteral80131A9CBA85F77AB516C1FA4DF2852B1588286B;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral86C677CA2B54E7E4E81E71A6AF30E985B484A0AF;
IL2CPP_EXTERN_C String_t* _stringLiteral87F8ED9157125FFC4DA9E06A7B8011AD80A53FE1;
IL2CPP_EXTERN_C String_t* _stringLiteral88A4E835FC47194C325AC1B4075B94D15767248A;
IL2CPP_EXTERN_C String_t* _stringLiteral8CB7873CC9B86C1D67BF2A619181392B42B2481F;
IL2CPP_EXTERN_C String_t* _stringLiteral93CD26FD25F534D18F21EBB330F02E0264AC3C8C;
IL2CPP_EXTERN_C String_t* _stringLiteral948D5540F75EFEF54DA7E6CC50302CD14D50F0C1;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteralA1533BFD28F11C5F69CA87886E87821ECA526FE4;
IL2CPP_EXTERN_C String_t* _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1;
IL2CPP_EXTERN_C String_t* _stringLiteralA36D615703FF124A704E046433369D41AA86C957;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralA7077659D26DAF185E52E2F2B77A29B3A2B818C1;
IL2CPP_EXTERN_C String_t* _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D;
IL2CPP_EXTERN_C String_t* _stringLiteralB3664676F50F442E724FBD9CC58E7261F51AA12F;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB61F8E5C6788E7093D4F1DE579EBD7C233090B94;
IL2CPP_EXTERN_C String_t* _stringLiteralB77494B17C8DA599A6494EFFB7F17D9519775753;
IL2CPP_EXTERN_C String_t* _stringLiteralB8833A6A8DBC0A8BD7545AE8C434405E77ABF1C2;
IL2CPP_EXTERN_C String_t* _stringLiteralBE1823106E03B1A8E37190FA81CAA82064505504;
IL2CPP_EXTERN_C String_t* _stringLiteralBE2117BC4109A6033BA69CFDAB4ADC8FD4F90401;
IL2CPP_EXTERN_C String_t* _stringLiteralBE4EEAA3C538A66727E1F57EEFC277047842C14C;
IL2CPP_EXTERN_C String_t* _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302;
IL2CPP_EXTERN_C String_t* _stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8;
IL2CPP_EXTERN_C String_t* _stringLiteralCCE149C7622A20B800C0F221FF927D6238C6DD62;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD20C03F16FDD55F0E75FB49008A84DCD32E50E5B;
IL2CPP_EXTERN_C String_t* _stringLiteralD3368896F4020992296BCF303550CF1DE916BB7C;
IL2CPP_EXTERN_C String_t* _stringLiteralD3992DF679A3EF8B96232992FF89A2B1F1DB5534;
IL2CPP_EXTERN_C String_t* _stringLiteralD86E358823F036B8B0DFE65D48F423594BE69982;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralDEB153A4F640C1BF005F7E30CECC4A84EB08150A;
IL2CPP_EXTERN_C String_t* _stringLiteralE01396087B968D8089649181D62173B42DA52091;
IL2CPP_EXTERN_C String_t* _stringLiteralE0F902889DF6EC5CFE211AF8D1697BB12234DA66;
IL2CPP_EXTERN_C String_t* _stringLiteralE1BA34E8407E1622C279AB6F6CAF3C807280392E;
IL2CPP_EXTERN_C String_t* _stringLiteralE3B3BFC5383BDA4F6419438C59D2C67B65CEC175;
IL2CPP_EXTERN_C String_t* _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC;
IL2CPP_EXTERN_C String_t* _stringLiteralEF851313B194BE9C33390B9B1DDFB6DF6154044A;
IL2CPP_EXTERN_C String_t* _stringLiteralF0E91461B7ECDB6ABA60BFA77B9395C3A7DF66BE;
IL2CPP_EXTERN_C String_t* _stringLiteralF726A1EAC195324F63D384A1F2A33114361B699C;
IL2CPP_EXTERN_C String_t* _stringLiteralF901E66F2A148065254F4D6B82528054EF835B28;
IL2CPP_EXTERN_C String_t* _stringLiteralF903ABCF81417315694F4593925EE527D6C1258B;
IL2CPP_EXTERN_C String_t* _stringLiteralF92D1197FE7F9C3266589153D13221067FA7BB4A;
IL2CPP_EXTERN_C String_t* _stringLiteralFB0DA295360002E063FF9B079B5E7DC3DB313083;
IL2CPP_EXTERN_C String_t* _stringLiteralFCCA328F77D050FE98C954ABC27B722687F2666D;
IL2CPP_EXTERN_C String_t* _stringLiteralFD518666B4F52417752311AE996CEA3A91ECF532;
IL2CPP_EXTERN_C String_t* _stringLiteralFDB6E6D617A894CF6A5EC4195B7DBF4AFF000089;
IL2CPP_EXTERN_C String_t* _stringLiteralFF8AEDAF918CF6EF3D306EB2FB9FA00A4D0FA453;
IL2CPP_EXTERN_C String_t* _stringLiteralFFDB0D351E22E8E3485F340E7CF2E43FFF485BB9;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07_mA5CB24AADA6105A0763F0F315A95A0B02EB5A05E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpeaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE_mB771EC7BA8B007F33B7C7C75C7CD2073475476E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectAndJoinRandomLb_OnRegionPingCompleted_mCD5E698C6C0900FF3ACDD4AA4FFC644BC4137CE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m7AC008F2D3DCBB5019F0BE948B7F9B77284CC86C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m8CEE5FEF823BADBAFEC756B6DF4ED9C1E574EBDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m43998BB50D68FD0B18E4445DED51EE80D6EF1643_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mFC86DBD8CA71ACF273A1F7FB6CD2DAD53449653E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m2D3C2B49D6B541197F1E118FE7D6F37AF46A08C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m4F6FEFABCBACA9B9B3DED9BFAB8BDA9B47FA678B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m952BC71E0A6D29F848B1C6D854B9183CE0A5E83A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mF8E608EDD8A59D5C9E831BDA1E54D923D2872EFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m3B8850785436E6EB25F3851408FD229CE9812076_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m05968164AFC47B4DAC2545E4FAC531C51F66C7FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1951C457B495EAFA02160F793A6277161FDCEA3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB83DEA09CE12176ACC9D229EDAA617E7B0B62FB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mFCFB38659217BF06006B6BC2FFD16389EF2A44EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m65B54189C1D9C6B6BD1BABB5755C0647EE39C89B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mD91F54F913AE58A20D0D60800D7E13B3A81BCDBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mFDB00FBC9AEC3F5411BC17218005A2DDC01A4EE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m06019984AEF249BE743B261895FBDFCF3DE314FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m950509CD692BEAA25841830AE3528B713C36DAC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF6F3ECC910925263DF2A5278F4F56F520C1507A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCCC05EA9B86407E7E62E482BFF27A5F1E89A9AD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mC24167312F3DB38FB43365A8583DA381DB6EAA4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4_m35DDE72490FF0112059E3A8C5F21DD893E2026C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisFriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13_m0046B7B489607CF796C30CD83C51F1304D701F67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m9A4008D157E7FA3D568FE444C0D926C78B1645B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m8C266329612FA91F72F7F4D9C3137D4448CD5E1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2321E1B53E110705468505FCDC00444CCB8ABA04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m952B9D2EAD3EAA5057E2654DEE307A934D3C20DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m36061DDA7BCE9122195582ED4AA9B40303BDB896_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m4868FE31F54407D32B370B64861094F7CC551054_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageHandler_getData_TisRuntimeObject_m675A7C19F2448C70CD3FC2E102CBAE41A2DC9CCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MicrophoneSelector_OnMicrophonePermissionCallback_m3D3087050DDFA03F0DE88D9DBF734BC81337CA30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MicrophoneSelector_RefreshMicrophones_m745C35791DFE58A797753A74C183EE043ECB97B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MicrophoneSelector_U3CAwakeU3Eb__12_0_m3605C2E335CAB2057B17C8063CAA0072CA7B9E1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MicrophoneSelector_U3CSetupMicDropdownU3Eb__17_0_mEC87F906E0BA0DC5ABE7FAEC983065B696894D3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mC38C1723F0B562B0434E57A698D253D8C24557FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mA3D7664F2A78EFADD951B0211A5BB9A9FB7E1488_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mA6DA85312C2DFFA8A4D16346532C6F26F9C13577_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m6F51F2B8CB0DBD60C3C4AF683A4FE9D7698C7482_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RemoteSpeakerUI_OnPlayDelayChanged_m729491A09FB8BD13B93000BF7D148A5A0FCBAE69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RemoteSpeakerUI_OnVolumeChanged_mE7EC7BC022C623FF353EB589E146633E86CC20EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonMonoBehaviour_1__ctor_mB959CC5C4F5F613426011598A0FFADE2812F4B07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ToneAudioReader_1__ctor_m56DC6DE7286F3B0C5D3E424216D11DADD608CF6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType0_4__ctor_m29CA8638117DD35A3ECF831C1C575ECD9A1CFF99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType0_4__ctor_mA9CA12BE8F40DB9F200816875B785E4FC23A2200_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m0F5B724279206F1B3F87CF5ED0C6B593CC81E992_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m1AE84331E028D3DCEA0ADCF9160FEA3F49FC6C04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityMessageManager_OnSceneLoaded_m9C97092396F4D86D596E39FEB791D14B7A98A726_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335;;
struct DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_marshaled_com;
struct DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_marshaled_com;;
struct DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_marshaled_pinvoke;
struct DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_marshaled_pinvoke;;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct MicRefU5BU5D_tB38D0F9746F40D7A1177291C8B4E0873C4ED8E76;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>
struct U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39  : public RuntimeObject
{
	// <id>j__TPar <>f__AnonymousType0`4::<id>i__Field
	int32_t ___U3CidU3Ei__Field_0;
	// <seq>j__TPar <>f__AnonymousType0`4::<seq>i__Field
	String_t* ___U3CseqU3Ei__Field_1;
	// <name>j__TPar <>f__AnonymousType0`4::<name>i__Field
	String_t* ___U3CnameU3Ei__Field_2;
	// <data>j__TPar <>f__AnonymousType0`4::<data>i__Field
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* ___U3CdataU3Ei__Field_3;
};

// <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>
struct U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454  : public RuntimeObject
{
	// <id>j__TPar <>f__AnonymousType0`4::<id>i__Field
	int32_t ___U3CidU3Ei__Field_0;
	// <seq>j__TPar <>f__AnonymousType0`4::<seq>i__Field
	String_t* ___U3CseqU3Ei__Field_1;
	// <name>j__TPar <>f__AnonymousType0`4::<name>i__Field
	String_t* ___U3CnameU3Ei__Field_2;
	// <data>j__TPar <>f__AnonymousType0`4::<data>i__Field
	RuntimeObject* ___U3CdataU3Ei__Field_3;
};

// System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>
struct Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t393AE08BA714246E21C0D33B596C7DE1017B2E0E* ____entries_1;
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
	KeyCollection_tBA9E4C362038AD4D8203839B7639184250B7EB02* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t76308479C314C62501C70F5884CCFFC9D72B7612* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* ____entries_1;
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
	KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>
struct Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t4D8D831A3B049F41AC0645D0DE9994241B9C0926* ____entries_1;
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
	KeyCollection_t3CC6366B12095908A6B3B512623B34284A09041D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC039743F3DF97A944D4DC9D36739F442375E5D80* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.Demo.FriendItem>
struct Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t4B0A754922A68A443DD292FC1FE964E8F66BE571* ____entries_1;
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
	KeyCollection_t5A7BBF071446F8E068A6658B8FD8E3568B9EC2A4* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t8EC9654DB430A0670ECC121F80DD606DBBC2A3EC* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>
struct Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t8C9204C472D3D048FC5529E6A3FC243EEB625930* ____entries_1;
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
	KeyCollection_t635DBC320EDF562E36389EC297EDFBF7DBB35A53* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t5777B20754B5D28BC1CC6B0576417443BB9FE136* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// Photon.Voice.AudioUtil/GeneratorReader`1<System.Single>
struct GeneratorReader_1_tD99454E393183FDDBBDA975E184B516565AF2489  : public RuntimeObject
{
	// System.Int32 Photon.Voice.AudioUtil/GeneratorReader`1::<Channels>k__BackingField
	int32_t ___U3CChannelsU3Ek__BackingField_0;
	// System.Int32 Photon.Voice.AudioUtil/GeneratorReader`1::<SamplingRate>k__BackingField
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	// System.String Photon.Voice.AudioUtil/GeneratorReader`1::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_2;
	// System.Int64 Photon.Voice.AudioUtil/GeneratorReader`1::timeSamples
	int64_t ___timeSamples_3;
	// System.Func`1<System.Double> Photon.Voice.AudioUtil/GeneratorReader`1::clockSec
	Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* ___clockSec_4;
};

// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FriendInfoU5BU5D_tE89DA4050769F5D540A0B2AAD187F6560FBFB0BD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef>
struct List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MicRefU5BU5D_tB38D0F9746F40D7A1177291C8B4E0873C4ED8E76* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RoomInfoU5BU5D_t144AE7D49A37D5B8CE320BBA78875CD81D40A582* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TypedLobbyInfoU5BU5D_t799EE885B0FB997851DAB1806D3EC4EF57F7CD8A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// Photon.Chat.Demo.AppSettingsExtensions
struct AppSettingsExtensions_t59ECE03A5423182D8C7204044BC87A3F51186BF8  : public RuntimeObject
{
};

// Photon.Chat.ChatChannel
struct ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1  : public RuntimeObject
{
	// System.String Photon.Chat.ChatChannel::Name
	String_t* ___Name_0;
	// System.Collections.Generic.List`1<System.String> Photon.Chat.ChatChannel::Senders
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___Senders_1;
	// System.Collections.Generic.List`1<System.Object> Photon.Chat.ChatChannel::Messages
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___Messages_2;
	// System.Int32 Photon.Chat.ChatChannel::MessageLimit
	int32_t ___MessageLimit_3;
	// System.Int32 Photon.Chat.ChatChannel::ChannelID
	int32_t ___ChannelID_4;
	// System.Boolean Photon.Chat.ChatChannel::<IsPrivate>k__BackingField
	bool ___U3CIsPrivateU3Ek__BackingField_5;
	// System.Int32 Photon.Chat.ChatChannel::<LastMsgId>k__BackingField
	int32_t ___U3CLastMsgIdU3Ek__BackingField_6;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Object> Photon.Chat.ChatChannel::properties
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___properties_7;
	// System.Boolean Photon.Chat.ChatChannel::<PublishSubscribers>k__BackingField
	bool ___U3CPublishSubscribersU3Ek__BackingField_8;
	// System.Int32 Photon.Chat.ChatChannel::<MaxSubscribers>k__BackingField
	int32_t ___U3CMaxSubscribersU3Ek__BackingField_9;
	// System.Collections.Generic.HashSet`1<System.String> Photon.Chat.ChatChannel::Subscribers
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___Subscribers_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.Object,System.Object>> Photon.Chat.ChatChannel::usersProperties
	Dictionary_2_t491A326E784F135D7D3DEEA1DBB454F3B03579EF* ___usersProperties_11;
};

// Photon.Voice.DeviceEnumeratorBase
struct DeviceEnumeratorBase_t866AFFCD3150DE40F9B463B9A40DB2EDBE4B1302  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Photon.Voice.DeviceInfo> Photon.Voice.DeviceEnumeratorBase::devices
	List_1_t77900A23BF65F1E318159DF69366A9281EA47E72* ___devices_0;
	// Photon.Voice.ILogger Photon.Voice.DeviceEnumeratorBase::logger
	RuntimeObject* ___logger_1;
	// System.String Photon.Voice.DeviceEnumeratorBase::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_2;
	// System.Action Photon.Voice.DeviceEnumeratorBase::onReady
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onReady_3;
};

// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3  : public RuntimeObject
{
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A* ____parent_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____previous_2;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____next_3;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject* ____annotations_4;
};

// FlutterUnityIntegration.MessageHandler
struct MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187  : public RuntimeObject
{
	// System.Int32 FlutterUnityIntegration.MessageHandler::id
	int32_t ___id_0;
	// System.String FlutterUnityIntegration.MessageHandler::seq
	String_t* ___seq_1;
	// System.String FlutterUnityIntegration.MessageHandler::name
	String_t* ___name_2;
	// Newtonsoft.Json.Linq.JToken FlutterUnityIntegration.MessageHandler::data
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___data_3;
};

// FlutterUnityIntegration.NativeAPI
struct NativeAPI_t95E431F7951EC1718025A4EB8575D6CDCACB64C1  : public RuntimeObject
{
};

// Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions
struct PhotonDemoExtensions_t7BE2FC6C0A2ECFEB8D5F6176847F639D25FBC15B  : public RuntimeObject
{
};

// Photon.Realtime.Player
struct Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C  : public RuntimeObject
{
	// Photon.Realtime.Room Photon.Realtime.Player::<RoomReference>k__BackingField
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* ___U3CRoomReferenceU3Ek__BackingField_0;
	// System.Int32 Photon.Realtime.Player::actorNumber
	int32_t ___actorNumber_1;
	// System.Boolean Photon.Realtime.Player::IsLocal
	bool ___IsLocal_2;
	// System.Boolean Photon.Realtime.Player::<HasRejoined>k__BackingField
	bool ___U3CHasRejoinedU3Ek__BackingField_3;
	// System.String Photon.Realtime.Player::nickName
	String_t* ___nickName_4;
	// System.String Photon.Realtime.Player::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_5;
	// System.Boolean Photon.Realtime.Player::<IsInactive>k__BackingField
	bool ___U3CIsInactiveU3Ek__BackingField_6;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.Player::<CustomProperties>k__BackingField
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___U3CCustomPropertiesU3Ek__BackingField_7;
	// System.Object Photon.Realtime.Player::TagObject
	RuntimeObject* ___TagObject_8;
};

// Photon.Realtime.Region
struct Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A  : public RuntimeObject
{
	// System.String Photon.Realtime.Region::<Code>k__BackingField
	String_t* ___U3CCodeU3Ek__BackingField_0;
	// System.String Photon.Realtime.Region::<Cluster>k__BackingField
	String_t* ___U3CClusterU3Ek__BackingField_1;
	// System.String Photon.Realtime.Region::<HostAndPort>k__BackingField
	String_t* ___U3CHostAndPortU3Ek__BackingField_2;
	// System.Int32 Photon.Realtime.Region::<Ping>k__BackingField
	int32_t ___U3CPingU3Ek__BackingField_3;
};

// Photon.Realtime.RegionHandler
struct RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Photon.Realtime.Region> Photon.Realtime.RegionHandler::<EnabledRegions>k__BackingField
	List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* ___U3CEnabledRegionsU3Ek__BackingField_1;
	// System.String Photon.Realtime.RegionHandler::availableRegionCodes
	String_t* ___availableRegionCodes_2;
	// Photon.Realtime.Region Photon.Realtime.RegionHandler::bestRegionCache
	Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* ___bestRegionCache_3;
	// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger> Photon.Realtime.RegionHandler::pingerList
	List_1_t6F972EAFC64258DD491584080B232EC12BE33581* ___pingerList_4;
	// System.Action`1<Photon.Realtime.RegionHandler> Photon.Realtime.RegionHandler::onCompleteCall
	Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74* ___onCompleteCall_5;
	// System.Int32 Photon.Realtime.RegionHandler::previousPing
	int32_t ___previousPing_6;
	// System.String Photon.Realtime.RegionHandler::previousSummaryProvided
	String_t* ___previousSummaryProvided_7;
	// System.Single Photon.Realtime.RegionHandler::rePingFactor
	float ___rePingFactor_9;
	// System.Single Photon.Realtime.RegionHandler::pingSimilarityFactor
	float ___pingSimilarityFactor_10;
	// System.Int32 Photon.Realtime.RegionHandler::BestRegionSummaryPingLimit
	int32_t ___BestRegionSummaryPingLimit_11;
	// System.Boolean Photon.Realtime.RegionHandler::<IsPinging>k__BackingField
	bool ___U3CIsPingingU3Ek__BackingField_12;
	// System.Boolean Photon.Realtime.RegionHandler::<Aborted>k__BackingField
	bool ___U3CAbortedU3Ek__BackingField_13;
	// Photon.Realtime.MonoBehaviourEmpty Photon.Realtime.RegionHandler::emptyMonoBehavior
	MonoBehaviourEmpty_t8BBCD2C733FF1AA5B134D7290654C2869AA7C2E9* ___emptyMonoBehavior_14;
};

// Photon.Realtime.RoomInfo
struct RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D  : public RuntimeObject
{
	// System.Boolean Photon.Realtime.RoomInfo::RemovedFromList
	bool ___RemovedFromList_0;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::customProperties
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___customProperties_1;
	// System.Int32 Photon.Realtime.RoomInfo::maxPlayers
	int32_t ___maxPlayers_2;
	// System.Int32 Photon.Realtime.RoomInfo::emptyRoomTtl
	int32_t ___emptyRoomTtl_3;
	// System.Int32 Photon.Realtime.RoomInfo::playerTtl
	int32_t ___playerTtl_4;
	// System.String[] Photon.Realtime.RoomInfo::expectedUsers
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___expectedUsers_5;
	// System.Boolean Photon.Realtime.RoomInfo::isOpen
	bool ___isOpen_6;
	// System.Boolean Photon.Realtime.RoomInfo::isVisible
	bool ___isVisible_7;
	// System.Boolean Photon.Realtime.RoomInfo::autoCleanUp
	bool ___autoCleanUp_8;
	// System.String Photon.Realtime.RoomInfo::name
	String_t* ___name_9;
	// System.Int32 Photon.Realtime.RoomInfo::masterClientId
	int32_t ___masterClientId_10;
	// System.String[] Photon.Realtime.RoomInfo::propertiesListedInLobby
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___propertiesListedInLobby_11;
	// System.Int32 Photon.Realtime.RoomInfo::<PlayerCount>k__BackingField
	int32_t ___U3CPlayerCountU3Ek__BackingField_12;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// FlutterUnityIntegration.UnityMessage
struct UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0  : public RuntimeObject
{
	// System.String FlutterUnityIntegration.UnityMessage::name
	String_t* ___name_0;
	// Newtonsoft.Json.Linq.JObject FlutterUnityIntegration.UnityMessage::data
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* ___data_1;
	// System.Action`1<System.Object> FlutterUnityIntegration.UnityMessage::callBack
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___callBack_2;
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

// Photon.Realtime.WebFlags
struct WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA  : public RuntimeObject
{
	// System.Byte Photon.Realtime.WebFlags::WebhookFlags
	uint8_t ___WebhookFlags_1;
};

// Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c
struct U3CU3Ec_t2529E801AE37BB4E2785EDEC5F5739EFC00D054B  : public RuntimeObject
{
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UI.Toggle>
struct KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// Photon.Voice.AudioUtil/ToneAudioReader`1<System.Single>
struct ToneAudioReader_1_tE87A7B87FE140B2223CA4C08A8D346B13D0B7646  : public GeneratorReader_1_tD99454E393183FDDBBDA975E184B516565AF2489
{
	// System.Double Photon.Voice.AudioUtil/ToneAudioReader`1::k
	double ___k_5;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<Photon.Voice.Unity.Demos.DemoVoiceUI.MicType,Photon.Voice.DeviceInfo>
struct UnityEvent_2_t9B3805F2D0A63EC28880E7DC01947289AC34EC74  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// Photon.Voice.Unity.AndroidAudioInParameters
struct AndroidAudioInParameters_t7212C4A7649E84B331F6B2C50AB43A50F4B66D0A 
{
	// System.Boolean Photon.Voice.Unity.AndroidAudioInParameters::EnableAEC
	bool ___EnableAEC_0;
	// System.Boolean Photon.Voice.Unity.AndroidAudioInParameters::EnableAGC
	bool ___EnableAGC_1;
	// System.Boolean Photon.Voice.Unity.AndroidAudioInParameters::EnableNS
	bool ___EnableNS_2;
};
// Native definition for P/Invoke marshalling of Photon.Voice.Unity.AndroidAudioInParameters
struct AndroidAudioInParameters_t7212C4A7649E84B331F6B2C50AB43A50F4B66D0A_marshaled_pinvoke
{
	int32_t ___EnableAEC_0;
	int32_t ___EnableAGC_1;
	int32_t ___EnableNS_2;
};
// Native definition for COM marshalling of Photon.Voice.Unity.AndroidAudioInParameters
struct AndroidAudioInParameters_t7212C4A7649E84B331F6B2C50AB43A50F4B66D0A_marshaled_com
{
	int32_t ___EnableAEC_0;
	int32_t ___EnableAGC_1;
	int32_t ___EnableNS_2;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// Photon.Voice.Unity.AudioInEnumerator
struct AudioInEnumerator_t2A8F43D6245EAB21DAB999CDB56032FAB88FF3E8  : public DeviceEnumeratorBase_t866AFFCD3150DE40F9B463B9A40DB2EDBE4B1302
{
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// Photon.Voice.DeviceInfo
struct DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 
{
	// System.Boolean Photon.Voice.DeviceInfo::<IsDefault>k__BackingField
	bool ___U3CIsDefaultU3Ek__BackingField_0;
	// System.Int32 Photon.Voice.DeviceInfo::<IDInt>k__BackingField
	int32_t ___U3CIDIntU3Ek__BackingField_1;
	// System.String Photon.Voice.DeviceInfo::<IDString>k__BackingField
	String_t* ___U3CIDStringU3Ek__BackingField_2;
	// System.String Photon.Voice.DeviceInfo::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
	// Photon.Voice.DeviceFeatures Photon.Voice.DeviceInfo::features
	DeviceFeatures_t05B3C3BD6FF064A0B655BA147B59195A5DBC3D03* ___features_4;
	// System.Boolean Photon.Voice.DeviceInfo::useStringID
	bool ___useStringID_5;
};
// Native definition for P/Invoke marshalling of Photon.Voice.DeviceInfo
struct DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_marshaled_pinvoke
{
	int32_t ___U3CIsDefaultU3Ek__BackingField_0;
	int32_t ___U3CIDIntU3Ek__BackingField_1;
	char* ___U3CIDStringU3Ek__BackingField_2;
	char* ___U3CNameU3Ek__BackingField_3;
	DeviceFeatures_t05B3C3BD6FF064A0B655BA147B59195A5DBC3D03* ___features_4;
	int32_t ___useStringID_5;
};
// Native definition for COM marshalling of Photon.Voice.DeviceInfo
struct DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_marshaled_com
{
	int32_t ___U3CIsDefaultU3Ek__BackingField_0;
	int32_t ___U3CIDIntU3Ek__BackingField_1;
	Il2CppChar* ___U3CIDStringU3Ek__BackingField_2;
	Il2CppChar* ___U3CNameU3Ek__BackingField_3;
	DeviceFeatures_t05B3C3BD6FF064A0B655BA147B59195A5DBC3D03* ___features_4;
	int32_t ___useStringID_5;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// ExitGames.Client.Photon.Hashtable
struct Hashtable_tD626399B3ADFD501225241D7366103F35472542A  : public Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA
{
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A  : public JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3
{
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_tDBF36F3E2C6B7538106878E1D5A7553C5EA77616* ____listChanged_14;
	// System.ComponentModel.AddingNewEventHandler Newtonsoft.Json.Linq.JContainer::_addingNew
	AddingNewEventHandler_t11C2294D60E10C8BF4CE687A4BEFBB42A24A233C* ____addingNew_15;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject* ____syncRoot_16;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_17;
};

// Photon.Realtime.PhotonPortDefinition
struct PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A 
{
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::NameServerPort
	uint16_t ___NameServerPort_1;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::MasterServerPort
	uint16_t ___MasterServerPort_2;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::GameServerPort
	uint16_t ___GameServerPort_3;
};

// Photon.Realtime.Room
struct Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373  : public RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D
{
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.Room::<LoadBalancingClient>k__BackingField
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___U3CLoadBalancingClientU3Ek__BackingField_13;
	// System.Boolean Photon.Realtime.Room::isOffline
	bool ___isOffline_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player> Photon.Realtime.Room::players
	Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* ___players_15;
	// System.Boolean Photon.Realtime.Room::<BroadcastPropertiesChangeToAll>k__BackingField
	bool ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16;
	// System.Boolean Photon.Realtime.Room::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_17;
	// System.Boolean Photon.Realtime.Room::<SuppressPlayerInfo>k__BackingField
	bool ___U3CSuppressPlayerInfoU3Ek__BackingField_18;
	// System.Boolean Photon.Realtime.Room::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_19;
	// System.Boolean Photon.Realtime.Room::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_20;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// Photon.Voice.AudioOutDelayControl/PlayDelayConfig
struct PlayDelayConfig_t7E2F00F08A8F2A3D47AFDD64347913B6409871E2 
{
	// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::Low
	int32_t ___Low_1;
	// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::High
	int32_t ___High_2;
	// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::Max
	int32_t ___Max_3;
	// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::SpeedUpPerc
	int32_t ___SpeedUpPerc_4;
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.UI.Toggle>
struct Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// Photon.Voice.IOS.AudioSessionCategory
struct AudioSessionCategory_t1C36CB8E4F7F94A6DE2B1D509AD12AF9BA667969 
{
	// System.Int32 Photon.Voice.IOS.AudioSessionCategory::value__
	int32_t ___value___2;
};

// Photon.Voice.IOS.AudioSessionMode
struct AudioSessionMode_tF805910784023C190A8DD567B87F621B9EA11F7D 
{
	// System.Int32 Photon.Voice.IOS.AudioSessionMode::value__
	int32_t ___value___2;
};

// Photon.Realtime.AuthModeOption
struct AuthModeOption_t7CA0F11229CF212E10897F367BEE70D85C01B1EE 
{
	// System.Int32 Photon.Realtime.AuthModeOption::value__
	int32_t ___value___2;
};

// Photon.Chat.ChatDisconnectCause
struct ChatDisconnectCause_t416AC923D326CAA6371223F44ECFE10CC230D3B3 
{
	// System.Int32 Photon.Chat.ChatDisconnectCause::value__
	int32_t ___value___2;
};

// Photon.Chat.ChatState
struct ChatState_t051505084374FEB7E666EAF9C3D7A8DFBA5119D6 
{
	// System.Int32 Photon.Chat.ChatState::value__
	int32_t ___value___2;
};

// Photon.Realtime.ClientAppType
struct ClientAppType_t57C1C7B1D5E0E79122A257020614427275A76B65 
{
	// System.Int32 Photon.Realtime.ClientAppType::value__
	int32_t ___value___2;
};

// Photon.Realtime.ClientState
struct ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3 
{
	// System.Int32 Photon.Realtime.ClientState::value__
	int32_t ___value___2;
};

// Photon.Voice.Codec
struct Codec_t7B215C0B276BF5BE13C5803ADC8928B5E31EF525 
{
	// System.Int32 Photon.Voice.Codec::value__
	int32_t ___value___2;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// ExitGames.Client.Photon.ConnectionProtocol
struct ConnectionProtocol_t5F53E5A9D1B47CD4A9FAE10E5F648DE2596D46F2 
{
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___2;
};

// Photon.Chat.CustomAuthenticationType
struct CustomAuthenticationType_tC787510EF30CF4A491196ABF605F289F38143A15 
{
	// System.Byte Photon.Chat.CustomAuthenticationType::value__
	uint8_t ___value___2;
};

// ExitGames.Client.Photon.DebugLevel
struct DebugLevel_t02AE6C5FD0E09AFE78382E0B5C15DC2223D35D98 
{
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___2;
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

// Photon.Realtime.DisconnectCause
struct DisconnectCause_t2C4E3D34FE0D1842B3C915A63ECCE068B8A258E5 
{
	// System.Int32 Photon.Realtime.DisconnectCause::value__
	int32_t ___value___2;
};

// Photon.Realtime.EncryptionMode
struct EncryptionMode_tD26BF6E736ED3A0AE841EE96A761723407E6FF98 
{
	// System.Int32 Photon.Realtime.EncryptionMode::value__
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

// System.Int32Enum
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.Linq.JObject
struct JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1  : public JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A
{
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t4A44691A9942B8A7AEB4016F7405BF388D1E0632* ____properties_18;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___PropertyChanged_19;
	// System.ComponentModel.PropertyChangingEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanging
	PropertyChangingEventHandler_t9CB57C8239C4A0D29CF45F474FDA4B6163DEBFA8* ___PropertyChanging_20;
};

// Photon.Realtime.JoinMode
struct JoinMode_t5E29863C1CEEF4F49746439E0B228EEA9A4BAE2F 
{
	// System.Byte Photon.Realtime.JoinMode::value__
	uint8_t ___value___2;
};

// Photon.Realtime.JoinType
struct JoinType_t4C989A956DB1EE06BE8CED51A4C9817AB7FB860C 
{
	// System.Int32 Photon.Realtime.JoinType::value__
	int32_t ___value___2;
};

// UnityEngine.KeyCode
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;
};

// UnityEngine.SceneManagement.LoadSceneMode
struct LoadSceneMode_t3E17ADA25A3C4F14ECF6026741219437DA054963 
{
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;
};

// Photon.Realtime.MatchmakingMode
struct MatchmakingMode_tF35D41C1F6F721C08B33225D0E31B28C1DBCC9FB 
{
	// System.Byte Photon.Realtime.MatchmakingMode::value__
	uint8_t ___value___2;
};

// Photon.Voice.Unity.Demos.DemoVoiceUI.MicType
struct MicType_tFB95A35EFA704290AE6B37202232E29ACEB063A1 
{
	// System.Int32 Photon.Voice.Unity.Demos.DemoVoiceUI.MicType::value__
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

// Photon.Pun.PunLogLevel
struct PunLogLevel_t1069D6E4AE1E2C68864CE8DF38BD86D6C1BED877 
{
	// System.Int32 Photon.Pun.PunLogLevel::value__
	int32_t ___value___2;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupID
	int32_t ___sortingGroupID_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupOrder
	int32_t ___sortingGroupOrder_6;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_7;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_8;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};

// POpusCodec.Enums.SamplingRate
struct SamplingRate_t6F0A45CA2592F821B1D6A27E68189B3B26AE3D99 
{
	// System.Int32 POpusCodec.Enums.SamplingRate::value__
	int32_t ___value___2;
};

// Photon.Realtime.ServerConnection
struct ServerConnection_t91F7686050F68425C6517C7AC3225669636DD0CC 
{
	// System.Int32 Photon.Realtime.ServerConnection::value__
	int32_t ___value___2;
};

// UnityEngine.TouchScreenKeyboardType
struct TouchScreenKeyboardType_t3F5A06315B263282460BE67DE01393B6FB3780C1 
{
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059  : public UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A
{
};

// UnityEngine.UI.Image/FillMethod
struct FillMethod_t36837ED12068DF1582CC20489D571B0BCAA7AD19 
{
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Image/Type
struct Type_t81D6F138C2FC745112D5247CD91BD483EDFFC041 
{
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;
};

// UnityEngine.UI.InputField/CharacterValidation
struct CharacterValidation_t5DAA94F9780B40CCF419821363E89B30E2EF7380 
{
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___2;
};

// UnityEngine.UI.InputField/ContentType
struct ContentType_t7E546E516F92E955324D479BB71667931F1A7956 
{
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___2;
};

// UnityEngine.UI.InputField/InputType
struct InputType_t036D7DF2772E6C8C7DB969C7501F6513339572D4 
{
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___2;
};

// UnityEngine.UI.InputField/LineType
struct LineType_tC4DBAA8629361B209A2BA0625320B24FC4566B6B 
{
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___2;
};

// Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector/MicrophoneSelectorEvent
struct MicrophoneSelectorEvent_t8A25F9B1CA111326232C99F82DDA60877DD8F005  : public UnityEvent_2_t9B3805F2D0A63EC28880E7DC01947289AC34EC74
{
};

// UnityEngine.UI.Navigation/Mode
struct Mode_t2D49D0E10E2FDA0026278C2400C16033888D0542 
{
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;
};

// Photon.Voice.OpusCodec/FrameDuration
struct FrameDuration_t7104DAA728B7223945C15F6B0D1C71A945C42DB8 
{
	// System.Int32 Photon.Voice.OpusCodec/FrameDuration::value__
	int32_t ___value___2;
};

// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_t7F40241CC7C406EBD574D426F736CB744DE86CDA 
{
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;
};

// Photon.Voice.Unity.Recorder/InputSourceType
struct InputSourceType_tEDDE5F70584035993A2D5757BB3A9331F6CA86A4 
{
	// System.Int32 Photon.Voice.Unity.Recorder/InputSourceType::value__
	int32_t ___value___2;
};

// Photon.Voice.Unity.Recorder/MicType
struct MicType_t72AD794BBCFD7E7B0D069950F4ACABB93006B95C 
{
	// System.Int32 Photon.Voice.Unity.Recorder/MicType::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Selectable/Transition
struct Transition_tF856A77C9FAC6D26EA3CA158CF68B739D35397B3 
{
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Slider/Direction
struct Direction_t4C81D17BB6C089A0EC1C4934525B86E75E693EFA 
{
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// UnityEngine.UI.Toggle/ToggleTransition
struct ToggleTransition_tCE3F3757423A29F22112989C6B4D087850A13ED7 
{
	// System.Int32 UnityEngine.UI.Toggle/ToggleTransition::value__
	int32_t ___value___2;
};

// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol>
struct Nullable_1_tC61504D4999670A5A2480A3B5CB4AC8A71EEE32E 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	uint8_t ___value_1;
};

// System.Nullable`1<System.Int32Enum>
struct Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Photon.Voice.Unity.Recorder/MicType>
struct Nullable_1_t64073E86A2DD4799806C11B9AB91647392F7B8EB 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// Photon.Realtime.AppSettings
struct AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7  : public RuntimeObject
{
	// System.String Photon.Realtime.AppSettings::AppIdRealtime
	String_t* ___AppIdRealtime_0;
	// System.String Photon.Realtime.AppSettings::AppIdFusion
	String_t* ___AppIdFusion_1;
	// System.String Photon.Realtime.AppSettings::AppIdChat
	String_t* ___AppIdChat_2;
	// System.String Photon.Realtime.AppSettings::AppIdVoice
	String_t* ___AppIdVoice_3;
	// System.String Photon.Realtime.AppSettings::AppVersion
	String_t* ___AppVersion_4;
	// System.Boolean Photon.Realtime.AppSettings::UseNameServer
	bool ___UseNameServer_5;
	// System.String Photon.Realtime.AppSettings::FixedRegion
	String_t* ___FixedRegion_6;
	// System.String Photon.Realtime.AppSettings::BestRegionSummaryFromStorage
	String_t* ___BestRegionSummaryFromStorage_7;
	// System.String Photon.Realtime.AppSettings::Server
	String_t* ___Server_8;
	// System.Int32 Photon.Realtime.AppSettings::Port
	int32_t ___Port_9;
	// System.String Photon.Realtime.AppSettings::ProxyServer
	String_t* ___ProxyServer_10;
	// ExitGames.Client.Photon.ConnectionProtocol Photon.Realtime.AppSettings::Protocol
	uint8_t ___Protocol_11;
	// System.Boolean Photon.Realtime.AppSettings::EnableProtocolFallback
	bool ___EnableProtocolFallback_12;
	// Photon.Realtime.AuthModeOption Photon.Realtime.AppSettings::AuthMode
	int32_t ___AuthMode_13;
	// System.Boolean Photon.Realtime.AppSettings::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_14;
	// ExitGames.Client.Photon.DebugLevel Photon.Realtime.AppSettings::NetworkLogging
	uint8_t ___NetworkLogging_15;
};

// Photon.Voice.IOS.AudioSessionParameters
struct AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37 
{
	// Photon.Voice.IOS.AudioSessionCategory Photon.Voice.IOS.AudioSessionParameters::Category
	int32_t ___Category_0;
	// Photon.Voice.IOS.AudioSessionMode Photon.Voice.IOS.AudioSessionParameters::Mode
	int32_t ___Mode_1;
	// Photon.Voice.IOS.AudioSessionCategoryOption[] Photon.Voice.IOS.AudioSessionParameters::CategoryOptions
	AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* ___CategoryOptions_2;
};
// Native definition for P/Invoke marshalling of Photon.Voice.IOS.AudioSessionParameters
struct AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshaled_pinvoke
{
	int32_t ___Category_0;
	int32_t ___Mode_1;
	int32_t* ___CategoryOptions_2;
};
// Native definition for COM marshalling of Photon.Voice.IOS.AudioSessionParameters
struct AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshaled_com
{
	int32_t ___Category_0;
	int32_t ___Mode_1;
	int32_t* ___CategoryOptions_2;
};

// Photon.Chat.AuthenticationValues
struct AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C  : public RuntimeObject
{
	// Photon.Chat.CustomAuthenticationType Photon.Chat.AuthenticationValues::authType
	uint8_t ___authType_0;
	// System.String Photon.Chat.AuthenticationValues::<AuthGetParameters>k__BackingField
	String_t* ___U3CAuthGetParametersU3Ek__BackingField_1;
	// System.Object Photon.Chat.AuthenticationValues::<AuthPostData>k__BackingField
	RuntimeObject* ___U3CAuthPostDataU3Ek__BackingField_2;
	// System.Object Photon.Chat.AuthenticationValues::<Token>k__BackingField
	RuntimeObject* ___U3CTokenU3Ek__BackingField_3;
	// System.String Photon.Chat.AuthenticationValues::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;
};

// Photon.Chat.ChatAppSettings
struct ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689  : public RuntimeObject
{
	// System.String Photon.Chat.ChatAppSettings::AppIdChat
	String_t* ___AppIdChat_0;
	// System.String Photon.Chat.ChatAppSettings::AppVersion
	String_t* ___AppVersion_1;
	// System.String Photon.Chat.ChatAppSettings::FixedRegion
	String_t* ___FixedRegion_2;
	// System.String Photon.Chat.ChatAppSettings::Server
	String_t* ___Server_3;
	// System.UInt16 Photon.Chat.ChatAppSettings::Port
	uint16_t ___Port_4;
	// System.String Photon.Chat.ChatAppSettings::ProxyServer
	String_t* ___ProxyServer_5;
	// ExitGames.Client.Photon.ConnectionProtocol Photon.Chat.ChatAppSettings::Protocol
	uint8_t ___Protocol_6;
	// System.Boolean Photon.Chat.ChatAppSettings::EnableProtocolFallback
	bool ___EnableProtocolFallback_7;
	// ExitGames.Client.Photon.DebugLevel Photon.Chat.ChatAppSettings::NetworkLogging
	uint8_t ___NetworkLogging_8;
};

// Photon.Chat.ChatClient
struct ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA  : public RuntimeObject
{
	// System.Boolean Photon.Chat.ChatClient::<EnableProtocolFallback>k__BackingField
	bool ___U3CEnableProtocolFallbackU3Ek__BackingField_3;
	// System.String Photon.Chat.ChatClient::<NameServerAddress>k__BackingField
	String_t* ___U3CNameServerAddressU3Ek__BackingField_4;
	// System.String Photon.Chat.ChatClient::<FrontendAddress>k__BackingField
	String_t* ___U3CFrontendAddressU3Ek__BackingField_5;
	// System.String Photon.Chat.ChatClient::chatRegion
	String_t* ___chatRegion_6;
	// System.String Photon.Chat.ChatClient::ProxyServerAddress
	String_t* ___ProxyServerAddress_7;
	// Photon.Chat.ChatState Photon.Chat.ChatClient::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_8;
	// Photon.Chat.ChatDisconnectCause Photon.Chat.ChatClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_9;
	// System.String Photon.Chat.ChatClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_10;
	// System.String Photon.Chat.ChatClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_11;
	// Photon.Chat.AuthenticationValues Photon.Chat.ChatClient::<AuthValues>k__BackingField
	AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* ___U3CAuthValuesU3Ek__BackingField_12;
	// System.Int32 Photon.Chat.ChatClient::MessageLimit
	int32_t ___MessageLimit_13;
	// System.Int32 Photon.Chat.ChatClient::PrivateChatHistoryLength
	int32_t ___PrivateChatHistoryLength_14;
	// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel> Photon.Chat.ChatClient::PublicChannels
	Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E* ___PublicChannels_15;
	// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel> Photon.Chat.ChatClient::PrivateChannels
	Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E* ___PrivateChannels_16;
	// System.Collections.Generic.HashSet`1<System.String> Photon.Chat.ChatClient::PublicChannelsUnsubscribing
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___PublicChannelsUnsubscribing_17;
	// Photon.Chat.IChatClientListener Photon.Chat.ChatClient::listener
	RuntimeObject* ___listener_18;
	// Photon.Chat.ChatPeer Photon.Chat.ChatClient::chatPeer
	ChatPeer_t216E56C8D1791380415477470013A3787DF76D43* ___chatPeer_19;
	// System.Boolean Photon.Chat.ChatClient::didAuthenticate
	bool ___didAuthenticate_21;
	// System.Nullable`1<System.Int32> Photon.Chat.ChatClient::statusToSetWhenConnected
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___statusToSetWhenConnected_22;
	// System.Object Photon.Chat.ChatClient::messageToSetWhenConnected
	RuntimeObject* ___messageToSetWhenConnected_23;
	// System.Int32 Photon.Chat.ChatClient::msDeltaForServiceCalls
	int32_t ___msDeltaForServiceCalls_24;
	// System.Int32 Photon.Chat.ChatClient::msTimestampOfLastServiceCall
	int32_t ___msTimestampOfLastServiceCall_25;
	// System.Boolean Photon.Chat.ChatClient::<UseBackgroundWorkerForSending>k__BackingField
	bool ___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_26;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9  : public RuntimeObject
{
	// System.String Photon.Realtime.EnterRoomParams::RoomName
	String_t* ___RoomName_0;
	// Photon.Realtime.RoomOptions Photon.Realtime.EnterRoomParams::RoomOptions
	RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* ___RoomOptions_1;
	// Photon.Realtime.TypedLobby Photon.Realtime.EnterRoomParams::Lobby
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___Lobby_2;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.EnterRoomParams::PlayerProperties
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___PlayerProperties_3;
	// System.Boolean Photon.Realtime.EnterRoomParams::OnGameServer
	bool ___OnGameServer_4;
	// Photon.Realtime.JoinMode Photon.Realtime.EnterRoomParams::JoinMode
	uint8_t ___JoinMode_5;
	// System.String[] Photon.Realtime.EnterRoomParams::ExpectedUsers
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___ExpectedUsers_6;
	// System.Object Photon.Realtime.EnterRoomParams::Ticket
	RuntimeObject* ___Ticket_7;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef
struct MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B 
{
	// Photon.Voice.Unity.Demos.DemoVoiceUI.MicType Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef::MicType
	int32_t ___MicType_0;
	// Photon.Voice.DeviceInfo Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef::Device
	DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 ___Device_1;
};
// Native definition for P/Invoke marshalling of Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef
struct MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B_marshaled_pinvoke
{
	int32_t ___MicType_0;
	DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_marshaled_pinvoke ___Device_1;
};
// Native definition for COM marshalling of Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef
struct MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B_marshaled_com
{
	int32_t ___MicType_0;
	DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_marshaled_com ___Device_1;
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// Photon.Realtime.OpJoinRandomRoomParams
struct OpJoinRandomRoomParams_t5DCB0B5EBE3D5C35A483669A8D997D47E17D6DBA  : public RuntimeObject
{
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.OpJoinRandomRoomParams::ExpectedCustomRoomProperties
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___ExpectedCustomRoomProperties_0;
	// System.Int32 Photon.Realtime.OpJoinRandomRoomParams::ExpectedMaxPlayers
	int32_t ___ExpectedMaxPlayers_1;
	// Photon.Realtime.MatchmakingMode Photon.Realtime.OpJoinRandomRoomParams::MatchingType
	uint8_t ___MatchingType_2;
	// Photon.Realtime.TypedLobby Photon.Realtime.OpJoinRandomRoomParams::TypedLobby
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___TypedLobby_3;
	// System.String Photon.Realtime.OpJoinRandomRoomParams::SqlLobbyFilter
	String_t* ___SqlLobbyFilter_4;
	// System.String[] Photon.Realtime.OpJoinRandomRoomParams::ExpectedUsers
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___ExpectedUsers_5;
	// System.Object Photon.Realtime.OpJoinRandomRoomParams::Ticket
	RuntimeObject* ___Ticket_6;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
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

// Photon.Voice.VoiceInfo
struct VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 
{
	// Photon.Voice.Codec Photon.Voice.VoiceInfo::<Codec>k__BackingField
	int32_t ___U3CCodecU3Ek__BackingField_0;
	// System.Int32 Photon.Voice.VoiceInfo::<SamplingRate>k__BackingField
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	// System.Int32 Photon.Voice.VoiceInfo::<Channels>k__BackingField
	int32_t ___U3CChannelsU3Ek__BackingField_2;
	// System.Int32 Photon.Voice.VoiceInfo::<FrameDurationUs>k__BackingField
	int32_t ___U3CFrameDurationUsU3Ek__BackingField_3;
	// System.Int32 Photon.Voice.VoiceInfo::<Bitrate>k__BackingField
	int32_t ___U3CBitrateU3Ek__BackingField_4;
	// System.Int32 Photon.Voice.VoiceInfo::<Width>k__BackingField
	int32_t ___U3CWidthU3Ek__BackingField_5;
	// System.Int32 Photon.Voice.VoiceInfo::<Height>k__BackingField
	int32_t ___U3CHeightU3Ek__BackingField_6;
	// System.Int32 Photon.Voice.VoiceInfo::<FPS>k__BackingField
	int32_t ___U3CFPSU3Ek__BackingField_7;
	// System.Int32 Photon.Voice.VoiceInfo::<KeyFrameInt>k__BackingField
	int32_t ___U3CKeyFrameIntU3Ek__BackingField_8;
	// System.Object Photon.Voice.VoiceInfo::<UserData>k__BackingField
	RuntimeObject* ___U3CUserDataU3Ek__BackingField_9;
};
// Native definition for P/Invoke marshalling of Photon.Voice.VoiceInfo
struct VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404_marshaled_pinvoke
{
	int32_t ___U3CCodecU3Ek__BackingField_0;
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	int32_t ___U3CChannelsU3Ek__BackingField_2;
	int32_t ___U3CFrameDurationUsU3Ek__BackingField_3;
	int32_t ___U3CBitrateU3Ek__BackingField_4;
	int32_t ___U3CWidthU3Ek__BackingField_5;
	int32_t ___U3CHeightU3Ek__BackingField_6;
	int32_t ___U3CFPSU3Ek__BackingField_7;
	int32_t ___U3CKeyFrameIntU3Ek__BackingField_8;
	Il2CppIUnknown* ___U3CUserDataU3Ek__BackingField_9;
};
// Native definition for COM marshalling of Photon.Voice.VoiceInfo
struct VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404_marshaled_com
{
	int32_t ___U3CCodecU3Ek__BackingField_0;
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	int32_t ___U3CChannelsU3Ek__BackingField_2;
	int32_t ___U3CFrameDurationUsU3Ek__BackingField_3;
	int32_t ___U3CBitrateU3Ek__BackingField_4;
	int32_t ___U3CWidthU3Ek__BackingField_5;
	int32_t ___U3CHeightU3Ek__BackingField_6;
	int32_t ___U3CFPSU3Ek__BackingField_7;
	int32_t ___U3CKeyFrameIntU3Ek__BackingField_8;
	Il2CppIUnknown* ___U3CUserDataU3Ek__BackingField_9;
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<Photon.Realtime.RegionHandler>
struct Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74  : public MulticastDelegate_t
{
};

// System.Func`1<System.Double>
struct Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4  : public RuntimeObject
{
	// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::<LoadBalancingPeer>k__BackingField
	LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* ___U3CLoadBalancingPeerU3Ek__BackingField_0;
	// System.String Photon.Realtime.LoadBalancingClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_1;
	// System.String Photon.Realtime.LoadBalancingClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_2;
	// Photon.Realtime.ClientAppType Photon.Realtime.LoadBalancingClient::<ClientType>k__BackingField
	int32_t ___U3CClientTypeU3Ek__BackingField_3;
	// Photon.Realtime.AuthenticationValues Photon.Realtime.LoadBalancingClient::<AuthValues>k__BackingField
	AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* ___U3CAuthValuesU3Ek__BackingField_4;
	// Photon.Realtime.AuthModeOption Photon.Realtime.LoadBalancingClient::AuthMode
	int32_t ___AuthMode_5;
	// Photon.Realtime.EncryptionMode Photon.Realtime.LoadBalancingClient::EncryptionMode
	int32_t ___EncryptionMode_6;
	// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol> Photon.Realtime.LoadBalancingClient::<ExpectedProtocol>k__BackingField
	Nullable_1_tC61504D4999670A5A2480A3B5CB4AC8A71EEE32E ___U3CExpectedProtocolU3Ek__BackingField_7;
	// System.Object Photon.Realtime.LoadBalancingClient::tokenCache
	RuntimeObject* ___tokenCache_8;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_9;
	// System.String Photon.Realtime.LoadBalancingClient::NameServerHost
	String_t* ___NameServerHost_10;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<UseAlternativeUdpPorts>k__BackingField
	bool ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12;
	// Photon.Realtime.PhotonPortDefinition Photon.Realtime.LoadBalancingClient::ServerPortOverrides
	PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A ___ServerPortOverrides_13;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<EnableProtocolFallback>k__BackingField
	bool ___U3CEnableProtocolFallbackU3Ek__BackingField_14;
	// System.String Photon.Realtime.LoadBalancingClient::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField_15;
	// System.String Photon.Realtime.LoadBalancingClient::<GameServerAddress>k__BackingField
	String_t* ___U3CGameServerAddressU3Ek__BackingField_16;
	// Photon.Realtime.ServerConnection Photon.Realtime.LoadBalancingClient::<Server>k__BackingField
	int32_t ___U3CServerU3Ek__BackingField_17;
	// System.String Photon.Realtime.LoadBalancingClient::ProxyServerAddress
	String_t* ___ProxyServerAddress_18;
	// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::state
	int32_t ___state_19;
	// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState> Photon.Realtime.LoadBalancingClient::StateChanged
	Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* ___StateChanged_20;
	// System.Action`1<ExitGames.Client.Photon.EventData> Photon.Realtime.LoadBalancingClient::EventReceived
	Action_1_t1B5115AA4265AE1C83F3EC48593F86230AF07295* ___EventReceived_21;
	// System.Action`1<ExitGames.Client.Photon.OperationResponse> Photon.Realtime.LoadBalancingClient::OpResponseReceived
	Action_1_t3A1DE9227396F3C161EEABEA4147808A86558826* ___OpResponseReceived_22;
	// Photon.Realtime.ConnectionCallbacksContainer Photon.Realtime.LoadBalancingClient::ConnectionCallbackTargets
	ConnectionCallbacksContainer_t4E9F72F713D87B67F0CA63162CFC7D100554BFFD* ___ConnectionCallbackTargets_23;
	// Photon.Realtime.MatchMakingCallbacksContainer Photon.Realtime.LoadBalancingClient::MatchMakingCallbackTargets
	MatchMakingCallbacksContainer_tEDF984018478E15D3031775F859CD94D66275C97* ___MatchMakingCallbackTargets_24;
	// Photon.Realtime.InRoomCallbacksContainer Photon.Realtime.LoadBalancingClient::InRoomCallbackTargets
	InRoomCallbacksContainer_t7730C9DD20B72CC201052C5E6FC914E6FD4B1488* ___InRoomCallbackTargets_25;
	// Photon.Realtime.LobbyCallbacksContainer Photon.Realtime.LoadBalancingClient::LobbyCallbackTargets
	LobbyCallbacksContainer_tEF75E5B06B44AD5DE298FA7C597901BAE1E352FC* ___LobbyCallbackTargets_26;
	// Photon.Realtime.WebRpcCallbacksContainer Photon.Realtime.LoadBalancingClient::WebRpcCallbackTargets
	WebRpcCallbacksContainer_t88E62A57DFEECEC90CE6EC40A270C0C188AD1851* ___WebRpcCallbackTargets_27;
	// Photon.Realtime.ErrorInfoCallbacksContainer Photon.Realtime.LoadBalancingClient::ErrorInfoCallbackTargets
	ErrorInfoCallbacksContainer_tF60CA97691A86635843C02EEA1D689A384BC7ED7* ___ErrorInfoCallbackTargets_28;
	// Photon.Realtime.DisconnectCause Photon.Realtime.LoadBalancingClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_29;
	// Photon.Realtime.SystemConnectionSummary Photon.Realtime.LoadBalancingClient::SystemConnectionSummary
	SystemConnectionSummary_t42DEF00A80373BAC571B4CCF960BB85E7155819A* ___SystemConnectionSummary_30;
	// Photon.Realtime.TypedLobby Photon.Realtime.LoadBalancingClient::<CurrentLobby>k__BackingField
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___U3CCurrentLobbyU3Ek__BackingField_31;
	// System.Boolean Photon.Realtime.LoadBalancingClient::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_32;
	// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo> Photon.Realtime.LoadBalancingClient::lobbyStatistics
	List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15* ___lobbyStatistics_33;
	// Photon.Realtime.Player Photon.Realtime.LoadBalancingClient::<LocalPlayer>k__BackingField
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___U3CLocalPlayerU3Ek__BackingField_34;
	// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::<CurrentRoom>k__BackingField
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* ___U3CCurrentRoomU3Ek__BackingField_35;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersOnMasterCount>k__BackingField
	int32_t ___U3CPlayersOnMasterCountU3Ek__BackingField_36;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersInRoomsCount>k__BackingField
	int32_t ___U3CPlayersInRoomsCountU3Ek__BackingField_37;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<RoomsCount>k__BackingField
	int32_t ___U3CRoomsCountU3Ek__BackingField_38;
	// Photon.Realtime.JoinType Photon.Realtime.LoadBalancingClient::lastJoinType
	int32_t ___lastJoinType_39;
	// Photon.Realtime.EnterRoomParams Photon.Realtime.LoadBalancingClient::enterRoomParamsCache
	EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* ___enterRoomParamsCache_40;
	// ExitGames.Client.Photon.OperationResponse Photon.Realtime.LoadBalancingClient::failedRoomEntryOperation
	OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* ___failedRoomEntryOperation_41;
	// System.String[] Photon.Realtime.LoadBalancingClient::friendListRequested
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___friendListRequested_43;
	// System.String Photon.Realtime.LoadBalancingClient::<CloudRegion>k__BackingField
	String_t* ___U3CCloudRegionU3Ek__BackingField_44;
	// System.String Photon.Realtime.LoadBalancingClient::<CurrentCluster>k__BackingField
	String_t* ___U3CCurrentClusterU3Ek__BackingField_45;
	// Photon.Realtime.RegionHandler Photon.Realtime.LoadBalancingClient::RegionHandler
	RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* ___RegionHandler_46;
	// System.String Photon.Realtime.LoadBalancingClient::bestRegionSummaryFromStorage
	String_t* ___bestRegionSummaryFromStorage_47;
	// System.String Photon.Realtime.LoadBalancingClient::SummaryToCache
	String_t* ___SummaryToCache_48;
	// System.Boolean Photon.Realtime.LoadBalancingClient::connectToBestRegion
	bool ___connectToBestRegion_49;
	// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange> Photon.Realtime.LoadBalancingClient::callbackTargetChanges
	Queue_1_t9BA80EF655597EC91F8BA37831960B5B70540B02* ___callbackTargetChanges_50;
	// System.Collections.Generic.HashSet`1<System.Object> Photon.Realtime.LoadBalancingClient::callbackTargets
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___callbackTargets_51;
	// System.Int32 Photon.Realtime.LoadBalancingClient::NameServerPortInAppSettings
	int32_t ___NameServerPortInAppSettings_52;
};

// Photon.Voice.Unity.RemoteVoiceLink
struct RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4  : public RuntimeObject
{
	// Photon.Voice.VoiceInfo Photon.Voice.Unity.RemoteVoiceLink::VoiceInfo
	VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 ___VoiceInfo_0;
	// System.Int32 Photon.Voice.Unity.RemoteVoiceLink::PlayerId
	int32_t ___PlayerId_1;
	// System.Byte Photon.Voice.Unity.RemoteVoiceLink::VoiceId
	uint8_t ___VoiceId_2;
	// System.Int32 Photon.Voice.Unity.RemoteVoiceLink::ChannelId
	int32_t ___ChannelId_3;
	// System.Action`1<Photon.Voice.FrameOut`1<System.Single>> Photon.Voice.Unity.RemoteVoiceLink::FloatFrameDecoded
	Action_1_t4B5244A7D75171D94BEAE3074BB3625987C5AE84* ___FloatFrameDecoded_4;
	// System.Action Photon.Voice.Unity.RemoteVoiceLink::RemoteVoiceRemoved
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___RemoteVoiceRemoved_5;
	// System.String Photon.Voice.Unity.RemoteVoiceLink::cached
	String_t* ___cached_6;
};

// Photon.Pun.ServerSettings
struct ServerSettings_t41BE4338E7E76BFB4919D4039BAFC6799E242152  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Photon.Realtime.AppSettings Photon.Pun.ServerSettings::AppSettings
	AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* ___AppSettings_4;
	// System.String Photon.Pun.ServerSettings::DevRegion
	String_t* ___DevRegion_5;
	// Photon.Pun.PunLogLevel Photon.Pun.ServerSettings::PunLogging
	int32_t ___PunLogging_6;
	// System.Boolean Photon.Pun.ServerSettings::EnableSupportLogger
	bool ___EnableSupportLogger_7;
	// System.Boolean Photon.Pun.ServerSettings::RunInBackground
	bool ___RunInBackground_8;
	// System.Boolean Photon.Pun.ServerSettings::StartInOfflineMode
	bool ___StartInOfflineMode_9;
	// System.Collections.Generic.List`1<System.String> Photon.Pun.ServerSettings::RpcList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___RpcList_10;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// FlutterUnityIntegration.UnityMessageManager/MessageDelegate
struct MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9  : public MulticastDelegate_t
{
};

// FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate
struct MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7  : public MulticastDelegate_t
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Photon.Voice.LoadBalancingTransport
struct LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80  : public LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4
{
	// Photon.Voice.VoiceClient Photon.Voice.LoadBalancingTransport::voiceClient
	VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* ___voiceClient_54;
	// Photon.Voice.PhotonTransportProtocol Photon.Voice.LoadBalancingTransport::protocol
	PhotonTransportProtocol_tDBD08C0E3F1F28676B0573F86D9BC19564FCA700* ___protocol_55;
	// System.Boolean Photon.Voice.LoadBalancingTransport::cppCompatibilityMode
	bool ___cppCompatibilityMode_56;
	// Photon.Voice.ILogger Photon.Voice.LoadBalancingTransport::logger
	RuntimeObject* ___logger_57;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// FlutterUnityIntegration.SingletonMonoBehaviour`1<FlutterUnityIntegration.UnityMessageManager>
struct SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Photon.Chat.Demo.ChannelSelector
struct ChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Photon.Chat.Demo.ChannelSelector::Channel
	String_t* ___Channel_4;
};

// Photon.Chat.Demo.ChatAppIdCheckerUI
struct ChatAppIdCheckerUI_t43522738EEA1186C60A64B652B157BC5FA4FC22D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Photon.Chat.Demo.ChatAppIdCheckerUI::Description
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Description_4;
	// System.Boolean Photon.Chat.Demo.ChatAppIdCheckerUI::WizardOpenedOnce
	bool ___WizardOpenedOnce_5;
};

// Photon.Chat.Demo.ChatGui
struct ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String[] Photon.Chat.Demo.ChatGui::ChannelsToJoinOnConnect
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___ChannelsToJoinOnConnect_4;
	// System.String[] Photon.Chat.Demo.ChatGui::FriendsList
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___FriendsList_5;
	// System.Int32 Photon.Chat.Demo.ChatGui::HistoryLengthToFetch
	int32_t ___HistoryLengthToFetch_6;
	// System.String Photon.Chat.Demo.ChatGui::<UserName>k__BackingField
	String_t* ___U3CUserNameU3Ek__BackingField_7;
	// System.String Photon.Chat.Demo.ChatGui::selectedChannelName
	String_t* ___selectedChannelName_8;
	// Photon.Chat.ChatClient Photon.Chat.Demo.ChatGui::chatClient
	ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* ___chatClient_9;
	// Photon.Chat.ChatAppSettings Photon.Chat.Demo.ChatGui::chatAppSettings
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* ___chatAppSettings_10;
	// UnityEngine.GameObject Photon.Chat.Demo.ChatGui::missingAppIdErrorPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___missingAppIdErrorPanel_11;
	// UnityEngine.GameObject Photon.Chat.Demo.ChatGui::ConnectingLabel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ConnectingLabel_12;
	// UnityEngine.RectTransform Photon.Chat.Demo.ChatGui::ChatPanel
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___ChatPanel_13;
	// UnityEngine.GameObject Photon.Chat.Demo.ChatGui::UserIdFormPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___UserIdFormPanel_14;
	// UnityEngine.UI.InputField Photon.Chat.Demo.ChatGui::InputFieldChat
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___InputFieldChat_15;
	// UnityEngine.UI.Text Photon.Chat.Demo.ChatGui::CurrentChannelText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___CurrentChannelText_16;
	// UnityEngine.UI.Toggle Photon.Chat.Demo.ChatGui::ChannelToggleToInstantiate
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___ChannelToggleToInstantiate_17;
	// UnityEngine.GameObject Photon.Chat.Demo.ChatGui::FriendListUiItemtoInstantiate
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___FriendListUiItemtoInstantiate_18;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle> Photon.Chat.Demo.ChatGui::channelToggles
	Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* ___channelToggles_19;
	// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.Demo.FriendItem> Photon.Chat.Demo.ChatGui::friendListItemLUT
	Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E* ___friendListItemLUT_20;
	// System.Boolean Photon.Chat.Demo.ChatGui::ShowState
	bool ___ShowState_21;
	// UnityEngine.GameObject Photon.Chat.Demo.ChatGui::Title
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Title_22;
	// UnityEngine.UI.Text Photon.Chat.Demo.ChatGui::StateText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___StateText_23;
	// UnityEngine.UI.Text Photon.Chat.Demo.ChatGui::UserIdText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___UserIdText_24;
	// System.Int32 Photon.Chat.Demo.ChatGui::TestLength
	int32_t ___TestLength_26;
	// System.Byte[] Photon.Chat.Demo.ChatGui::testBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___testBytes_27;
};

// Photon.Realtime.Demo.ConnectAndJoinRandomLb
struct ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Realtime.AppSettings Photon.Realtime.Demo.ConnectAndJoinRandomLb::appSettings
	AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* ___appSettings_4;
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.Demo.ConnectAndJoinRandomLb::lbc
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___lbc_5;
	// Photon.Realtime.ConnectionHandler Photon.Realtime.Demo.ConnectAndJoinRandomLb::ch
	ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* ___ch_6;
	// UnityEngine.UI.Text Photon.Realtime.Demo.ConnectAndJoinRandomLb::StateUiText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___StateUiText_7;
};

// Photon.Realtime.ConnectionHandler
struct ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.ConnectionHandler::<Client>k__BackingField
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___U3CClientU3Ek__BackingField_4;
	// System.Boolean Photon.Realtime.ConnectionHandler::DisconnectAfterKeepAlive
	bool ___DisconnectAfterKeepAlive_5;
	// System.Int32 Photon.Realtime.ConnectionHandler::KeepAliveInBackground
	int32_t ___KeepAliveInBackground_6;
	// System.Int32 Photon.Realtime.ConnectionHandler::<CountSendAcksOnly>k__BackingField
	int32_t ___U3CCountSendAcksOnlyU3Ek__BackingField_7;
	// System.Boolean Photon.Realtime.ConnectionHandler::<FallbackThreadRunning>k__BackingField
	bool ___U3CFallbackThreadRunningU3Ek__BackingField_8;
	// System.Boolean Photon.Realtime.ConnectionHandler::ApplyDontDestroyOnLoad
	bool ___ApplyDontDestroyOnLoad_9;
	// System.Boolean Photon.Realtime.ConnectionHandler::didSendAcks
	bool ___didSendAcks_15;
	// System.Diagnostics.Stopwatch Photon.Realtime.ConnectionHandler::backgroundStopwatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___backgroundStopwatch_16;
	// System.Threading.Timer Photon.Realtime.ConnectionHandler::stateTimer
	Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* ___stateTimer_17;
};

// Photon.Chat.UtilityScripts.EventSystemSpawner
struct EventSystemSpawner_t823C33A21E4332F5D407768DB424BBDB0D17C77D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Photon.Chat.Demo.FriendItem
struct FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Photon.Chat.Demo.FriendItem::NameLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___NameLabel_4;
	// UnityEngine.UI.Text Photon.Chat.Demo.FriendItem::StatusLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___StatusLabel_5;
	// UnityEngine.UI.Text Photon.Chat.Demo.FriendItem::Health
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Health_6;
};

// Photon.Chat.Demo.IgnoreUiRaycastWhenInactive
struct IgnoreUiRaycastWhenInactive_t4DD606784A41379E617458D4FF2D041690E7BAEF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Photon.Chat.Demo.NamePickGui
struct NamePickGui_t8C0368B20268692BC4311641FC79610CCD7FB56B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Chat.Demo.ChatGui Photon.Chat.Demo.NamePickGui::chatNewComponent
	ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* ___chatNewComponent_5;
	// UnityEngine.UI.InputField Photon.Chat.Demo.NamePickGui::idInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___idInput_6;
};

// Photon.Chat.UtilityScripts.OnStartDelete
struct OnStartDelete_tAFE941550E5B7D4F434D3BB2D00C0D93610BDC11  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI
struct RemoteSpeakerUI_t16CA1BA6C6B7F673E5A2F6C3262768298ACB2728  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::nameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___nameText_4;
	// UnityEngine.UI.Image Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::remoteIsMuting
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___remoteIsMuting_5;
	// UnityEngine.UI.Image Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::remoteIsTalking
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___remoteIsTalking_6;
	// UnityEngine.UI.InputField Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::playDelayInputField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___playDelayInputField_7;
	// UnityEngine.UI.Text Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::bufferLagText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___bufferLagText_8;
	// UnityEngine.UI.Slider Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::volumeSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___volumeSlider_9;
	// UnityEngine.UI.Text Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::photonVad
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___photonVad_10;
	// UnityEngine.UI.Text Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::webrtcVad
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___webrtcVad_11;
	// UnityEngine.UI.Text Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::aec
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___aec_12;
	// UnityEngine.UI.Text Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::agc
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___agc_13;
	// UnityEngine.UI.Text Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::mic
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___mic_14;
	// Photon.Voice.Unity.Speaker Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::speaker
	Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* ___speaker_15;
	// UnityEngine.AudioSource Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_16;
	// Photon.Voice.Unity.VoiceConnection Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::voiceConnection
	VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* ___voiceConnection_17;
	// Photon.Realtime.LoadBalancingClient Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::loadBalancingClient
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___loadBalancingClient_18;
	// System.Int32 Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::smoothedLag
	int32_t ___smoothedLag_19;
};

// Photon.Chat.UtilityScripts.TextButtonTransition
struct TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Photon.Chat.UtilityScripts.TextButtonTransition::_text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____text_4;
	// UnityEngine.UI.Selectable Photon.Chat.UtilityScripts.TextButtonTransition::Selectable
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___Selectable_5;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextButtonTransition::NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___NormalColor_6;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextButtonTransition::HoverColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___HoverColor_7;
};

// Photon.Chat.UtilityScripts.TextToggleIsOnTransition
struct TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Toggle Photon.Chat.UtilityScripts.TextToggleIsOnTransition::toggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggle_4;
	// UnityEngine.UI.Text Photon.Chat.UtilityScripts.TextToggleIsOnTransition::_text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____text_5;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextToggleIsOnTransition::NormalOnColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___NormalOnColor_6;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextToggleIsOnTransition::NormalOffColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___NormalOffColor_7;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextToggleIsOnTransition::HoverOnColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___HoverOnColor_8;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextToggleIsOnTransition::HoverOffColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___HoverOffColor_9;
	// System.Boolean Photon.Chat.UtilityScripts.TextToggleIsOnTransition::isHover
	bool ___isHover_10;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Photon.Voice.Unity.VoiceComponent
struct VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Voice.Unity.VoiceComponentImpl Photon.Voice.Unity.VoiceComponent::impl
	VoiceComponentImpl_t0F6CF304701B2CD643B645A6378645F69E396C90* ___impl_4;
};

// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___m_RaycastResultCache_4;
	// System.Boolean UnityEngine.EventSystems.BaseInputModule::m_SendPointerHoverToParent
	bool ___m_SendPointerHoverToParent_5;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* ___m_AxisEventData_6;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_7;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_BaseEventData_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_InputOverride_9;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_DefaultInput_10;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector
struct MicrophoneSelector_t4271F3212A871220CB395D2553525E2AC0B49A16  : public VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF
{
	// Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector/MicrophoneSelectorEvent Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector::onValueChanged
	MicrophoneSelectorEvent_t8A25F9B1CA111326232C99F82DDA60877DD8F005* ___onValueChanged_5;
	// System.Collections.Generic.List`1<Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef> Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector::micOptions
	List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4* ___micOptions_6;
	// UnityEngine.UI.Dropdown Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector::micDropdown
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___micDropdown_7;
	// UnityEngine.UI.Slider Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector::micLevelSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___micLevelSlider_8;
	// Photon.Voice.Unity.Recorder Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector::recorder
	Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* ___recorder_9;
	// UnityEngine.GameObject Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector::refreshButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___refreshButton_10;
	// UnityEngine.UI.Image Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector::fillArea
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___fillArea_11;
	// UnityEngine.Color Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector::defaultFillColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___defaultFillColor_12;
	// UnityEngine.Color Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector::speakingFillColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___speakingFillColor_13;
	// Photon.Voice.IDeviceEnumerator Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector::unityMicEnum
	RuntimeObject* ___unityMicEnum_14;
	// Photon.Voice.IDeviceEnumerator Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector::photonMicEnum
	RuntimeObject* ___photonMicEnum_15;
};

// Photon.Voice.Unity.Recorder
struct Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C  : public VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF
{
	// System.Boolean Photon.Voice.Unity.Recorder::voiceDetection
	bool ___voiceDetection_7;
	// System.Single Photon.Voice.Unity.Recorder::voiceDetectionThreshold
	float ___voiceDetectionThreshold_8;
	// System.Int32 Photon.Voice.Unity.Recorder::voiceDetectionDelayMs
	int32_t ___voiceDetectionDelayMs_9;
	// System.Object Photon.Voice.Unity.Recorder::userData
	RuntimeObject* ___userData_10;
	// Photon.Voice.LocalVoice Photon.Voice.Unity.Recorder::voice
	LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5* ___voice_11;
	// Photon.Voice.IAudioDesc Photon.Voice.Unity.Recorder::inputSource
	RuntimeObject* ___inputSource_12;
	// Photon.Voice.Unity.VoiceConnection Photon.Voice.Unity.Recorder::voiceConnection
	VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* ___voiceConnection_13;
	// System.Byte Photon.Voice.Unity.Recorder::interestGroup
	uint8_t ___interestGroup_14;
	// System.Boolean Photon.Voice.Unity.Recorder::useTargetPlayers
	bool ___useTargetPlayers_15;
	// System.Int32[] Photon.Voice.Unity.Recorder::targetPlayers
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___targetPlayers_16;
	// System.Boolean Photon.Voice.Unity.Recorder::debugEchoMode
	bool ___debugEchoMode_17;
	// System.Boolean Photon.Voice.Unity.Recorder::reliableMode
	bool ___reliableMode_18;
	// System.Boolean Photon.Voice.Unity.Recorder::encrypt
	bool ___encrypt_19;
	// System.Boolean Photon.Voice.Unity.Recorder::transmitEnabled
	bool ___transmitEnabled_20;
	// POpusCodec.Enums.SamplingRate Photon.Voice.Unity.Recorder::samplingRate
	int32_t ___samplingRate_21;
	// Photon.Voice.OpusCodec/FrameDuration Photon.Voice.Unity.Recorder::frameDuration
	int32_t ___frameDuration_22;
	// System.Int32 Photon.Voice.Unity.Recorder::bitrate
	int32_t ___bitrate_23;
	// Photon.Voice.Unity.Recorder/InputSourceType Photon.Voice.Unity.Recorder::sourceType
	int32_t ___sourceType_24;
	// Photon.Voice.Unity.Recorder/MicType Photon.Voice.Unity.Recorder::microphoneType
	int32_t ___microphoneType_25;
	// UnityEngine.AudioClip Photon.Voice.Unity.Recorder::audioClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___audioClip_26;
	// System.Boolean Photon.Voice.Unity.Recorder::loopAudioClip
	bool ___loopAudioClip_27;
	// System.Boolean Photon.Voice.Unity.Recorder::recordingEnabled
	bool ___recordingEnabled_28;
	// System.Func`1<Photon.Voice.IAudioDesc> Photon.Voice.Unity.Recorder::inputFactory
	Func_1_t70BAAB9F1D00714988C7BA974AF43D14365CBD68* ___inputFactory_29;
	// Photon.Voice.IOS.AudioSessionParameters Photon.Voice.Unity.Recorder::audioSessionParameters
	AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37 ___audioSessionParameters_30;
	// Photon.Voice.Unity.AndroidAudioInParameters Photon.Voice.Unity.Recorder::androidMicrophoneSettings
	AndroidAudioInParameters_t7212C4A7649E84B331F6B2C50AB43A50F4B66D0A ___androidMicrophoneSettings_31;
	// System.Boolean Photon.Voice.Unity.Recorder::isPausedOrInBackground
	bool ___isPausedOrInBackground_32;
	// System.Boolean Photon.Voice.Unity.Recorder::stopRecordingWhenPaused
	bool ___stopRecordingWhenPaused_33;
	// System.Boolean Photon.Voice.Unity.Recorder::useOnAudioFilterRead
	bool ___useOnAudioFilterRead_34;
	// System.Boolean Photon.Voice.Unity.Recorder::useMicrophoneTypeFallback
	bool ___useMicrophoneTypeFallback_35;
	// System.Boolean Photon.Voice.Unity.Recorder::recordWhenJoined
	bool ___recordWhenJoined_36;
	// Photon.Voice.DeviceInfo Photon.Voice.Unity.Recorder::microphoneDevice
	DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 ___microphoneDevice_37;
	// System.Int32 Photon.Voice.Unity.Recorder::microphoneDeviceChangePending
	int32_t ___microphoneDeviceChangePending_38;
	// System.Int32 Photon.Voice.Unity.Recorder::restartRecordingPending
	int32_t ___restartRecordingPending_39;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// Photon.Voice.Unity.Speaker
struct Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE  : public VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF
{
	// Photon.Voice.IAudioOut`1<System.Single> Photon.Voice.Unity.Speaker::audioOutput
	RuntimeObject* ___audioOutput_5;
	// Photon.Voice.AudioOutDelayControl/PlayDelayConfig Photon.Voice.Unity.Speaker::playDelayConfig
	PlayDelayConfig_t7E2F00F08A8F2A3D47AFDD64347913B6409871E2 ___playDelayConfig_6;
	// System.Boolean Photon.Voice.Unity.Speaker::restartOnDeviceChange
	bool ___restartOnDeviceChange_7;
	// System.Action`1<Photon.Voice.Unity.Speaker> Photon.Voice.Unity.Speaker::<OnRemoteVoiceRemoveAction>k__BackingField
	Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229* ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_8;
	// Photon.Voice.Unity.RemoteVoiceLink Photon.Voice.Unity.Speaker::<RemoteVoice>k__BackingField
	RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* ___U3CRemoteVoiceU3Ek__BackingField_9;
	// System.Int32 Photon.Voice.Unity.Speaker::restartPlaybackPending
	int32_t ___restartPlaybackPending_10;
};

// FlutterUnityIntegration.UnityMessageManager
struct UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56  : public SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF
{
	// FlutterUnityIntegration.UnityMessageManager/MessageDelegate FlutterUnityIntegration.UnityMessageManager::OnMessage
	MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* ___OnMessage_7;
	// FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate FlutterUnityIntegration.UnityMessageManager::OnFlutterMessage
	MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* ___OnFlutterMessage_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage> FlutterUnityIntegration.UnityMessageManager::waitCallbackMessageMap
	Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9* ___waitCallbackMessageMap_9;
};

// Photon.Voice.Unity.VoiceConnection
struct VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3  : public ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4
{
	// Photon.Voice.Unity.VoiceComponentImpl Photon.Voice.Unity.VoiceConnection::voiceComponentImpl
	VoiceComponentImpl_t0F6CF304701B2CD643B645A6378645F69E396C90* ___voiceComponentImpl_20;
	// Photon.Voice.LoadBalancingTransport Photon.Voice.Unity.VoiceConnection::client
	LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* ___client_22;
	// Photon.Realtime.SupportLogger Photon.Voice.Unity.VoiceConnection::supportLoggerComponent
	SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* ___supportLoggerComponent_23;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::runInBackground
	bool ___runInBackground_24;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::statsResetInterval
	int32_t ___statsResetInterval_25;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::nextStatsTickCount
	int32_t ___nextStatsTickCount_26;
	// System.Single Photon.Voice.Unity.VoiceConnection::statsReferenceTime
	float ___statsReferenceTime_27;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::referenceFramesLost
	int32_t ___referenceFramesLost_28;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::referenceFramesReceived
	int32_t ___referenceFramesReceived_29;
	// UnityEngine.GameObject Photon.Voice.Unity.VoiceConnection::speakerPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___speakerPrefab_30;
	// System.Collections.Generic.List`1<Photon.Voice.Unity.RemoteVoiceLink> Photon.Voice.Unity.VoiceConnection::cachedRemoteVoices
	List_1_t823310AB4F398AE467887CC898545B689B70003F* ___cachedRemoteVoices_31;
	// Photon.Voice.Unity.Recorder Photon.Voice.Unity.VoiceConnection::primaryRecorder
	Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* ___primaryRecorder_32;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::usePrimaryRecorder
	bool ___usePrimaryRecorder_33;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::cppCompatibilityMode
	bool ___cppCompatibilityMode_34;
	// System.Collections.Generic.List`1<Photon.Voice.Unity.Speaker> Photon.Voice.Unity.VoiceConnection::linkedSpeakers
	List_1_t581C6CC97545A3BE378779CD0B20D123D6DCF950* ___linkedSpeakers_35;
	// System.Collections.Generic.List`1<Photon.Voice.Unity.Recorder> Photon.Voice.Unity.VoiceConnection::recorders
	List_1_tBFD6B7B62FB7763BC57224ED666A855ACCD05536* ___recorders_36;
	// Photon.Realtime.AppSettings Photon.Voice.Unity.VoiceConnection::Settings
	AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* ___Settings_37;
	// System.Action`1<Photon.Voice.Unity.Speaker> Photon.Voice.Unity.VoiceConnection::SpeakerLinked
	Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229* ___SpeakerLinked_38;
	// System.Action`1<Photon.Voice.Unity.RemoteVoiceLink> Photon.Voice.Unity.VoiceConnection::RemoteVoiceAdded
	Action_1_tEDBE6144CEB293C0905C68B84BB211D3950274B3* ___RemoteVoiceAdded_39;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesReceivedPerSecond>k__BackingField
	float ___U3CFramesReceivedPerSecondU3Ek__BackingField_40;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesLostPerSecond>k__BackingField
	float ___U3CFramesLostPerSecondU3Ek__BackingField_41;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesLostPercent>k__BackingField
	float ___U3CFramesLostPercentU3Ek__BackingField_42;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96* ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E* ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_24;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_25;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_26;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_27;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_28;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_29;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_30;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_31;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_32;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_33;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_34;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_35;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_36;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_38;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_39;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_40;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_41;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_43;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_44;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_46;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_47;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_48;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_49;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_50;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_51;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_52;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_53;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_54;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_55;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_56;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_57;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_60;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_61;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_63;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_64;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_65;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_66;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_67;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_68;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_69;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_70;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_71;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_74;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556  : public BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* ___m_PointerData_15;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* ___m_MouseState_16;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530  : public PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556
{
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_PrevActionTime
	float ___m_PrevActionTime_17;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMoveVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastMoveVector_18;
	// System.Int32 UnityEngine.EventSystems.StandaloneInputModule::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastMousePosition_20;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_MousePosition_21;
	// UnityEngine.GameObject UnityEngine.EventSystems.StandaloneInputModule::m_CurrentFocusedGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentFocusedGameObject_22;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.StandaloneInputModule::m_InputPointerEvent
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___m_InputPointerEvent_23;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_24;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_25;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_26;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_27;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_28;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_RepeatDelay
	float ___m_RepeatDelay_29;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_30;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>

// <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>

// <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>

// <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>

// System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>

// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>

// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.Demo.FriendItem>

// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.Demo.FriendItem>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FriendInfoU5BU5D_tE89DA4050769F5D540A0B2AAD187F6560FBFB0BD* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>

// System.Collections.Generic.List`1<Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef>
struct List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MicRefU5BU5D_tB38D0F9746F40D7A1177291C8B4E0873C4ED8E76* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RoomInfoU5BU5D_t144AE7D49A37D5B8CE320BBA78875CD81D40A582* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TypedLobbyInfoU5BU5D_t799EE885B0FB997851DAB1806D3EC4EF57F7CD8A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// Photon.Chat.Demo.AppSettingsExtensions

// Photon.Chat.Demo.AppSettingsExtensions

// Photon.Chat.ChatChannel

// Photon.Chat.ChatChannel

// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_StaticFields
{
	// Newtonsoft.Json.Linq.JTokenEqualityComparer Newtonsoft.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_t2B7EB6B1D12A8C94152AB2E690CC45F185373C46* ____equalityComparer_0;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BooleanTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___NumberTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___StringTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___GuidTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___TimeSpanTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___UriTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___CharTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___DateTimeTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BytesTypes_13;
};

// Newtonsoft.Json.Linq.JToken

// FlutterUnityIntegration.MessageHandler

// FlutterUnityIntegration.MessageHandler

// FlutterUnityIntegration.NativeAPI

// FlutterUnityIntegration.NativeAPI

// Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions

// Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions

// Photon.Realtime.Player

// Photon.Realtime.Player

// Photon.Realtime.Region

// Photon.Realtime.Region

// Photon.Realtime.RegionHandler
struct RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB_StaticFields
{
	// System.Type Photon.Realtime.RegionHandler::PingImplementation
	Type_t* ___PingImplementation_0;
	// System.UInt16 Photon.Realtime.RegionHandler::PortToPingOverride
	uint16_t ___PortToPingOverride_8;
};

// Photon.Realtime.RegionHandler

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.Events.UnityEventBase

// UnityEngine.Events.UnityEventBase

// FlutterUnityIntegration.UnityMessage

// FlutterUnityIntegration.UnityMessage

// Photon.Realtime.WebFlags
struct WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA_StaticFields
{
	// Photon.Realtime.WebFlags Photon.Realtime.WebFlags::Default
	WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* ___Default_0;
};

// Photon.Realtime.WebFlags

// Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c
struct U3CU3Ec_t2529E801AE37BB4E2785EDEC5F5739EFC00D054B_StaticFields
{
	// Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c::<>9
	U3CU3Ec_t2529E801AE37BB4E2785EDEC5F5739EFC00D054B* ___U3CU3E9_0;
	// System.Func`1<Photon.Voice.IAudioDesc> Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c::<>9__101_0
	Func_1_t70BAAB9F1D00714988C7BA974AF43D14365CBD68* ___U3CU3E9__101_0_1;
};

// Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UI.Toggle>

// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UI.Toggle>

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Int32>

// Photon.Voice.AudioUtil/ToneAudioReader`1<System.Single>

// Photon.Voice.AudioUtil/ToneAudioReader`1<System.Single>

// UnityEngine.Events.UnityEvent`1<System.Boolean>

// UnityEngine.Events.UnityEvent`1<System.Boolean>

// UnityEngine.Events.UnityEvent`1<System.Int32>

// UnityEngine.Events.UnityEvent`1<System.Int32>

// UnityEngine.Events.UnityEvent`2<Photon.Voice.Unity.Demos.DemoVoiceUI.MicType,Photon.Voice.DeviceInfo>

// UnityEngine.Events.UnityEvent`2<Photon.Voice.Unity.Demos.DemoVoiceUI.MicType,Photon.Voice.DeviceInfo>

// UnityEngine.AndroidJavaClass

// UnityEngine.AndroidJavaClass

// Photon.Voice.Unity.AudioInEnumerator

// Photon.Voice.Unity.AudioInEnumerator

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// Photon.Voice.DeviceInfo
struct DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_StaticFields
{
	// Photon.Voice.DeviceInfo Photon.Voice.DeviceInfo::Default
	DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 ___Default_6;
};

// Photon.Voice.DeviceInfo

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// ExitGames.Client.Photon.Hashtable
struct Hashtable_tD626399B3ADFD501225241D7366103F35472542A_StaticFields
{
	// System.Object[] ExitGames.Client.Photon.Hashtable::boxedByte
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___boxedByte_14;
};

// ExitGames.Client.Photon.Hashtable

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Photon.Realtime.Room

// Photon.Realtime.Room

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// System.Single

// System.Single

// System.UInt16

// System.UInt16

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

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

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.UI.Toggle>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.UI.Toggle>

// Photon.Chat.ChatDisconnectCause

// Photon.Chat.ChatDisconnectCause

// Photon.Chat.ChatState

// Photon.Chat.ChatState

// Photon.Realtime.ClientState

// Photon.Realtime.ClientState

// ExitGames.Client.Photon.ConnectionProtocol

// ExitGames.Client.Photon.ConnectionProtocol

// ExitGames.Client.Photon.DebugLevel

// ExitGames.Client.Photon.DebugLevel

// System.Delegate

// System.Delegate

// Photon.Realtime.DisconnectCause

// Photon.Realtime.DisconnectCause

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Int32Enum

// System.Int32Enum

// Newtonsoft.Json.Linq.JObject

// Newtonsoft.Json.Linq.JObject

// UnityEngine.KeyCode

// UnityEngine.KeyCode

// UnityEngine.SceneManagement.LoadSceneMode

// UnityEngine.SceneManagement.LoadSceneMode

// Photon.Voice.Unity.Demos.DemoVoiceUI.MicType

// Photon.Voice.Unity.Demos.DemoVoiceUI.MicType

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Dropdown/DropdownEvent

// UnityEngine.UI.Dropdown/DropdownEvent

// Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector/MicrophoneSelectorEvent

// Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector/MicrophoneSelectorEvent

// Photon.Voice.Unity.Recorder/InputSourceType

// Photon.Voice.Unity.Recorder/InputSourceType

// Photon.Voice.Unity.Recorder/MicType

// Photon.Voice.Unity.Recorder/MicType

// UnityEngine.UI.Toggle/ToggleEvent

// UnityEngine.UI.Toggle/ToggleEvent

// System.Nullable`1<System.Int32Enum>

// System.Nullable`1<System.Int32Enum>

// System.Nullable`1<Photon.Voice.Unity.Recorder/MicType>

// System.Nullable`1<Photon.Voice.Unity.Recorder/MicType>

// Photon.Realtime.AppSettings

// Photon.Realtime.AppSettings

// Photon.Chat.AuthenticationValues

// Photon.Chat.AuthenticationValues

// Photon.Chat.ChatAppSettings

// Photon.Chat.ChatAppSettings

// Photon.Chat.ChatClient

// Photon.Chat.ChatClient

// UnityEngine.Component

// UnityEngine.Component

// Photon.Realtime.EnterRoomParams

// Photon.Realtime.EnterRoomParams

// UnityEngine.GameObject

// UnityEngine.GameObject

// Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef

// Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef

// Photon.Realtime.OpJoinRandomRoomParams

// Photon.Realtime.OpJoinRandomRoomParams

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// System.Action`1<System.Boolean>

// System.Action`1<System.Boolean>

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<Photon.Realtime.RegionHandler>

// System.Action`1<Photon.Realtime.RegionHandler>

// System.Func`1<System.Double>

// System.Func`1<System.Double>

// UnityEngine.Events.UnityAction`1<System.Boolean>

// UnityEngine.Events.UnityAction`1<System.Boolean>

// UnityEngine.Events.UnityAction`1<System.Int32>

// UnityEngine.Events.UnityAction`1<System.Int32>

// UnityEngine.Events.UnityAction`1<System.Single>

// UnityEngine.Events.UnityAction`1<System.Single>

// UnityEngine.Events.UnityAction`1<System.String>

// UnityEngine.Events.UnityAction`1<System.String>

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>

// System.Action

// System.Action

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4_StaticFields
{
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> Photon.Realtime.LoadBalancingClient::ProtocolToNameServerPort
	Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80* ___ProtocolToNameServerPort_11;
};

// Photon.Realtime.LoadBalancingClient

// Photon.Voice.Unity.RemoteVoiceLink

// Photon.Voice.Unity.RemoteVoiceLink

// Photon.Pun.ServerSettings

// Photon.Pun.ServerSettings

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// FlutterUnityIntegration.UnityMessageManager/MessageDelegate

// FlutterUnityIntegration.UnityMessageManager/MessageDelegate

// FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate

// FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// Photon.Voice.LoadBalancingTransport

// Photon.Voice.LoadBalancingTransport

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// FlutterUnityIntegration.SingletonMonoBehaviour`1<FlutterUnityIntegration.UnityMessageManager>
struct SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_StaticFields
{
	// System.Lazy`1<T> FlutterUnityIntegration.SingletonMonoBehaviour`1::LazyInstance
	Lazy_1_t6F494A9DD8C65745EEC22482A12BA8565B069417* ___LazyInstance_4;
};

// FlutterUnityIntegration.SingletonMonoBehaviour`1<FlutterUnityIntegration.UnityMessageManager>

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// Photon.Chat.Demo.ChannelSelector

// Photon.Chat.Demo.ChannelSelector

// Photon.Chat.Demo.ChatAppIdCheckerUI

// Photon.Chat.Demo.ChatAppIdCheckerUI

// Photon.Chat.Demo.ChatGui
struct ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_StaticFields
{
	// System.String Photon.Chat.Demo.ChatGui::HelpText
	String_t* ___HelpText_25;
};

// Photon.Chat.Demo.ChatGui

// Photon.Realtime.Demo.ConnectAndJoinRandomLb

// Photon.Realtime.Demo.ConnectAndJoinRandomLb

// Photon.Realtime.ConnectionHandler
struct ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4_StaticFields
{
	// System.Boolean Photon.Realtime.ConnectionHandler::AppQuits
	bool ___AppQuits_10;
	// System.Boolean Photon.Realtime.ConnectionHandler::AppPause
	bool ___AppPause_11;
	// System.Boolean Photon.Realtime.ConnectionHandler::AppPauseRecent
	bool ___AppPauseRecent_12;
	// System.Boolean Photon.Realtime.ConnectionHandler::AppOutOfFocus
	bool ___AppOutOfFocus_13;
	// System.Boolean Photon.Realtime.ConnectionHandler::AppOutOfFocusRecent
	bool ___AppOutOfFocusRecent_14;
};

// Photon.Realtime.ConnectionHandler

// Photon.Chat.UtilityScripts.EventSystemSpawner

// Photon.Chat.UtilityScripts.EventSystemSpawner

// Photon.Chat.Demo.FriendItem

// Photon.Chat.Demo.FriendItem

// Photon.Chat.Demo.IgnoreUiRaycastWhenInactive

// Photon.Chat.Demo.IgnoreUiRaycastWhenInactive

// Photon.Chat.Demo.NamePickGui

// Photon.Chat.Demo.NamePickGui

// Photon.Chat.UtilityScripts.OnStartDelete

// Photon.Chat.UtilityScripts.OnStartDelete

// Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI

// Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI

// Photon.Chat.UtilityScripts.TextButtonTransition

// Photon.Chat.UtilityScripts.TextButtonTransition

// Photon.Chat.UtilityScripts.TextToggleIsOnTransition

// Photon.Chat.UtilityScripts.TextToggleIsOnTransition

// Photon.Voice.Unity.VoiceComponent

// Photon.Voice.Unity.VoiceComponent

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.EventSystems.EventSystem

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector

// Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector

// Photon.Voice.Unity.Recorder

// Photon.Voice.Unity.Recorder

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// Photon.Voice.Unity.Speaker

// Photon.Voice.Unity.Speaker

// FlutterUnityIntegration.UnityMessageManager
struct UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_StaticFields
{
	// System.Int32 FlutterUnityIntegration.UnityMessageManager::ID
	int32_t ___ID_6;
};

// FlutterUnityIntegration.UnityMessageManager

// Photon.Voice.Unity.VoiceConnection

// Photon.Voice.Unity.VoiceConnection

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_StaticFields
{
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___s_NoOptionData_35;
};

// UnityEngine.UI.Dropdown

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDeviceEvaluated
	bool ___s_IsQuestDeviceEvaluated_22;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_23;
};

// UnityEngine.UI.InputField

// UnityEngine.UI.Slider

// UnityEngine.UI.Slider

// UnityEngine.UI.Toggle

// UnityEngine.UI.Toggle

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// UnityEngine.EventSystems.StandaloneInputModule

// UnityEngine.EventSystems.StandaloneInputModule

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
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
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
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
// Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef[]
struct MicRefU5BU5D_tB38D0F9746F40D7A1177291C8B4E0873C4ED8E76  : public RuntimeArray
{
	ALIGN_FIELD (8) MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B m_Items[1];

	inline MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Device_1))->___U3CIDStringU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Device_1))->___U3CNameU3Ek__BackingField_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Device_1))->___features_4), (void*)NULL);
		#endif
	}
	inline MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Device_1))->___U3CIDStringU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Device_1))->___U3CNameU3Ek__BackingField_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Device_1))->___features_4), (void*)NULL);
		#endif
	}
};

IL2CPP_EXTERN_C void DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_marshal_pinvoke(const DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335& unmarshaled, DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_marshal_pinvoke_back(const DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_marshaled_pinvoke& marshaled, DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335& unmarshaled);
IL2CPP_EXTERN_C void DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_marshal_pinvoke_cleanup(DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_marshal_com(const DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335& unmarshaled, DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_marshaled_com& marshaled);
IL2CPP_EXTERN_C void DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_marshal_com_back(const DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_marshaled_com& marshaled, DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335& unmarshaled);
IL2CPP_EXTERN_C void DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_marshal_com_cleanup(DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_marshaled_com& marshaled);

// System.Void Photon.Voice.AudioUtil/ToneAudioReader`1<System.Single>::.ctor(System.Func`1<System.Double>,System.Double,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToneAudioReader_1__ctor_m56DC6DE7286F3B0C5D3E424216D11DADD608CF6A_gshared (ToneAudioReader_1_tE87A7B87FE140B2223CA4C08A8D346B13D0B7646* __this, Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* ___0_clockSec, double ___1_frequency, int32_t ___2_samplingRate, int32_t ___3_channels, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m952B9D2EAD3EAA5057E2654DEE307A934D3C20DE_gshared (List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2321E1B53E110705468505FCDC00444CCB8ABA04_gshared_inline (List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4* __this, MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B ___0_item, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B_gshared (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_gshared (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* ___0_call, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B List_1_get_Item_m4868FE31F54407D32B370B64861094F7CC551054_gshared (List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Int32Enum,Photon.Voice.DeviceInfo>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_m1C8F7D9049B8D6D2FB88218426DE084AA6156DF7_gshared (UnityEvent_2_t5F53C10E0902BC0EEA6011A51CE736FB7C1F6723* __this, int32_t ___0_arg0, DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 ___1_arg1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m36061DDA7BCE9122195582ED4AA9B40303BDB896_gshared_inline (List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Int32Enum,Photon.Voice.DeviceInfo>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_mF7375F729488814F07EC6C6698A283EDD4C4379B_gshared (UnityEvent_2_t5F53C10E0902BC0EEA6011A51CE736FB7C1F6723* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32Enum>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5_gshared (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32Enum>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32Enum>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m26287DBB36429B2E2FBCB3F96F439248F8CAA8BB_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___0_call, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___0_call, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
// U Newtonsoft.Json.Linq.Extensions::Value<System.Int32>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCCC05EA9B86407E7E62E482BFF27A5F1E89A9AD8_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// U Newtonsoft.Json.Linq.Extensions::Value<System.Object>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Extensions_Value_TisRuntimeObject_m5571042D842EA6EC5B6318C825B1D5D317EB3215_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void <>f__AnonymousType0`4<System.Int32,System.Object,System.Object,System.Object>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ef__AnonymousType0_4__ctor_m21606653EECD94777A0BDE5940565770B138F3F4_gshared (U3CU3Ef__AnonymousType0_4_t87E69E279093DFC4580EF2B2E42CCE84BA36F057* __this, int32_t ___0_id, RuntimeObject* ___1_seq, RuntimeObject* ___2_name, RuntimeObject* ___3_data, const RuntimeMethod* method) ;
// T FlutterUnityIntegration.SingletonMonoBehaviour`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SingletonMonoBehaviour_1_get_Instance_m607F0B93984CCC4DBC13E391B53DEED876E6C123_gshared (const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared (UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// T FlutterUnityIntegration.MessageHandler::getData<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageHandler_getData_TisRuntimeObject_m675A7C19F2448C70CD3FC2E102CBAE41A2DC9CCC_gshared (MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void FlutterUnityIntegration.SingletonMonoBehaviour`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingletonMonoBehaviour_1__ctor_m951CBAC39C5B1891C1AF0673AF8B1CAC9078AAA9_gshared (SingletonMonoBehaviour_1_t40D855C9E22F0BF3C0ADBC1B41CF44E16D5E0FD2* __this, const RuntimeMethod* method) ;

// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1B841656943269D4123E87CD4C4B417F0479091B (U3CU3Ec_t2529E801AE37BB4E2785EDEC5F5739EFC00D054B* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.AudioUtil/ToneAudioReader`1<System.Single>::.ctor(System.Func`1<System.Double>,System.Double,System.Int32,System.Int32)
inline void ToneAudioReader_1__ctor_m56DC6DE7286F3B0C5D3E424216D11DADD608CF6A (ToneAudioReader_1_tE87A7B87FE140B2223CA4C08A8D346B13D0B7646* __this, Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* ___0_clockSec, double ___1_frequency, int32_t ___2_samplingRate, int32_t ___3_channels, const RuntimeMethod* method)
{
	((  void (*) (ToneAudioReader_1_tE87A7B87FE140B2223CA4C08A8D346B13D0B7646*, Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7*, double, int32_t, int32_t, const RuntimeMethod*))ToneAudioReader_1__ctor_m56DC6DE7286F3B0C5D3E424216D11DADD608CF6A_gshared)(__this, ___0_clockSec, ___1_frequency, ___2_samplingRate, ___3_channels, method);
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef::.ctor(Photon.Voice.Unity.Demos.DemoVoiceUI.MicType,Photon.Voice.DeviceInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicRef__ctor_mBB436B786367E711D153D4CACB66A24DA6142AA2 (MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B* __this, int32_t ___0_micType, DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 ___1_device, const RuntimeMethod* method) ;
// System.String Photon.Voice.DeviceInfo::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DeviceInfo_get_Name_m2559D5ABC53E49FCA44E0563489FCE284417AF53_inline (DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.String Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MicRef_ToString_m9246CD09D3C10730860EBF0A230990939617EAE4 (MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.VoiceComponent::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceComponent_Awake_m6AC34084B90505F4064B4CDE0671C36B3538DFF0 (VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF* __this, const RuntimeMethod* method) ;
// Photon.Voice.ILogger Photon.Voice.Unity.VoiceComponent::get_Logger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VoiceComponent_get_Logger_mC64FBDB8EB5AF8DA71142ECE8B6963BAC484FC40 (VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.AudioInEnumerator::.ctor(Photon.Voice.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInEnumerator__ctor_mDAE7254E287178AC4A735D8001A62551F50B43F3 (AudioInEnumerator_t2A8F43D6245EAB21DAB999CDB56032FAB88FF3E8* __this, RuntimeObject* ___0_logger, const RuntimeMethod* method) ;
// Photon.Voice.IDeviceEnumerator Photon.Voice.Platform::CreateAudioInEnumerator(Photon.Voice.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Platform_CreateAudioInEnumerator_mAC7EB99564BE856564FD77BA5DEF350B04A72163 (RuntimeObject* ___0_logger, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mC24167312F3DB38FB43365A8583DA381DB6EAA4A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_fillRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Slider_get_fillRect_m35EE2868F52084F9543158A2EAD99476E5C13D9A (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// Photon.Voice.AudioUtil/ILevelMeter Photon.Voice.Unity.Recorder::get_LevelMeter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Recorder_get_LevelMeter_m4F6C7F01FC0FF7B4878A2373D81C1EABFF1209FF (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.Recorder::get_IsCurrentlyTransmitting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recorder_get_IsCurrentlyTransmitting_m0DF2BF010EAC026A19DC9B9FD67A3712594B54C2 (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Photon.Voice.Unity.UtilityScripts.MicrophonePermission::add_MicrophonePermissionCallback(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrophonePermission_add_MicrophonePermissionCallback_m12FD86F9D17746063936FA6CC8C5F17DBA44C80A (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector::RefreshMicrophones()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrophoneSelector_RefreshMicrophones_m745C35791DFE58A797753A74C183EE043ECB97B4 (MicrophoneSelector_t4271F3212A871220CB395D2553525E2AC0B49A16* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.UtilityScripts.MicrophonePermission::remove_MicrophonePermissionCallback(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrophonePermission_remove_MicrophonePermissionCallback_mE2A9CFCCC413D24F983B21227DD6A642BF34EB4F (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown::ClearOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_ClearOptions_m3EE71BFE47AB96BC7F731C4EE6BC728ED0E6EE56 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef>::.ctor()
inline void List_1__ctor_m952B9D2EAD3EAA5057E2654DEE307A934D3C20DE (List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4*, const RuntimeMethod*))List_1__ctor_m952B9D2EAD3EAA5057E2654DEE307A934D3C20DE_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef>::Add(T)
inline void List_1_Add_m2321E1B53E110705468505FCDC00444CCB8ABA04_inline (List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4* __this, MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4*, MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B, const RuntimeMethod*))List_1_Add_m2321E1B53E110705468505FCDC00444CCB8ABA04_gshared_inline)(__this, ___0_item, method);
}
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void UnityEngine.UI.Dropdown::AddOptions(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_AddOptions_mCFB763400FA1BCA695C168E7FBCDE20C9B8E7839 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_options, const RuntimeMethod* method) ;
// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::get_onValueChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* Dropdown_get_onValueChanged_mAC49CE9A83E258FEC024662127057567275CAC12 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A*, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*, const RuntimeMethod*))UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_gshared)(__this, ___0_call, method);
}
// System.Int32 UnityEngine.UI.Dropdown::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef>::get_Item(System.Int32)
inline MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B List_1_get_Item_m4868FE31F54407D32B370B64861094F7CC551054 (List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B (*) (List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4*, int32_t, const RuntimeMethod*))List_1_get_Item_m4868FE31F54407D32B370B64861094F7CC551054_gshared)(__this, ___0_index, method);
}
// System.Void Photon.Voice.Unity.Recorder::set_SourceType(Photon.Voice.Unity.Recorder/InputSourceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_SourceType_m2DBF84AF542E7662A4302A0D20399C7FC5E1E13D (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.Recorder::set_MicrophoneType(Photon.Voice.Unity.Recorder/MicType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_MicrophoneType_mD4FB5979412FFF717DFDD902A767C8758789A4E8 (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.Recorder::set_MicrophoneDevice(Photon.Voice.DeviceInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_MicrophoneDevice_m3CAED9F9B64D7624A04E9932DED8643C20297F61 (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<Photon.Voice.Unity.Demos.DemoVoiceUI.MicType,Photon.Voice.DeviceInfo>::Invoke(T0,T1)
inline void UnityEvent_2_Invoke_m0F5B724279206F1B3F87CF5ED0C6B593CC81E992 (UnityEvent_2_t9B3805F2D0A63EC28880E7DC01947289AC34EC74* __this, int32_t ___0_arg0, DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 ___1_arg1, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t9B3805F2D0A63EC28880E7DC01947289AC34EC74*, int32_t, DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335, const RuntimeMethod*))UnityEvent_2_Invoke_m1C8F7D9049B8D6D2FB88218426DE084AA6156DF7_gshared)(__this, ___0_arg0, ___1_arg1, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// Photon.Voice.Unity.Recorder/InputSourceType Photon.Voice.Unity.Recorder::get_SourceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recorder_get_SourceType_m4CECCD92052944D378E2984E0C0C1D204FCADF23 (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, const RuntimeMethod* method) ;
// Photon.Voice.Unity.Recorder/MicType Photon.Voice.Unity.Recorder::get_MicrophoneType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recorder_get_MicrophoneType_mA9B57A89A8AC287DA7BB3803FA706D501F55BBC8 (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown::set_value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef>::get_Count()
inline int32_t List_1_get_Count_m36061DDA7BCE9122195582ED4AA9B40303BDB896_inline (List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4*, const RuntimeMethod*))List_1_get_Count_m36061DDA7BCE9122195582ED4AA9B40303BDB896_gshared_inline)(__this, method);
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector/MicrophoneSelectorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrophoneSelectorEvent__ctor_m3624BE2B49B0AC64FD1620157DED9C32315FEC54 (MicrophoneSelectorEvent_t8A25F9B1CA111326232C99F82DDA60877DD8F005* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.VoiceComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceComponent__ctor_mB6C412309DC148E0BC5729DEE8FAE7DDFBA5AC58 (VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector::SetupMicDropdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrophoneSelector_SetupMicDropdown_mA34D3A8F89F10BA9F31FB50B7BC28D9D6FCF6DB1 (MicrophoneSelector_t4271F3212A871220CB395D2553525E2AC0B49A16* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector::SetCurrentValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrophoneSelector_SetCurrentValue_mEF08E325E7C4CFA2F8C46BB25A161731206A6F3A (MicrophoneSelector_t4271F3212A871220CB395D2553525E2AC0B49A16* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector::SwitchToSelectedMic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrophoneSelector_SwitchToSelectedMic_m3EC568246068F90A8333337582A60F9F432DFF37 (MicrophoneSelector_t4271F3212A871220CB395D2553525E2AC0B49A16* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<Photon.Voice.Unity.Demos.DemoVoiceUI.MicType,Photon.Voice.DeviceInfo>::.ctor()
inline void UnityEvent_2__ctor_m1AE84331E028D3DCEA0ADCF9160FEA3F49FC6C04 (UnityEvent_2_t9B3805F2D0A63EC28880E7DC01947289AC34EC74* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t9B3805F2D0A63EC28880E7DC01947289AC34EC74*, const RuntimeMethod*))UnityEvent_2__ctor_mF7375F729488814F07EC6C6698A283EDD4C4379B_gshared)(__this, method);
}
// System.Void ExitGames.Client.Photon.Hashtable::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_m7087C3DEBFE5698EEB04CAD886D0FCEF2B5DE1CB (Hashtable_tD626399B3ADFD501225241D7366103F35472542A* __this, int32_t ___0_x, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
inline void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean Photon.Realtime.Player::SetCustomProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,Photon.Realtime.WebFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Player_SetCustomProperties_mACE0A943F112829C5E9E91BC5FC8050FF9E4EECA (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* __this, Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___0_propertiesToSet, Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___1_expectedValues, WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA* ___2_webFlags, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions::HasBoolProperty(Photon.Realtime.Player,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonDemoExtensions_HasBoolProperty_mF7163FE098E2D4947D7B97043EBBC523558F89D0 (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_player, String_t* ___1_prop, const RuntimeMethod* method) ;
// System.Object Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions::GetObjectProperty(Photon.Realtime.Player,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PhotonDemoExtensions_GetObjectProperty_m81F8D1A336EE2959E91DE5742E735505574C9332 (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_player, String_t* ___1_prop, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Photon.Voice.Unity.Recorder/MicType>::.ctor(T)
inline void Nullable_1__ctor_mA3D7664F2A78EFADD951B0211A5BB9A9FB7E1488 (Nullable_1_t64073E86A2DD4799806C11B9AB91647392F7B8EB* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t64073E86A2DD4799806C11B9AB91647392F7B8EB*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared)(__this, ___0_value, method);
}
// ExitGames.Client.Photon.Hashtable Photon.Realtime.Player::get_CustomProperties()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hashtable_tD626399B3ADFD501225241D7366103F35472542A* Player_get_CustomProperties_m398B81FB1DEE02243650B8CB5FBF5C7F1B8928D6_inline (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___0_value, method);
}
// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::get_CurrentRoom()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* LoadBalancingClient_get_CurrentRoom_mADB06D45AD1F8289D93F08F322C9FDB694EAC291_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// Photon.Voice.Unity.RemoteVoiceLink Photon.Voice.Unity.Speaker::get_RemoteVoice()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* Speaker_get_RemoteVoice_m312D32186916EAD30FAF99BCDCEE4514767C9F5D_inline (Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Photon.Voice.Unity.Speaker>()
inline Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* Component_GetComponent_TisSpeaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE_mB771EC7BA8B007F33B7C7C75C7CD2073475476E7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 Photon.Voice.Unity.Speaker::get_PlayDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Speaker_get_PlayDelay_m2354B812AC8B4E9270F815FFA0FD9737AACA6EB1 (Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71 (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Photon.Voice.Unity.Demos.UiExtensions::SetSingleOnEndEditCallback(UnityEngine.UI.InputField,UnityEngine.Events.UnityAction`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UiExtensions_SetSingleOnEndEditCallback_m64F8E3936117D68DC81ECB3CFEB3E4886C7A3A93 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___0_inputField, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* ___1_action, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::SetNickname()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSpeakerUI_SetNickname_mE0C237EC075F4DE96FE7B580D80FBFE0C97CD9DC (RemoteSpeakerUI_t16CA1BA6C6B7F673E5A2F6C3262768298ACB2728* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::SetMutedState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSpeakerUI_SetMutedState_m76F2A855CC2BCD858BC34D58D146AE871B240D9F (RemoteSpeakerUI_t16CA1BA6C6B7F673E5A2F6C3262768298ACB2728* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::SetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSpeakerUI_SetProperties_mA0B647E195E63CFAAF426BFFC5C1C84ED6BA7AF3 (RemoteSpeakerUI_t16CA1BA6C6B7F673E5A2F6C3262768298ACB2728* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Slider::set_minValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5 (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Photon.Voice.Unity.Demos.UiExtensions::SetSingleOnValueChangedCallback(UnityEngine.UI.Slider,UnityEngine.Events.UnityAction`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UiExtensions_SetSingleOnValueChangedCallback_mE4BD73BD825BDE03DE9654B1C820B60AB9BE8915 (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___0_slider, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___1_action, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::OnVolumeChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSpeakerUI_OnVolumeChanged_mE7EC7BC022C623FF353EB589E146633E86CC20EE (RemoteSpeakerUI_t16CA1BA6C6B7F673E5A2F6C3262768298ACB2728* __this, float ___0_newValue, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___0_s, int32_t* ___1_result, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.Speaker::set_PlayDelay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Speaker_set_PlayDelay_m377EFF13EF801CB6729EC928AD4C6AB5E5F4FD46 (Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.Speaker::get_IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Speaker_get_IsPlaying_m7F784C6E15456AD329779754D88D97E6C81BD842 (Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Int32 Photon.Voice.Unity.Speaker::get_Lag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Speaker_get_Lag_m9D4BEBE542D8B8FE7561E00937EEB3387DB78560 (Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9DF47FC6E1F8341012CA3FF02993D372AA7A96C9 (RuntimeObject* ___0_arg0, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.LoadBalancingClient::RemoveCallbackTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_RemoveCallbackTarget_mBDAB0466C92B29CFFB2A1B6E70E7FE3E8910740A (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// Photon.Realtime.Player Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::get_Actor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* RemoteSpeakerUI_get_Actor_m974F6B82710CE6A7E67976EA8B446F6542A0A15E (RemoteSpeakerUI_t16CA1BA6C6B7F673E5A2F6C3262768298ACB2728* __this, const RuntimeMethod* method) ;
// System.String Photon.Realtime.Player::get_NickName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Player_get_NickName_mC1B2AC59B8850ABEB4DA27199675066DC3BF0738 (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 Photon.Realtime.Player::get_ActorNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Player_get_ActorNumber_mE177B60195A5329B1E5D3012295DB0098B7A0F3A (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A (RuntimeObject* ___0_arg0, RuntimeObject* ___1_arg1, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions::IsMuted(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonDemoExtensions_IsMuted_m127E61CE7E50031FC2E4FA040CFF68913AE6F557 (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_player, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions::HasPhotonVAD(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonDemoExtensions_HasPhotonVAD_mDE15A0BAED26C0062C63B97170FDDC2D622186DE (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_player, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions::HasWebRTCVAD(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonDemoExtensions_HasWebRTCVAD_mB2AC9CFA4DF62C16D48376417E5F3573BA292C6D (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_player, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions::HasAEC(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonDemoExtensions_HasAEC_mB4657AE735F1567F013B1A51B14498A102202EAA (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_player, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions::HasAGC(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonDemoExtensions_HasAGC_m989EDB390A204A81C338E363E58439BE3D4D5B2D (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_player, const RuntimeMethod* method) ;
// System.Int32 Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions::GetAGCGain(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonDemoExtensions_GetAGCGain_mDACC83C282DBADC6953EBE097AA9C4BFD7314269 (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_player, const RuntimeMethod* method) ;
// System.Int32 Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions::GetAGCLevel(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonDemoExtensions_GetAGCLevel_mC118BD445988A9239B81F2739DB931E2DB127121 (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_player, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Nullable`1<Photon.Voice.Unity.Recorder/MicType> Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions::GetMic(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t64073E86A2DD4799806C11B9AB91647392F7B8EB PhotonDemoExtensions_GetMic_m4220F228B8FA7A23C4704054E08CD421E7C0B649 (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_player, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Photon.Voice.Unity.Recorder/MicType>::get_HasValue()
inline bool Nullable_1_get_HasValue_mA6DA85312C2DFFA8A4D16346532C6F26F9C13577_inline (Nullable_1_t64073E86A2DD4799806C11B9AB91647392F7B8EB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t64073E86A2DD4799806C11B9AB91647392F7B8EB*, const RuntimeMethod*))Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline)(__this, method);
}
// T System.Nullable`1<Photon.Voice.Unity.Recorder/MicType>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mC38C1723F0B562B0434E57A698D253D8C24557FD_inline (Nullable_1_t64073E86A2DD4799806C11B9AB91647392F7B8EB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t64073E86A2DD4799806C11B9AB91647392F7B8EB*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m26287DBB36429B2E2FBCB3F96F439248F8CAA8BB_gshared_inline)(__this, method);
}
// Photon.Voice.LoadBalancingTransport Photon.Voice.Unity.VoiceConnection::get_Client()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.LoadBalancingClient::AddCallbackTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_AddCallbackTarget_mF98AF4F5A8EF6794C9038C50C619B03EC7FB22B8 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.LoadBalancingClient::.ctor(ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient__ctor_mC3FD7885A9F9E80E8949ACDE2590016410F1186C (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, uint8_t ___0_protocol, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Photon.Realtime.ConnectionHandler>()
inline ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* GameObject_GetComponent_TisConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4_m35DDE72490FF0112059E3A8C5F21DD893E2026C1 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Photon.Realtime.ConnectionHandler::set_Client(Photon.Realtime.LoadBalancingClient)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectionHandler_set_Client_m3ABCA8BEB50CC58254153280CE8F60154D42E29B_inline (ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* __this, LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.ConnectionHandler::StartFallbackSendAckThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionHandler_StartFallbackSendAckThread_mBA4B3FC1BABFBB2085F1D30D176B50D54F33AA69 (ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.LoadBalancingClient::Service()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_Service_m0208D4872E63ABA1E7367E1D8FB89421E3050920 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LoadBalancingClient_get_State_m8553D8C2483058BD64DDED8EC2648AE77836D12C (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.LoadBalancingClient::OpJoinRandomRoom(Photon.Realtime.OpJoinRandomRoomParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_OpJoinRandomRoom_mCB018C45C5BAC6CB7F10FA13BA9EBAC3BD0F45A1 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, OpJoinRandomRoomParams_t5DCB0B5EBE3D5C35A483669A8D997D47E17D6DBA* ___0_opJoinRandomRoomParams, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.Action`1<Photon.Realtime.RegionHandler>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m215F7D57B46C05B7411E4B5B4C7DDB91EEA86681 (Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Boolean Photon.Realtime.RegionHandler::PingMinimumOfRegions(System.Action`1<Photon.Realtime.RegionHandler>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegionHandler_PingMinimumOfRegions_mBDA481EF544E14116455B0352A160D07B6AF5762 (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74* ___0_onCompleteCallback, String_t* ___1_previousSummary, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.EnterRoomParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnterRoomParams__ctor_m59BB4C9762321F59D7238996F68C7EB970ACDBB8 (EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.LoadBalancingClient::OpCreateRoom(Photon.Realtime.EnterRoomParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_OpCreateRoom_mD4FC6543597FB872E8EE027EE49E723D83437310 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* ___0_enterRoomParams, const RuntimeMethod* method) ;
// Photon.Realtime.Region Photon.Realtime.RegionHandler::get_BestRegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* RegionHandler_get_BestRegion_mC9390E2B9A76B5F6A391F5D432D6CFD35F991D94 (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, const RuntimeMethod* method) ;
// System.String Photon.Realtime.RegionHandler::get_SummaryToCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegionHandler_get_SummaryToCache_m313FB26DCB72FB6D25EC366E51AF4118F8CD3722 (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, const RuntimeMethod* method) ;
// System.String Photon.Realtime.Region::get_Code()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Region_get_Code_m25CDC61EBD0A1EDEA277235D87D55869A18B9122_inline (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.LoadBalancingClient::ConnectToRegionMaster(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_ConnectToRegionMaster_m170672C2A5C0B12DB89090B0EE8ECF6028FA365B (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, String_t* ___0_region, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.AppSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppSettings__ctor_m0E9EF98D6C1FB02C989504407836FDA2B019AA43 (AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* __this, const RuntimeMethod* method) ;
// System.Void Photon.Chat.ChatAppSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatAppSettings__ctor_m0B6F25C335A13983DA701EBD9CFADAC43E6011A3 (ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.AppSettings::get_IsBestRegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppSettings_get_IsBestRegion_m29A45FCEDFBC20C7C6E9CFA732A4E4FC2D1BBFED (AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.AppSettings::get_IsDefaultNameServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppSettings_get_IsDefaultNameServer_m25CC5D537E41C3678015FEECF221843B9CAEBD29 (AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// T UnityEngine.Object::FindObjectOfType<Photon.Chat.Demo.ChatGui>()
inline ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30 (const RuntimeMethod* method)
{
	return ((  ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void Photon.Chat.Demo.ChatGui::ShowChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_ShowChannel_m9AB1B8EFCEA804119F7891EB21AA299D9EE9C211 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___0_channelName, const RuntimeMethod* method) ;
// Photon.Pun.ServerSettings Photon.Pun.PhotonNetwork::get_PhotonServerSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServerSettings_t41BE4338E7E76BFB4919D4039BAFC6799E242152* PhotonNetwork_get_PhotonServerSettings_mEB0FD5D91970368EE4D23AA12213DAD57B8D1097 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.String Photon.Chat.Demo.ChatGui::get_UserName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1_inline (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_TickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C (const RuntimeMethod* method) ;
// System.Void Photon.Chat.Demo.ChatGui::set_UserName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatGui_set_UserName_m2DEE5CF82BC6DBB2FA568AF956102BE0E125D0A7_inline (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// Photon.Chat.ChatAppSettings Photon.Chat.Demo.AppSettingsExtensions::GetChatSettings(Photon.Realtime.AppSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* AppSettingsExtensions_GetChatSettings_mEE685D01C4B553F55E8016FFE255717777E8975E (AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* ___0_appSettings, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Photon.Chat.ChatClient::.ctor(Photon.Chat.IChatClientListener,ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient__ctor_m5C32CB0A0CAC33E980D4C6FA700B551D0DAF46F4 (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, RuntimeObject* ___0_listener, uint8_t ___1_protocol, const RuntimeMethod* method) ;
// System.Void Photon.Chat.ChatClient::set_UseBackgroundWorkerForSending(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_UseBackgroundWorkerForSending_m6B0CF62C2EBF74CB62FFB1557DC30969292B7596_inline (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Chat.AuthenticationValues::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues__ctor_mB097BC3108CD439CAD77D4AE77F8616FA92C929D (AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* __this, String_t* ___0_userId, const RuntimeMethod* method) ;
// System.Void Photon.Chat.ChatClient::set_AuthValues(Photon.Chat.AuthenticationValues)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_AuthValues_mAAD43D4212103C80D1377FA04B33815397E28937_inline (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* ___0_value, const RuntimeMethod* method) ;
// System.Boolean Photon.Chat.ChatClient::ConnectUsingSettings(Photon.Chat.ChatAppSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_ConnectUsingSettings_m3DCD03EA4CAE4ADDD935BDA323CCF37B5E96BB4C (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* ___0_appSettings, const RuntimeMethod* method) ;
// System.Void Photon.Chat.ChatClient::Disconnect(Photon.Chat.ChatDisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_Disconnect_m678FDF44265FD926B8DB5555B439F5F70D82BA52 (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, int32_t ___0_cause, const RuntimeMethod* method) ;
// System.Void Photon.Chat.ChatClient::Service()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_Service_mD968988B9275FE4CA7113196FFB455F3BA79D0B7 (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Void Photon.Chat.Demo.ChatGui::SendChatMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_SendChatMessage_m4BD1A7C0CAAA5112EA9B3C1CE4F0F1ADC7018B5D (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___0_inputLine, const RuntimeMethod* method) ;
// Photon.Chat.AuthenticationValues Photon.Chat.ChatClient::get_AuthValues()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* ChatClient_get_AuthValues_mC9F4405E66924D1BA21DEDE10848199C24915476_inline (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, const RuntimeMethod* method) ;
// System.String Photon.Chat.AuthenticationValues::get_UserId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_UserId_m61CDE1031F42330B0EDC0EC489A75E46E1DB6B79_inline (AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendPrivateMessage_m736B989819416ADFFE92A9B4EB297FE6DC607E36 (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, String_t* ___0_target, RuntimeObject* ___1_message, bool ___2_forwardAsWebhook, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m43998BB50D68FD0B18E4445DED51EE80D6EF1643 (Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_separator, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean System.Char::Equals(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B (Il2CppChar* __this, Il2CppChar ___0_obj, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m3C63FA89A52BE352B4E49DB5379F7AAD6ACCA0E8 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_separator, int32_t ___1_count, const RuntimeMethod* method) ;
// System.Void Photon.Chat.Demo.ChatGui::PostHelpToCurrentChannel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_PostHelpToCurrentChannel_m707B7D1D556EACB05EC03E08F91A8F1ECA3642E9 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___0_s, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_mA793BD64EB3D9ED4E360835951BD0333424C918D (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, int32_t ___0_status, RuntimeObject* ___1_message, const RuntimeMethod* method) ;
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_mAB072792329A26749E58FED202C38A51691CD32C (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_channels, const RuntimeMethod* method) ;
// System.Boolean Photon.Chat.ChatClient::Unsubscribe(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Unsubscribe_m384652194B1073EDB7A8CA3DBA04EFB7A14F0B0A (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_channels, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::Remove(TKey)
inline bool Dictionary_2_Remove_m952BC71E0A6D29F848B1C6D854B9183CE0A5E83A (Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
// System.Boolean Photon.Chat.ChatClient::TryGetChannel(System.String,System.Boolean,Photon.Chat.ChatChannel&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_TryGetChannel_m5C5176103E0A618C661F6351BEBE408F4A06D925 (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, String_t* ___0_channelName, bool ___1_isPrivate, ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1** ___2_channel, const RuntimeMethod* method) ;
// System.Void Photon.Chat.ChatChannel::ClearMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_ClearMessages_m046EA236CDD967B62CDE383F2098BF4B6ED80FFE (ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7 (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.Boolean Photon.Chat.ChatClient::PublishMessage(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_PublishMessage_mC0EA414F46817A9F77DF910D9094AF23B563A2D8 (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, String_t* ___0_channelName, RuntimeObject* ___1_message, bool ___2_forwardAsWebhook, const RuntimeMethod* method) ;
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m4A3A6D2D5703A1D8CF8ED0CACA717114062A6559 (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_channels, int32_t ___1_messagesFromHistory, const RuntimeMethod* method) ;
// System.Boolean Photon.Chat.ChatClient::AddFriends(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_AddFriends_mC7A8A45F98205A68592ED3BE7A5FC88BF4EFB809 (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_friends, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void Photon.Chat.Demo.ChatGui::InstantiateFriendButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_InstantiateFriendButton_m76FB5E6D0ACF60E58F8EE09C10998D49020B4CD1 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___0_friendId, const RuntimeMethod* method) ;
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_mEFE64834C76CBF45AB5B986DE9FE28A27D77E6CD (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, int32_t ___0_status, const RuntimeMethod* method) ;
// System.Void Photon.Chat.Demo.ChatGui::InstantiateChannelButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_InstantiateChannelButton_m4C6135B30B8F5C9BDF9AE1753E8AFE63B791D401 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___0_channelName, const RuntimeMethod* method) ;
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___0_separator, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_value, const RuntimeMethod* method) ;
// System.String Photon.Realtime.Extensions::ToStringFull(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Extensions_ToStringFull_m7D8AFCB5DE3085C237E3DE4D43209F74C60198C4 (RuntimeObject* ___0_origin, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.UI.Toggle>(T)
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* Object_Instantiate_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m6F51F2B8CB0DBD60C3C4AF683A4FE9D7698C7482 (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___0_original, const RuntimeMethod* method)
{
	return ((  Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* (*) (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// T UnityEngine.Component::GetComponentInChildren<Photon.Chat.Demo.ChannelSelector>()
inline ChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07* Component_GetComponentInChildren_TisChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07_mA5CB24AADA6105A0763F0F315A95A0B02EB5A05E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void Photon.Chat.Demo.ChannelSelector::SetChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelSelector_SetChannel_m7E493B7588E65D501C7DA99C72BF36DAA565250E (ChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07* __this, String_t* ___0_channel, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, bool ___1_worldPositionStays, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>::Add(TKey,TValue)
inline void Dictionary_2_Add_m7AC008F2D3DCBB5019F0BE948B7F9B77284CC86C (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* __this, String_t* ___0_key, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48*, String_t*, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// T UnityEngine.GameObject::GetComponent<Photon.Chat.Demo.FriendItem>()
inline FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* GameObject_GetComponent_TisFriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13_m0046B7B489607CF796C30CD83C51F1304D701F67 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Photon.Chat.Demo.FriendItem::set_FriendId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FriendItem_set_FriendId_m49FB0C8B978DD2E35361DE3ED6863257B82E4BB2 (FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.Demo.FriendItem>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mFDB00FBC9AEC3F5411BC17218005A2DDC01A4EE7 (Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E* __this, String_t* ___0_key, FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E*, String_t*, FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>::get_Item(TKey)
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* Dictionary_2_get_Item_m65B54189C1D9C6B6BD1BABB5755C0647EE39C89B (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* (*) (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>::Remove(TKey)
inline bool Dictionary_2_Remove_m4F6FEFABCBACA9B9B3DED9BFAB8BDA9B47FA678B (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>::get_Count()
inline int32_t Dictionary_2_get_Count_mFCFB38659217BF06006B6BC2FFD16389EF2A44EC (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>::GetEnumerator()
inline Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08 Dictionary_2_GetEnumerator_m2D3C2B49D6B541197F1E118FE7D6F37AF46A08C5 (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08 (*) (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UI.Toggle>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m9A4008D157E7FA3D568FE444C0D926C78B1645B2_inline (KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UI.Toggle>::get_Value()
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* KeyValuePair_2_get_Value_m8C266329612FA91F72F7F4D9C3137D4448CD5E1D_inline (KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB* __this, const RuntimeMethod* method)
{
	return ((  Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* (*) (KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.Demo.FriendItem>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mFC86DBD8CA71ACF273A1F7FB6CD2DAD53449653E (Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.Demo.FriendItem>::get_Item(TKey)
inline FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* Dictionary_2_get_Item_mD91F54F913AE58A20D0D60800D7E13B3A81BCDBC (Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* (*) (Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Void Photon.Chat.Demo.FriendItem::OnFriendStatusUpdate(System.Int32,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FriendItem_OnFriendStatusUpdate_mC336B386CEABD37A2BA65254CFE2C5125263E4CD (FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* __this, int32_t ___0_status, bool ___1_gotMessage, RuntimeObject* ___2_message, const RuntimeMethod* method) ;
// System.Boolean Photon.Chat.ChatClient::TryGetChannel(System.String,Photon.Chat.ChatChannel&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_TryGetChannel_m596F2DCA70B7C83E7E82B92B341DDEE9A5864C0A (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, String_t* ___0_channelName, ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1** ___1_channel, const RuntimeMethod* method) ;
// System.Void Photon.Chat.ChatChannel::Add(System.String,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_Add_m22E0343342399B1C9130CCDD12325EAA80DA9440 (ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* __this, String_t* ___0_sender, RuntimeObject* ___1_message, int32_t ___2_msgId, const RuntimeMethod* method) ;
// System.String Photon.Chat.ChatChannel::ToStringMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatChannel_ToStringMessages_mB286B6E5F35FAF7A5F4F4EE259BB64207F34FE18 (ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.UI.Toggle>::Dispose()
inline void Enumerator_Dispose_m06019984AEF249BE743B261895FBDFCF3DE314FD (Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.UI.Toggle>::get_Current()
inline KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB Enumerator_get_Current_mF6F3ECC910925263DF2A5278F4F56F520C1507A6_inline (Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB (*) (Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.UI.Toggle>::MoveNext()
inline bool Enumerator_MoveNext_m950509CD692BEAA25841830AE3528B713C36DAC9 (Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89 (String_t* ___0_url, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>::.ctor()
inline void Dictionary_2__ctor_m1951C457B495EAFA02160F793A6277161FDCEA3F (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.Demo.FriendItem>::.ctor()
inline void Dictionary_2__ctor_m05968164AFC47B4DAC2545E4FAC531C51F66C7FD (Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Void Photon.Chat.Demo.NamePickGui::StartChat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamePickGui_StartChat_m93395F4741F31632667938D7733EB30C48E04750 (NamePickGui_t8C0368B20268692BC4311641FC79610CCD7FB56B* __this, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Void Photon.Chat.Demo.ChatGui::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_Connect_m073A7E59E9008C4D708663A6902A6C19882540E3 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256 (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4 (const RuntimeMethod* method)
{
	return ((  EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.StandaloneInputModule>()
inline StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619 (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnValueChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA (TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A* __this, bool ___0_isOn, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, const RuntimeMethod*))UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared)(__this, ___0_call, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130 (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_gshared)(__this, ___0_call, method);
}
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SceneManagement.Scene::get_isLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_get_isLoaded_m5BC54CEB27330040A0BC69E66E94EE97E87298BC (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SceneManagement.Scene::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_IsValid_m0D5200731D3E26ECBBB55803F9242965A14A4599 (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___0_fieldName, method);
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* JObject_Parse_mBC884661DD2708BA92BCE45E8C104924542A2D43 (String_t* ___0_json, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::GetValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2 (JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* __this, String_t* ___0_propertyName, const RuntimeMethod* method) ;
// U Newtonsoft.Json.Linq.Extensions::Value<System.Int32>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
inline int32_t Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCCC05EA9B86407E7E62E482BFF27A5F1E89A9AD8 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCCC05EA9B86407E7E62E482BFF27A5F1E89A9AD8_gshared)(___0_value, method);
}
// U Newtonsoft.Json.Linq.Extensions::Value<System.String>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
inline String_t* Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, const RuntimeMethod*))Extensions_Value_TisRuntimeObject_m5571042D842EA6EC5B6318C825B1D5D317EB3215_gshared)(___0_value, method);
}
// System.Void FlutterUnityIntegration.MessageHandler::.ctor(System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler__ctor_m1B476AF6138B8567F1AC1613B57F26882755D0AE (MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* __this, int32_t ___0_id, String_t* ___1_seq, String_t* ___2_name, JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___3_data, const RuntimeMethod* method) ;
// System.Void <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
inline void U3CU3Ef__AnonymousType0_4__ctor_mA9CA12BE8F40DB9F200816875B785E4FC23A2200 (U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454* __this, int32_t ___0_id, String_t* ___1_seq, String_t* ___2_name, RuntimeObject* ___3_data, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454*, int32_t, String_t*, String_t*, RuntimeObject*, const RuntimeMethod*))U3CU3Ef__AnonymousType0_4__ctor_m21606653EECD94777A0BDE5940565770B138F3F4_gshared)(__this, ___0_id, ___1_seq, ___2_name, ___3_data, method);
}
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::FromObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* JObject_FromObject_m19DD8C1DB59132420FA3DE3E6EE27BDF2A4292AD (RuntimeObject* ___0_o, const RuntimeMethod* method) ;
// T FlutterUnityIntegration.SingletonMonoBehaviour`1<FlutterUnityIntegration.UnityMessageManager>::get_Instance()
inline UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E (const RuntimeMethod* method)
{
	return ((  UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* (*) (const RuntimeMethod*))SingletonMonoBehaviour_1_get_Instance_m607F0B93984CCC4DBC13E391B53DEED876E6C123_gshared)(method);
}
// System.Void FlutterUnityIntegration.UnityMessageManager::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToFlutter_m01236AF27F51C863E80F5220F02BA45E9ED4BAB9 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_m14BEBCC5E4A8DD2C806A48D79A4773315CB434C6 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* ___0_value, const RuntimeMethod* method) ;
// System.Void FlutterUnityIntegration.NativeAPI::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnSceneLoaded_m200A791C356A252E1D5F2BB13BC2CED455A02259 (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Void FlutterUnityIntegration.NativeAPI::ShowHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_ShowHostMainWindow_m38DDCC74D34CFE1F0B7E8528690C0E384002E9ED (const RuntimeMethod* method) ;
// System.Void FlutterUnityIntegration.NativeAPI::UnloadMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_UnloadMainWindow_m5B742B5232A7D45F54B723F025915ED46032556B (const RuntimeMethod* method) ;
// System.Void FlutterUnityIntegration.NativeAPI::QuitUnityWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_QuitUnityWindow_m877ACBFCA5B17C944C59FF57E973590FFB555BB5 (const RuntimeMethod* method) ;
// System.Void FlutterUnityIntegration.NativeAPI::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_SendMessageToFlutter_m38D270B3AAAF47AF673EF84063BB262D1AE3618C (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 FlutterUnityIntegration.UnityMessageManager::generateId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityMessageManager_generateId_mFFF63A1BDD06CED89C71F2DDCCD9C7AEFE73724B (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>::Add(TKey,TValue)
inline void Dictionary_2_Add_m8CEE5FEF823BADBAFEC756B6DF4ED9C1E574EBDC (Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9* __this, int32_t ___0_key, UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9*, int32_t, UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
inline void U3CU3Ef__AnonymousType0_4__ctor_m29CA8638117DD35A3ECF831C1C575ECD9A1CFF99 (U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39* __this, int32_t ___0_id, String_t* ___1_seq, String_t* ___2_name, JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* ___3_data, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39*, int32_t, String_t*, String_t*, JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1*, const RuntimeMethod*))U3CU3Ef__AnonymousType0_4__ctor_m21606653EECD94777A0BDE5940565770B138F3F4_gshared)(__this, ___0_id, ___1_seq, ___2_name, ___3_data, method);
}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageDelegate::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_inline (MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
// FlutterUnityIntegration.MessageHandler FlutterUnityIntegration.MessageHandler::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* MessageHandler_Deserialize_m995171F279A54669F5A0EFA4445D25F40757CE55 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m3B8850785436E6EB25F3851408FD229CE9812076 (Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9* __this, int32_t ___0_key, UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9*, int32_t, UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>::Remove(TKey)
inline bool Dictionary_2_Remove_mF8E608EDD8A59D5C9E831BDA1E54D923D2872EFB (Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___0_key, method);
}
// T FlutterUnityIntegration.MessageHandler::getData<System.Object>()
inline RuntimeObject* MessageHandler_getData_TisRuntimeObject_m675A7C19F2448C70CD3FC2E102CBAE41A2DC9CCC (MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187*, const RuntimeMethod*))MessageHandler_getData_TisRuntimeObject_m675A7C19F2448C70CD3FC2E102CBAE41A2DC9CCC_gshared)(__this, method);
}
// System.Void System.Action`1<System.Object>::Invoke(T)
inline void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate::Invoke(FlutterUnityIntegration.MessageHandler)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_inline (MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___0_handler, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>::.ctor()
inline void Dictionary_2__ctor_mB83DEA09CE12176ACC9D229EDAA617E7B0B62FB9 (Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void FlutterUnityIntegration.SingletonMonoBehaviour`1<FlutterUnityIntegration.UnityMessageManager>::.ctor()
inline void SingletonMonoBehaviour_1__ctor_mB959CC5C4F5F613426011598A0FFADE2812F4B07 (SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF* __this, const RuntimeMethod* method)
{
	((  void (*) (SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF*, const RuntimeMethod*))SingletonMonoBehaviour_1__ctor_m951CBAC39C5B1891C1AF0673AF8B1CAC9078AAA9_gshared)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4FDDDB402D3ED6E41A7206F7005BE8137997E52A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2529E801AE37BB4E2785EDEC5F5739EFC00D054B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2529E801AE37BB4E2785EDEC5F5739EFC00D054B* L_0 = (U3CU3Ec_t2529E801AE37BB4E2785EDEC5F5739EFC00D054B*)il2cpp_codegen_object_new(U3CU3Ec_t2529E801AE37BB4E2785EDEC5F5739EFC00D054B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m1B841656943269D4123E87CD4C4B417F0479091B(L_0, NULL);
		((U3CU3Ec_t2529E801AE37BB4E2785EDEC5F5739EFC00D054B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2529E801AE37BB4E2785EDEC5F5739EFC00D054B_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2529E801AE37BB4E2785EDEC5F5739EFC00D054B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2529E801AE37BB4E2785EDEC5F5739EFC00D054B_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1B841656943269D4123E87CD4C4B417F0479091B (U3CU3Ec_t2529E801AE37BB4E2785EDEC5F5739EFC00D054B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Photon.Voice.IAudioDesc Photon.Voice.Unity.Demos.DemoVoiceUI.DemoVoiceUI/<>c::<.ctor>b__101_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_ctorU3Eb__101_0_m669DABA57ABC04936946B91E5AD546507A059636 (U3CU3Ec_t2529E801AE37BB4E2785EDEC5F5739EFC00D054B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToneAudioReader_1__ctor_m56DC6DE7286F3B0C5D3E424216D11DADD608CF6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ToneAudioReader_1_tE87A7B87FE140B2223CA4C08A8D346B13D0B7646_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private System.Func<IAudioDesc> toneInputFactory = () => new AudioUtil.ToneAudioReader<float>(null, 440, 48000, 2); // WebGL supports only Reader
		ToneAudioReader_1_tE87A7B87FE140B2223CA4C08A8D346B13D0B7646* L_0 = (ToneAudioReader_1_tE87A7B87FE140B2223CA4C08A8D346B13D0B7646*)il2cpp_codegen_object_new(ToneAudioReader_1_tE87A7B87FE140B2223CA4C08A8D346B13D0B7646_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ToneAudioReader_1__ctor_m56DC6DE7286F3B0C5D3E424216D11DADD608CF6A(L_0, (Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7*)NULL, (440.0), ((int32_t)48000), 2, ToneAudioReader_1__ctor_m56DC6DE7286F3B0C5D3E424216D11DADD608CF6A_RuntimeMethod_var);
		return L_0;
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


// Conversion methods for marshalling of: Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef
IL2CPP_EXTERN_C void MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B_marshal_pinvoke(const MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B& unmarshaled, MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B____Device_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___Device_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s'.", MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B____Device_1_FieldInfo_var, MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Device_1Exception, NULL);
}
IL2CPP_EXTERN_C void MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B_marshal_pinvoke_back(const MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B_marshaled_pinvoke& marshaled, MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B____Device_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___Device_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s'.", MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B____Device_1_FieldInfo_var, MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Device_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef
IL2CPP_EXTERN_C void MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B_marshal_pinvoke_cleanup(MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef
IL2CPP_EXTERN_C void MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B_marshal_com(const MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B& unmarshaled, MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B____Device_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___Device_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s'.", MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B____Device_1_FieldInfo_var, MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Device_1Exception, NULL);
}
IL2CPP_EXTERN_C void MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B_marshal_com_back(const MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B_marshaled_com& marshaled, MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B____Device_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___Device_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s'.", MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B____Device_1_FieldInfo_var, MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Device_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef
IL2CPP_EXTERN_C void MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B_marshal_com_cleanup(MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B_marshaled_com& marshaled)
{
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef::.ctor(Photon.Voice.Unity.Demos.DemoVoiceUI.MicType,Photon.Voice.DeviceInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicRef__ctor_mBB436B786367E711D153D4CACB66A24DA6142AA2 (MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B* __this, int32_t ___0_micType, DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 ___1_device, const RuntimeMethod* method) 
{
	{
		// this.MicType = micType;
		int32_t L_0 = ___0_micType;
		__this->___MicType_0 = L_0;
		// this.Device = device;
		DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 L_1 = ___1_device;
		__this->___Device_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___Device_1))->___U3CIDStringU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___Device_1))->___U3CNameU3Ek__BackingField_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___Device_1))->___features_4), (void*)NULL);
		#endif
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MicRef__ctor_mBB436B786367E711D153D4CACB66A24DA6142AA2_AdjustorThunk (RuntimeObject* __this, int32_t ___0_micType, DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 ___1_device, const RuntimeMethod* method)
{
	MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B*>(__this + _offset);
	MicRef__ctor_mBB436B786367E711D153D4CACB66A24DA6142AA2(_thisAdjusted, ___0_micType, ___1_device, method);
}
// System.String Photon.Voice.Unity.Demos.DemoVoiceUI.MicRef::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MicRef_ToString_m9246CD09D3C10730860EBF0A230990939617EAE4 (MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BB17AD581F217BFB87AB6ABBFA96D757F574177);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Format("Mic reference: {0}", this.Device.Name);
		DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335* L_0 = (DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335*)(&__this->___Device_1);
		il2cpp_codegen_runtime_class_init_inline(DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = DeviceInfo_get_Name_m2559D5ABC53E49FCA44E0563489FCE284417AF53_inline(L_0, NULL);
		String_t* L_2;
		L_2 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral4BB17AD581F217BFB87AB6ABBFA96D757F574177, L_1, NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* MicRef_ToString_m9246CD09D3C10730860EBF0A230990939617EAE4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = MicRef_ToString_m9246CD09D3C10730860EBF0A230990939617EAE4(_thisAdjusted, method);
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
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrophoneSelector_Awake_m0D7F80AE61F6C715C9C1EF70A7DE8C7895ABE866 (MicrophoneSelector_t4271F3212A871220CB395D2553525E2AC0B49A16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioInEnumerator_t2A8F43D6245EAB21DAB999CDB56032FAB88FF3E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mC24167312F3DB38FB43365A8583DA381DB6EAA4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDeviceEnumerator_tBAFA864015008142632BCAD7673D2ECF2FC396F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicrophoneSelector_RefreshMicrophones_m745C35791DFE58A797753A74C183EE043ECB97B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicrophoneSelector_U3CAwakeU3Eb__12_0_m3605C2E335CAB2057B17C8063CAA0072CA7B9E1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		VoiceComponent_Awake_m6AC34084B90505F4064B4CDE0671C36B3538DFF0(__this, NULL);
		// unityMicEnum = new Unity.AudioInEnumerator(this.Logger);
		RuntimeObject* L_0;
		L_0 = VoiceComponent_get_Logger_mC64FBDB8EB5AF8DA71142ECE8B6963BAC484FC40(__this, NULL);
		AudioInEnumerator_t2A8F43D6245EAB21DAB999CDB56032FAB88FF3E8* L_1 = (AudioInEnumerator_t2A8F43D6245EAB21DAB999CDB56032FAB88FF3E8*)il2cpp_codegen_object_new(AudioInEnumerator_t2A8F43D6245EAB21DAB999CDB56032FAB88FF3E8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AudioInEnumerator__ctor_mDAE7254E287178AC4A735D8001A62551F50B43F3(L_1, L_0, NULL);
		__this->___unityMicEnum_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___unityMicEnum_14), (void*)L_1);
		// photonMicEnum = Platform.CreateAudioInEnumerator(this.Logger);
		RuntimeObject* L_2;
		L_2 = VoiceComponent_get_Logger_mC64FBDB8EB5AF8DA71142ECE8B6963BAC484FC40(__this, NULL);
		RuntimeObject* L_3;
		L_3 = Platform_CreateAudioInEnumerator_mAC7EB99564BE856564FD77BA5DEF350B04A72163(L_2, NULL);
		__this->___photonMicEnum_15 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___photonMicEnum_15), (void*)L_3);
		// photonMicEnum.OnReady = () => // refreshes asynchronously on WebGL
		// {
		//     this.SetupMicDropdown();
		//     this.SetCurrentValue();
		// };
		RuntimeObject* L_4 = __this->___photonMicEnum_15;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, __this, (intptr_t)((void*)MicrophoneSelector_U3CAwakeU3Eb__12_0_m3605C2E335CAB2057B17C8063CAA0072CA7B9E1A_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(2 /* System.Void Photon.Voice.IDeviceEnumerator::set_OnReady(System.Action) */, IDeviceEnumerator_tBAFA864015008142632BCAD7673D2ECF2FC396F7_il2cpp_TypeInfo_var, L_4, L_5);
		// this.refreshButton.GetComponentInChildren<Button>().onClick.AddListener(RefreshMicrophones);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___refreshButton_10;
		NullCheck(L_6);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7;
		L_7 = GameObject_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mC24167312F3DB38FB43365A8583DA381DB6EAA4A(L_6, GameObject_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mC24167312F3DB38FB43365A8583DA381DB6EAA4A_RuntimeMethod_var);
		NullCheck(L_7);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_8;
		L_8 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_7, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_9, __this, (intptr_t)((void*)MicrophoneSelector_RefreshMicrophones_m745C35791DFE58A797753A74C183EE043ECB97B4_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_8, L_9, NULL);
		// this.fillArea = this.micLevelSlider.fillRect.GetComponent<Image>();
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_10 = __this->___micLevelSlider_8;
		NullCheck(L_10);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11;
		L_11 = Slider_get_fillRect_m35EE2868F52084F9543158A2EAD99476E5C13D9A(L_10, NULL);
		NullCheck(L_11);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12;
		L_12 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_11, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___fillArea_11 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fillArea_11), (void*)L_12);
		// this.defaultFillColor = this.fillArea.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13 = __this->___fillArea_11;
		NullCheck(L_13);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_13);
		__this->___defaultFillColor_12 = L_14;
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrophoneSelector_Update_m9A94FD421726FBCA63017570AD9EC2E234AF8CB3 (MicrophoneSelector_t4271F3212A871220CB395D2553525E2AC0B49A16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILevelMeter_tAA539E9A7B391A21DCBE1B6E49298B3C5F8B6B36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B3_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B4_1 = NULL;
	{
		// if (this.recorder != null)
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_0 = __this->___recorder_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0056;
		}
	}
	{
		// this.micLevelSlider.value = this.recorder.LevelMeter.CurrentPeakAmp;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->___micLevelSlider_8;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_4 = __this->___recorder_9;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = Recorder_get_LevelMeter_m4F6C7F01FC0FF7B4878A2373D81C1EABFF1209FF(L_4, NULL);
		NullCheck(L_5);
		float L_6;
		L_6 = InterfaceFuncInvoker0< float >::Invoke(1 /* System.Single Photon.Voice.AudioUtil/ILevelMeter::get_CurrentPeakAmp() */, ILevelMeter_tAA539E9A7B391A21DCBE1B6E49298B3C5F8B6B36_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_3);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_3, L_6);
		// this.fillArea.color = this.recorder.IsCurrentlyTransmitting ? this.speakingFillColor : this.defaultFillColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___fillArea_11;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_8 = __this->___recorder_9;
		NullCheck(L_8);
		bool L_9;
		L_9 = Recorder_get_IsCurrentlyTransmitting_m0DF2BF010EAC026A19DC9B9FD67A3712594B54C2(L_8, NULL);
		G_B2_0 = L_7;
		if (L_9)
		{
			G_B3_0 = L_7;
			goto IL_0049;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = __this->___defaultFillColor_12;
		G_B4_0 = L_10;
		G_B4_1 = G_B2_0;
		goto IL_004f;
	}

IL_0049:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = __this->___speakingFillColor_13;
		G_B4_0 = L_11;
		G_B4_1 = G_B3_0;
	}

IL_004f:
	{
		NullCheck(G_B4_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B4_1, G_B4_0);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrophoneSelector_OnEnable_mD66DD84F739CC701A6B9DD0D4219A0161D74FBF0 (MicrophoneSelector_t4271F3212A871220CB395D2553525E2AC0B49A16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicrophoneSelector_OnMicrophonePermissionCallback_m3D3087050DDFA03F0DE88D9DBF734BC81337CA30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UtilityScripts.MicrophonePermission.MicrophonePermissionCallback += this.OnMicrophonePermissionCallback;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_0, __this, (intptr_t)((void*)MicrophoneSelector_OnMicrophonePermissionCallback_m3D3087050DDFA03F0DE88D9DBF734BC81337CA30_RuntimeMethod_var), NULL);
		MicrophonePermission_add_MicrophonePermissionCallback_m12FD86F9D17746063936FA6CC8C5F17DBA44C80A(L_0, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector::OnMicrophonePermissionCallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrophoneSelector_OnMicrophonePermissionCallback_m3D3087050DDFA03F0DE88D9DBF734BC81337CA30 (MicrophoneSelector_t4271F3212A871220CB395D2553525E2AC0B49A16* __this, bool ___0_granted, const RuntimeMethod* method) 
{
	{
		// this.RefreshMicrophones();
		MicrophoneSelector_RefreshMicrophones_m745C35791DFE58A797753A74C183EE043ECB97B4(__this, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrophoneSelector_OnDisable_m370D821B51C1ED8894867AD8D5B2A09FDE3EA7CB (MicrophoneSelector_t4271F3212A871220CB395D2553525E2AC0B49A16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicrophoneSelector_OnMicrophonePermissionCallback_m3D3087050DDFA03F0DE88D9DBF734BC81337CA30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UtilityScripts.MicrophonePermission.MicrophonePermissionCallback -= this.OnMicrophonePermissionCallback;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_0, __this, (intptr_t)((void*)MicrophoneSelector_OnMicrophonePermissionCallback_m3D3087050DDFA03F0DE88D9DBF734BC81337CA30_RuntimeMethod_var), NULL);
		MicrophonePermission_remove_MicrophonePermissionCallback_mE2A9CFCCC413D24F983B21227DD6A642BF34EB4F(L_0, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector::SetupMicDropdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrophoneSelector_SetupMicDropdown_mA34D3A8F89F10BA9F31FB50B7BC28D9D6FCF6DB1 (MicrophoneSelector_t4271F3212A871220CB395D2553525E2AC0B49A16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tB42CC3172171D07B3D345D63F8622B98D8ED5E61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t46D603C1EA8510E8CB2057C583DA4FBDF80D5E56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2321E1B53E110705468505FCDC00444CCB8ABA04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m952B9D2EAD3EAA5057E2654DEE307A934D3C20DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicrophoneSelector_U3CSetupMicDropdownU3Eb__17_0_mEC87F906E0BA0DC5ABE7FAEC983065B696894D3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08FE9DE8AC354F1DECA87F579F81A631253674F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral431FAE4373958E931910E5D9D0CAF63C4EA2D97E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F571ADB8F0C91FDE7F8F3664004AF1D93C907EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFDB0D351E22E8E3485F340E7CF2E43FFF485BB9);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// this.micDropdown.ClearOptions();
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = __this->___micDropdown_7;
		NullCheck(L_0);
		Dropdown_ClearOptions_m3EE71BFE47AB96BC7F731C4EE6BC728ED0E6EE56(L_0, NULL);
		// this.micOptions = new List<MicRef>();
		List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4* L_1 = (List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4*)il2cpp_codegen_object_new(List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m952B9D2EAD3EAA5057E2654DEE307A934D3C20DE(L_1, List_1__ctor_m952B9D2EAD3EAA5057E2654DEE307A934D3C20DE_RuntimeMethod_var);
		__this->___micOptions_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___micOptions_6), (void*)L_1);
		// List<string> micOptionsStrings = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_2;
		// this.micOptions.Add(new MicRef(MicType.Unity, DeviceInfo.Default));
		List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4* L_3 = __this->___micOptions_6;
		il2cpp_codegen_runtime_class_init_inline(DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_il2cpp_TypeInfo_var);
		DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 L_4 = ((DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_StaticFields*)il2cpp_codegen_static_fields_for(DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_il2cpp_TypeInfo_var))->___Default_6;
		MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B L_5;
		memset((&L_5), 0, sizeof(L_5));
		MicRef__ctor_mBB436B786367E711D153D4CACB66A24DA6142AA2((&L_5), 0, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_Add_m2321E1B53E110705468505FCDC00444CCB8ABA04_inline(L_3, L_5, List_1_Add_m2321E1B53E110705468505FCDC00444CCB8ABA04_RuntimeMethod_var);
		// micOptionsStrings.Add(string.Format("[Unity]\u00A0[Default]"));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7;
		L_7 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_8;
		L_8 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralFFDB0D351E22E8E3485F340E7CF2E43FFF485BB9, L_7, NULL);
		NullCheck(L_6);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_6, L_8, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// foreach (var d in this.unityMicEnum)
		RuntimeObject* L_9 = __this->___unityMicEnum_14;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Photon.Voice.DeviceInfo>::GetEnumerator() */, IEnumerable_1_tB42CC3172171D07B3D345D63F8622B98D8ED5E61_il2cpp_TypeInfo_var, L_9);
		V_1 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0097:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_11 = V_1;
					if (!L_11)
					{
						goto IL_00a1;
					}
				}
				{
					RuntimeObject* L_12 = V_1;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_00a1:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008d_1;
			}

IL_005a_1:
			{
				// foreach (var d in this.unityMicEnum)
				RuntimeObject* L_13 = V_1;
				NullCheck(L_13);
				DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 L_14;
				L_14 = InterfaceFuncInvoker0< DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Photon.Voice.DeviceInfo>::get_Current() */, IEnumerator_1_t46D603C1EA8510E8CB2057C583DA4FBDF80D5E56_il2cpp_TypeInfo_var, L_13);
				V_2 = L_14;
				// this.micOptions.Add(new MicRef(MicType.Unity, d));
				List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4* L_15 = __this->___micOptions_6;
				DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 L_16 = V_2;
				MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B L_17;
				memset((&L_17), 0, sizeof(L_17));
				MicRef__ctor_mBB436B786367E711D153D4CACB66A24DA6142AA2((&L_17), 0, L_16, /*hidden argument*/NULL);
				NullCheck(L_15);
				List_1_Add_m2321E1B53E110705468505FCDC00444CCB8ABA04_inline(L_15, L_17, List_1_Add_m2321E1B53E110705468505FCDC00444CCB8ABA04_RuntimeMethod_var);
				// micOptionsStrings.Add(string.Format("[Unity]\u00A0{0}", d));
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18 = V_0;
				DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 L_19 = V_2;
				DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 L_20 = L_19;
				RuntimeObject* L_21 = Box(DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_il2cpp_TypeInfo_var, &L_20);
				String_t* L_22;
				L_22 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral6F571ADB8F0C91FDE7F8F3664004AF1D93C907EA, L_21, NULL);
				NullCheck(L_18);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_18, L_22, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			}

IL_008d_1:
			{
				// foreach (var d in this.unityMicEnum)
				RuntimeObject* L_23 = V_1;
				NullCheck(L_23);
				bool L_24;
				L_24 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_23);
				if (L_24)
				{
					goto IL_005a_1;
				}
			}
			{
				goto IL_00a2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a2:
	{
		// this.micOptions.Add(new MicRef(MicType.Photon, DeviceInfo.Default));
		List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4* L_25 = __this->___micOptions_6;
		il2cpp_codegen_runtime_class_init_inline(DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_il2cpp_TypeInfo_var);
		DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 L_26 = ((DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_StaticFields*)il2cpp_codegen_static_fields_for(DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_il2cpp_TypeInfo_var))->___Default_6;
		MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B L_27;
		memset((&L_27), 0, sizeof(L_27));
		MicRef__ctor_mBB436B786367E711D153D4CACB66A24DA6142AA2((&L_27), 1, L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		List_1_Add_m2321E1B53E110705468505FCDC00444CCB8ABA04_inline(L_25, L_27, List_1_Add_m2321E1B53E110705468505FCDC00444CCB8ABA04_RuntimeMethod_var);
		// micOptionsStrings.Add(string.Format("[Photon]\u00A0[Default]"));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_28 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29;
		L_29 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_30;
		L_30 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral431FAE4373958E931910E5D9D0CAF63C4EA2D97E, L_29, NULL);
		NullCheck(L_28);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_28, L_30, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// foreach (var d in this.photonMicEnum)
		RuntimeObject* L_31 = __this->___photonMicEnum_15;
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Photon.Voice.DeviceInfo>::GetEnumerator() */, IEnumerable_1_tB42CC3172171D07B3D345D63F8622B98D8ED5E61_il2cpp_TypeInfo_var, L_31);
		V_3 = L_32;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_011e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_33 = V_3;
					if (!L_33)
					{
						goto IL_0128;
					}
				}
				{
					RuntimeObject* L_34 = V_3;
					NullCheck(L_34);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_34);
				}

IL_0128:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0114_1;
			}

IL_00de_1:
			{
				// foreach (var d in this.photonMicEnum)
				RuntimeObject* L_35 = V_3;
				NullCheck(L_35);
				DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 L_36;
				L_36 = InterfaceFuncInvoker0< DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Photon.Voice.DeviceInfo>::get_Current() */, IEnumerator_1_t46D603C1EA8510E8CB2057C583DA4FBDF80D5E56_il2cpp_TypeInfo_var, L_35);
				V_4 = L_36;
				// this.micOptions.Add(new MicRef(MicType.Photon, d));
				List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4* L_37 = __this->___micOptions_6;
				DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 L_38 = V_4;
				MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B L_39;
				memset((&L_39), 0, sizeof(L_39));
				MicRef__ctor_mBB436B786367E711D153D4CACB66A24DA6142AA2((&L_39), 1, L_38, /*hidden argument*/NULL);
				NullCheck(L_37);
				List_1_Add_m2321E1B53E110705468505FCDC00444CCB8ABA04_inline(L_37, L_39, List_1_Add_m2321E1B53E110705468505FCDC00444CCB8ABA04_RuntimeMethod_var);
				// micOptionsStrings.Add(string.Format("[Photon]\u00A0{0}", d));
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_40 = V_0;
				DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 L_41 = V_4;
				DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 L_42 = L_41;
				RuntimeObject* L_43 = Box(DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_il2cpp_TypeInfo_var, &L_42);
				String_t* L_44;
				L_44 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral08FE9DE8AC354F1DECA87F579F81A631253674F2, L_43, NULL);
				NullCheck(L_40);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_40, L_44, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			}

IL_0114_1:
			{
				// foreach (var d in this.photonMicEnum)
				RuntimeObject* L_45 = V_3;
				NullCheck(L_45);
				bool L_46;
				L_46 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_45);
				if (L_46)
				{
					goto IL_00de_1;
				}
			}
			{
				goto IL_0129;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0129:
	{
		// this.micDropdown.AddOptions(micOptionsStrings);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_47 = __this->___micDropdown_7;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_48 = V_0;
		NullCheck(L_47);
		Dropdown_AddOptions_mCFB763400FA1BCA695C168E7FBCDE20C9B8E7839(L_47, L_48, NULL);
		// this.micDropdown.onValueChanged.RemoveAllListeners();
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_49 = __this->___micDropdown_7;
		NullCheck(L_49);
		DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* L_50;
		L_50 = Dropdown_get_onValueChanged_mAC49CE9A83E258FEC024662127057567275CAC12(L_49, NULL);
		NullCheck(L_50);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_50, NULL);
		// this.micDropdown.onValueChanged.AddListener( (x) => this.SwitchToSelectedMic() );
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_51 = __this->___micDropdown_7;
		NullCheck(L_51);
		DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* L_52;
		L_52 = Dropdown_get_onValueChanged_mAC49CE9A83E258FEC024662127057567275CAC12(L_51, NULL);
		UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* L_53 = (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*)il2cpp_codegen_object_new(UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B(L_53, __this, (intptr_t)((void*)MicrophoneSelector_U3CSetupMicDropdownU3Eb__17_0_mEC87F906E0BA0DC5ABE7FAEC983065B696894D3F_RuntimeMethod_var), NULL);
		NullCheck(L_52);
		UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE(L_52, L_53, UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector::SwitchToSelectedMic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrophoneSelector_SwitchToSelectedMic_m3EC568246068F90A8333337582A60F9F432DFF37 (MicrophoneSelector_t4271F3212A871220CB395D2553525E2AC0B49A16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4868FE31F54407D32B370B64861094F7CC551054_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m0F5B724279206F1B3F87CF5ED0C6B593CC81E992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	MicrophoneSelectorEvent_t8A25F9B1CA111326232C99F82DDA60877DD8F005* G_B8_0 = NULL;
	MicrophoneSelectorEvent_t8A25F9B1CA111326232C99F82DDA60877DD8F005* G_B7_0 = NULL;
	{
		// MicRef mic = this.micOptions[this.micDropdown.value];
		List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4* L_0 = __this->___micOptions_6;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_1 = __this->___micDropdown_7;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C(L_1, NULL);
		NullCheck(L_0);
		MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B L_3;
		L_3 = List_1_get_Item_m4868FE31F54407D32B370B64861094F7CC551054(L_0, L_2, List_1_get_Item_m4868FE31F54407D32B370B64861094F7CC551054_RuntimeMethod_var);
		V_0 = L_3;
		// switch (mic.MicType)
		MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B L_4 = V_0;
		int32_t L_5 = L_4.___MicType_0;
		V_2 = L_5;
		int32_t L_6 = V_2;
		V_1 = L_6;
		int32_t L_7 = V_1;
		if (!L_7)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_005a;
		}
	}
	{
		goto IL_0088;
	}

IL_002c:
	{
		// this.recorder.SourceType = Recorder.InputSourceType.Microphone;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_9 = __this->___recorder_9;
		NullCheck(L_9);
		Recorder_set_SourceType_m2DBF84AF542E7662A4302A0D20399C7FC5E1E13D(L_9, 0, NULL);
		// this.recorder.MicrophoneType = Recorder.MicType.Unity;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_10 = __this->___recorder_9;
		NullCheck(L_10);
		Recorder_set_MicrophoneType_mD4FB5979412FFF717DFDD902A767C8758789A4E8(L_10, 0, NULL);
		// this.recorder.MicrophoneDevice = mic.Device;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_11 = __this->___recorder_9;
		MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B L_12 = V_0;
		DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 L_13 = L_12.___Device_1;
		NullCheck(L_11);
		Recorder_set_MicrophoneDevice_m3CAED9F9B64D7624A04E9932DED8643C20297F61(L_11, L_13, NULL);
		// break;
		goto IL_0088;
	}

IL_005a:
	{
		// this.recorder.SourceType = Recorder.InputSourceType.Microphone;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_14 = __this->___recorder_9;
		NullCheck(L_14);
		Recorder_set_SourceType_m2DBF84AF542E7662A4302A0D20399C7FC5E1E13D(L_14, 0, NULL);
		// this.recorder.MicrophoneType = Recorder.MicType.Photon;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_15 = __this->___recorder_9;
		NullCheck(L_15);
		Recorder_set_MicrophoneType_mD4FB5979412FFF717DFDD902A767C8758789A4E8(L_15, 1, NULL);
		// this.recorder.MicrophoneDevice = mic.Device;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_16 = __this->___recorder_9;
		MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B L_17 = V_0;
		DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 L_18 = L_17.___Device_1;
		NullCheck(L_16);
		Recorder_set_MicrophoneDevice_m3CAED9F9B64D7624A04E9932DED8643C20297F61(L_16, L_18, NULL);
		// break;
		goto IL_0088;
	}

IL_0088:
	{
		// onValueChanged?.Invoke(mic.MicType, mic.Device);
		MicrophoneSelectorEvent_t8A25F9B1CA111326232C99F82DDA60877DD8F005* L_19 = __this->___onValueChanged_5;
		MicrophoneSelectorEvent_t8A25F9B1CA111326232C99F82DDA60877DD8F005* L_20 = L_19;
		G_B7_0 = L_20;
		if (L_20)
		{
			G_B8_0 = L_20;
			goto IL_0094;
		}
	}
	{
		goto IL_00a6;
	}

IL_0094:
	{
		MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B L_21 = V_0;
		int32_t L_22 = L_21.___MicType_0;
		MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B L_23 = V_0;
		DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 L_24 = L_23.___Device_1;
		NullCheck(G_B8_0);
		UnityEvent_2_Invoke_m0F5B724279206F1B3F87CF5ED0C6B593CC81E992(G_B8_0, L_22, L_24, UnityEvent_2_Invoke_m0F5B724279206F1B3F87CF5ED0C6B593CC81E992_RuntimeMethod_var);
	}

IL_00a6:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector::SetCurrentValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrophoneSelector_SetCurrentValue_mEF08E325E7C4CFA2F8C46BB25A161731206A6F3A (MicrophoneSelector_t4271F3212A871220CB395D2553525E2AC0B49A16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m36061DDA7BCE9122195582ED4AA9B40303BDB896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4868FE31F54407D32B370B64861094F7CC551054_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E828DFD91AA009F26910FD1EDC74EB3648317C9);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// if (this.micOptions == null)
		List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4* L_0 = __this->___micOptions_6;
		V_0 = (bool)((((RuntimeObject*)(List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.LogWarning("micOptions list is null");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral5E828DFD91AA009F26910FD1EDC74EB3648317C9, NULL);
		// return;
		goto IL_00cc;
	}

IL_001f:
	{
		// this.micDropdown.gameObject.SetActive(true);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_2 = __this->___micDropdown_7;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// this.refreshButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___refreshButton_10;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// for (int valueIndex = 0; valueIndex < this.micOptions.Count; valueIndex++)
		V_1 = 0;
		goto IL_00b5;
	}

IL_0042:
	{
		// MicRef mic = this.micOptions[valueIndex];
		List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4* L_5 = __this->___micOptions_6;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B L_7;
		L_7 = List_1_get_Item_m4868FE31F54407D32B370B64861094F7CC551054(L_5, L_6, List_1_get_Item_m4868FE31F54407D32B370B64861094F7CC551054_RuntimeMethod_var);
		V_2 = L_7;
		//                 if (mic.MicType == MicType.Unity && this.recorder.SourceType == Recorder.InputSourceType.Microphone && this.recorder.MicrophoneType == Recorder.MicType.Unity
		//                     || mic.MicType == MicType.Photon && this.recorder.SourceType == Recorder.InputSourceType.Microphone && this.recorder.MicrophoneType == Recorder.MicType.Photon
		// #if PHOTON_VOICE_FMOD_ENABLE
		//                     || mic.MicType == MicType.FMOD && this.recorder.SourceType ==  Recorder.InputSourceType.Factory && this.recorder.InputFactory == fmodInputFactory
		// #endif
		//                     )
		MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B L_8 = V_2;
		int32_t L_9 = L_8.___MicType_0;
		if (L_9)
		{
			goto IL_0072;
		}
	}
	{
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_10 = __this->___recorder_9;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Recorder_get_SourceType_m4CECCD92052944D378E2984E0C0C1D204FCADF23(L_10, NULL);
		if (L_11)
		{
			goto IL_0072;
		}
	}
	{
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_12 = __this->___recorder_9;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Recorder_get_MicrophoneType_mA9B57A89A8AC287DA7BB3803FA706D501F55BBC8(L_12, NULL);
		if (!L_13)
		{
			goto IL_009b;
		}
	}

IL_0072:
	{
		MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B L_14 = V_2;
		int32_t L_15 = L_14.___MicType_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_0098;
		}
	}
	{
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_16 = __this->___recorder_9;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Recorder_get_SourceType_m4CECCD92052944D378E2984E0C0C1D204FCADF23(L_16, NULL);
		if (L_17)
		{
			goto IL_0098;
		}
	}
	{
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_18 = __this->___recorder_9;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Recorder_get_MicrophoneType_mA9B57A89A8AC287DA7BB3803FA706D501F55BBC8(L_18, NULL);
		G_B10_0 = ((((int32_t)L_19) == ((int32_t)1))? 1 : 0);
		goto IL_0099;
	}

IL_0098:
	{
		G_B10_0 = 0;
	}

IL_0099:
	{
		G_B12_0 = G_B10_0;
		goto IL_009c;
	}

IL_009b:
	{
		G_B12_0 = 1;
	}

IL_009c:
	{
		V_3 = (bool)G_B12_0;
		bool L_20 = V_3;
		if (!L_20)
		{
			goto IL_00b0;
		}
	}
	{
		// this.micDropdown.value = valueIndex;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_21 = __this->___micDropdown_7;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_21, L_22, NULL);
		// return;
		goto IL_00cc;
	}

IL_00b0:
	{
		// for (int valueIndex = 0; valueIndex < this.micOptions.Count; valueIndex++)
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00b5:
	{
		// for (int valueIndex = 0; valueIndex < this.micOptions.Count; valueIndex++)
		int32_t L_24 = V_1;
		List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4* L_25 = __this->___micOptions_6;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = List_1_get_Count_m36061DDA7BCE9122195582ED4AA9B40303BDB896_inline(L_25, List_1_get_Count_m36061DDA7BCE9122195582ED4AA9B40303BDB896_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_24) < ((int32_t)L_26))? 1 : 0);
		bool L_27 = V_4;
		if (L_27)
		{
			goto IL_0042;
		}
	}

IL_00cc:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector::RefreshMicrophones()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrophoneSelector_RefreshMicrophones_m745C35791DFE58A797753A74C183EE043ECB97B4 (MicrophoneSelector_t4271F3212A871220CB395D2553525E2AC0B49A16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDeviceEnumerator_tBAFA864015008142632BCAD7673D2ECF2FC396F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.unityMicEnum.Refresh();
		RuntimeObject* L_0 = __this->___unityMicEnum_14;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Photon.Voice.IDeviceEnumerator::Refresh() */, IDeviceEnumerator_tBAFA864015008142632BCAD7673D2ECF2FC396F7_il2cpp_TypeInfo_var, L_0);
		// this.photonMicEnum.Refresh();
		RuntimeObject* L_1 = __this->___photonMicEnum_15;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Photon.Voice.IDeviceEnumerator::Refresh() */, IDeviceEnumerator_tBAFA864015008142632BCAD7673D2ECF2FC396F7_il2cpp_TypeInfo_var, L_1);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector::PhotonVoiceCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrophoneSelector_PhotonVoiceCreated_mFA931084D3D785D985D7AD0F0BFB47F1E0908827 (MicrophoneSelector_t4271F3212A871220CB395D2553525E2AC0B49A16* __this, const RuntimeMethod* method) 
{
	{
		// this.RefreshMicrophones();
		MicrophoneSelector_RefreshMicrophones_m745C35791DFE58A797753A74C183EE043ECB97B4(__this, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrophoneSelector__ctor_mAE1827DA0BA4411A51D675B8990140A4CC141F0F (MicrophoneSelector_t4271F3212A871220CB395D2553525E2AC0B49A16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicrophoneSelectorEvent_t8A25F9B1CA111326232C99F82DDA60877DD8F005_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MicrophoneSelectorEvent onValueChanged = new MicrophoneSelectorEvent();
		MicrophoneSelectorEvent_t8A25F9B1CA111326232C99F82DDA60877DD8F005* L_0 = (MicrophoneSelectorEvent_t8A25F9B1CA111326232C99F82DDA60877DD8F005*)il2cpp_codegen_object_new(MicrophoneSelectorEvent_t8A25F9B1CA111326232C99F82DDA60877DD8F005_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MicrophoneSelectorEvent__ctor_m3624BE2B49B0AC64FD1620157DED9C32315FEC54(L_0, NULL);
		__this->___onValueChanged_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onValueChanged_5), (void*)L_0);
		// private Color defaultFillColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___defaultFillColor_12 = L_1;
		// private Color speakingFillColor = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		__this->___speakingFillColor_13 = L_2;
		VoiceComponent__ctor_mB6C412309DC148E0BC5729DEE8FAE7DDFBA5AC58(__this, NULL);
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector::<Awake>b__12_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrophoneSelector_U3CAwakeU3Eb__12_0_m3605C2E335CAB2057B17C8063CAA0072CA7B9E1A (MicrophoneSelector_t4271F3212A871220CB395D2553525E2AC0B49A16* __this, const RuntimeMethod* method) 
{
	{
		// this.SetupMicDropdown();
		MicrophoneSelector_SetupMicDropdown_mA34D3A8F89F10BA9F31FB50B7BC28D9D6FCF6DB1(__this, NULL);
		// this.SetCurrentValue();
		MicrophoneSelector_SetCurrentValue_mEF08E325E7C4CFA2F8C46BB25A161731206A6F3A(__this, NULL);
		// };
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector::<SetupMicDropdown>b__17_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrophoneSelector_U3CSetupMicDropdownU3Eb__17_0_mEC87F906E0BA0DC5ABE7FAEC983065B696894D3F (MicrophoneSelector_t4271F3212A871220CB395D2553525E2AC0B49A16* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		// this.micDropdown.onValueChanged.AddListener( (x) => this.SwitchToSelectedMic() );
		MicrophoneSelector_SwitchToSelectedMic_m3EC568246068F90A8333337582A60F9F432DFF37(__this, NULL);
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
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.MicrophoneSelector/MicrophoneSelectorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicrophoneSelectorEvent__ctor_m3624BE2B49B0AC64FD1620157DED9C32315FEC54 (MicrophoneSelectorEvent_t8A25F9B1CA111326232C99F82DDA60877DD8F005* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_m1AE84331E028D3DCEA0ADCF9160FEA3F49FC6C04_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m1AE84331E028D3DCEA0ADCF9160FEA3F49FC6C04(__this, UnityEvent_2__ctor_m1AE84331E028D3DCEA0ADCF9160FEA3F49FC6C04_RuntimeMethod_var);
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
// System.Boolean Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions::Mute(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonDemoExtensions_Mute_m3C5861ABCFBB2D526E4B9F654B013FE3825AA30A (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_player, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CB2C6E1A639BB12B2C001ABD841884E2E7EFE62);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return player.SetCustomProperties(new Hashtable(1) { { MUTED_KEY, true } });
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___0_player;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_1 = (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)il2cpp_codegen_object_new(Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Hashtable__ctor_m7087C3DEBFE5698EEB04CAD886D0FCEF2B5DE1CB(L_1, 1, NULL);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_2 = L_1;
		bool L_3 = ((bool)1);
		RuntimeObject* L_4 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_2);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_2, _stringLiteral6CB2C6E1A639BB12B2C001ABD841884E2E7EFE62, L_4, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_5;
		L_5 = Player_SetCustomProperties_mACE0A943F112829C5E9E91BC5FC8050FF9E4EECA(L_0, L_2, (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)NULL, (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA*)NULL, NULL);
		V_0 = L_5;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions::Unmute(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonDemoExtensions_Unmute_m7EA9F33D39C09E5D68CCBF161AE2ED305156215B (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_player, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CB2C6E1A639BB12B2C001ABD841884E2E7EFE62);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return player.SetCustomProperties(new Hashtable(1) { { MUTED_KEY, false } });
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___0_player;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_1 = (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)il2cpp_codegen_object_new(Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Hashtable__ctor_m7087C3DEBFE5698EEB04CAD886D0FCEF2B5DE1CB(L_1, 1, NULL);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_2 = L_1;
		bool L_3 = ((bool)0);
		RuntimeObject* L_4 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_2);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_2, _stringLiteral6CB2C6E1A639BB12B2C001ABD841884E2E7EFE62, L_4, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_5;
		L_5 = Player_SetCustomProperties_mACE0A943F112829C5E9E91BC5FC8050FF9E4EECA(L_0, L_2, (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)NULL, (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA*)NULL, NULL);
		V_0 = L_5;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions::IsMuted(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonDemoExtensions_IsMuted_m127E61CE7E50031FC2E4FA040CFF68913AE6F557 (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_player, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CB2C6E1A639BB12B2C001ABD841884E2E7EFE62);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return player.HasBoolProperty(MUTED_KEY);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___0_player;
		bool L_1;
		L_1 = PhotonDemoExtensions_HasBoolProperty_mF7163FE098E2D4947D7B97043EBBC523558F89D0(L_0, _stringLiteral6CB2C6E1A639BB12B2C001ABD841884E2E7EFE62, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions::SetPhotonVAD(Photon.Realtime.Player,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonDemoExtensions_SetPhotonVAD_m53DAF1111C58573DCB9ABC76B13404D0F9B08A1F (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_player, bool ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD20C03F16FDD55F0E75FB49008A84DCD32E50E5B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return player.SetCustomProperties(new Hashtable(1) { { PHOTON_VAD_KEY, value } });
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___0_player;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_1 = (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)il2cpp_codegen_object_new(Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Hashtable__ctor_m7087C3DEBFE5698EEB04CAD886D0FCEF2B5DE1CB(L_1, 1, NULL);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_2 = L_1;
		bool L_3 = ___1_value;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_2, _stringLiteralD20C03F16FDD55F0E75FB49008A84DCD32E50E5B, L_5, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_6;
		L_6 = Player_SetCustomProperties_mACE0A943F112829C5E9E91BC5FC8050FF9E4EECA(L_0, L_2, (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)NULL, (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA*)NULL, NULL);
		V_0 = L_6;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Boolean Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions::SetWebRTCVAD(Photon.Realtime.Player,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonDemoExtensions_SetWebRTCVAD_m30F21E28AA5F7CA5415113C2F8885EACCC1DC7D6 (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_player, bool ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27D02BB75532CBC06987E57A920470B3EFF4FCF0);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return player.SetCustomProperties(new Hashtable(1) { { WEBRTC_VAD_KEY, value } });
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___0_player;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_1 = (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)il2cpp_codegen_object_new(Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Hashtable__ctor_m7087C3DEBFE5698EEB04CAD886D0FCEF2B5DE1CB(L_1, 1, NULL);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_2 = L_1;
		bool L_3 = ___1_value;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_2, _stringLiteral27D02BB75532CBC06987E57A920470B3EFF4FCF0, L_5, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_6;
		L_6 = Player_SetCustomProperties_mACE0A943F112829C5E9E91BC5FC8050FF9E4EECA(L_0, L_2, (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)NULL, (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA*)NULL, NULL);
		V_0 = L_6;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Boolean Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions::SetAEC(Photon.Realtime.Player,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonDemoExtensions_SetAEC_mA6BFF796793AC2CE56EB92A1FE2A240645D0B5B3 (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_player, bool ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E9F96CCAAF251743BBDF936DAB8F646AFE517E8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return player.SetCustomProperties(new Hashtable(1) { { WEBRTC_AEC_KEY, value } });
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___0_player;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_1 = (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)il2cpp_codegen_object_new(Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Hashtable__ctor_m7087C3DEBFE5698EEB04CAD886D0FCEF2B5DE1CB(L_1, 1, NULL);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_2 = L_1;
		bool L_3 = ___1_value;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_2, _stringLiteral1E9F96CCAAF251743BBDF936DAB8F646AFE517E8, L_5, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_6;
		L_6 = Player_SetCustomProperties_mACE0A943F112829C5E9E91BC5FC8050FF9E4EECA(L_0, L_2, (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)NULL, (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA*)NULL, NULL);
		V_0 = L_6;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Boolean Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions::SetAGC(Photon.Realtime.Player,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonDemoExtensions_SetAGC_m616FB3D6B06B8D4D1CC10561C4D61C7A62F7418E (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_player, bool ___1_agcEnabled, int32_t ___2_gain, int32_t ___3_level, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF851313B194BE9C33390B9B1DDFB6DF6154044A);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* V_0 = NULL;
	bool V_1 = false;
	{
		// return player.SetCustomProperties(new Hashtable(1) { { WEBRTC_AGC_KEY, new object[] { agcEnabled, gain,level} } });
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___0_player;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_1 = (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)il2cpp_codegen_object_new(Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Hashtable__ctor_m7087C3DEBFE5698EEB04CAD886D0FCEF2B5DE1CB(L_1, 1, NULL);
		V_0 = L_1;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_2 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		bool L_5 = ___1_agcEnabled;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		int32_t L_9 = ___2_gain;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_8;
		int32_t L_13 = ___3_level;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_15);
		NullCheck(L_2);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_2, _stringLiteralEF851313B194BE9C33390B9B1DDFB6DF6154044A, (RuntimeObject*)L_12, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_16 = V_0;
		NullCheck(L_0);
		bool L_17;
		L_17 = Player_SetCustomProperties_mACE0A943F112829C5E9E91BC5FC8050FF9E4EECA(L_0, L_16, (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)NULL, (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA*)NULL, NULL);
		V_1 = L_17;
		goto IL_0041;
	}

IL_0041:
	{
		// }
		bool L_18 = V_1;
		return L_18;
	}
}
// System.Boolean Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions::SetMic(Photon.Realtime.Player,Photon.Voice.Unity.Recorder/MicType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonDemoExtensions_SetMic_m7C68297D31B2E426BB5C1C043D1CABFA52DC31CC (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_player, int32_t ___1_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicType_t72AD794BBCFD7E7B0D069950F4ACABB93006B95C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return player.SetCustomProperties(new Hashtable(1) { { MIC_KEY, type } } );
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___0_player;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_1 = (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)il2cpp_codegen_object_new(Hashtable_tD626399B3ADFD501225241D7366103F35472542A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Hashtable__ctor_m7087C3DEBFE5698EEB04CAD886D0FCEF2B5DE1CB(L_1, 1, NULL);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_2 = L_1;
		int32_t L_3 = ___1_type;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(MicType_t72AD794BBCFD7E7B0D069950F4ACABB93006B95C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_2, _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302, L_5, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_6;
		L_6 = Player_SetCustomProperties_mACE0A943F112829C5E9E91BC5FC8050FF9E4EECA(L_0, L_2, (Hashtable_tD626399B3ADFD501225241D7366103F35472542A*)NULL, (WebFlags_tFD3605BF6E5F1A42F1D0D6F0DA9A8B32CF7B27CA*)NULL, NULL);
		V_0 = L_6;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Boolean Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions::HasPhotonVAD(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonDemoExtensions_HasPhotonVAD_mDE15A0BAED26C0062C63B97170FDDC2D622186DE (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_player, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD20C03F16FDD55F0E75FB49008A84DCD32E50E5B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return player.HasBoolProperty(PHOTON_VAD_KEY);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___0_player;
		bool L_1;
		L_1 = PhotonDemoExtensions_HasBoolProperty_mF7163FE098E2D4947D7B97043EBBC523558F89D0(L_0, _stringLiteralD20C03F16FDD55F0E75FB49008A84DCD32E50E5B, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions::HasWebRTCVAD(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonDemoExtensions_HasWebRTCVAD_mB2AC9CFA4DF62C16D48376417E5F3573BA292C6D (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_player, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27D02BB75532CBC06987E57A920470B3EFF4FCF0);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return player.HasBoolProperty(WEBRTC_VAD_KEY);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___0_player;
		bool L_1;
		L_1 = PhotonDemoExtensions_HasBoolProperty_mF7163FE098E2D4947D7B97043EBBC523558F89D0(L_0, _stringLiteral27D02BB75532CBC06987E57A920470B3EFF4FCF0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions::HasAEC(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonDemoExtensions_HasAEC_mB4657AE735F1567F013B1A51B14498A102202EAA (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_player, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E9F96CCAAF251743BBDF936DAB8F646AFE517E8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return player.HasBoolProperty(WEBRTC_AEC_KEY);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___0_player;
		bool L_1;
		L_1 = PhotonDemoExtensions_HasBoolProperty_mF7163FE098E2D4947D7B97043EBBC523558F89D0(L_0, _stringLiteral1E9F96CCAAF251743BBDF936DAB8F646AFE517E8, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions::HasAGC(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonDemoExtensions_HasAGC_m989EDB390A204A81C338E363E58439BE3D4D5B2D (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_player, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF851313B194BE9C33390B9B1DDFB6DF6154044A);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		// var agc = player.GetObjectProperty(WEBRTC_AGC_KEY) as object[];
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___0_player;
		RuntimeObject* L_1;
		L_1 = PhotonDemoExtensions_GetObjectProperty_m81F8D1A336EE2959E91DE5742E735505574C9332(L_0, _stringLiteralEF851313B194BE9C33390B9B1DDFB6DF6154044A, NULL);
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		// return agc != null && agc.Length > 0 ? (bool)agc[0] : false;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		NullCheck(L_3);
		if ((((RuntimeArray*)L_3)->max_length))
		{
			goto IL_001c;
		}
	}

IL_0019:
	{
		G_B4_0 = 0;
		goto IL_0024;
	}

IL_001c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		RuntimeObject* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = ((int32_t)(((*(bool*)((bool*)(bool*)UnBox(L_6, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))))));
	}

IL_0024:
	{
		V_1 = (bool)G_B4_0;
		goto IL_0027;
	}

IL_0027:
	{
		// }
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Int32 Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions::GetAGCGain(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonDemoExtensions_GetAGCGain_mDACC83C282DBADC6953EBE097AA9C4BFD7314269 (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_player, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF851313B194BE9C33390B9B1DDFB6DF6154044A);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	{
		// var agc = player.GetObjectProperty(WEBRTC_AGC_KEY) as object[];
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___0_player;
		RuntimeObject* L_1;
		L_1 = PhotonDemoExtensions_GetObjectProperty_m81F8D1A336EE2959E91DE5742E735505574C9332(L_0, _stringLiteralEF851313B194BE9C33390B9B1DDFB6DF6154044A, NULL);
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		// return agc != null && agc.Length > 1 ? (int)agc[1] : 0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		NullCheck(L_3);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) > ((int32_t)1)))
		{
			goto IL_001e;
		}
	}

IL_001b:
	{
		G_B4_0 = 0;
		goto IL_0026;
	}

IL_001e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 1;
		RuntimeObject* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_6, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
	}

IL_0026:
	{
		V_1 = G_B4_0;
		goto IL_0029;
	}

IL_0029:
	{
		// }
		int32_t L_7 = V_1;
		return L_7;
	}
}
// System.Int32 Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions::GetAGCLevel(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonDemoExtensions_GetAGCLevel_mC118BD445988A9239B81F2739DB931E2DB127121 (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_player, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF851313B194BE9C33390B9B1DDFB6DF6154044A);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	{
		// var agc = player.GetObjectProperty(WEBRTC_AGC_KEY) as object[];
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___0_player;
		RuntimeObject* L_1;
		L_1 = PhotonDemoExtensions_GetObjectProperty_m81F8D1A336EE2959E91DE5742E735505574C9332(L_0, _stringLiteralEF851313B194BE9C33390B9B1DDFB6DF6154044A, NULL);
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		// return agc != null && agc.Length > 2 ? (int)agc[2] : 0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		NullCheck(L_3);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) > ((int32_t)2)))
		{
			goto IL_001e;
		}
	}

IL_001b:
	{
		G_B4_0 = 0;
		goto IL_0026;
	}

IL_001e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 2;
		RuntimeObject* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_6, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
	}

IL_0026:
	{
		V_1 = G_B4_0;
		goto IL_0029;
	}

IL_0029:
	{
		// }
		int32_t L_7 = V_1;
		return L_7;
	}
}
// System.Nullable`1<Photon.Voice.Unity.Recorder/MicType> Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions::GetMic(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t64073E86A2DD4799806C11B9AB91647392F7B8EB PhotonDemoExtensions_GetMic_m4220F228B8FA7A23C4704054E08CD421E7C0B649 (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_player, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicType_t72AD794BBCFD7E7B0D069950F4ACABB93006B95C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mA3D7664F2A78EFADD951B0211A5BB9A9FB7E1488_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t64073E86A2DD4799806C11B9AB91647392F7B8EB V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t64073E86A2DD4799806C11B9AB91647392F7B8EB V_1;
	memset((&V_1), 0, sizeof(V_1));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// Recorder.MicType? mic = null;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t64073E86A2DD4799806C11B9AB91647392F7B8EB));
	}
	try
	{// begin try (depth: 1)
		// mic = (Recorder.MicType)player.GetObjectProperty(MIC_KEY);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___0_player;
		RuntimeObject* L_1;
		L_1 = PhotonDemoExtensions_GetObjectProperty_m81F8D1A336EE2959E91DE5742E735505574C9332(L_0, _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302, NULL);
		Nullable_1_t64073E86A2DD4799806C11B9AB91647392F7B8EB L_2;
		memset((&L_2), 0, sizeof(L_2));
		Nullable_1__ctor_mA3D7664F2A78EFADD951B0211A5BB9A9FB7E1488((&L_2), ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_1, MicType_t72AD794BBCFD7E7B0D069950F4ACABB93006B95C_il2cpp_TypeInfo_var)))), /*hidden argument*/Nullable_1__ctor_mA3D7664F2A78EFADD951B0211A5BB9A9FB7E1488_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0030;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{// begin catch(System.Object)
		RuntimeObject* L_3 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		// catch {
		// mic = null;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t64073E86A2DD4799806C11B9AB91647392F7B8EB));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0030;
	}// end catch (depth: 1)

IL_0030:
	{
		// return mic;
		Nullable_1_t64073E86A2DD4799806C11B9AB91647392F7B8EB L_4 = V_0;
		V_1 = L_4;
		goto IL_0034;
	}

IL_0034:
	{
		// }
		Nullable_1_t64073E86A2DD4799806C11B9AB91647392F7B8EB L_5 = V_1;
		return L_5;
	}
}
// System.Boolean Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions::HasBoolProperty(Photon.Realtime.Player,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonDemoExtensions_HasBoolProperty_mF7163FE098E2D4947D7B97043EBBC523558F89D0 (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_player, String_t* ___1_prop, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// return player.CustomProperties.TryGetValue(prop, out temp) && (bool)temp;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___0_player;
		NullCheck(L_0);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_1;
		L_1 = Player_get_CustomProperties_m398B81FB1DEE02243650B8CB5FBF5C7F1B8928D6_inline(L_0, NULL);
		String_t* L_2 = ___1_prop;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_1, L_2, (&V_0), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		G_B3_0 = ((int32_t)(((*(bool*)((bool*)(bool*)UnBox(L_4, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))))));
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_1 = (bool)G_B3_0;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Nullable`1<System.Int32> Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions::GetIntProperty(Photon.Realtime.Player,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 PhotonDemoExtensions_GetIntProperty_mF026B4FB9404DF3F3C861B273B042FF039D8117B (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_player, String_t* ___1_prop, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (player.CustomProperties.TryGetValue(prop, out temp))
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___0_player;
		NullCheck(L_0);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_1;
		L_1 = Player_get_CustomProperties_m398B81FB1DEE02243650B8CB5FBF5C7F1B8928D6_inline(L_0, NULL);
		String_t* L_2 = ___1_prop;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_1, L_2, (&V_0), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		// return (int)temp;
		RuntimeObject* L_5 = V_0;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_6), ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_5, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		V_2 = L_6;
		goto IL_002d;
	}

IL_0021:
	{
		// return null;
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_7 = V_3;
		V_2 = L_7;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_8 = V_2;
		return L_8;
	}
}
// System.Object Photon.Voice.Unity.Demos.DemoVoiceUI.PhotonDemoExtensions::GetObjectProperty(Photon.Realtime.Player,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PhotonDemoExtensions_GetObjectProperty_m81F8D1A336EE2959E91DE5742E735505574C9332 (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_player, String_t* ___1_prop, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		// if (player.CustomProperties.TryGetValue(prop, out temp))
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___0_player;
		NullCheck(L_0);
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_1;
		L_1 = Player_get_CustomProperties_m398B81FB1DEE02243650B8CB5FBF5C7F1B8928D6_inline(L_0, NULL);
		String_t* L_2 = ___1_prop;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_1, L_2, (&V_0), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		// return temp;
		RuntimeObject* L_5 = V_0;
		V_2 = L_5;
		goto IL_001b;
	}

IL_0017:
	{
		// return null;
		V_2 = NULL;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		RuntimeObject* L_6 = V_2;
		return L_6;
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
// Photon.Realtime.Player Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::get_Actor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* RemoteSpeakerUI_get_Actor_m974F6B82710CE6A7E67976EA8B446F6542A0A15E (RemoteSpeakerUI_t16CA1BA6C6B7F673E5A2F6C3262768298ACB2728* __this, const RuntimeMethod* method) 
{
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* V_0 = NULL;
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* G_B4_0 = NULL;
	{
		// protected Player Actor { get { return this.loadBalancingClient != null && this.loadBalancingClient.CurrentRoom != null ? this.loadBalancingClient.CurrentRoom.GetPlayer(this.speaker.RemoteVoice.PlayerId) : null; } }
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = __this->___loadBalancingClient_18;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_1 = __this->___loadBalancingClient_18;
		NullCheck(L_1);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_2;
		L_2 = LoadBalancingClient_get_CurrentRoom_mADB06D45AD1F8289D93F08F322C9FDB694EAC291_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}

IL_0016:
	{
		G_B4_0 = ((Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C*)(NULL));
		goto IL_003a;
	}

IL_0019:
	{
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_3 = __this->___loadBalancingClient_18;
		NullCheck(L_3);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_4;
		L_4 = LoadBalancingClient_get_CurrentRoom_mADB06D45AD1F8289D93F08F322C9FDB694EAC291_inline(L_3, NULL);
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_5 = __this->___speaker_15;
		NullCheck(L_5);
		RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* L_6;
		L_6 = Speaker_get_RemoteVoice_m312D32186916EAD30FAF99BCDCEE4514767C9F5D_inline(L_5, NULL);
		NullCheck(L_6);
		int32_t L_7 = L_6->___PlayerId_1;
		NullCheck(L_4);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_8;
		L_8 = VirtualFuncInvoker2< Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C*, int32_t, bool >::Invoke(10 /* Photon.Realtime.Player Photon.Realtime.Room::GetPlayer(System.Int32,System.Boolean) */, L_4, L_7, (bool)0);
		G_B4_0 = L_8;
	}

IL_003a:
	{
		V_0 = G_B4_0;
		goto IL_003d;
	}

IL_003d:
	{
		// protected Player Actor { get { return this.loadBalancingClient != null && this.loadBalancingClient.CurrentRoom != null ? this.loadBalancingClient.CurrentRoom.GetPlayer(this.speaker.RemoteVoice.PlayerId) : null; } }
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_9 = V_0;
		return L_9;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSpeakerUI_Start_m6B1C68FA05BA2349168150B24E0191EC0EAE112C (RemoteSpeakerUI_t16CA1BA6C6B7F673E5A2F6C3262768298ACB2728* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpeaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE_mB771EC7BA8B007F33B7C7C75C7CD2073475476E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteSpeakerUI_OnPlayDelayChanged_m729491A09FB8BD13B93000BF7D148A5A0FCBAE69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteSpeakerUI_OnVolumeChanged_mE7EC7BC022C623FF353EB589E146633E86CC20EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// this.speaker = this.GetComponent<Speaker>();
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_0;
		L_0 = Component_GetComponent_TisSpeaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE_mB771EC7BA8B007F33B7C7C75C7CD2073475476E7(__this, Component_GetComponent_TisSpeaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE_mB771EC7BA8B007F33B7C7C75C7CD2073475476E7_RuntimeMethod_var);
		__this->___speaker_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___speaker_15), (void*)L_0);
		// this.audioSource = this.GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_16), (void*)L_1);
		// this.playDelayInputField.text = this.speaker.PlayDelay.ToString();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_2 = __this->___playDelayInputField_7;
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_3 = __this->___speaker_15;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Speaker_get_PlayDelay_m2354B812AC8B4E9270F815FFA0FD9737AACA6EB1(L_3, NULL);
		V_0 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_2);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_2, L_5, NULL);
		// this.playDelayInputField.SetSingleOnEndEditCallback(this.OnPlayDelayChanged);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_6 = __this->___playDelayInputField_7;
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_7 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_7, __this, (intptr_t)((void*)RemoteSpeakerUI_OnPlayDelayChanged_m729491A09FB8BD13B93000BF7D148A5A0FCBAE69_RuntimeMethod_var), NULL);
		UiExtensions_SetSingleOnEndEditCallback_m64F8E3936117D68DC81ECB3CFEB3E4886C7A3A93(L_6, L_7, NULL);
		// this.SetNickname();
		RemoteSpeakerUI_SetNickname_mE0C237EC075F4DE96FE7B580D80FBFE0C97CD9DC(__this, NULL);
		// this.SetMutedState();
		RemoteSpeakerUI_SetMutedState_m76F2A855CC2BCD858BC34D58D146AE871B240D9F(__this, NULL);
		// this.SetProperties();
		RemoteSpeakerUI_SetProperties_mA0B647E195E63CFAAF426BFFC5C1C84ED6BA7AF3(__this, NULL);
		// this.volumeSlider.minValue = 0f;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_8 = __this->___volumeSlider_9;
		NullCheck(L_8);
		Slider_set_minValue_mC4D1F7709276A9A418F9284A04799FF767DEDC4F(L_8, (0.0f), NULL);
		// this.volumeSlider.maxValue = 1f;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_9 = __this->___volumeSlider_9;
		NullCheck(L_9);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_9, (1.0f), NULL);
		// this.volumeSlider.SetSingleOnValueChangedCallback(this.OnVolumeChanged);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_10 = __this->___volumeSlider_9;
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_11 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_11, __this, (intptr_t)((void*)RemoteSpeakerUI_OnVolumeChanged_mE7EC7BC022C623FF353EB589E146633E86CC20EE_RuntimeMethod_var), NULL);
		UiExtensions_SetSingleOnValueChangedCallback_mE4BD73BD825BDE03DE9654B1C820B60AB9BE8915(L_10, L_11, NULL);
		// this.volumeSlider.value = 1;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_12 = __this->___volumeSlider_9;
		NullCheck(L_12);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_12, (1.0f));
		// this.OnVolumeChanged(1);
		RemoteSpeakerUI_OnVolumeChanged_mE7EC7BC022C623FF353EB589E146633E86CC20EE(__this, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::OnVolumeChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSpeakerUI_OnVolumeChanged_mE7EC7BC022C623FF353EB589E146633E86CC20EE (RemoteSpeakerUI_t16CA1BA6C6B7F673E5A2F6C3262768298ACB2728* __this, float ___0_newValue, const RuntimeMethod* method) 
{
	{
		// this.audioSource.volume = newValue;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_16;
		float L_1 = ___0_newValue;
		NullCheck(L_0);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::OnPlayDelayChanged(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSpeakerUI_OnPlayDelayChanged_m729491A09FB8BD13B93000BF7D148A5A0FCBAE69 (RemoteSpeakerUI_t16CA1BA6C6B7F673E5A2F6C3262768298ACB2728* __this, String_t* ___0_str, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral948D5540F75EFEF54DA7E6CC50302CD14D50F0C1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// if (int.TryParse(str, out int x))
		String_t* L_0 = ___0_str;
		bool L_1;
		L_1 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_0, (&V_0), NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// this.speaker.PlayDelay = x;
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_3 = __this->___speaker_15;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Speaker_set_PlayDelay_m377EFF13EF801CB6729EC928AD4C6AB5E5F4FD46(L_3, L_4, NULL);
		goto IL_0035;
	}

IL_001e:
	{
		// Debug.LogErrorFormat("Failed to parse {0}", str);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		String_t* L_7 = ___0_str;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral948D5540F75EFEF54DA7E6CC50302CD14D50F0C1, L_6, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSpeakerUI_Update_m033361208E9E832CFB8BE170A1B3BCE7C0130CA1 (RemoteSpeakerUI_t16CA1BA6C6B7F673E5A2F6C3262768298ACB2728* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE2117BC4109A6033BA69CFDAB4ADC8FD4F90401);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD86E358823F036B8B0DFE65D48F423594BE69982);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// this.remoteIsTalking.enabled = this.speaker.IsPlaying;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___remoteIsTalking_6;
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_1 = __this->___speaker_15;
		NullCheck(L_1);
		bool L_2;
		L_2 = Speaker_get_IsPlaying_m7F784C6E15456AD329779754D88D97E6C81BD842(L_1, NULL);
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, L_2, NULL);
		// if (this.speaker.IsPlaying)
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_3 = __this->___speaker_15;
		NullCheck(L_3);
		bool L_4;
		L_4 = Speaker_get_IsPlaying_m7F784C6E15456AD329779754D88D97E6C81BD842(L_3, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0089;
		}
	}
	{
		// int lag = this.speaker.Lag;
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_6 = __this->___speaker_15;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Speaker_get_Lag_m9D4BEBE542D8B8FE7561E00937EEB3387DB78560(L_6, NULL);
		V_1 = L_7;
		// smoothedLag = (lag + smoothedLag * 99) / 100;
		int32_t L_8 = V_1;
		int32_t L_9 = __this->___smoothedLag_19;
		__this->___smoothedLag_19 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_8, ((int32_t)il2cpp_codegen_multiply(L_9, ((int32_t)99)))))/((int32_t)100)));
		// this.bufferLagText.text = string.Concat("Buffer Lag: ", smoothedLag, "/", lag);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___bufferLagText_8;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralBE2117BC4109A6033BA69CFDAB4ADC8FD4F90401);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralBE2117BC4109A6033BA69CFDAB4ADC8FD4F90401);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_12;
		int32_t L_14 = __this->___smoothedLag_19;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_17;
		int32_t L_19 = V_1;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_21);
		String_t* L_22;
		L_22 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_18, NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_22);
		goto IL_00b1;
	}

IL_0089:
	{
		// this.bufferLagText.text = string.Concat("Buffer Lag: ", smoothedLag, "/-");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_23 = __this->___bufferLagText_8;
		int32_t L_24 = __this->___smoothedLag_19;
		int32_t L_25 = L_24;
		RuntimeObject* L_26 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_25);
		String_t* L_27;
		L_27 = String_Concat_m9DF47FC6E1F8341012CA3FF02993D372AA7A96C9(_stringLiteralBE2117BC4109A6033BA69CFDAB4ADC8FD4F90401, L_26, _stringLiteralD86E358823F036B8B0DFE65D48F423594BE69982, NULL);
		NullCheck(L_23);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_27);
	}

IL_00b1:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSpeakerUI_OnDestroy_m0F9767BCFCD6F2DFC2984BA7904CBE45119EF26A (RemoteSpeakerUI_t16CA1BA6C6B7F673E5A2F6C3262768298ACB2728* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (this.loadBalancingClient != null)
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = __this->___loadBalancingClient_18;
		V_0 = (bool)((!(((RuntimeObject*)(LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// this.loadBalancingClient.RemoveCallbackTarget(this);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_2 = __this->___loadBalancingClient_18;
		NullCheck(L_2);
		LoadBalancingClient_RemoveCallbackTarget_mBDAB0466C92B29CFFB2A1B6E70E7FE3E8910740A(L_2, __this, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::SetNickname()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSpeakerUI_SetNickname_mE0C237EC075F4DE96FE7B580D80FBFE0C97CD9DC (RemoteSpeakerUI_t16CA1BA6C6B7F673E5A2F6C3262768298ACB2728* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral446F4074B6FC992AC4C43BF17861EB82CCF98A12);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// string nick = this.speaker.name;
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_0 = __this->___speaker_15;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		V_0 = L_1;
		// if (this.Actor != null)
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_2;
		L_2 = RemoteSpeakerUI_get_Actor_m974F6B82710CE6A7E67976EA8B446F6542A0A15E(__this, NULL);
		V_1 = (bool)((!(((RuntimeObject*)(Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		// nick = this.Actor.NickName;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_4;
		L_4 = RemoteSpeakerUI_get_Actor_m974F6B82710CE6A7E67976EA8B446F6542A0A15E(__this, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Player_get_NickName_mC1B2AC59B8850ABEB4DA27199675066DC3BF0738(L_4, NULL);
		V_0 = L_5;
		// if (string.IsNullOrEmpty(nick))
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_6, NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		// nick = string.Concat("user ", this.Actor.ActorNumber);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_9;
		L_9 = RemoteSpeakerUI_get_Actor_m974F6B82710CE6A7E67976EA8B446F6542A0A15E(__this, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Player_get_ActorNumber_mE177B60195A5329B1E5D3012295DB0098B7A0F3A(L_9, NULL);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13;
		L_13 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(_stringLiteral446F4074B6FC992AC4C43BF17861EB82CCF98A12, L_12, NULL);
		V_0 = L_13;
	}

IL_004e:
	{
	}

IL_004f:
	{
		// this.nameText.text = nick;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___nameText_4;
		String_t* L_15 = V_0;
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_15);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::SetMutedState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSpeakerUI_SetMutedState_m76F2A855CC2BCD858BC34D58D146AE871B240D9F (RemoteSpeakerUI_t16CA1BA6C6B7F673E5A2F6C3262768298ACB2728* __this, const RuntimeMethod* method) 
{
	{
		// this.SetMutedState(this.Actor.IsMuted());
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0;
		L_0 = RemoteSpeakerUI_get_Actor_m974F6B82710CE6A7E67976EA8B446F6542A0A15E(__this, NULL);
		bool L_1;
		L_1 = PhotonDemoExtensions_IsMuted_m127E61CE7E50031FC2E4FA040CFF68913AE6F557(L_0, NULL);
		VirtualActionInvoker1< bool >::Invoke(10 /* System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::SetMutedState(System.Boolean) */, __this, L_1);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::SetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSpeakerUI_SetProperties_mA0B647E195E63CFAAF426BFFC5C1C84ED6BA7AF3 (RemoteSpeakerUI_t16CA1BA6C6B7F673E5A2F6C3262768298ACB2728* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mC38C1723F0B562B0434E57A698D253D8C24557FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mA6DA85312C2DFFA8A4D16346532C6F26F9C13577_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0149A4E83E989B46DDC9EF84B83BFF2EDD9824C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80131A9CBA85F77AB516C1FA4DF2852B1588286B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3368896F4020992296BCF303550CF1DE916BB7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3B3BFC5383BDA4F6419438C59D2C67B65CEC175);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t64073E86A2DD4799806C11B9AB91647392F7B8EB V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Nullable_1_t64073E86A2DD4799806C11B9AB91647392F7B8EB V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	String_t* G_B5_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B5_1 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B4_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_0 = NULL;
	{
		// this.photonVad.enabled = this.Actor.HasPhotonVAD();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___photonVad_10;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_1;
		L_1 = RemoteSpeakerUI_get_Actor_m974F6B82710CE6A7E67976EA8B446F6542A0A15E(__this, NULL);
		bool L_2;
		L_2 = PhotonDemoExtensions_HasPhotonVAD_mDE15A0BAED26C0062C63B97170FDDC2D622186DE(L_1, NULL);
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, L_2, NULL);
		// this.webrtcVad.enabled = this.Actor.HasWebRTCVAD();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___webrtcVad_11;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_4;
		L_4 = RemoteSpeakerUI_get_Actor_m974F6B82710CE6A7E67976EA8B446F6542A0A15E(__this, NULL);
		bool L_5;
		L_5 = PhotonDemoExtensions_HasWebRTCVAD_mB2AC9CFA4DF62C16D48376417E5F3573BA292C6D(L_4, NULL);
		NullCheck(L_3);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, L_5, NULL);
		// this.aec.enabled = this.Actor.HasAEC();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___aec_12;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_7;
		L_7 = RemoteSpeakerUI_get_Actor_m974F6B82710CE6A7E67976EA8B446F6542A0A15E(__this, NULL);
		bool L_8;
		L_8 = PhotonDemoExtensions_HasAEC_mB4657AE735F1567F013B1A51B14498A102202EAA(L_7, NULL);
		NullCheck(L_6);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, L_8, NULL);
		// this.agc.enabled = this.Actor.HasAGC();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___agc_13;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_10;
		L_10 = RemoteSpeakerUI_get_Actor_m974F6B82710CE6A7E67976EA8B446F6542A0A15E(__this, NULL);
		bool L_11;
		L_11 = PhotonDemoExtensions_HasAGC_m989EDB390A204A81C338E363E58439BE3D4D5B2D(L_10, NULL);
		NullCheck(L_9);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_9, L_11, NULL);
		// this.agc.text = "AGC Gain: " + this.Actor.GetAGCGain() + " Level: "+this.Actor.GetAGCLevel();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___agc_13;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_13;
		L_13 = RemoteSpeakerUI_get_Actor_m974F6B82710CE6A7E67976EA8B446F6542A0A15E(__this, NULL);
		int32_t L_14;
		L_14 = PhotonDemoExtensions_GetAGCGain_mDACC83C282DBADC6953EBE097AA9C4BFD7314269(L_13, NULL);
		V_1 = L_14;
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_16;
		L_16 = RemoteSpeakerUI_get_Actor_m974F6B82710CE6A7E67976EA8B446F6542A0A15E(__this, NULL);
		int32_t L_17;
		L_17 = PhotonDemoExtensions_GetAGCLevel_mC118BD445988A9239B81F2739DB931E2DB127121(L_16, NULL);
		V_1 = L_17;
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_19;
		L_19 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral0149A4E83E989B46DDC9EF84B83BFF2EDD9824C1, L_15, _stringLiteralD3368896F4020992296BCF303550CF1DE916BB7C, L_18, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_19);
		// var micVal = this.Actor.GetMic();
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_20;
		L_20 = RemoteSpeakerUI_get_Actor_m974F6B82710CE6A7E67976EA8B446F6542A0A15E(__this, NULL);
		Nullable_1_t64073E86A2DD4799806C11B9AB91647392F7B8EB L_21;
		L_21 = PhotonDemoExtensions_GetMic_m4220F228B8FA7A23C4704054E08CD421E7C0B649(L_20, NULL);
		V_0 = L_21;
		// this.mic.enabled = micVal.HasValue;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_22 = __this->___mic_14;
		bool L_23;
		L_23 = Nullable_1_get_HasValue_mA6DA85312C2DFFA8A4D16346532C6F26F9C13577_inline((&V_0), Nullable_1_get_HasValue_mA6DA85312C2DFFA8A4D16346532C6F26F9C13577_RuntimeMethod_var);
		NullCheck(L_22);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_22, L_23, NULL);
		// this.mic.text = micVal.HasValue?(micVal == Recorder.MicType.Unity?"Unity MIC":"Photon MIC"):"";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_24 = __this->___mic_14;
		bool L_25;
		L_25 = Nullable_1_get_HasValue_mA6DA85312C2DFFA8A4D16346532C6F26F9C13577_inline((&V_0), Nullable_1_get_HasValue_mA6DA85312C2DFFA8A4D16346532C6F26F9C13577_RuntimeMethod_var);
		G_B1_0 = L_24;
		if (L_25)
		{
			G_B2_0 = L_24;
			goto IL_00d3;
		}
	}
	{
		G_B5_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B5_1 = G_B1_0;
		goto IL_00f7;
	}

IL_00d3:
	{
		Nullable_1_t64073E86A2DD4799806C11B9AB91647392F7B8EB L_26 = V_0;
		V_2 = L_26;
		V_3 = 0;
		int32_t L_27;
		L_27 = Nullable_1_GetValueOrDefault_mC38C1723F0B562B0434E57A698D253D8C24557FD_inline((&V_2), Nullable_1_GetValueOrDefault_mC38C1723F0B562B0434E57A698D253D8C24557FD_RuntimeMethod_var);
		int32_t L_28 = V_3;
		bool L_29;
		L_29 = Nullable_1_get_HasValue_mA6DA85312C2DFFA8A4D16346532C6F26F9C13577_inline((&V_2), Nullable_1_get_HasValue_mA6DA85312C2DFFA8A4D16346532C6F26F9C13577_RuntimeMethod_var);
		G_B3_0 = G_B2_0;
		if (((int32_t)(((((int32_t)L_27) == ((int32_t)L_28))? 1 : 0)&(int32_t)L_29)))
		{
			G_B4_0 = G_B2_0;
			goto IL_00f2;
		}
	}
	{
		G_B5_0 = _stringLiteralE3B3BFC5383BDA4F6419438C59D2C67B65CEC175;
		G_B5_1 = G_B3_0;
		goto IL_00f7;
	}

IL_00f2:
	{
		G_B5_0 = _stringLiteral80131A9CBA85F77AB516C1FA4DF2852B1588286B;
		G_B5_1 = G_B4_0;
	}

IL_00f7:
	{
		NullCheck(G_B5_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B5_1, G_B5_0);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::SetMutedState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSpeakerUI_SetMutedState_m087C9A2836230429E34D4932E60FD45F957CF991 (RemoteSpeakerUI_t16CA1BA6C6B7F673E5A2F6C3262768298ACB2728* __this, bool ___0_isMuted, const RuntimeMethod* method) 
{
	{
		// this.remoteIsMuting.enabled = isMuted;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___remoteIsMuting_5;
		bool L_1 = ___0_isMuted;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::OnActorPropertiesChanged(Photon.Realtime.Player,ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSpeakerUI_OnActorPropertiesChanged_m7CFBB3EE00C33668D250F4BC5C44FC630929834A (RemoteSpeakerUI_t16CA1BA6C6B7F673E5A2F6C3262768298ACB2728* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_targetPlayer, Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___1_changedProps, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		// if (this.speaker != null && this.speaker.RemoteVoice != null && targetPlayer.ActorNumber == this.speaker.RemoteVoice.PlayerId)
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_0 = __this->___speaker_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_2 = __this->___speaker_15;
		NullCheck(L_2);
		RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* L_3;
		L_3 = Speaker_get_RemoteVoice_m312D32186916EAD30FAF99BCDCEE4514767C9F5D_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_4 = ___0_targetPlayer;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Player_get_ActorNumber_mE177B60195A5329B1E5D3012295DB0098B7A0F3A(L_4, NULL);
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_6 = __this->___speaker_15;
		NullCheck(L_6);
		RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* L_7;
		L_7 = Speaker_get_RemoteVoice_m312D32186916EAD30FAF99BCDCEE4514767C9F5D_inline(L_6, NULL);
		NullCheck(L_7);
		int32_t L_8 = L_7->___PlayerId_1;
		G_B4_0 = ((((int32_t)L_5) == ((int32_t)L_8))? 1 : 0);
		goto IL_0037;
	}

IL_0036:
	{
		G_B4_0 = 0;
	}

IL_0037:
	{
		V_0 = (bool)G_B4_0;
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		// this.SetMutedState();
		RemoteSpeakerUI_SetMutedState_m76F2A855CC2BCD858BC34D58D146AE871B240D9F(__this, NULL);
		// this.SetNickname();
		RemoteSpeakerUI_SetNickname_mE0C237EC075F4DE96FE7B580D80FBFE0C97CD9DC(__this, NULL);
		// this.SetProperties();
		RemoteSpeakerUI_SetProperties_mA0B647E195E63CFAAF426BFFC5C1C84ED6BA7AF3(__this, NULL);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::Init(Photon.Voice.Unity.VoiceConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSpeakerUI_Init_m38A987B4944D75C90CA9BBCC14D05467030562FE (RemoteSpeakerUI_t16CA1BA6C6B7F673E5A2F6C3262768298ACB2728* __this, VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* ___0_vC, const RuntimeMethod* method) 
{
	{
		// this.voiceConnection = vC;
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_0 = ___0_vC;
		__this->___voiceConnection_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___voiceConnection_17), (void*)L_0);
		// this.loadBalancingClient = this.voiceConnection.Client;
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_1 = __this->___voiceConnection_17;
		NullCheck(L_1);
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_2;
		L_2 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F(L_1, NULL);
		__this->___loadBalancingClient_18 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___loadBalancingClient_18), (void*)L_2);
		// this.loadBalancingClient.AddCallbackTarget(this);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_3 = __this->___loadBalancingClient_18;
		NullCheck(L_3);
		LoadBalancingClient_AddCallbackTarget_mF98AF4F5A8EF6794C9038C50C619B03EC7FB22B8(L_3, __this, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::Photon.Realtime.IInRoomCallbacks.OnPlayerEnteredRoom(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSpeakerUI_Photon_Realtime_IInRoomCallbacks_OnPlayerEnteredRoom_mE261A55D276635831B703F511C50C5BDE975CED8 (RemoteSpeakerUI_t16CA1BA6C6B7F673E5A2F6C3262768298ACB2728* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_newPlayer, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::Photon.Realtime.IInRoomCallbacks.OnPlayerLeftRoom(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSpeakerUI_Photon_Realtime_IInRoomCallbacks_OnPlayerLeftRoom_m6837468823546A33CAAEE3B2420D8F39266F0FE2 (RemoteSpeakerUI_t16CA1BA6C6B7F673E5A2F6C3262768298ACB2728* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_otherPlayer, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::Photon.Realtime.IInRoomCallbacks.OnRoomPropertiesUpdate(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSpeakerUI_Photon_Realtime_IInRoomCallbacks_OnRoomPropertiesUpdate_mC6290E6913B973D8A24BCF173B01AD230E77B7CE (RemoteSpeakerUI_t16CA1BA6C6B7F673E5A2F6C3262768298ACB2728* __this, Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___0_propertiesThatChanged, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::Photon.Realtime.IInRoomCallbacks.OnPlayerPropertiesUpdate(Photon.Realtime.Player,ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSpeakerUI_Photon_Realtime_IInRoomCallbacks_OnPlayerPropertiesUpdate_m7E5B4944B0CAE062597BE65E664BCA2B7CBFAB6A (RemoteSpeakerUI_t16CA1BA6C6B7F673E5A2F6C3262768298ACB2728* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_targetPlayer, Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___1_changedProps, const RuntimeMethod* method) 
{
	{
		// this.OnActorPropertiesChanged(targetPlayer, changedProps);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___0_targetPlayer;
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_1 = ___1_changedProps;
		VirtualActionInvoker2< Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C*, Hashtable_tD626399B3ADFD501225241D7366103F35472542A* >::Invoke(11 /* System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::OnActorPropertiesChanged(Photon.Realtime.Player,ExitGames.Client.Photon.Hashtable) */, __this, L_0, L_1);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSpeakerUI_Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched_m586A53DAC3E3CD5AA676C12FB68D053E09C7CC30 (RemoteSpeakerUI_t16CA1BA6C6B7F673E5A2F6C3262768298ACB2728* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___0_newMasterClient, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.Demos.DemoVoiceUI.RemoteSpeakerUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSpeakerUI__ctor_m9AB327EE21321C3F603A7C9EDF55CB8ECF12F6CA (RemoteSpeakerUI_t16CA1BA6C6B7F673E5A2F6C3262768298ACB2728* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_Start_m654498A211F20CBE3A2648EF7A5D1ABC5F406BA2 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4_m35DDE72490FF0112059E3A8C5F21DD893E2026C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A40D860326E4F58DF247BAAC9F338720FCF0B75);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// this.lbc = new LoadBalancingClient();
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4*)il2cpp_codegen_object_new(LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LoadBalancingClient__ctor_mC3FD7885A9F9E80E8949ACDE2590016410F1186C(L_0, 0, NULL);
		__this->___lbc_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lbc_5), (void*)L_0);
		// this.lbc.AddCallbackTarget(this);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_1 = __this->___lbc_5;
		NullCheck(L_1);
		LoadBalancingClient_AddCallbackTarget_mF98AF4F5A8EF6794C9038C50C619B03EC7FB22B8(L_1, __this, NULL);
		// if (!this.lbc.ConnectUsingSettings(appSettings))
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_2 = __this->___lbc_5;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_3 = __this->___appSettings_4;
		NullCheck(L_2);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* >::Invoke(8 /* System.Boolean Photon.Realtime.LoadBalancingClient::ConnectUsingSettings(Photon.Realtime.AppSettings) */, L_2, L_3);
		V_0 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		// Debug.LogError("Error while connecting");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral4A40D860326E4F58DF247BAAC9F338720FCF0B75, NULL);
	}

IL_003f:
	{
		// this.ch = this.gameObject.GetComponent<ConnectionHandler>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* L_7;
		L_7 = GameObject_GetComponent_TisConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4_m35DDE72490FF0112059E3A8C5F21DD893E2026C1(L_6, GameObject_GetComponent_TisConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4_m35DDE72490FF0112059E3A8C5F21DD893E2026C1_RuntimeMethod_var);
		__this->___ch_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ch_6), (void*)L_7);
		// if (this.ch != null)
		ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* L_8 = __this->___ch_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_9;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0080;
		}
	}
	{
		// this.ch.Client = this.lbc;
		ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* L_11 = __this->___ch_6;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_12 = __this->___lbc_5;
		NullCheck(L_11);
		ConnectionHandler_set_Client_m3ABCA8BEB50CC58254153280CE8F60154D42E29B_inline(L_11, L_12, NULL);
		// this.ch.StartFallbackSendAckThread();
		ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* L_13 = __this->___ch_6;
		NullCheck(L_13);
		ConnectionHandler_StartFallbackSendAckThread_mBA4B3FC1BABFBB2085F1D30D176B50D54F33AA69(L_13, NULL);
	}

IL_0080:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_Update_m413825AB30ACB547809CE218087D281E8A2B2458 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CCFD69444F343A43D9B34E72AE10A9C37F6402F);
		s_Il2CppMethodInitialized = true;
	}
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* V_0 = NULL;
	bool V_1 = false;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t G_B4_0 = 0;
	{
		// LoadBalancingClient client = this.lbc;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = __this->___lbc_5;
		V_0 = L_0;
		// if (client != null)
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_006b;
		}
	}
	{
		// client.Service();
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_3 = V_0;
		NullCheck(L_3);
		LoadBalancingClient_Service_m0208D4872E63ABA1E7367E1D8FB89421E3050920(L_3, NULL);
		// Text uiText = this.StateUiText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___StateUiText_7;
		V_2 = L_4;
		// string state = client.State.ToString();
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = LoadBalancingClient_get_State_m8553D8C2483058BD64DDED8EC2648AE77836D12C(L_5, NULL);
		V_4 = L_6;
		Il2CppFakeBox<int32_t> L_7(ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var, (&V_4));
		String_t* L_8;
		L_8 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_7), NULL);
		V_3 = L_8;
		// if (uiText != null && !uiText.text.Equals(state))
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_004f;
		}
	}
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = V_2;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_11);
		String_t* L_13 = V_3;
		NullCheck(L_12);
		bool L_14;
		L_14 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_12, L_13, NULL);
		G_B4_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		goto IL_0050;
	}

IL_004f:
	{
		G_B4_0 = 0;
	}

IL_0050:
	{
		V_5 = (bool)G_B4_0;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		// uiText.text = "State: " + state;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = V_2;
		String_t* L_17 = V_3;
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0CCFD69444F343A43D9B34E72AE10A9C37F6402F, L_17, NULL);
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_18);
	}

IL_006a:
	{
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnConnected_m5AB09D698A05D7E0ABB90DC58B96103F4740CC85 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnConnectedToMaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnConnectedToMaster_m91F5B4362E77D792C0F1C46C026BDAEEB5D764E3 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1BA34E8407E1622C279AB6F6CAF3C807280392E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnConnectedToMaster");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralE1BA34E8407E1622C279AB6F6CAF3C807280392E, NULL);
		// this.lbc.OpJoinRandomRoom();    // joins any open room (no filter)
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = __this->___lbc_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = LoadBalancingClient_OpJoinRandomRoom_mCB018C45C5BAC6CB7F10FA13BA9EBAC3BD0F45A1(L_0, (OpJoinRandomRoomParams_t5DCB0B5EBE3D5C35A483669A8D997D47E17D6DBA*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnDisconnected(Photon.Realtime.DisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnDisconnected_mDEE84E1C10157C22B0CD977AABF8BAF6E733F9FE (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, int32_t ___0_cause, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisconnectCause_t2C4E3D34FE0D1842B3C915A63ECCE068B8A258E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F45C1C537BBADB2FE21CC7BB49C59898B204E6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnDisconnected(" + cause + ")");
		Il2CppFakeBox<int32_t> L_0(DisconnectCause_t2C4E3D34FE0D1842B3C915A63ECCE068B8A258E5_il2cpp_TypeInfo_var, (&___0_cause));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral0F45C1C537BBADB2FE21CC7BB49C59898B204E6E, L_1, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnCustomAuthenticationResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnCustomAuthenticationResponse_m0BC941D88E747C9A75C48164A1304C2BDE803070 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___0_data, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnCustomAuthenticationFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnCustomAuthenticationFailed_m58F68BCC12C87C37A0E3C99BBD7EBB2911E43A12 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, String_t* ___0_debugMessage, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnRegionListReceived(Photon.Realtime.RegionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnRegionListReceived_m725991BEFC0A7579B3F1107BB5DE2C738767D1BC (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* ___0_regionHandler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectAndJoinRandomLb_OnRegionPingCompleted_mCD5E698C6C0900FF3ACDD4AA4FFC644BC4137CE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CB7873CC9B86C1D67BF2A619181392B42B2481F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRegionListReceived");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral8CB7873CC9B86C1D67BF2A619181392B42B2481F, NULL);
		// regionHandler.PingMinimumOfRegions(this.OnRegionPingCompleted, null);
		RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* L_0 = ___0_regionHandler;
		Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74* L_1 = (Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74*)il2cpp_codegen_object_new(Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m215F7D57B46C05B7411E4B5B4C7DDB91EEA86681(L_1, __this, (intptr_t)((void*)ConnectAndJoinRandomLb_OnRegionPingCompleted_mCD5E698C6C0900FF3ACDD4AA4FFC644BC4137CE5_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		bool L_2;
		L_2 = RegionHandler_PingMinimumOfRegions_mBDA481EF544E14116455B0352A160D07B6AF5762(L_0, L_1, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnRoomListUpdate(System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnRoomListUpdate_m4EF178F5B7FF803A1C05DDFB5E5DBDF9CE53B573 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE* ___0_roomList, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnLobbyStatisticsUpdate(System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnLobbyStatisticsUpdate_m6A4DB87496CDE19E4C0D56FADA2178268B2F41DD (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15* ___0_lobbyStatistics, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnJoinedLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnJoinedLobby_mD5A48030FB4BADCC16784286C72F1820734D590B (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnLeftLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnLeftLobby_mD0FA0520CA3A6CF43772ED5C8DA88DC3643A6CAF (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnFriendListUpdate(System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnFriendListUpdate_mA1DD1E3098C1BB9AF2026998B56665D484F19B02 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F* ___0_friendList, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnCreatedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnCreatedRoom_m0BB38C14FA1ED134F03D4ED2E47B2CCC1D97B1F1 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnCreateRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnCreateRoomFailed_m3F6D9E69A2C31504ABD34BBDB2CD06EA255C4F4D (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, int16_t ___0_returnCode, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnJoinedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnJoinedRoom_m5A6191E901FAD558767047BA3DB157E4D1AD1339 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D6A39CF1E3A2BB7700481DB871D78DDB02A911D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnJoinedRoom");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral5D6A39CF1E3A2BB7700481DB871D78DDB02A911D, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnJoinRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnJoinRoomFailed_mD484E74E080D160F2DD6446DD7DC96FB41587368 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, int16_t ___0_returnCode, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnJoinRandomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnJoinRandomFailed_mA55EF2ED2497381C3A9564D37F6292C6A92CCA81 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, int16_t ___0_returnCode, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3293A8518D7DEE9D1DE57B7241DE59F641197895);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnJoinRandomFailed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral3293A8518D7DEE9D1DE57B7241DE59F641197895, NULL);
		// this.lbc.OpCreateRoom(new EnterRoomParams());
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = __this->___lbc_5;
		EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* L_1 = (EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9*)il2cpp_codegen_object_new(EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EnterRoomParams__ctor_m59BB4C9762321F59D7238996F68C7EB970ACDBB8(L_1, NULL);
		NullCheck(L_0);
		bool L_2;
		L_2 = LoadBalancingClient_OpCreateRoom_mD4FC6543597FB872E8EE027EE49E723D83437310(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnLeftRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnLeftRoom_m94779C8B1AFF8C090388E85CBBE2515C5F8D174E (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnRegionPingCompleted(Photon.Realtime.RegionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnRegionPingCompleted_mCD5E698C6C0900FF3ACDD4AA4FFC644BC4137CE5 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* ___0_regionHandler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C8EA4ECB883AD669394FC7A5E304891A38ADED4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE4EEAA3C538A66727E1F57EEFC277047842C14C);
		s_Il2CppMethodInitialized = true;
	}
	Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// Debug.Log("OnRegionPingCompleted " + regionHandler.BestRegion);
		RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* L_0 = ___0_regionHandler;
		NullCheck(L_0);
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_1;
		L_1 = RegionHandler_get_BestRegion_mC9390E2B9A76B5F6A391F5D432D6CFD35F991D94(L_0, NULL);
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = _stringLiteralBE4EEAA3C538A66727E1F57EEFC277047842C14C;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = _stringLiteralBE4EEAA3C538A66727E1F57EEFC277047842C14C;
			goto IL_0013;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0018;
	}

IL_0013:
	{
		NullCheck(G_B2_0);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_1;
	}

IL_0018:
	{
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_1, G_B3_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// Debug.Log("RegionPingSummary: " + regionHandler.SummaryToCache);
		RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* L_5 = ___0_regionHandler;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = RegionHandler_get_SummaryToCache_m313FB26DCB72FB6D25EC366E51AF4118F8CD3722(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral6C8EA4ECB883AD669394FC7A5E304891A38ADED4, L_6, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// this.lbc.ConnectToRegionMaster(regionHandler.BestRegion.Code);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_8 = __this->___lbc_5;
		RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* L_9 = ___0_regionHandler;
		NullCheck(L_9);
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_10;
		L_10 = RegionHandler_get_BestRegion_mC9390E2B9A76B5F6A391F5D432D6CFD35F991D94(L_9, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Region_get_Code_m25CDC61EBD0A1EDEA277235D87D55869A18B9122_inline(L_10, NULL);
		NullCheck(L_8);
		bool L_12;
		L_12 = LoadBalancingClient_ConnectToRegionMaster_m170672C2A5C0B12DB89090B0EE8ECF6028FA365B(L_8, L_11, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb__ctor_m49A174D0CB130D2679BC62AF8E77709B2B705F40 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private AppSettings appSettings = new AppSettings();
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_0 = (AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7*)il2cpp_codegen_object_new(AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AppSettings__ctor_m0E9EF98D6C1FB02C989504407836FDA2B019AA43(L_0, NULL);
		__this->___appSettings_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___appSettings_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Photon.Chat.ChatAppSettings Photon.Chat.Demo.AppSettingsExtensions::GetChatSettings(Photon.Realtime.AppSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* AppSettingsExtensions_GetChatSettings_mEE685D01C4B553F55E8016FFE255717777E8975E (AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* ___0_appSettings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* V_0 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B2_0 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B2_1 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B1_0 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B3_1 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B3_2 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B5_0 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B5_1 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B4_0 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B4_1 = NULL;
	String_t* G_B6_0 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B6_1 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B6_2 = NULL;
	{
		// return new ChatAppSettings
		//        {
		//            AppIdChat = appSettings.AppIdChat,
		//            AppVersion = appSettings.AppVersion,
		//            FixedRegion = appSettings.IsBestRegion ? null : appSettings.FixedRegion,
		//            NetworkLogging = appSettings.NetworkLogging,
		//            Protocol = appSettings.Protocol,
		//            EnableProtocolFallback = appSettings.EnableProtocolFallback,
		//            Server = appSettings.IsDefaultNameServer ? null : appSettings.Server,
		//            Port = (ushort)appSettings.Port,
		//            ProxyServer = appSettings.ProxyServer
		//            // values not copied from AppSettings class: AuthMode
		//            // values not needed from AppSettings class: EnableLobbyStatistics
		//        };
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_0 = (ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689*)il2cpp_codegen_object_new(ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ChatAppSettings__ctor_m0B6F25C335A13983DA701EBD9CFADAC43E6011A3(L_0, NULL);
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_1 = L_0;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_2 = ___0_appSettings;
		NullCheck(L_2);
		String_t* L_3 = L_2->___AppIdChat_2;
		NullCheck(L_1);
		L_1->___AppIdChat_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___AppIdChat_0), (void*)L_3);
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_4 = L_1;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_5 = ___0_appSettings;
		NullCheck(L_5);
		String_t* L_6 = L_5->___AppVersion_4;
		NullCheck(L_4);
		L_4->___AppVersion_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___AppVersion_1), (void*)L_6);
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_7 = L_4;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_8 = ___0_appSettings;
		NullCheck(L_8);
		bool L_9;
		L_9 = AppSettings_get_IsBestRegion_m29A45FCEDFBC20C7C6E9CFA732A4E4FC2D1BBFED(L_8, NULL);
		G_B1_0 = L_7;
		G_B1_1 = L_7;
		if (L_9)
		{
			G_B2_0 = L_7;
			G_B2_1 = L_7;
			goto IL_002f;
		}
	}
	{
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_10 = ___0_appSettings;
		NullCheck(L_10);
		String_t* L_11 = L_10->___FixedRegion_6;
		G_B3_0 = L_11;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0030:
	{
		NullCheck(G_B3_1);
		G_B3_1->___FixedRegion_2 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___FixedRegion_2), (void*)G_B3_0);
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_12 = G_B3_2;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_13 = ___0_appSettings;
		NullCheck(L_13);
		uint8_t L_14 = L_13->___NetworkLogging_15;
		NullCheck(L_12);
		L_12->___NetworkLogging_8 = L_14;
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_15 = L_12;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_16 = ___0_appSettings;
		NullCheck(L_16);
		uint8_t L_17 = L_16->___Protocol_11;
		NullCheck(L_15);
		L_15->___Protocol_6 = L_17;
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_18 = L_15;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_19 = ___0_appSettings;
		NullCheck(L_19);
		bool L_20 = L_19->___EnableProtocolFallback_12;
		NullCheck(L_18);
		L_18->___EnableProtocolFallback_7 = L_20;
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_21 = L_18;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_22 = ___0_appSettings;
		NullCheck(L_22);
		bool L_23;
		L_23 = AppSettings_get_IsDefaultNameServer_m25CC5D537E41C3678015FEECF221843B9CAEBD29(L_22, NULL);
		G_B4_0 = L_21;
		G_B4_1 = L_21;
		if (L_23)
		{
			G_B5_0 = L_21;
			G_B5_1 = L_21;
			goto IL_006a;
		}
	}
	{
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_24 = ___0_appSettings;
		NullCheck(L_24);
		String_t* L_25 = L_24->___Server_8;
		G_B6_0 = L_25;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_006b;
	}

IL_006a:
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_006b:
	{
		NullCheck(G_B6_1);
		G_B6_1->___Server_3 = G_B6_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_1->___Server_3), (void*)G_B6_0);
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_26 = G_B6_2;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_27 = ___0_appSettings;
		NullCheck(L_27);
		int32_t L_28 = L_27->___Port_9;
		NullCheck(L_26);
		L_26->___Port_4 = (uint16_t)((int32_t)(uint16_t)L_28);
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_29 = L_26;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_30 = ___0_appSettings;
		NullCheck(L_30);
		String_t* L_31 = L_30->___ProxyServer_10;
		NullCheck(L_29);
		L_29->___ProxyServer_5 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->___ProxyServer_5), (void*)L_31);
		V_0 = L_29;
		goto IL_008c;
	}

IL_008c:
	{
		// }
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_32 = V_0;
		return L_32;
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
// System.Void Photon.Chat.Demo.ChannelSelector::SetChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelSelector_SetChannel_m7E493B7588E65D501C7DA99C72BF36DAA565250E (ChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07* __this, String_t* ___0_channel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* V_0 = NULL;
	{
		// this.Channel = channel;
		String_t* L_0 = ___0_channel;
		__this->___Channel_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Channel_4), (void*)L_0);
		// Text t = this.GetComponentInChildren<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1;
		L_1 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(__this, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		V_0 = L_1;
		// t.text = this.Channel;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = V_0;
		String_t* L_3 = __this->___Channel_4;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChannelSelector::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelSelector_OnPointerClick_mB3AE27915FCF9DE3F697BE3F6C93E9F408E4C3B6 (ChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* V_0 = NULL;
	{
		// ChatGui handler = FindObjectOfType<ChatGui>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* L_0;
		L_0 = Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30(Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30_RuntimeMethod_var);
		V_0 = L_0;
		// handler.ShowChannel(this.Channel);
		ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* L_1 = V_0;
		String_t* L_2 = __this->___Channel_4;
		NullCheck(L_1);
		ChatGui_ShowChannel_m9AB1B8EFCEA804119F7891EB21AA299D9EE9C211(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChannelSelector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelSelector__ctor_m894F2E006A64350EDE2E7BA55B4C3D35F5148071 (ChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Photon.Chat.Demo.ChatAppIdCheckerUI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatAppIdCheckerUI_Update_m4776B819CB357298B16E757F4A128977AB204D5F (ChatAppIdCheckerUI_t43522738EEA1186C60A64B652B157BC5FA4FC22D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF8AEDAF918CF6EF3D306EB2FB9FA00A4D0FA453);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	{
		// bool showWarning = false;
		V_0 = (bool)0;
		// string descriptionText = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_0;
		// showWarning = string.IsNullOrEmpty(PhotonNetwork.PhotonServerSettings.AppSettings.AppIdChat);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		ServerSettings_t41BE4338E7E76BFB4919D4039BAFC6799E242152* L_1;
		L_1 = PhotonNetwork_get_PhotonServerSettings_mEB0FD5D91970368EE4D23AA12213DAD57B8D1097(NULL);
		NullCheck(L_1);
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_2 = L_1->___AppSettings_4;
		NullCheck(L_2);
		String_t* L_3 = L_2->___AppIdChat_2;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		V_0 = L_4;
		// if (showWarning)
		bool L_5 = V_0;
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// descriptionText = "<Color=Red>WARNING:</Color>\nPlease setup a Chat AppId in the PhotonServerSettings file.";
		V_1 = _stringLiteralFF8AEDAF918CF6EF3D306EB2FB9FA00A4D0FA453;
	}

IL_002b:
	{
		// this.Description.text = descriptionText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___Description_4;
		String_t* L_8 = V_1;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_8);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatAppIdCheckerUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatAppIdCheckerUI__ctor_m63844AD1E8604F63D26595AD357A104B8ECE50FA (ChatAppIdCheckerUI_t43522738EEA1186C60A64B652B157BC5FA4FC22D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.String Photon.Chat.Demo.ChatGui::get_UserName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	{
		// public string UserName { get; set; }
		String_t* L_0 = __this->___U3CUserNameU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::set_UserName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_set_UserName_m2DEE5CF82BC6DBB2FA568AF956102BE0E125D0A7 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string UserName { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CUserNameU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserNameU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_Start_m1BB89F3BC7EE841EDD681423C6077B22AC71DEBC (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral361D3EBAF9E2C29F13DB3B6509697AA973E37A36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3992DF679A3EF8B96232992FF89A2B1F1DB5534);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// DontDestroyOnLoad(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_0, NULL);
		// this.UserIdText.text = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___UserIdText_24;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// this.StateText.text  = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___StateText_23;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// this.StateText.gameObject.SetActive(true);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___StateText_23;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// this.UserIdText.gameObject.SetActive(true);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___UserIdText_24;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// this.Title.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___Title_22;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// this.ChatPanel.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___ChatPanel_13;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// this.ConnectingLabel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___ConnectingLabel_12;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// if (string.IsNullOrEmpty(this.UserName))
		String_t* L_11;
		L_11 = ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1_inline(__this, NULL);
		bool L_12;
		L_12 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_11, NULL);
		V_1 = L_12;
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_00b1;
		}
	}
	{
		// this.UserName = "user" + Environment.TickCount%99; //made-up username
		int32_t L_14;
		L_14 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		V_2 = ((int32_t)(L_14%((int32_t)99)));
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD3992DF679A3EF8B96232992FF89A2B1F1DB5534, L_15, NULL);
		ChatGui_set_UserName_m2DEE5CF82BC6DBB2FA568AF956102BE0E125D0A7_inline(__this, L_16, NULL);
	}

IL_00b1:
	{
		// this.chatAppSettings = PhotonNetwork.PhotonServerSettings.AppSettings.GetChatSettings();
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		ServerSettings_t41BE4338E7E76BFB4919D4039BAFC6799E242152* L_17;
		L_17 = PhotonNetwork_get_PhotonServerSettings_mEB0FD5D91970368EE4D23AA12213DAD57B8D1097(NULL);
		NullCheck(L_17);
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_18 = L_17->___AppSettings_4;
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_19;
		L_19 = AppSettingsExtensions_GetChatSettings_mEE685D01C4B553F55E8016FFE255717777E8975E(L_18, NULL);
		__this->___chatAppSettings_10 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chatAppSettings_10), (void*)L_19);
		// bool appIdPresent = !string.IsNullOrEmpty(this.chatAppSettings.AppIdChat);
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_20 = __this->___chatAppSettings_10;
		NullCheck(L_20);
		String_t* L_21 = L_20->___AppIdChat_0;
		bool L_22;
		L_22 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_21, NULL);
		V_0 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		// this.missingAppIdErrorPanel.SetActive(!appIdPresent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___missingAppIdErrorPanel_11;
		bool L_24 = V_0;
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0), NULL);
		// this.UserIdFormPanel.gameObject.SetActive(appIdPresent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___UserIdFormPanel_14;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_25, NULL);
		bool L_27 = V_0;
		NullCheck(L_26);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, L_27, NULL);
		// if (!appIdPresent)
		bool L_28 = V_0;
		V_3 = (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_3;
		if (!L_29)
		{
			goto IL_0111;
		}
	}
	{
		// Debug.LogError("You need to set the chat app ID in the PhotonServerSettings file in order to continue.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral361D3EBAF9E2C29F13DB3B6509697AA973E37A36, NULL);
	}

IL_0111:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_Connect_m073A7E59E9008C4D708663A6902A6C19882540E3 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1533BFD28F11C5F69CA87886E87821ECA526FE4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.UserIdFormPanel.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___UserIdFormPanel_14;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// this.chatClient = new ChatClient(this);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_2 = (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA*)il2cpp_codegen_object_new(ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ChatClient__ctor_m5C32CB0A0CAC33E980D4C6FA700B551D0DAF46F4(L_2, __this, 0, NULL);
		__this->___chatClient_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chatClient_9), (void*)L_2);
		// this.chatClient.UseBackgroundWorkerForSending = true;
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_3 = __this->___chatClient_9;
		NullCheck(L_3);
		ChatClient_set_UseBackgroundWorkerForSending_m6B0CF62C2EBF74CB62FFB1557DC30969292B7596_inline(L_3, (bool)1, NULL);
		// this.chatClient.AuthValues = new AuthenticationValues(this.UserName);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_4 = __this->___chatClient_9;
		String_t* L_5;
		L_5 = ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1_inline(__this, NULL);
		AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* L_6 = (AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C*)il2cpp_codegen_object_new(AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		AuthenticationValues__ctor_mB097BC3108CD439CAD77D4AE77F8616FA92C929D(L_6, L_5, NULL);
		NullCheck(L_4);
		ChatClient_set_AuthValues_mAAD43D4212103C80D1377FA04B33815397E28937_inline(L_4, L_6, NULL);
		// this.chatClient.ConnectUsingSettings(this.chatAppSettings);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_7 = __this->___chatClient_9;
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_8 = __this->___chatAppSettings_10;
		NullCheck(L_7);
		bool L_9;
		L_9 = ChatClient_ConnectUsingSettings_m3DCD03EA4CAE4ADDD935BDA323CCF37B5E96BB4C(L_7, L_8, NULL);
		// this.ChannelToggleToInstantiate.gameObject.SetActive(false);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_10 = __this->___ChannelToggleToInstantiate_17;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// Debug.Log("Connecting as: " + this.UserName);
		String_t* L_12;
		L_12 = ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1_inline(__this, NULL);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA1533BFD28F11C5F69CA87886E87821ECA526FE4, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_13, NULL);
		// this.ConnectingLabel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___ConnectingLabel_12;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnDestroy_m39C68FCB3C786B0D6533DAD7ADD4A998C9F4B0B9 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (this.chatClient != null)
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_0 = __this->___chatClient_9;
		V_0 = (bool)((!(((RuntimeObject*)(ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// this.chatClient.Disconnect();
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_2 = __this->___chatClient_9;
		NullCheck(L_2);
		ChatClient_Disconnect_m678FDF44265FD926B8DB5555B439F5F70D82BA52(L_2, ((int32_t)13), NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnApplicationQuit_m884A3FA45C488DFE254DD7BCA1FEF917A905133F (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (this.chatClient != null)
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_0 = __this->___chatClient_9;
		V_0 = (bool)((!(((RuntimeObject*)(ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// this.chatClient.Disconnect();
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_2 = __this->___chatClient_9;
		NullCheck(L_2);
		ChatClient_Disconnect_m678FDF44265FD926B8DB5555B439F5F70D82BA52(L_2, ((int32_t)13), NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_Update_m1121700352D668D142BE6861A856832006968BE0 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (this.chatClient != null)
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_0 = __this->___chatClient_9;
		V_0 = (bool)((!(((RuntimeObject*)(ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// this.chatClient.Service(); // make sure to call this regularly! it limits effort internally, so calling often is ok!
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_2 = __this->___chatClient_9;
		NullCheck(L_2);
		ChatClient_Service_mD968988B9275FE4CA7113196FFB455F3BA79D0B7(L_2, NULL);
	}

IL_001c:
	{
		// if ( this.StateText == null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___StateText_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
		// return;
		goto IL_0052;
	}

IL_003b:
	{
		// this.StateText.gameObject.SetActive(this.ShowState); // this could be handled more elegantly, but for the demo it's ok.
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___StateText_23;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		bool L_9 = __this->___ShowState_21;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, L_9, NULL);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnEnterSend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnEnterSend_m7B3690E336D9A606F4C638FBDA76DF2EB295694F (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (Input.GetKey(KeyCode.Return) || Input.GetKey(KeyCode.KeypadEnter))
		bool L_0;
		L_0 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)13), NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)271), NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		// this.SendChatMessage(this.InputFieldChat.text);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = __this->___InputFieldChat_15;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_3, NULL);
		ChatGui_SendChatMessage_m4BD1A7C0CAAA5112EA9B3C1CE4F0F1ADC7018B5D(__this, L_4, NULL);
		// this.InputFieldChat.text = "";
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_5 = __this->___InputFieldChat_15;
		NullCheck(L_5);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnClickSend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnClickSend_m10B5544E0F1A5F5D46E44BD8AA7002A06C5034CA (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (this.InputFieldChat != null)
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___InputFieldChat_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// this.SendChatMessage(this.InputFieldChat.text);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = __this->___InputFieldChat_15;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_3, NULL);
		ChatGui_SendChatMessage_m4BD1A7C0CAAA5112EA9B3C1CE4F0F1ADC7018B5D(__this, L_4, NULL);
		// this.InputFieldChat.text = "";
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_5 = __this->___InputFieldChat_15;
		NullCheck(L_5);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::SendChatMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_SendChatMessage_m4BD1A7C0CAAA5112EA9B3C1CE4F0F1ADC7018B5D (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___0_inputLine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m43998BB50D68FD0B18E4445DED51EE80D6EF1643_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m952BC71E0A6D29F848B1C6D854B9183CE0A5E83A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral118410E0D4EC44AA2FCD3142030E47DC49A64A18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral300E1362F835BABF048E880C8978EF4F91E3867D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41540A8C28BA5EDA9B41BEBBF344C748063CDB90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral471E512CD36A060B52A0EE28B8A6D4EEC00378C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5224DE4337BB6DBE135E6B5A4D01069A20195D5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DF695F96AE9B00DBD2CB8F12E765C3159E02AF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral693BD22F82043985FDDDDFCF5E8EC15BF8B82934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral710F81E0EEB8CB48BACB8437BA5836E3B5349235);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F8ED9157125FFC4DA9E06A7B8011AD80A53FE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7077659D26DAF185E52E2F2B77A29B3A2B818C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3664676F50F442E724FBD9CC58E7261F51AA12F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE1823106E03B1A8E37190FA81CAA82064505504);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0E91461B7ECDB6ABA60BFA77B9395C3A7DF66BE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_6 = NULL;
	bool V_7 = false;
	Il2CppChar V_8 = 0x0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_13 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* V_21 = NULL;
	bool V_22 = false;
	bool V_23 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_24 = NULL;
	String_t* V_25 = NULL;
	String_t* V_26 = NULL;
	bool V_27 = false;
	bool V_28 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_29 = NULL;
	bool V_30 = false;
	bool V_31 = false;
	int32_t G_B21_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B47_0 = 0;
	{
		// if (string.IsNullOrEmpty(inputLine))
		String_t* L_0 = ___0_inputLine;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_0426;
	}

IL_0011:
	{
		// if ("test".Equals(inputLine))
		String_t* L_3 = ___0_inputLine;
		NullCheck(_stringLiteral87F8ED9157125FFC4DA9E06A7B8011AD80A53FE1);
		bool L_4;
		L_4 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(_stringLiteral87F8ED9157125FFC4DA9E06A7B8011AD80A53FE1, L_3, NULL);
		V_3 = L_4;
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0071;
		}
	}
	{
		// if (this.TestLength != this.testBytes.Length)
		int32_t L_6 = __this->___TestLength_26;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___testBytes_27;
		NullCheck(L_7);
		V_4 = (bool)((((int32_t)((((int32_t)L_6) == ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		// this.testBytes = new byte[this.TestLength];
		int32_t L_9 = __this->___TestLength_26;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_9);
		__this->___testBytes_27 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___testBytes_27), (void*)L_10);
	}

IL_004d:
	{
		// this.chatClient.SendPrivateMessage(this.chatClient.AuthValues.UserId, this.testBytes, true);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_11 = __this->___chatClient_9;
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_12 = __this->___chatClient_9;
		NullCheck(L_12);
		AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* L_13;
		L_13 = ChatClient_get_AuthValues_mC9F4405E66924D1BA21DEDE10848199C24915476_inline(L_12, NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = AuthenticationValues_get_UserId_m61CDE1031F42330B0EDC0EC489A75E46E1DB6B79_inline(L_13, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___testBytes_27;
		NullCheck(L_11);
		bool L_16;
		L_16 = ChatClient_SendPrivateMessage_m736B989819416ADFFE92A9B4EB297FE6DC607E36(L_11, L_14, (RuntimeObject*)L_15, (bool)1, NULL);
	}

IL_0071:
	{
		// bool doingPrivateChat = this.chatClient.PrivateChannels.ContainsKey(this.selectedChannelName);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_17 = __this->___chatClient_9;
		NullCheck(L_17);
		Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E* L_18 = L_17->___PrivateChannels_16;
		String_t* L_19 = __this->___selectedChannelName_8;
		NullCheck(L_18);
		bool L_20;
		L_20 = Dictionary_2_ContainsKey_m43998BB50D68FD0B18E4445DED51EE80D6EF1643(L_18, L_19, Dictionary_2_ContainsKey_m43998BB50D68FD0B18E4445DED51EE80D6EF1643_RuntimeMethod_var);
		V_0 = L_20;
		// string privateChatTarget = string.Empty;
		String_t* L_21 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_21;
		// if (doingPrivateChat)
		bool L_22 = V_0;
		V_5 = L_22;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_00b4;
		}
	}
	{
		// string[] splitNames = this.selectedChannelName.Split(new char[] { ':' });
		String_t* L_24 = __this->___selectedChannelName_8;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_25 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = L_25;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)58));
		NullCheck(L_24);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27;
		L_27 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_24, L_26, NULL);
		V_6 = L_27;
		// privateChatTarget = splitNames[1];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = V_6;
		NullCheck(L_28);
		int32_t L_29 = 1;
		String_t* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_1 = L_30;
	}

IL_00b4:
	{
		// if (inputLine[0].Equals('\\'))
		String_t* L_31 = ___0_inputLine;
		NullCheck(L_31);
		Il2CppChar L_32;
		L_32 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_31, 0, NULL);
		V_8 = L_32;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&V_8), ((int32_t)92), NULL);
		V_7 = L_33;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_03f4;
		}
	}
	{
		// string[] tokens = inputLine.Split(new char[] {' '}, 2);
		String_t* L_35 = ___0_inputLine;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_36 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_37 = L_36;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		NullCheck(L_35);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38;
		L_38 = String_Split_m3C63FA89A52BE352B4E49DB5379F7AAD6ACCA0E8(L_35, L_37, 2, NULL);
		V_9 = L_38;
		// if (tokens[0].Equals("\\help"))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = V_9;
		NullCheck(L_39);
		int32_t L_40 = 0;
		String_t* L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_41);
		bool L_42;
		L_42 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_41, _stringLiteral118410E0D4EC44AA2FCD3142030E47DC49A64A18, NULL);
		V_10 = L_42;
		bool L_43 = V_10;
		if (!L_43)
		{
			goto IL_0101;
		}
	}
	{
		// this.PostHelpToCurrentChannel();
		ChatGui_PostHelpToCurrentChannel_m707B7D1D556EACB05EC03E08F91A8F1ECA3642E9(__this, NULL);
	}

IL_0101:
	{
		// if (tokens[0].Equals("\\state"))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = V_9;
		NullCheck(L_44);
		int32_t L_45 = 0;
		String_t* L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_46);
		bool L_47;
		L_47 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_46, _stringLiteral5224DE4337BB6DBE135E6B5A4D01069A20195D5F, NULL);
		V_11 = L_47;
		bool L_48 = V_11;
		if (!L_48)
		{
			goto IL_01a6;
		}
	}
	{
		// int newState = 0;
		V_12 = 0;
		// List<string> messages = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_49 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_49, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_13 = L_49;
		// messages.Add ("i am state " + newState);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_50 = V_13;
		String_t* L_51;
		L_51 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_12), NULL);
		String_t* L_52;
		L_52 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral300E1362F835BABF048E880C8978EF4F91E3867D, L_51, NULL);
		NullCheck(L_50);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_50, L_52, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// string[] subtokens = tokens[1].Split(new char[] {' ', ','});
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = V_9;
		NullCheck(L_53);
		int32_t L_54 = 1;
		String_t* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_56 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_57 = L_56;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_58 = L_57;
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)44));
		NullCheck(L_55);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_59;
		L_59 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_55, L_58, NULL);
		V_14 = L_59;
		// if (subtokens.Length > 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_60 = V_14;
		NullCheck(L_60);
		V_15 = (bool)((!(((uint32_t)(((RuntimeArray*)L_60)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_61 = V_15;
		if (!L_61)
		{
			goto IL_0170;
		}
	}
	{
		// newState = int.Parse(subtokens[0]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = V_14;
		NullCheck(L_62);
		int32_t L_63 = 0;
		String_t* L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		int32_t L_65;
		L_65 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_64, NULL);
		V_12 = L_65;
	}

IL_0170:
	{
		// if (subtokens.Length > 1)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = V_14;
		NullCheck(L_66);
		V_16 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_66)->max_length))) > ((int32_t)1))? 1 : 0);
		bool L_67 = V_16;
		if (!L_67)
		{
			goto IL_018b;
		}
	}
	{
		// messages.Add(subtokens[1]);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_68 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_69 = V_14;
		NullCheck(L_69);
		int32_t L_70 = 1;
		String_t* L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_68);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_68, L_71, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_018b:
	{
		// this.chatClient.SetOnlineStatus(newState,messages.ToArray()); // this is how you set your own state and (any) message
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_72 = __this->___chatClient_9;
		int32_t L_73 = V_12;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_74 = V_13;
		NullCheck(L_74);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_75;
		L_75 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_74, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		NullCheck(L_72);
		bool L_76;
		L_76 = ChatClient_SetOnlineStatus_mA793BD64EB3D9ED4E360835951BD0333424C918D(L_72, L_73, (RuntimeObject*)L_75, NULL);
		goto IL_03f1;
	}

IL_01a6:
	{
		// else if ((tokens[0].Equals("\\subscribe") || tokens[0].Equals("\\s")) && !string.IsNullOrEmpty(tokens[1]))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_77 = V_9;
		NullCheck(L_77);
		int32_t L_78 = 0;
		String_t* L_79 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		NullCheck(L_79);
		bool L_80;
		L_80 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_79, _stringLiteral41540A8C28BA5EDA9B41BEBBF344C748063CDB90, NULL);
		if (L_80)
		{
			goto IL_01c6;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_81 = V_9;
		NullCheck(L_81);
		int32_t L_82 = 0;
		String_t* L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NullCheck(L_83);
		bool L_84;
		L_84 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_83, _stringLiteralB3664676F50F442E724FBD9CC58E7261F51AA12F, NULL);
		if (!L_84)
		{
			goto IL_01d4;
		}
	}

IL_01c6:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_85 = V_9;
		NullCheck(L_85);
		int32_t L_86 = 1;
		String_t* L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		bool L_88;
		L_88 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_87, NULL);
		G_B21_0 = ((((int32_t)L_88) == ((int32_t)0))? 1 : 0);
		goto IL_01d5;
	}

IL_01d4:
	{
		G_B21_0 = 0;
	}

IL_01d5:
	{
		V_17 = (bool)G_B21_0;
		bool L_89 = V_17;
		if (!L_89)
		{
			goto IL_0207;
		}
	}
	{
		// this.chatClient.Subscribe(tokens[1].Split(new char[] {' ', ','}));
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_90 = __this->___chatClient_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_91 = V_9;
		NullCheck(L_91);
		int32_t L_92 = 1;
		String_t* L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_94 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_95 = L_94;
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_96 = L_95;
		NullCheck(L_96);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)44));
		NullCheck(L_93);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_97;
		L_97 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_93, L_96, NULL);
		NullCheck(L_90);
		bool L_98;
		L_98 = ChatClient_Subscribe_mAB072792329A26749E58FED202C38A51691CD32C(L_90, L_97, NULL);
		goto IL_03f1;
	}

IL_0207:
	{
		// else if ((tokens[0].Equals("\\unsubscribe") || tokens[0].Equals("\\u")) && !string.IsNullOrEmpty(tokens[1]))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_99 = V_9;
		NullCheck(L_99);
		int32_t L_100 = 0;
		String_t* L_101 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		NullCheck(L_101);
		bool L_102;
		L_102 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_101, _stringLiteralBE1823106E03B1A8E37190FA81CAA82064505504, NULL);
		if (L_102)
		{
			goto IL_0227;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_103 = V_9;
		NullCheck(L_103);
		int32_t L_104 = 0;
		String_t* L_105 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		NullCheck(L_105);
		bool L_106;
		L_106 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_105, _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, NULL);
		if (!L_106)
		{
			goto IL_0235;
		}
	}

IL_0227:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_107 = V_9;
		NullCheck(L_107);
		int32_t L_108 = 1;
		String_t* L_109 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		bool L_110;
		L_110 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_109, NULL);
		G_B27_0 = ((((int32_t)L_110) == ((int32_t)0))? 1 : 0);
		goto IL_0236;
	}

IL_0235:
	{
		G_B27_0 = 0;
	}

IL_0236:
	{
		V_18 = (bool)G_B27_0;
		bool L_111 = V_18;
		if (!L_111)
		{
			goto IL_0268;
		}
	}
	{
		// this.chatClient.Unsubscribe(tokens[1].Split(new char[] {' ', ','}));
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_112 = __this->___chatClient_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_113 = V_9;
		NullCheck(L_113);
		int32_t L_114 = 1;
		String_t* L_115 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_116 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_117 = L_116;
		NullCheck(L_117);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_118 = L_117;
		NullCheck(L_118);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)44));
		NullCheck(L_115);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_119;
		L_119 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_115, L_118, NULL);
		NullCheck(L_112);
		bool L_120;
		L_120 = ChatClient_Unsubscribe_m384652194B1073EDB7A8CA3DBA04EFB7A14F0B0A(L_112, L_119, NULL);
		goto IL_03f1;
	}

IL_0268:
	{
		// else if (tokens[0].Equals("\\clear"))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_121 = V_9;
		NullCheck(L_121);
		int32_t L_122 = 0;
		String_t* L_123 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		NullCheck(L_123);
		bool L_124;
		L_124 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_123, _stringLiteralF0E91461B7ECDB6ABA60BFA77B9395C3A7DF66BE, NULL);
		V_19 = L_124;
		bool L_125 = V_19;
		if (!L_125)
		{
			goto IL_02cb;
		}
	}
	{
		// if (doingPrivateChat)
		bool L_126 = V_0;
		V_20 = L_126;
		bool L_127 = V_20;
		if (!L_127)
		{
			goto IL_029f;
		}
	}
	{
		// this.chatClient.PrivateChannels.Remove(this.selectedChannelName);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_128 = __this->___chatClient_9;
		NullCheck(L_128);
		Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E* L_129 = L_128->___PrivateChannels_16;
		String_t* L_130 = __this->___selectedChannelName_8;
		NullCheck(L_129);
		bool L_131;
		L_131 = Dictionary_2_Remove_m952BC71E0A6D29F848B1C6D854B9183CE0A5E83A(L_129, L_130, Dictionary_2_Remove_m952BC71E0A6D29F848B1C6D854B9183CE0A5E83A_RuntimeMethod_var);
		goto IL_02c5;
	}

IL_029f:
	{
		// if (this.chatClient.TryGetChannel(this.selectedChannelName, doingPrivateChat, out channel))
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_132 = __this->___chatClient_9;
		String_t* L_133 = __this->___selectedChannelName_8;
		bool L_134 = V_0;
		NullCheck(L_132);
		bool L_135;
		L_135 = ChatClient_TryGetChannel_m5C5176103E0A618C661F6351BEBE408F4A06D925(L_132, L_133, L_134, (&V_21), NULL);
		V_22 = L_135;
		bool L_136 = V_22;
		if (!L_136)
		{
			goto IL_02c4;
		}
	}
	{
		// channel.ClearMessages();
		ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* L_137 = V_21;
		NullCheck(L_137);
		ChatChannel_ClearMessages_m046EA236CDD967B62CDE383F2098BF4B6ED80FFE(L_137, NULL);
	}

IL_02c4:
	{
	}

IL_02c5:
	{
		goto IL_03f1;
	}

IL_02cb:
	{
		// else if (tokens[0].Equals("\\msg") && !string.IsNullOrEmpty(tokens[1]))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_138 = V_9;
		NullCheck(L_138);
		int32_t L_139 = 0;
		String_t* L_140 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		NullCheck(L_140);
		bool L_141;
		L_141 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_140, _stringLiteralA7077659D26DAF185E52E2F2B77A29B3A2B818C1, NULL);
		if (!L_141)
		{
			goto IL_02e9;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_142 = V_9;
		NullCheck(L_142);
		int32_t L_143 = 1;
		String_t* L_144 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		bool L_145;
		L_145 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_144, NULL);
		G_B39_0 = ((((int32_t)L_145) == ((int32_t)0))? 1 : 0);
		goto IL_02ea;
	}

IL_02e9:
	{
		G_B39_0 = 0;
	}

IL_02ea:
	{
		V_23 = (bool)G_B39_0;
		bool L_146 = V_23;
		if (!L_146)
		{
			goto IL_0342;
		}
	}
	{
		// string[] subtokens = tokens[1].Split(new char[] {' ', ','}, 2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_147 = V_9;
		NullCheck(L_147);
		int32_t L_148 = 1;
		String_t* L_149 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_150 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_151 = L_150;
		NullCheck(L_151);
		(L_151)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_152 = L_151;
		NullCheck(L_152);
		(L_152)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)44));
		NullCheck(L_149);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_153;
		L_153 = String_Split_m3C63FA89A52BE352B4E49DB5379F7AAD6ACCA0E8(L_149, L_152, 2, NULL);
		V_24 = L_153;
		// if (subtokens.Length < 2) return;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_154 = V_24;
		NullCheck(L_154);
		V_27 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_154)->max_length))) < ((int32_t)2))? 1 : 0);
		bool L_155 = V_27;
		if (!L_155)
		{
			goto IL_031f;
		}
	}
	{
		// if (subtokens.Length < 2) return;
		goto IL_0426;
	}

IL_031f:
	{
		// string targetUser = subtokens[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_156 = V_24;
		NullCheck(L_156);
		int32_t L_157 = 0;
		String_t* L_158 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		V_25 = L_158;
		// string message = subtokens[1];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_159 = V_24;
		NullCheck(L_159);
		int32_t L_160 = 1;
		String_t* L_161 = (L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		V_26 = L_161;
		// this.chatClient.SendPrivateMessage(targetUser, message);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_162 = __this->___chatClient_9;
		String_t* L_163 = V_25;
		String_t* L_164 = V_26;
		NullCheck(L_162);
		bool L_165;
		L_165 = ChatClient_SendPrivateMessage_m736B989819416ADFFE92A9B4EB297FE6DC607E36(L_162, L_163, L_164, (bool)0, NULL);
		goto IL_03f1;
	}

IL_0342:
	{
		// else if ((tokens[0].Equals("\\join") || tokens[0].Equals("\\j")) && !string.IsNullOrEmpty(tokens[1]))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_166 = V_9;
		NullCheck(L_166);
		int32_t L_167 = 0;
		String_t* L_168 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		NullCheck(L_168);
		bool L_169;
		L_169 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_168, _stringLiteral710F81E0EEB8CB48BACB8437BA5836E3B5349235, NULL);
		if (L_169)
		{
			goto IL_0362;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_170 = V_9;
		NullCheck(L_170);
		int32_t L_171 = 0;
		String_t* L_172 = (L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_171));
		NullCheck(L_172);
		bool L_173;
		L_173 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_172, _stringLiteral471E512CD36A060B52A0EE28B8A6D4EEC00378C1, NULL);
		if (!L_173)
		{
			goto IL_0370;
		}
	}

IL_0362:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_174 = V_9;
		NullCheck(L_174);
		int32_t L_175 = 1;
		String_t* L_176 = (L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		bool L_177;
		L_177 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_176, NULL);
		G_B47_0 = ((((int32_t)L_177) == ((int32_t)0))? 1 : 0);
		goto IL_0371;
	}

IL_0370:
	{
		G_B47_0 = 0;
	}

IL_0371:
	{
		V_28 = (bool)G_B47_0;
		bool L_178 = V_28;
		if (!L_178)
		{
			goto IL_03d6;
		}
	}
	{
		// string[] subtokens = tokens[1].Split(new char[] { ' ', ',' }, 2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_179 = V_9;
		NullCheck(L_179);
		int32_t L_180 = 1;
		String_t* L_181 = (L_179)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_182 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_183 = L_182;
		NullCheck(L_183);
		(L_183)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_184 = L_183;
		NullCheck(L_184);
		(L_184)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)44));
		NullCheck(L_181);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_185;
		L_185 = String_Split_m3C63FA89A52BE352B4E49DB5379F7AAD6ACCA0E8(L_181, L_184, 2, NULL);
		V_29 = L_185;
		// if (this.channelToggles.ContainsKey(subtokens[0]))
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_186 = __this->___channelToggles_19;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_187 = V_29;
		NullCheck(L_187);
		int32_t L_188 = 0;
		String_t* L_189 = (L_187)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		NullCheck(L_186);
		bool L_190;
		L_190 = Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7(L_186, L_189, Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7_RuntimeMethod_var);
		V_30 = L_190;
		bool L_191 = V_30;
		if (!L_191)
		{
			goto IL_03b8;
		}
	}
	{
		// this.ShowChannel(subtokens[0]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_192 = V_29;
		NullCheck(L_192);
		int32_t L_193 = 0;
		String_t* L_194 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		ChatGui_ShowChannel_m9AB1B8EFCEA804119F7891EB21AA299D9EE9C211(__this, L_194, NULL);
		goto IL_03d3;
	}

IL_03b8:
	{
		// this.chatClient.Subscribe(new string[] { subtokens[0] });
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_195 = __this->___chatClient_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_196 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_197 = L_196;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_198 = V_29;
		NullCheck(L_198);
		int32_t L_199 = 0;
		String_t* L_200 = (L_198)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		NullCheck(L_197);
		ArrayElementTypeCheck (L_197, L_200);
		(L_197)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_200);
		NullCheck(L_195);
		bool L_201;
		L_201 = ChatClient_Subscribe_mAB072792329A26749E58FED202C38A51691CD32C(L_195, L_197, NULL);
	}

IL_03d3:
	{
		goto IL_03f1;
	}

IL_03d6:
	{
		// Debug.Log("The command '" + tokens[0] + "' is invalid.");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_202 = V_9;
		NullCheck(L_202);
		int32_t L_203 = 0;
		String_t* L_204 = (L_202)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		String_t* L_205;
		L_205 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral5DF695F96AE9B00DBD2CB8F12E765C3159E02AF8, L_204, _stringLiteral693BD22F82043985FDDDDFCF5E8EC15BF8B82934, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_205, NULL);
	}

IL_03f1:
	{
		goto IL_0426;
	}

IL_03f4:
	{
		// if (doingPrivateChat)
		bool L_206 = V_0;
		V_31 = L_206;
		bool L_207 = V_31;
		if (!L_207)
		{
			goto IL_040f;
		}
	}
	{
		// this.chatClient.SendPrivateMessage(privateChatTarget, inputLine);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_208 = __this->___chatClient_9;
		String_t* L_209 = V_1;
		String_t* L_210 = ___0_inputLine;
		NullCheck(L_208);
		bool L_211;
		L_211 = ChatClient_SendPrivateMessage_m736B989819416ADFFE92A9B4EB297FE6DC607E36(L_208, L_209, L_210, (bool)0, NULL);
		goto IL_0425;
	}

IL_040f:
	{
		// this.chatClient.PublishMessage(this.selectedChannelName, inputLine);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_212 = __this->___chatClient_9;
		String_t* L_213 = __this->___selectedChannelName_8;
		String_t* L_214 = ___0_inputLine;
		NullCheck(L_212);
		bool L_215;
		L_215 = ChatClient_PublishMessage_mC0EA414F46817A9F77DF910D9094AF23B563A2D8(L_212, L_213, L_214, (bool)0, NULL);
	}

IL_0425:
	{
	}

IL_0426:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::PostHelpToCurrentChannel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_PostHelpToCurrentChannel_m707B7D1D556EACB05EC03E08F91A8F1ECA3642E9 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.CurrentChannelText.text += HelpText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___CurrentChannelText_16;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = L_0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_1);
		il2cpp_codegen_runtime_class_init_inline(ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_il2cpp_TypeInfo_var);
		String_t* L_3 = ((ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_StaticFields*)il2cpp_codegen_static_fields_for(ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_il2cpp_TypeInfo_var))->___HelpText_25;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, L_3, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_DebugReturn_m7034DAA4D24C5AB19C4E3341D0CD896058DE710F (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, uint8_t ___0_level, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (level == ExitGames.Client.Photon.DebugLevel.ERROR)
		uint8_t L_0 = ___0_level;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogError(message);
		String_t* L_2 = ___1_message;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_2, NULL);
		goto IL_0030;
	}

IL_0014:
	{
		// else if (level == ExitGames.Client.Photon.DebugLevel.WARNING)
		uint8_t L_3 = ___0_level;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// Debug.LogWarning(message);
		String_t* L_5 = ___1_message;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_5, NULL);
		goto IL_0030;
	}

IL_0027:
	{
		// Debug.Log(message);
		String_t* L_6 = ___1_message;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnConnected_mEA68753CDC2CAE5D5205A24D535E276CC17F9ED5 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18BA82A745D9E10EF604341BD4FA08FA6FBF82D5);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	{
		// if (this.ChannelsToJoinOnConnect != null && this.ChannelsToJoinOnConnect.Length > 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___ChannelsToJoinOnConnect_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___ChannelsToJoinOnConnect_4;
		NullCheck(L_1);
		G_B3_0 = ((!(((uint32_t)(((RuntimeArray*)L_1)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		// this.chatClient.Subscribe(this.ChannelsToJoinOnConnect, this.HistoryLengthToFetch);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_3 = __this->___chatClient_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = __this->___ChannelsToJoinOnConnect_4;
		int32_t L_5 = __this->___HistoryLengthToFetch_6;
		NullCheck(L_3);
		bool L_6;
		L_6 = ChatClient_Subscribe_m4A3A6D2D5703A1D8CF8ED0CACA717114062A6559(L_3, L_4, L_5, NULL);
	}

IL_0034:
	{
		// this.ConnectingLabel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___ConnectingLabel_12;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// this.UserIdText.text = "Connected as "+ this.UserName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___UserIdText_24;
		String_t* L_9;
		L_9 = ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1_inline(__this, NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral18BA82A745D9E10EF604341BD4FA08FA6FBF82D5, L_9, NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_10);
		// this.ChatPanel.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___ChatPanel_13;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// if (this.FriendsList!=null  && this.FriendsList.Length>0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = __this->___FriendsList_5;
		if (!L_13)
		{
			goto IL_0083;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = __this->___FriendsList_5;
		NullCheck(L_14);
		G_B8_0 = ((!(((uint32_t)(((RuntimeArray*)L_14)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0084;
	}

IL_0083:
	{
		G_B8_0 = 0;
	}

IL_0084:
	{
		V_1 = (bool)G_B8_0;
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_00e8;
		}
	}
	{
		// this.chatClient.AddFriends(this.FriendsList); // Add some users to the server-list to get their status updates
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_16 = __this->___chatClient_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = __this->___FriendsList_5;
		NullCheck(L_16);
		bool L_18;
		L_18 = ChatClient_AddFriends_mC7A8A45F98205A68592ED3BE7A5FC88BF4EFB809(L_16, L_17, NULL);
		// foreach(string _friend in this.FriendsList)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = __this->___FriendsList_5;
		V_2 = L_19;
		V_3 = 0;
		goto IL_00e1;
	}

IL_00a7:
	{
		// foreach(string _friend in this.FriendsList)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = V_2;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		String_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_4 = L_23;
		// if (this.FriendListUiItemtoInstantiate != null && _friend!= this.UserName)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___FriendListUiItemtoInstantiate_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00ca;
		}
	}
	{
		String_t* L_26 = V_4;
		String_t* L_27;
		L_27 = ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1_inline(__this, NULL);
		bool L_28;
		L_28 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_26, L_27, NULL);
		G_B13_0 = ((int32_t)(L_28));
		goto IL_00cb;
	}

IL_00ca:
	{
		G_B13_0 = 0;
	}

IL_00cb:
	{
		V_5 = (bool)G_B13_0;
		bool L_29 = V_5;
		if (!L_29)
		{
			goto IL_00dc;
		}
	}
	{
		// this.InstantiateFriendButton(_friend);
		String_t* L_30 = V_4;
		ChatGui_InstantiateFriendButton_m76FB5E6D0ACF60E58F8EE09C10998D49020B4CD1(__this, L_30, NULL);
	}

IL_00dc:
	{
		int32_t L_31 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00e1:
	{
		// foreach(string _friend in this.FriendsList)
		int32_t L_32 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = V_2;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_00a7;
		}
	}
	{
	}

IL_00e8:
	{
		// if (this.FriendListUiItemtoInstantiate != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = __this->___FriendListUiItemtoInstantiate_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_34, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_6 = L_35;
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_0109;
		}
	}
	{
		// this.FriendListUiItemtoInstantiate.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___FriendListUiItemtoInstantiate_18;
		NullCheck(L_37);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_37, (bool)0, NULL);
	}

IL_0109:
	{
		// this.chatClient.SetOnlineStatus(ChatUserStatus.Online); // You can set your online state (without a mesage).
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_38 = __this->___chatClient_9;
		NullCheck(L_38);
		bool L_39;
		L_39 = ChatClient_SetOnlineStatus_mEFE64834C76CBF45AB5B986DE9FE28A27D77E6CD(L_38, 2, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnDisconnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnDisconnected_m7E9FDB43A4AB5E24B2776DA8E451777DC70AC089 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37DD04BE01CD12295B3C994FBEE871F305800521);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnDisconnected()");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral37DD04BE01CD12295B3C994FBEE871F305800521, NULL);
		// this.ConnectingLabel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___ConnectingLabel_12;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnChatStateChange(Photon.Chat.ChatState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnChatStateChange_mB6DE685B2B39B84A3568D59E86289DEE53A055AD (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, int32_t ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatState_t051505084374FEB7E666EAF9C3D7A8DFBA5119D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.StateText.text = state.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___StateText_23;
		Il2CppFakeBox<int32_t> L_1(ChatState_t051505084374FEB7E666EAF9C3D7A8DFBA5119D6_il2cpp_TypeInfo_var, (&___0_state));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnSubscribed(System.String[],System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnSubscribed_mB6644A294FF6AE8EF9E7BE72B2DF72E3FA64C6E4 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_channels, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___1_results, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02B3E56E4708FA9AEED0B607268A8985B53DDF13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25D19D44AE79EC606DD671C43230AAA8F1766EE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	bool V_3 = false;
	{
		// foreach (string channel in channels)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_channels;
		V_0 = L_0;
		V_1 = 0;
		goto IL_003f;
	}

IL_0008:
	{
		// foreach (string channel in channels)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// this.chatClient.PublishMessage(channel, "says 'hi'."); // you don't HAVE to send a msg on join but you could.
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_5 = __this->___chatClient_9;
		String_t* L_6 = V_2;
		NullCheck(L_5);
		bool L_7;
		L_7 = ChatClient_PublishMessage_mC0EA414F46817A9F77DF910D9094AF23B563A2D8(L_5, L_6, _stringLiteral02B3E56E4708FA9AEED0B607268A8985B53DDF13, (bool)0, NULL);
		// if (this.ChannelToggleToInstantiate != null)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_8 = __this->___ChannelToggleToInstantiate_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_003a;
		}
	}
	{
		// this.InstantiateChannelButton(channel);
		String_t* L_11 = V_2;
		ChatGui_InstantiateChannelButton_m4C6135B30B8F5C9BDF9AE1753E8AFE63B791D401(__this, L_11, NULL);
	}

IL_003a:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_003f:
	{
		// foreach (string channel in channels)
		int32_t L_13 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0008;
		}
	}
	{
		// Debug.Log("OnSubscribed: " + string.Join(", ", channels));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = ___0_channels;
		String_t* L_16;
		L_16 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_15, NULL);
		String_t* L_17;
		L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral25D19D44AE79EC606DD671C43230AAA8F1766EE6, L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_17, NULL);
		// this.ShowChannel(channels[0]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ___0_channels;
		NullCheck(L_18);
		int32_t L_19 = 0;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ChatGui_ShowChannel_m9AB1B8EFCEA804119F7891EB21AA299D9EE9C211(__this, L_20, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnSubscribed(System.String,System.String[],System.Collections.Generic.Dictionary`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnSubscribed_mAE9A9BA2F388C116F4CBC4F7A2113BD23E06B0F8 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___0_channel, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_users, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___2_properties, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A36DF6525515FE29AEB2A52B49635745B5D8E56);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("OnSubscribed: {0}, users.Count: {1} Channel-props: {2}.", channel, users.Length, properties.ToStringFull());
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___0_channel;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ___1_users;
		NullCheck(L_4);
		int32_t L_5 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_3;
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_8 = ___2_properties;
		il2cpp_codegen_runtime_class_init_inline(Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = Extensions_ToStringFull_m7D8AFCB5DE3085C237E3DE4D43209F74C60198C4(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_9);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral4A36DF6525515FE29AEB2A52B49635745B5D8E56, L_7, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::InstantiateChannelButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_InstantiateChannelButton_m4C6135B30B8F5C9BDF9AE1753E8AFE63B791D401 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___0_channelName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07_mA5CB24AADA6105A0763F0F315A95A0B02EB5A05E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m7AC008F2D3DCBB5019F0BE948B7F9B77284CC86C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m6F51F2B8CB0DBD60C3C4AF683A4FE9D7698C7482_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF726A1EAC195324F63D384A1F2A33114361B699C);
		s_Il2CppMethodInitialized = true;
	}
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* V_0 = NULL;
	bool V_1 = false;
	{
		// if (this.channelToggles.ContainsKey(channelName))
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_0 = __this->___channelToggles_19;
		String_t* L_1 = ___0_channelName;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7(L_0, L_1, Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.Log("Skipping creation for an existing channel toggle.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF726A1EAC195324F63D384A1F2A33114361B699C, NULL);
		// return;
		goto IL_0070;
	}

IL_001f:
	{
		// Toggle cbtn = (Toggle)Instantiate(this.ChannelToggleToInstantiate);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_4 = __this->___ChannelToggleToInstantiate_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_5;
		L_5 = Object_Instantiate_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m6F51F2B8CB0DBD60C3C4AF683A4FE9D7698C7482(L_4, Object_Instantiate_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m6F51F2B8CB0DBD60C3C4AF683A4FE9D7698C7482_RuntimeMethod_var);
		V_0 = L_5;
		// cbtn.gameObject.SetActive(true);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_6 = V_0;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// cbtn.GetComponentInChildren<ChannelSelector>().SetChannel(channelName);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_8 = V_0;
		NullCheck(L_8);
		ChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07* L_9;
		L_9 = Component_GetComponentInChildren_TisChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07_mA5CB24AADA6105A0763F0F315A95A0B02EB5A05E(L_8, Component_GetComponentInChildren_TisChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07_mA5CB24AADA6105A0763F0F315A95A0B02EB5A05E_RuntimeMethod_var);
		String_t* L_10 = ___0_channelName;
		NullCheck(L_9);
		ChannelSelector_SetChannel_m7E493B7588E65D501C7DA99C72BF36DAA565250E(L_9, L_10, NULL);
		// cbtn.transform.SetParent(this.ChannelToggleToInstantiate.transform.parent, false);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_11 = V_0;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_13 = __this->___ChannelToggleToInstantiate_17;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_14, NULL);
		NullCheck(L_12);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_12, L_15, (bool)0, NULL);
		// this.channelToggles.Add(channelName, cbtn);
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_16 = __this->___channelToggles_19;
		String_t* L_17 = ___0_channelName;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_18 = V_0;
		NullCheck(L_16);
		Dictionary_2_Add_m7AC008F2D3DCBB5019F0BE948B7F9B77284CC86C(L_16, L_17, L_18, Dictionary_2_Add_m7AC008F2D3DCBB5019F0BE948B7F9B77284CC86C_RuntimeMethod_var);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::InstantiateFriendButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_InstantiateFriendButton_m76FB5E6D0ACF60E58F8EE09C10998D49020B4CD1 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___0_friendId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mFDB00FBC9AEC3F5411BC17218005A2DDC01A4EE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13_m0046B7B489607CF796C30CD83C51F1304D701F67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* V_1 = NULL;
	{
		// GameObject fbtn = (GameObject)Instantiate(this.FriendListUiItemtoInstantiate);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___FriendListUiItemtoInstantiate_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_0 = L_1;
		// fbtn.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// FriendItem  _friendItem =    fbtn.GetComponent<FriendItem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(L_4);
		FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* L_5;
		L_5 = GameObject_GetComponent_TisFriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13_m0046B7B489607CF796C30CD83C51F1304D701F67(L_4, GameObject_GetComponent_TisFriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13_m0046B7B489607CF796C30CD83C51F1304D701F67_RuntimeMethod_var);
		V_1 = L_5;
		// _friendItem.FriendId = friendId;
		FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* L_6 = V_1;
		String_t* L_7 = ___0_friendId;
		NullCheck(L_6);
		FriendItem_set_FriendId_m49FB0C8B978DD2E35361DE3ED6863257B82E4BB2(L_6, L_7, NULL);
		// fbtn.transform.SetParent(this.FriendListUiItemtoInstantiate.transform.parent, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___FriendListUiItemtoInstantiate_18;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_11, NULL);
		NullCheck(L_9);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_9, L_12, (bool)0, NULL);
		// this.friendListItemLUT[friendId] = _friendItem;
		Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E* L_13 = __this->___friendListItemLUT_20;
		String_t* L_14 = ___0_friendId;
		FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* L_15 = V_1;
		NullCheck(L_13);
		Dictionary_2_set_Item_mFDB00FBC9AEC3F5411BC17218005A2DDC01A4EE7(L_13, L_14, L_15, Dictionary_2_set_Item_mFDB00FBC9AEC3F5411BC17218005A2DDC01A4EE7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnUnsubscribed(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnUnsubscribed_mA0056721C7A125C3E1D4AC1A2143744BC162D905 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_channels, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m2D3C2B49D6B541197F1E118FE7D6F37AF46A08C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m4F6FEFABCBACA9B9B3DED9BFAB8BDA9B47FA678B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mFCFB38659217BF06006B6BC2FFD16389EF2A44EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m65B54189C1D9C6B6BD1BABB5755C0647EE39C89B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t4E0F3B7704316E8AB75E2D31CCAA4790C47642AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m9A4008D157E7FA3D568FE444C0D926C78B1645B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m8C266329612FA91F72F7F4D9C3137D4448CD5E1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA36D615703FF124A704E046433369D41AA86C957);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF901E66F2A148065254F4D6B82528054EF835B28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDB6E6D617A894CF6A5EC4195B7DBF4AFF000089);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	bool V_3 = false;
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B5_0 = 0;
	{
		// foreach (string channelName in channels)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_channels;
		V_0 = L_0;
		V_1 = 0;
		goto IL_00f1;
	}

IL_000b:
	{
		// foreach (string channelName in channels)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (this.channelToggles.ContainsKey(channelName))
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_5 = __this->___channelToggles_19;
		String_t* L_6 = V_2;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7(L_5, L_6, Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7_RuntimeMethod_var);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_00d4;
		}
	}
	{
		// Toggle t = this.channelToggles[channelName];
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_9 = __this->___channelToggles_19;
		String_t* L_10 = V_2;
		NullCheck(L_9);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_11;
		L_11 = Dictionary_2_get_Item_m65B54189C1D9C6B6BD1BABB5755C0647EE39C89B(L_9, L_10, Dictionary_2_get_Item_m65B54189C1D9C6B6BD1BABB5755C0647EE39C89B_RuntimeMethod_var);
		V_4 = L_11;
		// Destroy(t.gameObject);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_12 = V_4;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_13, NULL);
		// this.channelToggles.Remove(channelName);
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_14 = __this->___channelToggles_19;
		String_t* L_15 = V_2;
		NullCheck(L_14);
		bool L_16;
		L_16 = Dictionary_2_Remove_m4F6FEFABCBACA9B9B3DED9BFAB8BDA9B47FA678B(L_14, L_15, Dictionary_2_Remove_m4F6FEFABCBACA9B9B3DED9BFAB8BDA9B47FA678B_RuntimeMethod_var);
		// Debug.Log("Unsubscribed from channel '" + channelName + "'.");
		String_t* L_17 = V_2;
		String_t* L_18;
		L_18 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralFDB6E6D617A894CF6A5EC4195B7DBF4AFF000089, L_17, _stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_18, NULL);
		// if (channelName == this.selectedChannelName && this.channelToggles.Count > 0)
		String_t* L_19 = V_2;
		String_t* L_20 = __this->___selectedChannelName_8;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, L_20, NULL);
		if (!L_21)
		{
			goto IL_0080;
		}
	}
	{
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_22 = __this->___channelToggles_19;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = Dictionary_2_get_Count_mFCFB38659217BF06006B6BC2FFD16389EF2A44EC(L_22, Dictionary_2_get_Count_mFCFB38659217BF06006B6BC2FFD16389EF2A44EC_RuntimeMethod_var);
		G_B5_0 = ((((int32_t)L_23) > ((int32_t)0))? 1 : 0);
		goto IL_0081;
	}

IL_0080:
	{
		G_B5_0 = 0;
	}

IL_0081:
	{
		V_5 = (bool)G_B5_0;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00d1;
		}
	}
	{
		// IEnumerator<KeyValuePair<string, Toggle>> firstEntry = this.channelToggles.GetEnumerator();
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_25 = __this->___channelToggles_19;
		NullCheck(L_25);
		Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08 L_26;
		L_26 = Dictionary_2_GetEnumerator_m2D3C2B49D6B541197F1E118FE7D6F37AF46A08C5(L_25, Dictionary_2_GetEnumerator_m2D3C2B49D6B541197F1E118FE7D6F37AF46A08C5_RuntimeMethod_var);
		Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08 L_27 = L_26;
		RuntimeObject* L_28 = Box(Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08_il2cpp_TypeInfo_var, &L_27);
		V_6 = (RuntimeObject*)L_28;
		// firstEntry.MoveNext();
		RuntimeObject* L_29 = V_6;
		NullCheck(L_29);
		bool L_30;
		L_30 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_29);
		// this.ShowChannel(firstEntry.Current.Key);
		RuntimeObject* L_31 = V_6;
		NullCheck(L_31);
		KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB L_32;
		L_32 = InterfaceFuncInvoker0< KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UI.Toggle>>::get_Current() */, IEnumerator_1_t4E0F3B7704316E8AB75E2D31CCAA4790C47642AC_il2cpp_TypeInfo_var, L_31);
		V_7 = L_32;
		String_t* L_33;
		L_33 = KeyValuePair_2_get_Key_m9A4008D157E7FA3D568FE444C0D926C78B1645B2_inline((&V_7), KeyValuePair_2_get_Key_m9A4008D157E7FA3D568FE444C0D926C78B1645B2_RuntimeMethod_var);
		ChatGui_ShowChannel_m9AB1B8EFCEA804119F7891EB21AA299D9EE9C211(__this, L_33, NULL);
		// firstEntry.Current.Value.isOn = true;
		RuntimeObject* L_34 = V_6;
		NullCheck(L_34);
		KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB L_35;
		L_35 = InterfaceFuncInvoker0< KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UI.Toggle>>::get_Current() */, IEnumerator_1_t4E0F3B7704316E8AB75E2D31CCAA4790C47642AC_il2cpp_TypeInfo_var, L_34);
		V_7 = L_35;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_36;
		L_36 = KeyValuePair_2_get_Value_m8C266329612FA91F72F7F4D9C3137D4448CD5E1D_inline((&V_7), KeyValuePair_2_get_Value_m8C266329612FA91F72F7F4D9C3137D4448CD5E1D_RuntimeMethod_var);
		NullCheck(L_36);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_36, (bool)1, NULL);
	}

IL_00d1:
	{
		goto IL_00ec;
	}

IL_00d4:
	{
		// Debug.Log("Can't unsubscribe from channel '" + channelName + "' because you are currently not subscribed to it.");
		String_t* L_37 = V_2;
		String_t* L_38;
		L_38 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralA36D615703FF124A704E046433369D41AA86C957, L_37, _stringLiteralF901E66F2A148065254F4D6B82528054EF835B28, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_38, NULL);
	}

IL_00ec:
	{
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00f1:
	{
		// foreach (string channelName in channels)
		int32_t L_40 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = V_0;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnGetMessages(System.String,System.String[],System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnGetMessages_m9115E1E3EF6E1CC79DBF18C66E4990C33A545E35 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___0_channelName, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_senders, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_messages, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (channelName.Equals(this.selectedChannelName))
		String_t* L_0 = ___0_channelName;
		String_t* L_1 = __this->___selectedChannelName_8;
		NullCheck(L_0);
		bool L_2;
		L_2 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// this.ShowChannel(this.selectedChannelName);
		String_t* L_4 = __this->___selectedChannelName_8;
		ChatGui_ShowChannel_m9AB1B8EFCEA804119F7891EB21AA299D9EE9C211(__this, L_4, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnPrivateMessage(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnPrivateMessage_mE602C58AC56D281B29F1E19F5DFC98A8E480177A (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___0_sender, RuntimeObject* ___1_message, String_t* ___2_channelName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB61F8E5C6788E7093D4F1DE579EBD7C233090B94);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// this.InstantiateChannelButton(channelName);
		String_t* L_0 = ___2_channelName;
		ChatGui_InstantiateChannelButton_m4C6135B30B8F5C9BDF9AE1753E8AFE63B791D401(__this, L_0, NULL);
		// byte[] msgBytes = message as byte[];
		RuntimeObject* L_1 = ___1_message;
		V_0 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)IsInst((RuntimeObject*)L_1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		// if (msgBytes != null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// Debug.Log("Message with byte[].Length: "+ msgBytes.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		V_2 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB61F8E5C6788E7093D4F1DE579EBD7C233090B94, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
	}

IL_0035:
	{
		// if (this.selectedChannelName.Equals(channelName))
		String_t* L_7 = __this->___selectedChannelName_8;
		String_t* L_8 = ___2_channelName;
		NullCheck(L_7);
		bool L_9;
		L_9 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_7, L_8, NULL);
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_004f;
		}
	}
	{
		// this.ShowChannel(channelName);
		String_t* L_11 = ___2_channelName;
		ChatGui_ShowChannel_m9AB1B8EFCEA804119F7891EB21AA299D9EE9C211(__this, L_11, NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnStatusUpdate(System.String,System.Int32,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnStatusUpdate_mEABCBD812C9D9AF133E285BAE9E83994A726E0A4 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___0_user, int32_t ___1_status, bool ___2_gotMessage, RuntimeObject* ___3_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFC86DBD8CA71ACF273A1F7FB6CD2DAD53449653E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mD91F54F913AE58A20D0D60800D7E13B3A81BCDBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral187DC7C8E0EDA1DE1ED6DF6A69E16E1804984856);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE149C7622A20B800C0F221FF927D6238C6DD62);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* V_1 = NULL;
	bool V_2 = false;
	{
		// Debug.LogWarning("status: " + string.Format("{0} is {1}. Msg:{2}", user, status, message));
		String_t* L_0 = ___0_user;
		int32_t L_1 = ___1_status;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		RuntimeObject* L_4 = ___3_message;
		String_t* L_5;
		L_5 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral187DC7C8E0EDA1DE1ED6DF6A69E16E1804984856, L_0, L_3, L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCCE149C7622A20B800C0F221FF927D6238C6DD62, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_6, NULL);
		// if (this.friendListItemLUT.ContainsKey(user))
		Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E* L_7 = __this->___friendListItemLUT_20;
		String_t* L_8 = ___0_user;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_ContainsKey_mFC86DBD8CA71ACF273A1F7FB6CD2DAD53449653E(L_7, L_8, Dictionary_2_ContainsKey_mFC86DBD8CA71ACF273A1F7FB6CD2DAD53449653E_RuntimeMethod_var);
		V_0 = L_9;
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_0059;
		}
	}
	{
		// FriendItem _friendItem = this.friendListItemLUT[user];
		Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E* L_11 = __this->___friendListItemLUT_20;
		String_t* L_12 = ___0_user;
		NullCheck(L_11);
		FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* L_13;
		L_13 = Dictionary_2_get_Item_mD91F54F913AE58A20D0D60800D7E13B3A81BCDBC(L_11, L_12, Dictionary_2_get_Item_mD91F54F913AE58A20D0D60800D7E13B3A81BCDBC_RuntimeMethod_var);
		V_1 = L_13;
		// if ( _friendItem!=null) _friendItem.OnFriendStatusUpdate(status,gotMessage,message);
		FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_15;
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_0058;
		}
	}
	{
		// if ( _friendItem!=null) _friendItem.OnFriendStatusUpdate(status,gotMessage,message);
		FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* L_17 = V_1;
		int32_t L_18 = ___1_status;
		bool L_19 = ___2_gotMessage;
		RuntimeObject* L_20 = ___3_message;
		NullCheck(L_17);
		FriendItem_OnFriendStatusUpdate_mC336B386CEABD37A2BA65254CFE2C5125263E4CD(L_17, L_18, L_19, L_20, NULL);
	}

IL_0058:
	{
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnUserSubscribed(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnUserSubscribed_m4D1CE2135AEECD1C76069F86FFCD0BD9FDAA2721 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___0_channel, String_t* ___1_user, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93CD26FD25F534D18F21EBB330F02E0264AC3C8C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("OnUserSubscribed: channel=\"{0}\" userId=\"{1}\"", channel, user);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___0_channel;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = ___1_user;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral93CD26FD25F534D18F21EBB330F02E0264AC3C8C, L_3, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnUserUnsubscribed(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnUserUnsubscribed_m761BB5EFEE4CBCFFC651343C4AEA1C01DFCADC94 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___0_channel, String_t* ___1_user, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31775E5380AC9751F2E61EA3DD24D9243DE804B1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("OnUserUnsubscribed: channel=\"{0}\" userId=\"{1}\"", channel, user);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___0_channel;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = ___1_user;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral31775E5380AC9751F2E61EA3DD24D9243DE804B1, L_3, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnChannelPropertiesChanged(System.String,System.String,System.Collections.Generic.Dictionary`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnChannelPropertiesChanged_m69468897BD50BC64B49B64DB314BCC0BB6D253DE (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___0_channel, String_t* ___1_userId, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___2_properties, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E1D0B7FC6AE1E4699086BAFDFD167B73A71BF62);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("OnChannelPropertiesChanged: {0} by {1}. Props: {2}.", channel, userId, Extensions.ToStringFull(properties));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___0_channel;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = ___1_userId;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_6 = ___2_properties;
		il2cpp_codegen_runtime_class_init_inline(Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = Extensions_ToStringFull_m7D8AFCB5DE3085C237E3DE4D43209F74C60198C4(L_6, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral2E1D0B7FC6AE1E4699086BAFDFD167B73A71BF62, L_5, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnUserPropertiesChanged(System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnUserPropertiesChanged_mA9630BFDC595612F70BA891940B4B1FF350AD215 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___0_channel, String_t* ___1_targetUserId, String_t* ___2_senderUserId, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___3_properties, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCCA328F77D050FE98C954ABC27B722687F2666D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("OnUserPropertiesChanged: (channel:{0} user:{1}) by {2}. Props: {3}.", channel, targetUserId, senderUserId, Extensions.ToStringFull(properties));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___0_channel;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = ___1_targetUserId;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___2_senderUserId;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_8 = ___3_properties;
		il2cpp_codegen_runtime_class_init_inline(Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = Extensions_ToStringFull_m7D8AFCB5DE3085C237E3DE4D43209F74C60198C4(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_9);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteralFCCA328F77D050FE98C954ABC27B722687F2666D, L_7, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnErrorInfo(System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnErrorInfo_m775944C548C91A8C1461451BA2ED1A925A63F0B8 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___0_channel, String_t* ___1_error, RuntimeObject* ___2_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE01396087B968D8089649181D62173B42DA52091);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("OnErrorInfo for channel {0}. Error: {1} Data: {2}", channel, error, data);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___0_channel;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = ___1_error;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		RuntimeObject* L_6 = ___2_data;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteralE01396087B968D8089649181D62173B42DA52091, L_5, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::AddMessageToSelectedChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_AddMessageToSelectedChannel_m7765D7820D47185D32243EB135854241B358E4CE (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E38E2B4F159337570AD4E9656D4BDAF8B0EBCF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB153A4F640C1BF005F7E30CECC4A84EB08150A);
		s_Il2CppMethodInitialized = true;
	}
	ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// ChatChannel channel = null;
		V_0 = (ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1*)NULL;
		// bool found = this.chatClient.TryGetChannel(this.selectedChannelName, out channel);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_0 = __this->___chatClient_9;
		String_t* L_1 = __this->___selectedChannelName_8;
		NullCheck(L_0);
		bool L_2;
		L_2 = ChatClient_TryGetChannel_m596F2DCA70B7C83E7E82B92B341DDEE9A5864C0A(L_0, L_1, (&V_0), NULL);
		V_1 = L_2;
		// if (!found)
		bool L_3 = V_1;
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// Debug.Log("AddMessageToSelectedChannel failed to find channel: " + this.selectedChannelName);
		String_t* L_5 = __this->___selectedChannelName_8;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4E38E2B4F159337570AD4E9656D4BDAF8B0EBCF1, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		// return;
		goto IL_0050;
	}

IL_0038:
	{
		// if (channel != null)
		ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* L_7 = V_0;
		V_3 = (bool)((!(((RuntimeObject*)(ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		// channel.Add("Bot", msg,0); //TODO: how to use msgID?
		ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* L_9 = V_0;
		String_t* L_10 = ___0_msg;
		NullCheck(L_9);
		ChatChannel_Add_m22E0343342399B1C9130CCDD12325EAA80DA9440(L_9, _stringLiteralDEB153A4F640C1BF005F7E30CECC4A84EB08150A, L_10, 0, NULL);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::ShowChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_ShowChannel_m9AB1B8EFCEA804119F7891EB21AA299D9EE9C211 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___0_channelName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m2D3C2B49D6B541197F1E118FE7D6F37AF46A08C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m06019984AEF249BE743B261895FBDFCF3DE314FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m950509CD692BEAA25841830AE3528B713C36DAC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF6F3ECC910925263DF2A5278F4F56F520C1507A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m9A4008D157E7FA3D568FE444C0D926C78B1645B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m8C266329612FA91F72F7F4D9C3137D4448CD5E1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D25464A0D2697B9DE85A8CE7C6E223B98C82E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF92D1197FE7F9C3266589153D13221067FA7BB4A);
		s_Il2CppMethodInitialized = true;
	}
	ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08 V_4;
	memset((&V_4), 0, sizeof(V_4));
	KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB V_5;
	memset((&V_5), 0, sizeof(V_5));
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* G_B8_0 = NULL;
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* G_B9_1 = NULL;
	{
		// if (string.IsNullOrEmpty(channelName))
		String_t* L_0 = ___0_channelName;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_00c5;
	}

IL_0011:
	{
		// ChatChannel channel = null;
		V_0 = (ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1*)NULL;
		// bool found = this.chatClient.TryGetChannel(channelName, out channel);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_3 = __this->___chatClient_9;
		String_t* L_4 = ___0_channelName;
		NullCheck(L_3);
		bool L_5;
		L_5 = ChatClient_TryGetChannel_m596F2DCA70B7C83E7E82B92B341DDEE9A5864C0A(L_3, L_4, (&V_0), NULL);
		V_1 = L_5;
		// if (!found)
		bool L_6 = V_1;
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		// Debug.Log("ShowChannel failed to find channel: " + channelName);
		String_t* L_8 = ___0_channelName;
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral60D25464A0D2697B9DE85A8CE7C6E223B98C82E6, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_9, NULL);
		// return;
		goto IL_00c5;
	}

IL_0041:
	{
		// this.selectedChannelName = channelName;
		String_t* L_10 = ___0_channelName;
		__this->___selectedChannelName_8 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectedChannelName_8), (void*)L_10);
		// this.CurrentChannelText.text = channel.ToStringMessages();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___CurrentChannelText_16;
		ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = ChatChannel_ToStringMessages_mB286B6E5F35FAF7A5F4F4EE259BB64207F34FE18(L_12, NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_13);
		// Debug.Log("ShowChannel: " + this.selectedChannelName);
		String_t* L_14 = __this->___selectedChannelName_8;
		String_t* L_15;
		L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF92D1197FE7F9C3266589153D13221067FA7BB4A, L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_15, NULL);
		// foreach (KeyValuePair<string, Toggle> pair in this.channelToggles)
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_16 = __this->___channelToggles_19;
		NullCheck(L_16);
		Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08 L_17;
		L_17 = Dictionary_2_GetEnumerator_m2D3C2B49D6B541197F1E118FE7D6F37AF46A08C5(L_16, Dictionary_2_GetEnumerator_m2D3C2B49D6B541197F1E118FE7D6F37AF46A08C5_RuntimeMethod_var);
		V_4 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b6:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m06019984AEF249BE743B261895FBDFCF3DE314FD((&V_4), Enumerator_Dispose_m06019984AEF249BE743B261895FBDFCF3DE314FD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ab_1;
			}

IL_0080_1:
			{
				// foreach (KeyValuePair<string, Toggle> pair in this.channelToggles)
				KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB L_18;
				L_18 = Enumerator_get_Current_mF6F3ECC910925263DF2A5278F4F56F520C1507A6_inline((&V_4), Enumerator_get_Current_mF6F3ECC910925263DF2A5278F4F56F520C1507A6_RuntimeMethod_var);
				V_5 = L_18;
				// pair.Value.isOn = pair.Key == channelName ? true : false;
				Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_19;
				L_19 = KeyValuePair_2_get_Value_m8C266329612FA91F72F7F4D9C3137D4448CD5E1D_inline((&V_5), KeyValuePair_2_get_Value_m8C266329612FA91F72F7F4D9C3137D4448CD5E1D_RuntimeMethod_var);
				String_t* L_20;
				L_20 = KeyValuePair_2_get_Key_m9A4008D157E7FA3D568FE444C0D926C78B1645B2_inline((&V_5), KeyValuePair_2_get_Key_m9A4008D157E7FA3D568FE444C0D926C78B1645B2_RuntimeMethod_var);
				String_t* L_21 = ___0_channelName;
				bool L_22;
				L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, L_21, NULL);
				G_B7_0 = L_19;
				if (L_22)
				{
					G_B8_0 = L_19;
					goto IL_00a3_1;
				}
			}
			{
				G_B9_0 = 0;
				G_B9_1 = G_B7_0;
				goto IL_00a4_1;
			}

IL_00a3_1:
			{
				G_B9_0 = 1;
				G_B9_1 = G_B8_0;
			}

IL_00a4_1:
			{
				NullCheck(G_B9_1);
				Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(G_B9_1, (bool)G_B9_0, NULL);
			}

IL_00ab_1:
			{
				// foreach (KeyValuePair<string, Toggle> pair in this.channelToggles)
				bool L_23;
				L_23 = Enumerator_MoveNext_m950509CD692BEAA25841830AE3528B713C36DAC9((&V_4), Enumerator_MoveNext_m950509CD692BEAA25841830AE3528B713C36DAC9_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_0080_1;
				}
			}
			{
				goto IL_00c5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c5:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OpenDashboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OpenDashboard_m331E5792848FBF938E160C747A9C5D3848E9A265 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral011D7D9D78DC2A4EA6437F75F6AE9C5B1D038EC5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.OpenURL("https://dashboard.photonengine.com");
		Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89(_stringLiteral011D7D9D78DC2A4EA6437F75F6AE9C5B1D038EC5, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui__ctor_m9914600AC511E7817210F48145D05D3DBDD56B2C (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m05968164AFC47B4DAC2545E4FAC531C51F66C7FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1951C457B495EAFA02160F793A6277161FDCEA3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<string, Toggle> channelToggles = new Dictionary<string, Toggle>();
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_0 = (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48*)il2cpp_codegen_object_new(Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m1951C457B495EAFA02160F793A6277161FDCEA3F(L_0, Dictionary_2__ctor_m1951C457B495EAFA02160F793A6277161FDCEA3F_RuntimeMethod_var);
		__this->___channelToggles_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___channelToggles_19), (void*)L_0);
		// private readonly Dictionary<string,FriendItem> friendListItemLUT =  new Dictionary<string, FriendItem>();
		Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E* L_1 = (Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E*)il2cpp_codegen_object_new(Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m05968164AFC47B4DAC2545E4FAC531C51F66C7FD(L_1, Dictionary_2__ctor_m05968164AFC47B4DAC2545E4FAC531C51F66C7FD_RuntimeMethod_var);
		__this->___friendListItemLUT_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___friendListItemLUT_20), (void*)L_1);
		// public bool ShowState = true;
		__this->___ShowState_21 = (bool)1;
		// public int TestLength = 2048;
		__this->___TestLength_26 = ((int32_t)2048);
		// private byte[] testBytes = new byte[2048];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)2048));
		__this->___testBytes_27 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___testBytes_27), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui__cctor_m9620D5FA4E83914ED07CE310AE0DCF902FD51E62 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C91CEEB5E6ACD712F102DE9EE44CB907B557A17);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static string HelpText = "\n    -- HELP --\n" +
		//     "To subscribe to channel(s) (channelnames are case sensitive) :  \n" +
		//         "\t<color=#E07B00>\\subscribe</color> <color=green><list of channelnames></color>\n" +
		//         "\tor\n" +
		//         "\t<color=#E07B00>\\s</color> <color=green><list of channelnames></color>\n" +
		//         "\n" +
		//         "To leave channel(s):\n" +
		//         "\t<color=#E07B00>\\unsubscribe</color> <color=green><list of channelnames></color>\n" +
		//         "\tor\n" +
		//         "\t<color=#E07B00>\\u</color> <color=green><list of channelnames></color>\n" +
		//         "\n" +
		//         "To switch the active channel\n" +
		//         "\t<color=#E07B00>\\join</color> <color=green><channelname></color>\n" +
		//         "\tor\n" +
		//         "\t<color=#E07B00>\\j</color> <color=green><channelname></color>\n" +
		//         "\n" +
		//         "To send a private message: (username are case sensitive)\n" +
		//         "\t\\<color=#E07B00>msg</color> <color=green><username></color> <color=green><message></color>\n" +
		//         "\n" +
		//         "To change status:\n" +
		//         "\t\\<color=#E07B00>state</color> <color=green><stateIndex></color> <color=green><message></color>\n" +
		//         "<color=green>0</color> = Offline " +
		//         "<color=green>1</color> = Invisible " +
		//         "<color=green>2</color> = Online " +
		//         "<color=green>3</color> = Away \n" +
		//         "<color=green>4</color> = Do not disturb " +
		//         "<color=green>5</color> = Looking For Group " +
		//         "<color=green>6</color> = Playing" +
		//         "\n\n" +
		//         "To clear the current chat tab (private chats get closed):\n" +
		//         "\t<color=#E07B00>\\clear</color>";
		((ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_StaticFields*)il2cpp_codegen_static_fields_for(ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_il2cpp_TypeInfo_var))->___HelpText_25 = _stringLiteral2C91CEEB5E6ACD712F102DE9EE44CB907B557A17;
		Il2CppCodeGenWriteBarrier((void**)(&((ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_StaticFields*)il2cpp_codegen_static_fields_for(ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_il2cpp_TypeInfo_var))->___HelpText_25), (void*)_stringLiteral2C91CEEB5E6ACD712F102DE9EE44CB907B557A17);
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
// System.Void Photon.Chat.Demo.FriendItem::set_FriendId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FriendItem_set_FriendId_m49FB0C8B978DD2E35361DE3ED6863257B82E4BB2 (FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set { this.NameLabel.text = value; }
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___NameLabel_4;
		String_t* L_1 = ___0_value;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// set { this.NameLabel.text = value; }
		return;
	}
}
// System.String Photon.Chat.Demo.FriendItem::get_FriendId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FriendItem_get_FriendId_mA0037DB139EEC1F38A1B2E31707128111FE5DCD4 (FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return this.NameLabel.text; }
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___NameLabel_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return this.NameLabel.text; }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Photon.Chat.Demo.FriendItem::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FriendItem_Awake_m8BCC676379DCE1B967BC706C9247541A424F3C42 (FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Health.text = string.Empty;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___Health_6;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.FriendItem::OnFriendStatusUpdate(System.Int32,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FriendItem_OnFriendStatusUpdate_mC336B386CEABD37A2BA65254CFE2C5125263E4CD (FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* __this, int32_t ___0_status, bool ___1_gotMessage, RuntimeObject* ___2_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1729AC1B7F3D22492501BEF772B5BFDEBCF05B70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38DB4AF6DBE7A8DBCC3821BE5605A5BB55BCB3D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77F781BE1FA4EBA75ACC2DC942D3D87126A499DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86C677CA2B54E7E4E81E71A6AF30E985B484A0AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F902889DF6EC5CFE211AF8D1697BB12234DA66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF903ABCF81417315694F4593925EE527D6C1258B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB0DA295360002E063FF9B079B5E7DC3DB313083);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	String_t* V_4 = NULL;
	bool V_5 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_6 = NULL;
	bool V_7 = false;
	int32_t G_B14_0 = 0;
	{
		// switch (status)
		int32_t L_0 = ___0_status;
		V_2 = L_0;
		int32_t L_1 = V_2;
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_2, 1)))
		{
			case 0:
			{
				goto IL_0027;
			}
			case 1:
			{
				goto IL_002f;
			}
			case 2:
			{
				goto IL_0037;
			}
			case 3:
			{
				goto IL_003f;
			}
			case 4:
			{
				goto IL_0047;
			}
			case 5:
			{
				goto IL_004f;
			}
		}
	}
	{
		goto IL_0057;
	}

IL_0027:
	{
		// _status = "Invisible";
		V_0 = _stringLiteralE0F902889DF6EC5CFE211AF8D1697BB12234DA66;
		// break;
		goto IL_005f;
	}

IL_002f:
	{
		// _status = "Online";
		V_0 = _stringLiteralF903ABCF81417315694F4593925EE527D6C1258B;
		// break;
		goto IL_005f;
	}

IL_0037:
	{
		// _status = "Away";
		V_0 = _stringLiteral1729AC1B7F3D22492501BEF772B5BFDEBCF05B70;
		// break;
		goto IL_005f;
	}

IL_003f:
	{
		// _status = "Do not disturb";
		V_0 = _stringLiteral86C677CA2B54E7E4E81E71A6AF30E985B484A0AF;
		// break;
		goto IL_005f;
	}

IL_0047:
	{
		// _status = "Looking For Game/Group";
		V_0 = _stringLiteralFB0DA295360002E063FF9B079B5E7DC3DB313083;
		// break;
		goto IL_005f;
	}

IL_004f:
	{
		// _status = "Playing";
		V_0 = _stringLiteral38DB4AF6DBE7A8DBCC3821BE5605A5BB55BCB3D4;
		// break;
		goto IL_005f;
	}

IL_0057:
	{
		// _status = "Offline";
		V_0 = _stringLiteral77F781BE1FA4EBA75ACC2DC942D3D87126A499DB;
		// break;
		goto IL_005f;
	}

IL_005f:
	{
		// this.StatusLabel.text = _status;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___StatusLabel_5;
		String_t* L_4 = V_0;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		// if (gotMessage)
		bool L_5 = ___1_gotMessage;
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_00c5;
		}
	}
	{
		// string _health = string.Empty;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_4 = L_7;
		// if (message != null)
		RuntimeObject* L_8 = ___2_message;
		V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_00b6;
		}
	}
	{
		// string[] _messages = message as string[];
		RuntimeObject* L_10 = ___2_message;
		V_6 = ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)IsInst((RuntimeObject*)L_10, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var));
		// if (_messages != null && _messages.Length >= 2)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_6;
		if (!L_11)
		{
			goto IL_009c;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_6;
		NullCheck(L_12);
		G_B14_0 = ((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_009d;
	}

IL_009c:
	{
		G_B14_0 = 0;
	}

IL_009d:
	{
		V_7 = (bool)G_B14_0;
		bool L_13 = V_7;
		if (!L_13)
		{
			goto IL_00b5;
		}
	}
	{
		// _health = (string)_messages[1] + "%";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_6;
		NullCheck(L_14);
		int32_t L_15 = 1;
		String_t* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		String_t* L_17;
		L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_16, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, NULL);
		V_4 = L_17;
	}

IL_00b5:
	{
	}

IL_00b6:
	{
		// this.Health.text = _health;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = __this->___Health_6;
		String_t* L_19 = V_4;
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_19);
	}

IL_00c5:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.FriendItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FriendItem__ctor_mEF78B22B2415C36B99555074B166E333AAB60EC2 (FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean Photon.Chat.Demo.IgnoreUiRaycastWhenInactive::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IgnoreUiRaycastWhenInactive_IsRaycastLocationValid_m47CCC76507FA3811C9E41548B12A0E85830F13C9 (IgnoreUiRaycastWhenInactive_t4DD606784A41379E617458D4FF2D041690E7BAEF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenPoint, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_eventCamera, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return this.gameObject.activeInHierarchy;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Photon.Chat.Demo.IgnoreUiRaycastWhenInactive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IgnoreUiRaycastWhenInactive__ctor_m6BFAC886ACA5E3CB2403424B3F1D53BD695F833E (IgnoreUiRaycastWhenInactive_t4DD606784A41379E617458D4FF2D041690E7BAEF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Photon.Chat.Demo.NamePickGui::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamePickGui_Start_m10935A8B8CF57FC8505F0178067BA92426555E8B (NamePickGui_t8C0368B20268692BC4311641FC79610CCD7FB56B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88A4E835FC47194C325AC1B4075B94D15767248A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	{
		// this.chatNewComponent = FindObjectOfType<ChatGui>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* L_0;
		L_0 = Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30(Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30_RuntimeMethod_var);
		__this->___chatNewComponent_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chatNewComponent_5), (void*)L_0);
		// string prefsName = PlayerPrefs.GetString(UserNamePlayerPref);
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteral88A4E835FC47194C325AC1B4075B94D15767248A, NULL);
		V_0 = L_1;
		// if (!string.IsNullOrEmpty(prefsName))
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// this.idInput.text = prefsName;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_5 = __this->___idInput_6;
		String_t* L_6 = V_0;
		NullCheck(L_5);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_5, L_6, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.NamePickGui::EndEditOnEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamePickGui_EndEditOnEnter_m12622E58FF59DA84D6523AC12874DA9863199C9A (NamePickGui_t8C0368B20268692BC4311641FC79610CCD7FB56B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (Input.GetKey(KeyCode.Return) || Input.GetKey(KeyCode.KeypadEnter))
		bool L_0;
		L_0 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)13), NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)271), NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// this.StartChat();
		NamePickGui_StartChat_m93395F4741F31632667938D7733EB30C48E04750(__this, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.NamePickGui::StartChat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamePickGui_StartChat_m93395F4741F31632667938D7733EB30C48E04750 (NamePickGui_t8C0368B20268692BC4311641FC79610CCD7FB56B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88A4E835FC47194C325AC1B4075B94D15767248A);
		s_Il2CppMethodInitialized = true;
	}
	ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* V_0 = NULL;
	{
		// ChatGui chatNewComponent = FindObjectOfType<ChatGui>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* L_0;
		L_0 = Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30(Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30_RuntimeMethod_var);
		V_0 = L_0;
		// chatNewComponent.UserName = this.idInput.text.Trim();
		ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* L_1 = V_0;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_2 = __this->___idInput_6;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_3, NULL);
		NullCheck(L_1);
		ChatGui_set_UserName_m2DEE5CF82BC6DBB2FA568AF956102BE0E125D0A7_inline(L_1, L_4, NULL);
		// chatNewComponent.Connect();
		ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* L_5 = V_0;
		NullCheck(L_5);
		ChatGui_Connect_m073A7E59E9008C4D708663A6902A6C19882540E3(L_5, NULL);
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// PlayerPrefs.SetString(UserNamePlayerPref, chatNewComponent.UserName);
		ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1_inline(L_6, NULL);
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral88A4E835FC47194C325AC1B4075B94D15767248A, L_7, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.NamePickGui::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamePickGui__ctor_mFF3AFAF1D13B70F7612ADEC741FCC056B2774EB5 (NamePickGui_t8C0368B20268692BC4311641FC79610CCD7FB56B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Photon.Chat.UtilityScripts.EventSystemSpawner::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystemSpawner_OnEnable_mE862EC0D6C69AA07F7D83951631687391609E80B (EventSystemSpawner_t823C33A21E4332F5D407768DB424BBDB0D17C77D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F);
		s_Il2CppMethodInitialized = true;
	}
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* V_0 = NULL;
	bool V_1 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// EventSystem sceneEventSystem = FindObjectOfType<EventSystem>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4(Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4_RuntimeMethod_var);
		V_0 = L_0;
		// if (sceneEventSystem == null)
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_1 = V_0;
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// GameObject eventSystem = new GameObject("EventSystem");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_4, _stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F, NULL);
		V_2 = L_4;
		// eventSystem.AddComponent<EventSystem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_2;
		NullCheck(L_5);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_6;
		L_6 = GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8(L_5, GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8_RuntimeMethod_var);
		// eventSystem.AddComponent<StandaloneInputModule>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_2;
		NullCheck(L_7);
		StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* L_8;
		L_8 = GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D(L_7, GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D_RuntimeMethod_var);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.EventSystemSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystemSpawner__ctor_mF241B0B2DADE23009B467FDE4D04A33457D02822 (EventSystemSpawner_t823C33A21E4332F5D407768DB424BBDB0D17C77D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Photon.Chat.UtilityScripts.OnStartDelete::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStartDelete_Start_m9B7CA6E5BF48F098BD682241471AC10B5A7DE583 (OnStartDelete_tAFE941550E5B7D4F434D3BB2D00C0D93610BDC11* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.OnStartDelete::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStartDelete__ctor_m0680CFA8D0C53535AB1CAF48FB605524BF8BBA75 (OnStartDelete_tAFE941550E5B7D4F434D3BB2D00C0D93610BDC11* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_Awake_m9486D72B1C4AAF16C5E7A54D449DA6A9F7042A20 (TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _text = GetComponent<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0;
		L_0 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(__this, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->____text_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____text_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_OnEnable_mDF3ACAD5152C4158E63C0CB55434E0B8F58C64DB (TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10* __this, const RuntimeMethod* method) 
{
	{
		// _text.color = NormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____text_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___NormalColor_6;
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_OnDisable_m6030F868A53F2ACA849BCFF3194B856D0EEED602 (TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10* __this, const RuntimeMethod* method) 
{
	{
		// _text.color = NormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____text_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___NormalColor_6;
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_OnPointerEnter_m060ADDFAB4FE7E2ADDA013C785097C30E32D2940 (TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (Selectable == null || Selectable.IsInteractable()) {
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_0 = __this->___Selectable_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_2 = __this->___Selectable_5;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(24 /* System.Boolean UnityEngine.UI.Selectable::IsInteractable() */, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		// _text.color = HoverColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->____text_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___HoverColor_7;
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_OnPointerExit_mC89333A759DCAEF054B364A0CF05AAAF73A1E06C (TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (Selectable == null || Selectable.IsInteractable()) {
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_0 = __this->___Selectable_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_2 = __this->___Selectable_5;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(24 /* System.Boolean UnityEngine.UI.Selectable::IsInteractable() */, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		// _text.color = NormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->____text_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___NormalColor_6;
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition__ctor_m1AC221F8BF501F4B4912898B5D5A1EAD0D2B40E9 (TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10* __this, const RuntimeMethod* method) 
{
	{
		// public Color NormalColor= Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___NormalColor_6 = L_0;
		// public Color HoverColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		__this->___HoverColor_7 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnEnable_mEB5D1BAE23AB550072188EE81FBF5E0CB1FA003C (TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _text = GetComponent<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0;
		L_0 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(__this, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->____text_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____text_5), (void*)L_0);
		// OnValueChanged (toggle.isOn);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1 = __this->___toggle_4;
		NullCheck(L_1);
		bool L_2;
		L_2 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619(L_1, NULL);
		TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA(__this, L_2, NULL);
		// toggle.onValueChanged.AddListener(OnValueChanged);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_3 = __this->___toggle_4;
		NullCheck(L_3);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_4 = L_3->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_5 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_5, __this, (intptr_t)((void*)TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_4, L_5, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnDisable_m017F8825457A0A4400681B78CE1D1DF62999662D (TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// toggle.onValueChanged.RemoveListener(OnValueChanged);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___toggle_4;
		NullCheck(L_0);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_1 = L_0->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_2 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_2, __this, (intptr_t)((void*)TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130(L_1, L_2, UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnValueChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA (TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A* __this, bool ___0_isOn, const RuntimeMethod* method) 
{
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B5_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B4_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B8_1 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B7_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B6_0 = NULL;
	{
		// _text.color = isOn? (isHover?HoverOnColor:HoverOnColor) : (isHover?NormalOffColor:NormalOffColor) ;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____text_5;
		bool L_1 = ___0_isOn;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B5_0 = L_0;
			goto IL_0022;
		}
	}
	{
		bool L_2 = __this->___isHover_10;
		G_B2_0 = G_B1_0;
		if (L_2)
		{
			G_B3_0 = G_B1_0;
			goto IL_001a;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___NormalOffColor_7;
		G_B4_0 = L_3;
		G_B4_1 = G_B2_0;
		goto IL_0020;
	}

IL_001a:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___NormalOffColor_7;
		G_B4_0 = L_4;
		G_B4_1 = G_B3_0;
	}

IL_0020:
	{
		G_B8_0 = G_B4_0;
		G_B8_1 = G_B4_1;
		goto IL_0038;
	}

IL_0022:
	{
		bool L_5 = __this->___isHover_10;
		G_B6_0 = G_B5_0;
		if (L_5)
		{
			G_B7_0 = G_B5_0;
			goto IL_0032;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___HoverOnColor_8;
		G_B8_0 = L_6;
		G_B8_1 = G_B6_0;
		goto IL_0038;
	}

IL_0032:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = __this->___HoverOnColor_8;
		G_B8_0 = L_7;
		G_B8_1 = G_B7_0;
	}

IL_0038:
	{
		NullCheck(G_B8_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B8_1, G_B8_0);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnPointerEnter_m94378570919CDF3B8C15622F21D0B0B7FD7956B1 (TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// isHover = true;
		__this->___isHover_10 = (bool)1;
		// _text.color = toggle.isOn?HoverOnColor:HoverOffColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____text_5;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1 = __this->___toggle_4;
		NullCheck(L_1);
		bool L_2;
		L_2 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619(L_1, NULL);
		G_B1_0 = L_0;
		if (L_2)
		{
			G_B2_0 = L_0;
			goto IL_0023;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___HoverOffColor_9;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0029;
	}

IL_0023:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___HoverOnColor_8;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0029:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnPointerExit_m4BB2859E42DE14373D78A2217D72EB17B3FB9D28 (TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// isHover = false;
		__this->___isHover_10 = (bool)0;
		// _text.color = toggle.isOn?NormalOnColor:NormalOffColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____text_5;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1 = __this->___toggle_4;
		NullCheck(L_1);
		bool L_2;
		L_2 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619(L_1, NULL);
		G_B1_0 = L_0;
		if (L_2)
		{
			G_B2_0 = L_0;
			goto IL_0023;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___NormalOffColor_7;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0029;
	}

IL_0023:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___NormalOnColor_6;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0029:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition__ctor_m31BCC4091B72C664D8E1B13777EF1D56DFAC5CDA (TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A* __this, const RuntimeMethod* method) 
{
	{
		// public Color NormalOnColor= Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___NormalOnColor_6 = L_0;
		// public Color NormalOffColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		__this->___NormalOffColor_7 = L_1;
		// public Color HoverOnColor= Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		__this->___HoverOnColor_8 = L_2;
		// public Color HoverOffColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		__this->___HoverOffColor_9 = L_3;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FlutterUnityIntegration.NativeAPI::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnSceneLoaded_m200A791C356A252E1D5F2BB13BC2CED455A02259 (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, int32_t ___1_mode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40C776DB92DC51DDEF843FFC1AE1917B3769978A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50C349861105941F8CC6A38A2B8CC315ED6CD653);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		// AndroidJavaClass jc = new AndroidJavaClass("com.xraph.plugin.flutter_unity_widget.UnityPlayerUtils");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral40C776DB92DC51DDEF843FFC1AE1917B3769978A, NULL);
		V_0 = L_0;
		// jc.CallStatic("onUnitySceneLoaded", scene.name, scene.buildIndex, scene.isLoaded, scene.IsValid());
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4;
		L_4 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&___0_scene), NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		int32_t L_6;
		L_6 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&___0_scene), NULL);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		bool L_10;
		L_10 = Scene_get_isLoaded_m5BC54CEB27330040A0BC69E66E94EE97E87298BC((&___0_scene), NULL);
		bool L_11 = L_10;
		RuntimeObject* L_12 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		bool L_14;
		L_14 = Scene_IsValid_m0D5200731D3E26ECBBB55803F9242965A14A4599((&___0_scene), NULL);
		bool L_15 = L_14;
		RuntimeObject* L_16 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		NullCheck(L_1);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_1, _stringLiteral50C349861105941F8CC6A38A2B8CC315ED6CD653, L_13, NULL);
		goto IL_006a;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0059;
		}
		throw e;
	}

CATCH_0059:
	{// begin catch(System.Exception)
		Exception_t* L_17 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		// catch (Exception e)
		V_1 = L_17;
		// Debug.Log(e.Message);
		Exception_t* L_18 = V_1;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_18);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_19, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_006a;
	}// end catch (depth: 1)

IL_006a:
	{
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.NativeAPI::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_SendMessageToFlutter_m38D270B3AAAF47AF673EF84063BB262D1AE3618C (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40C776DB92DC51DDEF843FFC1AE1917B3769978A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD518666B4F52417752311AE996CEA3A91ECF532);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		// AndroidJavaClass jc = new AndroidJavaClass("com.xraph.plugin.flutter_unity_widget.UnityPlayerUtils");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral40C776DB92DC51DDEF843FFC1AE1917B3769978A, NULL);
		V_0 = L_0;
		// jc.CallStatic("onUnityMessage", message);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4 = ___0_message;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_1);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_1, _stringLiteralFD518666B4F52417752311AE996CEA3A91ECF532, L_3, NULL);
		goto IL_0037;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0026;
		}
		throw e;
	}

CATCH_0026:
	{// begin catch(System.Exception)
		Exception_t* L_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		// catch (Exception e)
		V_1 = L_5;
		// Debug.Log(e.Message);
		Exception_t* L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_6);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0037;
	}// end catch (depth: 1)

IL_0037:
	{
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.NativeAPI::ShowHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_ShowHostMainWindow_m38DDCC74D34CFE1F0B7E8528690C0E384002E9ED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F629B25BE4F48980C1EDD2471AE2A239A980D35);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7872402A59E9175DECE8237B6F756EA72FC3091E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		// var jc = new AndroidJavaClass("com.xraph.plugin.flutter_unity_widget.OverrideUnityActivity");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral7872402A59E9175DECE8237B6F756EA72FC3091E, NULL);
		V_0 = L_0;
		// var overrideActivity = jc.GetStatic<AndroidJavaObject>("instance");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = V_0;
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_1, _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_1 = L_2;
		// overrideActivity.Call("showMainActivity");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_3);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_3, _stringLiteral5F629B25BE4F48980C1EDD2471AE2A239A980D35, L_4, NULL);
		goto IL_003e;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002d;
		}
		throw e;
	}

CATCH_002d:
	{// begin catch(System.Exception)
		Exception_t* L_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		// catch (Exception e)
		V_2 = L_5;
		// Debug.Log(e.Message);
		Exception_t* L_6 = V_2;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_6);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_003e;
	}// end catch (depth: 1)

IL_003e:
	{
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.NativeAPI::UnloadMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_UnloadMainWindow_m5B742B5232A7D45F54B723F025915ED46032556B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7872402A59E9175DECE8237B6F756EA72FC3091E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8833A6A8DBC0A8BD7545AE8C434405E77ABF1C2);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		// AndroidJavaClass jc = new AndroidJavaClass("com.xraph.plugin.flutter_unity_widget.OverrideUnityActivity");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral7872402A59E9175DECE8237B6F756EA72FC3091E, NULL);
		V_0 = L_0;
		// AndroidJavaObject overrideActivity = jc.GetStatic<AndroidJavaObject>("instance");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = V_0;
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_1, _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_1 = L_2;
		// overrideActivity.Call("unloadPlayer");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_3);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_3, _stringLiteralB8833A6A8DBC0A8BD7545AE8C434405E77ABF1C2, L_4, NULL);
		goto IL_003e;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002d;
		}
		throw e;
	}

CATCH_002d:
	{// begin catch(System.Exception)
		Exception_t* L_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		// catch (Exception e)
		V_2 = L_5;
		// Debug.Log(e.Message);
		Exception_t* L_6 = V_2;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_6);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_003e;
	}// end catch (depth: 1)

IL_003e:
	{
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.NativeAPI::QuitUnityWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_QuitUnityWindow_m877ACBFCA5B17C944C59FF57E973590FFB555BB5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7872402A59E9175DECE8237B6F756EA72FC3091E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB77494B17C8DA599A6494EFFB7F17D9519775753);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		// AndroidJavaClass jc = new AndroidJavaClass("com.xraph.plugin.flutter_unity_widget.OverrideUnityActivity");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral7872402A59E9175DECE8237B6F756EA72FC3091E, NULL);
		V_0 = L_0;
		// AndroidJavaObject overrideActivity = jc.GetStatic<AndroidJavaObject>("instance");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = V_0;
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_1, _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_1 = L_2;
		// overrideActivity.Call("quitPlayer");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_3);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_3, _stringLiteralB77494B17C8DA599A6494EFFB7F17D9519775753, L_4, NULL);
		goto IL_003e;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002d;
		}
		throw e;
	}

CATCH_002d:
	{// begin catch(System.Exception)
		Exception_t* L_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		// catch (Exception e)
		V_2 = L_5;
		// Debug.Log(e.Message);
		Exception_t* L_6 = V_2;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_6);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_003e;
	}// end catch (depth: 1)

IL_003e:
	{
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.NativeAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI__ctor_mA061363778EC083B262B2B1F2350ED7B9AE97AD9 (NativeAPI_t95E431F7951EC1718025A4EB8575D6CDCACB64C1* __this, const RuntimeMethod* method) 
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
// FlutterUnityIntegration.MessageHandler FlutterUnityIntegration.MessageHandler::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* MessageHandler_Deserialize_m995171F279A54669F5A0EFA4445D25F40757CE55 (String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCCC05EA9B86407E7E62E482BFF27A5F1E89A9AD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* V_0 = NULL;
	MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* V_1 = NULL;
	MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* V_2 = NULL;
	{
		// var m = JObject.Parse(message);
		String_t* L_0 = ___0_message;
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_1;
		L_1 = JObject_Parse_mBC884661DD2708BA92BCE45E8C104924542A2D43(L_0, NULL);
		V_0 = L_1;
		// var handler = new MessageHandler(
		//     m.GetValue("id").Value<int>(),
		//     m.GetValue("seq").Value<string>(),
		//     m.GetValue("name").Value<string>(),
		//     m.GetValue("data")
		// );
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_2 = V_0;
		NullCheck(L_2);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_3;
		L_3 = JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2(L_2, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, NULL);
		int32_t L_4;
		L_4 = Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCCC05EA9B86407E7E62E482BFF27A5F1E89A9AD8(L_3, Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCCC05EA9B86407E7E62E482BFF27A5F1E89A9AD8_RuntimeMethod_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_5 = V_0;
		NullCheck(L_5);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_6;
		L_6 = JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2(L_5, _stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469, NULL);
		String_t* L_7;
		L_7 = Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B(L_6, Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B_RuntimeMethod_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_8 = V_0;
		NullCheck(L_8);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_9;
		L_9 = JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2(L_8, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
		String_t* L_10;
		L_10 = Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B(L_9, Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B_RuntimeMethod_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_11 = V_0;
		NullCheck(L_11);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_12;
		L_12 = JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2(L_11, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469, NULL);
		MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* L_13 = (MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187*)il2cpp_codegen_object_new(MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		MessageHandler__ctor_m1B476AF6138B8567F1AC1613B57F26882755D0AE(L_13, L_4, L_7, L_10, L_12, NULL);
		V_1 = L_13;
		// return handler;
		MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* L_14 = V_1;
		V_2 = L_14;
		goto IL_004d;
	}

IL_004d:
	{
		// }
		MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* L_15 = V_2;
		return L_15;
	}
}
// System.Void FlutterUnityIntegration.MessageHandler::.ctor(System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler__ctor_m1B476AF6138B8567F1AC1613B57F26882755D0AE (MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* __this, int32_t ___0_id, String_t* ___1_seq, String_t* ___2_name, JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___3_data, const RuntimeMethod* method) 
{
	{
		// public MessageHandler(int id, string seq, string name, JToken data)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.id = id;
		int32_t L_0 = ___0_id;
		__this->___id_0 = L_0;
		// this.seq = seq;
		String_t* L_1 = ___1_seq;
		__this->___seq_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___seq_1), (void*)L_1);
		// this.name = name;
		String_t* L_2 = ___2_name;
		__this->___name_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_2), (void*)L_2);
		// this.data = data;
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_3 = ___3_data;
		__this->___data_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_3), (void*)L_3);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.MessageHandler::send(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler_send_m46F4AB9D42028AEA5D5F11F6BB10B4490385E963 (MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* __this, RuntimeObject* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4__ctor_mA9CA12BE8F40DB9F200816875B785E4FC23A2200_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* V_0 = NULL;
	{
		// var o = JObject.FromObject(new
		// {
		//     id = id,
		//     seq = "end",
		//     name = name,
		//     data = data
		// });
		int32_t L_0 = __this->___id_0;
		String_t* L_1 = __this->___name_2;
		RuntimeObject* L_2 = ___0_data;
		U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454* L_3 = (U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454*)il2cpp_codegen_object_new(U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CU3Ef__AnonymousType0_4__ctor_mA9CA12BE8F40DB9F200816875B785E4FC23A2200(L_3, L_0, _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1, L_1, L_2, U3CU3Ef__AnonymousType0_4__ctor_mA9CA12BE8F40DB9F200816875B785E4FC23A2200_RuntimeMethod_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_4;
		L_4 = JObject_FromObject_m19DD8C1DB59132420FA3DE3E6EE27BDF2A4292AD(L_3, NULL);
		V_0 = L_4;
		// UnityMessageManager.Instance.SendMessageToFlutter(UnityMessageManager.MessagePrefix + o.ToString());
		il2cpp_codegen_runtime_class_init_inline(SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* L_5;
		L_5 = SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E(SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E_RuntimeMethod_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, L_7, NULL);
		NullCheck(L_5);
		UnityMessageManager_SendMessageToFlutter_m01236AF27F51C863E80F5220F02BA45E9ED4BAB9(L_5, L_8, NULL);
		// }
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
// System.Void FlutterUnityIntegration.UnityMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessage__ctor_mDEC55E5CFC43BE8B679F2B49B6245BD6DD3DE9FC (UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* __this, const RuntimeMethod* method) 
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
// System.Int32 FlutterUnityIntegration.UnityMessageManager::generateId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityMessageManager_generateId_mFFF63A1BDD06CED89C71F2DDCCD9C7AEFE73724B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// ID = ID + 1;
		int32_t L_0 = ((UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_il2cpp_TypeInfo_var))->___ID_6;
		((UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_il2cpp_TypeInfo_var))->___ID_6 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// return ID;
		int32_t L_1 = ((UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56_il2cpp_TypeInfo_var))->___ID_6;
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::add_OnMessage(FlutterUnityIntegration.UnityMessageManager/MessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_add_OnMessage_m72A64B53769F3968F62E977712541F3EB6700CBD (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* V_0 = NULL;
	MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* V_1 = NULL;
	MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* V_2 = NULL;
	{
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_0 = __this->___OnMessage_7;
		V_0 = L_0;
	}

IL_0007:
	{
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_1 = V_0;
		V_1 = L_1;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_2 = V_1;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9*)CastclassSealed((RuntimeObject*)L_4, MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9_il2cpp_TypeInfo_var));
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9** L_5 = (MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9**)(&__this->___OnMessage_7);
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_6 = V_2;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_7 = V_1;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9*>(L_5, L_6, L_7);
		V_0 = L_8;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_9 = V_0;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9*)L_9) == ((RuntimeObject*)(MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::remove_OnMessage(FlutterUnityIntegration.UnityMessageManager/MessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_remove_OnMessage_m7B30D079CD871DE3B1213E9E33179EEF595E48FD (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* V_0 = NULL;
	MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* V_1 = NULL;
	MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* V_2 = NULL;
	{
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_0 = __this->___OnMessage_7;
		V_0 = L_0;
	}

IL_0007:
	{
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_1 = V_0;
		V_1 = L_1;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_2 = V_1;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9*)CastclassSealed((RuntimeObject*)L_4, MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9_il2cpp_TypeInfo_var));
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9** L_5 = (MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9**)(&__this->___OnMessage_7);
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_6 = V_2;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_7 = V_1;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9*>(L_5, L_6, L_7);
		V_0 = L_8;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_9 = V_0;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9*)L_9) == ((RuntimeObject*)(MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::add_OnFlutterMessage(FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_add_OnFlutterMessage_mA4F4A939F058D2172A994AA83878FC49F4A60D28 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* V_0 = NULL;
	MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* V_1 = NULL;
	MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* V_2 = NULL;
	{
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_0 = __this->___OnFlutterMessage_8;
		V_0 = L_0;
	}

IL_0007:
	{
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_1 = V_0;
		V_1 = L_1;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_2 = V_1;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7*)CastclassSealed((RuntimeObject*)L_4, MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7_il2cpp_TypeInfo_var));
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7** L_5 = (MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7**)(&__this->___OnFlutterMessage_8);
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_6 = V_2;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_7 = V_1;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7*>(L_5, L_6, L_7);
		V_0 = L_8;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_9 = V_0;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7*)L_9) == ((RuntimeObject*)(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::remove_OnFlutterMessage(FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_remove_OnFlutterMessage_mE9773A6B3A6DEF366B0FA9668DAA27532C005925 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* V_0 = NULL;
	MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* V_1 = NULL;
	MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* V_2 = NULL;
	{
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_0 = __this->___OnFlutterMessage_8;
		V_0 = L_0;
	}

IL_0007:
	{
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_1 = V_0;
		V_1 = L_1;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_2 = V_1;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7*)CastclassSealed((RuntimeObject*)L_4, MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7_il2cpp_TypeInfo_var));
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7** L_5 = (MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7**)(&__this->___OnFlutterMessage_8);
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_6 = V_2;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_7 = V_1;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7*>(L_5, L_6, L_7);
		V_0 = L_8;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_9 = V_0;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7*)L_9) == ((RuntimeObject*)(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_Start_m513A44342D5A5336DB3BB0AD0501525BC0A4F63D (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_OnSceneLoaded_m9C97092396F4D86D596E39FEB791D14B7A98A726_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded += OnSceneLoaded;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_0 = (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*)il2cpp_codegen_object_new(UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041(L_0, __this, (intptr_t)((void*)UnityMessageManager_OnSceneLoaded_m9C97092396F4D86D596E39FEB791D14B7A98A726_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_add_sceneLoaded_m14BEBCC5E4A8DD2C806A48D79A4773315CB434C6(L_0, NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_OnSceneLoaded_m9C97092396F4D86D596E39FEB791D14B7A98A726 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, int32_t ___1_mode, const RuntimeMethod* method) 
{
	{
		// NativeAPI.OnSceneLoaded(scene, mode);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0 = ___0_scene;
		int32_t L_1 = ___1_mode;
		NativeAPI_OnSceneLoaded_m200A791C356A252E1D5F2BB13BC2CED455A02259(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::ShowHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_ShowHostMainWindow_mDD2898A6D41376DEB7033193BD31AA946EEEF460 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, const RuntimeMethod* method) 
{
	{
		// NativeAPI.ShowHostMainWindow();
		NativeAPI_ShowHostMainWindow_m38DDCC74D34CFE1F0B7E8528690C0E384002E9ED(NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::UnloadMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_UnloadMainWindow_m1EC3A84E3AD1C76D7915A5DD44597E60CB4CF1FD (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, const RuntimeMethod* method) 
{
	{
		// NativeAPI.UnloadMainWindow();
		NativeAPI_UnloadMainWindow_m5B742B5232A7D45F54B723F025915ED46032556B(NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::QuitUnityWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_QuitUnityWindow_m15E0FC94CB42CDA85229509AD473E2BE0E27762F (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, const RuntimeMethod* method) 
{
	{
		// NativeAPI.QuitUnityWindow();
		NativeAPI_QuitUnityWindow_m877ACBFCA5B17C944C59FF57E973590FFB555BB5(NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToFlutter_m01236AF27F51C863E80F5220F02BA45E9ED4BAB9 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		// NativeAPI.SendMessageToFlutter(message);
		String_t* L_0 = ___0_message;
		NativeAPI_SendMessageToFlutter_m38D270B3AAAF47AF673EF84063BB262D1AE3618C(L_0, NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::SendMessageToFlutter(FlutterUnityIntegration.UnityMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToFlutter_m5258B3CDED96288FA463D52AD7DF4D392674A5E0 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m8CEE5FEF823BADBAFEC756B6DF4ED9C1E574EBDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4__ctor_m29CA8638117DD35A3ECF831C1C575ECD9A1CFF99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* V_1 = NULL;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	{
		// var id = generateId();
		int32_t L_0;
		L_0 = UnityMessageManager_generateId_mFFF63A1BDD06CED89C71F2DDCCD9C7AEFE73724B(NULL);
		V_0 = L_0;
		// if (message.callBack != null)
		UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* L_1 = ___0_message;
		NullCheck(L_1);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = L_1->___callBack_2;
		V_2 = (bool)((!(((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// waitCallbackMessageMap.Add(id, message);
		Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9* L_4 = __this->___waitCallbackMessageMap_9;
		int32_t L_5 = V_0;
		UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* L_6 = ___0_message;
		NullCheck(L_4);
		Dictionary_2_Add_m8CEE5FEF823BADBAFEC756B6DF4ED9C1E574EBDC(L_4, L_5, L_6, Dictionary_2_Add_m8CEE5FEF823BADBAFEC756B6DF4ED9C1E574EBDC_RuntimeMethod_var);
	}

IL_0024:
	{
		// var o = JObject.FromObject(new
		// {
		//     id = id,
		//     seq = message.callBack != null ? "start" : "",
		//     name = message.name,
		//     data = message.data
		// });
		int32_t L_7 = V_0;
		UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* L_8 = ___0_message;
		NullCheck(L_8);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_9 = L_8->___callBack_2;
		G_B3_0 = L_7;
		if (L_9)
		{
			G_B4_0 = L_7;
			goto IL_0034;
		}
	}
	{
		G_B5_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B5_1 = G_B3_0;
		goto IL_0039;
	}

IL_0034:
	{
		G_B5_0 = _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
		G_B5_1 = G_B4_0;
	}

IL_0039:
	{
		UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* L_10 = ___0_message;
		NullCheck(L_10);
		String_t* L_11 = L_10->___name_0;
		UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* L_12 = ___0_message;
		NullCheck(L_12);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_13 = L_12->___data_1;
		U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39* L_14 = (U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39*)il2cpp_codegen_object_new(U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		U3CU3Ef__AnonymousType0_4__ctor_m29CA8638117DD35A3ECF831C1C575ECD9A1CFF99(L_14, G_B5_1, G_B5_0, L_11, L_13, U3CU3Ef__AnonymousType0_4__ctor_m29CA8638117DD35A3ECF831C1C575ECD9A1CFF99_RuntimeMethod_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_15;
		L_15 = JObject_FromObject_m19DD8C1DB59132420FA3DE3E6EE27BDF2A4292AD(L_14, NULL);
		V_1 = L_15;
		// UnityMessageManager.Instance.SendMessageToFlutter(MessagePrefix + o.ToString());
		il2cpp_codegen_runtime_class_init_inline(SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* L_16;
		L_16 = SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E(SingletonMonoBehaviour_1_get_Instance_mA19DFD2BB18F1E20748ABE046DCC88A3BBD81D4E_RuntimeMethod_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_17 = V_1;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		String_t* L_19;
		L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, L_18, NULL);
		NullCheck(L_16);
		UnityMessageManager_SendMessageToFlutter_m01236AF27F51C863E80F5220F02BA45E9ED4BAB9(L_16, L_19, NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::onMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_onMessage_mA23F949C1E38D874363AF6EFC0B9D7F7ABC9BD19 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* G_B2_0 = NULL;
	MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* G_B1_0 = NULL;
	{
		// OnMessage?.Invoke(message);
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_0 = __this->___OnMessage_7;
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0014;
	}

IL_000d:
	{
		String_t* L_2 = ___0_message;
		NullCheck(G_B2_0);
		MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_inline(G_B2_0, L_2, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::onFlutterMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_onFlutterMessage_m5075BDBB0B6A49C5FB47DFCAFD55D1267BF5E3B5 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mF8E608EDD8A59D5C9E831BDA1E54D923D2872EFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m3B8850785436E6EB25F3851408FD229CE9812076_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_getData_TisRuntimeObject_m675A7C19F2448C70CD3FC2E102CBAE41A2DC9CCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* V_3 = NULL;
	bool V_4 = false;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B8_0 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B7_0 = NULL;
	MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* G_B12_0 = NULL;
	MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* G_B11_0 = NULL;
	{
		// if (message.StartsWith(MessagePrefix))
		String_t* L_0 = ___0_message;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_0, _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// message = message.Replace(MessagePrefix, "");
		String_t* L_3 = ___0_message;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_3, _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		___0_message = L_4;
		goto IL_0029;
	}

IL_0026:
	{
		// return;
		goto IL_00a2;
	}

IL_0029:
	{
		// var handler = MessageHandler.Deserialize(message);
		String_t* L_5 = ___0_message;
		MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* L_6;
		L_6 = MessageHandler_Deserialize_m995171F279A54669F5A0EFA4445D25F40757CE55(L_5, NULL);
		V_0 = L_6;
		// if ("end".Equals(handler.seq))
		MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = L_7->___seq_1;
		NullCheck(_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		bool L_9;
		L_9 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1, L_8, NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_008f;
		}
	}
	{
		// if (!waitCallbackMessageMap.TryGetValue(handler.id, out var m)) return;
		Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9* L_11 = __this->___waitCallbackMessageMap_9;
		MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___id_0;
		NullCheck(L_11);
		bool L_14;
		L_14 = Dictionary_2_TryGetValue_m3B8850785436E6EB25F3851408FD229CE9812076(L_11, L_13, (&V_3), Dictionary_2_TryGetValue_m3B8850785436E6EB25F3851408FD229CE9812076_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0063;
		}
	}
	{
		// if (!waitCallbackMessageMap.TryGetValue(handler.id, out var m)) return;
		goto IL_00a2;
	}

IL_0063:
	{
		// waitCallbackMessageMap.Remove(handler.id);
		Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9* L_16 = __this->___waitCallbackMessageMap_9;
		MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = L_17->___id_0;
		NullCheck(L_16);
		bool L_19;
		L_19 = Dictionary_2_Remove_mF8E608EDD8A59D5C9E831BDA1E54D923D2872EFB(L_16, L_18, Dictionary_2_Remove_mF8E608EDD8A59D5C9E831BDA1E54D923D2872EFB_RuntimeMethod_var);
		// m.callBack?.Invoke(handler.getData<object>()); // todo
		UnityMessage_t5BC19D4DBDE02721453FBB31B4360D1DCF3871A0* L_20 = V_3;
		NullCheck(L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_21 = L_20->___callBack_2;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = L_21;
		G_B7_0 = L_22;
		if (L_22)
		{
			G_B8_0 = L_22;
			goto IL_0081;
		}
	}
	{
		goto IL_008d;
	}

IL_0081:
	{
		MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* L_23 = V_0;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = MessageHandler_getData_TisRuntimeObject_m675A7C19F2448C70CD3FC2E102CBAE41A2DC9CCC(L_23, MessageHandler_getData_TisRuntimeObject_m675A7C19F2448C70CD3FC2E102CBAE41A2DC9CCC_RuntimeMethod_var);
		NullCheck(G_B8_0);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(G_B8_0, L_24, NULL);
	}

IL_008d:
	{
		// return;
		goto IL_00a2;
	}

IL_008f:
	{
		// OnFlutterMessage?.Invoke(handler);
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_25 = __this->___OnFlutterMessage_8;
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* L_26 = L_25;
		G_B11_0 = L_26;
		if (L_26)
		{
			G_B12_0 = L_26;
			goto IL_009b;
		}
	}
	{
		goto IL_00a2;
	}

IL_009b:
	{
		MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* L_27 = V_0;
		NullCheck(G_B12_0);
		MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_inline(G_B12_0, L_27, NULL);
	}

IL_00a2:
	{
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager__ctor_m33386834F5F300E49185600FC190C57D3E9C0233 (UnityMessageManager_t3FB57FDD86818C144C13B2F1CB459C4566BE2E56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB83DEA09CE12176ACC9D229EDAA617E7B0B62FB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1__ctor_mB959CC5C4F5F613426011598A0FFADE2812F4B07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<int, UnityMessage> waitCallbackMessageMap = new Dictionary<int, UnityMessage>();
		Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9* L_0 = (Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9*)il2cpp_codegen_object_new(Dictionary_2_t3C5D2576F84B03B761070BC2E27573CE4E3569F9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mB83DEA09CE12176ACC9D229EDAA617E7B0B62FB9(L_0, Dictionary_2__ctor_mB83DEA09CE12176ACC9D229EDAA617E7B0B62FB9_RuntimeMethod_var);
		__this->___waitCallbackMessageMap_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waitCallbackMessageMap_9), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(SingletonMonoBehaviour_1_tBFAF7683DA4F979C6C7C7C3DFE18973BAB4231CF_il2cpp_TypeInfo_var);
		SingletonMonoBehaviour_1__ctor_mB959CC5C4F5F613426011598A0FFADE2812F4B07(__this, SingletonMonoBehaviour_1__ctor_mB959CC5C4F5F613426011598A0FFADE2812F4B07_RuntimeMethod_var);
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
void MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_Multicast(MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* currentDelegate = reinterpret_cast<MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_OpenInst(MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_OpenStatic(MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_OpenStaticInvoker(MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_message);
}
void MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_ClosedStaticInvoker(MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9 (MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_message' to native representation
	char* ____0_message_marshaled = NULL;
	____0_message_marshaled = il2cpp_codegen_marshal_string(___0_message);

	// Native function invocation
	il2cppPInvokeFunc(____0_message_marshaled);

	// Marshaling cleanup of parameter '___0_message' native representation
	il2cpp_codegen_marshal_free(____0_message_marshaled);
	____0_message_marshaled = NULL;

}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate__ctor_m1309BD3DE28E87C0CC24EB097613F916E8E4A1DB (MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_Multicast;
}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6 (MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult FlutterUnityIntegration.UnityMessageManager/MessageDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageDelegate_BeginInvoke_mBBFD55486390BFD20AD687A88C02D1C554C6A3E3 (MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___0_message, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_message;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate_EndInvoke_m1C05B416E71A364B4560BA5085ECBBAF6BF87E97 (MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_Multicast(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___0_handler, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* currentDelegate = reinterpret_cast<MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_handler, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenInst(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___0_handler, const RuntimeMethod* method)
{
	NullCheck(___0_handler);
	typedef void (*FunctionPointerType) (MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_handler, method);
}
void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenStatic(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___0_handler, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_handler, method);
}
void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenStaticInvoker(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___0_handler, const RuntimeMethod* method)
{
	InvokerActionInvoker1< MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_handler);
}
void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_ClosedStaticInvoker(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___0_handler, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_handler);
}
void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenVirtual(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___0_handler, const RuntimeMethod* method)
{
	NullCheck(___0_handler);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_handler);
}
void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenInterface(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___0_handler, const RuntimeMethod* method)
{
	NullCheck(___0_handler);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_handler);
}
void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenGenericVirtual(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___0_handler, const RuntimeMethod* method)
{
	NullCheck(___0_handler);
	GenericVirtualActionInvoker0::Invoke(method, ___0_handler);
}
void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenGenericInterface(MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___0_handler, const RuntimeMethod* method)
{
	NullCheck(___0_handler);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_handler);
}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate__ctor_m287CBD25D77011FC5A52D1090F6CC31353AB6364 (MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_Multicast;
}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate::Invoke(FlutterUnityIntegration.MessageHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B (MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___0_handler, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_handler, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate::BeginInvoke(FlutterUnityIntegration.MessageHandler,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageHandlerDelegate_BeginInvoke_m0CC5C5B29E11DD03F1726B49E4B1E516479AC58D (MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___0_handler, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_handler;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate_EndInvoke_mAD2746E001DB9A3D18A1D806610542321FE0CF16 (MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DeviceInfo_get_Name_m2559D5ABC53E49FCA44E0563489FCE284417AF53_inline (DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_3;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hashtable_tD626399B3ADFD501225241D7366103F35472542A* Player_get_CustomProperties_m398B81FB1DEE02243650B8CB5FBF5C7F1B8928D6_inline (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* __this, const RuntimeMethod* method) 
{
	{
		// public Hashtable CustomProperties { get; set; }
		Hashtable_tD626399B3ADFD501225241D7366103F35472542A* L_0 = __this->___U3CCustomPropertiesU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* LoadBalancingClient_get_CurrentRoom_mADB06D45AD1F8289D93F08F322C9FDB694EAC291_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// public Room CurrentRoom { get; set; }
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_0 = __this->___U3CCurrentRoomU3Ek__BackingField_35;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* Speaker_get_RemoteVoice_m312D32186916EAD30FAF99BCDCEE4514767C9F5D_inline (Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* __this, const RuntimeMethod* method) 
{
	{
		// public RemoteVoiceLink RemoteVoice { get; private set; }
		RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* L_0 = __this->___U3CRemoteVoiceU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectionHandler_set_Client_m3ABCA8BEB50CC58254153280CE8F60154D42E29B_inline (ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* __this, LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___0_value, const RuntimeMethod* method) 
{
	{
		// public LoadBalancingClient Client { get; set; }
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = ___0_value;
		__this->___U3CClientU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Region_get_Code_m25CDC61EBD0A1EDEA277235D87D55869A18B9122_inline (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, const RuntimeMethod* method) 
{
	{
		// public string Code { get; private set; }
		String_t* L_0 = __this->___U3CCodeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1_inline (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	{
		// public string UserName { get; set; }
		String_t* L_0 = __this->___U3CUserNameU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatGui_set_UserName_m2DEE5CF82BC6DBB2FA568AF956102BE0E125D0A7_inline (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string UserName { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CUserNameU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserNameU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_UseBackgroundWorkerForSending_m6B0CF62C2EBF74CB62FFB1557DC30969292B7596_inline (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool UseBackgroundWorkerForSending { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_26 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_AuthValues_mAAD43D4212103C80D1377FA04B33815397E28937_inline (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* ___0_value, const RuntimeMethod* method) 
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* L_0 = ___0_value;
		__this->___U3CAuthValuesU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthValuesU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* ChatClient_get_AuthValues_mC9F4405E66924D1BA21DEDE10848199C24915476_inline (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, const RuntimeMethod* method) 
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* L_0 = __this->___U3CAuthValuesU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_UserId_m61CDE1031F42330B0EDC0EC489A75E46E1DB6B79_inline (AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* __this, const RuntimeMethod* method) 
{
	{
		// public string UserId { get; set; }
		String_t* L_0 = __this->___U3CUserIdU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageDelegate_Invoke_m42A129A125C34AB085FEBE1CC9B5984ACC1BB7C6_inline (MessageDelegate_tDF550588A628E583D53EB8B7B4D75F3F966F9BC9* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageHandlerDelegate_Invoke_mD1EC9E1841D5014C40A26D4C4BA076482FFC8A4B_inline (MessageHandlerDelegate_tD699F4A46730E1E36FD38389F7A09EB8B3F2A2B7* __this, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* ___0_handler, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_handler, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2321E1B53E110705468505FCDC00444CCB8ABA04_gshared_inline (List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4* __this, MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B ___0_item, const RuntimeMethod* method) 
{
	MicRefU5BU5D_tB38D0F9746F40D7A1177291C8B4E0873C4ED8E76* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		MicRefU5BU5D_tB38D0F9746F40D7A1177291C8B4E0873C4ED8E76* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		MicRefU5BU5D_tB38D0F9746F40D7A1177291C8B4E0873C4ED8E76* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		MicRefU5BU5D_tB38D0F9746F40D7A1177291C8B4E0873C4ED8E76* L_6 = V_0;
		int32_t L_7 = V_1;
		MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B)L_8);
		return;
	}

IL_0034:
	{
		MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B L_9 = ___0_item;
		((  void (*) (List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4*, MicRef_t30D8C31BC1324CA8B6D6849DE81D68EEC175983B, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m36061DDA7BCE9122195582ED4AA9B40303BDB896_gshared_inline (List_1_t30B96AB9462EE06DCCF9FCDEFDBF5CFC4EC118C4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m26287DBB36429B2E2FBCB3F96F439248F8CAA8BB_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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

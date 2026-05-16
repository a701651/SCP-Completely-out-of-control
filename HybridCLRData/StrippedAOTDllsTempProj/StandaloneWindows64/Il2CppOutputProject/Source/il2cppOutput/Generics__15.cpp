#include "pch-cpp.hpp"





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
template <typename T1>
struct VirtualActionInvoker1Invoker;
template <typename T1>
struct VirtualActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker;
template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker<T1, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[2] = { &p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
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
template <typename R, typename T1>
struct VirtualFuncInvoker1Invoker;
template <typename R, typename T1>
struct VirtualFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { &p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct ConstrainedActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct ConstrainedActionInvoker5<T1, T2*, T3*, T4*, T5*>
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1 p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		void* params[5] = { &p1, p2, p3, p4, p5 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, params[4]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct ConstrainedActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct ConstrainedActionInvoker6<T1, T2*, T3*, T4*, T5*, T6*>
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1 p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		void* params[6] = { &p1, p2, p3, p4, p5, p6 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, params[5]);
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct ConstrainedFuncInvoker2
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1 p1, T2 p2)
	{
		R ret;
		void* params[2] = { &p1, &p2 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F;
struct CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78;
struct CollectionDebugView_1_t34A11A384D2CF7AF4FD5B650AE8C68D1A32F1977;
struct CollectionDebuggerProxy_1_t0D30B28B1C48E025F70E126BF31475DBE806D993;
struct CollectionDebuggerProxy_1_tB5B0EAD404667F7CD641232C6FECDC75D0C709B7;
struct CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C;
struct Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3;
struct Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E;
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
struct ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
struct IList_1_t8AC59FFD0F90EC2DAD4C3FA39B2A5851F9D2987A;
struct IObjectPool_1_tE8CA6468BE6707A63684BDE52B62C116D73785BA;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259;
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DerObjectIdentifierU5BU5D_t41E5CB927428845ABB489C9405E70D3B1E4307FC;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct Benes_t8AC0AA65ED1C71C2302BE761185972843084162A;
struct Benes12_t997A724A91C540D3BC2D26E6083D332F69FF6812;
struct Benes13_t827CF5188E90B2F7143590FFBAC17B61EC989540;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E;
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
struct IRandomGenerator_tC099D50931E8D3FB31F5B32E02D7E1400A44F637;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A;
struct String_t;
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_tB427528651FB4A564AE712360C5DB38FFB1BF525_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Benes12_t997A724A91C540D3BC2D26E6083D332F69FF6812_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Benes13_t827CF5188E90B2F7143590FFBAC17B61EC989540_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DigestUtilities_t9010F44C7B0C26B12C62A83E3E437EC1273057AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionUtils_tAF70075D68E65666CDD73C84AB0BDE41A87C9E02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B07B43F1557775B37A1B8EA12D9C378EDB7EC4B;
IL2CPP_EXTERN_C String_t* _stringLiteral226374B4A4A54F92AC022D20C6A05ACB5EEC4C76;
IL2CPP_EXTERN_C String_t* _stringLiteral26D123FC6FB490AE20447BCDB0DEBAC133C96A6D;
IL2CPP_EXTERN_C String_t* _stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC;
IL2CPP_EXTERN_C String_t* _stringLiteral6D708D3E8ACC426EF77E8F9A83D11A00B8B80AB4;
IL2CPP_EXTERN_C String_t* _stringLiteralF0569A2D4DF78C8C40FBF38FD14928474637FF26;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec_tCC5CF16D21AE9A03A12B40C1DE834E0479F4CF31  : public RuntimeObject
{
};
struct U3CU3Ec_t10404AD5587FDC521FE9D3AD83CB02D13BBCBC5A  : public RuntimeObject
{
};
struct U3CU3Ec_tDFE9C9D3A97A107D38D40F44D513ACB8B7A831DB  : public RuntimeObject
{
};
struct U3CU3Ec_t83DCBBB37A186C56BA4801E1C77AB11E239AA108  : public RuntimeObject
{
};
struct U3CU3Ec_tC800564EBB5D32130E0C854A5C823A43D6E86A72  : public RuntimeObject
{
};
struct U3CU3Ec_tEF36F5EDBC0D8E8E7EB80C857411C3885013499E  : public RuntimeObject
{
};
struct U3CU3Ec_tDAE171DB48D39969E8FF46A154B31B3951639080  : public RuntimeObject
{
};
struct U3CU3Ec_t12B34263DAA336BDDD9345CAC6DF7F7E753BB669  : public RuntimeObject
{
};
struct U3CU3Ec_t674923ACD65EF9BC9808C5D718A0E4FB60B42EA8  : public RuntimeObject
{
};
struct U3CU3Ec_t24CE44E972541D9A99CA8CBCD6E7778828C2D9BC  : public RuntimeObject
{
};
struct U3CU3Ec_tF32A93EC6F16BEDCA531A9194456860D709D980B  : public RuntimeObject
{
};
struct U3CU3Ec_tE188FA4E599E2E2A7294B24B2BAB5843DBD03D9D  : public RuntimeObject
{
};
struct U3CU3Ec_t1E494E2618DB327158D6C79B72371F7B1EECB576  : public RuntimeObject
{
};
struct U3CU3Ec_t18E716A9006ACC27F8F25EB2FFA2FC34B7F104DE  : public RuntimeObject
{
};
struct U3CU3Ec_tD2547A7958EA4AAC462CD740F057D625ACAF1EFD  : public RuntimeObject
{
};
struct U3CU3Ec_tC1BE959AF61BF3990A0A48154DB0953FF79FEA12  : public RuntimeObject
{
};
struct U3CU3Ec_t737BE258558C4E94965F1211ECA4433BCACDE49B  : public RuntimeObject
{
};
struct U3CU3Ec_t65E3EDE8E4E968B487E923FA5F7329DEF3E03C2D  : public RuntimeObject
{
};
struct CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78 : public RuntimeObject {};
struct CollectionDebugView_1_t34A11A384D2CF7AF4FD5B650AE8C68D1A32F1977  : public RuntimeObject
{
	RuntimeObject* ____collection;
};
struct CollectionDebuggerProxy_1_t0D30B28B1C48E025F70E126BF31475DBE806D993  : public RuntimeObject
{
	RuntimeObject* ____collection;
};
struct CollectionDebuggerProxy_1_tB5B0EAD404667F7CD641232C6FECDC75D0C709B7  : public RuntimeObject
{
	RuntimeObject* ____collection;
};
struct CollectionPool_2_tEE0AAA9B500AE463B204966D54AC2FCE0A45E780  : public RuntimeObject
{
};
struct CollectionPool_2_t279100A4FFD1A2D8961159AD31FA1ECBCEAA656D  : public RuntimeObject
{
};
struct CollectionPool_2_tC88CCBC3F6F38DA644A6A3A1F7DC9FAE0562A296  : public RuntimeObject
{
};
struct CollectionPool_2_t6F1905D8979332C0F679BA087B3B9CAB2D0E98C4  : public RuntimeObject
{
};
struct CollectionPool_2_t416BD9EEAA6CF3FE08694B0ED1BFFB24DFCA9183  : public RuntimeObject
{
};
struct CollectionPool_2_tE64DF0D7D3783D49F3822577F71035B734E1A26B  : public RuntimeObject
{
};
struct CollectionPool_2_t88ACCECFF1D8FE1A47779B688F1A65707608835C  : public RuntimeObject
{
};
struct CollectionPool_2_t5D9769C415584CBA55C9D50FDDF84957F722AB87  : public RuntimeObject
{
};
struct CollectionPool_2_tB017AECD616BF88C506157C03A29912E92B61DAC  : public RuntimeObject
{
};
struct CollectionPool_2_t87016087A6FCF3BE6832F68340CE4B8EFB384904  : public RuntimeObject
{
};
struct CollectionPool_2_t12CF56D711A6EE0B59377E1F68943E93C9743C60  : public RuntimeObject
{
};
struct CollectionPool_2_tC8893CCE41BC343C6987B521D477C24518435E0D  : public RuntimeObject
{
};
struct CollectionPool_2_tACBBC840258D5653B88B3E20B53F8ED6607B22D3  : public RuntimeObject
{
};
struct CollectionPool_2_t4A2EAF16BCB64068FF79FFE2F8C3BAAA62DCCA92  : public RuntimeObject
{
};
struct CollectionPool_2_tEE073BB0EEC21F466D5F3C12C852588CCE225C79  : public RuntimeObject
{
};
struct CollectionPool_2_tD78383F484539B23E7F65C2F1E7AE1A5808CDF33  : public RuntimeObject
{
};
struct CollectionPool_2_tB4B9029F02605BCE56AE6D8407296C37B7E34C1B  : public RuntimeObject
{
};
struct CollectionPool_2_tAF45B9017CF01B088C1F8E261D82D491EF5211C6  : public RuntimeObject
{
};
struct CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C  : public RuntimeObject
{
	RuntimeObject* ____list;
	RuntimeObject* ____genericCollection;
	RuntimeObject* ____syncRoot;
};
struct Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3  : public RuntimeObject
{
	RuntimeObject* ___items;
};
struct Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E  : public RuntimeObject
{
	RuntimeObject* ___items;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259  : public RuntimeObject
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___m_List;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___m_CreateFunc;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___m_ActionOnGet;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___m_ActionOnRelease;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___m_ActionOnDestroy;
	int32_t ___m_MaxSize;
	bool ___m_CollectionCheck;
	RuntimeObject* ___m_FreshlyReleased;
	int32_t ___U3CCountAllU3Ek__BackingField;
};
struct Asn1Encodable_t9592F2FBE8784C5DEC4BB4BE3EBD54503AA8F015  : public RuntimeObject
{
};
struct Benes_t8AC0AA65ED1C71C2302BE761185972843084162A  : public RuntimeObject
{
	int32_t ___SYS_N;
	int32_t ___SYS_T;
	int32_t ___GFBITS;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	bool ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	bool ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	String_t* ___m_name;
	String_t* ___englishname;
	String_t* ___nativename;
	String_t* ___iso3lang;
	String_t* ___iso2lang;
	String_t* ___win3lang;
	String_t* ___territory;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture;
	bool ___constructed;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData;
	bool ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	char* ___m_name;
	char* ___englishname;
	char* ___nativename;
	char* ___iso3lang;
	char* ___iso2lang;
	char* ___win3lang;
	char* ___territory;
	char** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	Il2CppChar* ___m_name;
	Il2CppChar* ___englishname;
	Il2CppChar* ___nativename;
	Il2CppChar* ___iso3lang;
	Il2CppChar* ___iso2lang;
	Il2CppChar* ___win3lang;
	Il2CppChar* ___territory;
	Il2CppChar** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1  : public RuntimeObject
{
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	int32_t ____inext;
	int32_t ____inextp;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E 
{
	RuntimeObject* ___m_ToReturn;
	RuntimeObject* ___m_Pool;
};
struct Asn1Object_t6199E0E42B004F8E0D4A5D6B96AABF4FB84D72C4  : public Asn1Encodable_t9592F2FBE8784C5DEC4BB4BE3EBD54503AA8F015
{
};
struct Benes12_t997A724A91C540D3BC2D26E6083D332F69FF6812  : public Benes_t8AC0AA65ED1C71C2302BE761185972843084162A
{
};
struct Benes13_t827CF5188E90B2F7143590FFBAC17B61EC989540  : public Benes_t8AC0AA65ED1C71C2302BE761185972843084162A
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE 
{
	union
	{
		struct
		{
		};
		uint8_t GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE__padding[1];
	};
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A  : public Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8
{
	RuntimeObject* ___generator;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
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
struct CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F  : public RuntimeObject
{
	int32_t ___SYS_N;
	int32_t ___SYS_T;
	int32_t ___GFBITS;
	int32_t ___IRR_BYTES;
	int32_t ___COND_BYTES;
	int32_t ___PK_NROWS;
	int32_t ___PK_NCOLS;
	int32_t ___PK_ROW_BYTES;
	int32_t ___SYND_BYTES;
	int32_t ___GFMASK;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___poly;
	int32_t ___defaultKeySize;
	GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE ___gf;
	Benes_t8AC0AA65ED1C71C2302BE761185972843084162A* ___benes;
	bool ___usePadding;
	bool ___countErrorIndices;
	bool ___usePivots;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6  : public Asn1Object_t6199E0E42B004F8E0D4A5D6B96AABF4FB84D72C4
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_contents;
	String_t* ___m_identifier;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct U3CU3Ec_tCC5CF16D21AE9A03A12B40C1DE834E0479F4CF31_StaticFields
{
	U3CU3Ec_tCC5CF16D21AE9A03A12B40C1DE834E0479F4CF31* ___U3CU3E9;
};
struct U3CU3Ec_t10404AD5587FDC521FE9D3AD83CB02D13BBCBC5A_StaticFields
{
	U3CU3Ec_t10404AD5587FDC521FE9D3AD83CB02D13BBCBC5A* ___U3CU3E9;
};
struct U3CU3Ec_tDFE9C9D3A97A107D38D40F44D513ACB8B7A831DB_StaticFields
{
	U3CU3Ec_tDFE9C9D3A97A107D38D40F44D513ACB8B7A831DB* ___U3CU3E9;
};
struct U3CU3Ec_t83DCBBB37A186C56BA4801E1C77AB11E239AA108_StaticFields
{
	U3CU3Ec_t83DCBBB37A186C56BA4801E1C77AB11E239AA108* ___U3CU3E9;
};
struct U3CU3Ec_tC800564EBB5D32130E0C854A5C823A43D6E86A72_StaticFields
{
	U3CU3Ec_tC800564EBB5D32130E0C854A5C823A43D6E86A72* ___U3CU3E9;
};
struct U3CU3Ec_tEF36F5EDBC0D8E8E7EB80C857411C3885013499E_StaticFields
{
	U3CU3Ec_tEF36F5EDBC0D8E8E7EB80C857411C3885013499E* ___U3CU3E9;
};
struct U3CU3Ec_tDAE171DB48D39969E8FF46A154B31B3951639080_StaticFields
{
	U3CU3Ec_tDAE171DB48D39969E8FF46A154B31B3951639080* ___U3CU3E9;
};
struct U3CU3Ec_t12B34263DAA336BDDD9345CAC6DF7F7E753BB669_StaticFields
{
	U3CU3Ec_t12B34263DAA336BDDD9345CAC6DF7F7E753BB669* ___U3CU3E9;
};
struct U3CU3Ec_t674923ACD65EF9BC9808C5D718A0E4FB60B42EA8_StaticFields
{
	U3CU3Ec_t674923ACD65EF9BC9808C5D718A0E4FB60B42EA8* ___U3CU3E9;
};
struct U3CU3Ec_t24CE44E972541D9A99CA8CBCD6E7778828C2D9BC_StaticFields
{
	U3CU3Ec_t24CE44E972541D9A99CA8CBCD6E7778828C2D9BC* ___U3CU3E9;
};
struct U3CU3Ec_tF32A93EC6F16BEDCA531A9194456860D709D980B_StaticFields
{
	U3CU3Ec_tF32A93EC6F16BEDCA531A9194456860D709D980B* ___U3CU3E9;
};
struct U3CU3Ec_tE188FA4E599E2E2A7294B24B2BAB5843DBD03D9D_StaticFields
{
	U3CU3Ec_tE188FA4E599E2E2A7294B24B2BAB5843DBD03D9D* ___U3CU3E9;
};
struct U3CU3Ec_t1E494E2618DB327158D6C79B72371F7B1EECB576_StaticFields
{
	U3CU3Ec_t1E494E2618DB327158D6C79B72371F7B1EECB576* ___U3CU3E9;
};
struct U3CU3Ec_t18E716A9006ACC27F8F25EB2FFA2FC34B7F104DE_StaticFields
{
	U3CU3Ec_t18E716A9006ACC27F8F25EB2FFA2FC34B7F104DE* ___U3CU3E9;
};
struct U3CU3Ec_tD2547A7958EA4AAC462CD740F057D625ACAF1EFD_StaticFields
{
	U3CU3Ec_tD2547A7958EA4AAC462CD740F057D625ACAF1EFD* ___U3CU3E9;
};
struct U3CU3Ec_tC1BE959AF61BF3990A0A48154DB0953FF79FEA12_StaticFields
{
	U3CU3Ec_tC1BE959AF61BF3990A0A48154DB0953FF79FEA12* ___U3CU3E9;
};
struct U3CU3Ec_t737BE258558C4E94965F1211ECA4433BCACDE49B_StaticFields
{
	U3CU3Ec_t737BE258558C4E94965F1211ECA4433BCACDE49B* ___U3CU3E9;
};
struct U3CU3Ec_t65E3EDE8E4E968B487E923FA5F7329DEF3E03C2D_StaticFields
{
	U3CU3Ec_t65E3EDE8E4E968B487E923FA5F7329DEF3E03C2D* ___U3CU3E9;
};
struct CollectionPool_2_tEE0AAA9B500AE463B204966D54AC2FCE0A45E780_StaticFields
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___s_Pool;
};
struct CollectionPool_2_t279100A4FFD1A2D8961159AD31FA1ECBCEAA656D_StaticFields
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___s_Pool;
};
struct CollectionPool_2_tC88CCBC3F6F38DA644A6A3A1F7DC9FAE0562A296_StaticFields
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___s_Pool;
};
struct CollectionPool_2_t6F1905D8979332C0F679BA087B3B9CAB2D0E98C4_StaticFields
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___s_Pool;
};
struct CollectionPool_2_t416BD9EEAA6CF3FE08694B0ED1BFFB24DFCA9183_StaticFields
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___s_Pool;
};
struct CollectionPool_2_tE64DF0D7D3783D49F3822577F71035B734E1A26B_StaticFields
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___s_Pool;
};
struct CollectionPool_2_t88ACCECFF1D8FE1A47779B688F1A65707608835C_StaticFields
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___s_Pool;
};
struct CollectionPool_2_t5D9769C415584CBA55C9D50FDDF84957F722AB87_StaticFields
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___s_Pool;
};
struct CollectionPool_2_tB017AECD616BF88C506157C03A29912E92B61DAC_StaticFields
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___s_Pool;
};
struct CollectionPool_2_t87016087A6FCF3BE6832F68340CE4B8EFB384904_StaticFields
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___s_Pool;
};
struct CollectionPool_2_t12CF56D711A6EE0B59377E1F68943E93C9743C60_StaticFields
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___s_Pool;
};
struct CollectionPool_2_tC8893CCE41BC343C6987B521D477C24518435E0D_StaticFields
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___s_Pool;
};
struct CollectionPool_2_tACBBC840258D5653B88B3E20B53F8ED6607B22D3_StaticFields
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___s_Pool;
};
struct CollectionPool_2_t4A2EAF16BCB64068FF79FFE2F8C3BAAA62DCCA92_StaticFields
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___s_Pool;
};
struct CollectionPool_2_tEE073BB0EEC21F466D5F3C12C852588CCE225C79_StaticFields
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___s_Pool;
};
struct CollectionPool_2_tD78383F484539B23E7F65C2F1E7AE1A5808CDF33_StaticFields
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___s_Pool;
};
struct CollectionPool_2_tB4B9029F02605BCE56AE6D8407296C37B7E34C1B_StaticFields
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___s_Pool;
};
struct CollectionPool_2_tAF45B9017CF01B088C1F8E261D82D491EF5211C6_StaticFields
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___s_Pool;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct Benes_t8AC0AA65ED1C71C2302BE761185972843084162A_StaticFields
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___TransposeMasks;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info;
	RuntimeObject* ___shared_table_lock;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture;
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number;
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX;
	bool ___IsTaiwanSku;
};
struct NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_StaticFields
{
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___NistAlgorithm;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___HashAlgs;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdSha256;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdSha384;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdSha512;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdSha224;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdSha512_224;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdSha512_256;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdSha3_224;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdSha3_256;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdSha3_384;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdSha3_512;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdShake128;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdShake256;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdHMacWithSha3_224;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdHMacWithSha3_256;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdHMacWithSha3_384;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdHMacWithSha3_512;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdShake128Len;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdShake256Len;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdKmacWithShake128;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdKmacWithShake256;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___Aes;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdAes128Ecb;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdAes128Cbc;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdAes128Ofb;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdAes128Cfb;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdAes128Wrap;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdAes128Gcm;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdAes128Ccm;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdAes128WrapPad;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdAes128GMac;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdAes192Ecb;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdAes192Cbc;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdAes192Ofb;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdAes192Cfb;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdAes192Wrap;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdAes192Gcm;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdAes192Ccm;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdAes192WrapPad;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdAes192GMac;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdAes256Ecb;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdAes256Cbc;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdAes256Ofb;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdAes256Cfb;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdAes256Wrap;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdAes256Gcm;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdAes256Ccm;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdAes256WrapPad;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdAes256GMac;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___SigAlgs;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdDsaWithSha2;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___DsaWithSha224;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___DsaWithSha256;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___DsaWithSha384;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___DsaWithSha512;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdDsaWithSha3_224;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdDsaWithSha3_256;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdDsaWithSha3_384;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdDsaWithSha3_512;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdEcdsaWithSha3_224;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdEcdsaWithSha3_256;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdEcdsaWithSha3_384;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdEcdsaWithSha3_512;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdRsassaPkcs1V15WithSha3_224;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdRsassaPkcs1V15WithSha3_256;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdRsassaPkcs1V15WithSha3_384;
	DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___IdRsassaPkcs1V15WithSha3_512;
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom;
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A_StaticFields
{
	int64_t ___counter;
	SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A* ___MasterRandom;
	SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A* ___ArbitraryRandom;
	double ___DoubleScale;
};
struct DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6_StaticFields
{
	DerObjectIdentifierU5BU5D_t41E5CB927428845ABB489C9405E70D3B1E4307FC* ___Cache;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
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
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA  : public RuntimeArray
{
	ALIGN_FIELD (8) ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* m_Items[1];

	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C  : public RuntimeArray
{
	ALIGN_FIELD (8) UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* m_Items[1];

	inline UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_get_PublicKeySize_m853C4A2D00082A9874BC4149653978E6887A52E2_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_PKGen_m1008075863ECD43A05F5289345A0CAC73AB4E414_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_sk, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_perm, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___3_pi, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___4_pivots, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_get_PrivateKeySize_m539FA0D16278265CA9C60F0E344D0B3F3C30E236_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_GenerateIrrPoly_m360038A0FD3B45A356F8F1C4045964E2B1630456_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_field, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Sort64_mC6E2DAB5A1901F7481AB6B60C59BD2FC7F47F666_gshared (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_temp, int32_t ___1_from, int32_t ___2_to, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_ControlBitsFromPermutation_mCED55649ED47BB2E703124244164647A43786724_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_pi, int64_t ___2_w, int64_t ___3_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t CmceEngine_1_SameMask32_m2C001DB0125B61ED9DD14F69E460D47F0C1D8B97_gshared (int16_t ___0_x, int16_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_GenerateErrorVector_mA51AFF3B23CF5C69D319E9F37744570573DAFE8D_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_error_vector, SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A* ___1_random, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Syndrome_m197F7CC6D27B52EA3EAD54B37EA352C241F6F9A3_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_cipher_text, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_pk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_error_vector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_CheckPKPadding_m8E1E48498F715F2FC1EB85586F8497FE8C7EDCBA_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pk, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Encrypt_m094A43573CE5528DBC1789D7BDEDDDA508852368_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_cipher_text, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_pk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_error_vector, SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A* ___3_random, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_CheckCPadding_m525F23DC7A8D52045F2A876B687F328259F2BEF2_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_c, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_Decrypt_mC0E2701661460CA9F4934639B842CA38B664C698_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_error_vector, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_sk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_cipher_text, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Synd_m92DF775BC3B218DE432CA3E2C4D8BD282006CC1B_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_f, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___2_L, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_BM_m3D0E78EA65A71A9568585B4AE7D5102757BF7D50_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Root_m92DE41D81FB783B3A0B8956FDA30CC11A2DDB8A0_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_f, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___2_L, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_Min_m2BD653D8BD8164C0DF02750A696024B9A21F6995_gshared (uint16_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t CmceEngine_1_Eval_mF3627DF74FEFA3335867A7FB11A9CB645993D250_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_f, uint16_t ___1_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_Ctz_m9BDE20EC72E5CFC60242632EE9DB790DB2FCAA71_gshared (uint64_t ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CmceEngine_1_SameMask64_m2BABE0252D78058A922A03B0B6EE6AA873460812_gshared (uint16_t ___0_x, uint16_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_CBRecursion_m258015E400B0724D145D8ABA8AD9770F23FA6CD5_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, int64_t ___1_pos, int64_t ___2_step, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___3_pi, int32_t ___4_qIndex, int64_t ___5_w, int64_t ___6_n, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___7_temp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Layer_m7620628460556DC76B3EA9F85EB3A1AF8F39D0D3_gshared (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_p, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_output, int32_t ___2_ptrIndex, int32_t ___3_s, int32_t ___4_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t CmceEngine_1_GetQShort_mACD518218B80C5784D61D26E6E918FE52FDE3DB8_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_temp, int32_t ___1_q_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Sort32_m1B11E7B48FDBBD53A8DC5E41B35538068FCDC725_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_temp, int32_t ___1_from, int32_t ___2_to, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_MovColumns_mFE3E6DD43905E83F18515A5D51B47F6511313D8F_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___0_mat, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_pi, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___2_pivots, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_gshared_inline (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9_gshared (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, RuntimeObject** ___0_v, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_gshared_inline (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, RuntimeObject* ___0_element, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F_gshared (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___0_createFunc, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_actionOnGet, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___2_actionOnRelease, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___3_actionOnDestroy, bool ___4_collectionCheck, int32_t ___5_defaultCapacity, int32_t ___6_maxSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Collection_1_get_Count_mB555825F783F3AD3827FCBB129C0CBC41041D723_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_set_Item_m6AB47AA40036D11B8B175BBE3ECE9289D7DADF07_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_Add_m4B1AD8CC1C40112C06A7C38FA96C4E125FF5D7D7_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_IsCompatibleObject_mE8A49943062A9B331A771711328F64394D2C0D37_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_Contains_mC8B3383FD99F7EA5EB17E0B0CF322EC5423D6A11_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Collection_1_IndexOf_m56B4BF18B936606561F0771EBCE75ABBEB0FD524_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_Insert_mE0074F5F0969C40E01413F4BCD1E68EE2EE0DBDD_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_Remove_m0B817582A4E783113AB989F1076F80B4413DACEA_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_CountAll_mF3CDC0B64D5037106573C6CEE921EAF0A8B3C8EB_gshared_inline (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectPool_1_set_CountAll_mED1939CDEBB184383799328A0C1AEC9E1D2960D9_gshared_inline (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_CountInactive_m9A907BFCDCBFE910B784BDBF71EEDC6D14C90608_gshared (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Benes12__ctor_m90F8874F3B728F8B182A6AAEC4F36F682E10E38C (Benes12_t997A724A91C540D3BC2D26E6083D332F69FF6812* __this, int32_t ___0_n, int32_t ___1_t, int32_t ___2_m, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Benes13__ctor_m1B4182A8B1F2194B9EAB19D85D13834BD6464629 (Benes13_t827CF5188E90B2F7143590FFBAC17B61EC989540* __this, int32_t ___0_n, int32_t ___1_t, int32_t ___2_m, const RuntimeMethod* method) ;
inline int32_t CmceEngine_1_get_PublicKeySize_m853C4A2D00082A9874BC4149653978E6887A52E2 (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F*, const RuntimeMethod*))CmceEngine_1_get_PublicKeySize_m853C4A2D00082A9874BC4149653978E6887A52E2_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DigestUtilities_GetDigest_m10A7032BD51289CBEA8D954FE70C8FE85E5051C0 (DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Utils_Load4_mBE2F3F2D469C607BDB797F61754B699646E65C9D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_offset, const RuntimeMethod* method) ;
inline int32_t CmceEngine_1_PKGen_m1008075863ECD43A05F5289345A0CAC73AB4E414 (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_sk, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_perm, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___3_pi, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___4_pivots, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, const RuntimeMethod*))CmceEngine_1_PKGen_m1008075863ECD43A05F5289345A0CAC73AB4E414_gshared)(__this, ___0_pk, ___1_sk, ___2_perm, ___3_pi, ___4_pivots, method);
}
inline int32_t CmceEngine_1_get_PrivateKeySize_m539FA0D16278265CA9C60F0E344D0B3F3C30E236 (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F*, const RuntimeMethod*))CmceEngine_1_get_PrivateKeySize_m539FA0D16278265CA9C60F0E344D0B3F3C30E236_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Utils_LoadGF_mA1B4A520DC31A92DE9732CA2682C82A780BA6557 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_src, int32_t ___1_offset, int32_t ___2_gfmask, const RuntimeMethod* method) ;
inline int32_t CmceEngine_1_GenerateIrrPoly_m360038A0FD3B45A356F8F1C4045964E2B1630456 (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_field, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))CmceEngine_1_GenerateIrrPoly_m360038A0FD3B45A356F8F1C4045964E2B1630456_gshared)(__this, ___0_field, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_StoreGF_m8B6C4F2DD1098E9BD33AB46AEF64FEEB4B29F98A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_dest, int32_t ___1_offset, uint16_t ___2_a, const RuntimeMethod* method) ;
inline void CmceEngine_1_Sort64_mC6E2DAB5A1901F7481AB6B60C59BD2FC7F47F666 (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_temp, int32_t ___1_from, int32_t ___2_to, const RuntimeMethod* method)
{
	((  void (*) (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*, int32_t, int32_t, const RuntimeMethod*))CmceEngine_1_Sort64_mC6E2DAB5A1901F7481AB6B60C59BD2FC7F47F666_gshared)(___0_temp, ___1_from, ___2_to, method);
}
inline void CmceEngine_1_ControlBitsFromPermutation_mCED55649ED47BB2E703124244164647A43786724 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_pi, int64_t ___2_w, int64_t ___3_n, const RuntimeMethod* method)
{
	((  void (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, int64_t, int64_t, const RuntimeMethod*))CmceEngine_1_ControlBitsFromPermutation_mCED55649ED47BB2E703124244164647A43786724_gshared)(___0_output, ___1_pi, ___2_w, ___3_n, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Arrays_CopyOfRange_mC754E471D540DE8748936EA55F36B8F299BE5277 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_from, int32_t ___2_to, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_Store8_m349F1D35320490FC8EE900DA1C878C7EFE706584 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, int32_t ___1_offset, uint64_t ___2_input, const RuntimeMethod* method) ;
inline uint8_t CmceEngine_1_SameMask32_m2C001DB0125B61ED9DD14F69E460D47F0C1D8B97 (int16_t ___0_x, int16_t ___1_y, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (int16_t, int16_t, const RuntimeMethod*))CmceEngine_1_SameMask32_m2C001DB0125B61ED9DD14F69E460D47F0C1D8B97_gshared)(___0_x, ___1_y, method);
}
inline void CmceEngine_1_GenerateErrorVector_mA51AFF3B23CF5C69D319E9F37744570573DAFE8D (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_error_vector, SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A* ___1_random, const RuntimeMethod* method)
{
	((  void (*) (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A*, const RuntimeMethod*))CmceEngine_1_GenerateErrorVector_mA51AFF3B23CF5C69D319E9F37744570573DAFE8D_gshared)(__this, ___0_error_vector, ___1_random, method);
}
inline void CmceEngine_1_Syndrome_m197F7CC6D27B52EA3EAD54B37EA352C241F6F9A3 (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_cipher_text, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_pk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_error_vector, const RuntimeMethod* method)
{
	((  void (*) (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))CmceEngine_1_Syndrome_m197F7CC6D27B52EA3EAD54B37EA352C241F6F9A3_gshared)(__this, ___0_cipher_text, ___1_pk, ___2_error_vector, method);
}
inline int32_t CmceEngine_1_CheckPKPadding_m8E1E48498F715F2FC1EB85586F8497FE8C7EDCBA (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pk, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))CmceEngine_1_CheckPKPadding_m8E1E48498F715F2FC1EB85586F8497FE8C7EDCBA_gshared)(__this, ___0_pk, method);
}
inline void CmceEngine_1_Encrypt_m094A43573CE5528DBC1789D7BDEDDDA508852368 (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_cipher_text, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_pk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_error_vector, SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A* ___3_random, const RuntimeMethod* method)
{
	((  void (*) (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A*, const RuntimeMethod*))CmceEngine_1_Encrypt_m094A43573CE5528DBC1789D7BDEDDDA508852368_gshared)(__this, ___0_cipher_text, ___1_pk, ___2_error_vector, ___3_random, method);
}
inline int32_t CmceEngine_1_CheckCPadding_m525F23DC7A8D52045F2A876B687F328259F2BEF2 (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_c, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))CmceEngine_1_CheckCPadding_m525F23DC7A8D52045F2A876B687F328259F2BEF2_gshared)(__this, ___0_c, method);
}
inline int32_t CmceEngine_1_Decrypt_mC0E2701661460CA9F4934639B842CA38B664C698 (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_error_vector, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_sk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_cipher_text, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))CmceEngine_1_Decrypt_mC0E2701661460CA9F4934639B842CA38B664C698_gshared)(__this, ___0_error_vector, ___1_sk, ___2_cipher_text, method);
}
inline void CmceEngine_1_Synd_m92DF775BC3B218DE432CA3E2C4D8BD282006CC1B (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_f, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___2_L, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_r, const RuntimeMethod* method)
{
	((  void (*) (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))CmceEngine_1_Synd_m92DF775BC3B218DE432CA3E2C4D8BD282006CC1B_gshared)(__this, ___0_output, ___1_f, ___2_L, ___3_r, method);
}
inline void CmceEngine_1_BM_m3D0E78EA65A71A9568585B4AE7D5102757BF7D50 (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_s, const RuntimeMethod* method)
{
	((  void (*) (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))CmceEngine_1_BM_m3D0E78EA65A71A9568585B4AE7D5102757BF7D50_gshared)(__this, ___0_output, ___1_s, method);
}
inline void CmceEngine_1_Root_m92DE41D81FB783B3A0B8956FDA30CC11A2DDB8A0 (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_f, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___2_L, const RuntimeMethod* method)
{
	((  void (*) (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))CmceEngine_1_Root_m92DE41D81FB783B3A0B8956FDA30CC11A2DDB8A0_gshared)(__this, ___0_output, ___1_f, ___2_L, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t GF13_GFIsZero_m830B451519E00F8D2DDC27689C83F0076BAC7E7E (GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE* __this, uint16_t ___0_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t GF13_GFMulExt_m0C9DF9941FDA3D950E90679324BD46DF55085D77 (GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE* __this, uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) ;
inline int32_t CmceEngine_1_Min_m2BD653D8BD8164C0DF02750A696024B9A21F6995 (uint16_t ___0_a, int32_t ___1_b, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint16_t, int32_t, const RuntimeMethod*))CmceEngine_1_Min_m2BD653D8BD8164C0DF02750A696024B9A21F6995_gshared)(___0_a, ___1_b, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t GF13_GFReduce_m0BD1BD850AFD65F276D63E21FCE7A025A2EFFDDD (GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE* __this, uint32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t GF13_GFFrac_m7C8BC6B7F908BE35C8FD37603F1E4CC0377E8A6F (GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE* __this, uint16_t ___0_den, uint16_t ___1_num, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t GF13_GFMul_mF1A76D1513BBF51707F8AE6E7E8D854D645924C6 (GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE* __this, uint16_t ___0_in0, uint16_t ___1_in1, const RuntimeMethod* method) ;
inline uint16_t CmceEngine_1_Eval_mF3627DF74FEFA3335867A7FB11A9CB645993D250 (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_f, uint16_t ___1_a, const RuntimeMethod* method)
{
	return ((  uint16_t (*) (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, uint16_t, const RuntimeMethod*))CmceEngine_1_Eval_mF3627DF74FEFA3335867A7FB11A9CB645993D250_gshared)(__this, ___0_f, ___1_a, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t GF13_GFSq_m51637ABFCF6009E6D7D9F865A9DBA1D3802D4F38 (GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE* __this, uint16_t ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t GF13_GFInv_m0B5597C7AC9581BD5EBCD0EF92394C88B9626176 (GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE* __this, uint16_t ___0_den, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Utils_Load8_m0720549A7D3C2F9F8E9297A699B9CA3DFB761D28 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_offset, const RuntimeMethod* method) ;
inline int32_t CmceEngine_1_Ctz_m9BDE20EC72E5CFC60242632EE9DB790DB2FCAA71 (uint64_t ___0_input, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint64_t, const RuntimeMethod*))CmceEngine_1_Ctz_m9BDE20EC72E5CFC60242632EE9DB790DB2FCAA71_gshared)(___0_input, method);
}
inline uint64_t CmceEngine_1_SameMask64_m2BABE0252D78058A922A03B0B6EE6AA873460812 (uint16_t ___0_x, uint16_t ___1_y, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (uint16_t, uint16_t, const RuntimeMethod*))CmceEngine_1_SameMask64_m2BABE0252D78058A922A03B0B6EE6AA873460812_gshared)(___0_x, ___1_y, method);
}
inline void CmceEngine_1_CBRecursion_m258015E400B0724D145D8ABA8AD9770F23FA6CD5 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, int64_t ___1_pos, int64_t ___2_step, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___3_pi, int32_t ___4_qIndex, int64_t ___5_w, int64_t ___6_n, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___7_temp, const RuntimeMethod* method)
{
	((  void (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int64_t, int64_t, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, int32_t, int64_t, int64_t, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))CmceEngine_1_CBRecursion_m258015E400B0724D145D8ABA8AD9770F23FA6CD5_gshared)(___0_output, ___1_pos, ___2_step, ___3_pi, ___4_qIndex, ___5_w, ___6_n, ___7_temp, method);
}
inline void CmceEngine_1_Layer_m7620628460556DC76B3EA9F85EB3A1AF8F39D0D3 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_p, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_output, int32_t ___2_ptrIndex, int32_t ___3_s, int32_t ___4_n, const RuntimeMethod* method)
{
	((  void (*) (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, int32_t, const RuntimeMethod*))CmceEngine_1_Layer_m7620628460556DC76B3EA9F85EB3A1AF8F39D0D3_gshared)(___0_p, ___1_output, ___2_ptrIndex, ___3_s, ___4_n, method);
}
inline int16_t CmceEngine_1_GetQShort_mACD518218B80C5784D61D26E6E918FE52FDE3DB8 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_temp, int32_t ___1_q_index, const RuntimeMethod* method)
{
	return ((  int16_t (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, const RuntimeMethod*))CmceEngine_1_GetQShort_mACD518218B80C5784D61D26E6E918FE52FDE3DB8_gshared)(___0_temp, ___1_q_index, method);
}
inline void CmceEngine_1_Sort32_m1B11E7B48FDBBD53A8DC5E41B35538068FCDC725 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_temp, int32_t ___1_from, int32_t ___2_to, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))CmceEngine_1_Sort32_m1B11E7B48FDBBD53A8DC5E41B35538068FCDC725_gshared)(___0_temp, ___1_from, ___2_to, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Utils_Bitrev_mBB7A07B533A6F82506A5B438A5E6A63A5D91C774 (uint16_t ___0_a, int32_t ___1_GFBITS, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Bits_BitPermuteStep2_mD633E91B3F047AA742A6E89FE46CBE6E4D7F7D83_inline (uint64_t* ___0_hi, uint64_t* ___1_lo, uint64_t ___2_m, int32_t ___3_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Interleave_Transpose_m43B18C86692DE1007754FB76215EDF69597BC7F4 (uint64_t ___0_x, const RuntimeMethod* method) ;
inline int32_t CmceEngine_1_MovColumns_mFE3E6DD43905E83F18515A5D51B47F6511313D8F (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___0_mat, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_pi, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___2_pivots, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F*, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, const RuntimeMethod*))CmceEngine_1_MovColumns_mFE3E6DD43905E83F18515A5D51B47F6511313D8F_gshared)(__this, ___0_mat, ___1_pi, ___2_pivots, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Pack_LE_To_UInt64_mB401DD9E769B441E6C4D14FB463B8AE5925654E4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_LE_mBE78DA6F52F26F76C818001B99972D8601FC07A5 (uint64_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Pack_LE_To_UInt64_Low_m2BDBC5AEA3B22D8AD1119FE569CDF6F28C45CACF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, int32_t ___2_len, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_LE_Low_m9F090AE6FFCD86670F67C84013D7AD97B858842C (uint64_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, int32_t ___3_len, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GF13_GFSqrPoly_mE53CE6C0231FA0823CC7D21D5FE1971EB751575F (GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE* __this, int32_t ___0_length, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_poly, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___2_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___3_input, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_temp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GF13_GFMulPoly_mB0826825755DD148EC3924811EA7423B04978300 (GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE* __this, int32_t ___0_length, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_poly, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___2_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___3_left, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___4_right, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___5_temp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___0_sourceArray, RuntimeArray* ___1_destinationArray, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline RuntimeObject* ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_inline (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*, const RuntimeMethod*))ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_gshared_inline)(__this, method);
}
inline PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9 (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, RuntimeObject** ___0_v, const RuntimeMethod* method)
{
	return ((  PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E (*) (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*, RuntimeObject**, const RuntimeMethod*))ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9_gshared)(__this, ___0_v, method);
}
inline void ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_inline (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, RuntimeObject* ___0_element, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*, RuntimeObject*, const RuntimeMethod*))ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_gshared_inline)(__this, ___0_element, method);
}
inline void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8 (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
inline void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___0_createFunc, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_actionOnGet, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___2_actionOnRelease, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___3_actionOnDestroy, bool ___4_collectionCheck, int32_t ___5_defaultCapacity, int32_t ___6_maxSize, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, bool, int32_t, int32_t, const RuntimeMethod*))ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F_gshared)(__this, ___0_createFunc, ___1_actionOnGet, ___2_actionOnRelease, ___3_actionOnDestroy, ___4_collectionCheck, ___5_defaultCapacity, ___6_maxSize, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationUtils_ArgumentNotNull_mC7EBE963D14FFCC7B90B08B403FF584EC520C888 (RuntimeObject* ___0_value, String_t* ___1_parameterName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71 (RuntimeObject** ___0_location1, RuntimeObject* ___1_value, RuntimeObject* ___2_comparand, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_mE8641D4F1BDCF64E9876EE3B78F84D7AC377D3E9 (String_t* ___0_format, RuntimeObject* ___1_provider, RuntimeObject* ___2_arg0, RuntimeObject* ___3_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsValueType_mD736A971C1BB5B1092EBD01BB9DF7B8D8C1C26BD (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_IsNullableType_mA710C2540434AAA2353481C15C48C3996EC69963 (Type_t* ___0_t, const RuntimeMethod* method) ;
inline void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023 (int32_t ___0_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
inline int32_t Collection_1_get_Count_mB555825F783F3AD3827FCBB129C0CBC41041D723 (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3*, const RuntimeMethod*))Collection_1_get_Count_mB555825F783F3AD3827FCBB129C0CBC41041D723_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared)(___0_value, ___1_argName, method);
}
inline void Collection_1_set_Item_m6AB47AA40036D11B8B175BBE3ECE9289D7DADF07 (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3*, int32_t, RuntimeObject*, const RuntimeMethod*))Collection_1_set_Item_m6AB47AA40036D11B8B175BBE3ECE9289D7DADF07_gshared)(__this, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
inline void Collection_1_Add_m4B1AD8CC1C40112C06A7C38FA96C4E125FF5D7D7 (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3*, RuntimeObject*, const RuntimeMethod*))Collection_1_Add_m4B1AD8CC1C40112C06A7C38FA96C4E125FF5D7D7_gshared)(__this, ___0_item, method);
}
inline bool Collection_1_IsCompatibleObject_mE8A49943062A9B331A771711328F64394D2C0D37 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Collection_1_IsCompatibleObject_mE8A49943062A9B331A771711328F64394D2C0D37_gshared)(___0_value, method);
}
inline bool Collection_1_Contains_mC8B3383FD99F7EA5EB17E0B0CF322EC5423D6A11 (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3*, RuntimeObject*, const RuntimeMethod*))Collection_1_Contains_mC8B3383FD99F7EA5EB17E0B0CF322EC5423D6A11_gshared)(__this, ___0_item, method);
}
inline int32_t Collection_1_IndexOf_m56B4BF18B936606561F0771EBCE75ABBEB0FD524 (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3*, RuntimeObject*, const RuntimeMethod*))Collection_1_IndexOf_m56B4BF18B936606561F0771EBCE75ABBEB0FD524_gshared)(__this, ___0_item, method);
}
inline void Collection_1_Insert_mE0074F5F0969C40E01413F4BCD1E68EE2EE0DBDD (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3*, int32_t, RuntimeObject*, const RuntimeMethod*))Collection_1_Insert_mE0074F5F0969C40E01413F4BCD1E68EE2EE0DBDD_gshared)(__this, ___0_index, ___1_item, method);
}
inline bool Collection_1_Remove_m0B817582A4E783113AB989F1076F80B4413DACEA (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3*, RuntimeObject*, const RuntimeMethod*))Collection_1_Remove_m0B817582A4E783113AB989F1076F80B4413DACEA_gshared)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
inline RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
inline int32_t ObjectPool_1_get_CountAll_mF3CDC0B64D5037106573C6CEE921EAF0A8B3C8EB_inline (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*, const RuntimeMethod*))ObjectPool_1_get_CountAll_mF3CDC0B64D5037106573C6CEE921EAF0A8B3C8EB_gshared_inline)(__this, method);
}
inline void ObjectPool_1_set_CountAll_mED1939CDEBB184383799328A0C1AEC9E1D2960D9_inline (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*, int32_t, const RuntimeMethod*))ObjectPool_1_set_CountAll_mED1939CDEBB184383799328A0C1AEC9E1D2960D9_gshared_inline)(__this, ___0_value, method);
}
inline RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
inline void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
inline void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
inline int32_t ObjectPool_1_get_CountInactive_m9A907BFCDCBFE910B784BDBF71EEDC6D14C90608 (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*, const RuntimeMethod*))ObjectPool_1_get_CountInactive_m9A907BFCDCBFE910B784BDBF71EEDC6D14C90608_gshared)(__this, method);
}
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_get_IrrBytes_mCF3C7495BFEF07A643E917E10288F79926C39BEF_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___IRR_BYTES;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_get_CondBytes_m6BE0D867827EF24779F5222B01932EB29DE465F5_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___COND_BYTES;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_get_PrivateKeySize_m539FA0D16278265CA9C60F0E344D0B3F3C30E236_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___COND_BYTES;
		int32_t L_1 = __this->___IRR_BYTES;
		int32_t L_2 = __this->___SYS_N;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_0, L_1)), ((int32_t)(L_2/8)))), ((int32_t)40)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_get_PublicKeySize_m853C4A2D00082A9874BC4149653978E6887A52E2_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___usePadding;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___PK_NROWS;
		int32_t L_2 = __this->___PK_NCOLS;
		return ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_1, L_2))/8));
	}

IL_0018:
	{
		int32_t L_3 = __this->___PK_NROWS;
		int32_t L_4 = __this->___SYS_N;
		int32_t L_5 = __this->___PK_NROWS;
		return ((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_4/8)), ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_5, 1))/8))))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_get_CipherTextSize_m823C6ED0CA2DE953CA91D83F75E736E333DED03A_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___SYND_BYTES;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_get_DefaultSessionKeySize_mFB8525DF70F3FD86EA78AD4DE83CA31701692116_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___defaultKeySize;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1__ctor_m6C01E1A37A70CF72A08CB27062E37029F4F60448_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, int32_t ___0_m, int32_t ___1_n, int32_t ___2_t, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_p, bool ___4_usePivots, int32_t ___5_defaultKeySize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Benes12_t997A724A91C540D3BC2D26E6083D332F69FF6812_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Benes13_t827CF5188E90B2F7143590FFBAC17B61EC989540_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		bool L_0 = ___4_usePivots;
		__this->___usePivots = L_0;
		int32_t L_1 = ___1_n;
		__this->___SYS_N = L_1;
		int32_t L_2 = ___2_t;
		__this->___SYS_T = L_2;
		int32_t L_3 = ___0_m;
		__this->___GFBITS = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___3_p;
		__this->___poly = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___poly), (void*)L_4);
		int32_t L_5 = ___5_defaultKeySize;
		__this->___defaultKeySize = L_5;
		int32_t L_6 = __this->___SYS_T;
		__this->___IRR_BYTES = ((int32_t)il2cpp_codegen_multiply(L_6, 2));
		int32_t L_7 = __this->___GFBITS;
		int32_t L_8 = __this->___GFBITS;
		__this->___COND_BYTES = ((int32_t)il2cpp_codegen_multiply(((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_7, 4))&((int32_t)31))))), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_8)), 1))));
		int32_t L_9 = __this->___SYS_T;
		int32_t L_10 = __this->___GFBITS;
		__this->___PK_NROWS = ((int32_t)il2cpp_codegen_multiply(L_9, L_10));
		int32_t L_11 = __this->___SYS_N;
		int32_t L_12 = __this->___PK_NROWS;
		__this->___PK_NCOLS = ((int32_t)il2cpp_codegen_subtract(L_11, L_12));
		int32_t L_13 = __this->___PK_NCOLS;
		__this->___PK_ROW_BYTES = ((int32_t)(((int32_t)il2cpp_codegen_add(L_13, 7))/8));
		int32_t L_14 = __this->___PK_NROWS;
		__this->___SYND_BYTES = ((int32_t)(((int32_t)il2cpp_codegen_add(L_14, 7))/8));
		int32_t L_15 = __this->___GFBITS;
		__this->___GFMASK = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_15&((int32_t)31))))), 1));
		GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE* L_16 = (GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE*)(&__this->___gf);
		il2cpp_codegen_initobj(L_16, sizeof(GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE));
		int32_t L_17 = __this->___GFBITS;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_00ed;
		}
	}
	{
		int32_t L_18 = __this->___SYS_N;
		int32_t L_19 = __this->___SYS_T;
		int32_t L_20 = __this->___GFBITS;
		Benes12_t997A724A91C540D3BC2D26E6083D332F69FF6812* L_21 = (Benes12_t997A724A91C540D3BC2D26E6083D332F69FF6812*)il2cpp_codegen_object_new(Benes12_t997A724A91C540D3BC2D26E6083D332F69FF6812_il2cpp_TypeInfo_var);
		Benes12__ctor_m90F8874F3B728F8B182A6AAEC4F36F682E10E38C(L_21, L_18, L_19, L_20, NULL);
		__this->___benes = (Benes_t8AC0AA65ED1C71C2302BE761185972843084162A*)L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___benes), (void*)(Benes_t8AC0AA65ED1C71C2302BE761185972843084162A*)L_21);
		goto IL_010a;
	}

IL_00ed:
	{
		int32_t L_22 = __this->___SYS_N;
		int32_t L_23 = __this->___SYS_T;
		int32_t L_24 = __this->___GFBITS;
		Benes13_t827CF5188E90B2F7143590FFBAC17B61EC989540* L_25 = (Benes13_t827CF5188E90B2F7143590FFBAC17B61EC989540*)il2cpp_codegen_object_new(Benes13_t827CF5188E90B2F7143590FFBAC17B61EC989540_il2cpp_TypeInfo_var);
		Benes13__ctor_m1B4182A8B1F2194B9EAB19D85D13834BD6464629(L_25, L_22, L_23, L_24, NULL);
		__this->___benes = (Benes_t8AC0AA65ED1C71C2302BE761185972843084162A*)L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___benes), (void*)(Benes_t8AC0AA65ED1C71C2302BE761185972843084162A*)L_25);
	}

IL_010a:
	{
		int32_t L_26 = __this->___SYS_T;
		__this->___usePadding = (bool)((!(((uint32_t)((int32_t)(L_26%8))) <= ((uint32_t)0)))? 1 : 0);
		int32_t L_27 = __this->___GFBITS;
		int32_t L_28 = __this->___SYS_N;
		__this->___countErrorIndices = (bool)((((int32_t)((int32_t)(1<<((int32_t)(L_27&((int32_t)31)))))) > ((int32_t)L_28))? 1 : 0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CmceEngine_1_GeneratePublicKeyFromPrivateKey_m0A287E50C7E8BAA892ADBD9C7B49937F70402D1F_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigestUtilities_t9010F44C7B0C26B12C62A83E3E437EC1273057AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_1 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = CmceEngine_1_get_PublicKeySize_m853C4A2D00082A9874BC4149653978E6887A52E2(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->___GFBITS;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_2&((int32_t)31))))));
		V_1 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		V_2 = L_4;
		int32_t L_5 = __this->___GFBITS;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_5&((int32_t)31))))));
		V_3 = L_6;
		int32_t L_7 = __this->___SYS_N;
		int32_t L_8 = __this->___GFBITS;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(L_7/8)), ((int32_t)il2cpp_codegen_multiply(((int32_t)(1<<((int32_t)(L_8&((int32_t)31))))), 4)))));
		V_4 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_4;
		NullCheck(L_10);
		int32_t L_11 = __this->___IRR_BYTES;
		int32_t L_12 = __this->___GFBITS;
		V_5 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_10)->max_length)), ((int32_t)32))), L_11)), ((int32_t)il2cpp_codegen_multiply(((int32_t)(1<<((int32_t)(L_12&((int32_t)31))))), 4))));
		il2cpp_codegen_runtime_class_init_inline(NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var);
		DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* L_13 = ((NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_StaticFields*)il2cpp_codegen_static_fields_for(NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var))->___IdShake256;
		il2cpp_codegen_runtime_class_init_inline(DigestUtilities_t9010F44C7B0C26B12C62A83E3E437EC1273057AE_il2cpp_TypeInfo_var);
		RuntimeObject* L_14;
		L_14 = DigestUtilities_GetDigest_m10A7032BD51289CBEA8D954FE70C8FE85E5051C0(L_13, NULL);
		RuntimeObject* L_15 = L_14;
		NullCheck(L_15);
		InterfaceActionInvoker1< uint8_t >::Invoke(3, IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var, L_15, (uint8_t)((int32_t)64));
		RuntimeObject* L_16 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___0_sk;
		NullCheck(L_16);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var, L_16, L_17, 0, ((int32_t)32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_4;
		NullCheck(L_19);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_16, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var)));
		int32_t L_20;
		L_20 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_16, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var)), L_18, 0, ((int32_t)(((RuntimeArray*)L_19)->max_length)));
		V_6 = 0;
		goto IL_00bb;
	}

IL_00a3:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_3;
		int32_t L_22 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_4;
		int32_t L_24 = V_5;
		int32_t L_25 = V_6;
		uint32_t L_26;
		L_26 = Utils_Load4_mBE2F3F2D469C607BDB797F61754B699646E65C9D(L_23, ((int32_t)il2cpp_codegen_add(L_24, ((int32_t)il2cpp_codegen_multiply(L_25, 4)))), NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (uint32_t)L_26);
		int32_t L_27 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00bb:
	{
		int32_t L_28 = V_6;
		int32_t L_29 = __this->___GFBITS;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(1<<((int32_t)(L_29&((int32_t)31))))))))
		{
			goto IL_00a3;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___0_sk;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_3;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_33 = V_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_34 = V_2;
		int32_t L_35;
		L_35 = CmceEngine_1_PKGen_m1008075863ECD43A05F5289345A0CAC73AB4E414(__this, L_30, L_31, L_32, L_33, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_0;
		return L_36;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CmceEngine_1_DecompressPrivateKey_m811BFD99F638EEBED9EAF42DDB3C855C8CC5D9B9_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigestUtilities_t9010F44C7B0C26B12C62A83E3E437EC1273057AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_7 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_8 = NULL;
	int32_t V_9 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_10 = NULL;
	int32_t V_11 = 0;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_12 = NULL;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int32_t L_0;
		L_0 = CmceEngine_1_get_PrivateKeySize_m539FA0D16278265CA9C60F0E344D0B3F3C30E236(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_sk;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_sk;
		NullCheck(L_4);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		int32_t L_5 = __this->___SYS_N;
		int32_t L_6 = __this->___GFBITS;
		int32_t L_7 = __this->___IRR_BYTES;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(L_5/8)), ((int32_t)il2cpp_codegen_multiply(((int32_t)(1<<((int32_t)(L_6&((int32_t)31))))), 4)))), L_7)), ((int32_t)32))));
		V_1 = L_8;
		il2cpp_codegen_runtime_class_init_inline(NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var);
		DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* L_9 = ((NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_StaticFields*)il2cpp_codegen_static_fields_for(NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var))->___IdShake256;
		il2cpp_codegen_runtime_class_init_inline(DigestUtilities_t9010F44C7B0C26B12C62A83E3E437EC1273057AE_il2cpp_TypeInfo_var);
		RuntimeObject* L_10;
		L_10 = DigestUtilities_GetDigest_m10A7032BD51289CBEA8D954FE70C8FE85E5051C0(L_9, NULL);
		RuntimeObject* L_11 = L_10;
		NullCheck(L_11);
		InterfaceActionInvoker1< uint8_t >::Invoke(3, IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var, L_11, (uint8_t)((int32_t)64));
		RuntimeObject* L_12 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___0_sk;
		NullCheck(L_12);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var, L_12, L_13, 0, ((int32_t)32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_1;
		NullCheck(L_15);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_12, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var)));
		int32_t L_16;
		L_16 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_12, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var)), L_14, 0, ((int32_t)(((RuntimeArray*)L_15)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___0_sk;
		NullCheck(L_17);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))) > ((int32_t)((int32_t)40))))
		{
			goto IL_0102;
		}
	}
	{
		int32_t L_18 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_19 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_18);
		V_2 = L_19;
		int32_t L_20 = __this->___IRR_BYTES;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_20);
		V_3 = L_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = __this->___IRR_BYTES;
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_22)->max_length)), ((int32_t)32))), L_23));
		V_5 = 0;
		goto IL_00bd;
	}

IL_00a0:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_24 = V_2;
		int32_t L_25 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_1;
		int32_t L_27 = V_4;
		int32_t L_28 = V_5;
		int32_t L_29 = __this->___GFMASK;
		uint16_t L_30;
		L_30 = Utils_LoadGF_mA1B4A520DC31A92DE9732CA2682C82A780BA6557(L_26, ((int32_t)il2cpp_codegen_add(L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)))), L_29, NULL);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint16_t)L_30);
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00bd:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = __this->___SYS_T;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_00a0;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_34 = V_2;
		int32_t L_35;
		L_35 = CmceEngine_1_GenerateIrrPoly_m360038A0FD3B45A356F8F1C4045964E2B1630456(__this, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_6 = 0;
		goto IL_00e8;
	}

IL_00d4:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_3;
		int32_t L_37 = V_6;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_38 = V_2;
		int32_t L_39 = V_6;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		uint16_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		Utils_StoreGF_m8B6C4F2DD1098E9BD33AB46AEF64FEEB4B29F98A(L_36, ((int32_t)il2cpp_codegen_multiply(L_37, 2)), L_41, NULL);
		int32_t L_42 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00e8:
	{
		int32_t L_43 = V_6;
		int32_t L_44 = __this->___SYS_T;
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_00d4;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_0;
		int32_t L_47 = __this->___IRR_BYTES;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_45, 0, (RuntimeArray*)L_46, ((int32_t)40), L_47, NULL);
	}

IL_0102:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = ___0_sk;
		NullCheck(L_48);
		int32_t L_49 = __this->___IRR_BYTES;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length))) > ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)40), L_49)))))
		{
			goto IL_0257;
		}
	}
	{
		int32_t L_50 = __this->___GFBITS;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_50&((int32_t)31))))));
		V_7 = L_51;
		int32_t L_52 = __this->___GFBITS;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_53 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_52&((int32_t)31))))));
		V_8 = L_53;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_1;
		NullCheck(L_54);
		int32_t L_55 = __this->___IRR_BYTES;
		int32_t L_56 = __this->___GFBITS;
		V_9 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_54)->max_length)), ((int32_t)32))), L_55)), ((int32_t)il2cpp_codegen_multiply(((int32_t)(1<<((int32_t)(L_56&((int32_t)31))))), 4))));
		V_11 = 0;
		goto IL_0171;
	}

IL_0159:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = V_7;
		int32_t L_58 = V_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = V_1;
		int32_t L_60 = V_9;
		int32_t L_61 = V_11;
		uint32_t L_62;
		L_62 = Utils_Load4_mBE2F3F2D469C607BDB797F61754B699646E65C9D(L_59, ((int32_t)il2cpp_codegen_add(L_60, ((int32_t)il2cpp_codegen_multiply(L_61, 4)))), NULL);
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (uint32_t)L_62);
		int32_t L_63 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_0171:
	{
		int32_t L_64 = V_11;
		int32_t L_65 = __this->___GFBITS;
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(1<<((int32_t)(L_65&((int32_t)31))))))))
		{
			goto IL_0159;
		}
	}
	{
		bool L_66 = __this->___usePivots;
		if (!L_66)
		{
			goto IL_01a1;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_67 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		V_12 = L_67;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = V_7;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_70 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_71 = V_12;
		int32_t L_72;
		L_72 = CmceEngine_1_PKGen_m1008075863ECD43A05F5289345A0CAC73AB4E414(__this, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, L_68, L_69, L_70, L_71, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		goto IL_0218;
	}

IL_01a1:
	{
		int32_t L_73 = __this->___GFBITS;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_74 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_73&((int32_t)31))))));
		V_13 = L_74;
		V_14 = 0;
		goto IL_01d0;
	}

IL_01b8:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_75 = V_13;
		int32_t L_76 = V_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = V_7;
		int32_t L_78 = V_14;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		uint32_t L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		int32_t L_81 = V_14;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(L_76), (int64_t)((int64_t)(((int64_t)(((int64_t)(uint64_t)((uint32_t)L_80))<<((int32_t)31)))|((int64_t)(uint64_t)((uint32_t)L_81)))));
		int32_t L_82 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01d0:
	{
		int32_t L_83 = V_14;
		int32_t L_84 = __this->___GFBITS;
		if ((((int32_t)L_83) < ((int32_t)((int32_t)(1<<((int32_t)(L_84&((int32_t)31))))))))
		{
			goto IL_01b8;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_85 = V_13;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_86 = V_13;
		NullCheck(L_86);
		CmceEngine_1_Sort64_mC6E2DAB5A1901F7481AB6B60C59BD2FC7F47F666(L_85, 0, ((int32_t)(((RuntimeArray*)L_86)->max_length)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_15 = 0;
		goto IL_0209;
	}

IL_01f0:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_87 = V_8;
		int32_t L_88 = V_15;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_89 = V_13;
		int32_t L_90 = V_15;
		NullCheck(L_89);
		int32_t L_91 = L_90;
		int64_t L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		int32_t L_93 = __this->___GFMASK;
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(L_88), (uint16_t)((int32_t)(uint16_t)((int64_t)(L_92&((int64_t)L_93)))));
		int32_t L_94 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_0209:
	{
		int32_t L_95 = V_15;
		int32_t L_96 = __this->___GFBITS;
		if ((((int32_t)L_95) < ((int32_t)((int32_t)(1<<((int32_t)(L_96&((int32_t)31))))))))
		{
			goto IL_01f0;
		}
	}

IL_0218:
	{
		int32_t L_97 = __this->___COND_BYTES;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_97);
		V_10 = L_98;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_99 = V_10;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_100 = V_8;
		int32_t L_101 = __this->___GFBITS;
		int32_t L_102 = __this->___GFBITS;
		CmceEngine_1_ControlBitsFromPermutation_mCED55649ED47BB2E703124244164647A43786724(L_99, L_100, ((int64_t)L_101), ((int64_t)((int32_t)(1<<((int32_t)(L_102&((int32_t)31)))))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_103 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = V_0;
		int32_t L_105 = __this->___IRR_BYTES;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_106 = V_10;
		NullCheck(L_106);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_103, 0, (RuntimeArray*)L_104, ((int32_t)il2cpp_codegen_add(L_105, ((int32_t)40))), ((int32_t)(((RuntimeArray*)L_106)->max_length)), NULL);
	}

IL_0257:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_108 = V_0;
		int32_t L_109;
		L_109 = CmceEngine_1_get_PrivateKeySize_m539FA0D16278265CA9C60F0E344D0B3F3C30E236(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		int32_t L_110 = __this->___SYS_N;
		int32_t L_111 = __this->___SYS_N;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_107, 0, (RuntimeArray*)L_108, ((int32_t)il2cpp_codegen_subtract(L_109, ((int32_t)(L_110/8)))), ((int32_t)(L_111/8)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = V_0;
		return L_112;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_KemKeypair_m0CA6ECD43FFAF2B20646B54B97C411D223F18A66_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_sk, SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A* ___2_random, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_tB427528651FB4A564AE712360C5DB38FFB1BF525_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigestUtilities_t9010F44C7B0C26B12C62A83E3E437EC1273057AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_8 = NULL;
	int32_t V_9 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_10 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_11 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_1 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)64));
		SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A* L_3 = ___2_random;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck((Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)L_3);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)L_3, L_4);
		int32_t L_5 = __this->___SYS_N;
		int32_t L_6 = __this->___GFBITS;
		int32_t L_7 = __this->___SYS_T;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(L_5/8)), ((int32_t)il2cpp_codegen_multiply(((int32_t)(1<<((int32_t)(L_6&((int32_t)31))))), 4)))), ((int32_t)il2cpp_codegen_multiply(L_7, 2)))), ((int32_t)32))));
		V_2 = L_8;
		V_4 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		V_5 = L_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		V_6 = L_10;
		il2cpp_codegen_runtime_class_init_inline(NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var);
		DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* L_11 = ((NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_StaticFields*)il2cpp_codegen_static_fields_for(NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var))->___IdShake256;
		il2cpp_codegen_runtime_class_init_inline(DigestUtilities_t9010F44C7B0C26B12C62A83E3E437EC1273057AE_il2cpp_TypeInfo_var);
		RuntimeObject* L_12;
		L_12 = DigestUtilities_GetDigest_m10A7032BD51289CBEA8D954FE70C8FE85E5051C0(L_11, NULL);
		V_7 = L_12;
	}

IL_005d:
	{
		RuntimeObject* L_13 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		NullCheck(L_15);
		NullCheck(L_13);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var, L_13, L_14, 0, ((int32_t)(((RuntimeArray*)L_15)->max_length)));
		RuntimeObject* L_16 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_18);
		NullCheck(L_16);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var, L_16, L_17, 0, ((int32_t)(((RuntimeArray*)L_18)->max_length)));
		RuntimeObject* L_19 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_2;
		NullCheck(L_21);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_19, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var)));
		int32_t L_22;
		L_22 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_19, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var)), L_20, 0, ((int32_t)(((RuntimeArray*)L_21)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_2;
		NullCheck(L_23);
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), ((int32_t)32)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_2;
		int32_t L_25 = V_3;
		int32_t L_26 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Arrays_tB427528651FB4A564AE712360C5DB38FFB1BF525_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
		L_27 = Arrays_CopyOfRange_mC754E471D540DE8748936EA55F36B8F299BE5277(L_24, L_25, ((int32_t)il2cpp_codegen_add(L_26, ((int32_t)32))), NULL);
		V_1 = L_27;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___1_sk;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_28, 0, (RuntimeArray*)L_29, 0, ((int32_t)32), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31;
		L_31 = Arrays_CopyOfRange_mC754E471D540DE8748936EA55F36B8F299BE5277(L_30, 0, ((int32_t)32), NULL);
		V_5 = L_31;
		int32_t L_32 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_33 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_32);
		V_8 = L_33;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_2;
		NullCheck(L_34);
		int32_t L_35 = __this->___SYS_T;
		V_9 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_34)->max_length)), ((int32_t)32))), ((int32_t)il2cpp_codegen_multiply(2, L_35))));
		int32_t L_36 = V_9;
		V_3 = L_36;
		V_13 = 0;
		goto IL_00f5;
	}

IL_00d7:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_37 = V_8;
		int32_t L_38 = V_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_2;
		int32_t L_40 = V_9;
		int32_t L_41 = V_13;
		int32_t L_42 = __this->___GFMASK;
		uint16_t L_43;
		L_43 = Utils_LoadGF_mA1B4A520DC31A92DE9732CA2682C82A780BA6557(L_39, ((int32_t)il2cpp_codegen_add(L_40, ((int32_t)il2cpp_codegen_multiply(L_41, 2)))), L_42, NULL);
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (uint16_t)L_43);
		int32_t L_44 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00f5:
	{
		int32_t L_45 = V_13;
		int32_t L_46 = __this->___SYS_T;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_00d7;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_47 = V_8;
		int32_t L_48;
		L_48 = CmceEngine_1_GenerateIrrPoly_m360038A0FD3B45A356F8F1C4045964E2B1630456(__this, L_47, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		if ((((int32_t)L_48) == ((int32_t)(-1))))
		{
			goto IL_005d;
		}
	}
	{
		V_4 = ((int32_t)40);
		V_14 = 0;
		goto IL_012e;
	}

IL_0116:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = ___1_sk;
		int32_t L_50 = V_4;
		int32_t L_51 = V_14;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_52 = V_8;
		int32_t L_53 = V_14;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		uint16_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		Utils_StoreGF_m8B6C4F2DD1098E9BD33AB46AEF64FEEB4B29F98A(L_49, ((int32_t)il2cpp_codegen_add(L_50, ((int32_t)il2cpp_codegen_multiply(L_51, 2)))), L_55, NULL);
		int32_t L_56 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_012e:
	{
		int32_t L_57 = V_14;
		int32_t L_58 = __this->___SYS_T;
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_0116;
		}
	}
	{
		int32_t L_59 = __this->___GFBITS;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_59&((int32_t)31))))));
		V_10 = L_60;
		int32_t L_61 = V_3;
		int32_t L_62 = __this->___GFBITS;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_61, ((int32_t)il2cpp_codegen_multiply(((int32_t)(1<<((int32_t)(L_62&((int32_t)31))))), 4))));
		V_15 = 0;
		goto IL_0176;
	}

IL_015f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = V_10;
		int32_t L_64 = V_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = V_2;
		int32_t L_66 = V_3;
		int32_t L_67 = V_15;
		uint32_t L_68;
		L_68 = Utils_Load4_mBE2F3F2D469C607BDB797F61754B699646E65C9D(L_65, ((int32_t)il2cpp_codegen_add(L_66, ((int32_t)il2cpp_codegen_multiply(L_67, 4)))), NULL);
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (uint32_t)L_68);
		int32_t L_69 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_69, 1));
	}

IL_0176:
	{
		int32_t L_70 = V_15;
		int32_t L_71 = __this->___GFBITS;
		if ((((int32_t)L_70) < ((int32_t)((int32_t)(1<<((int32_t)(L_71&((int32_t)31))))))))
		{
			goto IL_015f;
		}
	}
	{
		int32_t L_72 = __this->___GFBITS;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_73 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_72&((int32_t)31))))));
		V_11 = L_73;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = ___0_pk;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = ___1_sk;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = V_10;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_77 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_78 = V_6;
		int32_t L_79;
		L_79 = CmceEngine_1_PKGen_m1008075863ECD43A05F5289345A0CAC73AB4E414(__this, L_74, L_75, L_76, L_77, L_78, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((int32_t)L_79) == ((int32_t)(-1))))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_80 = __this->___COND_BYTES;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_80);
		V_12 = L_81;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = V_12;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_83 = V_11;
		int32_t L_84 = __this->___GFBITS;
		int32_t L_85 = __this->___GFBITS;
		CmceEngine_1_ControlBitsFromPermutation_mCED55649ED47BB2E703124244164647A43786724(L_82, L_83, ((int64_t)L_84), ((int64_t)((int32_t)(1<<((int32_t)(L_85&((int32_t)31)))))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = V_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_87 = ___1_sk;
		int32_t L_88 = __this->___IRR_BYTES;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = V_12;
		NullCheck(L_89);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_86, 0, (RuntimeArray*)L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)40))), ((int32_t)(((RuntimeArray*)L_89)->max_length)), NULL);
		int32_t L_90 = V_3;
		int32_t L_91 = __this->___SYS_N;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_90, ((int32_t)(L_91/8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = V_2;
		int32_t L_93 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = ___1_sk;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = ___1_sk;
		NullCheck(L_95);
		int32_t L_96 = __this->___SYS_N;
		int32_t L_97 = __this->___SYS_N;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_92, L_93, (RuntimeArray*)L_94, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_95)->max_length)), ((int32_t)(L_96/8)))), ((int32_t)(L_97/8)), NULL);
		bool L_98 = __this->___usePivots;
		if (L_98)
		{
			goto IL_0224;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_99 = ___1_sk;
		Utils_Store8_m349F1D35320490FC8EE900DA1C878C7EFE706584(L_99, ((int32_t)32), (uint64_t)((int64_t)(uint64_t)((uint32_t)(-1))), NULL);
		return;
	}

IL_0224:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = ___1_sk;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_101 = V_6;
		NullCheck(L_101);
		int32_t L_102 = 0;
		int64_t L_103 = (int64_t)(L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		Utils_Store8_m349F1D35320490FC8EE900DA1C878C7EFE706584(L_100, ((int32_t)32), (uint64_t)L_103, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Syndrome_m197F7CC6D27B52EA3EAD54B37EA352C241F6F9A3_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_cipher_text, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_pk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_error_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->___SYS_N;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_0/8)));
		V_0 = L_1;
		V_3 = 0;
		int32_t L_2 = __this->___PK_NROWS;
		V_5 = ((int32_t)(L_2%8));
		V_1 = 0;
		goto IL_0026;
	}

IL_001e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_cipher_text;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)0);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0026:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = __this->___SYND_BYTES;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_001e;
		}
	}
	{
		V_1 = 0;
		goto IL_0156;
	}

IL_0036:
	{
		V_2 = 0;
		goto IL_0042;
	}

IL_003a:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (int16_t)0);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0042:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = __this->___SYS_N;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(L_12/8)))))
		{
			goto IL_003a;
		}
	}
	{
		V_2 = 0;
		goto IL_006d;
	}

IL_0051:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_13 = V_0;
		int32_t L_14 = __this->___SYS_N;
		int32_t L_15 = __this->___PK_ROW_BYTES;
		int32_t L_16 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___1_pk;
		int32_t L_18 = V_3;
		int32_t L_19 = V_2;
		NullCheck(L_17);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
		uint8_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(((int32_t)(L_14/8)), L_15)), L_16))), (int16_t)L_21);
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_006d:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = __this->___PK_ROW_BYTES;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0051;
		}
	}
	{
		bool L_25 = __this->___usePadding;
		if (!L_25)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_26 = __this->___SYS_N;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_26/8)), 1));
		goto IL_00bc;
	}

IL_008b:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_27 = V_0;
		int32_t L_28 = V_2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_29 = V_0;
		int32_t L_30 = V_2;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		int16_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		int32_t L_33 = V_5;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_34 = V_0;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		int16_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		int32_t L_38 = V_5;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int16_t)((int16_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_32&((int32_t)255)))<<((int32_t)(L_33&((int32_t)31)))))|((int32_t)(((int32_t)((int32_t)L_37&((int32_t)255)))>>((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_38))&((int32_t)31)))))))&((int32_t)255)))));
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
	}

IL_00bc:
	{
		int32_t L_40 = V_2;
		int32_t L_41 = __this->___SYS_N;
		int32_t L_42 = __this->___PK_ROW_BYTES;
		if ((((int32_t)L_40) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(L_41/8)), L_42)))))
		{
			goto IL_008b;
		}
	}

IL_00ce:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_43 = V_0;
		int32_t L_44 = V_1;
		NullCheck(L_43);
		int16_t* L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_44/8)))));
		int32_t L_46 = *((int16_t*)L_45);
		int32_t L_47 = V_1;
		*((int16_t*)L_45) = (int16_t)((int16_t)((int32_t)(L_46|(int32_t)((int16_t)((int32_t)(1<<((int32_t)(((int32_t)(L_47%8))&((int32_t)31)))))))));
		V_4 = (uint8_t)0;
		V_2 = 0;
		goto IL_00fe;
	}

IL_00ec:
	{
		uint8_t L_48 = V_4;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_49 = V_0;
		int32_t L_50 = V_2;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int16_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = ___2_error_vector;
		int32_t L_54 = V_2;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		uint8_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_48^((int32_t)(uint8_t)((int32_t)((int32_t)L_52&(int32_t)L_56))))));
		int32_t L_57 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_00fe:
	{
		int32_t L_58 = V_2;
		int32_t L_59 = __this->___SYS_N;
		if ((((int32_t)L_58) < ((int32_t)((int32_t)(L_59/8)))))
		{
			goto IL_00ec;
		}
	}
	{
		uint8_t L_60 = V_4;
		uint8_t L_61 = V_4;
		V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_60^((int32_t)(uint8_t)((int32_t)((int32_t)L_61>>4))))));
		uint8_t L_62 = V_4;
		uint8_t L_63 = V_4;
		V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_62^((int32_t)(uint8_t)((int32_t)((int32_t)L_63>>2))))));
		uint8_t L_64 = V_4;
		uint8_t L_65 = V_4;
		V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_64^((int32_t)(uint8_t)((int32_t)((int32_t)L_65>>1))))));
		uint8_t L_66 = V_4;
		V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_66&1)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = ___0_cipher_text;
		int32_t L_68 = V_1;
		NullCheck(L_67);
		uint8_t* L_69 = ((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_68/8)))));
		int32_t L_70 = *((uint8_t*)L_69);
		uint8_t L_71 = V_4;
		int32_t L_72 = V_1;
		*((int8_t*)L_69) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_70|((int32_t)(uint8_t)((int32_t)((int32_t)L_71<<((int32_t)(((int32_t)(L_72%8))&((int32_t)31)))))))));
		int32_t L_73 = V_3;
		int32_t L_74 = __this->___PK_ROW_BYTES;
		V_3 = ((int32_t)il2cpp_codegen_add(L_73, L_74));
		int32_t L_75 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_0156:
	{
		int32_t L_76 = V_1;
		int32_t L_77 = __this->___PK_NROWS;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_0036;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_GenerateErrorVector_mA51AFF3B23CF5C69D319E9F37744570573DAFE8D_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_error_vector, SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A* ___1_random, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_1 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int16_t V_12 = 0;
	int32_t V_13 = 0;
	int16_t V_14 = 0;
	{
		int32_t L_0 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_0, 2)));
		V_1 = L_1;
		int32_t L_2 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_2 = L_3;
		int32_t L_4 = __this->___SYS_T;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_3 = L_5;
	}

IL_0026:
	{
		bool L_6 = __this->___countErrorIndices;
		if (!L_6)
		{
			goto IL_00bd;
		}
	}
	{
		int32_t L_7 = __this->___SYS_T;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_7, 4)));
		V_0 = L_8;
		SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A* L_9 = ___1_random;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		NullCheck((Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)L_9);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)L_9, L_10);
		V_6 = 0;
		goto IL_0065;
	}

IL_004b:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_11 = V_1;
		int32_t L_12 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		int32_t L_14 = V_6;
		int32_t L_15 = __this->___GFMASK;
		uint16_t L_16;
		L_16 = Utils_LoadGF_mA1B4A520DC31A92DE9732CA2682C82A780BA6557(L_13, ((int32_t)il2cpp_codegen_multiply(L_14, 2)), L_15, NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint16_t)L_16);
		int32_t L_17 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0065:
	{
		int32_t L_18 = V_6;
		int32_t L_19 = __this->___SYS_T;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_19, 2)))))
		{
			goto IL_004b;
		}
	}
	{
		V_5 = 0;
		V_7 = 0;
		goto IL_0098;
	}

IL_0079:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_20 = V_1;
		int32_t L_21 = V_7;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		uint16_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24 = __this->___SYS_N;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_0092;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_25 = V_2;
		int32_t L_26 = V_5;
		int32_t L_27 = L_26;
		V_5 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_28 = V_1;
		int32_t L_29 = V_7;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		uint16_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (uint16_t)L_31);
	}

IL_0092:
	{
		int32_t L_32 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0098:
	{
		int32_t L_33 = V_7;
		int32_t L_34 = __this->___SYS_T;
		if ((((int32_t)L_33) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(L_34, 2)))))
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->___SYS_T;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0079;
		}
	}

IL_00ae:
	{
		int32_t L_37 = V_5;
		int32_t L_38 = __this->___SYS_T;
		if ((((int32_t)L_37) >= ((int32_t)L_38)))
		{
			goto IL_00fb;
		}
	}
	{
		goto IL_0026;
	}

IL_00bd:
	{
		int32_t L_39 = __this->___SYS_T;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_39, 2)));
		V_0 = L_40;
		SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A* L_41 = ___1_random;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_0;
		NullCheck((Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)L_41);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)L_41, L_42);
		V_8 = 0;
		goto IL_00f1;
	}

IL_00d7:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_43 = V_2;
		int32_t L_44 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_0;
		int32_t L_46 = V_8;
		int32_t L_47 = __this->___GFMASK;
		uint16_t L_48;
		L_48 = Utils_LoadGF_mA1B4A520DC31A92DE9732CA2682C82A780BA6557(L_45, ((int32_t)il2cpp_codegen_multiply(L_46, 2)), L_47, NULL);
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (uint16_t)L_48);
		int32_t L_49 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_00f1:
	{
		int32_t L_50 = V_8;
		int32_t L_51 = __this->___SYS_T;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_00d7;
		}
	}

IL_00fb:
	{
		V_4 = 0;
		V_9 = 1;
		goto IL_0129;
	}

IL_0103:
	{
		V_10 = 0;
		goto IL_011d;
	}

IL_0108:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_52 = V_2;
		int32_t L_53 = V_9;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		uint16_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_56 = V_2;
		int32_t L_57 = V_10;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		uint16_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		if ((!(((uint32_t)L_55) == ((uint32_t)L_59))))
		{
			goto IL_0117;
		}
	}
	{
		V_4 = 1;
		goto IL_0123;
	}

IL_0117:
	{
		int32_t L_60 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_011d:
	{
		int32_t L_61 = V_10;
		int32_t L_62 = V_9;
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_0108;
		}
	}

IL_0123:
	{
		int32_t L_63 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_0129:
	{
		int32_t L_64 = V_9;
		int32_t L_65 = __this->___SYS_T;
		if ((((int32_t)L_64) >= ((int32_t)L_65)))
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_66 = V_4;
		if ((!(((uint32_t)L_66) == ((uint32_t)1))))
		{
			goto IL_0103;
		}
	}

IL_0138:
	{
		int32_t L_67 = V_4;
		if (L_67)
		{
			goto IL_0026;
		}
	}
	{
		V_11 = 0;
		goto IL_015a;
	}

IL_0144:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = V_3;
		int32_t L_69 = V_11;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_70 = V_2;
		int32_t L_71 = V_11;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		uint16_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(L_69), (uint8_t)((int32_t)(uint8_t)((int32_t)(1<<((int32_t)(((int32_t)((int32_t)L_73&7))&((int32_t)31)))))));
		int32_t L_74 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_015a:
	{
		int32_t L_75 = V_11;
		int32_t L_76 = __this->___SYS_T;
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_0144;
		}
	}
	{
		V_12 = (int16_t)0;
		goto IL_01ba;
	}

IL_0169:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = ___0_error_vector;
		int16_t L_78 = V_12;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(L_78), (uint8_t)0);
		V_13 = 0;
		goto IL_01a9;
	}

IL_0173:
	{
		int16_t L_79 = V_12;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_80 = V_2;
		int32_t L_81 = V_13;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		uint16_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		uint8_t L_84;
		L_84 = CmceEngine_1_SameMask32_m2C001DB0125B61ED9DD14F69E460D47F0C1D8B97(L_79, ((int16_t)((int32_t)((int32_t)L_83>>3))), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_14 = (int16_t)L_84;
		int16_t L_85 = V_14;
		V_14 = ((int16_t)((int32_t)((int32_t)L_85&((int32_t)255))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = ___0_error_vector;
		int16_t L_87 = V_12;
		NullCheck(L_86);
		uint8_t* L_88 = ((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)));
		int32_t L_89 = *((uint8_t*)L_88);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = V_3;
		int32_t L_91 = V_13;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		uint8_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		int16_t L_94 = V_14;
		*((int8_t*)L_88) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_89|((int32_t)(uint8_t)((int32_t)((int32_t)L_93&(int32_t)L_94))))));
		int32_t L_95 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_95, 1));
	}

IL_01a9:
	{
		int32_t L_96 = V_13;
		int32_t L_97 = __this->___SYS_T;
		if ((((int32_t)L_96) < ((int32_t)L_97)))
		{
			goto IL_0173;
		}
	}
	{
		int16_t L_98 = V_12;
		V_12 = ((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_98, 1)));
	}

IL_01ba:
	{
		int16_t L_99 = V_12;
		int32_t L_100 = __this->___SYS_N;
		if ((((int32_t)L_99) < ((int32_t)((int32_t)(L_100/8)))))
		{
			goto IL_0169;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Encrypt_m094A43573CE5528DBC1789D7BDEDDDA508852368_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_cipher_text, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_pk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_error_vector, SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A* ___3_random, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___2_error_vector;
		SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A* L_1 = ___3_random;
		CmceEngine_1_GenerateErrorVector_mA51AFF3B23CF5C69D319E9F37744570573DAFE8D(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_cipher_text;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_pk;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___2_error_vector;
		CmceEngine_1_Syndrome_m197F7CC6D27B52EA3EAD54B37EA352C241F6F9A3(__this, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_KemEnc_m5231DAF8DD379BAB3C82ABB177EC606770A2D115_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_cipher_text, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A* ___3_random, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigestUtilities_t9010F44C7B0C26B12C62A83E3E437EC1273057AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___SYS_N;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_0/8)));
		V_0 = L_1;
		V_3 = 0;
		bool L_2 = __this->___usePadding;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___2_pk;
		int32_t L_4;
		L_4 = CmceEngine_1_CheckPKPadding_m8E1E48498F715F2FC1EB85586F8497FE8C7EDCBA(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_3 = L_4;
	}

IL_0020:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_cipher_text;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___2_pk;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A* L_8 = ___3_random;
		CmceEngine_1_Encrypt_m094A43573CE5528DBC1789D7BDEDDDA508852368(__this, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		il2cpp_codegen_runtime_class_init_inline(NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var);
		DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* L_9 = ((NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_StaticFields*)il2cpp_codegen_static_fields_for(NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var))->___IdShake256;
		il2cpp_codegen_runtime_class_init_inline(DigestUtilities_t9010F44C7B0C26B12C62A83E3E437EC1273057AE_il2cpp_TypeInfo_var);
		RuntimeObject* L_10;
		L_10 = DigestUtilities_GetDigest_m10A7032BD51289CBEA8D954FE70C8FE85E5051C0(L_9, NULL);
		RuntimeObject* L_11 = L_10;
		NullCheck(L_11);
		InterfaceActionInvoker1< uint8_t >::Invoke(3, IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var, L_11, (uint8_t)1);
		RuntimeObject* L_12 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		NullCheck(L_14);
		NullCheck(L_12);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var, L_12, L_13, 0, ((int32_t)(((RuntimeArray*)L_14)->max_length)));
		RuntimeObject* L_15 = L_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___0_cipher_text;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___0_cipher_text;
		NullCheck(L_17);
		NullCheck(L_15);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var, L_15, L_16, 0, ((int32_t)(((RuntimeArray*)L_17)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___1_key;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___1_key;
		NullCheck(L_19);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_15, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var)));
		int32_t L_20;
		L_20 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_15, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var)), L_18, 0, ((int32_t)(((RuntimeArray*)L_19)->max_length)));
		bool L_21 = __this->___usePadding;
		if (!L_21)
		{
			goto IL_00b0;
		}
	}
	{
		int32_t L_22 = V_3;
		V_1 = (uint8_t)((int32_t)(uint8_t)L_22);
		uint8_t L_23 = V_1;
		V_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_23^((int32_t)255))));
		V_2 = 0;
		goto IL_008b;
	}

IL_007a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___0_cipher_text;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		uint8_t* L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)));
		int32_t L_27 = *((uint8_t*)L_26);
		uint8_t L_28 = V_1;
		*((int8_t*)L_26) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_27&(int32_t)L_28)));
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_008b:
	{
		int32_t L_30 = V_2;
		int32_t L_31 = __this->___SYND_BYTES;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_007a;
		}
	}
	{
		V_2 = 0;
		goto IL_00a9;
	}

IL_0098:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___1_key;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		uint8_t* L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)));
		int32_t L_35 = *((uint8_t*)L_34);
		uint8_t L_36 = V_1;
		*((int8_t*)L_34) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_35&(int32_t)L_36)));
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00a9:
	{
		int32_t L_38 = V_2;
		if ((((int32_t)L_38) < ((int32_t)((int32_t)32))))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_39 = V_3;
		return L_39;
	}

IL_00b0:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_KemDec_mAA982E7C827D4BC0358FE6ADBF17164D2996F9F2_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_cipher_text, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_sk, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigestUtilities_t9010F44C7B0C26B12C62A83E3E437EC1273057AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int16_t V_5 = 0;
	{
		int32_t L_0 = __this->___SYS_N;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_0/8)));
		V_0 = L_1;
		int32_t L_2 = __this->___SYS_N;
		int32_t L_3 = __this->___SYND_BYTES;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(1, ((int32_t)(L_2/8)))), L_3)));
		V_1 = L_4;
		V_3 = 0;
		bool L_5 = __this->___usePadding;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_cipher_text;
		int32_t L_7;
		L_7 = CmceEngine_1_CheckCPadding_m525F23DC7A8D52045F2A876B687F328259F2BEF2(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_3 = L_7;
	}

IL_0037:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___2_sk;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___1_cipher_text;
		int32_t L_11;
		L_11 = CmceEngine_1_Decrypt_mC0E2701661460CA9F4934639B842CA38B664C698(__this, L_8, L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_5 = (int16_t)((int32_t)(uint8_t)L_11);
		int16_t L_12 = V_5;
		V_5 = ((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, 1)));
		int16_t L_13 = V_5;
		V_5 = ((int16_t)((int32_t)((int32_t)L_13>>8)));
		int16_t L_14 = V_5;
		V_5 = ((int16_t)((int32_t)((int32_t)L_14&((int32_t)255))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_1;
		int16_t L_16 = V_5;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_16&1))));
		V_2 = 0;
		goto IL_0091;
	}

IL_0068:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		int32_t L_18 = V_2;
		int16_t L_19 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___2_sk;
		int32_t L_21 = V_2;
		int32_t L_22 = __this->___IRR_BYTES;
		int32_t L_23 = __this->___COND_BYTES;
		NullCheck(L_20);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_21, ((int32_t)40))), L_22)), L_23));
		uint8_t L_25 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int16_t L_26 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_0;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		uint8_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(1, L_18))), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((~((int32_t)L_19)))&(int32_t)L_25))|((int32_t)((int32_t)L_26&(int32_t)L_30))))));
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0091:
	{
		int32_t L_32 = V_2;
		int32_t L_33 = __this->___SYS_N;
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(L_33/8)))))
		{
			goto IL_0068;
		}
	}
	{
		V_2 = 0;
		goto IL_00b5;
	}

IL_00a0:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_1;
		int32_t L_35 = __this->___SYS_N;
		int32_t L_36 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ___1_cipher_text;
		int32_t L_38 = V_2;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		uint8_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(1, ((int32_t)(L_35/8)))), L_36))), (uint8_t)L_40);
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00b5:
	{
		int32_t L_42 = V_2;
		int32_t L_43 = __this->___SYND_BYTES;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_00a0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var);
		DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* L_44 = ((NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_StaticFields*)il2cpp_codegen_static_fields_for(NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var))->___IdShake256;
		il2cpp_codegen_runtime_class_init_inline(DigestUtilities_t9010F44C7B0C26B12C62A83E3E437EC1273057AE_il2cpp_TypeInfo_var);
		RuntimeObject* L_45;
		L_45 = DigestUtilities_GetDigest_m10A7032BD51289CBEA8D954FE70C8FE85E5051C0(L_44, NULL);
		DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* L_46 = ((NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_StaticFields*)il2cpp_codegen_static_fields_for(NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var))->___IdShake256;
		RuntimeObject* L_47;
		L_47 = DigestUtilities_GetDigest_m10A7032BD51289CBEA8D954FE70C8FE85E5051C0(L_46, NULL);
		RuntimeObject* L_48 = L_47;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = V_1;
		NullCheck(L_50);
		NullCheck(L_48);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var, L_48, L_49, 0, ((int32_t)(((RuntimeArray*)L_50)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = ___0_key;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = ___0_key;
		NullCheck(L_52);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_48, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var)));
		int32_t L_53;
		L_53 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_48, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var)), L_51, 0, ((int32_t)(((RuntimeArray*)L_52)->max_length)));
		bool L_54 = __this->___usePadding;
		if (!L_54)
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_55 = V_3;
		V_4 = (uint8_t)((int32_t)(uint8_t)L_55);
		V_2 = 0;
		goto IL_0110;
	}

IL_00fe:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = ___0_key;
		int32_t L_57 = V_2;
		NullCheck(L_56);
		uint8_t* L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)));
		int32_t L_59 = *((uint8_t*)L_58);
		uint8_t L_60 = V_4;
		*((int8_t*)L_58) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_59|(int32_t)L_60)));
		int32_t L_61 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_0110:
	{
		int32_t L_62 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = ___0_key;
		NullCheck(L_63);
		if ((((int32_t)L_62) < ((int32_t)((int32_t)(((RuntimeArray*)L_63)->max_length)))))
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_64 = V_3;
		return L_64;
	}

IL_0118:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_Decrypt_mC0E2701661460CA9F4934639B842CA38B664C698_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_error_vector, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_sk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_cipher_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_0 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_1 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_2 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_3 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_4 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_5 = NULL;
	uint16_t V_6 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE V_15;
	memset((&V_15), 0, sizeof(V_15));
	int32_t V_16 = 0;
	{
		int32_t L_0 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_0, 1)));
		V_0 = L_1;
		int32_t L_2 = __this->___SYS_N;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_4, 2)));
		V_2 = L_5;
		int32_t L_6 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_7 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_6, 2)));
		V_3 = L_7;
		int32_t L_8 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_9 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_8, 1)));
		V_4 = L_9;
		int32_t L_10 = __this->___SYS_N;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_11 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_10);
		V_5 = L_11;
		int32_t L_12 = __this->___SYS_N;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_12/8)));
		V_7 = L_13;
		V_10 = 0;
		goto IL_0075;
	}

IL_0066:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_7;
		int32_t L_15 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___2_cipher_text;
		int32_t L_17 = V_10;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)L_19);
		int32_t L_20 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0075:
	{
		int32_t L_21 = V_10;
		int32_t L_22 = __this->___SYND_BYTES;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = __this->___SYND_BYTES;
		V_11 = L_23;
		goto IL_0095;
	}

IL_0089:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_7;
		int32_t L_25 = V_11;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint8_t)0);
		int32_t L_26 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0095:
	{
		int32_t L_27 = V_11;
		int32_t L_28 = __this->___SYS_N;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(L_28/8)))))
		{
			goto IL_0089;
		}
	}
	{
		V_12 = 0;
		goto IL_00c3;
	}

IL_00a6:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_29 = V_0;
		int32_t L_30 = V_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___1_sk;
		int32_t L_32 = V_12;
		int32_t L_33 = __this->___GFMASK;
		uint16_t L_34;
		L_34 = Utils_LoadGF_mA1B4A520DC31A92DE9732CA2682C82A780BA6557(L_31, ((int32_t)il2cpp_codegen_add(((int32_t)40), ((int32_t)il2cpp_codegen_multiply(L_32, 2)))), L_33, NULL);
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (uint16_t)L_34);
		int32_t L_35 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00c3:
	{
		int32_t L_36 = V_12;
		int32_t L_37 = __this->___SYS_T;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_00a6;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_38 = V_0;
		int32_t L_39 = __this->___SYS_T;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (uint16_t)1);
		Benes_t8AC0AA65ED1C71C2302BE761185972843084162A* L_40 = __this->___benes;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_41 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___1_sk;
		NullCheck(L_40);
		VirtualActionInvoker2< UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4, L_40, L_41, L_42);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_43 = V_2;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_44 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_45 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_7;
		CmceEngine_1_Synd_m92DF775BC3B218DE432CA3E2C4D8BD282006CC1B(__this, L_43, L_44, L_45, L_46, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_47 = V_4;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_48 = V_2;
		CmceEngine_1_BM_m3D0E78EA65A71A9568585B4AE7D5102757BF7D50(__this, L_47, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_49 = V_5;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_50 = V_4;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_51 = V_1;
		CmceEngine_1_Root_m92DE41D81FB783B3A0B8956FDA30CC11A2DDB8A0(__this, L_49, L_50, L_51, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		V_13 = 0;
		goto IL_0112;
	}

IL_0107:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = ___0_error_vector;
		int32_t L_53 = V_13;
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (uint8_t)0);
		int32_t L_54 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0112:
	{
		int32_t L_55 = V_13;
		int32_t L_56 = __this->___SYS_N;
		if ((((int32_t)L_55) < ((int32_t)((int32_t)(L_56/8)))))
		{
			goto IL_0107;
		}
	}
	{
		V_8 = 0;
		V_14 = 0;
		goto IL_016c;
	}

IL_0126:
	{
		GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE L_57 = __this->___gf;
		V_15 = L_57;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_58 = V_5;
		int32_t L_59 = V_14;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		uint16_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		uint16_t L_62;
		L_62 = GF13_GFIsZero_m830B451519E00F8D2DDC27689C83F0076BAC7E7E((&V_15), L_61, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		V_6 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_62&1)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = ___0_error_vector;
		int32_t L_64 = V_14;
		NullCheck(L_63);
		uint8_t* L_65 = ((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_64/8)))));
		int32_t L_66 = *((uint8_t*)L_65);
		uint16_t L_67 = V_6;
		int32_t L_68 = V_14;
		*((int8_t*)L_65) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_66|((int32_t)(uint8_t)((int32_t)((int32_t)L_67<<((int32_t)(((int32_t)(L_68%8))&((int32_t)31)))))))));
		int32_t L_69 = V_8;
		uint16_t L_70 = V_6;
		V_8 = ((int32_t)il2cpp_codegen_add(L_69, (int32_t)L_70));
		int32_t L_71 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_71, 1));
	}

IL_016c:
	{
		int32_t L_72 = V_14;
		int32_t L_73 = __this->___SYS_N;
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_0126;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_74 = V_3;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_75 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_76 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = ___0_error_vector;
		CmceEngine_1_Synd_m92DF775BC3B218DE432CA3E2C4D8BD282006CC1B(__this, L_74, L_75, L_76, L_77, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_78 = V_8;
		V_9 = L_78;
		int32_t L_79 = V_9;
		int32_t L_80 = __this->___SYS_T;
		V_9 = ((int32_t)(L_79^L_80));
		V_16 = 0;
		goto IL_01a8;
	}

IL_0194:
	{
		int32_t L_81 = V_9;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_82 = V_2;
		int32_t L_83 = V_16;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		uint16_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_86 = V_3;
		int32_t L_87 = V_16;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		uint16_t L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		V_9 = ((int32_t)(L_81|((int32_t)((int32_t)L_85^(int32_t)L_89))));
		int32_t L_90 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_90, 1));
	}

IL_01a8:
	{
		int32_t L_91 = V_16;
		int32_t L_92 = __this->___SYS_T;
		if ((((int32_t)L_91) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_92, 2)))))
		{
			goto IL_0194;
		}
	}
	{
		int32_t L_93 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		int32_t L_94 = V_9;
		V_9 = ((int32_t)(L_94>>((int32_t)15)));
		int32_t L_95 = V_9;
		V_9 = ((int32_t)(L_95&1));
		int32_t L_96 = V_9;
		int32_t L_97 = V_9;
		return ((int32_t)(L_97^1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_Min_m2BD653D8BD8164C0DF02750A696024B9A21F6995_gshared (uint16_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		uint16_t L_2 = ___0_a;
		return (int32_t)L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___1_b;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_BM_m3D0E78EA65A71A9568585B4AE7D5102757BF7D50_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	uint16_t V_2 = 0;
	uint16_t V_3 = 0;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_4 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_5 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_6 = NULL;
	uint16_t V_7 = 0;
	uint16_t V_8 = 0;
	uint16_t V_9 = 0;
	int32_t V_10 = 0;
	uint16_t V_11 = 0;
	uint32_t V_12 = 0;
	int32_t V_13 = 0;
	GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE V_14;
	memset((&V_14), 0, sizeof(V_14));
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	{
		V_0 = (uint16_t)0;
		V_1 = (uint16_t)0;
		int32_t L_0 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_0, 1)));
		V_4 = L_1;
		int32_t L_2 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_2, 1)));
		V_5 = L_3;
		int32_t L_4 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_4, 1)));
		V_6 = L_5;
		V_7 = (uint16_t)1;
		V_10 = 0;
		goto IL_004f;
	}

IL_0039:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = V_5;
		int32_t L_7 = V_10;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_8 = V_6;
		int32_t L_9 = V_10;
		int32_t L_10 = 0;
		V_11 = (uint16_t)L_10;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint16_t)L_10);
		uint16_t L_11 = V_11;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint16_t)L_11);
		int32_t L_12 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004f:
	{
		int32_t L_13 = V_10;
		int32_t L_14 = __this->___SYS_T;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)il2cpp_codegen_add(L_14, 1)))))
		{
			goto IL_0039;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_15 = V_6;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_16 = V_5;
		int32_t L_17 = 1;
		V_11 = (uint16_t)L_17;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint16_t)L_17);
		uint16_t L_18 = V_11;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint16_t)L_18);
		V_0 = (uint16_t)0;
		goto IL_01d3;
	}

IL_0070:
	{
		V_12 = (uint32_t)0;
		V_13 = 0;
		goto IL_00a3;
	}

IL_0078:
	{
		uint32_t L_19 = V_12;
		GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE L_20 = __this->___gf;
		V_14 = L_20;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_21 = V_5;
		int32_t L_22 = V_13;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		uint16_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_25 = ___1_s;
		uint16_t L_26 = V_0;
		int32_t L_27 = V_13;
		NullCheck(L_25);
		int32_t L_28 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, L_27));
		uint16_t L_29 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		uint32_t L_30;
		L_30 = GF13_GFMulExt_m0C9DF9941FDA3D950E90679324BD46DF55085D77((&V_14), L_24, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_12 = (uint32_t)((int32_t)((int32_t)L_19^(int32_t)L_30));
		int32_t L_31 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a3:
	{
		int32_t L_32 = V_13;
		uint16_t L_33 = V_0;
		int32_t L_34 = __this->___SYS_T;
		int32_t L_35;
		L_35 = CmceEngine_1_Min_m2BD653D8BD8164C0DF02750A696024B9A21F6995(L_33, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((((int32_t)L_32) <= ((int32_t)L_35)))
		{
			goto IL_0078;
		}
	}
	{
		GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE L_36 = __this->___gf;
		V_14 = L_36;
		uint32_t L_37 = V_12;
		uint16_t L_38;
		L_38 = GF13_GFReduce_m0BD1BD850AFD65F276D63E21FCE7A025A2EFFDDD((&V_14), L_37, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_8 = L_38;
		uint16_t L_39 = V_8;
		V_3 = L_39;
		uint16_t L_40 = V_3;
		V_3 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_40, 1)));
		uint16_t L_41 = V_3;
		V_3 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_41>>((int32_t)15))));
		uint16_t L_42 = V_3;
		V_3 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_42&1)));
		uint16_t L_43 = V_3;
		V_3 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_43, 1)));
		uint16_t L_44 = V_0;
		V_2 = L_44;
		uint16_t L_45 = V_2;
		uint16_t L_46 = V_1;
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_45, ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_multiply(2, (int32_t)L_46))))));
		uint16_t L_47 = V_2;
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_47>>((int32_t)15))));
		uint16_t L_48 = V_2;
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_48&1)));
		uint16_t L_49 = V_2;
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_49, 1)));
		uint16_t L_50 = V_2;
		uint16_t L_51 = V_3;
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_50&(int32_t)L_51)));
		V_15 = 0;
		goto IL_0118;
	}

IL_0108:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_52 = V_4;
		int32_t L_53 = V_15;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_54 = V_5;
		int32_t L_55 = V_15;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		uint16_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (uint16_t)L_57);
		int32_t L_58 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_0118:
	{
		int32_t L_59 = V_15;
		int32_t L_60 = __this->___SYS_T;
		if ((((int32_t)L_59) <= ((int32_t)L_60)))
		{
			goto IL_0108;
		}
	}
	{
		GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE L_61 = __this->___gf;
		V_14 = L_61;
		uint16_t L_62 = V_7;
		uint16_t L_63 = V_8;
		uint16_t L_64;
		L_64 = GF13_GFFrac_m7C8BC6B7F908BE35C8FD37603F1E4CC0377E8A6F((&V_14), L_62, L_63, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_9 = L_64;
		V_16 = 0;
		goto IL_0175;
	}

IL_0142:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_65 = V_5;
		int32_t L_66 = V_16;
		NullCheck(L_65);
		uint16_t* L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)));
		int32_t L_68 = *((uint16_t*)L_67);
		GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE L_69 = __this->___gf;
		V_14 = L_69;
		uint16_t L_70 = V_9;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_71 = V_6;
		int32_t L_72 = V_16;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		uint16_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		uint16_t L_75;
		L_75 = GF13_GFMul_mF1A76D1513BBF51707F8AE6E7E8D854D645924C6((&V_14), L_70, L_74, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		uint16_t L_76 = V_3;
		*((int16_t*)L_67) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_68^((int32_t)(uint16_t)((int32_t)((int32_t)L_75&(int32_t)L_76))))));
		int32_t L_77 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_0175:
	{
		int32_t L_78 = V_16;
		int32_t L_79 = __this->___SYS_T;
		if ((((int32_t)L_78) <= ((int32_t)L_79)))
		{
			goto IL_0142;
		}
	}
	{
		uint16_t L_80 = V_1;
		uint16_t L_81 = V_2;
		uint16_t L_82 = V_0;
		uint16_t L_83 = V_1;
		uint16_t L_84 = V_2;
		V_1 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_80&((~((int32_t)L_81)))))|((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_82, 1)), (int32_t)L_83))&(int32_t)L_84)))));
		int32_t L_85 = __this->___SYS_T;
		V_17 = ((int32_t)il2cpp_codegen_subtract(L_85, 1));
		goto IL_01b7;
	}

IL_0199:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_86 = V_6;
		int32_t L_87 = V_17;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_88 = V_6;
		int32_t L_89 = V_17;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		uint16_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		uint16_t L_92 = V_2;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_93 = V_4;
		int32_t L_94 = V_17;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		uint16_t L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		uint16_t L_97 = V_2;
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_87, 1))), (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_91&((~((int32_t)L_92)))))|((int32_t)((int32_t)L_96&(int32_t)L_97))))));
		int32_t L_98 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_subtract(L_98, 1));
	}

IL_01b7:
	{
		int32_t L_99 = V_17;
		if ((((int32_t)L_99) >= ((int32_t)0)))
		{
			goto IL_0199;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_100 = V_6;
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint16_t)0);
		uint16_t L_101 = V_7;
		uint16_t L_102 = V_2;
		uint16_t L_103 = V_8;
		uint16_t L_104 = V_2;
		V_7 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_101&((~((int32_t)L_102)))))|((int32_t)((int32_t)L_103&(int32_t)L_104)))));
		uint16_t L_105 = V_0;
		V_0 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_105, 1)));
	}

IL_01d3:
	{
		uint16_t L_106 = V_0;
		int32_t L_107 = __this->___SYS_T;
		if ((((int32_t)L_106) < ((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_107)))))
		{
			goto IL_0070;
		}
	}
	{
		V_18 = 0;
		goto IL_01fc;
	}

IL_01e6:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_108 = ___0_output;
		int32_t L_109 = V_18;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_110 = V_5;
		int32_t L_111 = __this->___SYS_T;
		int32_t L_112 = V_18;
		NullCheck(L_110);
		int32_t L_113 = ((int32_t)il2cpp_codegen_subtract(L_111, L_112));
		uint16_t L_114 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(L_109), (uint16_t)L_114);
		int32_t L_115 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_01fc:
	{
		int32_t L_116 = V_18;
		int32_t L_117 = __this->___SYS_T;
		if ((((int32_t)L_116) <= ((int32_t)L_117)))
		{
			goto IL_01e6;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Synd_m92DF775BC3B218DE432CA3E2C4D8BD282006CC1B_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_f, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___2_L, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_r, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	uint16_t V_2 = 0;
	uint16_t V_3 = 0;
	GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE V_4;
	memset((&V_4), 0, sizeof(V_4));
	GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	uint16_t V_8 = 0;
	uint16_t V_9 = 0;
	uint16_t V_10 = 0;
	uint16_t V_11 = 0;
	uint16_t V_12 = 0;
	int32_t V_13 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___3_r;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_2&1)));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = ___2_L;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint16_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = ___1_f;
		uint16_t L_7 = V_1;
		uint16_t L_8;
		L_8 = CmceEngine_1_Eval_mF3627DF74FEFA3335867A7FB11A9CB645993D250(__this, L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		V_2 = L_8;
		GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE L_9 = __this->___gf;
		V_4 = L_9;
		GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE L_10 = __this->___gf;
		V_5 = L_10;
		uint16_t L_11 = V_2;
		uint16_t L_12;
		L_12 = GF13_GFSq_m51637ABFCF6009E6D7D9F865A9DBA1D3802D4F38((&V_5), L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		uint16_t L_13;
		L_13 = GF13_GFInv_m0B5597C7AC9581BD5EBCD0EF92394C88B9626176((&V_4), L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		uint16_t L_14 = V_0;
		V_3 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_13&((int32_t)il2cpp_codegen_subtract(0, (int32_t)L_14)))));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_15 = ___0_output;
		uint16_t L_16 = V_3;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint16_t)L_16);
		V_6 = 1;
		goto IL_0072;
	}

IL_004f:
	{
		GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE L_17 = __this->___gf;
		V_4 = L_17;
		uint16_t L_18 = V_3;
		uint16_t L_19 = V_1;
		uint16_t L_20;
		L_20 = GF13_GFMul_mF1A76D1513BBF51707F8AE6E7E8D854D645924C6((&V_4), L_18, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_3 = L_20;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_21 = ___0_output;
		int32_t L_22 = V_6;
		uint16_t L_23 = V_3;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (uint16_t)L_23);
		int32_t L_24 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0072:
	{
		int32_t L_25 = V_6;
		int32_t L_26 = __this->___SYS_T;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_26)))))
		{
			goto IL_004f;
		}
	}
	{
		V_7 = 1;
		goto IL_0149;
	}

IL_0086:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___3_r;
		int32_t L_28 = V_7;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)(L_28/8));
		uint8_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31 = V_7;
		V_8 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_30>>((int32_t)(((int32_t)(L_31%8))&((int32_t)31)))))&1)));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_32 = ___2_L;
		int32_t L_33 = V_7;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		uint16_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_9 = L_35;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_36 = ___1_f;
		uint16_t L_37 = V_9;
		uint16_t L_38;
		L_38 = CmceEngine_1_Eval_mF3627DF74FEFA3335867A7FB11A9CB645993D250(__this, L_36, L_37, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		V_10 = L_38;
		GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE L_39 = __this->___gf;
		V_4 = L_39;
		GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE L_40 = __this->___gf;
		V_5 = L_40;
		uint16_t L_41 = V_10;
		uint16_t L_42;
		L_42 = GF13_GFSq_m51637ABFCF6009E6D7D9F865A9DBA1D3802D4F38((&V_5), L_41, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		uint16_t L_43;
		L_43 = GF13_GFInv_m0B5597C7AC9581BD5EBCD0EF92394C88B9626176((&V_4), L_42, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		V_11 = L_43;
		GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE L_44 = __this->___gf;
		V_4 = L_44;
		uint16_t L_45 = V_11;
		uint16_t L_46 = V_8;
		uint16_t L_47;
		L_47 = GF13_GFMul_mF1A76D1513BBF51707F8AE6E7E8D854D645924C6((&V_4), L_45, L_46, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_12 = L_47;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_48 = ___0_output;
		NullCheck(L_48);
		uint16_t* L_49 = ((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_50 = *((uint16_t*)L_49);
		uint16_t L_51 = V_12;
		*((int16_t*)L_49) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_50^(int32_t)L_51)));
		V_13 = 1;
		goto IL_0137;
	}

IL_0107:
	{
		GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE L_52 = __this->___gf;
		V_4 = L_52;
		uint16_t L_53 = V_12;
		uint16_t L_54 = V_9;
		uint16_t L_55;
		L_55 = GF13_GFMul_mF1A76D1513BBF51707F8AE6E7E8D854D645924C6((&V_4), L_53, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_12 = L_55;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_56 = ___0_output;
		int32_t L_57 = V_13;
		NullCheck(L_56);
		uint16_t* L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)));
		int32_t L_59 = *((uint16_t*)L_58);
		uint16_t L_60 = V_12;
		*((int16_t*)L_58) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_59^(int32_t)L_60)));
		int32_t L_61 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_0137:
	{
		int32_t L_62 = V_13;
		int32_t L_63 = __this->___SYS_T;
		if ((((int32_t)L_62) < ((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_63)))))
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_64 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_0149:
	{
		int32_t L_65 = V_7;
		int32_t L_66 = __this->___SYS_N;
		if ((((int32_t)L_65) < ((int32_t)L_66)))
		{
			goto IL_0086;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_MovColumns_mFE3E6DD43905E83F18515A5D51B47F6511313D8F_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___0_mat, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_pi, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___2_pivots, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_6 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_7 = NULL;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_12 = NULL;
	int32_t V_13 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		V_6 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_7 = L_1;
		V_11 = (uint64_t)((int64_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		V_12 = L_2;
		int32_t L_3 = __this->___PK_NROWS;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_3, ((int32_t)32)));
		int32_t L_4 = V_4;
		V_3 = ((int32_t)(L_4/8));
		int32_t L_5 = V_4;
		V_5 = ((int32_t)(L_5%8));
		bool L_6 = __this->___usePadding;
		if (!L_6)
		{
			goto IL_00a3;
		}
	}
	{
		V_0 = 0;
		goto IL_009c;
	}

IL_0041:
	{
		V_1 = 0;
		goto IL_0057;
	}

IL_0045:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_12;
		int32_t L_8 = V_1;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_9 = ___0_mat;
		int32_t L_10 = V_4;
		int32_t L_11 = V_0;
		NullCheck(L_9);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_10, L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14 = V_3;
		int32_t L_15 = V_1;
		NullCheck(L_13);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_14, L_15));
		uint8_t L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)L_17);
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0057:
	{
		int32_t L_19 = V_1;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)9))))
		{
			goto IL_0045;
		}
	}
	{
		V_1 = 0;
		goto IL_0088;
	}

IL_0060:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_12;
		int32_t L_21 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_12;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_12;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		uint8_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31 = V_5;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_25&((int32_t)255)))>>((int32_t)(L_26&((int32_t)31)))))|((int32_t)((int32_t)L_30<<((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_31))&((int32_t)31)))))))));
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0088:
	{
		int32_t L_33 = V_1;
		if ((((int32_t)L_33) < ((int32_t)8)))
		{
			goto IL_0060;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_34 = V_6;
		int32_t L_35 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_12;
		uint64_t L_37;
		L_37 = Utils_Load8_m0720549A7D3C2F9F8E9297A699B9CA3DFB761D28(L_36, 0, NULL);
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (uint64_t)L_37);
		int32_t L_38 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_009c:
	{
		int32_t L_39 = V_0;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)32))))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_00c0;
	}

IL_00a3:
	{
		V_0 = 0;
		goto IL_00bb;
	}

IL_00a7:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_40 = V_6;
		int32_t L_41 = V_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_42 = ___0_mat;
		int32_t L_43 = V_4;
		int32_t L_44 = V_0;
		NullCheck(L_42);
		int32_t L_45 = ((int32_t)il2cpp_codegen_add(L_43, L_44));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		int32_t L_47 = V_3;
		uint64_t L_48;
		L_48 = Utils_Load8_m0720549A7D3C2F9F8E9297A699B9CA3DFB761D28(L_46, L_47, NULL);
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (uint64_t)L_48);
		int32_t L_49 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_00bb:
	{
		int32_t L_50 = V_0;
		if ((((int32_t)L_50) < ((int32_t)((int32_t)32))))
		{
			goto IL_00a7;
		}
	}

IL_00c0:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_51 = ___2_pivots;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)0));
		V_0 = 0;
		goto IL_0186;
	}

IL_00cc:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_52 = V_6;
		int32_t L_53 = V_0;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		int64_t L_55 = (int64_t)(L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_8 = (uint64_t)L_55;
		int32_t L_56 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_00e5;
	}

IL_00d8:
	{
		uint64_t L_57 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_58 = V_6;
		int32_t L_59 = V_1;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		int64_t L_61 = (int64_t)(L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_8 = (uint64_t)((int64_t)((int64_t)L_57|L_61));
		int32_t L_62 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_00e5:
	{
		int32_t L_63 = V_1;
		if ((((int32_t)L_63) < ((int32_t)((int32_t)32))))
		{
			goto IL_00d8;
		}
	}
	{
		uint64_t L_64 = V_8;
		if (L_64)
		{
			goto IL_00f0;
		}
	}
	{
		return (-1);
	}

IL_00f0:
	{
		uint64_t L_65 = V_8;
		int32_t L_66;
		L_66 = CmceEngine_1_Ctz_m9BDE20EC72E5CFC60242632EE9DB790DB2FCAA71(L_65, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_13 = L_66;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = V_7;
		int32_t L_68 = V_0;
		int32_t L_69 = V_13;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (int32_t)L_69);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_70 = ___2_pivots;
		NullCheck(L_70);
		uint64_t* L_71 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int64_t L_72 = *((int64_t*)L_71);
		uint64_t L_73 = V_11;
		int32_t L_74 = V_13;
		*((int64_t*)L_71) = (int64_t)((int64_t)(L_72|((int64_t)((int64_t)L_73<<((int32_t)(L_74&((int32_t)63)))))));
		int32_t L_75 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_0145;
	}

IL_0118:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_76 = V_6;
		int32_t L_77 = V_0;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		int64_t L_79 = (int64_t)(L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		int32_t L_80 = V_13;
		V_10 = (uint64_t)((int64_t)(((int64_t)((uint64_t)L_79>>((int32_t)(L_80&((int32_t)63)))))&((int64_t)1)));
		uint64_t L_81 = V_10;
		V_10 = (uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_81, ((int64_t)1)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_82 = V_6;
		int32_t L_83 = V_0;
		NullCheck(L_82);
		uint64_t* L_84 = ((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_83)));
		int64_t L_85 = *((int64_t*)L_84);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_86 = V_6;
		int32_t L_87 = V_1;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		int64_t L_89 = (int64_t)(L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		uint64_t L_90 = V_10;
		*((int64_t*)L_84) = (int64_t)((int64_t)(L_85^((int64_t)(L_89&(int64_t)L_90))));
		int32_t L_91 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_91, 1));
	}

IL_0145:
	{
		int32_t L_92 = V_1;
		if ((((int32_t)L_92) < ((int32_t)((int32_t)32))))
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_93 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_93, 1));
		goto IL_017d;
	}

IL_0150:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_94 = V_6;
		int32_t L_95 = V_1;
		NullCheck(L_94);
		int32_t L_96 = L_95;
		int64_t L_97 = (int64_t)(L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		int32_t L_98 = V_13;
		V_10 = (uint64_t)((int64_t)(((int64_t)((uint64_t)L_97>>((int32_t)(L_98&((int32_t)63)))))&((int64_t)1)));
		uint64_t L_99 = V_10;
		V_10 = (uint64_t)((int64_t)il2cpp_codegen_subtract(((int64_t)0), (int64_t)L_99));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_100 = V_6;
		int32_t L_101 = V_1;
		NullCheck(L_100);
		uint64_t* L_102 = ((L_100)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_101)));
		int64_t L_103 = *((int64_t*)L_102);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_104 = V_6;
		int32_t L_105 = V_0;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		int64_t L_107 = (int64_t)(L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		uint64_t L_108 = V_10;
		*((int64_t*)L_102) = (int64_t)((int64_t)(L_103^((int64_t)(L_107&(int64_t)L_108))));
		int32_t L_109 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_109, 1));
	}

IL_017d:
	{
		int32_t L_110 = V_1;
		if ((((int32_t)L_110) < ((int32_t)((int32_t)32))))
		{
			goto IL_0150;
		}
	}
	{
		int32_t L_111 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0186:
	{
		int32_t L_112 = V_0;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)32))))
		{
			goto IL_00cc;
		}
	}
	{
		V_1 = 0;
		goto IL_01ea;
	}

IL_0192:
	{
		int32_t L_113 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_113, 1));
		goto IL_01e1;
	}

IL_0198:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_114 = ___1_pi;
		int32_t L_115 = V_4;
		int32_t L_116 = V_1;
		NullCheck(L_114);
		int32_t L_117 = ((int32_t)il2cpp_codegen_add(L_115, L_116));
		uint16_t L_118 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_119 = ___1_pi;
		int32_t L_120 = V_4;
		int32_t L_121 = V_2;
		NullCheck(L_119);
		int32_t L_122 = ((int32_t)il2cpp_codegen_add(L_120, L_121));
		uint16_t L_123 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		V_9 = (uint64_t)((int64_t)((int32_t)((int32_t)L_118^(int32_t)L_123)));
		uint64_t L_124 = V_9;
		int32_t L_125 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_126 = V_7;
		int32_t L_127 = V_1;
		NullCheck(L_126);
		int32_t L_128 = L_127;
		int32_t L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		uint64_t L_130;
		L_130 = CmceEngine_1_SameMask64_m2BABE0252D78058A922A03B0B6EE6AA873460812((uint16_t)((int32_t)(uint16_t)L_125), (uint16_t)((int32_t)(uint16_t)L_129), il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_9 = (uint64_t)((int64_t)((int64_t)L_124&(int64_t)L_130));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_131 = ___1_pi;
		int32_t L_132 = V_4;
		int32_t L_133 = V_1;
		NullCheck(L_131);
		uint16_t* L_134 = ((L_131)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_132, L_133)))));
		int32_t L_135 = *((uint16_t*)L_134);
		uint64_t L_136 = V_9;
		*((int16_t*)L_134) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_135^((int32_t)(uint16_t)L_136))));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_137 = ___1_pi;
		int32_t L_138 = V_4;
		int32_t L_139 = V_2;
		NullCheck(L_137);
		uint16_t* L_140 = ((L_137)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_138, L_139)))));
		int32_t L_141 = *((uint16_t*)L_140);
		uint64_t L_142 = V_9;
		*((int16_t*)L_140) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_141^((int32_t)(uint16_t)L_142))));
		int32_t L_143 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_01e1:
	{
		int32_t L_144 = V_2;
		if ((((int32_t)L_144) < ((int32_t)((int32_t)64))))
		{
			goto IL_0198;
		}
	}
	{
		int32_t L_145 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_145, 1));
	}

IL_01ea:
	{
		int32_t L_146 = V_1;
		if ((((int32_t)L_146) < ((int32_t)((int32_t)32))))
		{
			goto IL_0192;
		}
	}
	{
		V_0 = 0;
		goto IL_0369;
	}

IL_01f6:
	{
		bool L_147 = __this->___usePadding;
		if (!L_147)
		{
			goto IL_0252;
		}
	}
	{
		V_2 = 0;
		goto IL_0211;
	}

IL_0202:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_148 = V_12;
		int32_t L_149 = V_2;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_150 = ___0_mat;
		int32_t L_151 = V_0;
		NullCheck(L_150);
		int32_t L_152 = L_151;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_153 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		int32_t L_154 = V_3;
		int32_t L_155 = V_2;
		NullCheck(L_153);
		int32_t L_156 = ((int32_t)il2cpp_codegen_add(L_154, L_155));
		uint8_t L_157 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		NullCheck(L_148);
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(L_149), (uint8_t)L_157);
		int32_t L_158 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_158, 1));
	}

IL_0211:
	{
		int32_t L_159 = V_2;
		if ((((int32_t)L_159) < ((int32_t)((int32_t)9))))
		{
			goto IL_0202;
		}
	}
	{
		V_2 = 0;
		goto IL_0242;
	}

IL_021a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_160 = V_12;
		int32_t L_161 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_162 = V_12;
		int32_t L_163 = V_2;
		NullCheck(L_162);
		int32_t L_164 = L_163;
		uint8_t L_165 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		int32_t L_166 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_167 = V_12;
		int32_t L_168 = V_2;
		NullCheck(L_167);
		int32_t L_169 = ((int32_t)il2cpp_codegen_add(L_168, 1));
		uint8_t L_170 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		int32_t L_171 = V_5;
		NullCheck(L_160);
		(L_160)->SetAt(static_cast<il2cpp_array_size_t>(L_161), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_165&((int32_t)255)))>>((int32_t)(L_166&((int32_t)31)))))|((int32_t)((int32_t)L_170<<((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_171))&((int32_t)31)))))))));
		int32_t L_172 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_172, 1));
	}

IL_0242:
	{
		int32_t L_173 = V_2;
		if ((((int32_t)L_173) < ((int32_t)8)))
		{
			goto IL_021a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_174 = V_12;
		uint64_t L_175;
		L_175 = Utils_Load8_m0720549A7D3C2F9F8E9297A699B9CA3DFB761D28(L_174, 0, NULL);
		V_8 = L_175;
		goto IL_025d;
	}

IL_0252:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_176 = ___0_mat;
		int32_t L_177 = V_0;
		NullCheck(L_176);
		int32_t L_178 = L_177;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_179 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		int32_t L_180 = V_3;
		uint64_t L_181;
		L_181 = Utils_Load8_m0720549A7D3C2F9F8E9297A699B9CA3DFB761D28(L_179, L_180, NULL);
		V_8 = L_181;
	}

IL_025d:
	{
		V_1 = 0;
		goto IL_029f;
	}

IL_0261:
	{
		uint64_t L_182 = V_8;
		int32_t L_183 = V_1;
		V_9 = (uint64_t)((int64_t)((uint64_t)L_182>>((int32_t)(L_183&((int32_t)63)))));
		uint64_t L_184 = V_9;
		uint64_t L_185 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_186 = V_7;
		int32_t L_187 = V_1;
		NullCheck(L_186);
		int32_t L_188 = L_187;
		int32_t L_189 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		V_9 = (uint64_t)((int64_t)((int64_t)L_184^((int64_t)((uint64_t)L_185>>((int32_t)(L_189&((int32_t)63)))))));
		uint64_t L_190 = V_9;
		V_9 = (uint64_t)((int64_t)((int64_t)L_190&((int64_t)1)));
		uint64_t L_191 = V_8;
		uint64_t L_192 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_193 = V_7;
		int32_t L_194 = V_1;
		NullCheck(L_193);
		int32_t L_195 = L_194;
		int32_t L_196 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		V_8 = (uint64_t)((int64_t)((int64_t)L_191^((int64_t)((int64_t)L_192<<((int32_t)(L_196&((int32_t)63)))))));
		uint64_t L_197 = V_8;
		uint64_t L_198 = V_9;
		int32_t L_199 = V_1;
		V_8 = (uint64_t)((int64_t)((int64_t)L_197^((int64_t)((int64_t)L_198<<((int32_t)(L_199&((int32_t)63)))))));
		int32_t L_200 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_200, 1));
	}

IL_029f:
	{
		int32_t L_201 = V_1;
		if ((((int32_t)L_201) < ((int32_t)((int32_t)32))))
		{
			goto IL_0261;
		}
	}
	{
		bool L_202 = __this->___usePadding;
		if (!L_202)
		{
			goto IL_035a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_203 = V_12;
		uint64_t L_204 = V_8;
		Utils_Store8_m349F1D35320490FC8EE900DA1C878C7EFE706584(L_203, 0, L_204, NULL);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_205 = ___0_mat;
		int32_t L_206 = V_0;
		NullCheck(L_205);
		int32_t L_207 = L_206;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_208 = (L_205)->GetAt(static_cast<il2cpp_array_size_t>(L_207));
		int32_t L_209 = V_3;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_210 = ___0_mat;
		int32_t L_211 = V_0;
		NullCheck(L_210);
		int32_t L_212 = L_211;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_213 = (L_210)->GetAt(static_cast<il2cpp_array_size_t>(L_212));
		int32_t L_214 = V_3;
		NullCheck(L_213);
		int32_t L_215 = ((int32_t)il2cpp_codegen_add(L_214, 8));
		uint8_t L_216 = (L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_215));
		int32_t L_217 = V_5;
		int32_t L_218 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_219 = V_12;
		NullCheck(L_219);
		int32_t L_220 = 7;
		uint8_t L_221 = (L_219)->GetAt(static_cast<il2cpp_array_size_t>(L_220));
		int32_t L_222 = V_5;
		NullCheck(L_208);
		(L_208)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_209, 8))), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_216&((int32_t)255)))>>((int32_t)(L_217&((int32_t)31)))))<<((int32_t)(L_218&((int32_t)31)))))|((int32_t)(((int32_t)((int32_t)L_221&((int32_t)255)))>>((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_222))&((int32_t)31)))))))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_223 = ___0_mat;
		int32_t L_224 = V_0;
		NullCheck(L_223);
		int32_t L_225 = L_224;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_226 = (L_223)->GetAt(static_cast<il2cpp_array_size_t>(L_225));
		int32_t L_227 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_228 = V_12;
		NullCheck(L_228);
		int32_t L_229 = 0;
		uint8_t L_230 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		int32_t L_231 = V_5;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_232 = ___0_mat;
		int32_t L_233 = V_0;
		NullCheck(L_232);
		int32_t L_234 = L_233;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_235 = (L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_234));
		int32_t L_236 = V_3;
		NullCheck(L_235);
		int32_t L_237 = L_236;
		uint8_t L_238 = (L_235)->GetAt(static_cast<il2cpp_array_size_t>(L_237));
		int32_t L_239 = V_5;
		int32_t L_240 = V_5;
		NullCheck(L_226);
		(L_226)->SetAt(static_cast<il2cpp_array_size_t>(L_227), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_230&((int32_t)255)))<<((int32_t)(L_231&((int32_t)31)))))|((int32_t)(((int32_t)(((int32_t)((int32_t)L_238&((int32_t)255)))<<((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_239))&((int32_t)31)))))>>((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_240))&((int32_t)31)))))))));
		V_2 = 7;
		goto IL_0354;
	}

IL_0323:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_241 = ___0_mat;
		int32_t L_242 = V_0;
		NullCheck(L_241);
		int32_t L_243 = L_242;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_244 = (L_241)->GetAt(static_cast<il2cpp_array_size_t>(L_243));
		int32_t L_245 = V_3;
		int32_t L_246 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_247 = V_12;
		int32_t L_248 = V_2;
		NullCheck(L_247);
		int32_t L_249 = L_248;
		uint8_t L_250 = (L_247)->GetAt(static_cast<il2cpp_array_size_t>(L_249));
		int32_t L_251 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_252 = V_12;
		int32_t L_253 = V_2;
		NullCheck(L_252);
		int32_t L_254 = ((int32_t)il2cpp_codegen_subtract(L_253, 1));
		uint8_t L_255 = (L_252)->GetAt(static_cast<il2cpp_array_size_t>(L_254));
		int32_t L_256 = V_5;
		NullCheck(L_244);
		(L_244)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_245, L_246))), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_250&((int32_t)255)))<<((int32_t)(L_251&((int32_t)31)))))|((int32_t)(((int32_t)((int32_t)L_255&((int32_t)255)))>>((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_256))&((int32_t)31)))))))));
		int32_t L_257 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_257, 1));
	}

IL_0354:
	{
		int32_t L_258 = V_2;
		if ((((int32_t)L_258) >= ((int32_t)1)))
		{
			goto IL_0323;
		}
	}
	{
		goto IL_0365;
	}

IL_035a:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_259 = ___0_mat;
		int32_t L_260 = V_0;
		NullCheck(L_259);
		int32_t L_261 = L_260;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_262 = (L_259)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		int32_t L_263 = V_3;
		uint64_t L_264 = V_8;
		Utils_Store8_m349F1D35320490FC8EE900DA1C878C7EFE706584(L_262, L_263, L_264, NULL);
	}

IL_0365:
	{
		int32_t L_265 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_265, 1));
	}

IL_0369:
	{
		int32_t L_266 = V_0;
		int32_t L_267 = __this->___PK_NROWS;
		if ((((int32_t)L_266) < ((int32_t)L_267)))
		{
			goto IL_01f6;
		}
	}
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_Ctz_m9BDE20EC72E5CFC60242632EE9DB790DB2FCAA71_gshared (uint64_t ___0_input, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_0 = (uint64_t)((int64_t)72340172838076673LL);
		V_1 = (uint64_t)((int64_t)0);
		uint64_t L_0 = ___0_input;
		V_2 = (uint64_t)((~((int64_t)L_0)));
		V_5 = 0;
		goto IL_0029;
	}

IL_0015:
	{
		uint64_t L_1 = V_0;
		uint64_t L_2 = V_2;
		int32_t L_3 = V_5;
		V_0 = (uint64_t)((int64_t)((int64_t)L_1&((int64_t)((uint64_t)L_2>>((int32_t)(L_3&((int32_t)63)))))));
		uint64_t L_4 = V_1;
		uint64_t L_5 = V_0;
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_4, (int64_t)L_5));
		int32_t L_6 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0029:
	{
		int32_t L_7 = V_5;
		if ((((int32_t)L_7) < ((int32_t)8)))
		{
			goto IL_0015;
		}
	}
	{
		uint64_t L_8 = V_1;
		V_3 = (uint64_t)((int64_t)((int64_t)L_8&((int64_t)578721382704613384LL)));
		uint64_t L_9 = V_3;
		uint64_t L_10 = V_3;
		V_3 = (uint64_t)((int64_t)((int64_t)L_9|((int64_t)((uint64_t)L_10>>1))));
		uint64_t L_11 = V_3;
		uint64_t L_12 = V_3;
		V_3 = (uint64_t)((int64_t)((int64_t)L_11|((int64_t)((uint64_t)L_12>>2))));
		uint64_t L_13 = V_1;
		V_4 = L_13;
		uint64_t L_14 = V_1;
		V_1 = (uint64_t)((int64_t)((uint64_t)L_14>>8));
		uint64_t L_15 = V_4;
		uint64_t L_16 = V_1;
		uint64_t L_17 = V_3;
		V_4 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_15, ((int64_t)((int64_t)L_16&(int64_t)L_17))));
		V_6 = 2;
		goto IL_0072;
	}

IL_005a:
	{
		uint64_t L_18 = V_3;
		uint64_t L_19 = V_3;
		V_3 = (uint64_t)((int64_t)((int64_t)L_18&((int64_t)((uint64_t)L_19>>8))));
		uint64_t L_20 = V_1;
		V_1 = (uint64_t)((int64_t)((uint64_t)L_20>>8));
		uint64_t L_21 = V_4;
		uint64_t L_22 = V_1;
		uint64_t L_23 = V_3;
		V_4 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)((int64_t)L_22&(int64_t)L_23))));
		int32_t L_24 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0072:
	{
		int32_t L_25 = V_6;
		if ((((int32_t)L_25) < ((int32_t)8)))
		{
			goto IL_005a;
		}
	}
	{
		uint64_t L_26 = V_4;
		return ((int32_t)(((int32_t)L_26)&((int32_t)255)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CmceEngine_1_SameMask64_m2BABE0252D78058A922A03B0B6EE6AA873460812_gshared (uint16_t ___0_x, uint16_t ___1_y, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_x;
		uint16_t L_1 = ___1_y;
		return (uint64_t)((int64_t)(((int64_t)il2cpp_codegen_subtract(((int64_t)((int32_t)((int32_t)L_0^(int32_t)L_1))), ((int64_t)1)))>>((int32_t)63)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t CmceEngine_1_SameMask32_m2C001DB0125B61ED9DD14F69E460D47F0C1D8B97_gshared (int16_t ___0_x, int16_t ___1_y, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_x;
		int16_t L_1 = ___1_y;
		return (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)((int32_t)L_0^(int32_t)L_1)), 1))>>((int32_t)31))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Layer_m7620628460556DC76B3EA9F85EB3A1AF8F39D0D3_gshared (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_p, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_output, int32_t ___2_ptrIndex, int32_t ___3_s, int32_t ___4_n, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___3_s;
		V_2 = ((int32_t)(1<<((int32_t)(L_0&((int32_t)31)))));
		V_3 = 0;
		V_0 = 0;
		goto IL_0074;
	}

IL_000d:
	{
		V_1 = 0;
		goto IL_006a;
	}

IL_0011:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = ___0_p;
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		uint16_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = ___0_p;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_6);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_7, L_8)), L_9));
		uint16_t L_11 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = ((int32_t)((int32_t)L_5^(int32_t)L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___1_output;
		int32_t L_13 = ___2_ptrIndex;
		int32_t L_14 = V_3;
		NullCheck(L_12);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)(L_14>>3))));
		uint8_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = V_3;
		V_5 = ((int32_t)(((int32_t)((int32_t)L_16>>((int32_t)(((int32_t)(L_17&7))&((int32_t)31)))))&1));
		int32_t L_18 = V_5;
		V_5 = ((-L_18));
		int32_t L_19 = V_4;
		int32_t L_20 = V_5;
		V_4 = ((int32_t)(L_19&L_20));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_21 = ___0_p;
		int32_t L_22 = V_0;
		int32_t L_23 = V_1;
		NullCheck(L_21);
		uint16_t* L_24 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23)))));
		int32_t L_25 = *((uint16_t*)L_24);
		int32_t L_26 = V_4;
		*((int16_t*)L_24) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_25^((int32_t)(uint16_t)L_26))));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_27 = ___0_p;
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		int32_t L_30 = V_2;
		NullCheck(L_27);
		uint16_t* L_31 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_28, L_29)), L_30)))));
		int32_t L_32 = *((uint16_t*)L_31);
		int32_t L_33 = V_4;
		*((int16_t*)L_31) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_32^((int32_t)(uint16_t)L_33))));
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_006a:
	{
		int32_t L_36 = V_1;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_38 = V_0;
		int32_t L_39 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_38, ((int32_t)il2cpp_codegen_multiply(L_39, 2))));
	}

IL_0074:
	{
		int32_t L_40 = V_0;
		int32_t L_41 = ___4_n;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_ControlBitsFromPermutation_mCED55649ED47BB2E703124244164647A43786724_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_pi, int64_t ___2_w, int64_t ___3_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_1 = NULL;
	uint16_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int64_t L_0 = ___3_n;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_0))));
		V_0 = L_1;
		int64_t L_2 = ___3_n;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)L_2));
		V_1 = L_3;
	}

IL_0013:
	{
		V_3 = 0;
		goto IL_001f;
	}

IL_0017:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_output;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)0);
		int32_t L_6 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001f:
	{
		int32_t L_7 = V_3;
		int64_t L_8 = ___2_w;
		int64_t L_9 = ___3_n;
		if ((((int64_t)((int64_t)L_7)) < ((int64_t)((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_8)), ((int64_t)1))), L_9))/((int64_t)2))), ((int64_t)7)))/((int64_t)8))))))
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_output;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_11 = ___1_pi;
		int64_t L_12 = ___2_w;
		int64_t L_13 = ___3_n;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_0;
		CmceEngine_1_CBRecursion_m258015E400B0724D145D8ABA8AD9770F23FA6CD5(L_10, ((int64_t)0), ((int64_t)1), L_11, 0, L_12, L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		V_3 = 0;
		goto IL_0051;
	}

IL_0048:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_15 = V_1;
		int32_t L_16 = V_3;
		int32_t L_17 = V_3;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint16_t)((int32_t)(uint16_t)L_17));
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0051:
	{
		int32_t L_19 = V_3;
		int64_t L_20 = ___3_n;
		if ((((int64_t)((int64_t)L_19)) < ((int64_t)L_20)))
		{
			goto IL_0048;
		}
	}
	{
		V_4 = 0;
		V_3 = 0;
		goto IL_0076;
	}

IL_005d:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_21 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___0_output;
		int32_t L_23 = V_4;
		int32_t L_24 = V_3;
		int64_t L_25 = ___3_n;
		CmceEngine_1_Layer_m7620628460556DC76B3EA9F85EB3A1AF8F39D0D3(L_21, L_22, L_23, L_24, ((int32_t)L_25), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 31));
		int32_t L_26 = V_4;
		int64_t L_27 = ___3_n;
		V_4 = ((int32_t)il2cpp_codegen_add(L_26, ((int32_t)(((int32_t)L_27)>>4))));
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0076:
	{
		int32_t L_29 = V_3;
		int64_t L_30 = ___2_w;
		if ((((int64_t)((int64_t)L_29)) < ((int64_t)L_30)))
		{
			goto IL_005d;
		}
	}
	{
		int64_t L_31 = ___2_w;
		V_3 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_31, ((int64_t)2))));
		goto IL_009c;
	}

IL_0083:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_32 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ___0_output;
		int32_t L_34 = V_4;
		int32_t L_35 = V_3;
		int64_t L_36 = ___3_n;
		CmceEngine_1_Layer_m7620628460556DC76B3EA9F85EB3A1AF8F39D0D3(L_32, L_33, L_34, L_35, ((int32_t)L_36), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 31));
		int32_t L_37 = V_4;
		int64_t L_38 = ___3_n;
		V_4 = ((int32_t)il2cpp_codegen_add(L_37, ((int32_t)(((int32_t)L_38)>>4))));
		int32_t L_39 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
	}

IL_009c:
	{
		int32_t L_40 = V_3;
		if ((((int32_t)L_40) >= ((int32_t)0)))
		{
			goto IL_0083;
		}
	}
	{
		V_2 = (uint16_t)0;
		V_3 = 0;
		goto IL_00b6;
	}

IL_00a6:
	{
		uint16_t L_41 = V_2;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_42 = ___1_pi;
		int32_t L_43 = V_3;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		uint16_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_46 = V_1;
		int32_t L_47 = V_3;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		uint16_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_41|((int32_t)(uint16_t)((int32_t)((int32_t)L_45^(int32_t)L_49))))));
		int32_t L_50 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00b6:
	{
		int32_t L_51 = V_3;
		int64_t L_52 = ___3_n;
		if ((((int64_t)((int64_t)L_51)) < ((int64_t)L_52)))
		{
			goto IL_00a6;
		}
	}
	{
		uint16_t L_53 = V_2;
		if (L_53)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t CmceEngine_1_GetQShort_mACD518218B80C5784D61D26E6E918FE52FDE3DB8_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_temp, int32_t ___1_q_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_q_index;
		V_0 = ((int32_t)(L_0/2));
		int32_t L_1 = ___1_q_index;
		if (((int32_t)(L_1%2)))
		{
			goto IL_000e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___0_temp;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return ((int16_t)L_5);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___0_temp;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		return ((int16_t)((int64_t)(((int64_t)(((int64_t)L_9)&((int64_t)(uint64_t)((uint32_t)((int32_t)-65536)))))>>((int32_t)16))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_CBRecursion_m258015E400B0724D145D8ABA8AD9770F23FA6CD5_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, int64_t ___1_pos, int64_t ___2_step, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___3_pi, int32_t ___4_qIndex, int64_t ___5_w, int64_t ___6_n, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___7_temp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_4 = NULL;
	uint16_t V_5 = 0;
	uint16_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int64_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int64_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	{
		int64_t L_0 = ___5_w;
		if ((!(((uint64_t)L_0) == ((uint64_t)((int64_t)1)))))
		{
			goto IL_0029;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_output;
		int64_t L_2 = ___1_pos;
		NullCheck(L_1);
		uint8_t* L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)(L_2>>3))))));
		int32_t L_4 = *((uint8_t*)L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___7_temp;
		int32_t L_6 = ___4_qIndex;
		int16_t L_7;
		L_7 = CmceEngine_1_GetQShort_mACD518218B80C5784D61D26E6E918FE52FDE3DB8(L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		int64_t L_8 = ___1_pos;
		*((int8_t*)L_3) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_4^((int32_t)(uint8_t)((int32_t)((int32_t)L_7<<((int32_t)(((int32_t)((int64_t)(L_8&((int64_t)7))))&((int32_t)31)))))))));
		return;
	}

IL_0029:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_9 = ___3_pi;
		if (!L_9)
		{
			goto IL_0053;
		}
	}
	{
		V_0 = ((int64_t)0);
		goto IL_004c;
	}

IL_0031:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ___7_temp;
		int64_t L_11 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_12 = ___3_pi;
		int64_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)L_13);
		uint16_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_16 = ___3_pi;
		int64_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)((int64_t)(L_17^((int64_t)1))));
		uint16_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_11)), (int32_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_15^1))<<((int32_t)16)))|(int32_t)L_19)));
		int64_t L_20 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_20, ((int64_t)1)));
	}

IL_004c:
	{
		int64_t L_21 = V_0;
		int64_t L_22 = ___6_n;
		if ((((int64_t)L_21) < ((int64_t)L_22)))
		{
			goto IL_0031;
		}
	}
	{
		goto IL_0094;
	}

IL_0053:
	{
		V_0 = ((int64_t)0);
		goto IL_008f;
	}

IL_0058:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = ___7_temp;
		int32_t L_24 = ___4_qIndex;
		int64_t L_25 = V_0;
		int16_t L_26;
		L_26 = CmceEngine_1_GetQShort_mACD518218B80C5784D61D26E6E918FE52FDE3DB8(L_23, ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)L_24), L_25))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		V_5 = (uint16_t)((int32_t)(uint16_t)L_26);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = ___7_temp;
		int32_t L_28 = ___4_qIndex;
		int64_t L_29 = V_0;
		int16_t L_30;
		L_30 = CmceEngine_1_GetQShort_mACD518218B80C5784D61D26E6E918FE52FDE3DB8(L_27, ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)L_28), ((int64_t)(L_29^((int64_t)1)))))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		V_6 = (uint16_t)((int32_t)(uint16_t)L_30);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = ___7_temp;
		int64_t L_32 = V_0;
		uint16_t L_33 = V_5;
		uint16_t L_34 = V_6;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_32)), (int32_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_33^1))<<((int32_t)16)))|(int32_t)L_34)));
		int64_t L_35 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_35, ((int64_t)1)));
	}

IL_008f:
	{
		int64_t L_36 = V_0;
		int64_t L_37 = ___6_n;
		if ((((int64_t)L_36) < ((int64_t)L_37)))
		{
			goto IL_0058;
		}
	}

IL_0094:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = ___7_temp;
		int64_t L_39 = ___6_n;
		CmceEngine_1_Sort32_m1B11E7B48FDBBD53A8DC5E41B35538068FCDC725(L_38, 0, ((int32_t)L_39), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_0 = ((int64_t)0);
		goto IL_00d4;
	}

IL_00a4:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = ___7_temp;
		int64_t L_41 = V_0;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)L_41);
		int32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_7 = ((int32_t)(L_43&((int32_t)65535)));
		int32_t L_44 = V_7;
		V_8 = L_44;
		int64_t L_45 = V_0;
		int32_t L_46 = V_8;
		if ((((int64_t)L_45) >= ((int64_t)((int64_t)L_46))))
		{
			goto IL_00bf;
		}
	}
	{
		int64_t L_47 = V_0;
		V_8 = ((int32_t)L_47);
	}

IL_00bf:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = ___7_temp;
		int64_t L_49 = ___6_n;
		int64_t L_50 = V_0;
		int32_t L_51 = V_7;
		int32_t L_52 = V_8;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_49, L_50)))), (int32_t)((int32_t)(((int32_t)(L_51<<((int32_t)16)))|L_52)));
		int64_t L_53 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_53, ((int64_t)1)));
	}

IL_00d4:
	{
		int64_t L_54 = V_0;
		int64_t L_55 = ___6_n;
		if ((((int64_t)L_54) < ((int64_t)L_55)))
		{
			goto IL_00a4;
		}
	}
	{
		V_0 = ((int64_t)0);
		goto IL_00f4;
	}

IL_00de:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = ___7_temp;
		int64_t L_57 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = ___7_temp;
		int64_t L_59 = V_0;
		NullCheck(L_58);
		int32_t L_60 = ((int32_t)L_59);
		int32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		int64_t L_62 = V_0;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_57)), (int32_t)((int32_t)((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)(L_61<<((int32_t)16)))))|L_62))));
		int64_t L_63 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_63, ((int64_t)1)));
	}

IL_00f4:
	{
		int64_t L_64 = V_0;
		int64_t L_65 = ___6_n;
		if ((((int64_t)L_64) < ((int64_t)L_65)))
		{
			goto IL_00de;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = ___7_temp;
		int64_t L_67 = ___6_n;
		CmceEngine_1_Sort32_m1B11E7B48FDBBD53A8DC5E41B35538068FCDC725(L_66, 0, ((int32_t)L_67), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_0 = ((int64_t)0);
		goto IL_0127;
	}

IL_0109:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = ___7_temp;
		int64_t L_69 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = ___7_temp;
		int64_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)L_71);
		int32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = ___7_temp;
		int64_t L_75 = ___6_n;
		int64_t L_76 = V_0;
		NullCheck(L_74);
		int32_t L_77 = ((int32_t)((int64_t)il2cpp_codegen_add(L_75, L_76)));
		int32_t L_78 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_69)), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(L_73<<((int32_t)16))), ((int32_t)(L_78>>((int32_t)16))))));
		int64_t L_79 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_79, ((int64_t)1)));
	}

IL_0127:
	{
		int64_t L_80 = V_0;
		int64_t L_81 = ___6_n;
		if ((((int64_t)L_80) < ((int64_t)L_81)))
		{
			goto IL_0109;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = ___7_temp;
		int64_t L_83 = ___6_n;
		CmceEngine_1_Sort32_m1B11E7B48FDBBD53A8DC5E41B35538068FCDC725(L_82, 0, ((int32_t)L_83), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		int64_t L_84 = ___5_w;
		if ((((int64_t)L_84) > ((int64_t)((int64_t)((int32_t)10)))))
		{
			goto IL_0265;
		}
	}
	{
		V_0 = ((int64_t)0);
		goto IL_0170;
	}

IL_0146:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = ___7_temp;
		int64_t L_86 = ___6_n;
		int64_t L_87 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = ___7_temp;
		int64_t L_89 = V_0;
		NullCheck(L_88);
		int32_t L_90 = ((int32_t)L_89);
		int32_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = ___7_temp;
		int64_t L_93 = ___6_n;
		int64_t L_94 = V_0;
		NullCheck(L_92);
		int32_t L_95 = ((int32_t)((int64_t)il2cpp_codegen_add(L_93, L_94)));
		int32_t L_96 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_86, L_87)))), (int32_t)((int32_t)(((int32_t)(((int32_t)(L_91&((int32_t)65535)))<<((int32_t)10)))|((int32_t)(L_96&((int32_t)1023))))));
		int64_t L_97 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_97, ((int64_t)1)));
	}

IL_0170:
	{
		int64_t L_98 = V_0;
		int64_t L_99 = ___6_n;
		if ((((int64_t)L_98) < ((int64_t)L_99)))
		{
			goto IL_0146;
		}
	}
	{
		V_1 = ((int64_t)1);
		goto IL_0231;
	}

IL_017d:
	{
		V_0 = ((int64_t)0);
		goto IL_01a0;
	}

IL_0182:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100 = ___7_temp;
		int64_t L_101 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = ___7_temp;
		int64_t L_103 = ___6_n;
		int64_t L_104 = V_0;
		NullCheck(L_102);
		int32_t L_105 = ((int32_t)((int64_t)il2cpp_codegen_add(L_103, L_104)));
		int32_t L_106 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		int64_t L_107 = V_0;
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_101)), (int32_t)((int32_t)((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)(((int32_t)(L_106&((int32_t)-1024)))<<6))))|L_107))));
		int64_t L_108 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_108, ((int64_t)1)));
	}

IL_01a0:
	{
		int64_t L_109 = V_0;
		int64_t L_110 = ___6_n;
		if ((((int64_t)L_109) < ((int64_t)L_110)))
		{
			goto IL_0182;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_111 = ___7_temp;
		int64_t L_112 = ___6_n;
		CmceEngine_1_Sort32_m1B11E7B48FDBBD53A8DC5E41B35538068FCDC725(L_111, 0, ((int32_t)L_112), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_0 = ((int64_t)0);
		goto IL_01d0;
	}

IL_01b5:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_113 = ___7_temp;
		int64_t L_114 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_115 = ___7_temp;
		int64_t L_116 = V_0;
		NullCheck(L_115);
		int32_t L_117 = ((int32_t)L_116);
		int32_t L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_119 = ___7_temp;
		int64_t L_120 = ___6_n;
		int64_t L_121 = V_0;
		NullCheck(L_119);
		int32_t L_122 = ((int32_t)((int64_t)il2cpp_codegen_add(L_120, L_121)));
		int32_t L_123 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		NullCheck(L_113);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_114)), (int32_t)((int32_t)(((int32_t)(L_118<<((int32_t)20)))|L_123)));
		int64_t L_124 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_124, ((int64_t)1)));
	}

IL_01d0:
	{
		int64_t L_125 = V_0;
		int64_t L_126 = ___6_n;
		if ((((int64_t)L_125) < ((int64_t)L_126)))
		{
			goto IL_01b5;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_127 = ___7_temp;
		int64_t L_128 = ___6_n;
		CmceEngine_1_Sort32_m1B11E7B48FDBBD53A8DC5E41B35538068FCDC725(L_127, 0, ((int32_t)L_128), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_0 = ((int64_t)0);
		goto IL_0227;
	}

IL_01e5:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_129 = ___7_temp;
		int64_t L_130 = V_0;
		NullCheck(L_129);
		int32_t L_131 = ((int32_t)L_130);
		int32_t L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		V_9 = ((int32_t)(L_132&((int32_t)1048575)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_133 = ___7_temp;
		int64_t L_134 = V_0;
		NullCheck(L_133);
		int32_t L_135 = ((int32_t)L_134);
		int32_t L_136 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_137 = ___7_temp;
		int64_t L_138 = ___6_n;
		int64_t L_139 = V_0;
		NullCheck(L_137);
		int32_t L_140 = ((int32_t)((int64_t)il2cpp_codegen_add(L_138, L_139)));
		int32_t L_141 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		V_10 = ((int32_t)(((int32_t)(L_136&((int32_t)1047552)))|((int32_t)(L_141&((int32_t)1023)))));
		int32_t L_142 = V_9;
		int32_t L_143 = V_10;
		if ((((int32_t)L_142) >= ((int32_t)L_143)))
		{
			goto IL_0218;
		}
	}
	{
		int32_t L_144 = V_9;
		V_10 = L_144;
	}

IL_0218:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_145 = ___7_temp;
		int64_t L_146 = ___6_n;
		int64_t L_147 = V_0;
		int32_t L_148 = V_10;
		NullCheck(L_145);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_146, L_147)))), (int32_t)L_148);
		int64_t L_149 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_149, ((int64_t)1)));
	}

IL_0227:
	{
		int64_t L_150 = V_0;
		int64_t L_151 = ___6_n;
		if ((((int64_t)L_150) < ((int64_t)L_151)))
		{
			goto IL_01e5;
		}
	}
	{
		int64_t L_152 = V_1;
		V_1 = ((int64_t)il2cpp_codegen_add(L_152, ((int64_t)1)));
	}

IL_0231:
	{
		int64_t L_153 = V_1;
		int64_t L_154 = ___5_w;
		if ((((int64_t)L_153) < ((int64_t)((int64_t)il2cpp_codegen_subtract(L_154, ((int64_t)1))))))
		{
			goto IL_017d;
		}
	}
	{
		V_0 = ((int64_t)0);
		goto IL_025b;
	}

IL_0241:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_155 = ___7_temp;
		int64_t L_156 = ___6_n;
		int64_t L_157 = V_0;
		NullCheck(L_155);
		int32_t* L_158 = ((L_155)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_156, L_157))))));
		int32_t L_159 = *((int32_t*)L_158);
		*((int32_t*)L_158) = (int32_t)((int32_t)(L_159&((int32_t)1023)));
		int64_t L_160 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_160, ((int64_t)1)));
	}

IL_025b:
	{
		int64_t L_161 = V_0;
		int64_t L_162 = ___6_n;
		if ((((int64_t)L_161) < ((int64_t)L_162)))
		{
			goto IL_0241;
		}
	}
	{
		goto IL_03eb;
	}

IL_0265:
	{
		V_0 = ((int64_t)0);
		goto IL_028e;
	}

IL_026a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_163 = ___7_temp;
		int64_t L_164 = ___6_n;
		int64_t L_165 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_166 = ___7_temp;
		int64_t L_167 = V_0;
		NullCheck(L_166);
		int32_t L_168 = ((int32_t)L_167);
		int32_t L_169 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_170 = ___7_temp;
		int64_t L_171 = ___6_n;
		int64_t L_172 = V_0;
		NullCheck(L_170);
		int32_t L_173 = ((int32_t)((int64_t)il2cpp_codegen_add(L_171, L_172)));
		int32_t L_174 = (L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		NullCheck(L_163);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_164, L_165)))), (int32_t)((int32_t)(((int32_t)(L_169<<((int32_t)16)))|((int32_t)(L_174&((int32_t)65535))))));
		int64_t L_175 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_175, ((int64_t)1)));
	}

IL_028e:
	{
		int64_t L_176 = V_0;
		int64_t L_177 = ___6_n;
		if ((((int64_t)L_176) < ((int64_t)L_177)))
		{
			goto IL_026a;
		}
	}
	{
		V_1 = ((int64_t)1);
		goto IL_03bc;
	}

IL_029b:
	{
		V_0 = ((int64_t)0);
		goto IL_02bc;
	}

IL_02a0:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_178 = ___7_temp;
		int64_t L_179 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_180 = ___7_temp;
		int64_t L_181 = ___6_n;
		int64_t L_182 = V_0;
		NullCheck(L_180);
		int32_t L_183 = ((int32_t)((int64_t)il2cpp_codegen_add(L_181, L_182)));
		int32_t L_184 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_183));
		int64_t L_185 = V_0;
		NullCheck(L_178);
		(L_178)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_179)), (int32_t)((int32_t)((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)(L_184&((int32_t)-65536)))))|L_185))));
		int64_t L_186 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_186, ((int64_t)1)));
	}

IL_02bc:
	{
		int64_t L_187 = V_0;
		int64_t L_188 = ___6_n;
		if ((((int64_t)L_187) < ((int64_t)L_188)))
		{
			goto IL_02a0;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_189 = ___7_temp;
		int64_t L_190 = ___6_n;
		CmceEngine_1_Sort32_m1B11E7B48FDBBD53A8DC5E41B35538068FCDC725(L_189, 0, ((int32_t)L_190), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_0 = ((int64_t)0);
		goto IL_02f2;
	}

IL_02d1:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_191 = ___7_temp;
		int64_t L_192 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_193 = ___7_temp;
		int64_t L_194 = V_0;
		NullCheck(L_193);
		int32_t L_195 = ((int32_t)L_194);
		int32_t L_196 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_197 = ___7_temp;
		int64_t L_198 = ___6_n;
		int64_t L_199 = V_0;
		NullCheck(L_197);
		int32_t L_200 = ((int32_t)((int64_t)il2cpp_codegen_add(L_198, L_199)));
		int32_t L_201 = (L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_200));
		NullCheck(L_191);
		(L_191)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_192)), (int32_t)((int32_t)(((int32_t)(L_196<<((int32_t)16)))|((int32_t)(L_201&((int32_t)65535))))));
		int64_t L_202 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_202, ((int64_t)1)));
	}

IL_02f2:
	{
		int64_t L_203 = V_0;
		int64_t L_204 = ___6_n;
		if ((((int64_t)L_203) < ((int64_t)L_204)))
		{
			goto IL_02d1;
		}
	}
	{
		int64_t L_205 = V_1;
		int64_t L_206 = ___5_w;
		if ((((int64_t)L_205) >= ((int64_t)((int64_t)il2cpp_codegen_subtract(L_206, ((int64_t)2))))))
		{
			goto IL_036b;
		}
	}
	{
		V_0 = ((int64_t)0);
		goto IL_0328;
	}

IL_0304:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_207 = ___7_temp;
		int64_t L_208 = ___6_n;
		int64_t L_209 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_210 = ___7_temp;
		int64_t L_211 = V_0;
		NullCheck(L_210);
		int32_t L_212 = ((int32_t)L_211);
		int32_t L_213 = (L_210)->GetAt(static_cast<il2cpp_array_size_t>(L_212));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_214 = ___7_temp;
		int64_t L_215 = ___6_n;
		int64_t L_216 = V_0;
		NullCheck(L_214);
		int32_t L_217 = ((int32_t)((int64_t)il2cpp_codegen_add(L_215, L_216)));
		int32_t L_218 = (L_214)->GetAt(static_cast<il2cpp_array_size_t>(L_217));
		NullCheck(L_207);
		(L_207)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_208, L_209)))), (int32_t)((int32_t)(((int32_t)(L_213&((int32_t)-65536)))|((int32_t)(L_218>>((int32_t)16))))));
		int64_t L_219 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_219, ((int64_t)1)));
	}

IL_0328:
	{
		int64_t L_220 = V_0;
		int64_t L_221 = ___6_n;
		if ((((int64_t)L_220) < ((int64_t)L_221)))
		{
			goto IL_0304;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_222 = ___7_temp;
		int64_t L_223 = ___6_n;
		int64_t L_224 = ___6_n;
		CmceEngine_1_Sort32_m1B11E7B48FDBBD53A8DC5E41B35538068FCDC725(L_222, ((int32_t)L_223), ((int32_t)((int64_t)il2cpp_codegen_multiply(L_224, ((int64_t)2)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_0 = ((int64_t)0);
		goto IL_0366;
	}

IL_0342:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_225 = ___7_temp;
		int64_t L_226 = ___6_n;
		int64_t L_227 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_228 = ___7_temp;
		int64_t L_229 = ___6_n;
		int64_t L_230 = V_0;
		NullCheck(L_228);
		int32_t L_231 = ((int32_t)((int64_t)il2cpp_codegen_add(L_229, L_230)));
		int32_t L_232 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_231));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_233 = ___7_temp;
		int64_t L_234 = V_0;
		NullCheck(L_233);
		int32_t L_235 = ((int32_t)L_234);
		int32_t L_236 = (L_233)->GetAt(static_cast<il2cpp_array_size_t>(L_235));
		NullCheck(L_225);
		(L_225)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_226, L_227)))), (int32_t)((int32_t)(((int32_t)(L_232<<((int32_t)16)))|((int32_t)(L_236&((int32_t)65535))))));
		int64_t L_237 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_237, ((int64_t)1)));
	}

IL_0366:
	{
		int64_t L_238 = V_0;
		int64_t L_239 = ___6_n;
		if ((((int64_t)L_238) < ((int64_t)L_239)))
		{
			goto IL_0342;
		}
	}

IL_036b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_240 = ___7_temp;
		int64_t L_241 = ___6_n;
		CmceEngine_1_Sort32_m1B11E7B48FDBBD53A8DC5E41B35538068FCDC725(L_240, 0, ((int32_t)L_241), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_0 = ((int64_t)0);
		goto IL_03b2;
	}

IL_037b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_242 = ___7_temp;
		int64_t L_243 = ___6_n;
		int64_t L_244 = V_0;
		NullCheck(L_242);
		int32_t L_245 = ((int32_t)((int64_t)il2cpp_codegen_add(L_243, L_244)));
		int32_t L_246 = (L_242)->GetAt(static_cast<il2cpp_array_size_t>(L_245));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_247 = ___7_temp;
		int64_t L_248 = V_0;
		NullCheck(L_247);
		int32_t L_249 = ((int32_t)L_248);
		int32_t L_250 = (L_247)->GetAt(static_cast<il2cpp_array_size_t>(L_249));
		V_11 = ((int32_t)(((int32_t)(L_246&((int32_t)-65536)))|((int32_t)(L_250&((int32_t)65535)))));
		int32_t L_251 = V_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_252 = ___7_temp;
		int64_t L_253 = ___6_n;
		int64_t L_254 = V_0;
		NullCheck(L_252);
		int32_t L_255 = ((int32_t)((int64_t)il2cpp_codegen_add(L_253, L_254)));
		int32_t L_256 = (L_252)->GetAt(static_cast<il2cpp_array_size_t>(L_255));
		if ((((int32_t)L_251) >= ((int32_t)L_256)))
		{
			goto IL_03ad;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_257 = ___7_temp;
		int64_t L_258 = ___6_n;
		int64_t L_259 = V_0;
		int32_t L_260 = V_11;
		NullCheck(L_257);
		(L_257)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_258, L_259)))), (int32_t)L_260);
	}

IL_03ad:
	{
		int64_t L_261 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_261, ((int64_t)1)));
	}

IL_03b2:
	{
		int64_t L_262 = V_0;
		int64_t L_263 = ___6_n;
		if ((((int64_t)L_262) < ((int64_t)L_263)))
		{
			goto IL_037b;
		}
	}
	{
		int64_t L_264 = V_1;
		V_1 = ((int64_t)il2cpp_codegen_add(L_264, ((int64_t)1)));
	}

IL_03bc:
	{
		int64_t L_265 = V_1;
		int64_t L_266 = ___5_w;
		if ((((int64_t)L_265) < ((int64_t)((int64_t)il2cpp_codegen_subtract(L_266, ((int64_t)1))))))
		{
			goto IL_029b;
		}
	}
	{
		V_0 = ((int64_t)0);
		goto IL_03e6;
	}

IL_03cc:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_267 = ___7_temp;
		int64_t L_268 = ___6_n;
		int64_t L_269 = V_0;
		NullCheck(L_267);
		int32_t* L_270 = ((L_267)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_268, L_269))))));
		int32_t L_271 = *((int32_t*)L_270);
		*((int32_t*)L_270) = (int32_t)((int32_t)(L_271&((int32_t)65535)));
		int64_t L_272 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_272, ((int64_t)1)));
	}

IL_03e6:
	{
		int64_t L_273 = V_0;
		int64_t L_274 = ___6_n;
		if ((((int64_t)L_273) < ((int64_t)L_274)))
		{
			goto IL_03cc;
		}
	}

IL_03eb:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_275 = ___3_pi;
		if (!L_275)
		{
			goto IL_040f;
		}
	}
	{
		V_0 = ((int64_t)0);
		goto IL_0408;
	}

IL_03f3:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_276 = ___7_temp;
		int64_t L_277 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_278 = ___3_pi;
		int64_t L_279 = V_0;
		NullCheck(L_278);
		int32_t L_280 = ((int32_t)L_279);
		uint16_t L_281 = (L_278)->GetAt(static_cast<il2cpp_array_size_t>(L_280));
		int64_t L_282 = V_0;
		NullCheck(L_276);
		(L_276)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_277)), (int32_t)((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)((int32_t)L_281<<((int32_t)16)))), L_282))));
		int64_t L_283 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_283, ((int64_t)1)));
	}

IL_0408:
	{
		int64_t L_284 = V_0;
		int64_t L_285 = ___6_n;
		if ((((int64_t)L_284) < ((int64_t)L_285)))
		{
			goto IL_03f3;
		}
	}
	{
		goto IL_0437;
	}

IL_040f:
	{
		V_0 = ((int64_t)0);
		goto IL_0432;
	}

IL_0414:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_286 = ___7_temp;
		int64_t L_287 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_288 = ___7_temp;
		int32_t L_289 = ___4_qIndex;
		int64_t L_290 = V_0;
		int16_t L_291;
		L_291 = CmceEngine_1_GetQShort_mACD518218B80C5784D61D26E6E918FE52FDE3DB8(L_288, ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)L_289), L_290))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		int64_t L_292 = V_0;
		NullCheck(L_286);
		(L_286)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_287)), (int32_t)((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)((int32_t)L_291<<((int32_t)16)))), L_292))));
		int64_t L_293 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_293, ((int64_t)1)));
	}

IL_0432:
	{
		int64_t L_294 = V_0;
		int64_t L_295 = ___6_n;
		if ((((int64_t)L_294) < ((int64_t)L_295)))
		{
			goto IL_0414;
		}
	}

IL_0437:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_296 = ___7_temp;
		int64_t L_297 = ___6_n;
		CmceEngine_1_Sort32_m1B11E7B48FDBBD53A8DC5E41B35538068FCDC725(L_296, 0, ((int32_t)L_297), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_2 = ((int64_t)0);
		goto IL_04be;
	}

IL_0447:
	{
		int64_t L_298 = V_2;
		V_12 = ((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_298));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_299 = ___7_temp;
		int64_t L_300 = ___6_n;
		int64_t L_301 = V_12;
		NullCheck(L_299);
		int32_t L_302 = ((int32_t)((int64_t)il2cpp_codegen_add(L_300, L_301)));
		int32_t L_303 = (L_299)->GetAt(static_cast<il2cpp_array_size_t>(L_302));
		V_13 = ((int32_t)(L_303&1));
		int64_t L_304 = V_12;
		int32_t L_305 = V_13;
		V_14 = ((int32_t)((int64_t)il2cpp_codegen_add(L_304, ((int64_t)L_305))));
		int32_t L_306 = V_14;
		V_15 = ((int32_t)(L_306^1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_307 = ___0_output;
		int64_t L_308 = ___1_pos;
		NullCheck(L_307);
		uint8_t* L_309 = ((L_307)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)(L_308>>3))))));
		int32_t L_310 = *((uint8_t*)L_309);
		int32_t L_311 = V_13;
		int64_t L_312 = ___1_pos;
		*((int8_t*)L_309) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_310^((int32_t)(uint8_t)((int32_t)(L_311<<((int32_t)(((int32_t)((int64_t)(L_312&((int64_t)7))))&((int32_t)31)))))))));
		int64_t L_313 = ___1_pos;
		int64_t L_314 = ___2_step;
		___1_pos = ((int64_t)il2cpp_codegen_add(L_313, L_314));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_315 = ___7_temp;
		int64_t L_316 = ___6_n;
		int64_t L_317 = V_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_318 = ___7_temp;
		int64_t L_319 = V_12;
		NullCheck(L_318);
		int32_t L_320 = ((int32_t)L_319);
		int32_t L_321 = (L_318)->GetAt(static_cast<il2cpp_array_size_t>(L_320));
		int32_t L_322 = V_14;
		NullCheck(L_315);
		(L_315)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_316, L_317)))), (int32_t)((int32_t)(((int32_t)(L_321<<((int32_t)16)))|L_322)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_323 = ___7_temp;
		int64_t L_324 = ___6_n;
		int64_t L_325 = V_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_326 = ___7_temp;
		int64_t L_327 = V_12;
		NullCheck(L_326);
		int32_t L_328 = ((int32_t)((int64_t)il2cpp_codegen_add(L_327, ((int64_t)1))));
		int32_t L_329 = (L_326)->GetAt(static_cast<il2cpp_array_size_t>(L_328));
		int32_t L_330 = V_15;
		NullCheck(L_323);
		(L_323)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_324, L_325)), ((int64_t)1))))), (int32_t)((int32_t)(((int32_t)(L_329<<((int32_t)16)))|L_330)));
		int64_t L_331 = V_2;
		V_2 = ((int64_t)il2cpp_codegen_add(L_331, ((int64_t)1)));
	}

IL_04be:
	{
		int64_t L_332 = V_2;
		int64_t L_333 = ___6_n;
		if ((((int64_t)L_332) < ((int64_t)((int64_t)(L_333/((int64_t)2))))))
		{
			goto IL_0447;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_334 = ___7_temp;
		int64_t L_335 = ___6_n;
		int64_t L_336 = ___6_n;
		CmceEngine_1_Sort32_m1B11E7B48FDBBD53A8DC5E41B35538068FCDC725(L_334, ((int32_t)L_335), ((int32_t)((int64_t)il2cpp_codegen_multiply(L_336, ((int64_t)2)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		int64_t L_337 = ___1_pos;
		int64_t L_338 = ___5_w;
		int64_t L_339 = ___2_step;
		int64_t L_340 = ___6_n;
		___1_pos = ((int64_t)il2cpp_codegen_add(L_337, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_338)), ((int64_t)3))), L_339)), ((int64_t)(L_340/((int64_t)2)))))));
		V_3 = ((int64_t)0);
		goto IL_0575;
	}

IL_04f2:
	{
		int64_t L_341 = V_3;
		V_16 = ((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_341));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_342 = ___7_temp;
		int64_t L_343 = ___6_n;
		int64_t L_344 = V_16;
		NullCheck(L_342);
		int32_t L_345 = ((int32_t)((int64_t)il2cpp_codegen_add(L_343, L_344)));
		int32_t L_346 = (L_342)->GetAt(static_cast<il2cpp_array_size_t>(L_345));
		V_17 = ((int32_t)(L_346&1));
		int64_t L_347 = V_16;
		int32_t L_348 = V_17;
		V_18 = ((int32_t)((int64_t)il2cpp_codegen_add(L_347, ((int64_t)L_348))));
		int32_t L_349 = V_18;
		V_19 = ((int32_t)(L_349^1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_350 = ___0_output;
		int64_t L_351 = ___1_pos;
		NullCheck(L_350);
		uint8_t* L_352 = ((L_350)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)(L_351>>3))))));
		int32_t L_353 = *((uint8_t*)L_352);
		int32_t L_354 = V_17;
		int64_t L_355 = ___1_pos;
		*((int8_t*)L_352) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_353^((int32_t)(uint8_t)((int32_t)(L_354<<((int32_t)(((int32_t)((int64_t)(L_355&((int64_t)7))))&((int32_t)31)))))))));
		int64_t L_356 = ___1_pos;
		int64_t L_357 = ___2_step;
		___1_pos = ((int64_t)il2cpp_codegen_add(L_356, L_357));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_358 = ___7_temp;
		int64_t L_359 = V_16;
		int32_t L_360 = V_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_361 = ___7_temp;
		int64_t L_362 = ___6_n;
		int64_t L_363 = V_16;
		NullCheck(L_361);
		int32_t L_364 = ((int32_t)((int64_t)il2cpp_codegen_add(L_362, L_363)));
		int32_t L_365 = (L_361)->GetAt(static_cast<il2cpp_array_size_t>(L_364));
		NullCheck(L_358);
		(L_358)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_359)), (int32_t)((int32_t)(((int32_t)(L_360<<((int32_t)16)))|((int32_t)(L_365&((int32_t)65535))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_366 = ___7_temp;
		int64_t L_367 = V_16;
		int32_t L_368 = V_19;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_369 = ___7_temp;
		int64_t L_370 = ___6_n;
		int64_t L_371 = V_16;
		NullCheck(L_369);
		int32_t L_372 = ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_370, L_371)), ((int64_t)1))));
		int32_t L_373 = (L_369)->GetAt(static_cast<il2cpp_array_size_t>(L_372));
		NullCheck(L_366);
		(L_366)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_367, ((int64_t)1))))), (int32_t)((int32_t)(((int32_t)(L_368<<((int32_t)16)))|((int32_t)(L_373&((int32_t)65535))))));
		int64_t L_374 = V_3;
		V_3 = ((int64_t)il2cpp_codegen_add(L_374, ((int64_t)1)));
	}

IL_0575:
	{
		int64_t L_375 = V_3;
		int64_t L_376 = ___6_n;
		if ((((int64_t)L_375) < ((int64_t)((int64_t)(L_376/((int64_t)2))))))
		{
			goto IL_04f2;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_377 = ___7_temp;
		int64_t L_378 = ___6_n;
		CmceEngine_1_Sort32_m1B11E7B48FDBBD53A8DC5E41B35538068FCDC725(L_377, 0, ((int32_t)L_378), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		int64_t L_379 = ___1_pos;
		int64_t L_380 = ___5_w;
		int64_t L_381 = ___2_step;
		int64_t L_382 = ___6_n;
		___1_pos = ((int64_t)il2cpp_codegen_subtract(L_379, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_380)), ((int64_t)2))), L_381)), ((int64_t)(L_382/((int64_t)2)))))));
		int64_t L_383 = ___6_n;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_384 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)L_383), 4)));
		V_4 = L_384;
		V_1 = ((int64_t)0);
		goto IL_05df;
	}

IL_05b0:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_385 = V_4;
		int64_t L_386 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_387 = ___7_temp;
		int64_t L_388 = V_1;
		NullCheck(L_387);
		int32_t L_389 = ((int32_t)L_388);
		int32_t L_390 = (L_387)->GetAt(static_cast<il2cpp_array_size_t>(L_389));
		NullCheck(L_385);
		(L_385)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_multiply(L_386, ((int64_t)2))))), (int16_t)((int16_t)L_390));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_391 = V_4;
		int64_t L_392 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_393 = ___7_temp;
		int64_t L_394 = V_1;
		NullCheck(L_393);
		int32_t L_395 = ((int32_t)L_394);
		int32_t L_396 = (L_393)->GetAt(static_cast<il2cpp_array_size_t>(L_395));
		NullCheck(L_391);
		(L_391)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(L_392, ((int64_t)2))), ((int64_t)1))))), (int16_t)((int16_t)((int64_t)(((int64_t)(((int64_t)L_396)&((int64_t)(uint64_t)((uint32_t)((int32_t)-65536)))))>>((int32_t)16)))));
		int64_t L_397 = V_1;
		V_1 = ((int64_t)il2cpp_codegen_add(L_397, ((int64_t)1)));
	}

IL_05df:
	{
		int64_t L_398 = V_1;
		int64_t L_399 = ___6_n;
		if ((((int64_t)L_398) < ((int64_t)((int64_t)il2cpp_codegen_multiply(L_399, ((int64_t)2))))))
		{
			goto IL_05b0;
		}
	}
	{
		V_2 = ((int64_t)0);
		goto IL_0626;
	}

IL_05ec:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_400 = V_4;
		int64_t L_401 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_402 = ___7_temp;
		int64_t L_403 = V_2;
		NullCheck(L_402);
		int32_t L_404 = ((int32_t)((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_403)));
		int32_t L_405 = (L_402)->GetAt(static_cast<il2cpp_array_size_t>(L_404));
		NullCheck(L_400);
		(L_400)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_401)), (int16_t)((int16_t)((int32_t)(((int32_t)(L_405&((int32_t)65535)))>>1))));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_406 = V_4;
		int64_t L_407 = V_2;
		int64_t L_408 = ___6_n;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_409 = ___7_temp;
		int64_t L_410 = V_2;
		NullCheck(L_409);
		int32_t L_411 = ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_410)), ((int64_t)1))));
		int32_t L_412 = (L_409)->GetAt(static_cast<il2cpp_array_size_t>(L_411));
		NullCheck(L_406);
		(L_406)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_407, ((int64_t)(L_408/((int64_t)2))))))), (int16_t)((int16_t)((int32_t)(((int32_t)(L_412&((int32_t)65535)))>>1))));
		int64_t L_413 = V_2;
		V_2 = ((int64_t)il2cpp_codegen_add(L_413, ((int64_t)1)));
	}

IL_0626:
	{
		int64_t L_414 = V_2;
		int64_t L_415 = ___6_n;
		if ((((int64_t)L_414) < ((int64_t)((int64_t)(L_415/((int64_t)2))))))
		{
			goto IL_05ec;
		}
	}
	{
		V_1 = ((int64_t)0);
		goto IL_065d;
	}

IL_0633:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_416 = ___7_temp;
		int64_t L_417 = ___6_n;
		int64_t L_418 = ___6_n;
		int64_t L_419 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_420 = V_4;
		int64_t L_421 = V_1;
		NullCheck(L_420);
		int32_t L_422 = ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(L_421, ((int64_t)2))), ((int64_t)1))));
		int16_t L_423 = (L_420)->GetAt(static_cast<il2cpp_array_size_t>(L_422));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_424 = V_4;
		int64_t L_425 = V_1;
		NullCheck(L_424);
		int32_t L_426 = ((int32_t)((int64_t)il2cpp_codegen_multiply(L_425, ((int64_t)2))));
		int16_t L_427 = (L_424)->GetAt(static_cast<il2cpp_array_size_t>(L_426));
		NullCheck(L_416);
		(L_416)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_417, ((int64_t)(L_418/((int64_t)4))))), L_419)))), (int32_t)((int32_t)(((int32_t)((int32_t)L_423<<((int32_t)16)))|(int32_t)L_427)));
		int64_t L_428 = V_1;
		V_1 = ((int64_t)il2cpp_codegen_add(L_428, ((int64_t)1)));
	}

IL_065d:
	{
		int64_t L_429 = V_1;
		int64_t L_430 = ___6_n;
		if ((((int64_t)L_429) < ((int64_t)((int64_t)(L_430/((int64_t)2))))))
		{
			goto IL_0633;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_431 = ___0_output;
		int64_t L_432 = ___1_pos;
		int64_t L_433 = ___2_step;
		int64_t L_434 = ___6_n;
		int64_t L_435 = ___6_n;
		int64_t L_436 = ___5_w;
		int64_t L_437 = ___6_n;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_438 = ___7_temp;
		CmceEngine_1_CBRecursion_m258015E400B0724D145D8ABA8AD9770F23FA6CD5(L_431, L_432, ((int64_t)il2cpp_codegen_multiply(L_433, ((int64_t)2))), (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)NULL, ((int32_t)il2cpp_codegen_multiply(((int32_t)((int64_t)il2cpp_codegen_add(L_434, ((int64_t)(L_435/((int64_t)4)))))), 2)), ((int64_t)il2cpp_codegen_subtract(L_436, ((int64_t)1))), ((int64_t)(L_437/((int64_t)2))), L_438, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_439 = ___0_output;
		int64_t L_440 = ___1_pos;
		int64_t L_441 = ___2_step;
		int64_t L_442 = ___2_step;
		int64_t L_443 = ___6_n;
		int64_t L_444 = ___6_n;
		int64_t L_445 = ___6_n;
		int64_t L_446 = ___5_w;
		int64_t L_447 = ___6_n;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_448 = ___7_temp;
		CmceEngine_1_CBRecursion_m258015E400B0724D145D8ABA8AD9770F23FA6CD5(L_439, ((int64_t)il2cpp_codegen_add(L_440, L_441)), ((int64_t)il2cpp_codegen_multiply(L_442, ((int64_t)2))), (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)NULL, ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add(L_443, ((int64_t)(L_444/((int64_t)4))))), ((int64_t)2))), ((int64_t)(L_445/((int64_t)2)))))), ((int64_t)il2cpp_codegen_subtract(L_446, ((int64_t)1))), ((int64_t)(L_447/((int64_t)2))), L_448, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_PKGen_m1008075863ECD43A05F5289345A0CAC73AB4E414_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_sk, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_perm, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___3_pi, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___4_pivots, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_4 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_5 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_6 = NULL;
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* V_7 = NULL;
	GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE V_8;
	memset((&V_8), 0, sizeof(V_8));
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	int32_t V_11 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_12 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_13 = NULL;
	uint8_t V_14 = 0x0;
	int32_t V_15 = 0;
	uint8_t V_16 = 0x0;
	int32_t V_17 = 0;
	uint8_t V_18 = 0x0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_19 = NULL;
	uint8_t V_20 = 0x0;
	int32_t V_21 = 0;
	uint8_t V_22 = 0x0;
	int32_t V_23 = 0;
	uint8_t V_24 = 0x0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_30 = NULL;
	uint64_t V_31 = 0;
	uint64_t V_32 = 0;
	int32_t V_33 = 0;
	uint64_t V_34 = 0;
	int32_t V_35 = 0;
	{
		int32_t L_0 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_0, 1)));
		V_0 = L_1;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = V_0;
		int32_t L_3 = __this->___SYS_T;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint16_t)1);
		V_1 = 0;
		goto IL_0034;
	}

IL_001b:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = V_0;
		int32_t L_5 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_sk;
		int32_t L_7 = V_1;
		int32_t L_8 = __this->___GFMASK;
		uint16_t L_9;
		L_9 = Utils_LoadGF_mA1B4A520DC31A92DE9732CA2682C82A780BA6557(L_6, ((int32_t)il2cpp_codegen_add(((int32_t)40), ((int32_t)il2cpp_codegen_multiply(L_7, 2)))), L_8, NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint16_t)L_9);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0034:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = __this->___SYS_T;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_13 = __this->___GFBITS;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_14 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_13&((int32_t)31))))));
		V_4 = L_14;
		V_1 = 0;
		goto IL_0065;
	}

IL_0053:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_15 = V_4;
		int32_t L_16 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___2_perm;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		int32_t L_21 = V_1;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int64_t)((int64_t)(((int64_t)(((int64_t)(uint64_t)((uint32_t)L_20))<<((int32_t)31)))|((int64_t)(uint64_t)((uint32_t)L_21)))));
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0065:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = __this->___GFBITS;
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(1<<((int32_t)(L_24&((int32_t)31))))))))
		{
			goto IL_0053;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_25 = V_4;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_26 = V_4;
		NullCheck(L_26);
		CmceEngine_1_Sort64_mC6E2DAB5A1901F7481AB6B60C59BD2FC7F47F666(L_25, 0, ((int32_t)(((RuntimeArray*)L_26)->max_length)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = 1;
		goto IL_009b;
	}

IL_0083:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_27 = V_4;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_subtract(L_28, 1));
		int64_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_31 = V_4;
		int32_t L_32 = V_1;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int64_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		if ((!(((uint64_t)((int64_t)(L_30>>((int32_t)31)))) == ((uint64_t)((int64_t)(L_34>>((int32_t)31)))))))
		{
			goto IL_0097;
		}
	}
	{
		return (-1);
	}

IL_0097:
	{
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_009b:
	{
		int32_t L_36 = V_1;
		int32_t L_37 = __this->___GFBITS;
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(1<<((int32_t)(L_37&((int32_t)31))))))))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_38 = __this->___SYS_N;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_39 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_38);
		V_5 = L_39;
		V_1 = 0;
		goto IL_00cf;
	}

IL_00ba:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_40 = ___3_pi;
		int32_t L_41 = V_1;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_42 = V_4;
		int32_t L_43 = V_1;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		int64_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		int32_t L_46 = __this->___GFMASK;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (uint16_t)((int32_t)(uint16_t)((int64_t)(L_45&((int64_t)L_46)))));
		int32_t L_47 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00cf:
	{
		int32_t L_48 = V_1;
		int32_t L_49 = __this->___GFBITS;
		if ((((int32_t)L_48) < ((int32_t)((int32_t)(1<<((int32_t)(L_49&((int32_t)31))))))))
		{
			goto IL_00ba;
		}
	}
	{
		V_1 = 0;
		goto IL_00f8;
	}

IL_00e1:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_50 = V_5;
		int32_t L_51 = V_1;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_52 = ___3_pi;
		int32_t L_53 = V_1;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		uint16_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		int32_t L_56 = __this->___GFBITS;
		uint16_t L_57;
		L_57 = Utils_Bitrev_mBB7A07B533A6F82506A5B438A5E6A63A5D91C774(L_55, L_56, NULL);
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_51), (uint16_t)L_57);
		int32_t L_58 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_00f8:
	{
		int32_t L_59 = V_1;
		int32_t L_60 = __this->___SYS_N;
		if ((((int32_t)L_59) < ((int32_t)L_60)))
		{
			goto IL_00e1;
		}
	}
	{
		int32_t L_61 = __this->___SYS_N;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_62 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_61);
		V_6 = L_62;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_63 = V_6;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_64 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_65 = V_5;
		CmceEngine_1_Root_m92DE41D81FB783B3A0B8956FDA30CC11A2DDB8A0(__this, L_63, L_64, L_65, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		V_1 = 0;
		goto IL_013e;
	}

IL_011d:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_66 = V_6;
		int32_t L_67 = V_1;
		GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE L_68 = __this->___gf;
		V_8 = L_68;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_69 = V_6;
		int32_t L_70 = V_1;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		uint16_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		uint16_t L_73;
		L_73 = GF13_GFInv_m0B5597C7AC9581BD5EBCD0EF92394C88B9626176((&V_8), L_72, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (uint16_t)L_73);
		int32_t L_74 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_013e:
	{
		int32_t L_75 = V_1;
		int32_t L_76 = __this->___SYS_N;
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_77 = __this->___PK_NROWS;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_78 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)L_77);
		V_7 = L_78;
		V_1 = 0;
		goto IL_016d;
	}

IL_0158:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_79 = V_7;
		int32_t L_80 = V_1;
		int32_t L_81 = __this->___SYS_N;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_81/8)));
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_80), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_82);
		int32_t L_83 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_83, 1));
	}

IL_016d:
	{
		int32_t L_84 = V_1;
		int32_t L_85 = __this->___PK_NROWS;
		if ((((int32_t)L_84) < ((int32_t)L_85)))
		{
			goto IL_0158;
		}
	}
	{
		V_1 = 0;
		goto IL_0370;
	}

IL_017d:
	{
		V_2 = 0;
		goto IL_032e;
	}

IL_0184:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_86 = V_6;
		int32_t L_87 = V_2;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		uint16_t L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_90 = V_6;
		int32_t L_91 = V_2;
		NullCheck(L_90);
		int32_t L_92 = ((int32_t)il2cpp_codegen_add(L_91, 2));
		uint16_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_94 = V_6;
		int32_t L_95 = V_2;
		NullCheck(L_94);
		int32_t L_96 = ((int32_t)il2cpp_codegen_add(L_95, 4));
		uint16_t L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_98 = V_6;
		int32_t L_99 = V_2;
		NullCheck(L_98);
		int32_t L_100 = ((int32_t)il2cpp_codegen_add(L_99, 6));
		uint16_t L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		V_9 = (uint64_t)((int64_t)(((int64_t)(((int64_t)(((int64_t)(uint64_t)((uint32_t)L_89))|((int64_t)(((int64_t)(uint64_t)((uint32_t)L_93))<<((int32_t)16)))))|((int64_t)(((int64_t)(uint64_t)((uint32_t)L_97))<<((int32_t)32)))))|((int64_t)(((int64_t)(uint64_t)((uint32_t)L_101))<<((int32_t)48)))));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_102 = V_6;
		int32_t L_103 = V_2;
		NullCheck(L_102);
		int32_t L_104 = ((int32_t)il2cpp_codegen_add(L_103, 1));
		uint16_t L_105 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_106 = V_6;
		int32_t L_107 = V_2;
		NullCheck(L_106);
		int32_t L_108 = ((int32_t)il2cpp_codegen_add(L_107, 3));
		uint16_t L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_110 = V_6;
		int32_t L_111 = V_2;
		NullCheck(L_110);
		int32_t L_112 = ((int32_t)il2cpp_codegen_add(L_111, 5));
		uint16_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_114 = V_6;
		int32_t L_115 = V_2;
		NullCheck(L_114);
		int32_t L_116 = ((int32_t)il2cpp_codegen_add(L_115, 7));
		uint16_t L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		V_10 = (uint64_t)((int64_t)(((int64_t)(((int64_t)(((int64_t)(uint64_t)((uint32_t)L_105))|((int64_t)(((int64_t)(uint64_t)((uint32_t)L_109))<<((int32_t)16)))))|((int64_t)(((int64_t)(uint64_t)((uint32_t)L_113))<<((int32_t)32)))))|((int64_t)(((int64_t)(uint64_t)((uint32_t)L_117))<<((int32_t)48)))));
		Bits_BitPermuteStep2_mD633E91B3F047AA742A6E89FE46CBE6E4D7F7D83_inline((&V_10), (&V_9), (uint64_t)((int64_t)71777214294589695LL), 8, NULL);
		uint64_t L_118 = V_9;
		uint64_t L_119;
		L_119 = Interleave_Transpose_m43B18C86692DE1007754FB76215EDF69597BC7F4(L_118, NULL);
		V_9 = L_119;
		uint64_t L_120 = V_10;
		uint64_t L_121;
		L_121 = Interleave_Transpose_m43B18C86692DE1007754FB76215EDF69597BC7F4(L_120, NULL);
		V_10 = L_121;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_122 = V_7;
		int32_t L_123 = V_1;
		int32_t L_124 = __this->___GFBITS;
		NullCheck(L_122);
		int32_t L_125 = ((int32_t)il2cpp_codegen_multiply(L_123, L_124));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_126 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		int32_t L_127 = V_2;
		uint64_t L_128 = V_9;
		NullCheck(L_126);
		(L_126)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_127/8))), (uint8_t)((int32_t)(uint8_t)L_128));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_129 = V_7;
		int32_t L_130 = V_1;
		int32_t L_131 = __this->___GFBITS;
		NullCheck(L_129);
		int32_t L_132 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_130, L_131)), 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_133 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		int32_t L_134 = V_2;
		uint64_t L_135 = V_9;
		NullCheck(L_133);
		(L_133)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_134/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_135>>8))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_136 = V_7;
		int32_t L_137 = V_1;
		int32_t L_138 = __this->___GFBITS;
		NullCheck(L_136);
		int32_t L_139 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_137, L_138)), 2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_140 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		int32_t L_141 = V_2;
		uint64_t L_142 = V_9;
		NullCheck(L_140);
		(L_140)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_141/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_142>>((int32_t)16)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_143 = V_7;
		int32_t L_144 = V_1;
		int32_t L_145 = __this->___GFBITS;
		NullCheck(L_143);
		int32_t L_146 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_144, L_145)), 3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_147 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		int32_t L_148 = V_2;
		uint64_t L_149 = V_9;
		NullCheck(L_147);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_148/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_149>>((int32_t)24)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_150 = V_7;
		int32_t L_151 = V_1;
		int32_t L_152 = __this->___GFBITS;
		NullCheck(L_150);
		int32_t L_153 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_151, L_152)), 4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_154 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		int32_t L_155 = V_2;
		uint64_t L_156 = V_9;
		NullCheck(L_154);
		(L_154)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_155/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_156>>((int32_t)32)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_157 = V_7;
		int32_t L_158 = V_1;
		int32_t L_159 = __this->___GFBITS;
		NullCheck(L_157);
		int32_t L_160 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_158, L_159)), 5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_161 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		int32_t L_162 = V_2;
		uint64_t L_163 = V_9;
		NullCheck(L_161);
		(L_161)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_162/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_163>>((int32_t)40)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_164 = V_7;
		int32_t L_165 = V_1;
		int32_t L_166 = __this->___GFBITS;
		NullCheck(L_164);
		int32_t L_167 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_165, L_166)), 6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_168 = (L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		int32_t L_169 = V_2;
		uint64_t L_170 = V_9;
		NullCheck(L_168);
		(L_168)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_169/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_170>>((int32_t)48)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_171 = V_7;
		int32_t L_172 = V_1;
		int32_t L_173 = __this->___GFBITS;
		NullCheck(L_171);
		int32_t L_174 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_172, L_173)), 7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_175 = (L_171)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		int32_t L_176 = V_2;
		uint64_t L_177 = V_9;
		NullCheck(L_175);
		(L_175)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_176/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_177>>((int32_t)56)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_178 = V_7;
		int32_t L_179 = V_1;
		int32_t L_180 = __this->___GFBITS;
		NullCheck(L_178);
		int32_t L_181 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_179, L_180)), 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_182 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		int32_t L_183 = V_2;
		uint64_t L_184 = V_10;
		NullCheck(L_182);
		(L_182)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_183/8))), (uint8_t)((int32_t)(uint8_t)L_184));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_185 = V_7;
		int32_t L_186 = V_1;
		int32_t L_187 = __this->___GFBITS;
		NullCheck(L_185);
		int32_t L_188 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_186, L_187)), ((int32_t)9)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_189 = (L_185)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		int32_t L_190 = V_2;
		uint64_t L_191 = V_10;
		NullCheck(L_189);
		(L_189)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_190/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_191>>8))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_192 = V_7;
		int32_t L_193 = V_1;
		int32_t L_194 = __this->___GFBITS;
		NullCheck(L_192);
		int32_t L_195 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_193, L_194)), ((int32_t)10)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_196 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		int32_t L_197 = V_2;
		uint64_t L_198 = V_10;
		NullCheck(L_196);
		(L_196)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_197/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_198>>((int32_t)16)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_199 = V_7;
		int32_t L_200 = V_1;
		int32_t L_201 = __this->___GFBITS;
		NullCheck(L_199);
		int32_t L_202 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_200, L_201)), ((int32_t)11)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_203 = (L_199)->GetAt(static_cast<il2cpp_array_size_t>(L_202));
		int32_t L_204 = V_2;
		uint64_t L_205 = V_10;
		NullCheck(L_203);
		(L_203)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_204/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_205>>((int32_t)24)))));
		int32_t L_206 = __this->___GFBITS;
		if ((((int32_t)L_206) <= ((int32_t)((int32_t)12))))
		{
			goto IL_032a;
		}
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_207 = V_7;
		int32_t L_208 = V_1;
		int32_t L_209 = __this->___GFBITS;
		NullCheck(L_207);
		int32_t L_210 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_208, L_209)), ((int32_t)12)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_211 = (L_207)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		int32_t L_212 = V_2;
		uint64_t L_213 = V_10;
		NullCheck(L_211);
		(L_211)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_212/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_213>>((int32_t)32)))));
	}

IL_032a:
	{
		int32_t L_214 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_214, 8));
	}

IL_032e:
	{
		int32_t L_215 = V_2;
		int32_t L_216 = __this->___SYS_N;
		if ((((int32_t)L_215) < ((int32_t)L_216)))
		{
			goto IL_0184;
		}
	}
	{
		V_2 = 0;
		goto IL_0363;
	}

IL_033e:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_217 = V_6;
		int32_t L_218 = V_2;
		GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE L_219 = __this->___gf;
		V_8 = L_219;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_220 = V_6;
		int32_t L_221 = V_2;
		NullCheck(L_220);
		int32_t L_222 = L_221;
		uint16_t L_223 = (L_220)->GetAt(static_cast<il2cpp_array_size_t>(L_222));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_224 = V_5;
		int32_t L_225 = V_2;
		NullCheck(L_224);
		int32_t L_226 = L_225;
		uint16_t L_227 = (L_224)->GetAt(static_cast<il2cpp_array_size_t>(L_226));
		uint16_t L_228;
		L_228 = GF13_GFMul_mF1A76D1513BBF51707F8AE6E7E8D854D645924C6((&V_8), L_223, L_227, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_217);
		(L_217)->SetAt(static_cast<il2cpp_array_size_t>(L_218), (uint16_t)L_228);
		int32_t L_229 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_229, 1));
	}

IL_0363:
	{
		int32_t L_230 = V_2;
		int32_t L_231 = __this->___SYS_N;
		if ((((int32_t)L_230) < ((int32_t)L_231)))
		{
			goto IL_033e;
		}
	}
	{
		int32_t L_232 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_232, 1));
	}

IL_0370:
	{
		int32_t L_233 = V_1;
		int32_t L_234 = __this->___SYS_T;
		if ((((int32_t)L_233) < ((int32_t)L_234)))
		{
			goto IL_017d;
		}
	}
	{
		V_11 = 0;
		goto IL_05bc;
	}

IL_0384:
	{
		int32_t L_235 = V_11;
		V_1 = ((int32_t)(L_235>>3));
		int32_t L_236 = V_11;
		V_2 = ((int32_t)(L_236&7));
		bool L_237 = __this->___usePivots;
		if (!L_237)
		{
			goto IL_03b3;
		}
	}
	{
		int32_t L_238 = V_11;
		int32_t L_239 = __this->___PK_NROWS;
		if ((!(((uint32_t)L_238) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_239, ((int32_t)32)))))))
		{
			goto IL_03b3;
		}
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_240 = V_7;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_241 = ___3_pi;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_242 = ___4_pivots;
		int32_t L_243;
		L_243 = CmceEngine_1_MovColumns_mFE3E6DD43905E83F18515A5D51B47F6511313D8F(__this, L_240, L_241, L_242, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		if (!L_243)
		{
			goto IL_03b3;
		}
	}
	{
		return (-1);
	}

IL_03b3:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_244 = V_7;
		int32_t L_245 = V_11;
		NullCheck(L_244);
		int32_t L_246 = L_245;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_247 = (L_244)->GetAt(static_cast<il2cpp_array_size_t>(L_246));
		V_12 = L_247;
		int32_t L_248 = V_11;
		V_3 = ((int32_t)il2cpp_codegen_add(L_248, 1));
		goto IL_04a7;
	}

IL_03c4:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_249 = V_7;
		int32_t L_250 = V_3;
		NullCheck(L_249);
		int32_t L_251 = L_250;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_252 = (L_249)->GetAt(static_cast<il2cpp_array_size_t>(L_251));
		V_13 = L_252;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_253 = V_12;
		int32_t L_254 = V_1;
		NullCheck(L_253);
		int32_t L_255 = L_254;
		uint8_t L_256 = (L_253)->GetAt(static_cast<il2cpp_array_size_t>(L_255));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_257 = V_13;
		int32_t L_258 = V_1;
		NullCheck(L_257);
		int32_t L_259 = L_258;
		uint8_t L_260 = (L_257)->GetAt(static_cast<il2cpp_array_size_t>(L_259));
		V_14 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_256^(int32_t)L_260)));
		uint8_t L_261 = V_14;
		int32_t L_262 = V_2;
		V_14 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_261>>((int32_t)(L_262&((int32_t)31))))));
		uint8_t L_263 = V_14;
		V_14 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_263&1)));
		V_15 = 0;
		uint8_t L_264 = V_14;
		V_16 = (uint8_t)((int32_t)(uint8_t)((-((int32_t)L_264))));
		int32_t L_265 = __this->___SYS_N;
		V_17 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_265/8)), 4));
		goto IL_046c;
	}

IL_03fe:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_266 = V_12;
		int32_t L_267 = V_15;
		NullCheck(L_266);
		uint8_t* L_268 = ((L_266)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_267)));
		int32_t L_269 = *((uint8_t*)L_268);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_270 = V_13;
		int32_t L_271 = V_15;
		NullCheck(L_270);
		int32_t L_272 = L_271;
		uint8_t L_273 = (L_270)->GetAt(static_cast<il2cpp_array_size_t>(L_272));
		uint8_t L_274 = V_16;
		*((int8_t*)L_268) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_269^((int32_t)(uint8_t)((int32_t)((int32_t)L_273&(int32_t)L_274))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_275 = V_12;
		int32_t L_276 = V_15;
		NullCheck(L_275);
		uint8_t* L_277 = ((L_275)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_276, 1)))));
		int32_t L_278 = *((uint8_t*)L_277);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_279 = V_13;
		int32_t L_280 = V_15;
		NullCheck(L_279);
		int32_t L_281 = ((int32_t)il2cpp_codegen_add(L_280, 1));
		uint8_t L_282 = (L_279)->GetAt(static_cast<il2cpp_array_size_t>(L_281));
		uint8_t L_283 = V_16;
		*((int8_t*)L_277) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_278^((int32_t)(uint8_t)((int32_t)((int32_t)L_282&(int32_t)L_283))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_284 = V_12;
		int32_t L_285 = V_15;
		NullCheck(L_284);
		uint8_t* L_286 = ((L_284)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_285, 2)))));
		int32_t L_287 = *((uint8_t*)L_286);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_288 = V_13;
		int32_t L_289 = V_15;
		NullCheck(L_288);
		int32_t L_290 = ((int32_t)il2cpp_codegen_add(L_289, 2));
		uint8_t L_291 = (L_288)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		uint8_t L_292 = V_16;
		*((int8_t*)L_286) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_287^((int32_t)(uint8_t)((int32_t)((int32_t)L_291&(int32_t)L_292))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_293 = V_12;
		int32_t L_294 = V_15;
		NullCheck(L_293);
		uint8_t* L_295 = ((L_293)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_294, 3)))));
		int32_t L_296 = *((uint8_t*)L_295);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_297 = V_13;
		int32_t L_298 = V_15;
		NullCheck(L_297);
		int32_t L_299 = ((int32_t)il2cpp_codegen_add(L_298, 3));
		uint8_t L_300 = (L_297)->GetAt(static_cast<il2cpp_array_size_t>(L_299));
		uint8_t L_301 = V_16;
		*((int8_t*)L_295) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_296^((int32_t)(uint8_t)((int32_t)((int32_t)L_300&(int32_t)L_301))))));
		int32_t L_302 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_302, 4));
	}

IL_046c:
	{
		int32_t L_303 = V_15;
		int32_t L_304 = V_17;
		if ((((int32_t)L_303) <= ((int32_t)L_304)))
		{
			goto IL_03fe;
		}
	}
	{
		uint8_t L_305 = V_14;
		V_18 = (uint8_t)((int32_t)(uint8_t)((-((int32_t)L_305))));
		goto IL_0497;
	}

IL_047a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_306 = V_12;
		int32_t L_307 = V_15;
		NullCheck(L_306);
		uint8_t* L_308 = ((L_306)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_307)));
		int32_t L_309 = *((uint8_t*)L_308);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_310 = V_13;
		int32_t L_311 = V_15;
		NullCheck(L_310);
		int32_t L_312 = L_311;
		uint8_t L_313 = (L_310)->GetAt(static_cast<il2cpp_array_size_t>(L_312));
		uint8_t L_314 = V_18;
		*((int8_t*)L_308) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_309^((int32_t)(uint8_t)((int32_t)((int32_t)L_313&(int32_t)L_314))))));
		int32_t L_315 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_315, 1));
	}

IL_0497:
	{
		int32_t L_316 = V_15;
		int32_t L_317 = __this->___SYS_N;
		if ((((int32_t)L_316) < ((int32_t)((int32_t)(L_317/8)))))
		{
			goto IL_047a;
		}
	}
	{
		int32_t L_318 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_318, 1));
	}

IL_04a7:
	{
		int32_t L_319 = V_3;
		int32_t L_320 = __this->___PK_NROWS;
		if ((((int32_t)L_319) < ((int32_t)L_320)))
		{
			goto IL_03c4;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_321 = V_12;
		int32_t L_322 = V_1;
		NullCheck(L_321);
		int32_t L_323 = L_322;
		uint8_t L_324 = (L_321)->GetAt(static_cast<il2cpp_array_size_t>(L_323));
		int32_t L_325 = V_2;
		if (((int32_t)(((int32_t)((int32_t)L_324>>((int32_t)(L_325&((int32_t)31)))))&1)))
		{
			goto IL_04c2;
		}
	}
	{
		return (-1);
	}

IL_04c2:
	{
		V_3 = 0;
		goto IL_05aa;
	}

IL_04c9:
	{
		int32_t L_326 = V_3;
		int32_t L_327 = V_11;
		if ((((int32_t)L_326) == ((int32_t)L_327)))
		{
			goto IL_05a6;
		}
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_328 = V_7;
		int32_t L_329 = V_3;
		NullCheck(L_328);
		int32_t L_330 = L_329;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_331 = (L_328)->GetAt(static_cast<il2cpp_array_size_t>(L_330));
		V_19 = L_331;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_332 = V_19;
		int32_t L_333 = V_1;
		NullCheck(L_332);
		int32_t L_334 = L_333;
		uint8_t L_335 = (L_332)->GetAt(static_cast<il2cpp_array_size_t>(L_334));
		int32_t L_336 = V_2;
		V_20 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_335>>((int32_t)(L_336&((int32_t)31))))));
		uint8_t L_337 = V_20;
		V_20 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_337&1)));
		V_21 = 0;
		uint8_t L_338 = V_20;
		V_22 = (uint8_t)((int32_t)(uint8_t)((-((int32_t)L_338))));
		int32_t L_339 = __this->___SYS_N;
		V_23 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_339/8)), 4));
		goto IL_056f;
	}

IL_0501:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_340 = V_19;
		int32_t L_341 = V_21;
		NullCheck(L_340);
		uint8_t* L_342 = ((L_340)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_341)));
		int32_t L_343 = *((uint8_t*)L_342);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_344 = V_12;
		int32_t L_345 = V_21;
		NullCheck(L_344);
		int32_t L_346 = L_345;
		uint8_t L_347 = (L_344)->GetAt(static_cast<il2cpp_array_size_t>(L_346));
		uint8_t L_348 = V_22;
		*((int8_t*)L_342) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_343^((int32_t)(uint8_t)((int32_t)((int32_t)L_347&(int32_t)L_348))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_349 = V_19;
		int32_t L_350 = V_21;
		NullCheck(L_349);
		uint8_t* L_351 = ((L_349)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_350, 1)))));
		int32_t L_352 = *((uint8_t*)L_351);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_353 = V_12;
		int32_t L_354 = V_21;
		NullCheck(L_353);
		int32_t L_355 = ((int32_t)il2cpp_codegen_add(L_354, 1));
		uint8_t L_356 = (L_353)->GetAt(static_cast<il2cpp_array_size_t>(L_355));
		uint8_t L_357 = V_22;
		*((int8_t*)L_351) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_352^((int32_t)(uint8_t)((int32_t)((int32_t)L_356&(int32_t)L_357))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_358 = V_19;
		int32_t L_359 = V_21;
		NullCheck(L_358);
		uint8_t* L_360 = ((L_358)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_359, 2)))));
		int32_t L_361 = *((uint8_t*)L_360);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_362 = V_12;
		int32_t L_363 = V_21;
		NullCheck(L_362);
		int32_t L_364 = ((int32_t)il2cpp_codegen_add(L_363, 2));
		uint8_t L_365 = (L_362)->GetAt(static_cast<il2cpp_array_size_t>(L_364));
		uint8_t L_366 = V_22;
		*((int8_t*)L_360) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_361^((int32_t)(uint8_t)((int32_t)((int32_t)L_365&(int32_t)L_366))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_367 = V_19;
		int32_t L_368 = V_21;
		NullCheck(L_367);
		uint8_t* L_369 = ((L_367)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_368, 3)))));
		int32_t L_370 = *((uint8_t*)L_369);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_371 = V_12;
		int32_t L_372 = V_21;
		NullCheck(L_371);
		int32_t L_373 = ((int32_t)il2cpp_codegen_add(L_372, 3));
		uint8_t L_374 = (L_371)->GetAt(static_cast<il2cpp_array_size_t>(L_373));
		uint8_t L_375 = V_22;
		*((int8_t*)L_369) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_370^((int32_t)(uint8_t)((int32_t)((int32_t)L_374&(int32_t)L_375))))));
		int32_t L_376 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_376, 4));
	}

IL_056f:
	{
		int32_t L_377 = V_21;
		int32_t L_378 = V_23;
		if ((((int32_t)L_377) <= ((int32_t)L_378)))
		{
			goto IL_0501;
		}
	}
	{
		uint8_t L_379 = V_20;
		V_24 = (uint8_t)((int32_t)(uint8_t)((-((int32_t)L_379))));
		goto IL_059a;
	}

IL_057d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_380 = V_19;
		int32_t L_381 = V_21;
		NullCheck(L_380);
		uint8_t* L_382 = ((L_380)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_381)));
		int32_t L_383 = *((uint8_t*)L_382);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_384 = V_12;
		int32_t L_385 = V_21;
		NullCheck(L_384);
		int32_t L_386 = L_385;
		uint8_t L_387 = (L_384)->GetAt(static_cast<il2cpp_array_size_t>(L_386));
		uint8_t L_388 = V_24;
		*((int8_t*)L_382) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_383^((int32_t)(uint8_t)((int32_t)((int32_t)L_387&(int32_t)L_388))))));
		int32_t L_389 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_389, 1));
	}

IL_059a:
	{
		int32_t L_390 = V_21;
		int32_t L_391 = __this->___SYS_N;
		if ((((int32_t)L_390) < ((int32_t)((int32_t)(L_391/8)))))
		{
			goto IL_057d;
		}
	}

IL_05a6:
	{
		int32_t L_392 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_392, 1));
	}

IL_05aa:
	{
		int32_t L_393 = V_3;
		int32_t L_394 = __this->___PK_NROWS;
		if ((((int32_t)L_393) < ((int32_t)L_394)))
		{
			goto IL_04c9;
		}
	}
	{
		int32_t L_395 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_395, 1));
	}

IL_05bc:
	{
		int32_t L_396 = V_11;
		int32_t L_397 = __this->___PK_NROWS;
		if ((((int32_t)L_396) < ((int32_t)L_397)))
		{
			goto IL_0384;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_398 = ___0_pk;
		if (!L_398)
		{
			goto IL_072a;
		}
	}
	{
		bool L_399 = __this->___usePadding;
		if (!L_399)
		{
			goto IL_06ee;
		}
	}
	{
		int32_t L_400 = __this->___PK_NROWS;
		V_25 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_400, 1))/8));
		int32_t L_401 = __this->___SYS_N;
		V_26 = ((int32_t)(L_401/8));
		V_27 = 0;
		int32_t L_402 = __this->___PK_NROWS;
		V_28 = ((int32_t)(L_402%8));
		int32_t L_403 = V_28;
		if (L_403)
		{
			goto IL_0635;
		}
	}
	{
		int32_t L_404 = V_26;
		int32_t L_405 = V_25;
		V_29 = ((int32_t)il2cpp_codegen_subtract(L_404, L_405));
		V_1 = 0;
		goto IL_0627;
	}

IL_060c:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_406 = V_7;
		int32_t L_407 = V_1;
		NullCheck(L_406);
		int32_t L_408 = L_407;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_409 = (L_406)->GetAt(static_cast<il2cpp_array_size_t>(L_408));
		int32_t L_410 = V_25;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_411 = ___0_pk;
		int32_t L_412 = V_27;
		int32_t L_413 = V_29;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_409, L_410, (RuntimeArray*)L_411, L_412, L_413, NULL);
		int32_t L_414 = V_27;
		int32_t L_415 = V_29;
		V_27 = ((int32_t)il2cpp_codegen_add(L_414, L_415));
		int32_t L_416 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_416, 1));
	}

IL_0627:
	{
		int32_t L_417 = V_1;
		int32_t L_418 = __this->___PK_NROWS;
		if ((((int32_t)L_417) < ((int32_t)L_418)))
		{
			goto IL_060c;
		}
	}
	{
		goto IL_072a;
	}

IL_0635:
	{
		V_1 = 0;
		goto IL_06e0;
	}

IL_063c:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_419 = V_7;
		int32_t L_420 = V_1;
		NullCheck(L_419);
		int32_t L_421 = L_420;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_422 = (L_419)->GetAt(static_cast<il2cpp_array_size_t>(L_421));
		V_30 = L_422;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_423 = V_30;
		int32_t L_424 = V_25;
		uint64_t L_425;
		L_425 = Pack_LE_To_UInt64_mB401DD9E769B441E6C4D14FB463B8AE5925654E4(L_423, L_424, NULL);
		V_31 = L_425;
		int32_t L_426 = V_25;
		V_2 = ((int32_t)il2cpp_codegen_add(L_426, 8));
		goto IL_0688;
	}

IL_0654:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_427 = V_30;
		int32_t L_428 = V_2;
		uint64_t L_429;
		L_429 = Pack_LE_To_UInt64_mB401DD9E769B441E6C4D14FB463B8AE5925654E4(L_427, L_428, NULL);
		V_32 = L_429;
		uint64_t L_430 = V_31;
		int32_t L_431 = V_28;
		uint64_t L_432 = V_32;
		int32_t L_433 = V_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_434 = ___0_pk;
		int32_t L_435 = V_27;
		Pack_UInt64_To_LE_mBE78DA6F52F26F76C818001B99972D8601FC07A5((uint64_t)((int64_t)(((int64_t)((uint64_t)L_430>>((int32_t)(L_431&((int32_t)63)))))|((int64_t)((int64_t)L_432<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_433))&((int32_t)63))))))), L_434, L_435, NULL);
		int32_t L_436 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_436, 8));
		uint64_t L_437 = V_32;
		V_31 = L_437;
		int32_t L_438 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_438, 8));
	}

IL_0688:
	{
		int32_t L_439 = V_2;
		int32_t L_440 = V_26;
		if ((((int32_t)L_439) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_440, 8)))))
		{
			goto IL_0654;
		}
	}
	{
		int32_t L_441 = V_26;
		int32_t L_442 = V_2;
		V_33 = ((int32_t)il2cpp_codegen_subtract(L_441, L_442));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_443 = V_30;
		int32_t L_444 = V_2;
		int32_t L_445 = V_33;
		uint64_t L_446;
		L_446 = Pack_LE_To_UInt64_Low_m2BDBC5AEA3B22D8AD1119FE569CDF6F28C45CACF(L_443, L_444, L_445, NULL);
		V_34 = L_446;
		uint64_t L_447 = V_31;
		int32_t L_448 = V_28;
		uint64_t L_449 = V_34;
		int32_t L_450 = V_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_451 = ___0_pk;
		int32_t L_452 = V_27;
		Pack_UInt64_To_LE_mBE78DA6F52F26F76C818001B99972D8601FC07A5((uint64_t)((int64_t)(((int64_t)((uint64_t)L_447>>((int32_t)(L_448&((int32_t)63)))))|((int64_t)((int64_t)L_449<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_450))&((int32_t)63))))))), L_451, L_452, NULL);
		int32_t L_453 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_453, 8));
		uint64_t L_454 = V_34;
		int32_t L_455 = V_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_456 = ___0_pk;
		int32_t L_457 = V_27;
		int32_t L_458 = V_33;
		Pack_UInt64_To_LE_Low_m9F090AE6FFCD86670F67C84013D7AD97B858842C((uint64_t)((int64_t)((uint64_t)L_454>>((int32_t)(L_455&((int32_t)63))))), L_456, L_457, L_458, NULL);
		int32_t L_459 = V_27;
		int32_t L_460 = V_33;
		V_27 = ((int32_t)il2cpp_codegen_add(L_459, L_460));
		int32_t L_461 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_461, 1));
	}

IL_06e0:
	{
		int32_t L_462 = V_1;
		int32_t L_463 = __this->___PK_NROWS;
		if ((((int32_t)L_462) < ((int32_t)L_463)))
		{
			goto IL_063c;
		}
	}
	{
		goto IL_072a;
	}

IL_06ee:
	{
		int32_t L_464 = __this->___SYS_N;
		int32_t L_465 = __this->___PK_NROWS;
		V_35 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_464, L_465)), 7))/8));
		V_1 = 0;
		goto IL_0721;
	}

IL_0705:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_466 = V_7;
		int32_t L_467 = V_1;
		NullCheck(L_466);
		int32_t L_468 = L_467;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_469 = (L_466)->GetAt(static_cast<il2cpp_array_size_t>(L_468));
		int32_t L_470 = __this->___PK_NROWS;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_471 = ___0_pk;
		int32_t L_472 = V_35;
		int32_t L_473 = V_1;
		int32_t L_474 = V_35;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_469, ((int32_t)(L_470/8)), (RuntimeArray*)L_471, ((int32_t)il2cpp_codegen_multiply(L_472, L_473)), L_474, NULL);
		int32_t L_475 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_475, 1));
	}

IL_0721:
	{
		int32_t L_476 = V_1;
		int32_t L_477 = __this->___PK_NROWS;
		if ((((int32_t)L_476) < ((int32_t)L_477)))
		{
			goto IL_0705;
		}
	}

IL_072a:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t CmceEngine_1_Eval_mF3627DF74FEFA3335867A7FB11A9CB645993D250_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_f, uint16_t ___1_a, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	int32_t V_1 = 0;
	GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_f;
		int32_t L_1 = __this->___SYS_T;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		int32_t L_4 = __this->___SYS_T;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		goto IL_0036;
	}

IL_0014:
	{
		GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE L_5 = __this->___gf;
		V_2 = L_5;
		uint16_t L_6 = V_0;
		uint16_t L_7 = ___1_a;
		uint16_t L_8;
		L_8 = GF13_GFMul_mF1A76D1513BBF51707F8AE6E7E8D854D645924C6((&V_2), L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_0 = L_8;
		uint16_t L_9 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_10 = ___0_f;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint16_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_0 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_9^(int32_t)L_13)));
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}

IL_0036:
	{
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		uint16_t L_16 = V_0;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Root_m92DE41D81FB783B3A0B8956FDA30CC11A2DDB8A0_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_f, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___2_L, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_output;
		int32_t L_1 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = ___1_f;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = ___2_L;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint16_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		uint16_t L_7;
		L_7 = CmceEngine_1_Eval_mF3627DF74FEFA3335867A7FB11A9CB645993D250(__this, L_2, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint16_t)L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0015:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = __this->___SYS_N;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_GenerateIrrPoly_m360038A0FD3B45A356F8F1C4045964E2B1630456_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_field, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	int32_t V_2 = 0;
	GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	uint16_t V_5 = 0;
	int32_t V_6 = 0;
	uint16_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	uint16_t V_11 = 0;
	int32_t V_12 = 0;
	{
		int32_t L_0 = __this->___SYS_T;
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_1 = (UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C*)(UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C*)SZArrayNew(UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_0, 1)));
		V_0 = L_1;
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_2 = V_0;
		int32_t L_3 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_3);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)L_4);
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint16_t)1);
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_8 = V_0;
		int32_t L_9 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_10 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_9);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)L_10);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_11 = ___0_field;
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 1;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = __this->___SYS_T;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, 0, (RuntimeArray*)L_14, 0, L_15, NULL);
		int32_t L_16 = __this->___SYS_T;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_16, 2)), 1)));
		V_1 = L_17;
		V_2 = 2;
		goto IL_00ca;
	}

IL_0055:
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_18 = V_0;
		int32_t L_19 = V_2;
		int32_t L_20 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_21 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_20);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)L_21);
		GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE L_22 = __this->___gf;
		V_3 = L_22;
		int32_t L_23 = __this->___SYS_T;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->___poly;
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_25 = V_0;
		int32_t L_26 = V_2;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_29 = V_0;
		int32_t L_30 = V_2;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)(L_30>>1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = V_1;
		GF13_GFSqrPoly_mE53CE6C0231FA0823CC7D21D5FE1971EB751575F((&V_3), L_23, L_24, L_28, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_34 = V_0;
		int32_t L_35 = V_2;
		int32_t L_36 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_37 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_36);
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_35, 1))), (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)L_37);
		GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE L_38 = __this->___gf;
		V_3 = L_38;
		int32_t L_39 = __this->___SYS_T;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = __this->___poly;
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_41 = V_0;
		int32_t L_42 = V_2;
		NullCheck(L_41);
		int32_t L_43 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_45 = V_0;
		int32_t L_46 = V_2;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_49 = ___0_field;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = V_1;
		GF13_GFMulPoly_mB0826825755DD148EC3924811EA7423B04978300((&V_3), L_39, L_40, L_44, L_48, L_49, L_50, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		int32_t L_51 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_51, 2));
	}

IL_00ca:
	{
		int32_t L_52 = V_2;
		int32_t L_53 = __this->___SYS_T;
		if ((((int32_t)L_52) < ((int32_t)L_53)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_54 = V_2;
		int32_t L_55 = __this->___SYS_T;
		if ((!(((uint32_t)L_54) == ((uint32_t)L_55))))
		{
			goto IL_0113;
		}
	}
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_56 = V_0;
		int32_t L_57 = V_2;
		int32_t L_58 = __this->___SYS_T;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_59 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_58);
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)L_59);
		GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE L_60 = __this->___gf;
		V_3 = L_60;
		int32_t L_61 = __this->___SYS_T;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = __this->___poly;
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_63 = V_0;
		int32_t L_64 = V_2;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_67 = V_0;
		int32_t L_68 = V_2;
		NullCheck(L_67);
		int32_t L_69 = ((int32_t)(L_68>>1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = V_1;
		GF13_GFSqrPoly_mE53CE6C0231FA0823CC7D21D5FE1971EB751575F((&V_3), L_61, L_62, L_66, L_70, L_71, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
	}

IL_0113:
	{
		V_4 = 0;
		goto IL_0254;
	}

IL_011b:
	{
		int32_t L_72 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_add(L_72, 1));
		goto IL_0179;
	}

IL_0123:
	{
		GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE L_73 = __this->___gf;
		V_3 = L_73;
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_74 = V_0;
		int32_t L_75 = V_4;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		int32_t L_78 = V_4;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		uint16_t L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		uint16_t L_81;
		L_81 = GF13_GFIsZero_m830B451519E00F8D2DDC27689C83F0076BAC7E7E((&V_3), L_80, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		V_7 = L_81;
		int32_t L_82 = V_4;
		V_8 = L_82;
		goto IL_0167;
	}

IL_0146:
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_83 = V_0;
		int32_t L_84 = V_8;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		int32_t L_87 = V_4;
		NullCheck(L_86);
		uint16_t* L_88 = ((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)));
		int32_t L_89 = *((uint16_t*)L_88);
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_90 = V_0;
		int32_t L_91 = V_8;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		int32_t L_94 = V_6;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		uint16_t L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		uint16_t L_97 = V_7;
		*((int16_t*)L_88) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_89^((int32_t)(uint16_t)((int32_t)((int32_t)L_96&(int32_t)L_97))))));
		int32_t L_98 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0167:
	{
		int32_t L_99 = V_8;
		int32_t L_100 = __this->___SYS_T;
		if ((((int32_t)L_99) < ((int32_t)((int32_t)il2cpp_codegen_add(L_100, 1)))))
		{
			goto IL_0146;
		}
	}
	{
		int32_t L_101 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_101, 1));
	}

IL_0179:
	{
		int32_t L_102 = V_6;
		int32_t L_103 = __this->___SYS_T;
		if ((((int32_t)L_102) < ((int32_t)L_103)))
		{
			goto IL_0123;
		}
	}
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_104 = V_0;
		int32_t L_105 = V_4;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		int32_t L_108 = V_4;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		uint16_t L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		if (L_110)
		{
			goto IL_018e;
		}
	}
	{
		return (-1);
	}

IL_018e:
	{
		GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE L_111 = __this->___gf;
		V_3 = L_111;
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_112 = V_0;
		int32_t L_113 = V_4;
		NullCheck(L_112);
		int32_t L_114 = L_113;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		int32_t L_116 = V_4;
		NullCheck(L_115);
		int32_t L_117 = L_116;
		uint16_t L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		uint16_t L_119;
		L_119 = GF13_GFInv_m0B5597C7AC9581BD5EBCD0EF92394C88B9626176((&V_3), L_118, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		V_5 = L_119;
		int32_t L_120 = V_4;
		V_9 = L_120;
		goto IL_01db;
	}

IL_01b1:
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_121 = V_0;
		int32_t L_122 = V_9;
		NullCheck(L_121);
		int32_t L_123 = L_122;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		int32_t L_125 = V_4;
		GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE L_126 = __this->___gf;
		V_3 = L_126;
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_127 = V_0;
		int32_t L_128 = V_9;
		NullCheck(L_127);
		int32_t L_129 = L_128;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_130 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		int32_t L_131 = V_4;
		NullCheck(L_130);
		int32_t L_132 = L_131;
		uint16_t L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		uint16_t L_134 = V_5;
		uint16_t L_135;
		L_135 = GF13_GFMul_mF1A76D1513BBF51707F8AE6E7E8D854D645924C6((&V_3), L_133, L_134, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_124);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(L_125), (uint16_t)L_135);
		int32_t L_136 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_01db:
	{
		int32_t L_137 = V_9;
		int32_t L_138 = __this->___SYS_T;
		if ((((int32_t)L_137) < ((int32_t)((int32_t)il2cpp_codegen_add(L_138, 1)))))
		{
			goto IL_01b1;
		}
	}
	{
		V_10 = 0;
		goto IL_0244;
	}

IL_01ec:
	{
		int32_t L_139 = V_10;
		int32_t L_140 = V_4;
		if ((((int32_t)L_139) == ((int32_t)L_140)))
		{
			goto IL_023e;
		}
	}
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_141 = V_0;
		int32_t L_142 = V_4;
		NullCheck(L_141);
		int32_t L_143 = L_142;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_144 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		int32_t L_145 = V_10;
		NullCheck(L_144);
		int32_t L_146 = L_145;
		uint16_t L_147 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		V_11 = L_147;
		int32_t L_148 = V_4;
		V_12 = L_148;
		goto IL_0234;
	}

IL_0201:
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_149 = V_0;
		int32_t L_150 = V_12;
		NullCheck(L_149);
		int32_t L_151 = L_150;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_152 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		int32_t L_153 = V_10;
		NullCheck(L_152);
		uint16_t* L_154 = ((L_152)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_153)));
		int32_t L_155 = *((uint16_t*)L_154);
		GF13_t5FC7B900266D813668AB8BBC19E335D404208BFE L_156 = __this->___gf;
		V_3 = L_156;
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_157 = V_0;
		int32_t L_158 = V_12;
		NullCheck(L_157);
		int32_t L_159 = L_158;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_160 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		int32_t L_161 = V_4;
		NullCheck(L_160);
		int32_t L_162 = L_161;
		uint16_t L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		uint16_t L_164 = V_11;
		uint16_t L_165;
		L_165 = GF13_GFMul_mF1A76D1513BBF51707F8AE6E7E8D854D645924C6((&V_3), L_163, L_164, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		*((int16_t*)L_154) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_155^(int32_t)L_165)));
		int32_t L_166 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_166, 1));
	}

IL_0234:
	{
		int32_t L_167 = V_12;
		int32_t L_168 = __this->___SYS_T;
		if ((((int32_t)L_167) <= ((int32_t)L_168)))
		{
			goto IL_0201;
		}
	}

IL_023e:
	{
		int32_t L_169 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_169, 1));
	}

IL_0244:
	{
		int32_t L_170 = V_10;
		int32_t L_171 = __this->___SYS_T;
		if ((((int32_t)L_170) < ((int32_t)L_171)))
		{
			goto IL_01ec;
		}
	}
	{
		int32_t L_172 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_172, 1));
	}

IL_0254:
	{
		int32_t L_173 = V_4;
		int32_t L_174 = __this->___SYS_T;
		if ((((int32_t)L_173) < ((int32_t)L_174)))
		{
			goto IL_011b;
		}
	}
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_175 = V_0;
		int32_t L_176 = __this->___SYS_T;
		NullCheck(L_175);
		int32_t L_177 = L_176;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_178 = (L_175)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_179 = ___0_field;
		int32_t L_180 = __this->___SYS_T;
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_178, (RuntimeArray*)L_179, L_180, NULL);
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_CheckPKPadding_m8E1E48498F715F2FC1EB85586F8497FE8C7EDCBA_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pk, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	{
		V_0 = (uint8_t)0;
		V_1 = 0;
		goto IL_0021;
	}

IL_0006:
	{
		uint8_t L_0 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_pk;
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___PK_ROW_BYTES;
		int32_t L_4 = __this->___PK_ROW_BYTES;
		NullCheck(L_1);
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2, L_3)), L_4)), 1));
		uint8_t L_6 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_0|(int32_t)L_6)));
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0021:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = __this->___PK_NROWS;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0006;
		}
	}
	{
		uint8_t L_10 = V_0;
		int32_t L_11 = __this->___PK_NCOLS;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_10&((int32_t)255)))>>((int32_t)(((int32_t)(L_11%8))&((int32_t)31))))));
		uint8_t L_12 = V_0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, 1)));
		uint8_t L_13 = V_0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_13&((int32_t)255)))>>7)));
		uint8_t L_14 = V_0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_CheckCPadding_m525F23DC7A8D52045F2A876B687F328259F2BEF2_gshared (CmceEngine_1_tEDC93FED0214E02219D287686424933B8E6FC86F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_c, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_c;
		int32_t L_1 = __this->___SYND_BYTES;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = __this->___PK_NROWS;
		return ((int32_t)il2cpp_codegen_subtract(((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_3&((int32_t)255)))>>((int32_t)(((int32_t)(L_4%8))&((int32_t)31)))))), 1)))&((int32_t)255)))>>7))), 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Sort32_m1B11E7B48FDBBD53A8DC5E41B35538068FCDC725_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_temp, int32_t ___1_from, int32_t ___2_to, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		int32_t L_0 = ___2_to;
		int32_t L_1 = ___1_from;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)2)))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		V_1 = 1;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_3 = V_1;
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
	}

IL_0011:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7)))))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_8 = V_1;
		V_2 = L_8;
		goto IL_0145;
	}

IL_001e:
	{
		V_3 = 0;
		goto IL_0089;
	}

IL_0022:
	{
		int32_t L_9 = V_3;
		int32_t L_10 = V_2;
		if (((int32_t)(L_9&L_10)))
		{
			goto IL_0085;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ___0_temp;
		int32_t L_12 = ___1_from;
		int32_t L_13 = V_3;
		int32_t L_14 = V_2;
		NullCheck(L_11);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_12, L_13)), L_14));
		int32_t L_16 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ___0_temp;
		int32_t L_18 = ___1_from;
		int32_t L_19 = V_3;
		NullCheck(L_17);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
		int32_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_4 = ((int32_t)(L_16^L_21));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = ___0_temp;
		int32_t L_23 = ___1_from;
		int32_t L_24 = V_3;
		int32_t L_25 = V_2;
		NullCheck(L_22);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_23, L_24)), L_25));
		int32_t L_27 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = ___0_temp;
		int32_t L_29 = ___1_from;
		int32_t L_30 = V_3;
		NullCheck(L_28);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_29, L_30));
		int32_t L_32 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_27, L_32));
		int32_t L_33 = V_5;
		int32_t L_34 = V_4;
		int32_t L_35 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = ___0_temp;
		int32_t L_37 = ___1_from;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		NullCheck(L_36);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_37, L_38)), L_39));
		int32_t L_41 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_5 = ((int32_t)(L_33^((int32_t)(L_34&((int32_t)(L_35^L_41))))));
		int32_t L_42 = V_5;
		V_5 = ((int32_t)(L_42>>((int32_t)31)));
		int32_t L_43 = V_5;
		int32_t L_44 = V_4;
		V_5 = ((int32_t)(L_43&L_44));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = ___0_temp;
		int32_t L_46 = ___1_from;
		int32_t L_47 = V_3;
		NullCheck(L_45);
		int32_t* L_48 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_46, L_47)))));
		int32_t L_49 = *((int32_t*)L_48);
		int32_t L_50 = V_5;
		*((int32_t*)L_48) = (int32_t)((int32_t)(L_49^L_50));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = ___0_temp;
		int32_t L_52 = ___1_from;
		int32_t L_53 = V_3;
		int32_t L_54 = V_2;
		NullCheck(L_51);
		int32_t* L_55 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_52, L_53)), L_54)))));
		int32_t L_56 = *((int32_t*)L_55);
		int32_t L_57 = V_5;
		*((int32_t*)L_55) = (int32_t)((int32_t)(L_56^L_57));
	}

IL_0085:
	{
		int32_t L_58 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_0089:
	{
		int32_t L_59 = V_3;
		int32_t L_60 = V_0;
		int32_t L_61 = V_2;
		if ((((int32_t)L_59) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_60, L_61)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_62 = V_1;
		V_6 = L_62;
		goto IL_0139;
	}

IL_0097:
	{
		V_7 = 0;
		goto IL_0128;
	}

IL_009f:
	{
		int32_t L_63 = V_7;
		int32_t L_64 = V_2;
		if (((int32_t)(L_63&L_64)))
		{
			goto IL_0122;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = ___0_temp;
		int32_t L_66 = ___1_from;
		int32_t L_67 = V_7;
		int32_t L_68 = V_2;
		NullCheck(L_65);
		int32_t L_69 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_66, L_67)), L_68));
		int32_t L_70 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		V_8 = L_70;
		int32_t L_71 = V_6;
		V_9 = L_71;
		goto IL_0113;
	}

IL_00b5:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = ___0_temp;
		int32_t L_73 = ___1_from;
		int32_t L_74 = V_7;
		int32_t L_75 = V_9;
		NullCheck(L_72);
		int32_t L_76 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_73, L_74)), L_75));
		int32_t L_77 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		int32_t L_78 = V_8;
		V_10 = ((int32_t)(L_77^L_78));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = ___0_temp;
		int32_t L_80 = ___1_from;
		int32_t L_81 = V_7;
		int32_t L_82 = V_9;
		NullCheck(L_79);
		int32_t L_83 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_80, L_81)), L_82));
		int32_t L_84 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		int32_t L_85 = V_8;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_84, L_85));
		int32_t L_86 = V_11;
		int32_t L_87 = V_10;
		int32_t L_88 = V_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = ___0_temp;
		int32_t L_90 = ___1_from;
		int32_t L_91 = V_7;
		int32_t L_92 = V_9;
		NullCheck(L_89);
		int32_t L_93 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_90, L_91)), L_92));
		int32_t L_94 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		V_11 = ((int32_t)(L_86^((int32_t)(L_87&((int32_t)(L_88^L_94))))));
		int32_t L_95 = V_11;
		V_11 = ((int32_t)(L_95>>((int32_t)31)));
		int32_t L_96 = V_11;
		int32_t L_97 = V_10;
		V_11 = ((int32_t)(L_96&L_97));
		int32_t L_98 = V_8;
		int32_t L_99 = V_11;
		V_8 = ((int32_t)(L_98^L_99));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100 = ___0_temp;
		int32_t L_101 = ___1_from;
		int32_t L_102 = V_7;
		int32_t L_103 = V_9;
		NullCheck(L_100);
		int32_t* L_104 = ((L_100)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_101, L_102)), L_103)))));
		int32_t L_105 = *((int32_t*)L_104);
		int32_t L_106 = V_11;
		*((int32_t*)L_104) = (int32_t)((int32_t)(L_105^L_106));
		int32_t L_107 = V_9;
		V_9 = ((int32_t)(L_107>>1));
	}

IL_0113:
	{
		int32_t L_108 = V_9;
		int32_t L_109 = V_2;
		if ((((int32_t)L_108) > ((int32_t)L_109)))
		{
			goto IL_00b5;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = ___0_temp;
		int32_t L_111 = ___1_from;
		int32_t L_112 = V_7;
		int32_t L_113 = V_2;
		int32_t L_114 = V_8;
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_111, L_112)), L_113))), (int32_t)L_114);
	}

IL_0122:
	{
		int32_t L_115 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_0128:
	{
		int32_t L_116 = V_7;
		int32_t L_117 = V_0;
		int32_t L_118 = V_6;
		if ((((int32_t)L_116) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_117, L_118)))))
		{
			goto IL_009f;
		}
	}
	{
		int32_t L_119 = V_6;
		V_6 = ((int32_t)(L_119>>1));
	}

IL_0139:
	{
		int32_t L_120 = V_6;
		int32_t L_121 = V_2;
		if ((((int32_t)L_120) > ((int32_t)L_121)))
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_122 = V_2;
		V_2 = ((int32_t)(L_122>>1));
	}

IL_0145:
	{
		int32_t L_123 = V_2;
		if ((((int32_t)L_123) > ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Sort64_mC6E2DAB5A1901F7481AB6B60C59BD2FC7F47F666_gshared (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_temp, int32_t ___1_from, int32_t ___2_to, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int64_t V_7 = 0;
	int32_t V_8 = 0;
	int64_t V_9 = 0;
	{
		int32_t L_0 = ___2_to;
		int32_t L_1 = ___1_from;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)2)))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		V_1 = 1;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_3 = V_1;
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
	}

IL_0011:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7)))))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_8 = V_1;
		V_2 = L_8;
		goto IL_0111;
	}

IL_001e:
	{
		V_3 = 0;
		goto IL_0073;
	}

IL_0022:
	{
		int32_t L_9 = V_3;
		int32_t L_10 = V_2;
		if (((int32_t)(L_9&L_10)))
		{
			goto IL_006f;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_11 = ___0_temp;
		int32_t L_12 = ___1_from;
		int32_t L_13 = V_3;
		int32_t L_14 = V_2;
		NullCheck(L_11);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_12, L_13)), L_14));
		int64_t L_16 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_17 = ___0_temp;
		int32_t L_18 = ___1_from;
		int32_t L_19 = V_3;
		NullCheck(L_17);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
		int64_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_4 = ((int64_t)il2cpp_codegen_subtract(L_16, L_21));
		int64_t L_22 = V_4;
		V_4 = ((int64_t)(L_22>>((int32_t)63)));
		int64_t L_23 = V_4;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_24 = ___0_temp;
		int32_t L_25 = ___1_from;
		int32_t L_26 = V_3;
		NullCheck(L_24);
		int32_t L_27 = ((int32_t)il2cpp_codegen_add(L_25, L_26));
		int64_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_29 = ___0_temp;
		int32_t L_30 = ___1_from;
		int32_t L_31 = V_3;
		int32_t L_32 = V_2;
		NullCheck(L_29);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_30, L_31)), L_32));
		int64_t L_34 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_4 = ((int64_t)(L_23&((int64_t)(L_28^L_34))));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_35 = ___0_temp;
		int32_t L_36 = ___1_from;
		int32_t L_37 = V_3;
		NullCheck(L_35);
		int64_t* L_38 = ((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, L_37)))));
		int64_t L_39 = *((int64_t*)L_38);
		int64_t L_40 = V_4;
		*((int64_t*)L_38) = (int64_t)((int64_t)(L_39^L_40));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41 = ___0_temp;
		int32_t L_42 = ___1_from;
		int32_t L_43 = V_3;
		int32_t L_44 = V_2;
		NullCheck(L_41);
		int64_t* L_45 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_42, L_43)), L_44)))));
		int64_t L_46 = *((int64_t*)L_45);
		int64_t L_47 = V_4;
		*((int64_t*)L_45) = (int64_t)((int64_t)(L_46^L_47));
	}

IL_006f:
	{
		int32_t L_48 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0073:
	{
		int32_t L_49 = V_3;
		int32_t L_50 = V_0;
		int32_t L_51 = V_2;
		if ((((int32_t)L_49) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_50, L_51)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_52 = V_1;
		V_5 = L_52;
		goto IL_0105;
	}

IL_0081:
	{
		V_6 = 0;
		goto IL_00f7;
	}

IL_0086:
	{
		int32_t L_53 = V_6;
		int32_t L_54 = V_2;
		if (((int32_t)(L_53&L_54)))
		{
			goto IL_00f1;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_55 = ___0_temp;
		int32_t L_56 = ___1_from;
		int32_t L_57 = V_6;
		int32_t L_58 = V_2;
		NullCheck(L_55);
		int32_t L_59 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_56, L_57)), L_58));
		int64_t L_60 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_7 = L_60;
		int32_t L_61 = V_5;
		V_8 = L_61;
		goto IL_00e2;
	}

IL_009c:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_62 = ___0_temp;
		int32_t L_63 = ___1_from;
		int32_t L_64 = V_6;
		int32_t L_65 = V_8;
		NullCheck(L_62);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_63, L_64)), L_65));
		int64_t L_67 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		int64_t L_68 = V_7;
		V_9 = ((int64_t)il2cpp_codegen_subtract(L_67, L_68));
		int64_t L_69 = V_9;
		V_9 = ((int64_t)(L_69>>((int32_t)63)));
		int64_t L_70 = V_9;
		int64_t L_71 = V_7;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_72 = ___0_temp;
		int32_t L_73 = ___1_from;
		int32_t L_74 = V_6;
		int32_t L_75 = V_8;
		NullCheck(L_72);
		int32_t L_76 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_73, L_74)), L_75));
		int64_t L_77 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		V_9 = ((int64_t)(L_70&((int64_t)(L_71^L_77))));
		int64_t L_78 = V_7;
		int64_t L_79 = V_9;
		V_7 = ((int64_t)(L_78^L_79));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_80 = ___0_temp;
		int32_t L_81 = ___1_from;
		int32_t L_82 = V_6;
		int32_t L_83 = V_8;
		NullCheck(L_80);
		int64_t* L_84 = ((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_81, L_82)), L_83)))));
		int64_t L_85 = *((int64_t*)L_84);
		int64_t L_86 = V_9;
		*((int64_t*)L_84) = (int64_t)((int64_t)(L_85^L_86));
		int32_t L_87 = V_8;
		V_8 = ((int32_t)(L_87>>1));
	}

IL_00e2:
	{
		int32_t L_88 = V_8;
		int32_t L_89 = V_2;
		if ((((int32_t)L_88) > ((int32_t)L_89)))
		{
			goto IL_009c;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_90 = ___0_temp;
		int32_t L_91 = ___1_from;
		int32_t L_92 = V_6;
		int32_t L_93 = V_2;
		int64_t L_94 = V_7;
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_91, L_92)), L_93))), (int64_t)L_94);
	}

IL_00f1:
	{
		int32_t L_95 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_95, 1));
	}

IL_00f7:
	{
		int32_t L_96 = V_6;
		int32_t L_97 = V_0;
		int32_t L_98 = V_5;
		if ((((int32_t)L_96) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_97, L_98)))))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_99 = V_5;
		V_5 = ((int32_t)(L_99>>1));
	}

IL_0105:
	{
		int32_t L_100 = V_5;
		int32_t L_101 = V_2;
		if ((((int32_t)L_100) > ((int32_t)L_101)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_102 = V_2;
		V_2 = ((int32_t)(L_102>>1));
	}

IL_0111:
	{
		int32_t L_103 = V_2;
		if ((((int32_t)L_103) > ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_get_IrrBytes_mED82256C4D84CF62493736BD2D5E2F65EA85A642_gshared (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_get_CondBytes_mAC06858E43BBA7AF78197CD65A1F4345B9BE36CD_gshared (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_get_PrivateKeySize_m543A180E827B0DDE4C8B5ECAEF9D96EB5510CFB1_gshared (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_0, L_1)), ((int32_t)(L_2/8)))), ((int32_t)40)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_get_PublicKeySize_mD797E87DB30A823F01FC9C05DB894D23EE5F29E2_gshared (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		return ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_1, L_2))/8));
	}

IL_0018:
	{
		int32_t L_3 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		return ((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_4/8)), ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_5, 1))/8))))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_get_CipherTextSize_m105A8DFE57AB77C564C0085816CFFA05815D74EB_gshared (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_get_DefaultSessionKeySize_m824553B49D53AA9EA41AFDD7870369C6EC1D9142_gshared (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1__ctor_mEB265E3A5DC5CF61BB18572DC4425575E5A03626_gshared (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78* __this, int32_t ___0_m, int32_t ___1_n, int32_t ___2_t, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_p, bool ___4_usePivots, int32_t ___5_defaultKeySize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Benes12_t997A724A91C540D3BC2D26E6083D332F69FF6812_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Benes13_t827CF5188E90B2F7143590FFBAC17B61EC989540_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		bool L_0 = ___4_usePivots;
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16), L_0);
		int32_t L_1 = ___1_n;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_1);
		int32_t L_2 = ___2_t;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_2);
		int32_t L_3 = ___0_m;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___3_p;
		il2cpp_codegen_write_instance_field_data<Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_4);
		int32_t L_5 = ___5_defaultKeySize;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_5);
		int32_t L_6 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), ((int32_t)il2cpp_codegen_multiply(L_6, 2)));
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_8 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), ((int32_t)il2cpp_codegen_multiply(((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_7, 4))&((int32_t)31))))), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_8)), 1)))));
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), ((int32_t)il2cpp_codegen_multiply(L_9, L_10)));
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)));
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), ((int32_t)(((int32_t)il2cpp_codegen_add(L_13, 7))/8)));
		int32_t L_14 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), ((int32_t)(((int32_t)il2cpp_codegen_add(L_14, 7))/8)));
		int32_t L_15 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_15&((int32_t)31))))), 1)));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		int32_t L_16 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_00ed;
		}
	}
	{
		int32_t L_17 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		int32_t L_18 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		int32_t L_19 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		Benes12_t997A724A91C540D3BC2D26E6083D332F69FF6812* L_20 = (Benes12_t997A724A91C540D3BC2D26E6083D332F69FF6812*)il2cpp_codegen_object_new(Benes12_t997A724A91C540D3BC2D26E6083D332F69FF6812_il2cpp_TypeInfo_var);
		Benes12__ctor_m90F8874F3B728F8B182A6AAEC4F36F682E10E38C(L_20, L_17, L_18, L_19, NULL);
		il2cpp_codegen_write_instance_field_data<Benes_t8AC0AA65ED1C71C2302BE761185972843084162A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), (Benes_t8AC0AA65ED1C71C2302BE761185972843084162A*)L_20);
		goto IL_010a;
	}

IL_00ed:
	{
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		int32_t L_22 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		int32_t L_23 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		Benes13_t827CF5188E90B2F7143590FFBAC17B61EC989540* L_24 = (Benes13_t827CF5188E90B2F7143590FFBAC17B61EC989540*)il2cpp_codegen_object_new(Benes13_t827CF5188E90B2F7143590FFBAC17B61EC989540_il2cpp_TypeInfo_var);
		Benes13__ctor_m1B4182A8B1F2194B9EAB19D85D13834BD6464629(L_24, L_21, L_22, L_23, NULL);
		il2cpp_codegen_write_instance_field_data<Benes_t8AC0AA65ED1C71C2302BE761185972843084162A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), (Benes_t8AC0AA65ED1C71C2302BE761185972843084162A*)L_24);
	}

IL_010a:
	{
		int32_t L_25 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), (bool)((!(((uint32_t)((int32_t)(L_25%8))) <= ((uint32_t)0)))? 1 : 0));
		int32_t L_26 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_27 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), (bool)((((int32_t)((int32_t)(1<<((int32_t)(L_26&((int32_t)31)))))) > ((int32_t)L_27))? 1 : 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CmceEngine_1_GeneratePublicKeyFromPrivateKey_mF517773F6D04BA4C43C79F47DA748039D0FEA156_gshared (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigestUtilities_t9010F44C7B0C26B12C62A83E3E437EC1273057AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_1 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_2&((int32_t)31))))));
		V_1 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		V_2 = L_4;
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_5&((int32_t)31))))));
		V_3 = L_6;
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		int32_t L_8 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(L_7/8)), ((int32_t)il2cpp_codegen_multiply(((int32_t)(1<<((int32_t)(L_8&((int32_t)31))))), 4)))));
		V_4 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_4;
		NullCheck(L_10);
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		V_5 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_10)->max_length)), ((int32_t)32))), L_11)), ((int32_t)il2cpp_codegen_multiply(((int32_t)(1<<((int32_t)(L_12&((int32_t)31))))), 4))));
		il2cpp_codegen_runtime_class_init_inline(NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var);
		DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* L_13 = ((NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_StaticFields*)il2cpp_codegen_static_fields_for(NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var))->___IdShake256;
		il2cpp_codegen_runtime_class_init_inline(DigestUtilities_t9010F44C7B0C26B12C62A83E3E437EC1273057AE_il2cpp_TypeInfo_var);
		RuntimeObject* L_14;
		L_14 = DigestUtilities_GetDigest_m10A7032BD51289CBEA8D954FE70C8FE85E5051C0(L_13, NULL);
		RuntimeObject* L_15 = L_14;
		NullCheck(L_15);
		InterfaceActionInvoker1< uint8_t >::Invoke(3, IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var, L_15, (uint8_t)((int32_t)64));
		RuntimeObject* L_16 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___0_sk;
		NullCheck(L_16);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var, L_16, L_17, 0, ((int32_t)32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_4;
		NullCheck(L_19);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_16, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var)));
		int32_t L_20;
		L_20 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_16, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var)), L_18, 0, ((int32_t)(((RuntimeArray*)L_19)->max_length)));
		V_6 = 0;
		goto IL_00bb;
	}

IL_00a3:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_3;
		int32_t L_22 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_4;
		int32_t L_24 = V_5;
		int32_t L_25 = V_6;
		uint32_t L_26;
		L_26 = Utils_Load4_mBE2F3F2D469C607BDB797F61754B699646E65C9D(L_23, ((int32_t)il2cpp_codegen_add(L_24, ((int32_t)il2cpp_codegen_multiply(L_25, 4)))), NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (uint32_t)L_26);
		int32_t L_27 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00bb:
	{
		int32_t L_28 = V_6;
		int32_t L_29 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(1<<((int32_t)(L_29&((int32_t)31))))))))
		{
			goto IL_00a3;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___0_sk;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_3;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_33 = V_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_34 = V_2;
		int32_t L_35;
		L_35 = ((  int32_t (*) (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_30, L_31, L_32, L_33, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_0;
		return L_36;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CmceEngine_1_DecompressPrivateKey_m3307AD212A5B1AACBF9B070BD80066896C3FB270_gshared (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigestUtilities_t9010F44C7B0C26B12C62A83E3E437EC1273057AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_7 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_8 = NULL;
	int32_t V_9 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_10 = NULL;
	int32_t V_11 = 0;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_12 = NULL;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_sk;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_sk;
		NullCheck(L_4);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		int32_t L_6 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(L_5/8)), ((int32_t)il2cpp_codegen_multiply(((int32_t)(1<<((int32_t)(L_6&((int32_t)31))))), 4)))), L_7)), ((int32_t)32))));
		V_1 = L_8;
		il2cpp_codegen_runtime_class_init_inline(NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var);
		DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* L_9 = ((NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_StaticFields*)il2cpp_codegen_static_fields_for(NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var))->___IdShake256;
		il2cpp_codegen_runtime_class_init_inline(DigestUtilities_t9010F44C7B0C26B12C62A83E3E437EC1273057AE_il2cpp_TypeInfo_var);
		RuntimeObject* L_10;
		L_10 = DigestUtilities_GetDigest_m10A7032BD51289CBEA8D954FE70C8FE85E5051C0(L_9, NULL);
		RuntimeObject* L_11 = L_10;
		NullCheck(L_11);
		InterfaceActionInvoker1< uint8_t >::Invoke(3, IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var, L_11, (uint8_t)((int32_t)64));
		RuntimeObject* L_12 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___0_sk;
		NullCheck(L_12);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var, L_12, L_13, 0, ((int32_t)32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_1;
		NullCheck(L_15);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_12, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var)));
		int32_t L_16;
		L_16 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_12, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var)), L_14, 0, ((int32_t)(((RuntimeArray*)L_15)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___0_sk;
		NullCheck(L_17);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))) > ((int32_t)((int32_t)40))))
		{
			goto IL_0102;
		}
	}
	{
		int32_t L_18 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_19 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_18);
		V_2 = L_19;
		int32_t L_20 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_20);
		V_3 = L_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_22)->max_length)), ((int32_t)32))), L_23));
		V_5 = 0;
		goto IL_00bd;
	}

IL_00a0:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_24 = V_2;
		int32_t L_25 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_1;
		int32_t L_27 = V_4;
		int32_t L_28 = V_5;
		int32_t L_29 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		uint16_t L_30;
		L_30 = Utils_LoadGF_mA1B4A520DC31A92DE9732CA2682C82A780BA6557(L_26, ((int32_t)il2cpp_codegen_add(L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)))), L_29, NULL);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint16_t)L_30);
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00bd:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_00a0;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_34 = V_2;
		int32_t L_35;
		L_35 = ((  int32_t (*) (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(__this, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_6 = 0;
		goto IL_00e8;
	}

IL_00d4:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_3;
		int32_t L_37 = V_6;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_38 = V_2;
		int32_t L_39 = V_6;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		uint16_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		Utils_StoreGF_m8B6C4F2DD1098E9BD33AB46AEF64FEEB4B29F98A(L_36, ((int32_t)il2cpp_codegen_multiply(L_37, 2)), L_41, NULL);
		int32_t L_42 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00e8:
	{
		int32_t L_43 = V_6;
		int32_t L_44 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_00d4;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_0;
		int32_t L_47 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_45, 0, (RuntimeArray*)L_46, ((int32_t)40), L_47, NULL);
	}

IL_0102:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = ___0_sk;
		NullCheck(L_48);
		int32_t L_49 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length))) > ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)40), L_49)))))
		{
			goto IL_0257;
		}
	}
	{
		int32_t L_50 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_50&((int32_t)31))))));
		V_7 = L_51;
		int32_t L_52 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_53 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_52&((int32_t)31))))));
		V_8 = L_53;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_1;
		NullCheck(L_54);
		int32_t L_55 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		int32_t L_56 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		V_9 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_54)->max_length)), ((int32_t)32))), L_55)), ((int32_t)il2cpp_codegen_multiply(((int32_t)(1<<((int32_t)(L_56&((int32_t)31))))), 4))));
		V_11 = 0;
		goto IL_0171;
	}

IL_0159:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = V_7;
		int32_t L_58 = V_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = V_1;
		int32_t L_60 = V_9;
		int32_t L_61 = V_11;
		uint32_t L_62;
		L_62 = Utils_Load4_mBE2F3F2D469C607BDB797F61754B699646E65C9D(L_59, ((int32_t)il2cpp_codegen_add(L_60, ((int32_t)il2cpp_codegen_multiply(L_61, 4)))), NULL);
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (uint32_t)L_62);
		int32_t L_63 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_0171:
	{
		int32_t L_64 = V_11;
		int32_t L_65 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(1<<((int32_t)(L_65&((int32_t)31))))))))
		{
			goto IL_0159;
		}
	}
	{
		bool L_66 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
		if (!L_66)
		{
			goto IL_01a1;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_67 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		V_12 = L_67;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = V_7;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_70 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_71 = V_12;
		int32_t L_72;
		L_72 = ((  int32_t (*) (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, L_68, L_69, L_70, L_71, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		goto IL_0218;
	}

IL_01a1:
	{
		int32_t L_73 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_74 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_73&((int32_t)31))))));
		V_13 = L_74;
		V_14 = 0;
		goto IL_01d0;
	}

IL_01b8:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_75 = V_13;
		int32_t L_76 = V_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = V_7;
		int32_t L_78 = V_14;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		uint32_t L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		int32_t L_81 = V_14;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(L_76), (int64_t)((int64_t)(((int64_t)(((int64_t)(uint64_t)((uint32_t)L_80))<<((int32_t)31)))|((int64_t)(uint64_t)((uint32_t)L_81)))));
		int32_t L_82 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01d0:
	{
		int32_t L_83 = V_14;
		int32_t L_84 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if ((((int32_t)L_83) < ((int32_t)((int32_t)(1<<((int32_t)(L_84&((int32_t)31))))))))
		{
			goto IL_01b8;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_85 = V_13;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_86 = V_13;
		NullCheck(L_86);
		((  void (*) (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_85, 0, ((int32_t)(((RuntimeArray*)L_86)->max_length)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_15 = 0;
		goto IL_0209;
	}

IL_01f0:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_87 = V_8;
		int32_t L_88 = V_15;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_89 = V_13;
		int32_t L_90 = V_15;
		NullCheck(L_89);
		int32_t L_91 = L_90;
		int64_t L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		int32_t L_93 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(L_88), (uint16_t)((int32_t)(uint16_t)((int64_t)(L_92&((int64_t)L_93)))));
		int32_t L_94 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_0209:
	{
		int32_t L_95 = V_15;
		int32_t L_96 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if ((((int32_t)L_95) < ((int32_t)((int32_t)(1<<((int32_t)(L_96&((int32_t)31))))))))
		{
			goto IL_01f0;
		}
	}

IL_0218:
	{
		int32_t L_97 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_97);
		V_10 = L_98;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_99 = V_10;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_100 = V_8;
		int32_t L_101 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_102 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		((  void (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, int64_t, int64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_99, L_100, ((int64_t)L_101), ((int64_t)((int32_t)(1<<((int32_t)(L_102&((int32_t)31)))))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_103 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = V_0;
		int32_t L_105 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_106 = V_10;
		NullCheck(L_106);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_103, 0, (RuntimeArray*)L_104, ((int32_t)il2cpp_codegen_add(L_105, ((int32_t)40))), ((int32_t)(((RuntimeArray*)L_106)->max_length)), NULL);
	}

IL_0257:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_108 = V_0;
		int32_t L_109;
		L_109 = ((  int32_t (*) (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		int32_t L_110 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		int32_t L_111 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_107, 0, (RuntimeArray*)L_108, ((int32_t)il2cpp_codegen_subtract(L_109, ((int32_t)(L_110/8)))), ((int32_t)(L_111/8)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = V_0;
		return L_112;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_KemKeypair_mED33FFD21B4AD09A151CA009664E144D2187E85A_gshared (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_sk, SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A* ___2_random, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_tB427528651FB4A564AE712360C5DB38FFB1BF525_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigestUtilities_t9010F44C7B0C26B12C62A83E3E437EC1273057AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_8 = NULL;
	int32_t V_9 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_10 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_11 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_1 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)64));
		SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A* L_3 = ___2_random;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck((Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)L_3);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)L_3, L_4);
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		int32_t L_6 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(L_5/8)), ((int32_t)il2cpp_codegen_multiply(((int32_t)(1<<((int32_t)(L_6&((int32_t)31))))), 4)))), ((int32_t)il2cpp_codegen_multiply(L_7, 2)))), ((int32_t)32))));
		V_2 = L_8;
		V_4 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		V_5 = L_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		V_6 = L_10;
		il2cpp_codegen_runtime_class_init_inline(NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var);
		DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* L_11 = ((NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_StaticFields*)il2cpp_codegen_static_fields_for(NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var))->___IdShake256;
		il2cpp_codegen_runtime_class_init_inline(DigestUtilities_t9010F44C7B0C26B12C62A83E3E437EC1273057AE_il2cpp_TypeInfo_var);
		RuntimeObject* L_12;
		L_12 = DigestUtilities_GetDigest_m10A7032BD51289CBEA8D954FE70C8FE85E5051C0(L_11, NULL);
		V_7 = L_12;
	}

IL_005d:
	{
		RuntimeObject* L_13 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		NullCheck(L_15);
		NullCheck(L_13);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var, L_13, L_14, 0, ((int32_t)(((RuntimeArray*)L_15)->max_length)));
		RuntimeObject* L_16 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_18);
		NullCheck(L_16);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var, L_16, L_17, 0, ((int32_t)(((RuntimeArray*)L_18)->max_length)));
		RuntimeObject* L_19 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_2;
		NullCheck(L_21);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_19, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var)));
		int32_t L_22;
		L_22 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_19, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var)), L_20, 0, ((int32_t)(((RuntimeArray*)L_21)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_2;
		NullCheck(L_23);
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), ((int32_t)32)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_2;
		int32_t L_25 = V_3;
		int32_t L_26 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Arrays_tB427528651FB4A564AE712360C5DB38FFB1BF525_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
		L_27 = Arrays_CopyOfRange_mC754E471D540DE8748936EA55F36B8F299BE5277(L_24, L_25, ((int32_t)il2cpp_codegen_add(L_26, ((int32_t)32))), NULL);
		V_1 = L_27;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___1_sk;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_28, 0, (RuntimeArray*)L_29, 0, ((int32_t)32), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31;
		L_31 = Arrays_CopyOfRange_mC754E471D540DE8748936EA55F36B8F299BE5277(L_30, 0, ((int32_t)32), NULL);
		V_5 = L_31;
		int32_t L_32 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_33 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_32);
		V_8 = L_33;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_2;
		NullCheck(L_34);
		int32_t L_35 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		V_9 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_34)->max_length)), ((int32_t)32))), ((int32_t)il2cpp_codegen_multiply(2, L_35))));
		int32_t L_36 = V_9;
		V_3 = L_36;
		V_13 = 0;
		goto IL_00f5;
	}

IL_00d7:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_37 = V_8;
		int32_t L_38 = V_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_2;
		int32_t L_40 = V_9;
		int32_t L_41 = V_13;
		int32_t L_42 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		uint16_t L_43;
		L_43 = Utils_LoadGF_mA1B4A520DC31A92DE9732CA2682C82A780BA6557(L_39, ((int32_t)il2cpp_codegen_add(L_40, ((int32_t)il2cpp_codegen_multiply(L_41, 2)))), L_42, NULL);
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (uint16_t)L_43);
		int32_t L_44 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00f5:
	{
		int32_t L_45 = V_13;
		int32_t L_46 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_00d7;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_47 = V_8;
		int32_t L_48;
		L_48 = ((  int32_t (*) (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(__this, L_47, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		if ((((int32_t)L_48) == ((int32_t)(-1))))
		{
			goto IL_005d;
		}
	}
	{
		V_4 = ((int32_t)40);
		V_14 = 0;
		goto IL_012e;
	}

IL_0116:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = ___1_sk;
		int32_t L_50 = V_4;
		int32_t L_51 = V_14;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_52 = V_8;
		int32_t L_53 = V_14;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		uint16_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		Utils_StoreGF_m8B6C4F2DD1098E9BD33AB46AEF64FEEB4B29F98A(L_49, ((int32_t)il2cpp_codegen_add(L_50, ((int32_t)il2cpp_codegen_multiply(L_51, 2)))), L_55, NULL);
		int32_t L_56 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_012e:
	{
		int32_t L_57 = V_14;
		int32_t L_58 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_0116;
		}
	}
	{
		int32_t L_59 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_59&((int32_t)31))))));
		V_10 = L_60;
		int32_t L_61 = V_3;
		int32_t L_62 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_61, ((int32_t)il2cpp_codegen_multiply(((int32_t)(1<<((int32_t)(L_62&((int32_t)31))))), 4))));
		V_15 = 0;
		goto IL_0176;
	}

IL_015f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = V_10;
		int32_t L_64 = V_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = V_2;
		int32_t L_66 = V_3;
		int32_t L_67 = V_15;
		uint32_t L_68;
		L_68 = Utils_Load4_mBE2F3F2D469C607BDB797F61754B699646E65C9D(L_65, ((int32_t)il2cpp_codegen_add(L_66, ((int32_t)il2cpp_codegen_multiply(L_67, 4)))), NULL);
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (uint32_t)L_68);
		int32_t L_69 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_69, 1));
	}

IL_0176:
	{
		int32_t L_70 = V_15;
		int32_t L_71 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if ((((int32_t)L_70) < ((int32_t)((int32_t)(1<<((int32_t)(L_71&((int32_t)31))))))))
		{
			goto IL_015f;
		}
	}
	{
		int32_t L_72 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_73 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_72&((int32_t)31))))));
		V_11 = L_73;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = ___0_pk;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = ___1_sk;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = V_10;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_77 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_78 = V_6;
		int32_t L_79;
		L_79 = ((  int32_t (*) (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_74, L_75, L_76, L_77, L_78, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((int32_t)L_79) == ((int32_t)(-1))))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_80 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_80);
		V_12 = L_81;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = V_12;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_83 = V_11;
		int32_t L_84 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_85 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		((  void (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, int64_t, int64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_82, L_83, ((int64_t)L_84), ((int64_t)((int32_t)(1<<((int32_t)(L_85&((int32_t)31)))))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = V_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_87 = ___1_sk;
		int32_t L_88 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = V_12;
		NullCheck(L_89);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_86, 0, (RuntimeArray*)L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)40))), ((int32_t)(((RuntimeArray*)L_89)->max_length)), NULL);
		int32_t L_90 = V_3;
		int32_t L_91 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_90, ((int32_t)(L_91/8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = V_2;
		int32_t L_93 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = ___1_sk;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = ___1_sk;
		NullCheck(L_95);
		int32_t L_96 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		int32_t L_97 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_92, L_93, (RuntimeArray*)L_94, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_95)->max_length)), ((int32_t)(L_96/8)))), ((int32_t)(L_97/8)), NULL);
		bool L_98 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
		if (L_98)
		{
			goto IL_0224;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_99 = ___1_sk;
		Utils_Store8_m349F1D35320490FC8EE900DA1C878C7EFE706584(L_99, ((int32_t)32), (uint64_t)((int64_t)(uint64_t)((uint32_t)(-1))), NULL);
		return;
	}

IL_0224:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = ___1_sk;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_101 = V_6;
		NullCheck(L_101);
		int32_t L_102 = 0;
		int64_t L_103 = (int64_t)(L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		Utils_Store8_m349F1D35320490FC8EE900DA1C878C7EFE706584(L_100, ((int32_t)32), (uint64_t)L_103, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Syndrome_mF81D777A5A65BA6FC4457B7DF8F7CE239FF94DCD_gshared (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_cipher_text, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_pk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_error_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_0/8)));
		V_0 = L_1;
		V_3 = 0;
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		V_5 = ((int32_t)(L_2%8));
		V_1 = 0;
		goto IL_0026;
	}

IL_001e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_cipher_text;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)0);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0026:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_001e;
		}
	}
	{
		V_1 = 0;
		goto IL_0156;
	}

IL_0036:
	{
		V_2 = 0;
		goto IL_0042;
	}

IL_003a:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (int16_t)0);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0042:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(L_12/8)))))
		{
			goto IL_003a;
		}
	}
	{
		V_2 = 0;
		goto IL_006d;
	}

IL_0051:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_13 = V_0;
		int32_t L_14 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		int32_t L_15 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		int32_t L_16 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___1_pk;
		int32_t L_18 = V_3;
		int32_t L_19 = V_2;
		NullCheck(L_17);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
		uint8_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(((int32_t)(L_14/8)), L_15)), L_16))), (int16_t)L_21);
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_006d:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0051;
		}
	}
	{
		bool L_25 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
		if (!L_25)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_26 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_26/8)), 1));
		goto IL_00bc;
	}

IL_008b:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_27 = V_0;
		int32_t L_28 = V_2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_29 = V_0;
		int32_t L_30 = V_2;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		int16_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		int32_t L_33 = V_5;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_34 = V_0;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		int16_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		int32_t L_38 = V_5;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int16_t)((int16_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_32&((int32_t)255)))<<((int32_t)(L_33&((int32_t)31)))))|((int32_t)(((int32_t)((int32_t)L_37&((int32_t)255)))>>((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_38))&((int32_t)31)))))))&((int32_t)255)))));
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
	}

IL_00bc:
	{
		int32_t L_40 = V_2;
		int32_t L_41 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		int32_t L_42 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		if ((((int32_t)L_40) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(L_41/8)), L_42)))))
		{
			goto IL_008b;
		}
	}

IL_00ce:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_43 = V_0;
		int32_t L_44 = V_1;
		NullCheck(L_43);
		int16_t* L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_44/8)))));
		int32_t L_46 = *((int16_t*)L_45);
		int32_t L_47 = V_1;
		*((int16_t*)L_45) = (int16_t)((int16_t)((int32_t)(L_46|(int32_t)((int16_t)((int32_t)(1<<((int32_t)(((int32_t)(L_47%8))&((int32_t)31)))))))));
		V_4 = (uint8_t)0;
		V_2 = 0;
		goto IL_00fe;
	}

IL_00ec:
	{
		uint8_t L_48 = V_4;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_49 = V_0;
		int32_t L_50 = V_2;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int16_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = ___2_error_vector;
		int32_t L_54 = V_2;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		uint8_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_48^((int32_t)(uint8_t)((int32_t)((int32_t)L_52&(int32_t)L_56))))));
		int32_t L_57 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_00fe:
	{
		int32_t L_58 = V_2;
		int32_t L_59 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_58) < ((int32_t)((int32_t)(L_59/8)))))
		{
			goto IL_00ec;
		}
	}
	{
		uint8_t L_60 = V_4;
		uint8_t L_61 = V_4;
		V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_60^((int32_t)(uint8_t)((int32_t)((int32_t)L_61>>4))))));
		uint8_t L_62 = V_4;
		uint8_t L_63 = V_4;
		V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_62^((int32_t)(uint8_t)((int32_t)((int32_t)L_63>>2))))));
		uint8_t L_64 = V_4;
		uint8_t L_65 = V_4;
		V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_64^((int32_t)(uint8_t)((int32_t)((int32_t)L_65>>1))))));
		uint8_t L_66 = V_4;
		V_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_66&1)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = ___0_cipher_text;
		int32_t L_68 = V_1;
		NullCheck(L_67);
		uint8_t* L_69 = ((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_68/8)))));
		int32_t L_70 = *((uint8_t*)L_69);
		uint8_t L_71 = V_4;
		int32_t L_72 = V_1;
		*((int8_t*)L_69) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_70|((int32_t)(uint8_t)((int32_t)((int32_t)L_71<<((int32_t)(((int32_t)(L_72%8))&((int32_t)31)))))))));
		int32_t L_73 = V_3;
		int32_t L_74 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		V_3 = ((int32_t)il2cpp_codegen_add(L_73, L_74));
		int32_t L_75 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_0156:
	{
		int32_t L_76 = V_1;
		int32_t L_77 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_0036;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_GenerateErrorVector_m15D10532FB4D040DCF9C83C347723A8128F60302_gshared (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_error_vector, SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A* ___1_random, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_1 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int16_t V_12 = 0;
	int32_t V_13 = 0;
	int16_t V_14 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_0, 2)));
		V_1 = L_1;
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_2 = L_3;
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_3 = L_5;
	}

IL_0026:
	{
		bool L_6 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15));
		if (!L_6)
		{
			goto IL_00bd;
		}
	}
	{
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_7, 4)));
		V_0 = L_8;
		SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A* L_9 = ___1_random;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		NullCheck((Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)L_9);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)L_9, L_10);
		V_6 = 0;
		goto IL_0065;
	}

IL_004b:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_11 = V_1;
		int32_t L_12 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		int32_t L_14 = V_6;
		int32_t L_15 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		uint16_t L_16;
		L_16 = Utils_LoadGF_mA1B4A520DC31A92DE9732CA2682C82A780BA6557(L_13, ((int32_t)il2cpp_codegen_multiply(L_14, 2)), L_15, NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint16_t)L_16);
		int32_t L_17 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0065:
	{
		int32_t L_18 = V_6;
		int32_t L_19 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_18) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_19, 2)))))
		{
			goto IL_004b;
		}
	}
	{
		V_5 = 0;
		V_7 = 0;
		goto IL_0098;
	}

IL_0079:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_20 = V_1;
		int32_t L_21 = V_7;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		uint16_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_0092;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_25 = V_2;
		int32_t L_26 = V_5;
		int32_t L_27 = L_26;
		V_5 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_28 = V_1;
		int32_t L_29 = V_7;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		uint16_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (uint16_t)L_31);
	}

IL_0092:
	{
		int32_t L_32 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0098:
	{
		int32_t L_33 = V_7;
		int32_t L_34 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_33) >= ((int32_t)((int32_t)il2cpp_codegen_multiply(L_34, 2)))))
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_35 = V_5;
		int32_t L_36 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0079;
		}
	}

IL_00ae:
	{
		int32_t L_37 = V_5;
		int32_t L_38 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_37) >= ((int32_t)L_38)))
		{
			goto IL_00fb;
		}
	}
	{
		goto IL_0026;
	}

IL_00bd:
	{
		int32_t L_39 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_39, 2)));
		V_0 = L_40;
		SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A* L_41 = ___1_random;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_0;
		NullCheck((Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)L_41);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)L_41, L_42);
		V_8 = 0;
		goto IL_00f1;
	}

IL_00d7:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_43 = V_2;
		int32_t L_44 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_0;
		int32_t L_46 = V_8;
		int32_t L_47 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		uint16_t L_48;
		L_48 = Utils_LoadGF_mA1B4A520DC31A92DE9732CA2682C82A780BA6557(L_45, ((int32_t)il2cpp_codegen_multiply(L_46, 2)), L_47, NULL);
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (uint16_t)L_48);
		int32_t L_49 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_00f1:
	{
		int32_t L_50 = V_8;
		int32_t L_51 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_00d7;
		}
	}

IL_00fb:
	{
		V_4 = 0;
		V_9 = 1;
		goto IL_0129;
	}

IL_0103:
	{
		V_10 = 0;
		goto IL_011d;
	}

IL_0108:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_52 = V_2;
		int32_t L_53 = V_9;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		uint16_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_56 = V_2;
		int32_t L_57 = V_10;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		uint16_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		if ((!(((uint32_t)L_55) == ((uint32_t)L_59))))
		{
			goto IL_0117;
		}
	}
	{
		V_4 = 1;
		goto IL_0123;
	}

IL_0117:
	{
		int32_t L_60 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_011d:
	{
		int32_t L_61 = V_10;
		int32_t L_62 = V_9;
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_0108;
		}
	}

IL_0123:
	{
		int32_t L_63 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_0129:
	{
		int32_t L_64 = V_9;
		int32_t L_65 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_64) >= ((int32_t)L_65)))
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_66 = V_4;
		if ((!(((uint32_t)L_66) == ((uint32_t)1))))
		{
			goto IL_0103;
		}
	}

IL_0138:
	{
		int32_t L_67 = V_4;
		if (L_67)
		{
			goto IL_0026;
		}
	}
	{
		V_11 = 0;
		goto IL_015a;
	}

IL_0144:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = V_3;
		int32_t L_69 = V_11;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_70 = V_2;
		int32_t L_71 = V_11;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		uint16_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(L_69), (uint8_t)((int32_t)(uint8_t)((int32_t)(1<<((int32_t)(((int32_t)((int32_t)L_73&7))&((int32_t)31)))))));
		int32_t L_74 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_015a:
	{
		int32_t L_75 = V_11;
		int32_t L_76 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_0144;
		}
	}
	{
		V_12 = (int16_t)0;
		goto IL_01ba;
	}

IL_0169:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = ___0_error_vector;
		int16_t L_78 = V_12;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(L_78), (uint8_t)0);
		V_13 = 0;
		goto IL_01a9;
	}

IL_0173:
	{
		int16_t L_79 = V_12;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_80 = V_2;
		int32_t L_81 = V_13;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		uint16_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		uint8_t L_84;
		L_84 = ((  uint8_t (*) (int16_t, int16_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_79, ((int16_t)((int32_t)((int32_t)L_83>>3))), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_14 = (int16_t)L_84;
		int16_t L_85 = V_14;
		V_14 = ((int16_t)((int32_t)((int32_t)L_85&((int32_t)255))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = ___0_error_vector;
		int16_t L_87 = V_12;
		NullCheck(L_86);
		uint8_t* L_88 = ((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)));
		int32_t L_89 = *((uint8_t*)L_88);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = V_3;
		int32_t L_91 = V_13;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		uint8_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		int16_t L_94 = V_14;
		*((int8_t*)L_88) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_89|((int32_t)(uint8_t)((int32_t)((int32_t)L_93&(int32_t)L_94))))));
		int32_t L_95 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_95, 1));
	}

IL_01a9:
	{
		int32_t L_96 = V_13;
		int32_t L_97 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_96) < ((int32_t)L_97)))
		{
			goto IL_0173;
		}
	}
	{
		int16_t L_98 = V_12;
		V_12 = ((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_98, 1)));
	}

IL_01ba:
	{
		int16_t L_99 = V_12;
		int32_t L_100 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_99) < ((int32_t)((int32_t)(L_100/8)))))
		{
			goto IL_0169;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Encrypt_mABF0F4AA956B7B61C938DC3EF1D495B2529052B1_gshared (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_cipher_text, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_pk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_error_vector, SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A* ___3_random, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___2_error_vector;
		SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A* L_1 = ___3_random;
		((  void (*) (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_cipher_text;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_pk;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___2_error_vector;
		((  void (*) (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_KemEnc_m15542819329505D6BD0311670346A3291478240D_gshared (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_cipher_text, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A* ___3_random, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigestUtilities_t9010F44C7B0C26B12C62A83E3E437EC1273057AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_0/8)));
		V_0 = L_1;
		V_3 = 0;
		bool L_2 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___2_pk;
		int32_t L_4;
		L_4 = ((  int32_t (*) (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_3 = L_4;
	}

IL_0020:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_cipher_text;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___2_pk;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A* L_8 = ___3_random;
		((  void (*) (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, SecureRandom_t287D2AB9F2B890FBCB659A46C495D2F5A84D0F8A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		il2cpp_codegen_runtime_class_init_inline(NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var);
		DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* L_9 = ((NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_StaticFields*)il2cpp_codegen_static_fields_for(NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var))->___IdShake256;
		il2cpp_codegen_runtime_class_init_inline(DigestUtilities_t9010F44C7B0C26B12C62A83E3E437EC1273057AE_il2cpp_TypeInfo_var);
		RuntimeObject* L_10;
		L_10 = DigestUtilities_GetDigest_m10A7032BD51289CBEA8D954FE70C8FE85E5051C0(L_9, NULL);
		RuntimeObject* L_11 = L_10;
		NullCheck(L_11);
		InterfaceActionInvoker1< uint8_t >::Invoke(3, IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var, L_11, (uint8_t)1);
		RuntimeObject* L_12 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		NullCheck(L_14);
		NullCheck(L_12);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var, L_12, L_13, 0, ((int32_t)(((RuntimeArray*)L_14)->max_length)));
		RuntimeObject* L_15 = L_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___0_cipher_text;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___0_cipher_text;
		NullCheck(L_17);
		NullCheck(L_15);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var, L_15, L_16, 0, ((int32_t)(((RuntimeArray*)L_17)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___1_key;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___1_key;
		NullCheck(L_19);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_15, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var)));
		int32_t L_20;
		L_20 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_15, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var)), L_18, 0, ((int32_t)(((RuntimeArray*)L_19)->max_length)));
		bool L_21 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
		if (!L_21)
		{
			goto IL_00b0;
		}
	}
	{
		int32_t L_22 = V_3;
		V_1 = (uint8_t)((int32_t)(uint8_t)L_22);
		uint8_t L_23 = V_1;
		V_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_23^((int32_t)255))));
		V_2 = 0;
		goto IL_008b;
	}

IL_007a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___0_cipher_text;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		uint8_t* L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)));
		int32_t L_27 = *((uint8_t*)L_26);
		uint8_t L_28 = V_1;
		*((int8_t*)L_26) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_27&(int32_t)L_28)));
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_008b:
	{
		int32_t L_30 = V_2;
		int32_t L_31 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_007a;
		}
	}
	{
		V_2 = 0;
		goto IL_00a9;
	}

IL_0098:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___1_key;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		uint8_t* L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)));
		int32_t L_35 = *((uint8_t*)L_34);
		uint8_t L_36 = V_1;
		*((int8_t*)L_34) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_35&(int32_t)L_36)));
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00a9:
	{
		int32_t L_38 = V_2;
		if ((((int32_t)L_38) < ((int32_t)((int32_t)32))))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_39 = V_3;
		return L_39;
	}

IL_00b0:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_KemDec_m37C327EF5AF4943B17E2848C03377F812D51CB40_gshared (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_cipher_text, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_sk, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DigestUtilities_t9010F44C7B0C26B12C62A83E3E437EC1273057AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int16_t V_5 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_0/8)));
		V_0 = L_1;
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		int32_t L_3 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(1, ((int32_t)(L_2/8)))), L_3)));
		V_1 = L_4;
		V_3 = 0;
		bool L_5 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_cipher_text;
		int32_t L_7;
		L_7 = ((  int32_t (*) (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_3 = L_7;
	}

IL_0037:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___2_sk;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___1_cipher_text;
		int32_t L_11;
		L_11 = ((  int32_t (*) (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(__this, L_8, L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_5 = (int16_t)((int32_t)(uint8_t)L_11);
		int16_t L_12 = V_5;
		V_5 = ((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, 1)));
		int16_t L_13 = V_5;
		V_5 = ((int16_t)((int32_t)((int32_t)L_13>>8)));
		int16_t L_14 = V_5;
		V_5 = ((int16_t)((int32_t)((int32_t)L_14&((int32_t)255))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_1;
		int16_t L_16 = V_5;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_16&1))));
		V_2 = 0;
		goto IL_0091;
	}

IL_0068:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		int32_t L_18 = V_2;
		int16_t L_19 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___2_sk;
		int32_t L_21 = V_2;
		int32_t L_22 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		int32_t L_23 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck(L_20);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_21, ((int32_t)40))), L_22)), L_23));
		uint8_t L_25 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int16_t L_26 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_0;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		uint8_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(1, L_18))), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((~((int32_t)L_19)))&(int32_t)L_25))|((int32_t)((int32_t)L_26&(int32_t)L_30))))));
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0091:
	{
		int32_t L_32 = V_2;
		int32_t L_33 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(L_33/8)))))
		{
			goto IL_0068;
		}
	}
	{
		V_2 = 0;
		goto IL_00b5;
	}

IL_00a0:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_1;
		int32_t L_35 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		int32_t L_36 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ___1_cipher_text;
		int32_t L_38 = V_2;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		uint8_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(1, ((int32_t)(L_35/8)))), L_36))), (uint8_t)L_40);
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00b5:
	{
		int32_t L_42 = V_2;
		int32_t L_43 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_00a0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var);
		DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* L_44 = ((NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_StaticFields*)il2cpp_codegen_static_fields_for(NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var))->___IdShake256;
		il2cpp_codegen_runtime_class_init_inline(DigestUtilities_t9010F44C7B0C26B12C62A83E3E437EC1273057AE_il2cpp_TypeInfo_var);
		RuntimeObject* L_45;
		L_45 = DigestUtilities_GetDigest_m10A7032BD51289CBEA8D954FE70C8FE85E5051C0(L_44, NULL);
		DerObjectIdentifier_tF8C1E5EA899C458D5984B4437815CB2A9DA650E6* L_46 = ((NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_StaticFields*)il2cpp_codegen_static_fields_for(NistObjectIdentifiers_tAF570DA7E0C10310891691F8AD9DC1BD443600C1_il2cpp_TypeInfo_var))->___IdShake256;
		RuntimeObject* L_47;
		L_47 = DigestUtilities_GetDigest_m10A7032BD51289CBEA8D954FE70C8FE85E5051C0(L_46, NULL);
		RuntimeObject* L_48 = L_47;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = V_1;
		NullCheck(L_50);
		NullCheck(L_48);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t2FD8404E2EF91CEABDC9E267A4DE84DE5A57F18E_il2cpp_TypeInfo_var, L_48, L_49, 0, ((int32_t)(((RuntimeArray*)L_50)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = ___0_key;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = ___0_key;
		NullCheck(L_52);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_48, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var)));
		int32_t L_53;
		L_53 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_48, IXof_t2CAF05EEC14376DE0C57FA42C8077360C86FE6C3_il2cpp_TypeInfo_var)), L_51, 0, ((int32_t)(((RuntimeArray*)L_52)->max_length)));
		bool L_54 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
		if (!L_54)
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_55 = V_3;
		V_4 = (uint8_t)((int32_t)(uint8_t)L_55);
		V_2 = 0;
		goto IL_0110;
	}

IL_00fe:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = ___0_key;
		int32_t L_57 = V_2;
		NullCheck(L_56);
		uint8_t* L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)));
		int32_t L_59 = *((uint8_t*)L_58);
		uint8_t L_60 = V_4;
		*((int8_t*)L_58) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_59|(int32_t)L_60)));
		int32_t L_61 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_0110:
	{
		int32_t L_62 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = ___0_key;
		NullCheck(L_63);
		if ((((int32_t)L_62) < ((int32_t)((int32_t)(((RuntimeArray*)L_63)->max_length)))))
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_64 = V_3;
		return L_64;
	}

IL_0118:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_Decrypt_m9A3F139580E52309D0DB36B1854C42AB14620C2A_gshared (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_error_vector, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_sk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_cipher_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	void* L_62 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	const Il2CppFullySharedGenericStruct L_57 = alloca(SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_0 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_1 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_2 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_3 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_4 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_5 = NULL;
	uint16_t V_6 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Il2CppFullySharedGenericStruct V_15 = alloca(SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
	memset(V_15, 0, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
	int32_t V_16 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_0, 1)));
		V_0 = L_1;
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_4, 2)));
		V_2 = L_5;
		int32_t L_6 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_7 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_6, 2)));
		V_3 = L_7;
		int32_t L_8 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_9 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_8, 1)));
		V_4 = L_9;
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_11 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_10);
		V_5 = L_11;
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_12/8)));
		V_7 = L_13;
		V_10 = 0;
		goto IL_0075;
	}

IL_0066:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_7;
		int32_t L_15 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___2_cipher_text;
		int32_t L_17 = V_10;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)L_19);
		int32_t L_20 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0075:
	{
		int32_t L_21 = V_10;
		int32_t L_22 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_23 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		V_11 = L_23;
		goto IL_0095;
	}

IL_0089:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_7;
		int32_t L_25 = V_11;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint8_t)0);
		int32_t L_26 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0095:
	{
		int32_t L_27 = V_11;
		int32_t L_28 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(L_28/8)))))
		{
			goto IL_0089;
		}
	}
	{
		V_12 = 0;
		goto IL_00c3;
	}

IL_00a6:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_29 = V_0;
		int32_t L_30 = V_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___1_sk;
		int32_t L_32 = V_12;
		int32_t L_33 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		uint16_t L_34;
		L_34 = Utils_LoadGF_mA1B4A520DC31A92DE9732CA2682C82A780BA6557(L_31, ((int32_t)il2cpp_codegen_add(((int32_t)40), ((int32_t)il2cpp_codegen_multiply(L_32, 2)))), L_33, NULL);
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (uint16_t)L_34);
		int32_t L_35 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00c3:
	{
		int32_t L_36 = V_12;
		int32_t L_37 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_00a6;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_38 = V_0;
		int32_t L_39 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (uint16_t)1);
		Benes_t8AC0AA65ED1C71C2302BE761185972843084162A* L_40 = *(Benes_t8AC0AA65ED1C71C2302BE761185972843084162A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_41 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___1_sk;
		NullCheck(L_40);
		VirtualActionInvoker2< UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4, L_40, L_41, L_42);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_43 = V_2;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_44 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_45 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_7;
		((  void (*) (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, L_43, L_44, L_45, L_46, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_47 = V_4;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_48 = V_2;
		((  void (*) (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(__this, L_47, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_49 = V_5;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_50 = V_4;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_51 = V_1;
		((  void (*) (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, L_49, L_50, L_51, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		V_13 = 0;
		goto IL_0112;
	}

IL_0107:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = ___0_error_vector;
		int32_t L_53 = V_13;
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (uint8_t)0);
		int32_t L_54 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0112:
	{
		int32_t L_55 = V_13;
		int32_t L_56 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_55) < ((int32_t)((int32_t)(L_56/8)))))
		{
			goto IL_0107;
		}
	}
	{
		V_8 = 0;
		V_14 = 0;
		goto IL_016c;
	}

IL_0126:
	{
		il2cpp_codegen_memcpy(L_57, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		il2cpp_codegen_memcpy(V_15, L_57, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_58 = V_5;
		int32_t L_59 = V_14;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		uint16_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		uint16_t L_63;
		L_63 = ConstrainedFuncInvoker1< uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 19), L_62, (void*)(Il2CppFullySharedGenericStruct*)V_15, L_61);
		V_6 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_63&1)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = ___0_error_vector;
		int32_t L_65 = V_14;
		NullCheck(L_64);
		uint8_t* L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_65/8)))));
		int32_t L_67 = *((uint8_t*)L_66);
		uint16_t L_68 = V_6;
		int32_t L_69 = V_14;
		*((int8_t*)L_66) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_67|((int32_t)(uint8_t)((int32_t)((int32_t)L_68<<((int32_t)(((int32_t)(L_69%8))&((int32_t)31)))))))));
		int32_t L_70 = V_8;
		uint16_t L_71 = V_6;
		V_8 = ((int32_t)il2cpp_codegen_add(L_70, (int32_t)L_71));
		int32_t L_72 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_016c:
	{
		int32_t L_73 = V_14;
		int32_t L_74 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_73) < ((int32_t)L_74)))
		{
			goto IL_0126;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_75 = V_3;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_76 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_77 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = ___0_error_vector;
		((  void (*) (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, L_75, L_76, L_77, L_78, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_79 = V_8;
		V_9 = L_79;
		int32_t L_80 = V_9;
		int32_t L_81 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		V_9 = ((int32_t)(L_80^L_81));
		V_16 = 0;
		goto IL_01a8;
	}

IL_0194:
	{
		int32_t L_82 = V_9;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_83 = V_2;
		int32_t L_84 = V_16;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		uint16_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_87 = V_3;
		int32_t L_88 = V_16;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		uint16_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		V_9 = ((int32_t)(L_82|((int32_t)((int32_t)L_86^(int32_t)L_90))));
		int32_t L_91 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_91, 1));
	}

IL_01a8:
	{
		int32_t L_92 = V_16;
		int32_t L_93 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_92) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_93, 2)))))
		{
			goto IL_0194;
		}
	}
	{
		int32_t L_94 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_94, 1));
		int32_t L_95 = V_9;
		V_9 = ((int32_t)(L_95>>((int32_t)15)));
		int32_t L_96 = V_9;
		V_9 = ((int32_t)(L_96&1));
		int32_t L_97 = V_9;
		int32_t L_98 = V_9;
		return ((int32_t)(L_98^1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_Min_mD1CA7AAC1D8D199F05708F0045FD80E366845619_gshared (uint16_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		uint16_t L_2 = ___0_a;
		return (int32_t)L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___1_b;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_BM_m99BBBD19A4F3D0DB0182E64F6578D487777C9AFE_gshared (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	void* L_30 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_39 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_66 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_78 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	const Il2CppFullySharedGenericStruct L_20 = alloca(SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
	const Il2CppFullySharedGenericStruct L_37 = L_20;
	const Il2CppFullySharedGenericStruct L_63 = L_20;
	const Il2CppFullySharedGenericStruct L_72 = L_20;
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	uint16_t V_2 = 0;
	uint16_t V_3 = 0;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_4 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_5 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_6 = NULL;
	uint16_t V_7 = 0;
	uint16_t V_8 = 0;
	uint16_t V_9 = 0;
	int32_t V_10 = 0;
	uint16_t V_11 = 0;
	uint32_t V_12 = 0;
	int32_t V_13 = 0;
	Il2CppFullySharedGenericStruct V_14 = alloca(SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
	memset(V_14, 0, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	{
		V_0 = (uint16_t)0;
		V_1 = (uint16_t)0;
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_0, 1)));
		V_4 = L_1;
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_2, 1)));
		V_5 = L_3;
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_4, 1)));
		V_6 = L_5;
		V_7 = (uint16_t)1;
		V_10 = 0;
		goto IL_004f;
	}

IL_0039:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = V_5;
		int32_t L_7 = V_10;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_8 = V_6;
		int32_t L_9 = V_10;
		int32_t L_10 = 0;
		V_11 = (uint16_t)L_10;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint16_t)L_10);
		uint16_t L_11 = V_11;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint16_t)L_11);
		int32_t L_12 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004f:
	{
		int32_t L_13 = V_10;
		int32_t L_14 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_13) < ((int32_t)((int32_t)il2cpp_codegen_add(L_14, 1)))))
		{
			goto IL_0039;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_15 = V_6;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_16 = V_5;
		int32_t L_17 = 1;
		V_11 = (uint16_t)L_17;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint16_t)L_17);
		uint16_t L_18 = V_11;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint16_t)L_18);
		V_0 = (uint16_t)0;
		goto IL_01d3;
	}

IL_0070:
	{
		V_12 = (uint32_t)0;
		V_13 = 0;
		goto IL_00a3;
	}

IL_0078:
	{
		uint32_t L_19 = V_12;
		il2cpp_codegen_memcpy(L_20, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		il2cpp_codegen_memcpy(V_14, L_20, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_21 = V_5;
		int32_t L_22 = V_13;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		uint16_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_25 = ___1_s;
		uint16_t L_26 = V_0;
		int32_t L_27 = V_13;
		NullCheck(L_25);
		int32_t L_28 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, L_27));
		uint16_t L_29 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		uint32_t L_31;
		L_31 = ConstrainedFuncInvoker2< uint32_t, uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 20), L_30, (void*)(Il2CppFullySharedGenericStruct*)V_14, L_24, L_29);
		V_12 = (uint32_t)((int32_t)((int32_t)L_19^(int32_t)L_31));
		int32_t L_32 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00a3:
	{
		int32_t L_33 = V_13;
		uint16_t L_34 = V_0;
		int32_t L_35 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		int32_t L_36;
		L_36 = ((  int32_t (*) (uint16_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_34, L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((((int32_t)L_33) <= ((int32_t)L_36)))
		{
			goto IL_0078;
		}
	}
	{
		il2cpp_codegen_memcpy(L_37, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		il2cpp_codegen_memcpy(V_14, L_37, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		uint32_t L_38 = V_12;
		uint16_t L_40;
		L_40 = ConstrainedFuncInvoker1< uint16_t, uint32_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 22), L_39, (void*)(Il2CppFullySharedGenericStruct*)V_14, L_38);
		V_8 = L_40;
		uint16_t L_41 = V_8;
		V_3 = L_41;
		uint16_t L_42 = V_3;
		V_3 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_42, 1)));
		uint16_t L_43 = V_3;
		V_3 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_43>>((int32_t)15))));
		uint16_t L_44 = V_3;
		V_3 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_44&1)));
		uint16_t L_45 = V_3;
		V_3 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_45, 1)));
		uint16_t L_46 = V_0;
		V_2 = L_46;
		uint16_t L_47 = V_2;
		uint16_t L_48 = V_1;
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_47, ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_multiply(2, (int32_t)L_48))))));
		uint16_t L_49 = V_2;
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_49>>((int32_t)15))));
		uint16_t L_50 = V_2;
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_50&1)));
		uint16_t L_51 = V_2;
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_51, 1)));
		uint16_t L_52 = V_2;
		uint16_t L_53 = V_3;
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_52&(int32_t)L_53)));
		V_15 = 0;
		goto IL_0118;
	}

IL_0108:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_54 = V_4;
		int32_t L_55 = V_15;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_56 = V_5;
		int32_t L_57 = V_15;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		uint16_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(L_55), (uint16_t)L_59);
		int32_t L_60 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_0118:
	{
		int32_t L_61 = V_15;
		int32_t L_62 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_61) <= ((int32_t)L_62)))
		{
			goto IL_0108;
		}
	}
	{
		il2cpp_codegen_memcpy(L_63, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		il2cpp_codegen_memcpy(V_14, L_63, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		uint16_t L_64 = V_7;
		uint16_t L_65 = V_8;
		uint16_t L_67;
		L_67 = ConstrainedFuncInvoker2< uint16_t, uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 23), L_66, (void*)(Il2CppFullySharedGenericStruct*)V_14, L_64, L_65);
		V_9 = L_67;
		V_16 = 0;
		goto IL_0175;
	}

IL_0142:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_68 = V_5;
		int32_t L_69 = V_16;
		NullCheck(L_68);
		uint16_t* L_70 = ((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)));
		int32_t L_71 = *((uint16_t*)L_70);
		il2cpp_codegen_memcpy(L_72, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		il2cpp_codegen_memcpy(V_14, L_72, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		uint16_t L_73 = V_9;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_74 = V_6;
		int32_t L_75 = V_16;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		uint16_t L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		uint16_t L_79;
		L_79 = ConstrainedFuncInvoker2< uint16_t, uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 24), L_78, (void*)(Il2CppFullySharedGenericStruct*)V_14, L_73, L_77);
		uint16_t L_80 = V_3;
		*((int16_t*)L_70) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_71^((int32_t)(uint16_t)((int32_t)((int32_t)L_79&(int32_t)L_80))))));
		int32_t L_81 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_81, 1));
	}

IL_0175:
	{
		int32_t L_82 = V_16;
		int32_t L_83 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_82) <= ((int32_t)L_83)))
		{
			goto IL_0142;
		}
	}
	{
		uint16_t L_84 = V_1;
		uint16_t L_85 = V_2;
		uint16_t L_86 = V_0;
		uint16_t L_87 = V_1;
		uint16_t L_88 = V_2;
		V_1 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_84&((~((int32_t)L_85)))))|((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_86, 1)), (int32_t)L_87))&(int32_t)L_88)))));
		int32_t L_89 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		V_17 = ((int32_t)il2cpp_codegen_subtract(L_89, 1));
		goto IL_01b7;
	}

IL_0199:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_90 = V_6;
		int32_t L_91 = V_17;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_92 = V_6;
		int32_t L_93 = V_17;
		NullCheck(L_92);
		int32_t L_94 = L_93;
		uint16_t L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		uint16_t L_96 = V_2;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_97 = V_4;
		int32_t L_98 = V_17;
		NullCheck(L_97);
		int32_t L_99 = L_98;
		uint16_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		uint16_t L_101 = V_2;
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_91, 1))), (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_95&((~((int32_t)L_96)))))|((int32_t)((int32_t)L_100&(int32_t)L_101))))));
		int32_t L_102 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
	}

IL_01b7:
	{
		int32_t L_103 = V_17;
		if ((((int32_t)L_103) >= ((int32_t)0)))
		{
			goto IL_0199;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_104 = V_6;
		NullCheck(L_104);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint16_t)0);
		uint16_t L_105 = V_7;
		uint16_t L_106 = V_2;
		uint16_t L_107 = V_8;
		uint16_t L_108 = V_2;
		V_7 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_105&((~((int32_t)L_106)))))|((int32_t)((int32_t)L_107&(int32_t)L_108)))));
		uint16_t L_109 = V_0;
		V_0 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_109, 1)));
	}

IL_01d3:
	{
		uint16_t L_110 = V_0;
		int32_t L_111 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_110) < ((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_111)))))
		{
			goto IL_0070;
		}
	}
	{
		V_18 = 0;
		goto IL_01fc;
	}

IL_01e6:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_112 = ___0_output;
		int32_t L_113 = V_18;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_114 = V_5;
		int32_t L_115 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		int32_t L_116 = V_18;
		NullCheck(L_114);
		int32_t L_117 = ((int32_t)il2cpp_codegen_subtract(L_115, L_116));
		uint16_t L_118 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		NullCheck(L_112);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(L_113), (uint16_t)L_118);
		int32_t L_119 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_119, 1));
	}

IL_01fc:
	{
		int32_t L_120 = V_18;
		int32_t L_121 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_120) <= ((int32_t)L_121)))
		{
			goto IL_01e6;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Synd_mDF98E97624F68B76D2D4A736D01A75DFF8606A33_gshared (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_f, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___2_L, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_r, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_14 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_22 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_45 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_47 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_52 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_61 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
	const Il2CppFullySharedGenericStruct L_19 = L_9;
	const Il2CppFullySharedGenericStruct L_42 = L_9;
	const Il2CppFullySharedGenericStruct L_58 = L_9;
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
	const Il2CppFullySharedGenericStruct L_43 = L_10;
	const Il2CppFullySharedGenericStruct L_49 = alloca(SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	uint16_t V_2 = 0;
	uint16_t V_3 = 0;
	Il2CppFullySharedGenericStruct V_4 = alloca(SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
	memset(V_4, 0, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
	Il2CppFullySharedGenericStruct V_5 = alloca(SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
	memset(V_5, 0, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	uint16_t V_8 = 0;
	uint16_t V_9 = 0;
	uint16_t V_10 = 0;
	uint16_t V_11 = 0;
	uint16_t V_12 = 0;
	int32_t V_13 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___3_r;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_2&1)));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = ___2_L;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint16_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = ___1_f;
		uint16_t L_7 = V_1;
		uint16_t L_8;
		L_8 = ((  uint16_t (*) (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, uint16_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		V_2 = L_8;
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		il2cpp_codegen_memcpy(V_4, L_9, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		il2cpp_codegen_memcpy(V_5, L_10, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		uint16_t L_11 = V_2;
		uint16_t L_13;
		L_13 = ConstrainedFuncInvoker1< uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 26), L_12, (void*)(Il2CppFullySharedGenericStruct*)V_5, L_11);
		uint16_t L_15;
		L_15 = ConstrainedFuncInvoker1< uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 27), L_14, (void*)(Il2CppFullySharedGenericStruct*)V_4, L_13);
		uint16_t L_16 = V_0;
		V_3 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_15&((int32_t)il2cpp_codegen_subtract(0, (int32_t)L_16)))));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_17 = ___0_output;
		uint16_t L_18 = V_3;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint16_t)L_18);
		V_6 = 1;
		goto IL_0072;
	}

IL_004f:
	{
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		il2cpp_codegen_memcpy(V_4, L_19, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		uint16_t L_20 = V_3;
		uint16_t L_21 = V_1;
		uint16_t L_23;
		L_23 = ConstrainedFuncInvoker2< uint16_t, uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 24), L_22, (void*)(Il2CppFullySharedGenericStruct*)V_4, L_20, L_21);
		V_3 = L_23;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_24 = ___0_output;
		int32_t L_25 = V_6;
		uint16_t L_26 = V_3;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint16_t)L_26);
		int32_t L_27 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0072:
	{
		int32_t L_28 = V_6;
		int32_t L_29 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_28) < ((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_29)))))
		{
			goto IL_004f;
		}
	}
	{
		V_7 = 1;
		goto IL_0149;
	}

IL_0086:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___3_r;
		int32_t L_31 = V_7;
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)(L_31/8));
		uint8_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		int32_t L_34 = V_7;
		V_8 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_33>>((int32_t)(((int32_t)(L_34%8))&((int32_t)31)))))&1)));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_35 = ___2_L;
		int32_t L_36 = V_7;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		uint16_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_9 = L_38;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_39 = ___1_f;
		uint16_t L_40 = V_9;
		uint16_t L_41;
		L_41 = ((  uint16_t (*) (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, uint16_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_39, L_40, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		V_10 = L_41;
		il2cpp_codegen_memcpy(L_42, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		il2cpp_codegen_memcpy(V_4, L_42, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		il2cpp_codegen_memcpy(L_43, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		il2cpp_codegen_memcpy(V_5, L_43, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		uint16_t L_44 = V_10;
		uint16_t L_46;
		L_46 = ConstrainedFuncInvoker1< uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 26), L_45, (void*)(Il2CppFullySharedGenericStruct*)V_5, L_44);
		uint16_t L_48;
		L_48 = ConstrainedFuncInvoker1< uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 27), L_47, (void*)(Il2CppFullySharedGenericStruct*)V_4, L_46);
		V_11 = L_48;
		il2cpp_codegen_memcpy(L_49, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		il2cpp_codegen_memcpy(V_4, L_49, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		uint16_t L_50 = V_11;
		uint16_t L_51 = V_8;
		uint16_t L_53;
		L_53 = ConstrainedFuncInvoker2< uint16_t, uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 24), L_52, (void*)(Il2CppFullySharedGenericStruct*)V_4, L_50, L_51);
		V_12 = L_53;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_54 = ___0_output;
		NullCheck(L_54);
		uint16_t* L_55 = ((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_56 = *((uint16_t*)L_55);
		uint16_t L_57 = V_12;
		*((int16_t*)L_55) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_56^(int32_t)L_57)));
		V_13 = 1;
		goto IL_0137;
	}

IL_0107:
	{
		il2cpp_codegen_memcpy(L_58, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		il2cpp_codegen_memcpy(V_4, L_58, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		uint16_t L_59 = V_12;
		uint16_t L_60 = V_9;
		uint16_t L_62;
		L_62 = ConstrainedFuncInvoker2< uint16_t, uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 24), L_61, (void*)(Il2CppFullySharedGenericStruct*)V_4, L_59, L_60);
		V_12 = L_62;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_63 = ___0_output;
		int32_t L_64 = V_13;
		NullCheck(L_63);
		uint16_t* L_65 = ((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64)));
		int32_t L_66 = *((uint16_t*)L_65);
		uint16_t L_67 = V_12;
		*((int16_t*)L_65) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_66^(int32_t)L_67)));
		int32_t L_68 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_68, 1));
	}

IL_0137:
	{
		int32_t L_69 = V_13;
		int32_t L_70 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_69) < ((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_70)))))
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_71 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_71, 1));
	}

IL_0149:
	{
		int32_t L_72 = V_7;
		int32_t L_73 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_0086;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_MovColumns_mF9B88CE31D922ACD34516A50ABC61185786F873D_gshared (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___0_mat, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_pi, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___2_pivots, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_6 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_7 = NULL;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_12 = NULL;
	int32_t V_13 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		V_6 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_7 = L_1;
		V_11 = (uint64_t)((int64_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		V_12 = L_2;
		int32_t L_3 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_3, ((int32_t)32)));
		int32_t L_4 = V_4;
		V_3 = ((int32_t)(L_4/8));
		int32_t L_5 = V_4;
		V_5 = ((int32_t)(L_5%8));
		bool L_6 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
		if (!L_6)
		{
			goto IL_00a3;
		}
	}
	{
		V_0 = 0;
		goto IL_009c;
	}

IL_0041:
	{
		V_1 = 0;
		goto IL_0057;
	}

IL_0045:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_12;
		int32_t L_8 = V_1;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_9 = ___0_mat;
		int32_t L_10 = V_4;
		int32_t L_11 = V_0;
		NullCheck(L_9);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_10, L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14 = V_3;
		int32_t L_15 = V_1;
		NullCheck(L_13);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_14, L_15));
		uint8_t L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)L_17);
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0057:
	{
		int32_t L_19 = V_1;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)9))))
		{
			goto IL_0045;
		}
	}
	{
		V_1 = 0;
		goto IL_0088;
	}

IL_0060:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_12;
		int32_t L_21 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_12;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_12;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		uint8_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31 = V_5;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_25&((int32_t)255)))>>((int32_t)(L_26&((int32_t)31)))))|((int32_t)((int32_t)L_30<<((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_31))&((int32_t)31)))))))));
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0088:
	{
		int32_t L_33 = V_1;
		if ((((int32_t)L_33) < ((int32_t)8)))
		{
			goto IL_0060;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_34 = V_6;
		int32_t L_35 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_12;
		uint64_t L_37;
		L_37 = Utils_Load8_m0720549A7D3C2F9F8E9297A699B9CA3DFB761D28(L_36, 0, NULL);
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (uint64_t)L_37);
		int32_t L_38 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_009c:
	{
		int32_t L_39 = V_0;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)32))))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_00c0;
	}

IL_00a3:
	{
		V_0 = 0;
		goto IL_00bb;
	}

IL_00a7:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_40 = V_6;
		int32_t L_41 = V_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_42 = ___0_mat;
		int32_t L_43 = V_4;
		int32_t L_44 = V_0;
		NullCheck(L_42);
		int32_t L_45 = ((int32_t)il2cpp_codegen_add(L_43, L_44));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		int32_t L_47 = V_3;
		uint64_t L_48;
		L_48 = Utils_Load8_m0720549A7D3C2F9F8E9297A699B9CA3DFB761D28(L_46, L_47, NULL);
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (uint64_t)L_48);
		int32_t L_49 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_00bb:
	{
		int32_t L_50 = V_0;
		if ((((int32_t)L_50) < ((int32_t)((int32_t)32))))
		{
			goto IL_00a7;
		}
	}

IL_00c0:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_51 = ___2_pivots;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)0));
		V_0 = 0;
		goto IL_0186;
	}

IL_00cc:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_52 = V_6;
		int32_t L_53 = V_0;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		int64_t L_55 = (int64_t)(L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_8 = (uint64_t)L_55;
		int32_t L_56 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_00e5;
	}

IL_00d8:
	{
		uint64_t L_57 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_58 = V_6;
		int32_t L_59 = V_1;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		int64_t L_61 = (int64_t)(L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_8 = (uint64_t)((int64_t)((int64_t)L_57|L_61));
		int32_t L_62 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_00e5:
	{
		int32_t L_63 = V_1;
		if ((((int32_t)L_63) < ((int32_t)((int32_t)32))))
		{
			goto IL_00d8;
		}
	}
	{
		uint64_t L_64 = V_8;
		if (L_64)
		{
			goto IL_00f0;
		}
	}
	{
		return (-1);
	}

IL_00f0:
	{
		uint64_t L_65 = V_8;
		int32_t L_66;
		L_66 = ((  int32_t (*) (uint64_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(L_65, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_13 = L_66;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = V_7;
		int32_t L_68 = V_0;
		int32_t L_69 = V_13;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (int32_t)L_69);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_70 = ___2_pivots;
		NullCheck(L_70);
		uint64_t* L_71 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int64_t L_72 = *((int64_t*)L_71);
		uint64_t L_73 = V_11;
		int32_t L_74 = V_13;
		*((int64_t*)L_71) = (int64_t)((int64_t)(L_72|((int64_t)((int64_t)L_73<<((int32_t)(L_74&((int32_t)63)))))));
		int32_t L_75 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_0145;
	}

IL_0118:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_76 = V_6;
		int32_t L_77 = V_0;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		int64_t L_79 = (int64_t)(L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		int32_t L_80 = V_13;
		V_10 = (uint64_t)((int64_t)(((int64_t)((uint64_t)L_79>>((int32_t)(L_80&((int32_t)63)))))&((int64_t)1)));
		uint64_t L_81 = V_10;
		V_10 = (uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_81, ((int64_t)1)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_82 = V_6;
		int32_t L_83 = V_0;
		NullCheck(L_82);
		uint64_t* L_84 = ((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_83)));
		int64_t L_85 = *((int64_t*)L_84);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_86 = V_6;
		int32_t L_87 = V_1;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		int64_t L_89 = (int64_t)(L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		uint64_t L_90 = V_10;
		*((int64_t*)L_84) = (int64_t)((int64_t)(L_85^((int64_t)(L_89&(int64_t)L_90))));
		int32_t L_91 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_91, 1));
	}

IL_0145:
	{
		int32_t L_92 = V_1;
		if ((((int32_t)L_92) < ((int32_t)((int32_t)32))))
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_93 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_93, 1));
		goto IL_017d;
	}

IL_0150:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_94 = V_6;
		int32_t L_95 = V_1;
		NullCheck(L_94);
		int32_t L_96 = L_95;
		int64_t L_97 = (int64_t)(L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		int32_t L_98 = V_13;
		V_10 = (uint64_t)((int64_t)(((int64_t)((uint64_t)L_97>>((int32_t)(L_98&((int32_t)63)))))&((int64_t)1)));
		uint64_t L_99 = V_10;
		V_10 = (uint64_t)((int64_t)il2cpp_codegen_subtract(((int64_t)0), (int64_t)L_99));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_100 = V_6;
		int32_t L_101 = V_1;
		NullCheck(L_100);
		uint64_t* L_102 = ((L_100)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_101)));
		int64_t L_103 = *((int64_t*)L_102);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_104 = V_6;
		int32_t L_105 = V_0;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		int64_t L_107 = (int64_t)(L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		uint64_t L_108 = V_10;
		*((int64_t*)L_102) = (int64_t)((int64_t)(L_103^((int64_t)(L_107&(int64_t)L_108))));
		int32_t L_109 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_109, 1));
	}

IL_017d:
	{
		int32_t L_110 = V_1;
		if ((((int32_t)L_110) < ((int32_t)((int32_t)32))))
		{
			goto IL_0150;
		}
	}
	{
		int32_t L_111 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0186:
	{
		int32_t L_112 = V_0;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)32))))
		{
			goto IL_00cc;
		}
	}
	{
		V_1 = 0;
		goto IL_01ea;
	}

IL_0192:
	{
		int32_t L_113 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_113, 1));
		goto IL_01e1;
	}

IL_0198:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_114 = ___1_pi;
		int32_t L_115 = V_4;
		int32_t L_116 = V_1;
		NullCheck(L_114);
		int32_t L_117 = ((int32_t)il2cpp_codegen_add(L_115, L_116));
		uint16_t L_118 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_119 = ___1_pi;
		int32_t L_120 = V_4;
		int32_t L_121 = V_2;
		NullCheck(L_119);
		int32_t L_122 = ((int32_t)il2cpp_codegen_add(L_120, L_121));
		uint16_t L_123 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		V_9 = (uint64_t)((int64_t)((int32_t)((int32_t)L_118^(int32_t)L_123)));
		uint64_t L_124 = V_9;
		int32_t L_125 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_126 = V_7;
		int32_t L_127 = V_1;
		NullCheck(L_126);
		int32_t L_128 = L_127;
		int32_t L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		uint64_t L_130;
		L_130 = ((  uint64_t (*) (uint16_t, uint16_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))((uint16_t)((int32_t)(uint16_t)L_125), (uint16_t)((int32_t)(uint16_t)L_129), il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_9 = (uint64_t)((int64_t)((int64_t)L_124&(int64_t)L_130));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_131 = ___1_pi;
		int32_t L_132 = V_4;
		int32_t L_133 = V_1;
		NullCheck(L_131);
		uint16_t* L_134 = ((L_131)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_132, L_133)))));
		int32_t L_135 = *((uint16_t*)L_134);
		uint64_t L_136 = V_9;
		*((int16_t*)L_134) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_135^((int32_t)(uint16_t)L_136))));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_137 = ___1_pi;
		int32_t L_138 = V_4;
		int32_t L_139 = V_2;
		NullCheck(L_137);
		uint16_t* L_140 = ((L_137)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_138, L_139)))));
		int32_t L_141 = *((uint16_t*)L_140);
		uint64_t L_142 = V_9;
		*((int16_t*)L_140) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_141^((int32_t)(uint16_t)L_142))));
		int32_t L_143 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_01e1:
	{
		int32_t L_144 = V_2;
		if ((((int32_t)L_144) < ((int32_t)((int32_t)64))))
		{
			goto IL_0198;
		}
	}
	{
		int32_t L_145 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_145, 1));
	}

IL_01ea:
	{
		int32_t L_146 = V_1;
		if ((((int32_t)L_146) < ((int32_t)((int32_t)32))))
		{
			goto IL_0192;
		}
	}
	{
		V_0 = 0;
		goto IL_0369;
	}

IL_01f6:
	{
		bool L_147 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
		if (!L_147)
		{
			goto IL_0252;
		}
	}
	{
		V_2 = 0;
		goto IL_0211;
	}

IL_0202:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_148 = V_12;
		int32_t L_149 = V_2;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_150 = ___0_mat;
		int32_t L_151 = V_0;
		NullCheck(L_150);
		int32_t L_152 = L_151;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_153 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		int32_t L_154 = V_3;
		int32_t L_155 = V_2;
		NullCheck(L_153);
		int32_t L_156 = ((int32_t)il2cpp_codegen_add(L_154, L_155));
		uint8_t L_157 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		NullCheck(L_148);
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(L_149), (uint8_t)L_157);
		int32_t L_158 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_158, 1));
	}

IL_0211:
	{
		int32_t L_159 = V_2;
		if ((((int32_t)L_159) < ((int32_t)((int32_t)9))))
		{
			goto IL_0202;
		}
	}
	{
		V_2 = 0;
		goto IL_0242;
	}

IL_021a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_160 = V_12;
		int32_t L_161 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_162 = V_12;
		int32_t L_163 = V_2;
		NullCheck(L_162);
		int32_t L_164 = L_163;
		uint8_t L_165 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		int32_t L_166 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_167 = V_12;
		int32_t L_168 = V_2;
		NullCheck(L_167);
		int32_t L_169 = ((int32_t)il2cpp_codegen_add(L_168, 1));
		uint8_t L_170 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		int32_t L_171 = V_5;
		NullCheck(L_160);
		(L_160)->SetAt(static_cast<il2cpp_array_size_t>(L_161), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_165&((int32_t)255)))>>((int32_t)(L_166&((int32_t)31)))))|((int32_t)((int32_t)L_170<<((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_171))&((int32_t)31)))))))));
		int32_t L_172 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_172, 1));
	}

IL_0242:
	{
		int32_t L_173 = V_2;
		if ((((int32_t)L_173) < ((int32_t)8)))
		{
			goto IL_021a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_174 = V_12;
		uint64_t L_175;
		L_175 = Utils_Load8_m0720549A7D3C2F9F8E9297A699B9CA3DFB761D28(L_174, 0, NULL);
		V_8 = L_175;
		goto IL_025d;
	}

IL_0252:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_176 = ___0_mat;
		int32_t L_177 = V_0;
		NullCheck(L_176);
		int32_t L_178 = L_177;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_179 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		int32_t L_180 = V_3;
		uint64_t L_181;
		L_181 = Utils_Load8_m0720549A7D3C2F9F8E9297A699B9CA3DFB761D28(L_179, L_180, NULL);
		V_8 = L_181;
	}

IL_025d:
	{
		V_1 = 0;
		goto IL_029f;
	}

IL_0261:
	{
		uint64_t L_182 = V_8;
		int32_t L_183 = V_1;
		V_9 = (uint64_t)((int64_t)((uint64_t)L_182>>((int32_t)(L_183&((int32_t)63)))));
		uint64_t L_184 = V_9;
		uint64_t L_185 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_186 = V_7;
		int32_t L_187 = V_1;
		NullCheck(L_186);
		int32_t L_188 = L_187;
		int32_t L_189 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		V_9 = (uint64_t)((int64_t)((int64_t)L_184^((int64_t)((uint64_t)L_185>>((int32_t)(L_189&((int32_t)63)))))));
		uint64_t L_190 = V_9;
		V_9 = (uint64_t)((int64_t)((int64_t)L_190&((int64_t)1)));
		uint64_t L_191 = V_8;
		uint64_t L_192 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_193 = V_7;
		int32_t L_194 = V_1;
		NullCheck(L_193);
		int32_t L_195 = L_194;
		int32_t L_196 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		V_8 = (uint64_t)((int64_t)((int64_t)L_191^((int64_t)((int64_t)L_192<<((int32_t)(L_196&((int32_t)63)))))));
		uint64_t L_197 = V_8;
		uint64_t L_198 = V_9;
		int32_t L_199 = V_1;
		V_8 = (uint64_t)((int64_t)((int64_t)L_197^((int64_t)((int64_t)L_198<<((int32_t)(L_199&((int32_t)63)))))));
		int32_t L_200 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_200, 1));
	}

IL_029f:
	{
		int32_t L_201 = V_1;
		if ((((int32_t)L_201) < ((int32_t)((int32_t)32))))
		{
			goto IL_0261;
		}
	}
	{
		bool L_202 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
		if (!L_202)
		{
			goto IL_035a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_203 = V_12;
		uint64_t L_204 = V_8;
		Utils_Store8_m349F1D35320490FC8EE900DA1C878C7EFE706584(L_203, 0, L_204, NULL);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_205 = ___0_mat;
		int32_t L_206 = V_0;
		NullCheck(L_205);
		int32_t L_207 = L_206;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_208 = (L_205)->GetAt(static_cast<il2cpp_array_size_t>(L_207));
		int32_t L_209 = V_3;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_210 = ___0_mat;
		int32_t L_211 = V_0;
		NullCheck(L_210);
		int32_t L_212 = L_211;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_213 = (L_210)->GetAt(static_cast<il2cpp_array_size_t>(L_212));
		int32_t L_214 = V_3;
		NullCheck(L_213);
		int32_t L_215 = ((int32_t)il2cpp_codegen_add(L_214, 8));
		uint8_t L_216 = (L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_215));
		int32_t L_217 = V_5;
		int32_t L_218 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_219 = V_12;
		NullCheck(L_219);
		int32_t L_220 = 7;
		uint8_t L_221 = (L_219)->GetAt(static_cast<il2cpp_array_size_t>(L_220));
		int32_t L_222 = V_5;
		NullCheck(L_208);
		(L_208)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_209, 8))), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_216&((int32_t)255)))>>((int32_t)(L_217&((int32_t)31)))))<<((int32_t)(L_218&((int32_t)31)))))|((int32_t)(((int32_t)((int32_t)L_221&((int32_t)255)))>>((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_222))&((int32_t)31)))))))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_223 = ___0_mat;
		int32_t L_224 = V_0;
		NullCheck(L_223);
		int32_t L_225 = L_224;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_226 = (L_223)->GetAt(static_cast<il2cpp_array_size_t>(L_225));
		int32_t L_227 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_228 = V_12;
		NullCheck(L_228);
		int32_t L_229 = 0;
		uint8_t L_230 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		int32_t L_231 = V_5;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_232 = ___0_mat;
		int32_t L_233 = V_0;
		NullCheck(L_232);
		int32_t L_234 = L_233;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_235 = (L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_234));
		int32_t L_236 = V_3;
		NullCheck(L_235);
		int32_t L_237 = L_236;
		uint8_t L_238 = (L_235)->GetAt(static_cast<il2cpp_array_size_t>(L_237));
		int32_t L_239 = V_5;
		int32_t L_240 = V_5;
		NullCheck(L_226);
		(L_226)->SetAt(static_cast<il2cpp_array_size_t>(L_227), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_230&((int32_t)255)))<<((int32_t)(L_231&((int32_t)31)))))|((int32_t)(((int32_t)(((int32_t)((int32_t)L_238&((int32_t)255)))<<((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_239))&((int32_t)31)))))>>((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_240))&((int32_t)31)))))))));
		V_2 = 7;
		goto IL_0354;
	}

IL_0323:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_241 = ___0_mat;
		int32_t L_242 = V_0;
		NullCheck(L_241);
		int32_t L_243 = L_242;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_244 = (L_241)->GetAt(static_cast<il2cpp_array_size_t>(L_243));
		int32_t L_245 = V_3;
		int32_t L_246 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_247 = V_12;
		int32_t L_248 = V_2;
		NullCheck(L_247);
		int32_t L_249 = L_248;
		uint8_t L_250 = (L_247)->GetAt(static_cast<il2cpp_array_size_t>(L_249));
		int32_t L_251 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_252 = V_12;
		int32_t L_253 = V_2;
		NullCheck(L_252);
		int32_t L_254 = ((int32_t)il2cpp_codegen_subtract(L_253, 1));
		uint8_t L_255 = (L_252)->GetAt(static_cast<il2cpp_array_size_t>(L_254));
		int32_t L_256 = V_5;
		NullCheck(L_244);
		(L_244)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_245, L_246))), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_250&((int32_t)255)))<<((int32_t)(L_251&((int32_t)31)))))|((int32_t)(((int32_t)((int32_t)L_255&((int32_t)255)))>>((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_256))&((int32_t)31)))))))));
		int32_t L_257 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_257, 1));
	}

IL_0354:
	{
		int32_t L_258 = V_2;
		if ((((int32_t)L_258) >= ((int32_t)1)))
		{
			goto IL_0323;
		}
	}
	{
		goto IL_0365;
	}

IL_035a:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_259 = ___0_mat;
		int32_t L_260 = V_0;
		NullCheck(L_259);
		int32_t L_261 = L_260;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_262 = (L_259)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		int32_t L_263 = V_3;
		uint64_t L_264 = V_8;
		Utils_Store8_m349F1D35320490FC8EE900DA1C878C7EFE706584(L_262, L_263, L_264, NULL);
	}

IL_0365:
	{
		int32_t L_265 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_265, 1));
	}

IL_0369:
	{
		int32_t L_266 = V_0;
		int32_t L_267 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		if ((((int32_t)L_266) < ((int32_t)L_267)))
		{
			goto IL_01f6;
		}
	}
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_Ctz_mA23DACBB90E35236608B878540453AF542C3CB66_gshared (uint64_t ___0_input, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_0 = (uint64_t)((int64_t)72340172838076673LL);
		V_1 = (uint64_t)((int64_t)0);
		uint64_t L_0 = ___0_input;
		V_2 = (uint64_t)((~((int64_t)L_0)));
		V_5 = 0;
		goto IL_0029;
	}

IL_0015:
	{
		uint64_t L_1 = V_0;
		uint64_t L_2 = V_2;
		int32_t L_3 = V_5;
		V_0 = (uint64_t)((int64_t)((int64_t)L_1&((int64_t)((uint64_t)L_2>>((int32_t)(L_3&((int32_t)63)))))));
		uint64_t L_4 = V_1;
		uint64_t L_5 = V_0;
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_4, (int64_t)L_5));
		int32_t L_6 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0029:
	{
		int32_t L_7 = V_5;
		if ((((int32_t)L_7) < ((int32_t)8)))
		{
			goto IL_0015;
		}
	}
	{
		uint64_t L_8 = V_1;
		V_3 = (uint64_t)((int64_t)((int64_t)L_8&((int64_t)578721382704613384LL)));
		uint64_t L_9 = V_3;
		uint64_t L_10 = V_3;
		V_3 = (uint64_t)((int64_t)((int64_t)L_9|((int64_t)((uint64_t)L_10>>1))));
		uint64_t L_11 = V_3;
		uint64_t L_12 = V_3;
		V_3 = (uint64_t)((int64_t)((int64_t)L_11|((int64_t)((uint64_t)L_12>>2))));
		uint64_t L_13 = V_1;
		V_4 = L_13;
		uint64_t L_14 = V_1;
		V_1 = (uint64_t)((int64_t)((uint64_t)L_14>>8));
		uint64_t L_15 = V_4;
		uint64_t L_16 = V_1;
		uint64_t L_17 = V_3;
		V_4 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_15, ((int64_t)((int64_t)L_16&(int64_t)L_17))));
		V_6 = 2;
		goto IL_0072;
	}

IL_005a:
	{
		uint64_t L_18 = V_3;
		uint64_t L_19 = V_3;
		V_3 = (uint64_t)((int64_t)((int64_t)L_18&((int64_t)((uint64_t)L_19>>8))));
		uint64_t L_20 = V_1;
		V_1 = (uint64_t)((int64_t)((uint64_t)L_20>>8));
		uint64_t L_21 = V_4;
		uint64_t L_22 = V_1;
		uint64_t L_23 = V_3;
		V_4 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)((int64_t)L_22&(int64_t)L_23))));
		int32_t L_24 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0072:
	{
		int32_t L_25 = V_6;
		if ((((int32_t)L_25) < ((int32_t)8)))
		{
			goto IL_005a;
		}
	}
	{
		uint64_t L_26 = V_4;
		return ((int32_t)(((int32_t)L_26)&((int32_t)255)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CmceEngine_1_SameMask64_m19EADE283559104BA6E7FF8291B6291EDBE784E7_gshared (uint16_t ___0_x, uint16_t ___1_y, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_x;
		uint16_t L_1 = ___1_y;
		return (uint64_t)((int64_t)(((int64_t)il2cpp_codegen_subtract(((int64_t)((int32_t)((int32_t)L_0^(int32_t)L_1))), ((int64_t)1)))>>((int32_t)63)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t CmceEngine_1_SameMask32_mF48FFBFDFFC322D5C294CAC5A8F4C8C864F26DEC_gshared (int16_t ___0_x, int16_t ___1_y, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_x;
		int16_t L_1 = ___1_y;
		return (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)((int32_t)L_0^(int32_t)L_1)), 1))>>((int32_t)31))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Layer_mEADCE8056191E7928784A61C89CEBF353D8D7759_gshared (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_p, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_output, int32_t ___2_ptrIndex, int32_t ___3_s, int32_t ___4_n, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___3_s;
		V_2 = ((int32_t)(1<<((int32_t)(L_0&((int32_t)31)))));
		V_3 = 0;
		V_0 = 0;
		goto IL_0074;
	}

IL_000d:
	{
		V_1 = 0;
		goto IL_006a;
	}

IL_0011:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = ___0_p;
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		uint16_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = ___0_p;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_6);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_7, L_8)), L_9));
		uint16_t L_11 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = ((int32_t)((int32_t)L_5^(int32_t)L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___1_output;
		int32_t L_13 = ___2_ptrIndex;
		int32_t L_14 = V_3;
		NullCheck(L_12);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)(L_14>>3))));
		uint8_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = V_3;
		V_5 = ((int32_t)(((int32_t)((int32_t)L_16>>((int32_t)(((int32_t)(L_17&7))&((int32_t)31)))))&1));
		int32_t L_18 = V_5;
		V_5 = ((-L_18));
		int32_t L_19 = V_4;
		int32_t L_20 = V_5;
		V_4 = ((int32_t)(L_19&L_20));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_21 = ___0_p;
		int32_t L_22 = V_0;
		int32_t L_23 = V_1;
		NullCheck(L_21);
		uint16_t* L_24 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23)))));
		int32_t L_25 = *((uint16_t*)L_24);
		int32_t L_26 = V_4;
		*((int16_t*)L_24) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_25^((int32_t)(uint16_t)L_26))));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_27 = ___0_p;
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		int32_t L_30 = V_2;
		NullCheck(L_27);
		uint16_t* L_31 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_28, L_29)), L_30)))));
		int32_t L_32 = *((uint16_t*)L_31);
		int32_t L_33 = V_4;
		*((int16_t*)L_31) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_32^((int32_t)(uint16_t)L_33))));
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_006a:
	{
		int32_t L_36 = V_1;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_38 = V_0;
		int32_t L_39 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_38, ((int32_t)il2cpp_codegen_multiply(L_39, 2))));
	}

IL_0074:
	{
		int32_t L_40 = V_0;
		int32_t L_41 = ___4_n;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_ControlBitsFromPermutation_m12C2E7233992728CA280E6D99DF838059A9A3D78_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_pi, int64_t ___2_w, int64_t ___3_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_1 = NULL;
	uint16_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int64_t L_0 = ___3_n;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_0))));
		V_0 = L_1;
		int64_t L_2 = ___3_n;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)L_2));
		V_1 = L_3;
	}

IL_0013:
	{
		V_3 = 0;
		goto IL_001f;
	}

IL_0017:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_output;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)0);
		int32_t L_6 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001f:
	{
		int32_t L_7 = V_3;
		int64_t L_8 = ___2_w;
		int64_t L_9 = ___3_n;
		if ((((int64_t)((int64_t)L_7)) < ((int64_t)((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_8)), ((int64_t)1))), L_9))/((int64_t)2))), ((int64_t)7)))/((int64_t)8))))))
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_output;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_11 = ___1_pi;
		int64_t L_12 = ___2_w;
		int64_t L_13 = ___3_n;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_0;
		((  void (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int64_t, int64_t, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, int32_t, int64_t, int64_t, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30)))(L_10, ((int64_t)0), ((int64_t)1), L_11, 0, L_12, L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		V_3 = 0;
		goto IL_0051;
	}

IL_0048:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_15 = V_1;
		int32_t L_16 = V_3;
		int32_t L_17 = V_3;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint16_t)((int32_t)(uint16_t)L_17));
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0051:
	{
		int32_t L_19 = V_3;
		int64_t L_20 = ___3_n;
		if ((((int64_t)((int64_t)L_19)) < ((int64_t)L_20)))
		{
			goto IL_0048;
		}
	}
	{
		V_4 = 0;
		V_3 = 0;
		goto IL_0076;
	}

IL_005d:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_21 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___0_output;
		int32_t L_23 = V_4;
		int32_t L_24 = V_3;
		int64_t L_25 = ___3_n;
		((  void (*) (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 31)))(L_21, L_22, L_23, L_24, ((int32_t)L_25), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 31));
		int32_t L_26 = V_4;
		int64_t L_27 = ___3_n;
		V_4 = ((int32_t)il2cpp_codegen_add(L_26, ((int32_t)(((int32_t)L_27)>>4))));
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0076:
	{
		int32_t L_29 = V_3;
		int64_t L_30 = ___2_w;
		if ((((int64_t)((int64_t)L_29)) < ((int64_t)L_30)))
		{
			goto IL_005d;
		}
	}
	{
		int64_t L_31 = ___2_w;
		V_3 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_31, ((int64_t)2))));
		goto IL_009c;
	}

IL_0083:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_32 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ___0_output;
		int32_t L_34 = V_4;
		int32_t L_35 = V_3;
		int64_t L_36 = ___3_n;
		((  void (*) (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 31)))(L_32, L_33, L_34, L_35, ((int32_t)L_36), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 31));
		int32_t L_37 = V_4;
		int64_t L_38 = ___3_n;
		V_4 = ((int32_t)il2cpp_codegen_add(L_37, ((int32_t)(((int32_t)L_38)>>4))));
		int32_t L_39 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
	}

IL_009c:
	{
		int32_t L_40 = V_3;
		if ((((int32_t)L_40) >= ((int32_t)0)))
		{
			goto IL_0083;
		}
	}
	{
		V_2 = (uint16_t)0;
		V_3 = 0;
		goto IL_00b6;
	}

IL_00a6:
	{
		uint16_t L_41 = V_2;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_42 = ___1_pi;
		int32_t L_43 = V_3;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		uint16_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_46 = V_1;
		int32_t L_47 = V_3;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		uint16_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_41|((int32_t)(uint16_t)((int32_t)((int32_t)L_45^(int32_t)L_49))))));
		int32_t L_50 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00b6:
	{
		int32_t L_51 = V_3;
		int64_t L_52 = ___3_n;
		if ((((int64_t)((int64_t)L_51)) < ((int64_t)L_52)))
		{
			goto IL_00a6;
		}
	}
	{
		uint16_t L_53 = V_2;
		if (L_53)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t CmceEngine_1_GetQShort_mDA5A373AFC3F9168FA010B29D3E043E9C482F387_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_temp, int32_t ___1_q_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_q_index;
		V_0 = ((int32_t)(L_0/2));
		int32_t L_1 = ___1_q_index;
		if (((int32_t)(L_1%2)))
		{
			goto IL_000e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___0_temp;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return ((int16_t)L_5);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___0_temp;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		return ((int16_t)((int64_t)(((int64_t)(((int64_t)L_9)&((int64_t)(uint64_t)((uint32_t)((int32_t)-65536)))))>>((int32_t)16))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_CBRecursion_mE4D6E7A47B0C48E33B2D31F419FFE58DF59368FB_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, int64_t ___1_pos, int64_t ___2_step, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___3_pi, int32_t ___4_qIndex, int64_t ___5_w, int64_t ___6_n, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___7_temp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_4 = NULL;
	uint16_t V_5 = 0;
	uint16_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int64_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int64_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	{
		int64_t L_0 = ___5_w;
		if ((!(((uint64_t)L_0) == ((uint64_t)((int64_t)1)))))
		{
			goto IL_0029;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_output;
		int64_t L_2 = ___1_pos;
		NullCheck(L_1);
		uint8_t* L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)(L_2>>3))))));
		int32_t L_4 = *((uint8_t*)L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___7_temp;
		int32_t L_6 = ___4_qIndex;
		int16_t L_7;
		L_7 = ((  int16_t (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32)))(L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		int64_t L_8 = ___1_pos;
		*((int8_t*)L_3) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_4^((int32_t)(uint8_t)((int32_t)((int32_t)L_7<<((int32_t)(((int32_t)((int64_t)(L_8&((int64_t)7))))&((int32_t)31)))))))));
		return;
	}

IL_0029:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_9 = ___3_pi;
		if (!L_9)
		{
			goto IL_0053;
		}
	}
	{
		V_0 = ((int64_t)0);
		goto IL_004c;
	}

IL_0031:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ___7_temp;
		int64_t L_11 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_12 = ___3_pi;
		int64_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)L_13);
		uint16_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_16 = ___3_pi;
		int64_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)((int64_t)(L_17^((int64_t)1))));
		uint16_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_11)), (int32_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_15^1))<<((int32_t)16)))|(int32_t)L_19)));
		int64_t L_20 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_20, ((int64_t)1)));
	}

IL_004c:
	{
		int64_t L_21 = V_0;
		int64_t L_22 = ___6_n;
		if ((((int64_t)L_21) < ((int64_t)L_22)))
		{
			goto IL_0031;
		}
	}
	{
		goto IL_0094;
	}

IL_0053:
	{
		V_0 = ((int64_t)0);
		goto IL_008f;
	}

IL_0058:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = ___7_temp;
		int32_t L_24 = ___4_qIndex;
		int64_t L_25 = V_0;
		int16_t L_26;
		L_26 = ((  int16_t (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32)))(L_23, ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)L_24), L_25))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		V_5 = (uint16_t)((int32_t)(uint16_t)L_26);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = ___7_temp;
		int32_t L_28 = ___4_qIndex;
		int64_t L_29 = V_0;
		int16_t L_30;
		L_30 = ((  int16_t (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32)))(L_27, ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)L_28), ((int64_t)(L_29^((int64_t)1)))))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		V_6 = (uint16_t)((int32_t)(uint16_t)L_30);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = ___7_temp;
		int64_t L_32 = V_0;
		uint16_t L_33 = V_5;
		uint16_t L_34 = V_6;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_32)), (int32_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_33^1))<<((int32_t)16)))|(int32_t)L_34)));
		int64_t L_35 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_35, ((int64_t)1)));
	}

IL_008f:
	{
		int64_t L_36 = V_0;
		int64_t L_37 = ___6_n;
		if ((((int64_t)L_36) < ((int64_t)L_37)))
		{
			goto IL_0058;
		}
	}

IL_0094:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = ___7_temp;
		int64_t L_39 = ___6_n;
		((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33)))(L_38, 0, ((int32_t)L_39), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_0 = ((int64_t)0);
		goto IL_00d4;
	}

IL_00a4:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = ___7_temp;
		int64_t L_41 = V_0;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)L_41);
		int32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_7 = ((int32_t)(L_43&((int32_t)65535)));
		int32_t L_44 = V_7;
		V_8 = L_44;
		int64_t L_45 = V_0;
		int32_t L_46 = V_8;
		if ((((int64_t)L_45) >= ((int64_t)((int64_t)L_46))))
		{
			goto IL_00bf;
		}
	}
	{
		int64_t L_47 = V_0;
		V_8 = ((int32_t)L_47);
	}

IL_00bf:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = ___7_temp;
		int64_t L_49 = ___6_n;
		int64_t L_50 = V_0;
		int32_t L_51 = V_7;
		int32_t L_52 = V_8;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_49, L_50)))), (int32_t)((int32_t)(((int32_t)(L_51<<((int32_t)16)))|L_52)));
		int64_t L_53 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_53, ((int64_t)1)));
	}

IL_00d4:
	{
		int64_t L_54 = V_0;
		int64_t L_55 = ___6_n;
		if ((((int64_t)L_54) < ((int64_t)L_55)))
		{
			goto IL_00a4;
		}
	}
	{
		V_0 = ((int64_t)0);
		goto IL_00f4;
	}

IL_00de:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = ___7_temp;
		int64_t L_57 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = ___7_temp;
		int64_t L_59 = V_0;
		NullCheck(L_58);
		int32_t L_60 = ((int32_t)L_59);
		int32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		int64_t L_62 = V_0;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_57)), (int32_t)((int32_t)((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)(L_61<<((int32_t)16)))))|L_62))));
		int64_t L_63 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_63, ((int64_t)1)));
	}

IL_00f4:
	{
		int64_t L_64 = V_0;
		int64_t L_65 = ___6_n;
		if ((((int64_t)L_64) < ((int64_t)L_65)))
		{
			goto IL_00de;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = ___7_temp;
		int64_t L_67 = ___6_n;
		((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33)))(L_66, 0, ((int32_t)L_67), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_0 = ((int64_t)0);
		goto IL_0127;
	}

IL_0109:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = ___7_temp;
		int64_t L_69 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = ___7_temp;
		int64_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)L_71);
		int32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = ___7_temp;
		int64_t L_75 = ___6_n;
		int64_t L_76 = V_0;
		NullCheck(L_74);
		int32_t L_77 = ((int32_t)((int64_t)il2cpp_codegen_add(L_75, L_76)));
		int32_t L_78 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_69)), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(L_73<<((int32_t)16))), ((int32_t)(L_78>>((int32_t)16))))));
		int64_t L_79 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_79, ((int64_t)1)));
	}

IL_0127:
	{
		int64_t L_80 = V_0;
		int64_t L_81 = ___6_n;
		if ((((int64_t)L_80) < ((int64_t)L_81)))
		{
			goto IL_0109;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = ___7_temp;
		int64_t L_83 = ___6_n;
		((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33)))(L_82, 0, ((int32_t)L_83), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		int64_t L_84 = ___5_w;
		if ((((int64_t)L_84) > ((int64_t)((int64_t)((int32_t)10)))))
		{
			goto IL_0265;
		}
	}
	{
		V_0 = ((int64_t)0);
		goto IL_0170;
	}

IL_0146:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = ___7_temp;
		int64_t L_86 = ___6_n;
		int64_t L_87 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = ___7_temp;
		int64_t L_89 = V_0;
		NullCheck(L_88);
		int32_t L_90 = ((int32_t)L_89);
		int32_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = ___7_temp;
		int64_t L_93 = ___6_n;
		int64_t L_94 = V_0;
		NullCheck(L_92);
		int32_t L_95 = ((int32_t)((int64_t)il2cpp_codegen_add(L_93, L_94)));
		int32_t L_96 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_86, L_87)))), (int32_t)((int32_t)(((int32_t)(((int32_t)(L_91&((int32_t)65535)))<<((int32_t)10)))|((int32_t)(L_96&((int32_t)1023))))));
		int64_t L_97 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_97, ((int64_t)1)));
	}

IL_0170:
	{
		int64_t L_98 = V_0;
		int64_t L_99 = ___6_n;
		if ((((int64_t)L_98) < ((int64_t)L_99)))
		{
			goto IL_0146;
		}
	}
	{
		V_1 = ((int64_t)1);
		goto IL_0231;
	}

IL_017d:
	{
		V_0 = ((int64_t)0);
		goto IL_01a0;
	}

IL_0182:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100 = ___7_temp;
		int64_t L_101 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = ___7_temp;
		int64_t L_103 = ___6_n;
		int64_t L_104 = V_0;
		NullCheck(L_102);
		int32_t L_105 = ((int32_t)((int64_t)il2cpp_codegen_add(L_103, L_104)));
		int32_t L_106 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		int64_t L_107 = V_0;
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_101)), (int32_t)((int32_t)((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)(((int32_t)(L_106&((int32_t)-1024)))<<6))))|L_107))));
		int64_t L_108 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_108, ((int64_t)1)));
	}

IL_01a0:
	{
		int64_t L_109 = V_0;
		int64_t L_110 = ___6_n;
		if ((((int64_t)L_109) < ((int64_t)L_110)))
		{
			goto IL_0182;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_111 = ___7_temp;
		int64_t L_112 = ___6_n;
		((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33)))(L_111, 0, ((int32_t)L_112), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_0 = ((int64_t)0);
		goto IL_01d0;
	}

IL_01b5:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_113 = ___7_temp;
		int64_t L_114 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_115 = ___7_temp;
		int64_t L_116 = V_0;
		NullCheck(L_115);
		int32_t L_117 = ((int32_t)L_116);
		int32_t L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_119 = ___7_temp;
		int64_t L_120 = ___6_n;
		int64_t L_121 = V_0;
		NullCheck(L_119);
		int32_t L_122 = ((int32_t)((int64_t)il2cpp_codegen_add(L_120, L_121)));
		int32_t L_123 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		NullCheck(L_113);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_114)), (int32_t)((int32_t)(((int32_t)(L_118<<((int32_t)20)))|L_123)));
		int64_t L_124 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_124, ((int64_t)1)));
	}

IL_01d0:
	{
		int64_t L_125 = V_0;
		int64_t L_126 = ___6_n;
		if ((((int64_t)L_125) < ((int64_t)L_126)))
		{
			goto IL_01b5;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_127 = ___7_temp;
		int64_t L_128 = ___6_n;
		((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33)))(L_127, 0, ((int32_t)L_128), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_0 = ((int64_t)0);
		goto IL_0227;
	}

IL_01e5:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_129 = ___7_temp;
		int64_t L_130 = V_0;
		NullCheck(L_129);
		int32_t L_131 = ((int32_t)L_130);
		int32_t L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		V_9 = ((int32_t)(L_132&((int32_t)1048575)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_133 = ___7_temp;
		int64_t L_134 = V_0;
		NullCheck(L_133);
		int32_t L_135 = ((int32_t)L_134);
		int32_t L_136 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_137 = ___7_temp;
		int64_t L_138 = ___6_n;
		int64_t L_139 = V_0;
		NullCheck(L_137);
		int32_t L_140 = ((int32_t)((int64_t)il2cpp_codegen_add(L_138, L_139)));
		int32_t L_141 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		V_10 = ((int32_t)(((int32_t)(L_136&((int32_t)1047552)))|((int32_t)(L_141&((int32_t)1023)))));
		int32_t L_142 = V_9;
		int32_t L_143 = V_10;
		if ((((int32_t)L_142) >= ((int32_t)L_143)))
		{
			goto IL_0218;
		}
	}
	{
		int32_t L_144 = V_9;
		V_10 = L_144;
	}

IL_0218:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_145 = ___7_temp;
		int64_t L_146 = ___6_n;
		int64_t L_147 = V_0;
		int32_t L_148 = V_10;
		NullCheck(L_145);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_146, L_147)))), (int32_t)L_148);
		int64_t L_149 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_149, ((int64_t)1)));
	}

IL_0227:
	{
		int64_t L_150 = V_0;
		int64_t L_151 = ___6_n;
		if ((((int64_t)L_150) < ((int64_t)L_151)))
		{
			goto IL_01e5;
		}
	}
	{
		int64_t L_152 = V_1;
		V_1 = ((int64_t)il2cpp_codegen_add(L_152, ((int64_t)1)));
	}

IL_0231:
	{
		int64_t L_153 = V_1;
		int64_t L_154 = ___5_w;
		if ((((int64_t)L_153) < ((int64_t)((int64_t)il2cpp_codegen_subtract(L_154, ((int64_t)1))))))
		{
			goto IL_017d;
		}
	}
	{
		V_0 = ((int64_t)0);
		goto IL_025b;
	}

IL_0241:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_155 = ___7_temp;
		int64_t L_156 = ___6_n;
		int64_t L_157 = V_0;
		NullCheck(L_155);
		int32_t* L_158 = ((L_155)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_156, L_157))))));
		int32_t L_159 = *((int32_t*)L_158);
		*((int32_t*)L_158) = (int32_t)((int32_t)(L_159&((int32_t)1023)));
		int64_t L_160 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_160, ((int64_t)1)));
	}

IL_025b:
	{
		int64_t L_161 = V_0;
		int64_t L_162 = ___6_n;
		if ((((int64_t)L_161) < ((int64_t)L_162)))
		{
			goto IL_0241;
		}
	}
	{
		goto IL_03eb;
	}

IL_0265:
	{
		V_0 = ((int64_t)0);
		goto IL_028e;
	}

IL_026a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_163 = ___7_temp;
		int64_t L_164 = ___6_n;
		int64_t L_165 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_166 = ___7_temp;
		int64_t L_167 = V_0;
		NullCheck(L_166);
		int32_t L_168 = ((int32_t)L_167);
		int32_t L_169 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_170 = ___7_temp;
		int64_t L_171 = ___6_n;
		int64_t L_172 = V_0;
		NullCheck(L_170);
		int32_t L_173 = ((int32_t)((int64_t)il2cpp_codegen_add(L_171, L_172)));
		int32_t L_174 = (L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		NullCheck(L_163);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_164, L_165)))), (int32_t)((int32_t)(((int32_t)(L_169<<((int32_t)16)))|((int32_t)(L_174&((int32_t)65535))))));
		int64_t L_175 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_175, ((int64_t)1)));
	}

IL_028e:
	{
		int64_t L_176 = V_0;
		int64_t L_177 = ___6_n;
		if ((((int64_t)L_176) < ((int64_t)L_177)))
		{
			goto IL_026a;
		}
	}
	{
		V_1 = ((int64_t)1);
		goto IL_03bc;
	}

IL_029b:
	{
		V_0 = ((int64_t)0);
		goto IL_02bc;
	}

IL_02a0:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_178 = ___7_temp;
		int64_t L_179 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_180 = ___7_temp;
		int64_t L_181 = ___6_n;
		int64_t L_182 = V_0;
		NullCheck(L_180);
		int32_t L_183 = ((int32_t)((int64_t)il2cpp_codegen_add(L_181, L_182)));
		int32_t L_184 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_183));
		int64_t L_185 = V_0;
		NullCheck(L_178);
		(L_178)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_179)), (int32_t)((int32_t)((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)(L_184&((int32_t)-65536)))))|L_185))));
		int64_t L_186 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_186, ((int64_t)1)));
	}

IL_02bc:
	{
		int64_t L_187 = V_0;
		int64_t L_188 = ___6_n;
		if ((((int64_t)L_187) < ((int64_t)L_188)))
		{
			goto IL_02a0;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_189 = ___7_temp;
		int64_t L_190 = ___6_n;
		((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33)))(L_189, 0, ((int32_t)L_190), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_0 = ((int64_t)0);
		goto IL_02f2;
	}

IL_02d1:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_191 = ___7_temp;
		int64_t L_192 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_193 = ___7_temp;
		int64_t L_194 = V_0;
		NullCheck(L_193);
		int32_t L_195 = ((int32_t)L_194);
		int32_t L_196 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_197 = ___7_temp;
		int64_t L_198 = ___6_n;
		int64_t L_199 = V_0;
		NullCheck(L_197);
		int32_t L_200 = ((int32_t)((int64_t)il2cpp_codegen_add(L_198, L_199)));
		int32_t L_201 = (L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_200));
		NullCheck(L_191);
		(L_191)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_192)), (int32_t)((int32_t)(((int32_t)(L_196<<((int32_t)16)))|((int32_t)(L_201&((int32_t)65535))))));
		int64_t L_202 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_202, ((int64_t)1)));
	}

IL_02f2:
	{
		int64_t L_203 = V_0;
		int64_t L_204 = ___6_n;
		if ((((int64_t)L_203) < ((int64_t)L_204)))
		{
			goto IL_02d1;
		}
	}
	{
		int64_t L_205 = V_1;
		int64_t L_206 = ___5_w;
		if ((((int64_t)L_205) >= ((int64_t)((int64_t)il2cpp_codegen_subtract(L_206, ((int64_t)2))))))
		{
			goto IL_036b;
		}
	}
	{
		V_0 = ((int64_t)0);
		goto IL_0328;
	}

IL_0304:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_207 = ___7_temp;
		int64_t L_208 = ___6_n;
		int64_t L_209 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_210 = ___7_temp;
		int64_t L_211 = V_0;
		NullCheck(L_210);
		int32_t L_212 = ((int32_t)L_211);
		int32_t L_213 = (L_210)->GetAt(static_cast<il2cpp_array_size_t>(L_212));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_214 = ___7_temp;
		int64_t L_215 = ___6_n;
		int64_t L_216 = V_0;
		NullCheck(L_214);
		int32_t L_217 = ((int32_t)((int64_t)il2cpp_codegen_add(L_215, L_216)));
		int32_t L_218 = (L_214)->GetAt(static_cast<il2cpp_array_size_t>(L_217));
		NullCheck(L_207);
		(L_207)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_208, L_209)))), (int32_t)((int32_t)(((int32_t)(L_213&((int32_t)-65536)))|((int32_t)(L_218>>((int32_t)16))))));
		int64_t L_219 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_219, ((int64_t)1)));
	}

IL_0328:
	{
		int64_t L_220 = V_0;
		int64_t L_221 = ___6_n;
		if ((((int64_t)L_220) < ((int64_t)L_221)))
		{
			goto IL_0304;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_222 = ___7_temp;
		int64_t L_223 = ___6_n;
		int64_t L_224 = ___6_n;
		((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33)))(L_222, ((int32_t)L_223), ((int32_t)((int64_t)il2cpp_codegen_multiply(L_224, ((int64_t)2)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_0 = ((int64_t)0);
		goto IL_0366;
	}

IL_0342:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_225 = ___7_temp;
		int64_t L_226 = ___6_n;
		int64_t L_227 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_228 = ___7_temp;
		int64_t L_229 = ___6_n;
		int64_t L_230 = V_0;
		NullCheck(L_228);
		int32_t L_231 = ((int32_t)((int64_t)il2cpp_codegen_add(L_229, L_230)));
		int32_t L_232 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_231));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_233 = ___7_temp;
		int64_t L_234 = V_0;
		NullCheck(L_233);
		int32_t L_235 = ((int32_t)L_234);
		int32_t L_236 = (L_233)->GetAt(static_cast<il2cpp_array_size_t>(L_235));
		NullCheck(L_225);
		(L_225)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_226, L_227)))), (int32_t)((int32_t)(((int32_t)(L_232<<((int32_t)16)))|((int32_t)(L_236&((int32_t)65535))))));
		int64_t L_237 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_237, ((int64_t)1)));
	}

IL_0366:
	{
		int64_t L_238 = V_0;
		int64_t L_239 = ___6_n;
		if ((((int64_t)L_238) < ((int64_t)L_239)))
		{
			goto IL_0342;
		}
	}

IL_036b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_240 = ___7_temp;
		int64_t L_241 = ___6_n;
		((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33)))(L_240, 0, ((int32_t)L_241), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_0 = ((int64_t)0);
		goto IL_03b2;
	}

IL_037b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_242 = ___7_temp;
		int64_t L_243 = ___6_n;
		int64_t L_244 = V_0;
		NullCheck(L_242);
		int32_t L_245 = ((int32_t)((int64_t)il2cpp_codegen_add(L_243, L_244)));
		int32_t L_246 = (L_242)->GetAt(static_cast<il2cpp_array_size_t>(L_245));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_247 = ___7_temp;
		int64_t L_248 = V_0;
		NullCheck(L_247);
		int32_t L_249 = ((int32_t)L_248);
		int32_t L_250 = (L_247)->GetAt(static_cast<il2cpp_array_size_t>(L_249));
		V_11 = ((int32_t)(((int32_t)(L_246&((int32_t)-65536)))|((int32_t)(L_250&((int32_t)65535)))));
		int32_t L_251 = V_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_252 = ___7_temp;
		int64_t L_253 = ___6_n;
		int64_t L_254 = V_0;
		NullCheck(L_252);
		int32_t L_255 = ((int32_t)((int64_t)il2cpp_codegen_add(L_253, L_254)));
		int32_t L_256 = (L_252)->GetAt(static_cast<il2cpp_array_size_t>(L_255));
		if ((((int32_t)L_251) >= ((int32_t)L_256)))
		{
			goto IL_03ad;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_257 = ___7_temp;
		int64_t L_258 = ___6_n;
		int64_t L_259 = V_0;
		int32_t L_260 = V_11;
		NullCheck(L_257);
		(L_257)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_258, L_259)))), (int32_t)L_260);
	}

IL_03ad:
	{
		int64_t L_261 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_261, ((int64_t)1)));
	}

IL_03b2:
	{
		int64_t L_262 = V_0;
		int64_t L_263 = ___6_n;
		if ((((int64_t)L_262) < ((int64_t)L_263)))
		{
			goto IL_037b;
		}
	}
	{
		int64_t L_264 = V_1;
		V_1 = ((int64_t)il2cpp_codegen_add(L_264, ((int64_t)1)));
	}

IL_03bc:
	{
		int64_t L_265 = V_1;
		int64_t L_266 = ___5_w;
		if ((((int64_t)L_265) < ((int64_t)((int64_t)il2cpp_codegen_subtract(L_266, ((int64_t)1))))))
		{
			goto IL_029b;
		}
	}
	{
		V_0 = ((int64_t)0);
		goto IL_03e6;
	}

IL_03cc:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_267 = ___7_temp;
		int64_t L_268 = ___6_n;
		int64_t L_269 = V_0;
		NullCheck(L_267);
		int32_t* L_270 = ((L_267)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_268, L_269))))));
		int32_t L_271 = *((int32_t*)L_270);
		*((int32_t*)L_270) = (int32_t)((int32_t)(L_271&((int32_t)65535)));
		int64_t L_272 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_272, ((int64_t)1)));
	}

IL_03e6:
	{
		int64_t L_273 = V_0;
		int64_t L_274 = ___6_n;
		if ((((int64_t)L_273) < ((int64_t)L_274)))
		{
			goto IL_03cc;
		}
	}

IL_03eb:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_275 = ___3_pi;
		if (!L_275)
		{
			goto IL_040f;
		}
	}
	{
		V_0 = ((int64_t)0);
		goto IL_0408;
	}

IL_03f3:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_276 = ___7_temp;
		int64_t L_277 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_278 = ___3_pi;
		int64_t L_279 = V_0;
		NullCheck(L_278);
		int32_t L_280 = ((int32_t)L_279);
		uint16_t L_281 = (L_278)->GetAt(static_cast<il2cpp_array_size_t>(L_280));
		int64_t L_282 = V_0;
		NullCheck(L_276);
		(L_276)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_277)), (int32_t)((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)((int32_t)L_281<<((int32_t)16)))), L_282))));
		int64_t L_283 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_283, ((int64_t)1)));
	}

IL_0408:
	{
		int64_t L_284 = V_0;
		int64_t L_285 = ___6_n;
		if ((((int64_t)L_284) < ((int64_t)L_285)))
		{
			goto IL_03f3;
		}
	}
	{
		goto IL_0437;
	}

IL_040f:
	{
		V_0 = ((int64_t)0);
		goto IL_0432;
	}

IL_0414:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_286 = ___7_temp;
		int64_t L_287 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_288 = ___7_temp;
		int32_t L_289 = ___4_qIndex;
		int64_t L_290 = V_0;
		int16_t L_291;
		L_291 = ((  int16_t (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32)))(L_288, ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)L_289), L_290))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		int64_t L_292 = V_0;
		NullCheck(L_286);
		(L_286)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_287)), (int32_t)((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)((int32_t)((int32_t)L_291<<((int32_t)16)))), L_292))));
		int64_t L_293 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_293, ((int64_t)1)));
	}

IL_0432:
	{
		int64_t L_294 = V_0;
		int64_t L_295 = ___6_n;
		if ((((int64_t)L_294) < ((int64_t)L_295)))
		{
			goto IL_0414;
		}
	}

IL_0437:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_296 = ___7_temp;
		int64_t L_297 = ___6_n;
		((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33)))(L_296, 0, ((int32_t)L_297), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		V_2 = ((int64_t)0);
		goto IL_04be;
	}

IL_0447:
	{
		int64_t L_298 = V_2;
		V_12 = ((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_298));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_299 = ___7_temp;
		int64_t L_300 = ___6_n;
		int64_t L_301 = V_12;
		NullCheck(L_299);
		int32_t L_302 = ((int32_t)((int64_t)il2cpp_codegen_add(L_300, L_301)));
		int32_t L_303 = (L_299)->GetAt(static_cast<il2cpp_array_size_t>(L_302));
		V_13 = ((int32_t)(L_303&1));
		int64_t L_304 = V_12;
		int32_t L_305 = V_13;
		V_14 = ((int32_t)((int64_t)il2cpp_codegen_add(L_304, ((int64_t)L_305))));
		int32_t L_306 = V_14;
		V_15 = ((int32_t)(L_306^1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_307 = ___0_output;
		int64_t L_308 = ___1_pos;
		NullCheck(L_307);
		uint8_t* L_309 = ((L_307)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)(L_308>>3))))));
		int32_t L_310 = *((uint8_t*)L_309);
		int32_t L_311 = V_13;
		int64_t L_312 = ___1_pos;
		*((int8_t*)L_309) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_310^((int32_t)(uint8_t)((int32_t)(L_311<<((int32_t)(((int32_t)((int64_t)(L_312&((int64_t)7))))&((int32_t)31)))))))));
		int64_t L_313 = ___1_pos;
		int64_t L_314 = ___2_step;
		___1_pos = ((int64_t)il2cpp_codegen_add(L_313, L_314));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_315 = ___7_temp;
		int64_t L_316 = ___6_n;
		int64_t L_317 = V_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_318 = ___7_temp;
		int64_t L_319 = V_12;
		NullCheck(L_318);
		int32_t L_320 = ((int32_t)L_319);
		int32_t L_321 = (L_318)->GetAt(static_cast<il2cpp_array_size_t>(L_320));
		int32_t L_322 = V_14;
		NullCheck(L_315);
		(L_315)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_316, L_317)))), (int32_t)((int32_t)(((int32_t)(L_321<<((int32_t)16)))|L_322)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_323 = ___7_temp;
		int64_t L_324 = ___6_n;
		int64_t L_325 = V_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_326 = ___7_temp;
		int64_t L_327 = V_12;
		NullCheck(L_326);
		int32_t L_328 = ((int32_t)((int64_t)il2cpp_codegen_add(L_327, ((int64_t)1))));
		int32_t L_329 = (L_326)->GetAt(static_cast<il2cpp_array_size_t>(L_328));
		int32_t L_330 = V_15;
		NullCheck(L_323);
		(L_323)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_324, L_325)), ((int64_t)1))))), (int32_t)((int32_t)(((int32_t)(L_329<<((int32_t)16)))|L_330)));
		int64_t L_331 = V_2;
		V_2 = ((int64_t)il2cpp_codegen_add(L_331, ((int64_t)1)));
	}

IL_04be:
	{
		int64_t L_332 = V_2;
		int64_t L_333 = ___6_n;
		if ((((int64_t)L_332) < ((int64_t)((int64_t)(L_333/((int64_t)2))))))
		{
			goto IL_0447;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_334 = ___7_temp;
		int64_t L_335 = ___6_n;
		int64_t L_336 = ___6_n;
		((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33)))(L_334, ((int32_t)L_335), ((int32_t)((int64_t)il2cpp_codegen_multiply(L_336, ((int64_t)2)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		int64_t L_337 = ___1_pos;
		int64_t L_338 = ___5_w;
		int64_t L_339 = ___2_step;
		int64_t L_340 = ___6_n;
		___1_pos = ((int64_t)il2cpp_codegen_add(L_337, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_338)), ((int64_t)3))), L_339)), ((int64_t)(L_340/((int64_t)2)))))));
		V_3 = ((int64_t)0);
		goto IL_0575;
	}

IL_04f2:
	{
		int64_t L_341 = V_3;
		V_16 = ((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_341));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_342 = ___7_temp;
		int64_t L_343 = ___6_n;
		int64_t L_344 = V_16;
		NullCheck(L_342);
		int32_t L_345 = ((int32_t)((int64_t)il2cpp_codegen_add(L_343, L_344)));
		int32_t L_346 = (L_342)->GetAt(static_cast<il2cpp_array_size_t>(L_345));
		V_17 = ((int32_t)(L_346&1));
		int64_t L_347 = V_16;
		int32_t L_348 = V_17;
		V_18 = ((int32_t)((int64_t)il2cpp_codegen_add(L_347, ((int64_t)L_348))));
		int32_t L_349 = V_18;
		V_19 = ((int32_t)(L_349^1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_350 = ___0_output;
		int64_t L_351 = ___1_pos;
		NullCheck(L_350);
		uint8_t* L_352 = ((L_350)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)(L_351>>3))))));
		int32_t L_353 = *((uint8_t*)L_352);
		int32_t L_354 = V_17;
		int64_t L_355 = ___1_pos;
		*((int8_t*)L_352) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_353^((int32_t)(uint8_t)((int32_t)(L_354<<((int32_t)(((int32_t)((int64_t)(L_355&((int64_t)7))))&((int32_t)31)))))))));
		int64_t L_356 = ___1_pos;
		int64_t L_357 = ___2_step;
		___1_pos = ((int64_t)il2cpp_codegen_add(L_356, L_357));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_358 = ___7_temp;
		int64_t L_359 = V_16;
		int32_t L_360 = V_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_361 = ___7_temp;
		int64_t L_362 = ___6_n;
		int64_t L_363 = V_16;
		NullCheck(L_361);
		int32_t L_364 = ((int32_t)((int64_t)il2cpp_codegen_add(L_362, L_363)));
		int32_t L_365 = (L_361)->GetAt(static_cast<il2cpp_array_size_t>(L_364));
		NullCheck(L_358);
		(L_358)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_359)), (int32_t)((int32_t)(((int32_t)(L_360<<((int32_t)16)))|((int32_t)(L_365&((int32_t)65535))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_366 = ___7_temp;
		int64_t L_367 = V_16;
		int32_t L_368 = V_19;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_369 = ___7_temp;
		int64_t L_370 = ___6_n;
		int64_t L_371 = V_16;
		NullCheck(L_369);
		int32_t L_372 = ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_370, L_371)), ((int64_t)1))));
		int32_t L_373 = (L_369)->GetAt(static_cast<il2cpp_array_size_t>(L_372));
		NullCheck(L_366);
		(L_366)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_367, ((int64_t)1))))), (int32_t)((int32_t)(((int32_t)(L_368<<((int32_t)16)))|((int32_t)(L_373&((int32_t)65535))))));
		int64_t L_374 = V_3;
		V_3 = ((int64_t)il2cpp_codegen_add(L_374, ((int64_t)1)));
	}

IL_0575:
	{
		int64_t L_375 = V_3;
		int64_t L_376 = ___6_n;
		if ((((int64_t)L_375) < ((int64_t)((int64_t)(L_376/((int64_t)2))))))
		{
			goto IL_04f2;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_377 = ___7_temp;
		int64_t L_378 = ___6_n;
		((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33)))(L_377, 0, ((int32_t)L_378), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		int64_t L_379 = ___1_pos;
		int64_t L_380 = ___5_w;
		int64_t L_381 = ___2_step;
		int64_t L_382 = ___6_n;
		___1_pos = ((int64_t)il2cpp_codegen_subtract(L_379, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_380)), ((int64_t)2))), L_381)), ((int64_t)(L_382/((int64_t)2)))))));
		int64_t L_383 = ___6_n;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_384 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)L_383), 4)));
		V_4 = L_384;
		V_1 = ((int64_t)0);
		goto IL_05df;
	}

IL_05b0:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_385 = V_4;
		int64_t L_386 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_387 = ___7_temp;
		int64_t L_388 = V_1;
		NullCheck(L_387);
		int32_t L_389 = ((int32_t)L_388);
		int32_t L_390 = (L_387)->GetAt(static_cast<il2cpp_array_size_t>(L_389));
		NullCheck(L_385);
		(L_385)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_multiply(L_386, ((int64_t)2))))), (int16_t)((int16_t)L_390));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_391 = V_4;
		int64_t L_392 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_393 = ___7_temp;
		int64_t L_394 = V_1;
		NullCheck(L_393);
		int32_t L_395 = ((int32_t)L_394);
		int32_t L_396 = (L_393)->GetAt(static_cast<il2cpp_array_size_t>(L_395));
		NullCheck(L_391);
		(L_391)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(L_392, ((int64_t)2))), ((int64_t)1))))), (int16_t)((int16_t)((int64_t)(((int64_t)(((int64_t)L_396)&((int64_t)(uint64_t)((uint32_t)((int32_t)-65536)))))>>((int32_t)16)))));
		int64_t L_397 = V_1;
		V_1 = ((int64_t)il2cpp_codegen_add(L_397, ((int64_t)1)));
	}

IL_05df:
	{
		int64_t L_398 = V_1;
		int64_t L_399 = ___6_n;
		if ((((int64_t)L_398) < ((int64_t)((int64_t)il2cpp_codegen_multiply(L_399, ((int64_t)2))))))
		{
			goto IL_05b0;
		}
	}
	{
		V_2 = ((int64_t)0);
		goto IL_0626;
	}

IL_05ec:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_400 = V_4;
		int64_t L_401 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_402 = ___7_temp;
		int64_t L_403 = V_2;
		NullCheck(L_402);
		int32_t L_404 = ((int32_t)((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_403)));
		int32_t L_405 = (L_402)->GetAt(static_cast<il2cpp_array_size_t>(L_404));
		NullCheck(L_400);
		(L_400)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)L_401)), (int16_t)((int16_t)((int32_t)(((int32_t)(L_405&((int32_t)65535)))>>1))));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_406 = V_4;
		int64_t L_407 = V_2;
		int64_t L_408 = ___6_n;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_409 = ___7_temp;
		int64_t L_410 = V_2;
		NullCheck(L_409);
		int32_t L_411 = ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)2), L_410)), ((int64_t)1))));
		int32_t L_412 = (L_409)->GetAt(static_cast<il2cpp_array_size_t>(L_411));
		NullCheck(L_406);
		(L_406)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(L_407, ((int64_t)(L_408/((int64_t)2))))))), (int16_t)((int16_t)((int32_t)(((int32_t)(L_412&((int32_t)65535)))>>1))));
		int64_t L_413 = V_2;
		V_2 = ((int64_t)il2cpp_codegen_add(L_413, ((int64_t)1)));
	}

IL_0626:
	{
		int64_t L_414 = V_2;
		int64_t L_415 = ___6_n;
		if ((((int64_t)L_414) < ((int64_t)((int64_t)(L_415/((int64_t)2))))))
		{
			goto IL_05ec;
		}
	}
	{
		V_1 = ((int64_t)0);
		goto IL_065d;
	}

IL_0633:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_416 = ___7_temp;
		int64_t L_417 = ___6_n;
		int64_t L_418 = ___6_n;
		int64_t L_419 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_420 = V_4;
		int64_t L_421 = V_1;
		NullCheck(L_420);
		int32_t L_422 = ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(L_421, ((int64_t)2))), ((int64_t)1))));
		int16_t L_423 = (L_420)->GetAt(static_cast<il2cpp_array_size_t>(L_422));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_424 = V_4;
		int64_t L_425 = V_1;
		NullCheck(L_424);
		int32_t L_426 = ((int32_t)((int64_t)il2cpp_codegen_multiply(L_425, ((int64_t)2))));
		int16_t L_427 = (L_424)->GetAt(static_cast<il2cpp_array_size_t>(L_426));
		NullCheck(L_416);
		(L_416)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_417, ((int64_t)(L_418/((int64_t)4))))), L_419)))), (int32_t)((int32_t)(((int32_t)((int32_t)L_423<<((int32_t)16)))|(int32_t)L_427)));
		int64_t L_428 = V_1;
		V_1 = ((int64_t)il2cpp_codegen_add(L_428, ((int64_t)1)));
	}

IL_065d:
	{
		int64_t L_429 = V_1;
		int64_t L_430 = ___6_n;
		if ((((int64_t)L_429) < ((int64_t)((int64_t)(L_430/((int64_t)2))))))
		{
			goto IL_0633;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_431 = ___0_output;
		int64_t L_432 = ___1_pos;
		int64_t L_433 = ___2_step;
		int64_t L_434 = ___6_n;
		int64_t L_435 = ___6_n;
		int64_t L_436 = ___5_w;
		int64_t L_437 = ___6_n;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_438 = ___7_temp;
		((  void (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int64_t, int64_t, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, int32_t, int64_t, int64_t, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30)))(L_431, L_432, ((int64_t)il2cpp_codegen_multiply(L_433, ((int64_t)2))), (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)NULL, ((int32_t)il2cpp_codegen_multiply(((int32_t)((int64_t)il2cpp_codegen_add(L_434, ((int64_t)(L_435/((int64_t)4)))))), 2)), ((int64_t)il2cpp_codegen_subtract(L_436, ((int64_t)1))), ((int64_t)(L_437/((int64_t)2))), L_438, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_439 = ___0_output;
		int64_t L_440 = ___1_pos;
		int64_t L_441 = ___2_step;
		int64_t L_442 = ___2_step;
		int64_t L_443 = ___6_n;
		int64_t L_444 = ___6_n;
		int64_t L_445 = ___6_n;
		int64_t L_446 = ___5_w;
		int64_t L_447 = ___6_n;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_448 = ___7_temp;
		((  void (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int64_t, int64_t, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, int32_t, int64_t, int64_t, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30)))(L_439, ((int64_t)il2cpp_codegen_add(L_440, L_441)), ((int64_t)il2cpp_codegen_multiply(L_442, ((int64_t)2))), (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)NULL, ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add(L_443, ((int64_t)(L_444/((int64_t)4))))), ((int64_t)2))), ((int64_t)(L_445/((int64_t)2)))))), ((int64_t)il2cpp_codegen_subtract(L_446, ((int64_t)1))), ((int64_t)(L_447/((int64_t)2))), L_448, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_PKGen_mB2CB3BDE36E28F52DB6A9DEE36242475ADE137BC_gshared (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pk, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_sk, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_perm, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___3_pi, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___4_pivots, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	void* L_73 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_229 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	const Il2CppFullySharedGenericStruct L_68 = alloca(SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
	const Il2CppFullySharedGenericStruct L_220 = L_68;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_4 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_5 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_6 = NULL;
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* V_7 = NULL;
	Il2CppFullySharedGenericStruct V_8 = alloca(SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
	memset(V_8, 0, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	int32_t V_11 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_12 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_13 = NULL;
	uint8_t V_14 = 0x0;
	int32_t V_15 = 0;
	uint8_t V_16 = 0x0;
	int32_t V_17 = 0;
	uint8_t V_18 = 0x0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_19 = NULL;
	uint8_t V_20 = 0x0;
	int32_t V_21 = 0;
	uint8_t V_22 = 0x0;
	int32_t V_23 = 0;
	uint8_t V_24 = 0x0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_30 = NULL;
	uint64_t V_31 = 0;
	uint64_t V_32 = 0;
	int32_t V_33 = 0;
	uint64_t V_34 = 0;
	int32_t V_35 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_0, 1)));
		V_0 = L_1;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = V_0;
		int32_t L_3 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint16_t)1);
		V_1 = 0;
		goto IL_0034;
	}

IL_001b:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = V_0;
		int32_t L_5 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_sk;
		int32_t L_7 = V_1;
		int32_t L_8 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		uint16_t L_9;
		L_9 = Utils_LoadGF_mA1B4A520DC31A92DE9732CA2682C82A780BA6557(L_6, ((int32_t)il2cpp_codegen_add(((int32_t)40), ((int32_t)il2cpp_codegen_multiply(L_7, 2)))), L_8, NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint16_t)L_9);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0034:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_14 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_13&((int32_t)31))))));
		V_4 = L_14;
		V_1 = 0;
		goto IL_0065;
	}

IL_0053:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_15 = V_4;
		int32_t L_16 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___2_perm;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		int32_t L_21 = V_1;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int64_t)((int64_t)(((int64_t)(((int64_t)(uint64_t)((uint32_t)L_20))<<((int32_t)31)))|((int64_t)(uint64_t)((uint32_t)L_21)))));
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0065:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(1<<((int32_t)(L_24&((int32_t)31))))))))
		{
			goto IL_0053;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_25 = V_4;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_26 = V_4;
		NullCheck(L_26);
		((  void (*) (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_25, 0, ((int32_t)(((RuntimeArray*)L_26)->max_length)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = 1;
		goto IL_009b;
	}

IL_0083:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_27 = V_4;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_subtract(L_28, 1));
		int64_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_31 = V_4;
		int32_t L_32 = V_1;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int64_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		if ((!(((uint64_t)((int64_t)(L_30>>((int32_t)31)))) == ((uint64_t)((int64_t)(L_34>>((int32_t)31)))))))
		{
			goto IL_0097;
		}
	}
	{
		return (-1);
	}

IL_0097:
	{
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_009b:
	{
		int32_t L_36 = V_1;
		int32_t L_37 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(1<<((int32_t)(L_37&((int32_t)31))))))))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_38 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_39 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_38);
		V_5 = L_39;
		V_1 = 0;
		goto IL_00cf;
	}

IL_00ba:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_40 = ___3_pi;
		int32_t L_41 = V_1;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_42 = V_4;
		int32_t L_43 = V_1;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		int64_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		int32_t L_46 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (uint16_t)((int32_t)(uint16_t)((int64_t)(L_45&((int64_t)L_46)))));
		int32_t L_47 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00cf:
	{
		int32_t L_48 = V_1;
		int32_t L_49 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if ((((int32_t)L_48) < ((int32_t)((int32_t)(1<<((int32_t)(L_49&((int32_t)31))))))))
		{
			goto IL_00ba;
		}
	}
	{
		V_1 = 0;
		goto IL_00f8;
	}

IL_00e1:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_50 = V_5;
		int32_t L_51 = V_1;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_52 = ___3_pi;
		int32_t L_53 = V_1;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		uint16_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		int32_t L_56 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		uint16_t L_57;
		L_57 = Utils_Bitrev_mBB7A07B533A6F82506A5B438A5E6A63A5D91C774(L_55, L_56, NULL);
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_51), (uint16_t)L_57);
		int32_t L_58 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_00f8:
	{
		int32_t L_59 = V_1;
		int32_t L_60 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_59) < ((int32_t)L_60)))
		{
			goto IL_00e1;
		}
	}
	{
		int32_t L_61 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_62 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_61);
		V_6 = L_62;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_63 = V_6;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_64 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_65 = V_5;
		((  void (*) (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, L_63, L_64, L_65, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		V_1 = 0;
		goto IL_013e;
	}

IL_011d:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_66 = V_6;
		int32_t L_67 = V_1;
		il2cpp_codegen_memcpy(L_68, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		il2cpp_codegen_memcpy(V_8, L_68, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_69 = V_6;
		int32_t L_70 = V_1;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		uint16_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		uint16_t L_74;
		L_74 = ConstrainedFuncInvoker1< uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 27), L_73, (void*)(Il2CppFullySharedGenericStruct*)V_8, L_72);
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (uint16_t)L_74);
		int32_t L_75 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_013e:
	{
		int32_t L_76 = V_1;
		int32_t L_77 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_78 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_79 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)L_78);
		V_7 = L_79;
		V_1 = 0;
		goto IL_016d;
	}

IL_0158:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_80 = V_7;
		int32_t L_81 = V_1;
		int32_t L_82 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_82/8)));
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(L_81), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_83);
		int32_t L_84 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_84, 1));
	}

IL_016d:
	{
		int32_t L_85 = V_1;
		int32_t L_86 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		if ((((int32_t)L_85) < ((int32_t)L_86)))
		{
			goto IL_0158;
		}
	}
	{
		V_1 = 0;
		goto IL_0370;
	}

IL_017d:
	{
		V_2 = 0;
		goto IL_032e;
	}

IL_0184:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_87 = V_6;
		int32_t L_88 = V_2;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		uint16_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_91 = V_6;
		int32_t L_92 = V_2;
		NullCheck(L_91);
		int32_t L_93 = ((int32_t)il2cpp_codegen_add(L_92, 2));
		uint16_t L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_95 = V_6;
		int32_t L_96 = V_2;
		NullCheck(L_95);
		int32_t L_97 = ((int32_t)il2cpp_codegen_add(L_96, 4));
		uint16_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_99 = V_6;
		int32_t L_100 = V_2;
		NullCheck(L_99);
		int32_t L_101 = ((int32_t)il2cpp_codegen_add(L_100, 6));
		uint16_t L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		V_9 = (uint64_t)((int64_t)(((int64_t)(((int64_t)(((int64_t)(uint64_t)((uint32_t)L_90))|((int64_t)(((int64_t)(uint64_t)((uint32_t)L_94))<<((int32_t)16)))))|((int64_t)(((int64_t)(uint64_t)((uint32_t)L_98))<<((int32_t)32)))))|((int64_t)(((int64_t)(uint64_t)((uint32_t)L_102))<<((int32_t)48)))));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_103 = V_6;
		int32_t L_104 = V_2;
		NullCheck(L_103);
		int32_t L_105 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		uint16_t L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_107 = V_6;
		int32_t L_108 = V_2;
		NullCheck(L_107);
		int32_t L_109 = ((int32_t)il2cpp_codegen_add(L_108, 3));
		uint16_t L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_111 = V_6;
		int32_t L_112 = V_2;
		NullCheck(L_111);
		int32_t L_113 = ((int32_t)il2cpp_codegen_add(L_112, 5));
		uint16_t L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_115 = V_6;
		int32_t L_116 = V_2;
		NullCheck(L_115);
		int32_t L_117 = ((int32_t)il2cpp_codegen_add(L_116, 7));
		uint16_t L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		V_10 = (uint64_t)((int64_t)(((int64_t)(((int64_t)(((int64_t)(uint64_t)((uint32_t)L_106))|((int64_t)(((int64_t)(uint64_t)((uint32_t)L_110))<<((int32_t)16)))))|((int64_t)(((int64_t)(uint64_t)((uint32_t)L_114))<<((int32_t)32)))))|((int64_t)(((int64_t)(uint64_t)((uint32_t)L_118))<<((int32_t)48)))));
		Bits_BitPermuteStep2_mD633E91B3F047AA742A6E89FE46CBE6E4D7F7D83_inline((&V_10), (&V_9), (uint64_t)((int64_t)71777214294589695LL), 8, NULL);
		uint64_t L_119 = V_9;
		uint64_t L_120;
		L_120 = Interleave_Transpose_m43B18C86692DE1007754FB76215EDF69597BC7F4(L_119, NULL);
		V_9 = L_120;
		uint64_t L_121 = V_10;
		uint64_t L_122;
		L_122 = Interleave_Transpose_m43B18C86692DE1007754FB76215EDF69597BC7F4(L_121, NULL);
		V_10 = L_122;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_123 = V_7;
		int32_t L_124 = V_1;
		int32_t L_125 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_123);
		int32_t L_126 = ((int32_t)il2cpp_codegen_multiply(L_124, L_125));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_127 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		int32_t L_128 = V_2;
		uint64_t L_129 = V_9;
		NullCheck(L_127);
		(L_127)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_128/8))), (uint8_t)((int32_t)(uint8_t)L_129));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_130 = V_7;
		int32_t L_131 = V_1;
		int32_t L_132 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_130);
		int32_t L_133 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_131, L_132)), 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_134 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		int32_t L_135 = V_2;
		uint64_t L_136 = V_9;
		NullCheck(L_134);
		(L_134)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_135/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_136>>8))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_137 = V_7;
		int32_t L_138 = V_1;
		int32_t L_139 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_137);
		int32_t L_140 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_138, L_139)), 2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_141 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		int32_t L_142 = V_2;
		uint64_t L_143 = V_9;
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_142/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_143>>((int32_t)16)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_144 = V_7;
		int32_t L_145 = V_1;
		int32_t L_146 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_144);
		int32_t L_147 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_145, L_146)), 3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_148 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		int32_t L_149 = V_2;
		uint64_t L_150 = V_9;
		NullCheck(L_148);
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_149/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_150>>((int32_t)24)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_151 = V_7;
		int32_t L_152 = V_1;
		int32_t L_153 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_151);
		int32_t L_154 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_152, L_153)), 4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_155 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		int32_t L_156 = V_2;
		uint64_t L_157 = V_9;
		NullCheck(L_155);
		(L_155)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_156/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_157>>((int32_t)32)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_158 = V_7;
		int32_t L_159 = V_1;
		int32_t L_160 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_158);
		int32_t L_161 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_159, L_160)), 5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_162 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		int32_t L_163 = V_2;
		uint64_t L_164 = V_9;
		NullCheck(L_162);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_163/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_164>>((int32_t)40)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_165 = V_7;
		int32_t L_166 = V_1;
		int32_t L_167 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_165);
		int32_t L_168 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_166, L_167)), 6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_169 = (L_165)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		int32_t L_170 = V_2;
		uint64_t L_171 = V_9;
		NullCheck(L_169);
		(L_169)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_170/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_171>>((int32_t)48)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_172 = V_7;
		int32_t L_173 = V_1;
		int32_t L_174 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_172);
		int32_t L_175 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_173, L_174)), 7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_176 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		int32_t L_177 = V_2;
		uint64_t L_178 = V_9;
		NullCheck(L_176);
		(L_176)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_177/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_178>>((int32_t)56)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_179 = V_7;
		int32_t L_180 = V_1;
		int32_t L_181 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_179);
		int32_t L_182 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_180, L_181)), 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_183 = (L_179)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		int32_t L_184 = V_2;
		uint64_t L_185 = V_10;
		NullCheck(L_183);
		(L_183)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_184/8))), (uint8_t)((int32_t)(uint8_t)L_185));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_186 = V_7;
		int32_t L_187 = V_1;
		int32_t L_188 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_186);
		int32_t L_189 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_187, L_188)), ((int32_t)9)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_190 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_189));
		int32_t L_191 = V_2;
		uint64_t L_192 = V_10;
		NullCheck(L_190);
		(L_190)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_191/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_192>>8))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_193 = V_7;
		int32_t L_194 = V_1;
		int32_t L_195 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_193);
		int32_t L_196 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_194, L_195)), ((int32_t)10)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_197 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_196));
		int32_t L_198 = V_2;
		uint64_t L_199 = V_10;
		NullCheck(L_197);
		(L_197)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_198/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_199>>((int32_t)16)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_200 = V_7;
		int32_t L_201 = V_1;
		int32_t L_202 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_200);
		int32_t L_203 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_201, L_202)), ((int32_t)11)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_204 = (L_200)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		int32_t L_205 = V_2;
		uint64_t L_206 = V_10;
		NullCheck(L_204);
		(L_204)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_205/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_206>>((int32_t)24)))));
		int32_t L_207 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		if ((((int32_t)L_207) <= ((int32_t)((int32_t)12))))
		{
			goto IL_032a;
		}
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_208 = V_7;
		int32_t L_209 = V_1;
		int32_t L_210 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_208);
		int32_t L_211 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_209, L_210)), ((int32_t)12)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_212 = (L_208)->GetAt(static_cast<il2cpp_array_size_t>(L_211));
		int32_t L_213 = V_2;
		uint64_t L_214 = V_10;
		NullCheck(L_212);
		(L_212)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_213/8))), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_214>>((int32_t)32)))));
	}

IL_032a:
	{
		int32_t L_215 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_215, 8));
	}

IL_032e:
	{
		int32_t L_216 = V_2;
		int32_t L_217 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_216) < ((int32_t)L_217)))
		{
			goto IL_0184;
		}
	}
	{
		V_2 = 0;
		goto IL_0363;
	}

IL_033e:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_218 = V_6;
		int32_t L_219 = V_2;
		il2cpp_codegen_memcpy(L_220, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		il2cpp_codegen_memcpy(V_8, L_220, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_221 = V_6;
		int32_t L_222 = V_2;
		NullCheck(L_221);
		int32_t L_223 = L_222;
		uint16_t L_224 = (L_221)->GetAt(static_cast<il2cpp_array_size_t>(L_223));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_225 = V_5;
		int32_t L_226 = V_2;
		NullCheck(L_225);
		int32_t L_227 = L_226;
		uint16_t L_228 = (L_225)->GetAt(static_cast<il2cpp_array_size_t>(L_227));
		uint16_t L_230;
		L_230 = ConstrainedFuncInvoker2< uint16_t, uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 24), L_229, (void*)(Il2CppFullySharedGenericStruct*)V_8, L_224, L_228);
		NullCheck(L_218);
		(L_218)->SetAt(static_cast<il2cpp_array_size_t>(L_219), (uint16_t)L_230);
		int32_t L_231 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_231, 1));
	}

IL_0363:
	{
		int32_t L_232 = V_2;
		int32_t L_233 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_232) < ((int32_t)L_233)))
		{
			goto IL_033e;
		}
	}
	{
		int32_t L_234 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_234, 1));
	}

IL_0370:
	{
		int32_t L_235 = V_1;
		int32_t L_236 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_235) < ((int32_t)L_236)))
		{
			goto IL_017d;
		}
	}
	{
		V_11 = 0;
		goto IL_05bc;
	}

IL_0384:
	{
		int32_t L_237 = V_11;
		V_1 = ((int32_t)(L_237>>3));
		int32_t L_238 = V_11;
		V_2 = ((int32_t)(L_238&7));
		bool L_239 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
		if (!L_239)
		{
			goto IL_03b3;
		}
	}
	{
		int32_t L_240 = V_11;
		int32_t L_241 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		if ((!(((uint32_t)L_240) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_241, ((int32_t)32)))))))
		{
			goto IL_03b3;
		}
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_242 = V_7;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_243 = ___3_pi;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_244 = ___4_pivots;
		int32_t L_245;
		L_245 = ((  int32_t (*) (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78*, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)))(__this, L_242, L_243, L_244, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		if (!L_245)
		{
			goto IL_03b3;
		}
	}
	{
		return (-1);
	}

IL_03b3:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_246 = V_7;
		int32_t L_247 = V_11;
		NullCheck(L_246);
		int32_t L_248 = L_247;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_249 = (L_246)->GetAt(static_cast<il2cpp_array_size_t>(L_248));
		V_12 = L_249;
		int32_t L_250 = V_11;
		V_3 = ((int32_t)il2cpp_codegen_add(L_250, 1));
		goto IL_04a7;
	}

IL_03c4:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_251 = V_7;
		int32_t L_252 = V_3;
		NullCheck(L_251);
		int32_t L_253 = L_252;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_254 = (L_251)->GetAt(static_cast<il2cpp_array_size_t>(L_253));
		V_13 = L_254;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_255 = V_12;
		int32_t L_256 = V_1;
		NullCheck(L_255);
		int32_t L_257 = L_256;
		uint8_t L_258 = (L_255)->GetAt(static_cast<il2cpp_array_size_t>(L_257));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_259 = V_13;
		int32_t L_260 = V_1;
		NullCheck(L_259);
		int32_t L_261 = L_260;
		uint8_t L_262 = (L_259)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		V_14 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_258^(int32_t)L_262)));
		uint8_t L_263 = V_14;
		int32_t L_264 = V_2;
		V_14 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_263>>((int32_t)(L_264&((int32_t)31))))));
		uint8_t L_265 = V_14;
		V_14 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_265&1)));
		V_15 = 0;
		uint8_t L_266 = V_14;
		V_16 = (uint8_t)((int32_t)(uint8_t)((-((int32_t)L_266))));
		int32_t L_267 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_17 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_267/8)), 4));
		goto IL_046c;
	}

IL_03fe:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_268 = V_12;
		int32_t L_269 = V_15;
		NullCheck(L_268);
		uint8_t* L_270 = ((L_268)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_269)));
		int32_t L_271 = *((uint8_t*)L_270);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_272 = V_13;
		int32_t L_273 = V_15;
		NullCheck(L_272);
		int32_t L_274 = L_273;
		uint8_t L_275 = (L_272)->GetAt(static_cast<il2cpp_array_size_t>(L_274));
		uint8_t L_276 = V_16;
		*((int8_t*)L_270) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_271^((int32_t)(uint8_t)((int32_t)((int32_t)L_275&(int32_t)L_276))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_277 = V_12;
		int32_t L_278 = V_15;
		NullCheck(L_277);
		uint8_t* L_279 = ((L_277)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_278, 1)))));
		int32_t L_280 = *((uint8_t*)L_279);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_281 = V_13;
		int32_t L_282 = V_15;
		NullCheck(L_281);
		int32_t L_283 = ((int32_t)il2cpp_codegen_add(L_282, 1));
		uint8_t L_284 = (L_281)->GetAt(static_cast<il2cpp_array_size_t>(L_283));
		uint8_t L_285 = V_16;
		*((int8_t*)L_279) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_280^((int32_t)(uint8_t)((int32_t)((int32_t)L_284&(int32_t)L_285))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_286 = V_12;
		int32_t L_287 = V_15;
		NullCheck(L_286);
		uint8_t* L_288 = ((L_286)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_287, 2)))));
		int32_t L_289 = *((uint8_t*)L_288);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_290 = V_13;
		int32_t L_291 = V_15;
		NullCheck(L_290);
		int32_t L_292 = ((int32_t)il2cpp_codegen_add(L_291, 2));
		uint8_t L_293 = (L_290)->GetAt(static_cast<il2cpp_array_size_t>(L_292));
		uint8_t L_294 = V_16;
		*((int8_t*)L_288) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_289^((int32_t)(uint8_t)((int32_t)((int32_t)L_293&(int32_t)L_294))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_295 = V_12;
		int32_t L_296 = V_15;
		NullCheck(L_295);
		uint8_t* L_297 = ((L_295)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_296, 3)))));
		int32_t L_298 = *((uint8_t*)L_297);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_299 = V_13;
		int32_t L_300 = V_15;
		NullCheck(L_299);
		int32_t L_301 = ((int32_t)il2cpp_codegen_add(L_300, 3));
		uint8_t L_302 = (L_299)->GetAt(static_cast<il2cpp_array_size_t>(L_301));
		uint8_t L_303 = V_16;
		*((int8_t*)L_297) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_298^((int32_t)(uint8_t)((int32_t)((int32_t)L_302&(int32_t)L_303))))));
		int32_t L_304 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_304, 4));
	}

IL_046c:
	{
		int32_t L_305 = V_15;
		int32_t L_306 = V_17;
		if ((((int32_t)L_305) <= ((int32_t)L_306)))
		{
			goto IL_03fe;
		}
	}
	{
		uint8_t L_307 = V_14;
		V_18 = (uint8_t)((int32_t)(uint8_t)((-((int32_t)L_307))));
		goto IL_0497;
	}

IL_047a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_308 = V_12;
		int32_t L_309 = V_15;
		NullCheck(L_308);
		uint8_t* L_310 = ((L_308)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_309)));
		int32_t L_311 = *((uint8_t*)L_310);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_312 = V_13;
		int32_t L_313 = V_15;
		NullCheck(L_312);
		int32_t L_314 = L_313;
		uint8_t L_315 = (L_312)->GetAt(static_cast<il2cpp_array_size_t>(L_314));
		uint8_t L_316 = V_18;
		*((int8_t*)L_310) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_311^((int32_t)(uint8_t)((int32_t)((int32_t)L_315&(int32_t)L_316))))));
		int32_t L_317 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_317, 1));
	}

IL_0497:
	{
		int32_t L_318 = V_15;
		int32_t L_319 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_318) < ((int32_t)((int32_t)(L_319/8)))))
		{
			goto IL_047a;
		}
	}
	{
		int32_t L_320 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_320, 1));
	}

IL_04a7:
	{
		int32_t L_321 = V_3;
		int32_t L_322 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		if ((((int32_t)L_321) < ((int32_t)L_322)))
		{
			goto IL_03c4;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_323 = V_12;
		int32_t L_324 = V_1;
		NullCheck(L_323);
		int32_t L_325 = L_324;
		uint8_t L_326 = (L_323)->GetAt(static_cast<il2cpp_array_size_t>(L_325));
		int32_t L_327 = V_2;
		if (((int32_t)(((int32_t)((int32_t)L_326>>((int32_t)(L_327&((int32_t)31)))))&1)))
		{
			goto IL_04c2;
		}
	}
	{
		return (-1);
	}

IL_04c2:
	{
		V_3 = 0;
		goto IL_05aa;
	}

IL_04c9:
	{
		int32_t L_328 = V_3;
		int32_t L_329 = V_11;
		if ((((int32_t)L_328) == ((int32_t)L_329)))
		{
			goto IL_05a6;
		}
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_330 = V_7;
		int32_t L_331 = V_3;
		NullCheck(L_330);
		int32_t L_332 = L_331;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_333 = (L_330)->GetAt(static_cast<il2cpp_array_size_t>(L_332));
		V_19 = L_333;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_334 = V_19;
		int32_t L_335 = V_1;
		NullCheck(L_334);
		int32_t L_336 = L_335;
		uint8_t L_337 = (L_334)->GetAt(static_cast<il2cpp_array_size_t>(L_336));
		int32_t L_338 = V_2;
		V_20 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_337>>((int32_t)(L_338&((int32_t)31))))));
		uint8_t L_339 = V_20;
		V_20 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_339&1)));
		V_21 = 0;
		uint8_t L_340 = V_20;
		V_22 = (uint8_t)((int32_t)(uint8_t)((-((int32_t)L_340))));
		int32_t L_341 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_23 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_341/8)), 4));
		goto IL_056f;
	}

IL_0501:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_342 = V_19;
		int32_t L_343 = V_21;
		NullCheck(L_342);
		uint8_t* L_344 = ((L_342)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_343)));
		int32_t L_345 = *((uint8_t*)L_344);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_346 = V_12;
		int32_t L_347 = V_21;
		NullCheck(L_346);
		int32_t L_348 = L_347;
		uint8_t L_349 = (L_346)->GetAt(static_cast<il2cpp_array_size_t>(L_348));
		uint8_t L_350 = V_22;
		*((int8_t*)L_344) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_345^((int32_t)(uint8_t)((int32_t)((int32_t)L_349&(int32_t)L_350))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_351 = V_19;
		int32_t L_352 = V_21;
		NullCheck(L_351);
		uint8_t* L_353 = ((L_351)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_352, 1)))));
		int32_t L_354 = *((uint8_t*)L_353);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_355 = V_12;
		int32_t L_356 = V_21;
		NullCheck(L_355);
		int32_t L_357 = ((int32_t)il2cpp_codegen_add(L_356, 1));
		uint8_t L_358 = (L_355)->GetAt(static_cast<il2cpp_array_size_t>(L_357));
		uint8_t L_359 = V_22;
		*((int8_t*)L_353) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_354^((int32_t)(uint8_t)((int32_t)((int32_t)L_358&(int32_t)L_359))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_360 = V_19;
		int32_t L_361 = V_21;
		NullCheck(L_360);
		uint8_t* L_362 = ((L_360)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_361, 2)))));
		int32_t L_363 = *((uint8_t*)L_362);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_364 = V_12;
		int32_t L_365 = V_21;
		NullCheck(L_364);
		int32_t L_366 = ((int32_t)il2cpp_codegen_add(L_365, 2));
		uint8_t L_367 = (L_364)->GetAt(static_cast<il2cpp_array_size_t>(L_366));
		uint8_t L_368 = V_22;
		*((int8_t*)L_362) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_363^((int32_t)(uint8_t)((int32_t)((int32_t)L_367&(int32_t)L_368))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_369 = V_19;
		int32_t L_370 = V_21;
		NullCheck(L_369);
		uint8_t* L_371 = ((L_369)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_370, 3)))));
		int32_t L_372 = *((uint8_t*)L_371);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_373 = V_12;
		int32_t L_374 = V_21;
		NullCheck(L_373);
		int32_t L_375 = ((int32_t)il2cpp_codegen_add(L_374, 3));
		uint8_t L_376 = (L_373)->GetAt(static_cast<il2cpp_array_size_t>(L_375));
		uint8_t L_377 = V_22;
		*((int8_t*)L_371) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_372^((int32_t)(uint8_t)((int32_t)((int32_t)L_376&(int32_t)L_377))))));
		int32_t L_378 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_378, 4));
	}

IL_056f:
	{
		int32_t L_379 = V_21;
		int32_t L_380 = V_23;
		if ((((int32_t)L_379) <= ((int32_t)L_380)))
		{
			goto IL_0501;
		}
	}
	{
		uint8_t L_381 = V_20;
		V_24 = (uint8_t)((int32_t)(uint8_t)((-((int32_t)L_381))));
		goto IL_059a;
	}

IL_057d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_382 = V_19;
		int32_t L_383 = V_21;
		NullCheck(L_382);
		uint8_t* L_384 = ((L_382)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_383)));
		int32_t L_385 = *((uint8_t*)L_384);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_386 = V_12;
		int32_t L_387 = V_21;
		NullCheck(L_386);
		int32_t L_388 = L_387;
		uint8_t L_389 = (L_386)->GetAt(static_cast<il2cpp_array_size_t>(L_388));
		uint8_t L_390 = V_24;
		*((int8_t*)L_384) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_385^((int32_t)(uint8_t)((int32_t)((int32_t)L_389&(int32_t)L_390))))));
		int32_t L_391 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_391, 1));
	}

IL_059a:
	{
		int32_t L_392 = V_21;
		int32_t L_393 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_392) < ((int32_t)((int32_t)(L_393/8)))))
		{
			goto IL_057d;
		}
	}

IL_05a6:
	{
		int32_t L_394 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_394, 1));
	}

IL_05aa:
	{
		int32_t L_395 = V_3;
		int32_t L_396 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		if ((((int32_t)L_395) < ((int32_t)L_396)))
		{
			goto IL_04c9;
		}
	}
	{
		int32_t L_397 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_397, 1));
	}

IL_05bc:
	{
		int32_t L_398 = V_11;
		int32_t L_399 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		if ((((int32_t)L_398) < ((int32_t)L_399)))
		{
			goto IL_0384;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_400 = ___0_pk;
		if (!L_400)
		{
			goto IL_072a;
		}
	}
	{
		bool L_401 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
		if (!L_401)
		{
			goto IL_06ee;
		}
	}
	{
		int32_t L_402 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		V_25 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_402, 1))/8));
		int32_t L_403 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_26 = ((int32_t)(L_403/8));
		V_27 = 0;
		int32_t L_404 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		V_28 = ((int32_t)(L_404%8));
		int32_t L_405 = V_28;
		if (L_405)
		{
			goto IL_0635;
		}
	}
	{
		int32_t L_406 = V_26;
		int32_t L_407 = V_25;
		V_29 = ((int32_t)il2cpp_codegen_subtract(L_406, L_407));
		V_1 = 0;
		goto IL_0627;
	}

IL_060c:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_408 = V_7;
		int32_t L_409 = V_1;
		NullCheck(L_408);
		int32_t L_410 = L_409;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_411 = (L_408)->GetAt(static_cast<il2cpp_array_size_t>(L_410));
		int32_t L_412 = V_25;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_413 = ___0_pk;
		int32_t L_414 = V_27;
		int32_t L_415 = V_29;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_411, L_412, (RuntimeArray*)L_413, L_414, L_415, NULL);
		int32_t L_416 = V_27;
		int32_t L_417 = V_29;
		V_27 = ((int32_t)il2cpp_codegen_add(L_416, L_417));
		int32_t L_418 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_418, 1));
	}

IL_0627:
	{
		int32_t L_419 = V_1;
		int32_t L_420 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		if ((((int32_t)L_419) < ((int32_t)L_420)))
		{
			goto IL_060c;
		}
	}
	{
		goto IL_072a;
	}

IL_0635:
	{
		V_1 = 0;
		goto IL_06e0;
	}

IL_063c:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_421 = V_7;
		int32_t L_422 = V_1;
		NullCheck(L_421);
		int32_t L_423 = L_422;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_424 = (L_421)->GetAt(static_cast<il2cpp_array_size_t>(L_423));
		V_30 = L_424;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_425 = V_30;
		int32_t L_426 = V_25;
		uint64_t L_427;
		L_427 = Pack_LE_To_UInt64_mB401DD9E769B441E6C4D14FB463B8AE5925654E4(L_425, L_426, NULL);
		V_31 = L_427;
		int32_t L_428 = V_25;
		V_2 = ((int32_t)il2cpp_codegen_add(L_428, 8));
		goto IL_0688;
	}

IL_0654:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_429 = V_30;
		int32_t L_430 = V_2;
		uint64_t L_431;
		L_431 = Pack_LE_To_UInt64_mB401DD9E769B441E6C4D14FB463B8AE5925654E4(L_429, L_430, NULL);
		V_32 = L_431;
		uint64_t L_432 = V_31;
		int32_t L_433 = V_28;
		uint64_t L_434 = V_32;
		int32_t L_435 = V_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_436 = ___0_pk;
		int32_t L_437 = V_27;
		Pack_UInt64_To_LE_mBE78DA6F52F26F76C818001B99972D8601FC07A5((uint64_t)((int64_t)(((int64_t)((uint64_t)L_432>>((int32_t)(L_433&((int32_t)63)))))|((int64_t)((int64_t)L_434<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_435))&((int32_t)63))))))), L_436, L_437, NULL);
		int32_t L_438 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_438, 8));
		uint64_t L_439 = V_32;
		V_31 = L_439;
		int32_t L_440 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_440, 8));
	}

IL_0688:
	{
		int32_t L_441 = V_2;
		int32_t L_442 = V_26;
		if ((((int32_t)L_441) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_442, 8)))))
		{
			goto IL_0654;
		}
	}
	{
		int32_t L_443 = V_26;
		int32_t L_444 = V_2;
		V_33 = ((int32_t)il2cpp_codegen_subtract(L_443, L_444));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_445 = V_30;
		int32_t L_446 = V_2;
		int32_t L_447 = V_33;
		uint64_t L_448;
		L_448 = Pack_LE_To_UInt64_Low_m2BDBC5AEA3B22D8AD1119FE569CDF6F28C45CACF(L_445, L_446, L_447, NULL);
		V_34 = L_448;
		uint64_t L_449 = V_31;
		int32_t L_450 = V_28;
		uint64_t L_451 = V_34;
		int32_t L_452 = V_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_453 = ___0_pk;
		int32_t L_454 = V_27;
		Pack_UInt64_To_LE_mBE78DA6F52F26F76C818001B99972D8601FC07A5((uint64_t)((int64_t)(((int64_t)((uint64_t)L_449>>((int32_t)(L_450&((int32_t)63)))))|((int64_t)((int64_t)L_451<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_452))&((int32_t)63))))))), L_453, L_454, NULL);
		int32_t L_455 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_455, 8));
		uint64_t L_456 = V_34;
		int32_t L_457 = V_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_458 = ___0_pk;
		int32_t L_459 = V_27;
		int32_t L_460 = V_33;
		Pack_UInt64_To_LE_Low_m9F090AE6FFCD86670F67C84013D7AD97B858842C((uint64_t)((int64_t)((uint64_t)L_456>>((int32_t)(L_457&((int32_t)63))))), L_458, L_459, L_460, NULL);
		int32_t L_461 = V_27;
		int32_t L_462 = V_33;
		V_27 = ((int32_t)il2cpp_codegen_add(L_461, L_462));
		int32_t L_463 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_463, 1));
	}

IL_06e0:
	{
		int32_t L_464 = V_1;
		int32_t L_465 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		if ((((int32_t)L_464) < ((int32_t)L_465)))
		{
			goto IL_063c;
		}
	}
	{
		goto IL_072a;
	}

IL_06ee:
	{
		int32_t L_466 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		int32_t L_467 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		V_35 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_466, L_467)), 7))/8));
		V_1 = 0;
		goto IL_0721;
	}

IL_0705:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_468 = V_7;
		int32_t L_469 = V_1;
		NullCheck(L_468);
		int32_t L_470 = L_469;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_471 = (L_468)->GetAt(static_cast<il2cpp_array_size_t>(L_470));
		int32_t L_472 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_473 = ___0_pk;
		int32_t L_474 = V_35;
		int32_t L_475 = V_1;
		int32_t L_476 = V_35;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_471, ((int32_t)(L_472/8)), (RuntimeArray*)L_473, ((int32_t)il2cpp_codegen_multiply(L_474, L_475)), L_476, NULL);
		int32_t L_477 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_477, 1));
	}

IL_0721:
	{
		int32_t L_478 = V_1;
		int32_t L_479 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		if ((((int32_t)L_478) < ((int32_t)L_479)))
		{
			goto IL_0705;
		}
	}

IL_072a:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t CmceEngine_1_Eval_m20F1D4F375C51483E984D996BDA01A056BBA8D8D_gshared (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_f, uint16_t ___1_a, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	void* L_8 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
	uint16_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
	memset(V_2, 0, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_f;
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		goto IL_0036;
	}

IL_0014:
	{
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		il2cpp_codegen_memcpy(V_2, L_5, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		uint16_t L_6 = V_0;
		uint16_t L_7 = ___1_a;
		uint16_t L_9;
		L_9 = ConstrainedFuncInvoker2< uint16_t, uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 24), L_8, (void*)(Il2CppFullySharedGenericStruct*)V_2, L_6, L_7);
		V_0 = L_9;
		uint16_t L_10 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_11 = ___0_f;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint16_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_0 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_10^(int32_t)L_14)));
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}

IL_0036:
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		uint16_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Root_m33AC584D97B88FDF20FEA64D2DBA4C900FC2D776_gshared (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_output, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_f, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___2_L, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_output;
		int32_t L_1 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = ___1_f;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = ___2_L;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint16_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		uint16_t L_7;
		L_7 = ((  uint16_t (*) (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, uint16_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_2, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint16_t)L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0015:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_GenerateIrrPoly_m0DC910575AF18FF2020AE8366F99ED513C39CBD8_gshared (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_field, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	void* L_34 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_52 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_74 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_84 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_123 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_140 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_171 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	const Il2CppFullySharedGenericStruct L_22 = alloca(SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
	const Il2CppFullySharedGenericStruct L_62 = L_22;
	const Il2CppFullySharedGenericStruct L_76 = L_22;
	const Il2CppFullySharedGenericStruct L_115 = L_22;
	const Il2CppFullySharedGenericStruct L_131 = L_22;
	const Il2CppFullySharedGenericStruct L_162 = L_22;
	const Il2CppFullySharedGenericStruct L_39 = alloca(SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
	UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericStruct V_3 = alloca(SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
	memset(V_3, 0, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
	int32_t V_4 = 0;
	uint16_t V_5 = 0;
	int32_t V_6 = 0;
	uint16_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	uint16_t V_11 = 0;
	int32_t V_12 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_1 = (UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C*)(UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C*)SZArrayNew(UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_0, 1)));
		V_0 = L_1;
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_2 = V_0;
		int32_t L_3 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_3);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)L_4);
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint16_t)1);
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_8 = V_0;
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_10 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_9);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)L_10);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_11 = ___0_field;
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 1;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, 0, (RuntimeArray*)L_14, 0, L_15, NULL);
		int32_t L_16 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_16, 2)), 1)));
		V_1 = L_17;
		V_2 = 2;
		goto IL_00ca;
	}

IL_0055:
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_18 = V_0;
		int32_t L_19 = V_2;
		int32_t L_20 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_21 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_20);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)L_21);
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		il2cpp_codegen_memcpy(V_3, L_22, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		int32_t L_23 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = *(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_25 = V_0;
		int32_t L_26 = V_2;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_29 = V_0;
		int32_t L_30 = V_2;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)(L_30>>1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = V_1;
		ConstrainedActionInvoker5< int32_t, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 35), L_34, (void*)(Il2CppFullySharedGenericStruct*)V_3, L_23, L_24, L_28, L_32, L_33);
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_35 = V_0;
		int32_t L_36 = V_2;
		int32_t L_37 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_38 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_37);
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, 1))), (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)L_38);
		il2cpp_codegen_memcpy(L_39, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		il2cpp_codegen_memcpy(V_3, L_39, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		int32_t L_40 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = *(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_42 = V_0;
		int32_t L_43 = V_2;
		NullCheck(L_42);
		int32_t L_44 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_46 = V_0;
		int32_t L_47 = V_2;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_50 = ___0_field;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = V_1;
		ConstrainedActionInvoker6< int32_t, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 36), L_52, (void*)(Il2CppFullySharedGenericStruct*)V_3, L_40, L_41, L_45, L_49, L_50, L_51);
		int32_t L_53 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_53, 2));
	}

IL_00ca:
	{
		int32_t L_54 = V_2;
		int32_t L_55 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_56 = V_2;
		int32_t L_57 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((!(((uint32_t)L_56) == ((uint32_t)L_57))))
		{
			goto IL_0113;
		}
	}
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_58 = V_0;
		int32_t L_59 = V_2;
		int32_t L_60 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_61 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_60);
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)L_61);
		il2cpp_codegen_memcpy(L_62, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		il2cpp_codegen_memcpy(V_3, L_62, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		int32_t L_63 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = *(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_65 = V_0;
		int32_t L_66 = V_2;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_69 = V_0;
		int32_t L_70 = V_2;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)(L_70>>1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = V_1;
		ConstrainedActionInvoker5< int32_t, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 35), L_74, (void*)(Il2CppFullySharedGenericStruct*)V_3, L_63, L_64, L_68, L_72, L_73);
	}

IL_0113:
	{
		V_4 = 0;
		goto IL_0254;
	}

IL_011b:
	{
		int32_t L_75 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_0179;
	}

IL_0123:
	{
		il2cpp_codegen_memcpy(L_76, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		il2cpp_codegen_memcpy(V_3, L_76, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_77 = V_0;
		int32_t L_78 = V_4;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		int32_t L_81 = V_4;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		uint16_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		uint16_t L_85;
		L_85 = ConstrainedFuncInvoker1< uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 19), L_84, (void*)(Il2CppFullySharedGenericStruct*)V_3, L_83);
		V_7 = L_85;
		int32_t L_86 = V_4;
		V_8 = L_86;
		goto IL_0167;
	}

IL_0146:
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_87 = V_0;
		int32_t L_88 = V_8;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		int32_t L_91 = V_4;
		NullCheck(L_90);
		uint16_t* L_92 = ((L_90)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_91)));
		int32_t L_93 = *((uint16_t*)L_92);
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_94 = V_0;
		int32_t L_95 = V_8;
		NullCheck(L_94);
		int32_t L_96 = L_95;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		int32_t L_98 = V_6;
		NullCheck(L_97);
		int32_t L_99 = L_98;
		uint16_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		uint16_t L_101 = V_7;
		*((int16_t*)L_92) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_93^((int32_t)(uint16_t)((int32_t)((int32_t)L_100&(int32_t)L_101))))));
		int32_t L_102 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_102, 1));
	}

IL_0167:
	{
		int32_t L_103 = V_8;
		int32_t L_104 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_103) < ((int32_t)((int32_t)il2cpp_codegen_add(L_104, 1)))))
		{
			goto IL_0146;
		}
	}
	{
		int32_t L_105 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_105, 1));
	}

IL_0179:
	{
		int32_t L_106 = V_6;
		int32_t L_107 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_106) < ((int32_t)L_107)))
		{
			goto IL_0123;
		}
	}
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_108 = V_0;
		int32_t L_109 = V_4;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		int32_t L_112 = V_4;
		NullCheck(L_111);
		int32_t L_113 = L_112;
		uint16_t L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		if (L_114)
		{
			goto IL_018e;
		}
	}
	{
		return (-1);
	}

IL_018e:
	{
		il2cpp_codegen_memcpy(L_115, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		il2cpp_codegen_memcpy(V_3, L_115, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_116 = V_0;
		int32_t L_117 = V_4;
		NullCheck(L_116);
		int32_t L_118 = L_117;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		int32_t L_120 = V_4;
		NullCheck(L_119);
		int32_t L_121 = L_120;
		uint16_t L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		uint16_t L_124;
		L_124 = ConstrainedFuncInvoker1< uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 27), L_123, (void*)(Il2CppFullySharedGenericStruct*)V_3, L_122);
		V_5 = L_124;
		int32_t L_125 = V_4;
		V_9 = L_125;
		goto IL_01db;
	}

IL_01b1:
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_126 = V_0;
		int32_t L_127 = V_9;
		NullCheck(L_126);
		int32_t L_128 = L_127;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		int32_t L_130 = V_4;
		il2cpp_codegen_memcpy(L_131, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		il2cpp_codegen_memcpy(V_3, L_131, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_132 = V_0;
		int32_t L_133 = V_9;
		NullCheck(L_132);
		int32_t L_134 = L_133;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_135 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		int32_t L_136 = V_4;
		NullCheck(L_135);
		int32_t L_137 = L_136;
		uint16_t L_138 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		uint16_t L_139 = V_5;
		uint16_t L_141;
		L_141 = ConstrainedFuncInvoker2< uint16_t, uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 24), L_140, (void*)(Il2CppFullySharedGenericStruct*)V_3, L_138, L_139);
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(L_130), (uint16_t)L_141);
		int32_t L_142 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_142, 1));
	}

IL_01db:
	{
		int32_t L_143 = V_9;
		int32_t L_144 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_143) < ((int32_t)((int32_t)il2cpp_codegen_add(L_144, 1)))))
		{
			goto IL_01b1;
		}
	}
	{
		V_10 = 0;
		goto IL_0244;
	}

IL_01ec:
	{
		int32_t L_145 = V_10;
		int32_t L_146 = V_4;
		if ((((int32_t)L_145) == ((int32_t)L_146)))
		{
			goto IL_023e;
		}
	}
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_147 = V_0;
		int32_t L_148 = V_4;
		NullCheck(L_147);
		int32_t L_149 = L_148;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_150 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		int32_t L_151 = V_10;
		NullCheck(L_150);
		int32_t L_152 = L_151;
		uint16_t L_153 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		V_11 = L_153;
		int32_t L_154 = V_4;
		V_12 = L_154;
		goto IL_0234;
	}

IL_0201:
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_155 = V_0;
		int32_t L_156 = V_12;
		NullCheck(L_155);
		int32_t L_157 = L_156;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		int32_t L_159 = V_10;
		NullCheck(L_158);
		uint16_t* L_160 = ((L_158)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_159)));
		int32_t L_161 = *((uint16_t*)L_160);
		il2cpp_codegen_memcpy(L_162, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		il2cpp_codegen_memcpy(V_3, L_162, SizeOf_GFImpl_tA693C4663951EFB3118E3F706C181228F8CD56A6);
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_163 = V_0;
		int32_t L_164 = V_12;
		NullCheck(L_163);
		int32_t L_165 = L_164;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_166 = (L_163)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		int32_t L_167 = V_4;
		NullCheck(L_166);
		int32_t L_168 = L_167;
		uint16_t L_169 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		uint16_t L_170 = V_11;
		uint16_t L_172;
		L_172 = ConstrainedFuncInvoker2< uint16_t, uint16_t, uint16_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 24), L_171, (void*)(Il2CppFullySharedGenericStruct*)V_3, L_169, L_170);
		*((int16_t*)L_160) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_161^(int32_t)L_172)));
		int32_t L_173 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_173, 1));
	}

IL_0234:
	{
		int32_t L_174 = V_12;
		int32_t L_175 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_174) <= ((int32_t)L_175)))
		{
			goto IL_0201;
		}
	}

IL_023e:
	{
		int32_t L_176 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_176, 1));
	}

IL_0244:
	{
		int32_t L_177 = V_10;
		int32_t L_178 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_177) < ((int32_t)L_178)))
		{
			goto IL_01ec;
		}
	}
	{
		int32_t L_179 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_179, 1));
	}

IL_0254:
	{
		int32_t L_180 = V_4;
		int32_t L_181 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		if ((((int32_t)L_180) < ((int32_t)L_181)))
		{
			goto IL_011b;
		}
	}
	{
		UInt16U5BU5DU5BU5D_t8D03DAAE09D94BDD86692932B8239233A0DEA07C* L_182 = V_0;
		int32_t L_183 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		NullCheck(L_182);
		int32_t L_184 = L_183;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_185 = (L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_186 = ___0_field;
		int32_t L_187 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_185, (RuntimeArray*)L_186, L_187, NULL);
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_CheckPKPadding_mF453A82871B7101B5591F04EC055900FD78ECD2F_gshared (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pk, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	{
		V_0 = (uint8_t)0;
		V_1 = 0;
		goto IL_0021;
	}

IL_0006:
	{
		uint8_t L_0 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_pk;
		int32_t L_2 = V_1;
		int32_t L_3 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		NullCheck(L_1);
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2, L_3)), L_4)), 1));
		uint8_t L_6 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_0|(int32_t)L_6)));
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0021:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0006;
		}
	}
	{
		uint8_t L_10 = V_0;
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_10&((int32_t)255)))>>((int32_t)(((int32_t)(L_11%8))&((int32_t)31))))));
		uint8_t L_12 = V_0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, 1)));
		uint8_t L_13 = V_0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_13&((int32_t)255)))>>7)));
		uint8_t L_14 = V_0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CmceEngine_1_CheckCPadding_m208AA028217BB79A39CDBEC67655994E793C33AA_gshared (CmceEngine_1_t86ACE372D99C5646798B228358430A27C0AF0C78* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_c, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_c;
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		return ((int32_t)il2cpp_codegen_subtract(((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_3&((int32_t)255)))>>((int32_t)(((int32_t)(L_4%8))&((int32_t)31)))))), 1)))&((int32_t)255)))>>7))), 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Sort32_m0FE17243226DDEF90D91F32A040B88985C8AF6A7_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_temp, int32_t ___1_from, int32_t ___2_to, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		int32_t L_0 = ___2_to;
		int32_t L_1 = ___1_from;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)2)))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		V_1 = 1;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_3 = V_1;
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
	}

IL_0011:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7)))))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_8 = V_1;
		V_2 = L_8;
		goto IL_0145;
	}

IL_001e:
	{
		V_3 = 0;
		goto IL_0089;
	}

IL_0022:
	{
		int32_t L_9 = V_3;
		int32_t L_10 = V_2;
		if (((int32_t)(L_9&L_10)))
		{
			goto IL_0085;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ___0_temp;
		int32_t L_12 = ___1_from;
		int32_t L_13 = V_3;
		int32_t L_14 = V_2;
		NullCheck(L_11);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_12, L_13)), L_14));
		int32_t L_16 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ___0_temp;
		int32_t L_18 = ___1_from;
		int32_t L_19 = V_3;
		NullCheck(L_17);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
		int32_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_4 = ((int32_t)(L_16^L_21));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = ___0_temp;
		int32_t L_23 = ___1_from;
		int32_t L_24 = V_3;
		int32_t L_25 = V_2;
		NullCheck(L_22);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_23, L_24)), L_25));
		int32_t L_27 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = ___0_temp;
		int32_t L_29 = ___1_from;
		int32_t L_30 = V_3;
		NullCheck(L_28);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_29, L_30));
		int32_t L_32 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_27, L_32));
		int32_t L_33 = V_5;
		int32_t L_34 = V_4;
		int32_t L_35 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = ___0_temp;
		int32_t L_37 = ___1_from;
		int32_t L_38 = V_3;
		int32_t L_39 = V_2;
		NullCheck(L_36);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_37, L_38)), L_39));
		int32_t L_41 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_5 = ((int32_t)(L_33^((int32_t)(L_34&((int32_t)(L_35^L_41))))));
		int32_t L_42 = V_5;
		V_5 = ((int32_t)(L_42>>((int32_t)31)));
		int32_t L_43 = V_5;
		int32_t L_44 = V_4;
		V_5 = ((int32_t)(L_43&L_44));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = ___0_temp;
		int32_t L_46 = ___1_from;
		int32_t L_47 = V_3;
		NullCheck(L_45);
		int32_t* L_48 = ((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_46, L_47)))));
		int32_t L_49 = *((int32_t*)L_48);
		int32_t L_50 = V_5;
		*((int32_t*)L_48) = (int32_t)((int32_t)(L_49^L_50));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = ___0_temp;
		int32_t L_52 = ___1_from;
		int32_t L_53 = V_3;
		int32_t L_54 = V_2;
		NullCheck(L_51);
		int32_t* L_55 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_52, L_53)), L_54)))));
		int32_t L_56 = *((int32_t*)L_55);
		int32_t L_57 = V_5;
		*((int32_t*)L_55) = (int32_t)((int32_t)(L_56^L_57));
	}

IL_0085:
	{
		int32_t L_58 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_0089:
	{
		int32_t L_59 = V_3;
		int32_t L_60 = V_0;
		int32_t L_61 = V_2;
		if ((((int32_t)L_59) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_60, L_61)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_62 = V_1;
		V_6 = L_62;
		goto IL_0139;
	}

IL_0097:
	{
		V_7 = 0;
		goto IL_0128;
	}

IL_009f:
	{
		int32_t L_63 = V_7;
		int32_t L_64 = V_2;
		if (((int32_t)(L_63&L_64)))
		{
			goto IL_0122;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = ___0_temp;
		int32_t L_66 = ___1_from;
		int32_t L_67 = V_7;
		int32_t L_68 = V_2;
		NullCheck(L_65);
		int32_t L_69 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_66, L_67)), L_68));
		int32_t L_70 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		V_8 = L_70;
		int32_t L_71 = V_6;
		V_9 = L_71;
		goto IL_0113;
	}

IL_00b5:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = ___0_temp;
		int32_t L_73 = ___1_from;
		int32_t L_74 = V_7;
		int32_t L_75 = V_9;
		NullCheck(L_72);
		int32_t L_76 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_73, L_74)), L_75));
		int32_t L_77 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		int32_t L_78 = V_8;
		V_10 = ((int32_t)(L_77^L_78));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = ___0_temp;
		int32_t L_80 = ___1_from;
		int32_t L_81 = V_7;
		int32_t L_82 = V_9;
		NullCheck(L_79);
		int32_t L_83 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_80, L_81)), L_82));
		int32_t L_84 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		int32_t L_85 = V_8;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_84, L_85));
		int32_t L_86 = V_11;
		int32_t L_87 = V_10;
		int32_t L_88 = V_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = ___0_temp;
		int32_t L_90 = ___1_from;
		int32_t L_91 = V_7;
		int32_t L_92 = V_9;
		NullCheck(L_89);
		int32_t L_93 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_90, L_91)), L_92));
		int32_t L_94 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		V_11 = ((int32_t)(L_86^((int32_t)(L_87&((int32_t)(L_88^L_94))))));
		int32_t L_95 = V_11;
		V_11 = ((int32_t)(L_95>>((int32_t)31)));
		int32_t L_96 = V_11;
		int32_t L_97 = V_10;
		V_11 = ((int32_t)(L_96&L_97));
		int32_t L_98 = V_8;
		int32_t L_99 = V_11;
		V_8 = ((int32_t)(L_98^L_99));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100 = ___0_temp;
		int32_t L_101 = ___1_from;
		int32_t L_102 = V_7;
		int32_t L_103 = V_9;
		NullCheck(L_100);
		int32_t* L_104 = ((L_100)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_101, L_102)), L_103)))));
		int32_t L_105 = *((int32_t*)L_104);
		int32_t L_106 = V_11;
		*((int32_t*)L_104) = (int32_t)((int32_t)(L_105^L_106));
		int32_t L_107 = V_9;
		V_9 = ((int32_t)(L_107>>1));
	}

IL_0113:
	{
		int32_t L_108 = V_9;
		int32_t L_109 = V_2;
		if ((((int32_t)L_108) > ((int32_t)L_109)))
		{
			goto IL_00b5;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = ___0_temp;
		int32_t L_111 = ___1_from;
		int32_t L_112 = V_7;
		int32_t L_113 = V_2;
		int32_t L_114 = V_8;
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_111, L_112)), L_113))), (int32_t)L_114);
	}

IL_0122:
	{
		int32_t L_115 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_0128:
	{
		int32_t L_116 = V_7;
		int32_t L_117 = V_0;
		int32_t L_118 = V_6;
		if ((((int32_t)L_116) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_117, L_118)))))
		{
			goto IL_009f;
		}
	}
	{
		int32_t L_119 = V_6;
		V_6 = ((int32_t)(L_119>>1));
	}

IL_0139:
	{
		int32_t L_120 = V_6;
		int32_t L_121 = V_2;
		if ((((int32_t)L_120) > ((int32_t)L_121)))
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_122 = V_2;
		V_2 = ((int32_t)(L_122>>1));
	}

IL_0145:
	{
		int32_t L_123 = V_2;
		if ((((int32_t)L_123) > ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmceEngine_1_Sort64_m66C8FBB39A328A13B19089CBCBF464FDF2277DC2_gshared (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_temp, int32_t ___1_from, int32_t ___2_to, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int64_t V_7 = 0;
	int32_t V_8 = 0;
	int64_t V_9 = 0;
	{
		int32_t L_0 = ___2_to;
		int32_t L_1 = ___1_from;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)2)))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		V_1 = 1;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_3 = V_1;
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
	}

IL_0011:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7)))))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_8 = V_1;
		V_2 = L_8;
		goto IL_0111;
	}

IL_001e:
	{
		V_3 = 0;
		goto IL_0073;
	}

IL_0022:
	{
		int32_t L_9 = V_3;
		int32_t L_10 = V_2;
		if (((int32_t)(L_9&L_10)))
		{
			goto IL_006f;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_11 = ___0_temp;
		int32_t L_12 = ___1_from;
		int32_t L_13 = V_3;
		int32_t L_14 = V_2;
		NullCheck(L_11);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_12, L_13)), L_14));
		int64_t L_16 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_17 = ___0_temp;
		int32_t L_18 = ___1_from;
		int32_t L_19 = V_3;
		NullCheck(L_17);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
		int64_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_4 = ((int64_t)il2cpp_codegen_subtract(L_16, L_21));
		int64_t L_22 = V_4;
		V_4 = ((int64_t)(L_22>>((int32_t)63)));
		int64_t L_23 = V_4;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_24 = ___0_temp;
		int32_t L_25 = ___1_from;
		int32_t L_26 = V_3;
		NullCheck(L_24);
		int32_t L_27 = ((int32_t)il2cpp_codegen_add(L_25, L_26));
		int64_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_29 = ___0_temp;
		int32_t L_30 = ___1_from;
		int32_t L_31 = V_3;
		int32_t L_32 = V_2;
		NullCheck(L_29);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_30, L_31)), L_32));
		int64_t L_34 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_4 = ((int64_t)(L_23&((int64_t)(L_28^L_34))));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_35 = ___0_temp;
		int32_t L_36 = ___1_from;
		int32_t L_37 = V_3;
		NullCheck(L_35);
		int64_t* L_38 = ((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, L_37)))));
		int64_t L_39 = *((int64_t*)L_38);
		int64_t L_40 = V_4;
		*((int64_t*)L_38) = (int64_t)((int64_t)(L_39^L_40));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41 = ___0_temp;
		int32_t L_42 = ___1_from;
		int32_t L_43 = V_3;
		int32_t L_44 = V_2;
		NullCheck(L_41);
		int64_t* L_45 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_42, L_43)), L_44)))));
		int64_t L_46 = *((int64_t*)L_45);
		int64_t L_47 = V_4;
		*((int64_t*)L_45) = (int64_t)((int64_t)(L_46^L_47));
	}

IL_006f:
	{
		int32_t L_48 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0073:
	{
		int32_t L_49 = V_3;
		int32_t L_50 = V_0;
		int32_t L_51 = V_2;
		if ((((int32_t)L_49) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_50, L_51)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_52 = V_1;
		V_5 = L_52;
		goto IL_0105;
	}

IL_0081:
	{
		V_6 = 0;
		goto IL_00f7;
	}

IL_0086:
	{
		int32_t L_53 = V_6;
		int32_t L_54 = V_2;
		if (((int32_t)(L_53&L_54)))
		{
			goto IL_00f1;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_55 = ___0_temp;
		int32_t L_56 = ___1_from;
		int32_t L_57 = V_6;
		int32_t L_58 = V_2;
		NullCheck(L_55);
		int32_t L_59 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_56, L_57)), L_58));
		int64_t L_60 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_7 = L_60;
		int32_t L_61 = V_5;
		V_8 = L_61;
		goto IL_00e2;
	}

IL_009c:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_62 = ___0_temp;
		int32_t L_63 = ___1_from;
		int32_t L_64 = V_6;
		int32_t L_65 = V_8;
		NullCheck(L_62);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_63, L_64)), L_65));
		int64_t L_67 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		int64_t L_68 = V_7;
		V_9 = ((int64_t)il2cpp_codegen_subtract(L_67, L_68));
		int64_t L_69 = V_9;
		V_9 = ((int64_t)(L_69>>((int32_t)63)));
		int64_t L_70 = V_9;
		int64_t L_71 = V_7;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_72 = ___0_temp;
		int32_t L_73 = ___1_from;
		int32_t L_74 = V_6;
		int32_t L_75 = V_8;
		NullCheck(L_72);
		int32_t L_76 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_73, L_74)), L_75));
		int64_t L_77 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		V_9 = ((int64_t)(L_70&((int64_t)(L_71^L_77))));
		int64_t L_78 = V_7;
		int64_t L_79 = V_9;
		V_7 = ((int64_t)(L_78^L_79));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_80 = ___0_temp;
		int32_t L_81 = ___1_from;
		int32_t L_82 = V_6;
		int32_t L_83 = V_8;
		NullCheck(L_80);
		int64_t* L_84 = ((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_81, L_82)), L_83)))));
		int64_t L_85 = *((int64_t*)L_84);
		int64_t L_86 = V_9;
		*((int64_t*)L_84) = (int64_t)((int64_t)(L_85^L_86));
		int32_t L_87 = V_8;
		V_8 = ((int32_t)(L_87>>1));
	}

IL_00e2:
	{
		int32_t L_88 = V_8;
		int32_t L_89 = V_2;
		if ((((int32_t)L_88) > ((int32_t)L_89)))
		{
			goto IL_009c;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_90 = ___0_temp;
		int32_t L_91 = ___1_from;
		int32_t L_92 = V_6;
		int32_t L_93 = V_2;
		int64_t L_94 = V_7;
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_91, L_92)), L_93))), (int64_t)L_94);
	}

IL_00f1:
	{
		int32_t L_95 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_95, 1));
	}

IL_00f7:
	{
		int32_t L_96 = V_6;
		int32_t L_97 = V_0;
		int32_t L_98 = V_5;
		if ((((int32_t)L_96) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_97, L_98)))))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_99 = V_5;
		V_5 = ((int32_t)(L_99>>1));
	}

IL_0105:
	{
		int32_t L_100 = V_5;
		int32_t L_101 = V_2;
		if ((((int32_t)L_100) > ((int32_t)L_101)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_102 = V_2;
		V_2 = ((int32_t)(L_102>>1));
	}

IL_0111:
	{
		int32_t L_103 = V_2;
		if ((((int32_t)L_103) > ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionDebugView_1__ctor_m9794474B5D0E766F159620ACEA8F820330BE9AEA_gshared (CollectionDebugView_1_t34A11A384D2CF7AF4FD5B650AE8C68D1A32F1977* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_collection;
		__this->____collection = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____collection), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* CollectionDebugView_1_get_Items_m539FAA3D11E755FD94C74DEF8A5392CB418FC779_gshared (CollectionDebugView_1_t34A11A384D2CF7AF4FD5B650AE8C68D1A32F1977* __this, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____collection;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_1);
		V_0 = L_2;
		RuntimeObject* L_3 = __this->____collection;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_3);
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4, 0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_0;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionDebuggerProxy_1__ctor_m80FAEEBB3D499A6501E9FED35BEC5DC51931D374_gshared (CollectionDebuggerProxy_1_t0D30B28B1C48E025F70E126BF31475DBE806D993* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* G_B2_0 = NULL;
	CollectionDebuggerProxy_1_t0D30B28B1C48E025F70E126BF31475DBE806D993* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	CollectionDebuggerProxy_1_t0D30B28B1C48E025F70E126BF31475DBE806D993* G_B1_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		RuntimeObject* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0017;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0017:
	{
		NullCheck(G_B2_1);
		G_B2_1->____collection = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->____collection), (void*)G_B2_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* CollectionDebuggerProxy_1_get_Items_mCB2E2177761FA3D5110B50AB7B75F7B93CA0B543_gshared (CollectionDebuggerProxy_1_t0D30B28B1C48E025F70E126BF31475DBE806D993* __this, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____collection;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_1);
		V_0 = L_2;
		RuntimeObject* L_3 = __this->____collection;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_3);
		InterfaceActionInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4, 0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_0;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionDebuggerProxy_1__ctor_m549D29B08867CC5ABECFBCD6681A9BE02D1CC388_gshared (CollectionDebuggerProxy_1_tB5B0EAD404667F7CD641232C6FECDC75D0C709B7* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* G_B2_0 = NULL;
	CollectionDebuggerProxy_1_tB5B0EAD404667F7CD641232C6FECDC75D0C709B7* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	CollectionDebuggerProxy_1_tB5B0EAD404667F7CD641232C6FECDC75D0C709B7* G_B1_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		RuntimeObject* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0017;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0017:
	{
		NullCheck(G_B2_1);
		G_B2_1->____collection = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->____collection), (void*)G_B2_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* CollectionDebuggerProxy_1_get_Items_m0F29D000264F628314D06A8BA4D85DF5A014B504_gshared (CollectionDebuggerProxy_1_tB5B0EAD404667F7CD641232C6FECDC75D0C709B7* __this, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____collection;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_1);
		V_0 = L_2;
		RuntimeObject* L_3 = __this->____collection;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_3);
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4, 0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_0;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionPool_2_Get_m49591341073C065989AE1D524C89B982DBF313BC_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tEE0AAA9B500AE463B204966D54AC2FCE0A45E780_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E CollectionPool_2_Get_mFBDA8E6C3C5D936DF2D7DAD940A3F8E4CFACB4A4_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tEE0AAA9B500AE463B204966D54AC2FCE0A45E780_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E L_2;
		L_2 = ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_m9E4340D69DCCF3A759C273DCB2F97F716EAB6A62_gshared (RuntimeObject* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tEE0AAA9B500AE463B204966D54AC2FCE0A45E780_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_inline(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_m2A522895F235DBDA8CD8E469ABE482FD9A9F03CE_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_tCC5CF16D21AE9A03A12B40C1DE834E0479F4CF31* L_0 = ((U3CU3Ec_tCC5CF16D21AE9A03A12B40C1DE834E0479F4CF31_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		U3CU3Ec_tCC5CF16D21AE9A03A12B40C1DE834E0479F4CF31* L_2 = ((U3CU3Ec_tCC5CF16D21AE9A03A12B40C1DE834E0479F4CF31_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_4 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_4, L_1, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((CollectionPool_2_tEE0AAA9B500AE463B204966D54AC2FCE0A45E780_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_tEE0AAA9B500AE463B204966D54AC2FCE0A45E780_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionPool_2_Get_mB2BEDE1F1042689A0E70FC08094AE292A72A8E31_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t279100A4FFD1A2D8961159AD31FA1ECBCEAA656D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E CollectionPool_2_Get_mA599906A16C9FC210481995CCB1A9F48A4040B38_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t279100A4FFD1A2D8961159AD31FA1ECBCEAA656D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E L_2;
		L_2 = ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_m8D5CCAB7841DF5AB9BCC824EC85EB0C5F6D808E3_gshared (RuntimeObject* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t279100A4FFD1A2D8961159AD31FA1ECBCEAA656D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_inline(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_mCF8224F782818ACAFAE2D6E5688B13120F0E6BD0_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_t10404AD5587FDC521FE9D3AD83CB02D13BBCBC5A* L_0 = ((U3CU3Ec_t10404AD5587FDC521FE9D3AD83CB02D13BBCBC5A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		U3CU3Ec_t10404AD5587FDC521FE9D3AD83CB02D13BBCBC5A* L_2 = ((U3CU3Ec_t10404AD5587FDC521FE9D3AD83CB02D13BBCBC5A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_4 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_4, L_1, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((CollectionPool_2_t279100A4FFD1A2D8961159AD31FA1ECBCEAA656D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_t279100A4FFD1A2D8961159AD31FA1ECBCEAA656D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionPool_2_Get_m7B658487ACAD00FEAB9E5BBA00C75AA0FA139F2A_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tC88CCBC3F6F38DA644A6A3A1F7DC9FAE0562A296_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E CollectionPool_2_Get_m222A4E54316113379DD8E067420D9833167EA8F7_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tC88CCBC3F6F38DA644A6A3A1F7DC9FAE0562A296_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E L_2;
		L_2 = ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_m00E7319DCABAF275F3A2AF2A4342D1EEAF134FC6_gshared (RuntimeObject* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tC88CCBC3F6F38DA644A6A3A1F7DC9FAE0562A296_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_inline(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_m0B2D4EF29DBF06E904E09AFCF956B32ADB209E71_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_tDFE9C9D3A97A107D38D40F44D513ACB8B7A831DB* L_0 = ((U3CU3Ec_tDFE9C9D3A97A107D38D40F44D513ACB8B7A831DB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		U3CU3Ec_tDFE9C9D3A97A107D38D40F44D513ACB8B7A831DB* L_2 = ((U3CU3Ec_tDFE9C9D3A97A107D38D40F44D513ACB8B7A831DB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_4 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_4, L_1, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((CollectionPool_2_tC88CCBC3F6F38DA644A6A3A1F7DC9FAE0562A296_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_tC88CCBC3F6F38DA644A6A3A1F7DC9FAE0562A296_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionPool_2_Get_mD62559D829E973B04312C5735E176EC98C46E483_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t6F1905D8979332C0F679BA087B3B9CAB2D0E98C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E CollectionPool_2_Get_m3C59F53AE130668BC960150D464838A1AD97A27E_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t6F1905D8979332C0F679BA087B3B9CAB2D0E98C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E L_2;
		L_2 = ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_mEEA1B0658DD8B03A7F8BC187C9015BD1619A3DE5_gshared (RuntimeObject* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t6F1905D8979332C0F679BA087B3B9CAB2D0E98C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_inline(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_m133E95FF9E7384411AFC9412301D7AE5EB82F283_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_t83DCBBB37A186C56BA4801E1C77AB11E239AA108* L_0 = ((U3CU3Ec_t83DCBBB37A186C56BA4801E1C77AB11E239AA108_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		U3CU3Ec_t83DCBBB37A186C56BA4801E1C77AB11E239AA108* L_2 = ((U3CU3Ec_t83DCBBB37A186C56BA4801E1C77AB11E239AA108_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_4 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_4, L_1, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((CollectionPool_2_t6F1905D8979332C0F679BA087B3B9CAB2D0E98C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_t6F1905D8979332C0F679BA087B3B9CAB2D0E98C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionPool_2_Get_m37630F981D96E6D82BFB7B6217B0D229CA08743E_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t416BD9EEAA6CF3FE08694B0ED1BFFB24DFCA9183_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E CollectionPool_2_Get_m06A331A0FEF3608767F8D992F3DCC1A1984106E4_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t416BD9EEAA6CF3FE08694B0ED1BFFB24DFCA9183_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E L_2;
		L_2 = ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_m5D18CAA5C4F8AE3E54EC201C237A830458936E74_gshared (RuntimeObject* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t416BD9EEAA6CF3FE08694B0ED1BFFB24DFCA9183_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_inline(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_m1953894AEA66190B472EBCC8A3998A8D05F2A4C9_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_tC800564EBB5D32130E0C854A5C823A43D6E86A72* L_0 = ((U3CU3Ec_tC800564EBB5D32130E0C854A5C823A43D6E86A72_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		U3CU3Ec_tC800564EBB5D32130E0C854A5C823A43D6E86A72* L_2 = ((U3CU3Ec_tC800564EBB5D32130E0C854A5C823A43D6E86A72_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_4 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_4, L_1, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((CollectionPool_2_t416BD9EEAA6CF3FE08694B0ED1BFFB24DFCA9183_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_t416BD9EEAA6CF3FE08694B0ED1BFFB24DFCA9183_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionPool_2_Get_mA9535ED94D9899FA7B41E063E2B6AAA3F0C929A3_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tE64DF0D7D3783D49F3822577F71035B734E1A26B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E CollectionPool_2_Get_mD56A9DCC894E337A7EA7E6F4A837D25EA62BCE2D_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tE64DF0D7D3783D49F3822577F71035B734E1A26B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E L_2;
		L_2 = ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_m4E21C5D955B17E28B0C3F279B4C5330A4671CFFD_gshared (RuntimeObject* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tE64DF0D7D3783D49F3822577F71035B734E1A26B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_inline(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_mD0004AF5E5B976F7B4545CBFEEF19FBB4B29FEA3_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_tEF36F5EDBC0D8E8E7EB80C857411C3885013499E* L_0 = ((U3CU3Ec_tEF36F5EDBC0D8E8E7EB80C857411C3885013499E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		U3CU3Ec_tEF36F5EDBC0D8E8E7EB80C857411C3885013499E* L_2 = ((U3CU3Ec_tEF36F5EDBC0D8E8E7EB80C857411C3885013499E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_4 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_4, L_1, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((CollectionPool_2_tE64DF0D7D3783D49F3822577F71035B734E1A26B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_tE64DF0D7D3783D49F3822577F71035B734E1A26B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionPool_2_Get_m81805EABEBDA3FF349D65DE56B84624DAABD15FD_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t88ACCECFF1D8FE1A47779B688F1A65707608835C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E CollectionPool_2_Get_m19CD846D052605E6656D7C7887DDA9E04783BDF3_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t88ACCECFF1D8FE1A47779B688F1A65707608835C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E L_2;
		L_2 = ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_m8BB3C7A10F409B29725C1D6158D6D2B75830BD68_gshared (RuntimeObject* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t88ACCECFF1D8FE1A47779B688F1A65707608835C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_inline(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_m32FFE2B4DD3969C6C7B314374C7477285720FDD3_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_tDAE171DB48D39969E8FF46A154B31B3951639080* L_0 = ((U3CU3Ec_tDAE171DB48D39969E8FF46A154B31B3951639080_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		U3CU3Ec_tDAE171DB48D39969E8FF46A154B31B3951639080* L_2 = ((U3CU3Ec_tDAE171DB48D39969E8FF46A154B31B3951639080_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_4 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_4, L_1, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((CollectionPool_2_t88ACCECFF1D8FE1A47779B688F1A65707608835C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_t88ACCECFF1D8FE1A47779B688F1A65707608835C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionPool_2_Get_m411EB4FF2E2641FDE11B243AC15FA290A8165AEE_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t5D9769C415584CBA55C9D50FDDF84957F722AB87_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E CollectionPool_2_Get_m37292B5219B99E8CA631BAAF6148EE8108A3B154_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t5D9769C415584CBA55C9D50FDDF84957F722AB87_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E L_2;
		L_2 = ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_m7F9169CA8ED500338A224EDA6EEEFC4AA4ECFD5F_gshared (RuntimeObject* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t5D9769C415584CBA55C9D50FDDF84957F722AB87_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_inline(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_mA71F691079F4652AB24353CB309EDC0D619E24AE_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_t12B34263DAA336BDDD9345CAC6DF7F7E753BB669* L_0 = ((U3CU3Ec_t12B34263DAA336BDDD9345CAC6DF7F7E753BB669_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		U3CU3Ec_t12B34263DAA336BDDD9345CAC6DF7F7E753BB669* L_2 = ((U3CU3Ec_t12B34263DAA336BDDD9345CAC6DF7F7E753BB669_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_4 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_4, L_1, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((CollectionPool_2_t5D9769C415584CBA55C9D50FDDF84957F722AB87_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_t5D9769C415584CBA55C9D50FDDF84957F722AB87_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionPool_2_Get_m240D3B2D7FD63E520FD4FFF8FCBB7806176993C4_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tB017AECD616BF88C506157C03A29912E92B61DAC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E CollectionPool_2_Get_m203CBF96669AAA61367240F582BF4C625F661D11_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tB017AECD616BF88C506157C03A29912E92B61DAC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E L_2;
		L_2 = ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_m6EC30E991DB4C140B928906C93A985636293DDB0_gshared (RuntimeObject* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tB017AECD616BF88C506157C03A29912E92B61DAC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_inline(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_mE7FA903A769F63F21C33EC2C1DE114E7202FABBB_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_t674923ACD65EF9BC9808C5D718A0E4FB60B42EA8* L_0 = ((U3CU3Ec_t674923ACD65EF9BC9808C5D718A0E4FB60B42EA8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		U3CU3Ec_t674923ACD65EF9BC9808C5D718A0E4FB60B42EA8* L_2 = ((U3CU3Ec_t674923ACD65EF9BC9808C5D718A0E4FB60B42EA8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_4 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_4, L_1, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((CollectionPool_2_tB017AECD616BF88C506157C03A29912E92B61DAC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_tB017AECD616BF88C506157C03A29912E92B61DAC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionPool_2_Get_m5D611643ED8727E6FCB3FB03426CCEC3EEE7ADBF_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t87016087A6FCF3BE6832F68340CE4B8EFB384904_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E CollectionPool_2_Get_mD7CC1B292379DA61F3B366DF3D61E4C8C96605F0_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t87016087A6FCF3BE6832F68340CE4B8EFB384904_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E L_2;
		L_2 = ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_m57B5A816F506567820DCA104951DAB924CB092F1_gshared (RuntimeObject* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t87016087A6FCF3BE6832F68340CE4B8EFB384904_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_inline(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_m3833CC340223B198E6B111E6AF33F4960CB798F2_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_t24CE44E972541D9A99CA8CBCD6E7778828C2D9BC* L_0 = ((U3CU3Ec_t24CE44E972541D9A99CA8CBCD6E7778828C2D9BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		U3CU3Ec_t24CE44E972541D9A99CA8CBCD6E7778828C2D9BC* L_2 = ((U3CU3Ec_t24CE44E972541D9A99CA8CBCD6E7778828C2D9BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_4 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_4, L_1, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((CollectionPool_2_t87016087A6FCF3BE6832F68340CE4B8EFB384904_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_t87016087A6FCF3BE6832F68340CE4B8EFB384904_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionPool_2_Get_m14408D5B2084E1CBD3E324BAA11BD45C98DC3AC9_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t12CF56D711A6EE0B59377E1F68943E93C9743C60_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E CollectionPool_2_Get_m3A49EEA42975B2E59453245A797ABAA610153461_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t12CF56D711A6EE0B59377E1F68943E93C9743C60_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E L_2;
		L_2 = ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_m43040C099A6A3B930B9ADFFBAE8AA240B0B7DDC1_gshared (RuntimeObject* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t12CF56D711A6EE0B59377E1F68943E93C9743C60_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_inline(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_m366D34D8BE354C26883B3EFBF2C43DEC6E26D862_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_tF32A93EC6F16BEDCA531A9194456860D709D980B* L_0 = ((U3CU3Ec_tF32A93EC6F16BEDCA531A9194456860D709D980B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		U3CU3Ec_tF32A93EC6F16BEDCA531A9194456860D709D980B* L_2 = ((U3CU3Ec_tF32A93EC6F16BEDCA531A9194456860D709D980B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_4 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_4, L_1, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((CollectionPool_2_t12CF56D711A6EE0B59377E1F68943E93C9743C60_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_t12CF56D711A6EE0B59377E1F68943E93C9743C60_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionPool_2_Get_mACE5CA70799AC1F0665A6A856546D3E6E0FD5B2C_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tC8893CCE41BC343C6987B521D477C24518435E0D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E CollectionPool_2_Get_mDF2373ADD9658A07189E40731F2387F4F2A2F02A_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tC8893CCE41BC343C6987B521D477C24518435E0D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E L_2;
		L_2 = ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_m7FEFD647F1FF321D6B438600BC421717686D2F69_gshared (RuntimeObject* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tC8893CCE41BC343C6987B521D477C24518435E0D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_inline(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_m93ED4BD5FE30E4ABD12DDB69912E66EA3EDD4939_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_tE188FA4E599E2E2A7294B24B2BAB5843DBD03D9D* L_0 = ((U3CU3Ec_tE188FA4E599E2E2A7294B24B2BAB5843DBD03D9D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		U3CU3Ec_tE188FA4E599E2E2A7294B24B2BAB5843DBD03D9D* L_2 = ((U3CU3Ec_tE188FA4E599E2E2A7294B24B2BAB5843DBD03D9D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_4 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_4, L_1, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((CollectionPool_2_tC8893CCE41BC343C6987B521D477C24518435E0D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_tC8893CCE41BC343C6987B521D477C24518435E0D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionPool_2_Get_m5B1B8EA3C82FB56D8F1605ADFEA49AD2CE0990E2_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tACBBC840258D5653B88B3E20B53F8ED6607B22D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E CollectionPool_2_Get_mE0B3B26CFD7BBA5C2A03FEDDA490DAC1D155405B_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tACBBC840258D5653B88B3E20B53F8ED6607B22D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E L_2;
		L_2 = ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_m84C0620EEACFE573DFD019644A09117F8A61D106_gshared (RuntimeObject* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tACBBC840258D5653B88B3E20B53F8ED6607B22D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_inline(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_mE6B69B8F357C5F660D70E92679098A7F56DF1767_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_t1E494E2618DB327158D6C79B72371F7B1EECB576* L_0 = ((U3CU3Ec_t1E494E2618DB327158D6C79B72371F7B1EECB576_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		U3CU3Ec_t1E494E2618DB327158D6C79B72371F7B1EECB576* L_2 = ((U3CU3Ec_t1E494E2618DB327158D6C79B72371F7B1EECB576_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_4 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_4, L_1, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((CollectionPool_2_tACBBC840258D5653B88B3E20B53F8ED6607B22D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_tACBBC840258D5653B88B3E20B53F8ED6607B22D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionPool_2_Get_m7275B21B85BDE333D5B7832D5B2F3DFE2E914808_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t4A2EAF16BCB64068FF79FFE2F8C3BAAA62DCCA92_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E CollectionPool_2_Get_mCEF199693B37D649F80B77F20C19811E863A772E_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t4A2EAF16BCB64068FF79FFE2F8C3BAAA62DCCA92_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E L_2;
		L_2 = ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_mFBD485EFCBBDB56DA73D03A55223AE54AAE5A39D_gshared (RuntimeObject* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_t4A2EAF16BCB64068FF79FFE2F8C3BAAA62DCCA92_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_inline(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_m99200174D47725BCEDC58BA9F163BD3008A3BD85_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_t18E716A9006ACC27F8F25EB2FFA2FC34B7F104DE* L_0 = ((U3CU3Ec_t18E716A9006ACC27F8F25EB2FFA2FC34B7F104DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		U3CU3Ec_t18E716A9006ACC27F8F25EB2FFA2FC34B7F104DE* L_2 = ((U3CU3Ec_t18E716A9006ACC27F8F25EB2FFA2FC34B7F104DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_4 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_4, L_1, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((CollectionPool_2_t4A2EAF16BCB64068FF79FFE2F8C3BAAA62DCCA92_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_t4A2EAF16BCB64068FF79FFE2F8C3BAAA62DCCA92_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionPool_2_Get_m43B288574A517CF2A9EE6FAEC4B50355379D506C_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tEE073BB0EEC21F466D5F3C12C852588CCE225C79_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E CollectionPool_2_Get_mD05E8369E0368A31E7A19C51B275E504FBE7B581_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tEE073BB0EEC21F466D5F3C12C852588CCE225C79_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E L_2;
		L_2 = ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_m9324FA476A0344A0E07554F4A5D0F423526674D8_gshared (RuntimeObject* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tEE073BB0EEC21F466D5F3C12C852588CCE225C79_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_inline(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_m891139522BAC5A4C50198843B9A8C80BA4A8B3C4_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_tD2547A7958EA4AAC462CD740F057D625ACAF1EFD* L_0 = ((U3CU3Ec_tD2547A7958EA4AAC462CD740F057D625ACAF1EFD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		U3CU3Ec_tD2547A7958EA4AAC462CD740F057D625ACAF1EFD* L_2 = ((U3CU3Ec_tD2547A7958EA4AAC462CD740F057D625ACAF1EFD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_4 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_4, L_1, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((CollectionPool_2_tEE073BB0EEC21F466D5F3C12C852588CCE225C79_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_tEE073BB0EEC21F466D5F3C12C852588CCE225C79_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionPool_2_Get_m1C84277E9C66A9E761AD2DB503C8DE93CA0DAF68_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tD78383F484539B23E7F65C2F1E7AE1A5808CDF33_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E CollectionPool_2_Get_m2913E3091833915F51AC413FACF0289147C59087_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tD78383F484539B23E7F65C2F1E7AE1A5808CDF33_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E L_2;
		L_2 = ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_mD3ECD09C22F1ED5CD95E6BD39E1EF0DB49450527_gshared (RuntimeObject* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tD78383F484539B23E7F65C2F1E7AE1A5808CDF33_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_inline(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_m49A0D7452C4913F1C77BA960C850425DE279C552_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_tC1BE959AF61BF3990A0A48154DB0953FF79FEA12* L_0 = ((U3CU3Ec_tC1BE959AF61BF3990A0A48154DB0953FF79FEA12_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		U3CU3Ec_tC1BE959AF61BF3990A0A48154DB0953FF79FEA12* L_2 = ((U3CU3Ec_tC1BE959AF61BF3990A0A48154DB0953FF79FEA12_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_4 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_4, L_1, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((CollectionPool_2_tD78383F484539B23E7F65C2F1E7AE1A5808CDF33_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_tD78383F484539B23E7F65C2F1E7AE1A5808CDF33_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionPool_2_Get_mBBD8379D3EC89C2721EE1F0F7A847DC02A270FE5_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tB4B9029F02605BCE56AE6D8407296C37B7E34C1B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E CollectionPool_2_Get_m02D6FA441707D87F22BE1479C7ADE71EC4EF440D_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tB4B9029F02605BCE56AE6D8407296C37B7E34C1B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E L_2;
		L_2 = ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_m82517F412DDEFDF35174029F7B6CEE64855B5C26_gshared (RuntimeObject* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tB4B9029F02605BCE56AE6D8407296C37B7E34C1B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_inline(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_mC41AF6D5A25195310A098252B38B74C98ACBAC45_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_t737BE258558C4E94965F1211ECA4433BCACDE49B* L_0 = ((U3CU3Ec_t737BE258558C4E94965F1211ECA4433BCACDE49B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		U3CU3Ec_t737BE258558C4E94965F1211ECA4433BCACDE49B* L_2 = ((U3CU3Ec_t737BE258558C4E94965F1211ECA4433BCACDE49B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_4 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_4, L_1, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((CollectionPool_2_tB4B9029F02605BCE56AE6D8407296C37B7E34C1B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_tB4B9029F02605BCE56AE6D8407296C37B7E34C1B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionPool_2_Get_m3438BA26FF925D529998F7A9816AB87A824F7BCD_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tAF45B9017CF01B088C1F8E261D82D491EF5211C6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E CollectionPool_2_Get_m22547530D7DD08A4DE7541FE7351B38ADA3559EF_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tAF45B9017CF01B088C1F8E261D82D491EF5211C6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject** L_1 = ___0_value;
		NullCheck(L_0);
		PooledObject_1_tAA91CAE93DC8A19E0A5B6C1D78C3AE149F635F8E L_2;
		L_2 = ObjectPool_1_Get_mA3CFEEAE86290AD1A6483559E325E9F339AFD9F9(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2_Release_m0568A850B8BD0862E011BA60F89B0C9AA4567A96_gshared (RuntimeObject* ___0_toRelease, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = ((CollectionPool_2_tAF45B9017CF01B088C1F8E261D82D491EF5211C6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool;
		RuntimeObject* L_1 = ___0_toRelease;
		NullCheck(L_0);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_inline(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionPool_2__cctor_m5EC5EFF80E2F0B6F8A971D30F593D1B1FB09DF17_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		U3CU3Ec_t65E3EDE8E4E968B487E923FA5F7329DEF3E03C2D* L_0 = ((U3CU3Ec_t65E3EDE8E4E968B487E923FA5F7329DEF3E03C2D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		U3CU3Ec_t65E3EDE8E4E968B487E923FA5F7329DEF3E03C2D* L_2 = ((U3CU3Ec_t65E3EDE8E4E968B487E923FA5F7329DEF3E03C2D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 10)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_4 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_4, L_1, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		((CollectionPool_2_tAF45B9017CF01B088C1F8E261D82D491EF5211C6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CollectionPool_2_tAF45B9017CF01B088C1F8E261D82D491EF5211C6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_Pool), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionWrapper_1__ctor_mBEF82316A479E910A72BB660D2F85CC475F4A858_gshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_list;
		ValidationUtils_ArgumentNotNull_mC7EBE963D14FFCC7B90B08B403FF584EC520C888((RuntimeObject*)L_0, _stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC, NULL);
		RuntimeObject* L_1 = ___0_list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		__this->____genericCollection = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____genericCollection), (void*)L_3);
		return;
	}

IL_0023:
	{
		RuntimeObject* L_4 = ___0_list;
		__this->____list = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____list), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionWrapper_1__ctor_m3201772CF5DA350674F2DDA4671C3BF88185845B_gshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_list;
		ValidationUtils_ArgumentNotNull_mC7EBE963D14FFCC7B90B08B403FF584EC520C888((RuntimeObject*)L_0, _stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC, NULL);
		RuntimeObject* L_1 = ___0_list;
		__this->____genericCollection = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____genericCollection), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionWrapper_1_Add_m11CD3EB04BAE94EED696399D005FDB09A77CCF57_gshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
	const Il2CppFullySharedGenericAny L_4 = L_2;
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->____genericCollection;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_item : &___0_item), SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
		NullCheck(L_1);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_2: *(void**)L_2));
		return;
	}

IL_0015:
	{
		RuntimeObject* L_3 = __this->____list;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_item : &___0_item), SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_4);
		NullCheck(L_3);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_3, L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionWrapper_1_Clear_m45C30C847BF0C132654DE456D0A4F1B84F9DB75A_gshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->____genericCollection;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(3, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_1);
		return;
	}

IL_0014:
	{
		RuntimeObject* L_2 = __this->____list;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(4, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionWrapper_1_Contains_m9853AEA49A2875DBB3A59CA46BC618393181E404_gshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
	const Il2CppFullySharedGenericAny L_5 = L_2;
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->____genericCollection;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_item : &___0_item), SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(4, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_2: *(void**)L_2));
		return L_3;
	}

IL_0015:
	{
		RuntimeObject* L_4 = __this->____list;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_item : &___0_item), SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_5);
		NullCheck(L_4);
		bool L_7;
		L_7 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(3, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_4, L_6);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionWrapper_1_CopyTo_mC26F73DA2C5CCEA54249D9FDE96CE93637F41AB5_gshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = __this->____genericCollection;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		int32_t L_3 = ___1_arrayIndex;
		NullCheck(L_1);
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_1, L_2, L_3);
		return;
	}

IL_0016:
	{
		RuntimeObject* L_4 = __this->____list;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		int32_t L_6 = ___1_arrayIndex;
		NullCheck((RuntimeObject*)L_4);
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_4, (RuntimeArray*)L_5, L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionWrapper_1_get_Count_mC9DDBFF5719B9681C21A0B0AD4D206AAF1EB8581_gshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->____genericCollection;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_1);
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->____list;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionWrapper_1_get_IsReadOnly_m767702D56270BA96E1AC7D3B0DBED9829AA3E66A_gshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->____genericCollection;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_1);
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->____list;
		NullCheck(L_3);
		bool L_4;
		L_4 = InterfaceFuncInvoker0< bool >::Invoke(5, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionWrapper_1_Remove_m4A57FDF9F890046B97DDDD483A2B0FAB44442FD8_gshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
	const Il2CppFullySharedGenericAny L_5 = L_2;
	const Il2CppFullySharedGenericAny L_10 = L_2;
	bool G_B4_0 = false;
	bool G_B3_0 = false;
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->____genericCollection;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_item : &___0_item), SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(6, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_2: *(void**)L_2));
		return L_3;
	}

IL_0015:
	{
		RuntimeObject* L_4 = __this->____list;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_item : &___0_item), SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_5);
		NullCheck(L_4);
		bool L_7;
		L_7 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(3, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_4, L_6);
		bool L_8 = L_7;
		if (!L_8)
		{
			G_B4_0 = L_8;
			goto IL_003a;
		}
		G_B3_0 = L_8;
	}
	{
		RuntimeObject* L_9 = __this->____list;
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_item : &___0_item), SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_10);
		NullCheck(L_9);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(9, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_9, L_11);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionWrapper_1_GetEnumerator_mCABE1C18D2D27E76903D6D517D3DE481CF0BC23E_gshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		V_0 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_0;
		RuntimeObject* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0017;
		}
		G_B1_0 = L_2;
	}
	{
		RuntimeObject* L_3 = __this->____list;
		RuntimeObject* L_4;
		L_4 = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))((RuntimeObject*)L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		G_B2_0 = L_4;
	}

IL_0017:
	{
		NullCheck(G_B2_0);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), G_B2_0);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionWrapper_1_System_Collections_IEnumerable_GetEnumerator_mC1A386B8A604559704FD72C83A74D094C4A3D995_gshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		V_0 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_0;
		RuntimeObject* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
		G_B1_0 = L_2;
	}
	{
		RuntimeObject* L_3 = __this->____list;
		G_B2_0 = ((RuntimeObject*)(L_3));
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, G_B2_0);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionWrapper_1_System_Collections_IList_Add_m57391EC2504A50024E76AC5F74F5C08082A2F800_gshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
	{
		RuntimeObject* L_0 = ___0_value;
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		RuntimeObject* L_1 = ___0_value;
		void* L_3 = UnBox_Any(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_2);
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(29, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3))));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(33, __this);
		return ((int32_t)il2cpp_codegen_subtract(L_4, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionWrapper_1_System_Collections_IList_Contains_m424D93372878016C632BC96D8BC7E4C037C24AE0_gshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		bool L_5;
		L_5 = VirtualFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(31, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
		return L_5;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionWrapper_1_System_Collections_IList_IndexOf_mDC701E8B8BE57D66FE3742AC72D393385E3B0034_gshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0B07B43F1557775B37A1B8EA12D9C378EDB7EC4B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_4 = __this->____list;
		RuntimeObject* L_5 = ___0_value;
		void* L_7 = UnBox_Any(L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_6);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_7)));
		NullCheck(L_4);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(7, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_4, L_8);
		return L_9;
	}

IL_0032:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionWrapper_1_System_Collections_IList_RemoveAt_mFD3792DB395092EAA57AFA249CCF56E67002B0AA_gshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6D708D3E8ACC426EF77E8F9A83D11A00B8B80AB4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->____list;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		InterfaceActionInvoker1< int32_t >::Invoke(10, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_2, L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionWrapper_1_System_Collections_IList_Insert_mB3FB91FE10A009F4CD273972E98AD78EE49D56D0_gshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral26D123FC6FB490AE20447BCDB0DEBAC133C96A6D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		RuntimeObject* L_2 = ___1_value;
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		RuntimeObject* L_3 = __this->____list;
		int32_t L_4 = ___0_index;
		RuntimeObject* L_5 = ___1_value;
		void* L_7 = UnBox_Any(L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_6);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_7)));
		NullCheck(L_3);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(8, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_3, L_4, L_8);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionWrapper_1_System_Collections_IList_get_IsFixedSize_m884AF557423F4C3CA85B9DF14A5FF341E4556775_gshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->____genericCollection;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_1);
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->____list;
		NullCheck(L_3);
		bool L_4;
		L_4 = InterfaceFuncInvoker0< bool >::Invoke(6, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionWrapper_1_System_Collections_IList_Remove_m4DC720E3065F6AF9B449F6CCDFD26F26E79F315E_gshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		bool L_5;
		L_5 = VirtualFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(35, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionWrapper_1_System_Collections_IList_get_Item_m22C59846FFA337BDC4DAA85FC883BB80DDDF6B1D_gshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral226374B4A4A54F92AC022D20C6A05ACB5EEC4C76)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->____list;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_2, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionWrapper_1_System_Collections_IList_set_Item_mD44F604204235FA71B111BC2CD21BC2C32753E17_gshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t36913CC53A530D328EC311AE7CBD72A57DC8F5A1);
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral226374B4A4A54F92AC022D20C6A05ACB5EEC4C76)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		RuntimeObject* L_2 = ___1_value;
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		RuntimeObject* L_3 = __this->____list;
		int32_t L_4 = ___0_index;
		RuntimeObject* L_5 = ___1_value;
		void* L_7 = UnBox_Any(L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_6);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_7)));
		NullCheck(L_3);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(1, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_3, L_4, L_8);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionWrapper_1_System_Collections_ICollection_CopyTo_m683BEF188D55E19C80B5D6FB2C151767A9DC8DE1_gshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		RuntimeArray* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		VirtualActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(32, __this, ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)Castclass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 6))), L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionWrapper_1_System_Collections_ICollection_get_IsSynchronized_m22FAEBB882AC0CA9EA73B82E79755316B8E4F1DD_gshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionWrapper_1_System_Collections_ICollection_get_SyncRoot_m00FD632BA038DED11A9A2381A91D2BDEF6E2BC6B_gshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71(L_1, L_2, NULL, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionWrapper_1_VerifyValueType_mCCC186ED94E7E5E2B6045EC28058A6114EA4FC17_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19)))(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		RuntimeObject* L_3 = ___0_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 23)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		String_t* L_6;
		L_6 = StringUtils_FormatWith_mE8641D4F1BDCF64E9876EE3B78F84D7AC377D3E9(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0569A2D4DF78C8C40FBF38FD14928474637FF26)), (RuntimeObject*)L_2, L_3, (RuntimeObject*)L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_002d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionWrapper_1_IsCompatibleObject_m8EC681F3845782BE270CDD8A54BCCCD61343516D_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_tAF70075D68E65666CDD73C84AB0BDE41A87C9E02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2))))
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 23)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = TypeExtensions_IsValueType_mD736A971C1BB5B1092EBD01BB9DF7B8D8C1C26BD(L_3, NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 23)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtils_tAF70075D68E65666CDD73C84AB0BDE41A87C9E02_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = ReflectionUtils_IsNullableType_mA710C2540434AAA2353481C15C48C3996EC69963(L_6, NULL);
		if (L_7)
		{
			goto IL_002f;
		}
	}

IL_002d:
	{
		return (bool)0;
	}

IL_002f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CollectionWrapper_1_get_UnderlyingCollection_m8BA487F6F3A33A7DFB5AE917E435BF8B1DF4F605_gshared (CollectionWrapper_1_tFA60AD3DE53AAF2D5439F4A6B46799FA94883B1C* __this, const RuntimeMethod* method) 
{
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____genericCollection;
		RuntimeObject* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0010;
		}
		G_B1_0 = L_1;
	}
	{
		RuntimeObject* L_2 = __this->____list;
		G_B2_0 = ((RuntimeObject*)(L_2));
	}

IL_0010:
	{
		return (RuntimeObject*)G_B2_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1__ctor_m82A329DF46E01C30AB3FF7AFA314E3CE05945220_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->___items = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___items), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1__ctor_m3C5F41CEF558647282BFEAA3BF51FFFC069086D6_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)7, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_list;
		__this->___items = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___items), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Collection_1_get_Count_mB555825F783F3AD3827FCBB129C0CBC41041D723_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_get_Items_m70F310094CE76ADA7B2BB57F46A9A473EE239015_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_get_Item_m1D936D2EDF0905F5E3BE99A97444ED8CADB7E4E6_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_set_Item_m6AB47AA40036D11B8B175BBE3ECE9289D7DADF07_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
	}

IL_0014:
	{
		int32_t L_2 = ___0_index;
		RuntimeObject* L_3 = __this->___items;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)L_4))))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___0_index;
		RuntimeObject* L_6 = ___1_value;
		VirtualActionInvoker2< int32_t, RuntimeObject* >::Invoke(38, __this, L_5, L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_Add_m4B1AD8CC1C40112C06A7C38FA96C4E125FF5D7D7_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
	}

IL_0014:
	{
		RuntimeObject* L_2 = __this->___items;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		RuntimeObject* L_5 = ___0_item;
		VirtualActionInvoker2< int32_t, RuntimeObject* >::Invoke(36, __this, L_4, L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_Clear_mB28DC25F1E8C0C4879232ED5C10806FC07851DD2_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
	}

IL_0014:
	{
		VirtualActionInvoker0::Invoke(35, __this);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_CopyTo_mF3C800DA2D15532CE8125B9586D12AE9E3138083_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_Contains_mC8B3383FD99F7EA5EB17E0B0CF322EC5423D6A11_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		RuntimeObject* L_1 = ___0_item;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(4, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_GetEnumerator_m3DCB821BDAC5C4B9CB1704FA8144E6845E95768C_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 15), (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Collection_1_IndexOf_m56B4BF18B936606561F0771EBCE75ABBEB0FD524_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		RuntimeObject* L_1 = ___0_item;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_Insert_mE0074F5F0969C40E01413F4BCD1E68EE2EE0DBDD_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
	}

IL_0014:
	{
		int32_t L_2 = ___0_index;
		RuntimeObject* L_3 = __this->___items;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_3);
		if ((!(((uint32_t)L_2) > ((uint32_t)L_4))))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___0_index;
		RuntimeObject* L_6 = ___1_item;
		VirtualActionInvoker2< int32_t, RuntimeObject* >::Invoke(36, __this, L_5, L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_Remove_m0B817582A4E783113AB989F1076F80B4413DACEA_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
	}

IL_0014:
	{
		RuntimeObject* L_2 = __this->___items;
		RuntimeObject* L_3 = ___0_item;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_2, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		return (bool)0;
	}

IL_0027:
	{
		int32_t L_6 = V_0;
		VirtualActionInvoker1< int32_t >::Invoke(37, __this, L_6);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_RemoveAt_m9042194BE084BE915BB344A888054B33E3296B69_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
	}

IL_0014:
	{
		int32_t L_2 = ___0_index;
		RuntimeObject* L_3 = __this->___items;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)L_4))))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___0_index;
		VirtualActionInvoker1< int32_t >::Invoke(37, __this, L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_ClearItems_m25B6C92FC1FD82FBA4C798272D61D85C5F01F9FF_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(3, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_InsertItem_mFBDE858E99A7CB87129FEB91DC9366E546D473F7_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(3, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_RemoveItem_m99604E053B4663810D3B914742A44A0CF293E3CC_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(4, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_SetItem_m857CDBE93125BE51A12219DFE55C1442BC21601C_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19E5ACA0133053FB64C1452670AAB0B82A82567A_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_System_Collections_IEnumerable_GetEnumerator_mFDFCE1B8579E803B06F528D61EF2862FB2FC182A_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m67F6AF1A2A6C816AC528EAE91555F702FA4CDAE2_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_System_Collections_ICollection_get_SyncRoot_mEB94E9AA54342FEE4C2754EB13691066B579A6C4_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___items;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return (RuntimeObject*)__this;
	}

IL_0011:
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_System_Collections_ICollection_CopyTo_m5E3AA8D39A3D0286394BD16E579E6ED32F38AA69_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = Collection_1_get_Count_mB555825F783F3AD3827FCBB129C0CBC41041D723(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___items;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck((RuntimeObject*)L_15);
		Type_t* L_16;
		L_16 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_15, NULL);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(55, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 25)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(28, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(28, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___items;
		NullCheck((RuntimeObject*)L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___items;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			RuntimeObject* L_35;
			L_35 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_33, L_34);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_35);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_35);
			int32_t L_36 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		}

IL_00cd_1:
		{
			int32_t L_37 = V_5;
			int32_t L_38 = V_4;
			if ((((int32_t)L_37) < ((int32_t)L_38)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_39 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_System_Collections_IList_get_Item_mFAC9A8A9856AEA2E4333E4B68F7214E0FA5121C7_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_System_Collections_IList_set_Item_m8A2ECCAA7B2CD2DAE51A2D3EEC0728181206AE41_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 26));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		Collection_1_set_Item_m6AB47AA40036D11B8B175BBE3ECE9289D7DADF07(__this, L_1, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 7))), il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 25)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_System_Collections_IList_get_IsReadOnly_m7CBEBE14B9F213B595D169428248051F9151DC11_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_System_Collections_IList_get_IsFixedSize_m62217E35139B9EFF48F6DDCD29ABA05D0644955D_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___items;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(6, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}

IL_0016:
	{
		RuntimeObject* L_4 = __this->___items;
		NullCheck((RuntimeObject*)L_4);
		bool L_5;
		L_5 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Collection_1_System_Collections_IList_Add_m7438B3375E4049E5CF483E66376CD11C6E0240ED_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_2, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 26));
	}
	try
	{
		RuntimeObject* L_3 = ___0_value;
		Collection_1_Add_m4B1AD8CC1C40112C06A7C38FA96C4E125FF5D7D7(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 7))), il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		goto IL_003d;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002a;
		}
		throw e;
	}

CATCH_002a:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_5 = ___0_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 25)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_003d;
	}

IL_003d:
	{
		int32_t L_8;
		L_8 = Collection_1_get_Count_mB555825F783F3AD3827FCBB129C0CBC41041D723(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		return ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_System_Collections_IList_Contains_mAC36240BA92D6C76F938031AFBF24658E1541E83_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = Collection_1_IsCompatibleObject_mE8A49943062A9B331A771711328F64394D2C0D37(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = Collection_1_Contains_mC8B3383FD99F7EA5EB17E0B0CF322EC5423D6A11(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 7))), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Collection_1_System_Collections_IList_IndexOf_mD8E46E821291AEFDEF0A9E6B293BF165ADFB0107_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = Collection_1_IsCompatibleObject_mE8A49943062A9B331A771711328F64394D2C0D37(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = Collection_1_IndexOf_m56B4BF18B936606561F0771EBCE75ABBEB0FD524(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 7))), il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_System_Collections_IList_Insert_mE27A92070EF8CFD170CF39C598B1BB0F1A8193F9_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_2, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 26));
	}
	try
	{
		int32_t L_3 = ___0_index;
		RuntimeObject* L_4 = ___1_value;
		Collection_1_Insert_mE0074F5F0969C40E01413F4BCD1E68EE2EE0DBDD(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 7))), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		goto IL_003e;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002b;
		}
		throw e;
	}

CATCH_002b:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_6 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 25)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_003e;
	}

IL_003e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_System_Collections_IList_Remove_m640EF750C3F5C767840CE6A86CD6169A4C295EEA_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = Collection_1_IsCompatibleObject_mE8A49943062A9B331A771711328F64394D2C0D37(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_4 = ___0_value;
		bool L_5;
		L_5 = Collection_1_Remove_m0B817582A4E783113AB989F1076F80B4413DACEA(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 7))), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_IsCompatibleObject_mE8A49943062A9B331A771711328F64394D2C0D37_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_2 = V_0;
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1__ctor_m67B249F628BE8100AB3633B0DEDF15A5D57DEC91_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->___items = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___items), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1__ctor_m1D5C099D16710C6E5066F3424681A81EC38325D4_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)7, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_list;
		__this->___items = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___items), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Collection_1_get_Count_m4E6700446481671FD288965E4B65F22E64D9A0FC_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_get_Items_m28790124F51325F0D7B3D6D8F6DA85624B384468_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_get_Item_m26800C9AF2A5E664431CBE9E7226640FC911673C_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	{
		RuntimeObject* L_0 = __this->___items;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_set_Item_m06AE2AE919C0BB6ECC0D6B7F9DE5B47B386524D2_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
	}

IL_0014:
	{
		int32_t L_2 = ___0_index;
		RuntimeObject* L_3 = __this->___items;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)L_4))))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___0_index;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___1_value : &___1_value), SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
		VirtualActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(38, __this, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_6: *(void**)L_6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_Add_mF22066358998A145CE60DDE6744CA01EB558E2FF_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
	}

IL_0014:
	{
		RuntimeObject* L_2 = __this->___items;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___0_item : &___0_item), SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
		VirtualActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(36, __this, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_5: *(void**)L_5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_Clear_mAB5B1D9440DFAF16F118155B623406D9751D679D_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
	}

IL_0014:
	{
		VirtualActionInvoker0::Invoke(35, __this);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_CopyTo_mBD77E8AAC65A9EC7B32D594703BF55D8AE74A794_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_Contains_m18024715EBAF403F2BAB0C57C3D1E6514B0A3BED_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	{
		RuntimeObject* L_0 = __this->___items;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___0_item : &___0_item), SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(4, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_GetEnumerator_m4618C8F0B86731E29AEFD0835E13E634DB91E2A5_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 15), (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Collection_1_IndexOf_mC7240C5BF76EA8F698670E42707029D928AA0564_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	{
		RuntimeObject* L_0 = __this->___items;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___0_item : &___0_item), SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_Insert_mF526AB1879424E4471FE76E1350C7EFDD33C1B6A_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
	}

IL_0014:
	{
		int32_t L_2 = ___0_index;
		RuntimeObject* L_3 = __this->___items;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_3);
		if ((!(((uint32_t)L_2) > ((uint32_t)L_4))))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___0_index;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___1_item : &___1_item), SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
		VirtualActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(36, __this, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_6: *(void**)L_6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_Remove_m18F4865C353A82187E0D177BC61C7E7C0FF3456A_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
	}

IL_0014:
	{
		RuntimeObject* L_2 = __this->___items;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___0_item : &___0_item), SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_3: *(void**)L_3));
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		return (bool)0;
	}

IL_0027:
	{
		int32_t L_6 = V_0;
		VirtualActionInvoker1< int32_t >::Invoke(37, __this, L_6);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_RemoveAt_m388FBEB87048121DAF672F01A92B16FB07883160_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
	}

IL_0014:
	{
		int32_t L_2 = ___0_index;
		RuntimeObject* L_3 = __this->___items;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_3);
		if ((!(((uint32_t)L_2) >= ((uint32_t)L_4))))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___0_index;
		VirtualActionInvoker1< int32_t >::Invoke(37, __this, L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_ClearItems_m6527D5A287BCACD46BE2DFCC3EB26B35A53A2820_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(3, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_InsertItem_m5B6FCA9390868D5D01E64342BE845196712FDD3B_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	{
		RuntimeObject* L_0 = __this->___items;
		int32_t L_1 = ___0_index;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___1_item : &___1_item), SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
		NullCheck(L_0);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(3, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_2: *(void**)L_2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_RemoveItem_mD4B98D63D11C8FB4F72C9E76D7FAC1373F11FD97_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(4, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_SetItem_m856C514754B9A8E549766FC2F7CCC4CBE438F33F_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	{
		RuntimeObject* L_0 = __this->___items;
		int32_t L_1 = ___0_index;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___1_item : &___1_item), SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
		NullCheck(L_0);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_2: *(void**)L_2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mE5452D0613EA0DC6799888E3EAE0F05FF1B2E8BA_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_System_Collections_IEnumerable_GetEnumerator_m1F346E952C4E9B473D727EF95089E012601C5791_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_System_Collections_ICollection_get_IsSynchronized_mB78969E7CD5148E9FC07E5609BDE547CBBFB3F5D_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_System_Collections_ICollection_get_SyncRoot_mA25F25D837C0C5C8188E4350536A3D4F7422134C_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___items;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return (RuntimeObject*)__this;
	}

IL_0011:
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_System_Collections_ICollection_CopyTo_m96133CAD62C8A682C23B8AF6AEA5A525B12CE781_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_35 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ((  int32_t (*) (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)IsInst((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck((RuntimeObject*)L_15);
		Type_t* L_16;
		L_16 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_15, NULL);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(55, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 25)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(28, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(28, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___items;
		NullCheck((RuntimeObject*)L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___items;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_33, L_34, (Il2CppFullySharedGenericAny*)L_35);
			RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), L_35);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_36);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_36);
			int32_t L_37 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		}

IL_00cd_1:
		{
			int32_t L_38 = V_5;
			int32_t L_39 = V_4;
			if ((((int32_t)L_38) < ((int32_t)L_39)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_40 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_System_Collections_IList_get_Item_mFB46FD861CD7B06AF1AF98C045F282D4A00DD54C_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	{
		RuntimeObject* L_0 = __this->___items;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_System_Collections_IList_set_Item_m56EEA5E90A4574AA8B7740C48A8C2DE685833F91_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 26));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_3);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)), il2cpp_rgctx_method(method->klass->rgctx_data, 27), __this, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_6 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 25)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_System_Collections_IList_get_IsReadOnly_mA1CBD8F74A6A9E4547CF80AC2712864CC6610125_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_System_Collections_IList_get_IsFixedSize_m750DB53F230619A5C888FD0C8C13DB99FB42EFDC_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___items;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(6, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}

IL_0016:
	{
		RuntimeObject* L_4 = __this->___items;
		NullCheck((RuntimeObject*)L_4);
		bool L_5;
		L_5 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Collection_1_System_Collections_IList_Add_mECF5C4D5474CE2B4843D7BF03AB6F4A08013F31F_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(L_2, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 26));
	}
	try
	{
		RuntimeObject* L_3 = ___0_value;
		void* L_5 = UnBox_Any(L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)), il2cpp_rgctx_method(method->klass->rgctx_data, 28), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_5)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_5))));
		goto IL_003d;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002a;
		}
		throw e;
	}

CATCH_002a:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_6 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_7 = ___0_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 25)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_7, L_9, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_003d;
	}

IL_003d:
	{
		int32_t L_10;
		L_10 = ((  int32_t (*) (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		return ((int32_t)il2cpp_codegen_subtract(L_10, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_System_Collections_IList_Contains_m5EB8FCB5962F76524860905BF9CD60A319C76236_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
		return L_5;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Collection_1_System_Collections_IList_IndexOf_mEA525DC04547386EA983242F9716F2C78ADD7FFC_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_3);
		int32_t L_5;
		L_5 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)), il2cpp_rgctx_method(method->klass->rgctx_data, 32), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
		return L_5;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_System_Collections_IList_Insert_mAB65E283CF82461CAB8BD50628162000F77D201D_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(L_2, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 26));
	}
	try
	{
		int32_t L_3 = ___0_index;
		RuntimeObject* L_4 = ___1_value;
		void* L_6 = UnBox_Any(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)), il2cpp_rgctx_method(method->klass->rgctx_data, 33), __this, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_6)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_6))));
		goto IL_003e;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002b;
		}
		throw e;
	}

CATCH_002b:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_7 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_8 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 25)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_003e;
	}

IL_003e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_System_Collections_IList_Remove_m18A4F173AF2AC959DC8A7C9BE989A23C2FB14782_gshared (Collection_1_t64F5801B7817C08B013BC2F8613C49D0A43A562E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	{
		RuntimeObject* L_0 = __this->___items;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), (RuntimeObject*)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023((int32_t)((int32_t)28), NULL);
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_4 = ___0_value;
		void* L_6 = UnBox_Any(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5);
		bool L_7;
		L_7 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)), il2cpp_rgctx_method(method->klass->rgctx_data, 34), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_6)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_6))));
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collection_1_IsCompatibleObject_m92713E94D30BC00F4194BFF0BB209EE195B6EA02_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	memset(V_0, 0, SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_T_tA21DB3A9D21728349A05E27B31B801BDA4BCF482);
		bool L_3 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7), L_2);
		bool L_4 = L_3;
		return L_4;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Bits_BitPermuteStep2_mD633E91B3F047AA742A6E89FE46CBE6E4D7F7D83_inline (uint64_t* ___0_hi, uint64_t* ___1_lo, uint64_t ___2_m, int32_t ___3_s, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		uint64_t* L_0 = ___1_lo;
		int64_t L_1 = *((int64_t*)L_0);
		int32_t L_2 = ___3_s;
		uint64_t* L_3 = ___0_hi;
		int64_t L_4 = *((int64_t*)L_3);
		uint64_t L_5 = ___2_m;
		V_0 = ((int64_t)(((int64_t)(((int64_t)((uint64_t)L_1>>((int32_t)(L_2&((int32_t)63)))))^L_4))&(int64_t)L_5));
		uint64_t* L_6 = ___1_lo;
		uint64_t* L_7 = ___1_lo;
		int64_t L_8 = *((int64_t*)L_7);
		uint64_t L_9 = V_0;
		int32_t L_10 = ___3_s;
		*((int64_t*)L_6) = (int64_t)((int64_t)(L_8^((int64_t)((int64_t)L_9<<((int32_t)(L_10&((int32_t)63)))))));
		uint64_t* L_11 = ___0_hi;
		uint64_t* L_12 = ___0_hi;
		int64_t L_13 = *((int64_t*)L_12);
		uint64_t L_14 = V_0;
		*((int64_t*)L_11) = (int64_t)((int64_t)(L_13^(int64_t)L_14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_gshared_inline (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B7_0 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B6_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___m_FreshlyReleased;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_FreshlyReleased;
		V_0 = L_2;
		RuntimeObject** L_3 = (RuntimeObject**)(&__this->___m_FreshlyReleased);
		il2cpp_codegen_initobj(L_3, sizeof(RuntimeObject*));
		goto IL_008a;
	}

IL_002a:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4 = __this->___m_List;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_005d;
		}
	}
	{
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_7 = __this->___m_CreateFunc;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_inline(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_0 = L_8;
		int32_t L_9;
		L_9 = ObjectPool_1_get_CountAll_mF3CDC0B64D5037106573C6CEE921EAF0A8B3C8EB_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_3 = L_9;
		int32_t L_10 = V_3;
		ObjectPool_1_set_CountAll_mED1939CDEBB184383799328A0C1AEC9E1D2960D9_inline(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		goto IL_008a;
	}

IL_005d:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_11 = __this->___m_List;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_13 = __this->___m_List;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		RuntimeObject* L_15;
		L_15 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_13, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_15;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_16 = __this->___m_List;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54(L_16, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_008a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->___m_ActionOnGet;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_19 = L_18;
		if (L_19)
		{
			G_B7_0 = L_19;
			goto IL_0096;
		}
		G_B6_0 = L_19;
	}
	{
		goto IL_009d;
	}

IL_0096:
	{
		RuntimeObject* L_20 = V_0;
		NullCheck(G_B7_0);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(G_B7_0, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
	}

IL_009d:
	{
		RuntimeObject* L_21 = V_0;
		V_5 = L_21;
		goto IL_00a2;
	}

IL_00a2:
	{
		RuntimeObject* L_22 = V_5;
		return L_22;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_gshared_inline (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, RuntimeObject* ___0_element, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B2_0 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B1_0 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B9_0 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B8_0 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = __this->___m_ActionOnRelease;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
		G_B1_0 = L_1;
	}
	{
		goto IL_0014;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_element;
		NullCheck(G_B2_0);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(G_B2_0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_FreshlyReleased;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject* L_5 = ___0_element;
		__this->___m_FreshlyReleased = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FreshlyReleased), (void*)L_5);
		goto IL_007a;
	}

IL_0031:
	{
		int32_t L_6;
		L_6 = ObjectPool_1_get_CountInactive_m9A907BFCDCBFE910B784BDBF71EEDC6D14C90608(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_7 = __this->___m_MaxSize;
		V_1 = (bool)((((int32_t)L_6) < ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_9 = __this->___m_List;
		RuntimeObject* L_10 = ___0_element;
		NullCheck(L_9);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		goto IL_007a;
	}

IL_0054:
	{
		int32_t L_11;
		L_11 = ObjectPool_1_get_CountAll_mF3CDC0B64D5037106573C6CEE921EAF0A8B3C8EB_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_2 = L_11;
		int32_t L_12 = V_2;
		ObjectPool_1_set_CountAll_mED1939CDEBB184383799328A0C1AEC9E1D2960D9_inline(__this, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_13 = __this->___m_ActionOnDestroy;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = L_13;
		if (L_14)
		{
			G_B9_0 = L_14;
			goto IL_0072;
		}
		G_B8_0 = L_14;
	}
	{
		goto IL_0079;
	}

IL_0072:
	{
		RuntimeObject* L_15 = ___0_element;
		NullCheck(G_B9_0);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(G_B9_0, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
	}

IL_0079:
	{
	}

IL_007a:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_CountAll_mF3CDC0B64D5037106573C6CEE921EAF0A8B3C8EB_gshared_inline (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCountAllU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectPool_1_set_CountAll_mED1939CDEBB184383799328A0C1AEC9E1D2960D9_gshared_inline (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CCountAllU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
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
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
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
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}

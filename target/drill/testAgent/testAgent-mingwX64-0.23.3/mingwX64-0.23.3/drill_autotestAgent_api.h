#ifndef KONAN_DRILL_AUTOTESTAGENT_H
#define KONAN_DRILL_AUTOTESTAGENT_H
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
typedef bool            drill_autotestAgent_KBoolean;
#else
typedef _Bool           drill_autotestAgent_KBoolean;
#endif
typedef unsigned short     drill_autotestAgent_KChar;
typedef signed char        drill_autotestAgent_KByte;
typedef short              drill_autotestAgent_KShort;
typedef int                drill_autotestAgent_KInt;
typedef long long          drill_autotestAgent_KLong;
typedef unsigned char      drill_autotestAgent_KUByte;
typedef unsigned short     drill_autotestAgent_KUShort;
typedef unsigned int       drill_autotestAgent_KUInt;
typedef unsigned long long drill_autotestAgent_KULong;
typedef float              drill_autotestAgent_KFloat;
typedef double             drill_autotestAgent_KDouble;
#ifndef _MSC_VER
typedef float __attribute__ ((__vector_size__ (16))) drill_autotestAgent_KVector128;
#else
#include <xmmintrin.h>
typedef __m128 drill_autotestAgent_KVector128;
#endif
typedef void*              drill_autotestAgent_KNativePtr;
struct drill_autotestAgent_KType;
typedef struct drill_autotestAgent_KType drill_autotestAgent_KType;

typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_kotlin_Byte;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_kotlin_Short;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_kotlin_Int;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_kotlin_Long;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_kotlin_Float;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_kotlin_Double;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_kotlin_Char;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_kotlin_Boolean;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_kotlin_Unit;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_kotlin_UByte;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_kotlin_UShort;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_kotlin_UInt;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_kotlin_ULong;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_com_epam_drill_test_agent_Agent;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_AgentLoggingConfiguration;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_Configuration;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_com_epam_drill_common_agent_configuration_AgentMetadata;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_com_epam_drill_common_agent_configuration_AgentParameters;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_ParameterDefinitions;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_com_epam_drill_common_agent_configuration_AgentParameterDefinition;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_ParameterValidationException;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_ValidatedParametersProvider;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_kotlin_collections_Set;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_kotlin_collections_MutableMap;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_com_epam_drill_test_agent_instrument_AgentClassTransformer;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_kotlin_ByteArray;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_kotlin_Any;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_com_epam_drill_test_agent_instrument_StrategyManager;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_com_epam_drill_test_agent_instrument_clients_ApacheHttpClientTransformer;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_com_epam_drill_test_agent_instrument_clients_JavaHttpClientTransformer;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_com_epam_drill_test_agent_instrument_clients_OkHttp3ClientTransformer;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_com_epam_drill_test_agent_instrument_clients_SpringWebClientTransformer;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_com_epam_drill_test_agent_instrument_servers_ReactorTransformer;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_com_epam_drill_test_agent_jvmti_ClassFileLoadHook;
typedef struct {
  drill_autotestAgent_KNativePtr pinned;
} drill_autotestAgent_kref_com_epam_drill_test_agent_session_SessionController;

extern drill_autotestAgent_KInt Agent_OnLoad(void* vmPointer, const char* options, drill_autotestAgent_KLong reservedPtr);
extern void Agent_OnUnload(void* vmPointer);
extern drill_autotestAgent_KUInt checkEx(drill_autotestAgent_KUInt errCode, const char* funName);
extern void* currentEnvs();
extern void* getJvm();
extern void* jvmtii();

typedef struct {
  /* Service functions. */
  void (*DisposeStablePointer)(drill_autotestAgent_KNativePtr ptr);
  void (*DisposeString)(const char* string);
  drill_autotestAgent_KBoolean (*IsInstance)(drill_autotestAgent_KNativePtr ref, const drill_autotestAgent_KType* type);
  drill_autotestAgent_kref_kotlin_Byte (*createNullableByte)(drill_autotestAgent_KByte);
  drill_autotestAgent_KByte (*getNonNullValueOfByte)(drill_autotestAgent_kref_kotlin_Byte);
  drill_autotestAgent_kref_kotlin_Short (*createNullableShort)(drill_autotestAgent_KShort);
  drill_autotestAgent_KShort (*getNonNullValueOfShort)(drill_autotestAgent_kref_kotlin_Short);
  drill_autotestAgent_kref_kotlin_Int (*createNullableInt)(drill_autotestAgent_KInt);
  drill_autotestAgent_KInt (*getNonNullValueOfInt)(drill_autotestAgent_kref_kotlin_Int);
  drill_autotestAgent_kref_kotlin_Long (*createNullableLong)(drill_autotestAgent_KLong);
  drill_autotestAgent_KLong (*getNonNullValueOfLong)(drill_autotestAgent_kref_kotlin_Long);
  drill_autotestAgent_kref_kotlin_Float (*createNullableFloat)(drill_autotestAgent_KFloat);
  drill_autotestAgent_KFloat (*getNonNullValueOfFloat)(drill_autotestAgent_kref_kotlin_Float);
  drill_autotestAgent_kref_kotlin_Double (*createNullableDouble)(drill_autotestAgent_KDouble);
  drill_autotestAgent_KDouble (*getNonNullValueOfDouble)(drill_autotestAgent_kref_kotlin_Double);
  drill_autotestAgent_kref_kotlin_Char (*createNullableChar)(drill_autotestAgent_KChar);
  drill_autotestAgent_KChar (*getNonNullValueOfChar)(drill_autotestAgent_kref_kotlin_Char);
  drill_autotestAgent_kref_kotlin_Boolean (*createNullableBoolean)(drill_autotestAgent_KBoolean);
  drill_autotestAgent_KBoolean (*getNonNullValueOfBoolean)(drill_autotestAgent_kref_kotlin_Boolean);
  drill_autotestAgent_kref_kotlin_Unit (*createNullableUnit)(void);
  drill_autotestAgent_kref_kotlin_UByte (*createNullableUByte)(drill_autotestAgent_KUByte);
  drill_autotestAgent_KUByte (*getNonNullValueOfUByte)(drill_autotestAgent_kref_kotlin_UByte);
  drill_autotestAgent_kref_kotlin_UShort (*createNullableUShort)(drill_autotestAgent_KUShort);
  drill_autotestAgent_KUShort (*getNonNullValueOfUShort)(drill_autotestAgent_kref_kotlin_UShort);
  drill_autotestAgent_kref_kotlin_UInt (*createNullableUInt)(drill_autotestAgent_KUInt);
  drill_autotestAgent_KUInt (*getNonNullValueOfUInt)(drill_autotestAgent_kref_kotlin_UInt);
  drill_autotestAgent_kref_kotlin_ULong (*createNullableULong)(drill_autotestAgent_KULong);
  drill_autotestAgent_KULong (*getNonNullValueOfULong)(drill_autotestAgent_kref_kotlin_ULong);

  /* User functions. */
  struct {
    struct {
      struct {
        struct {
          struct {
            struct {
              struct {
                struct {
                  drill_autotestAgent_KType* (*_type)(void);
                  drill_autotestAgent_kref_com_epam_drill_test_agent_Agent (*_instance)();
                  drill_autotestAgent_KInt (*agentOnLoad)(drill_autotestAgent_kref_com_epam_drill_test_agent_Agent thiz, const char* options);
                  void (*agentOnUnload)(drill_autotestAgent_kref_com_epam_drill_test_agent_Agent thiz);
                  void (*agentOnVmDeath)(drill_autotestAgent_kref_com_epam_drill_test_agent_Agent thiz);
                  void (*agentOnVmInit)(drill_autotestAgent_kref_com_epam_drill_test_agent_Agent thiz);
                } Agent;
                struct {
                  struct {
                    drill_autotestAgent_KType* (*_type)(void);
                    drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_AgentLoggingConfiguration (*_instance)();
                    void (*defaultJvmLoggingConfiguration)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_AgentLoggingConfiguration thiz);
                    void (*defaultNativeLoggingConfiguration)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_AgentLoggingConfiguration thiz);
                    void (*updateJvmLoggingConfiguration)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_AgentLoggingConfiguration thiz);
                    void (*updateNativeLoggingConfiguration)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_AgentLoggingConfiguration thiz);
                  } AgentLoggingConfiguration;
                  struct {
                    drill_autotestAgent_KType* (*_type)(void);
                    drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_Configuration (*_instance)();
                    drill_autotestAgent_kref_com_epam_drill_common_agent_configuration_AgentMetadata (*get_agentMetadata)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_Configuration thiz);
                    drill_autotestAgent_kref_com_epam_drill_common_agent_configuration_AgentParameters (*get_parameters)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_Configuration thiz);
                    void (*initializeJvm)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_Configuration thiz);
                    void (*initializeJvm_)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_Configuration thiz, const char* inputParameters);
                    void (*initializeNative)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_Configuration thiz, const char* agentOptions);
                  } Configuration;
                  struct {
                    drill_autotestAgent_KType* (*_type)(void);
                    drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_ParameterDefinitions (*_instance)();
                    drill_autotestAgent_kref_com_epam_drill_common_agent_configuration_AgentParameterDefinition (*get_API_KEY)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_ParameterDefinitions thiz);
                    drill_autotestAgent_kref_com_epam_drill_common_agent_configuration_AgentParameterDefinition (*get_API_URL)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_ParameterDefinitions thiz);
                    drill_autotestAgent_kref_com_epam_drill_common_agent_configuration_AgentParameterDefinition (*get_DEVTOOLS_PROXY_ADDRESS)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_ParameterDefinitions thiz);
                    drill_autotestAgent_kref_com_epam_drill_common_agent_configuration_AgentParameterDefinition (*get_DEVTOOLS_REPLACE_LOCALHOST)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_ParameterDefinitions thiz);
                    drill_autotestAgent_kref_com_epam_drill_common_agent_configuration_AgentParameterDefinition (*get_FRAMEWORK_PLUGINS)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_ParameterDefinitions thiz);
                    drill_autotestAgent_kref_com_epam_drill_common_agent_configuration_AgentParameterDefinition (*get_GROUP_ID)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_ParameterDefinitions thiz);
                    drill_autotestAgent_kref_com_epam_drill_common_agent_configuration_AgentParameterDefinition (*get_JS_AGENT_BUILD_VERSION)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_ParameterDefinitions thiz);
                    drill_autotestAgent_kref_com_epam_drill_common_agent_configuration_AgentParameterDefinition (*get_JS_AGENT_ID)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_ParameterDefinitions thiz);
                    drill_autotestAgent_kref_com_epam_drill_common_agent_configuration_AgentParameterDefinition (*get_LABELS)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_ParameterDefinitions thiz);
                    drill_autotestAgent_kref_com_epam_drill_common_agent_configuration_AgentParameterDefinition (*get_LAUNCH_TYPE)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_ParameterDefinitions thiz);
                    drill_autotestAgent_kref_com_epam_drill_common_agent_configuration_AgentParameterDefinition (*get_LOG_FILE)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_ParameterDefinitions thiz);
                    drill_autotestAgent_kref_com_epam_drill_common_agent_configuration_AgentParameterDefinition (*get_LOG_LEVEL)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_ParameterDefinitions thiz);
                    drill_autotestAgent_kref_com_epam_drill_common_agent_configuration_AgentParameterDefinition (*get_LOG_LIMIT)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_ParameterDefinitions thiz);
                    drill_autotestAgent_kref_com_epam_drill_common_agent_configuration_AgentParameterDefinition (*get_MESSAGE_QUEUE_LIMIT)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_ParameterDefinitions thiz);
                    drill_autotestAgent_kref_com_epam_drill_common_agent_configuration_AgentParameterDefinition (*get_PROXY_ADDRESS)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_ParameterDefinitions thiz);
                    drill_autotestAgent_kref_com_epam_drill_common_agent_configuration_AgentParameterDefinition (*get_SESSION_ID)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_ParameterDefinitions thiz);
                    drill_autotestAgent_kref_com_epam_drill_common_agent_configuration_AgentParameterDefinition (*get_SSL_TRUSTSTORE)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_ParameterDefinitions thiz);
                    drill_autotestAgent_kref_com_epam_drill_common_agent_configuration_AgentParameterDefinition (*get_SSL_TRUSTSTORE_PASSWORD)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_ParameterDefinitions thiz);
                    drill_autotestAgent_kref_com_epam_drill_common_agent_configuration_AgentParameterDefinition (*get_TEST_TASK_ID)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_ParameterDefinitions thiz);
                    drill_autotestAgent_kref_com_epam_drill_common_agent_configuration_AgentParameterDefinition (*get_WITH_JS_COVERAGE)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_ParameterDefinitions thiz);
                  } ParameterDefinitions;
                  struct {
                    drill_autotestAgent_KType* (*_type)(void);
                    drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_ParameterValidationException (*ParameterValidationException)(const char* message);
                  } ParameterValidationException;
                  struct {
                    drill_autotestAgent_KType* (*_type)(void);
                    drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_ValidatedParametersProvider (*ValidatedParametersProvider)(drill_autotestAgent_kref_kotlin_collections_Set configurationProviders, drill_autotestAgent_KInt priority);
                    drill_autotestAgent_kref_kotlin_collections_MutableMap (*get_configuration)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_ValidatedParametersProvider thiz);
                    drill_autotestAgent_KInt (*get_priority)(drill_autotestAgent_kref_com_epam_drill_test_agent_configuration_ValidatedParametersProvider thiz);
                  } ValidatedParametersProvider;
                } configuration;
                struct {
                  struct {
                    drill_autotestAgent_KType* (*_type)(void);
                    drill_autotestAgent_kref_com_epam_drill_test_agent_instrument_AgentClassTransformer (*_instance)();
                    drill_autotestAgent_kref_kotlin_ByteArray (*transform)(drill_autotestAgent_kref_com_epam_drill_test_agent_instrument_AgentClassTransformer thiz, const char* className, drill_autotestAgent_kref_kotlin_ByteArray classBytes, drill_autotestAgent_kref_kotlin_Any loader, drill_autotestAgent_kref_kotlin_Any protectionDomain);
                  } AgentClassTransformer;
                  struct {
                    drill_autotestAgent_KType* (*_type)(void);
                    drill_autotestAgent_kref_com_epam_drill_test_agent_instrument_StrategyManager (*_instance)();
                    void (*initialize)(drill_autotestAgent_kref_com_epam_drill_test_agent_instrument_StrategyManager thiz, const char* rawFrameworkPlugins);
                  } StrategyManager;
                  struct {
                    struct {
                      drill_autotestAgent_KType* (*_type)(void);
                      drill_autotestAgent_kref_com_epam_drill_test_agent_instrument_clients_ApacheHttpClientTransformer (*_instance)();
                    } ApacheHttpClientTransformer;
                    struct {
                      drill_autotestAgent_KType* (*_type)(void);
                      drill_autotestAgent_kref_com_epam_drill_test_agent_instrument_clients_JavaHttpClientTransformer (*_instance)();
                    } JavaHttpClientTransformer;
                    struct {
                      drill_autotestAgent_KType* (*_type)(void);
                      drill_autotestAgent_kref_com_epam_drill_test_agent_instrument_clients_OkHttp3ClientTransformer (*_instance)();
                    } OkHttp3ClientTransformer;
                    struct {
                      drill_autotestAgent_KType* (*_type)(void);
                      drill_autotestAgent_kref_com_epam_drill_test_agent_instrument_clients_SpringWebClientTransformer (*_instance)();
                    } SpringWebClientTransformer;
                  } clients;
                  struct {
                    struct {
                      drill_autotestAgent_KType* (*_type)(void);
                      drill_autotestAgent_kref_com_epam_drill_test_agent_instrument_servers_ReactorTransformer (*_instance)();
                    } ReactorTransformer;
                  } servers;
                } instrument;
                struct {
                  struct {
                    drill_autotestAgent_KType* (*_type)(void);
                    drill_autotestAgent_kref_com_epam_drill_test_agent_jvmti_ClassFileLoadHook (*_instance)();
                    void (*invoke)(drill_autotestAgent_kref_com_epam_drill_test_agent_jvmti_ClassFileLoadHook thiz, void* loader, void* kClassName, void* protectionDomain, drill_autotestAgent_KInt classDataLen, void* classData, void* newClassDataLen, void* newData);
                  } ClassFileLoadHook;
                  drill_autotestAgent_KInt (*agentOnLoad)(void* vmPointer, const char* options, drill_autotestAgent_KLong reservedPtr);
                  void (*agentOnUnload)(void* vmPointer);
                  drill_autotestAgent_KUInt (*checkEx_)(drill_autotestAgent_KUInt errCode, const char* funName);
                  void (*classFileLoadHook)(void* jvmtiEnv, void* jniEnv, void* classBeingRedefined, void* loader, void* clsName, void* protectionDomain, drill_autotestAgent_KInt classDataLen, void* classData, void* newClassDataLen, void* newData);
                  void* (*currentEnvs_)();
                  void* (*getJvm_)();
                  void* (*jvmtii_)();
                  void (*vmDeathEvent)(void* jvmtiEnv, void* jniEnv);
                  void (*vmInitEvent)(void* env, void* jniEnv, void* thread);
                } jvmti;
                struct {
                  struct {
                    drill_autotestAgent_KType* (*_type)(void);
                    drill_autotestAgent_kref_com_epam_drill_test_agent_session_SessionController (*_instance)();
                    void (*startSession)(drill_autotestAgent_kref_com_epam_drill_test_agent_session_SessionController thiz);
                  } SessionController;
                } session;
              } agent;
            } test;
          } drill;
        } epam;
      } com;
    } root;
  } kotlin;
} drill_autotestAgent_ExportedSymbols;
extern drill_autotestAgent_ExportedSymbols* drill_autotestAgent_symbols(void);
#ifdef __cplusplus
}  /* extern "C" */
#endif
#endif  /* KONAN_DRILL_AUTOTESTAGENT_H */

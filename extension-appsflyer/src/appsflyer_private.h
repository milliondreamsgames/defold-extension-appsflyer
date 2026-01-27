#if defined(DM_PLATFORM_ANDROID) || defined(DM_PLATFORM_IOS)

#pragma once

#include <dmsdk/sdk.h>

namespace dmAppsflyer {

struct TrackData
{
  char* key;
  char* value;
};

void Initialize_Ext();
void Finalize_Ext();

void InitializeSDK(const char* key, const char* appleAppID);
void StartSDK();
void PromptATT();
void SetDebugLog(bool is_debug);
void SetAnonymize(bool should_anonymize);
void LogEvent(const char* eventName, dmArray<TrackData>* trackData);
void SetCustomerUserId(const char* userId);
int GetAppsFlyerUID(lua_State* L);

} // namespace

#endif // platform
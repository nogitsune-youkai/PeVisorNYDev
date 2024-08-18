﻿#pragma once

#include "../MinDef.h"
#include "../../Extension/Extension.h"

/* Well-known SIDs */

typedef DEFINE_ANYSIZE_STRUCT(SID_2, SID, DWORD, 2);
typedef DEFINE_ANYSIZE_STRUCT(SID_3, SID, DWORD, 3);
typedef DEFINE_ANYSIZE_STRUCT(SID_4, SID, DWORD, 4);
typedef DEFINE_ANYSIZE_STRUCT(SID_5, SID, DWORD, 5);
typedef DEFINE_ANYSIZE_STRUCT(SID_6, SID, DWORD, 6);
typedef DEFINE_ANYSIZE_STRUCT(SID_7, SID, DWORD, 7);

/* SeExport used */
#define SID_EVERYONE { SID_REVISION, 1, SECURITY_WORLD_SID_AUTHORITY, { SECURITY_WORLD_RID } }
#define SID_SYSTEM { SID_REVISION, 1, SECURITY_NT_AUTHORITY, { SECURITY_LOCAL_SYSTEM_RID } }
#define SID_ADMINS { { SID_REVISION, 2, SECURITY_NT_AUTHORITY, { SECURITY_BUILTIN_DOMAIN_RID } }, DOMAIN_ALIAS_RID_ADMINS }
#define SID_USERS { { SID_REVISION, 2, SECURITY_NT_AUTHORITY, { SECURITY_BUILTIN_DOMAIN_RID } }, DOMAIN_ALIAS_RID_USERS }
#define SID_AUTHENTICATED_USERS { SID_REVISION, 1, SECURITY_NT_AUTHORITY, { SECURITY_AUTHENTICATED_USER_RID } }
#define SID_LOCAL_SERVICE { SID_REVISION, 1, SECURITY_NT_AUTHORITY, { SECURITY_LOCAL_SERVICE_RID } }
#define SID_NETWORK_SERVICE { SID_REVISION, 1, SECURITY_NT_AUTHORITY, { SECURITY_NETWORK_SERVICE_RID } }
#define SID_TRUSTED_INSTALLER { SID_REVISION, SECURITY_SERVICE_ID_RID_COUNT, SECURITY_NT_AUTHORITY, { SECURITY_SERVICE_ID_BASE_RID }, SECURITY_TRUSTED_INSTALLER_RID1, SECURITY_TRUSTED_INSTALLER_RID2, SECURITY_TRUSTED_INSTALLER_RID3, SECURITY_TRUSTED_INSTALLER_RID4, SECURITY_TRUSTED_INSTALLER_RID5 }
#define SID_LOCAL { SID_REVISION, 1, SECURITY_LOCAL_SID_AUTHORITY, { SECURITY_LOCAL_RID } }
#define SID_INTERACTIVE { SID_REVISION, 1, SECURITY_NT_AUTHORITY, { SECURITY_INTERACTIVE_RID } }
#define SID_MANDATORY_UNTRUSTED { SID_REVISION, 1, SECURITY_MANDATORY_LABEL_AUTHORITY, { SECURITY_MANDATORY_UNTRUSTED_RID } }
#define SID_MANDATORY_LOW { SID_REVISION, 1, SECURITY_MANDATORY_LABEL_AUTHORITY, { SECURITY_MANDATORY_LOW_RID } }
#define SID_MANDATORY_MEDIUM { SID_REVISION, 1, SECURITY_MANDATORY_LABEL_AUTHORITY, { SECURITY_MANDATORY_MEDIUM_RID } }
#define SID_MANDATORY_HIGH { SID_REVISION, 1, SECURITY_MANDATORY_LABEL_AUTHORITY, { SECURITY_MANDATORY_HIGH_RID } }
#define SID_MANDATORY_SYSTEM { SID_REVISION, 1, SECURITY_MANDATORY_LABEL_AUTHORITY, { SECURITY_MANDATORY_SYSTEM_RID } }

/* Addendum */
#define SID_LOCAL_ACCOUNT { SID_REVISION, 1, SECURITY_NT_AUTHORITY, { SECURITY_LOCAL_ACCOUNT_RID } }
#define SID_LOCAL_ACCOUNT_AND_ADMIN { SID_REVISION, 1, SECURITY_NT_AUTHORITY, { SECURITY_LOCAL_ACCOUNT_AND_ADMIN_RID } }
#define SID_LOCAL_LOGON { SID_REVISION, 1, SECURITY_LOCAL_SID_AUTHORITY, { SECURITY_LOCAL_LOGON_RID } }
#define SID_NTLM { {SID_REVISION, SECURITY_PACKAGE_RID_COUNT, SECURITY_NT_AUTHORITY, { SECURITY_PACKAGE_BASE_RID }}, SECURITY_PACKAGE_NTLM_RID }
#define SID_THIS_ORGANIZATION { SID_REVISION, 1, SECURITY_NT_AUTHORITY, { SECURITY_THIS_ORGANIZATION_RID } }
#define SID_MANDATORY_MEDIUM_PLUS { SID_REVISION, 1, SECURITY_MANDATORY_LABEL_AUTHORITY, { SECURITY_MANDATORY_MEDIUM_PLUS_RID } }
#define SID_MANDATORY_PROTECTED_PROCESS { SID_REVISION, 1, SECURITY_MANDATORY_LABEL_AUTHORITY, { SECURITY_MANDATORY_PROTECTED_PROCESS_RID } }

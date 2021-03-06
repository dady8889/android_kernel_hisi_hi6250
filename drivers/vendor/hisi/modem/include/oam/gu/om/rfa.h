



#ifndef __RFA_H__
#define __RFA_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "vos.h"
#include "NVIM_Interface.h"

#pragma pack(4)

/*****************************************************************************
  2 宏定义
*****************************************************************************/



/*每张CQI表的长度*/
#define RFA_CQI_TABLE_LENGTH                2160

/*CQI表的总长度*/
#define RFA_CQI_TOTAL_LENGTH                (13*1024)
/*****************************************************************************
  3 枚举定义
*****************************************************************************/


/*****************************************************************************
  4 全局变量声明
*****************************************************************************/

/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/

/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/

/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/

extern VOS_UINT32 RFA_MsgProc(MsgBlock *pMsg);
extern VOS_UINT32 WuepsRfaPidInit ( enum VOS_INIT_PHASE_DEFINE ip );

#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of RFA.h */

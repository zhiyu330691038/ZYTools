//
//  ZYPrintHanle.m
//  LogPrintHanle
//
//  Created by Zhi Kuiyu on 15/2/3.
//  Copyright (c) 2015年 Zhi Kuiyu. All rights reserved.
//

#import <Foundation/Foundation.h>

#define XCODE_COLORS_ESCAPE @"\033["

#define XCODE_COLORS_RESET_FG  XCODE_COLORS_ESCAPE @"fg;" // Clear any foreground color
#define XCODE_COLORS_RESET_BG  XCODE_COLORS_ESCAPE @"bg;" // Clear any background color
#define XCODE_COLORS_RESET     XCODE_COLORS_ESCAPE @";"   // Clear any foreground or background color



//  用于打印log
#ifdef DEBUG
#       define LogError(frmt, ...) NSLog((XCODE_COLORS_ESCAPE @"fg255,0,0;"   @"\nerror  L:%d M:%@  \nData   "          frmt XCODE_COLORS_RESET), __LINE__,NSStringFromSelector(_cmd),##__VA_ARGS__)
#       define LogWarm(frmt, ...) NSLog((XCODE_COLORS_ESCAPE @"fg144,31,255;"   @"\nwarm   L:%d M:%@  \nData   " frmt XCODE_COLORS_RESET), __LINE__,NSStringFromSelector(_cmd),##__VA_ARGS__)
#       define LogMark(frmt, ...) NSLog((XCODE_COLORS_ESCAPE @"fg51,102,153;"   @"\nmark   L:%d M:%@  \nData   " frmt XCODE_COLORS_RESET), __LINE__,NSStringFromSelector(_cmd),##__VA_ARGS__)

#else
#       define LogError(frmt, ...)
#       define LogWarm(frmt, ...) 
#       define LogMark(frmt, ...)

#endif


//
//  AceJump.h
//  AceJump
//
//  Created by Superbil on 2015/5/13.
//  Copyright (c) 2015 Superbil. All rights reserved.
//

#import <AppKit/AppKit.h>

@interface AceJump : NSObject

+ (instancetype)sharedPlugin;

@property (nonatomic, strong, readonly) NSBundle* bundle;
@end
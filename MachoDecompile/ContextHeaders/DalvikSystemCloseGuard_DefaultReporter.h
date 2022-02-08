// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef DALVIKSYSTEMCLOSEGUARD_DEFAULTREPORTER_H
#define DALVIKSYSTEMCLOSEGUARD_DEFAULTREPORTER_H


#import <Foundation/Foundation.h>

#import "DalvikSystemCloseGuard_Reporter-Protocol.h"

@interface DalvikSystemCloseGuard_DefaultReporter : NSObject <DalvikSystemCloseGuard_Reporter>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)reportWithNSString:(id)arg0 withJavaLangThrowable:(id)arg1 ;
-(id)init;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif